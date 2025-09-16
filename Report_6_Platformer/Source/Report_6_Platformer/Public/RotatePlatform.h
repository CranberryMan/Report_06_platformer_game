// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatePlatform.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ARotatePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FRotator RotateDirection = FRotator(0.f, 1.f, 0.f); // 기본값 x축
	// z축 회전하면 물레방아처럼 된다 참고~

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	//float MaxMoveDistance = 300.f; // 기본값 3미터 이동

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed = 50.f;

};
