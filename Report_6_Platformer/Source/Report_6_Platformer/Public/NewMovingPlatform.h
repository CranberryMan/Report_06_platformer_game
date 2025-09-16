
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NewMovingPlatform.generated.h"

UCLASS()
class REPORT_6_PLATFORMER_API ANewMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANewMovingPlatform();

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
	FVector MoveDirection = FVector(1.f, 0.f, 0.f); // 기본값 X축 이동

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MaxMoveDistance = 300.f; // 기본값 3미터 이동

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed = 50.f;


	FVector StartLocation;
};
