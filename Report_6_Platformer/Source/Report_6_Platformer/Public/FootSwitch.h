// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "FootSwitch.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API AFootSwitch : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFootSwitch();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	TSubclassOf<class ACharacter> myCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	UStaticMeshComponent* StaticMeshComponent;


	UPROPERTY()
	class UBoxComponent* TransferVolume;

	UPROPERTY()
	bool PlayerOn = false;

	// ������ ���� ��ġ
	FVector OriginalLocation;

	// ��ǥ ��ġ (������ ����)
	FVector TargetLocation;

	// ������ �̵� �ӵ� (cm/s)
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 5.f;

	// ������ �̵� �Ÿ� (cm)
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxMoveDistance = 15.f;

	// ������ �������� ������ ����
	bool bIsMovingDown = false;

	// ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	class USoundBase* OnFootstepSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	class USoundBase* OffFootstepSound;

	// ���� ������ Show�� �ٸ� Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToShow;

	// ���� ������ Delete�� �ٸ� Actor
	/// ����� ���� ������ ���Ͱ� ���� �þ��... ó������ TArray�� �߾�� �ϳ�???
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete2;

	
};
