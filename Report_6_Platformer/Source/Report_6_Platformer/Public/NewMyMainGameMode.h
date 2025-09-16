// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NewMyMainGameMode.generated.h"


UCLASS()
class REPORT_6_PLATFORMER_API ANewMyMainGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	ANewMyMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual ~ANewMyMainGameMode();
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WidgetClass;

	UPROPERTY()
	class UNewMoveStageWidget* MoveStageWidget;

	void SetNowStage(int32 NewStage);

	UFUNCTION()
	void ShowFadeOutWidget(const FString& StageName);

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UNewMyGameInstance> MyGameInstance;

};
