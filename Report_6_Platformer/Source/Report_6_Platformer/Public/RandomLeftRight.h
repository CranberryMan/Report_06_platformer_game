// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomLeftRight.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ARandomLeftRight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomLeftRight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	bool getIsLeft() const { return bIsLeft; }

protected:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ATrapSphere_Settings")
	//TSubclassOf<class AActor> ;

private:
	bool bIsLeft = false;
};
