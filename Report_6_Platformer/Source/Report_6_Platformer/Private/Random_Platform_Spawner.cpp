// Fill out your copyright notice in the Description page of Project Settings.


#include "Random_Platform_Spawner.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ARandom_Platform_Spawner::ARandom_Platform_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// 기본값 설정
	NumberOfActorsToSpawn = 1;
	XRange = 500.0f;
	YRange = 500.0f;
}

// Called when the game starts or when spawned
void ARandom_Platform_Spawner::BeginPlay()
{
	Super::BeginPlay();

	// 액터 클래스가 유효한지 확인
	if (!ActorToSpawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("ActorToSpawn is not set!"));
		return;
	}

	// 스폰할 액터의 개수만큼 루프
	for (int32 i = 0; i < NumberOfActorsToSpawn; ++i)
	{
		// 랜덤한 x, y 좌표 계산
		// 일관성을 위해 자기 최소값을 0으로 고정
		// 이거 -까지 고려하면 벽을 뚫고 생성되는 케이스가 너무 많아서 귀찮다...
		float RandX = FMath::RandRange(0.f, XRange);
		/// y값(좌우)는 -고려하는게 만들기 편한것 같다!!!
		float RandY = FMath::RandRange(-YRange, YRange);
		UE_LOG(LogTemp, Warning, TEXT("RandX: %f, RandY: %f"), RandX, RandY);
		// 스포너 액터의 위치를 기준으로 랜덤 위치 계산
		FVector SpawnLocation = GetActorLocation() + FVector(RandX, RandY, 0.0f);

		// 스폰 매개변수 설정
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// 액터 스폰
		GetWorld()->SpawnActor<AActor>(ActorToSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
	}
	
}
