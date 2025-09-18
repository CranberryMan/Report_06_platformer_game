// Fill out your copyright notice in the Description page of Project Settings.


#include "FootSwitch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFootSwitch::AFootSwitch()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;


    TransferVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferVolume"));
    SetRootComponent(TransferVolume);
    TransferVolume->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
    StaticMeshComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AFootSwitch::BeginPlay()
{
    Super::BeginPlay();

    OriginalLocation = GetActorLocation();
    TargetLocation = OriginalLocation - FVector(0.f, 0.f, MaxMoveDistance);

    // 특정 오브젝트 일단 안보이게하기
    if (TargetActorToShow)
    {
        TargetActorToShow->SetActorHiddenInGame(true);
        TargetActorToShow->SetActorEnableCollision(false);
    }
}

// Called every frame
void AFootSwitch::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 목표 위치를 향해 발판을 이동시킵니다.
    // FMath::VInterpTo 함수는 현재 위치에서 목표 위치까지 부드럽게 보간합니다.
    FVector Target = bIsMovingDown ? TargetLocation : OriginalLocation;
    FVector CurrentLocation = GetActorLocation();

    if (CurrentLocation != Target)
    {
        SetActorLocation(FMath::VInterpTo(CurrentLocation, Target, DeltaTime, MoveSpeed));
    }

}


void AFootSwitch::NotifyActorBeginOverlap(AActor* OtherActor)
{
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        // 발판이 아래로 내려가도록 상태를 설정합니다.
        bIsMovingDown = true;
        if (OnFootstepSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, OnFootstepSound, GetActorLocation());
        }

        // 특정 오브젝트 보이게 하기
        if (TargetActorToShow)
        {
            // SetActorHiddenInGame(false)는 액터를 보이게 만듭니다.
            TargetActorToShow->SetActorHiddenInGame(false);

            // SetActorEnableCollision(true)는 충돌을 활성화합니다.
            TargetActorToShow->SetActorEnableCollision(true);
        }

        if (TargetActorToDelete)
        {
            TargetActorToDelete->Destroy(); // 그냥 편하게 삭제하는걸로
        }
        if (TargetActorToDelete1)
        {
            TargetActorToDelete1->Destroy(); // 그냥 편하게 삭제하는걸로
        }
        if (TargetActorToDelete2)
        {
            TargetActorToDelete2->Destroy(); // 그냥 편하게 삭제하는걸로
        }
    }
}

void AFootSwitch::NotifyActorEndOverlap(AActor* OtherActor)
{

    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        // 발판이 아래로 내려가도록 상태를 설정합니다.
        bIsMovingDown = false;
        if (OffFootstepSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, OffFootstepSound, GetActorLocation());
        }
    }
}
