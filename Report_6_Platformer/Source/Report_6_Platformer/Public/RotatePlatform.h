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
	FRotator RotateDirection = FRotator(0.f, 1.f, 0.f); // �⺻�� x��
	// z�� ȸ���ϸ� �������ó�� �ȴ� ����~

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	//float MaxMoveDistance = 300.f; // �⺻�� 3���� �̵�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed = 50.f;

};
