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
	StaticMeshComponent->SetWorldScale3D(FVector(2.5f)); // 2.5��ũ��
	StaticMeshComponent->SetSimulatePhysics(true); 
    StaticMeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	StaticMeshComponent->SetMassOverrideInKg(NAME_None, 1000.0f, true);
	SetRootComponent(StaticMeshComponent);

	/// �ܼ� ����ƽ �޽��� �ݸ��� / ��Ʈ �̺�Ʈ�δ� �����ͼ� �ڵ����� ĳ���͸� ƨ�ܳ��ٴ� �̺�Ʈ�� �ȵǱ� ������
	// (�÷��̾ ���� �޷����� �ε����� �Ǳ� �ϴµ�...)
	// �ݸ��� ���Ǿ��� �浹 ��� ���Ǿ ���� ���� �갡 ĳ���Ϳ� �������� ƨ�ܳ��� �̺�Ʈ�� �߻���Ű���� �Ѵ�.
	// �׷��� �� ũ��� �׻� ����ƽ �޽����� ��¦ ũ�� MyRadius�� �����ذ��鼭 �����Ѵ�.
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
		// ƨ�ܳ� ���� = ���Ǿ��� ��ġ���� ĳ������ ��ġ�� �� ����
		FVector LaunchDirection = OtherActor->GetActorLocation() - GetActorLocation();
		LaunchDirection.Normalize();

		// �Ʒ��� ƨ�ܳ����°� ���� ������ �ϴ÷� �������
		if (LaunchDirection.Z < 0)
		{
			LaunchDirection.Z = FMath::Abs(LaunchDirection.Z);
		}
		// ���������� �ϴ÷� ������ ���� z�࿡ 1.0 �߰�
		LaunchDirection += FVector(0.0f, 0.0f, 1.0f);
		LaunchDirection.Normalize();

		// �߻�~
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
//			// ƨ�ܳ� ���� ���
//			FVector LaunchDirection = TargetCharacter->GetActorLocation() - HitLocation;
//			LaunchDirection.Normalize();
//			LaunchDirection += FVector(0.0f, 0.0f, 1.0f); // ���������� �ϴ÷� �÷������� ���� z�࿡ 1.0 �߰�
//			LaunchDirection.Normalize();
//			
//			// z�� ������ �����̸� ����� ���� (�Ʒ��� ƨ�ܳ����� ���� ����)
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