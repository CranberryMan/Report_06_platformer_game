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

    // Ư�� ������Ʈ ���̰� �ϱ�
    if (TargetActor)
    {
        // SetActorHiddenInGame(false)�� ���͸� ���̰� ����ϴ�.
        TargetActor->SetActorHiddenInGame(true);

        // SetActorEnableCollision(true)�� �浹�� Ȱ��ȭ�մϴ�.
        TargetActor->SetActorEnableCollision(false);
    }
}

// Called every frame
void AFootSwitch::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ��ǥ ��ġ�� ���� ������ �̵���ŵ�ϴ�.
    // FMath::VInterpTo �Լ��� ���� ��ġ���� ��ǥ ��ġ���� �ε巴�� �����մϴ�.
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
        // ������ �Ʒ��� ���������� ���¸� �����մϴ�.
        bIsMovingDown = true;
        if (OnFootstepSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, OnFootstepSound, GetActorLocation());
        }

        // Ư�� ������Ʈ ���̰� �ϱ�
        if (TargetActor)
        {
            // SetActorHiddenInGame(false)�� ���͸� ���̰� ����ϴ�.
            TargetActor->SetActorHiddenInGame(false);

            // SetActorEnableCollision(true)�� �浹�� Ȱ��ȭ�մϴ�.
            TargetActor->SetActorEnableCollision(true);
        }
    }
}

void AFootSwitch::NotifyActorEndOverlap(AActor* OtherActor)
{

    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        // ������ �Ʒ��� ���������� ���¸� �����մϴ�.
        bIsMovingDown = false;
        if (OffFootstepSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, OffFootstepSound, GetActorLocation());
        }
    }
}
