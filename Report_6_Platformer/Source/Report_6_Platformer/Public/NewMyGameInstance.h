// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NewMyGameInstance.generated.h"

/**
 *
 */
UCLASS()
class REPORT_6_PLATFORMER_API UNewMyGameInstance : public UGameInstance
{
    GENERATED_BODY()
public:
    UNewMyGameInstance();
    ~UNewMyGameInstance();

    UFUNCTION(BlueprintCallable, Category = "Game Data")
    void SetCurrentStage(int32 NewStage);

    UFUNCTION(BlueprintPure, Category = "Game Data")
    int32 GetCurrentStage() const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game Data")
    int32 CurrentStage = 0;
};
