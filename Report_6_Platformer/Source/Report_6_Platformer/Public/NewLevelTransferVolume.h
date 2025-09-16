// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "NewLevelTransferVolume.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ANewLevelTransferVolume : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANewLevelTransferVolume();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	TSubclassOf<class ACharacter> myCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FString TransferLevelName;

	UPROPERTY()
	class UBoxComponent* TransferVolume;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int32 StageIndex = 0;

	UPROPERTY(EditAnywhere, Category = "Stage")
	int32 showStage = 0;

	UPROPERTY()
	class UNewMyGameInstance* MyGameInstanceRef;

	void UpdateVisibility();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UNiagaraComponent* NiagaraEffectComponent;
};
