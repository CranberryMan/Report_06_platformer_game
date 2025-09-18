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

	// 발판의 원본 위치
	FVector OriginalLocation;

	// 목표 위치 (내려간 상태)
	FVector TargetLocation;

	// 발판의 이동 속도 (cm/s)
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 5.f;

	// 발판의 이동 거리 (cm)
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxMoveDistance = 15.f;

	// 발판이 내려가는 중인지 여부
	bool bIsMovingDown = false;

	// 발판 사운드
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	class USoundBase* OnFootstepSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	class USoundBase* OffFootstepSound;

	// 발판 밟으면 Show할 다른 Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToShow;

	// 발판 밟으면 Delete할 다른 Actor
	/// 만들다 보니 삭제할 액터가 점점 늘어난다... 처음부터 TArray로 했어야 하나???
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* TargetActorToDelete2;

	
};
