// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageGuide.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API AStageGuide : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStageGuide();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stage")
	int32 showStage = 0;

private:
	UPROPERTY()
	class UNewMyGameInstance* MyGameInstanceRef;

	// 가시성을 업데이트하는 함수
	void UpdateArrowVisibility();
};
