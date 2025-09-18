// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Random_Platform_Spawner.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ARandom_Platform_Spawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandom_Platform_Spawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// 스폰할 액터 클래스
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	// 스폰할 액터의 총 개수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning", meta = (ClampMin = "1"))
	int32 NumberOfActorsToSpawn;

	// 스폰될 x, y 범위 (스폰 지점으로부터 +-x, +-y)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float XRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float YRange;

};
