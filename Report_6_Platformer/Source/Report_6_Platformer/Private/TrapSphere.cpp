// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapSphere.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"

// Sets default values
ATrapSphere::ATrapSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
	StaticMeshComponent->SetWorldScale3D(FVector(2.5f)); // 2.5배크게
	StaticMeshComponent->SetSimulatePhysics(true); 
    StaticMeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	StaticMeshComponent->SetMassOverrideInKg(NAME_None, 1000.0f, true);
	SetRootComponent(StaticMeshComponent);

	/// 단순 스태틱 메쉬의 콜리전 / 히트 이벤트로는 굴러와서 자동으로 캐릭터를 튕겨낸다는 이벤트가 안되기 때문에
	// (플레이어가 직접 달려가서 부딪히면 되긴 하는데...)
	// 콜리전 스피어라는 충돌 담당 스피어를 따로 만들어서 얘가 캐릭터와 겹쳐지면 튕겨내는 이벤트를 발생시키도록 한다.
	// 그래서 얘 크기는 항상 스태틱 메쉬보다 살짝 크게 MyRadius를 조절해가면서 설정한다.
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionSphere->SetupAttachment(StaticMeshComponent);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	CollisionSphere->SetSphereRadius(MyRadius);
}

// Called when the game starts or when spawned
void ATrapSphere::BeginPlay()
{
	Super::BeginPlay();		
}

void ATrapSphere::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ACharacter* TargetCharacter = Cast<ACharacter>(OtherActor);
	if (TargetCharacter && TargetCharacter->IsA(myCharacter))
	{
		// 튕겨낼 방향 = 스피어의 위치에서 캐릭터의 위치를 뺀 벡터
		FVector LaunchDirection = OtherActor->GetActorLocation() - GetActorLocation();
		LaunchDirection.Normalize();

		// 아래로 튕겨나가는걸 막고 무조건 하늘로 보내기용
		if (LaunchDirection.Z < 0)
		{
			LaunchDirection.Z = FMath::Abs(LaunchDirection.Z);
		}
		// 안정적으로 하늘로 보내기 위해 z축에 1.0 추가
		LaunchDirection += FVector(0.0f, 0.0f, 1.0f);
		LaunchDirection.Normalize();

		// 발사~
		TargetCharacter->LaunchCharacter(LaunchDirection * HitPower, true, true);
	}
}

//void ATrapSphere::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
//{
//	UE_LOG(LogTemp, Warning, TEXT("NotifyHit Call"));
//	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
//	if (Other && Other->IsA(myCharacter))
//	{
//		ACharacter* TargetCharacter = Cast<ACharacter>(Other);
//		
//		if (TargetCharacter)
//		{
//			// 튕겨낼 방향 계산
//			FVector LaunchDirection = TargetCharacter->GetActorLocation() - HitLocation;
//			LaunchDirection.Normalize();
//			LaunchDirection += FVector(0.0f, 0.0f, 1.0f); // 안정적으로 하늘로 올려보내기 위해 z축에 1.0 추가
//			LaunchDirection.Normalize();
//			
//			// z축 방향이 음수이면 양수로 변경 (아래로 튕겨나가는 것을 방지)
//			if (LaunchDirection.Z < 0)
//			{
//				LaunchDirection.Z = FMath::Abs(LaunchDirection.Z);
//			}
//
//			TargetCharacter->LaunchCharacter(LaunchDirection * HitPower, true, true);
//		}
//	}
//}

// Called every frame
void ATrapSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}