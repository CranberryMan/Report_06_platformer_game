// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrapSphere.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ATrapSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrapSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	// virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ATrapSphere_Settings")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ATrapSphere_Settings")
	TSubclassOf<class ACharacter> myCharacter;

	UPROPERTY(EditAnywhere, Category = "ATrapSphere_Settings")
	float HitPower = 5000.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ATrapSphere_Settings")
	class USphereComponent* CollisionSphere;

	UPROPERTY(EditAnywhere, Category = "ATrapSphere_Settings")
	float MyRadius = 55.f;
};
