// Fill out your copyright notice in the Description page of Project Settings.


#include "NewMovingPlatform.h"

// Sets default values
ANewMovingPlatform::ANewMovingPlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
}

// Called when the game starts or when spawned
void ANewMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();

}

// Called every frame
void ANewMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector CurrentLocation = GetActorLocation();
	FVector MoveOffset = MoveDirection.GetSafeNormal() * MoveSpeed * DeltaTime;
	CurrentLocation += MoveOffset;
	float MovedDistance = FVector::Dist(StartLocation, CurrentLocation);
	if (MovedDistance >= MaxMoveDistance)
	{
		// �̵� ���� ����
		MoveDirection *= -1.f;
		// ��Ȯ�� ��ġ ����
		// CurrentLocation = StartLocation + MoveDirection.GetSafeNormal() * MaxMoveDistance;
		StartLocation = CurrentLocation; // ���ο� ���� ��ġ ����
	}
	SetActorLocation(CurrentLocation);
}


