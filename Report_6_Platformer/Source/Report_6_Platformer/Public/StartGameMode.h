// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StartGameMode.generated.h"

/**
 * 
 */
UCLASS()
class REPORT_6_PLATFORMER_API AStartGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AStartGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> StartUIClass;

	UPROPERTY()
	class UStartUI* StartUI;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UNewMyGameInstance> MyGameInstance;
};
