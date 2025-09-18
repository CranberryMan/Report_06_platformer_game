// Fill out your copyright notice in the Description page of Project Settings.


#include "Random_Platform_Spawner.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ARandom_Platform_Spawner::ARandom_Platform_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// �⺻�� ����
	NumberOfActorsToSpawn = 1;
	XRange = 500.0f;
	YRange = 500.0f;
}

// Called when the game starts or when spawned
void ARandom_Platform_Spawner::BeginPlay()
{
	Super::BeginPlay();

	// ���� Ŭ������ ��ȿ���� Ȯ��
	if (!ActorToSpawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("ActorToSpawn is not set!"));
		return;
	}

	// ������ ������ ������ŭ ����
	for (int32 i = 0; i < NumberOfActorsToSpawn; ++i)
	{
		// ������ x, y ��ǥ ���
		// �ϰ����� ���� �ڱ� �ּҰ��� 0���� ����
		// �̰� -���� ����ϸ� ���� �հ� �����Ǵ� ���̽��� �ʹ� ���Ƽ� ������...
		float RandX = FMath::RandRange(0.f, XRange);
		/// y��(�¿�)�� -����ϴ°� ����� ���Ѱ� ����!!!
		float RandY = FMath::RandRange(-YRange, YRange);
		UE_LOG(LogTemp, Warning, TEXT("RandX: %f, RandY: %f"), RandX, RandY);
		// ������ ������ ��ġ�� �������� ���� ��ġ ���
		FVector SpawnLocation = GetActorLocation() + FVector(RandX, RandY, 0.0f);

		// ���� �Ű����� ����
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// ���� ����
		GetWorld()->SpawnActor<AActor>(ActorToSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
	}
	
}
