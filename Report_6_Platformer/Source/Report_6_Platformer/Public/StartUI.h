// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartUI.generated.h"

/**
 * 
 */
UCLASS()
class REPORT_6_PLATFORMER_API UStartUI : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeOnInitialized() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> StartButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> Exit;

	UFUNCTION(BlueprintCallable)
	void OnGameStart();

	UFUNCTION(BlueprintCallable)
	void OnExit();
	
};
