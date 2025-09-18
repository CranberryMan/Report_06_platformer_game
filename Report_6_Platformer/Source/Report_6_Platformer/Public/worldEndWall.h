// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "worldEndWall.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API AworldEndWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AworldEndWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


protected:
	UPROPERTY(VisibleAnywhere, Category = "WALL_COMPONENTS")
	class UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere, Category = "ATrapSphere_Settings")
	TSubclassOf<class ACharacter> myCharacter;
};
