// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FootSwitch.h"
#include "FootSwitch_RandomOpen.generated.h"

/**
 * 
 */
UCLASS()
class REPORT_6_PLATFORMER_API AFootSwitch_RandomOpen : public AFootSwitch
{
	GENERATED_BODY()

public :
	AFootSwitch_RandomOpen();
	void BeginPlay() override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Random_FootSwitch")
	AActor* RandomGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Random_FootSwitch")
	FString LEFT_RIGHT;


	
};
