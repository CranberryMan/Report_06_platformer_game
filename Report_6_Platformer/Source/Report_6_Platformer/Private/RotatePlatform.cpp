// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatePlatform.h"

// Sets default values
ARotatePlatform::ARotatePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
}

// Called when the game starts or when spawned
void ARotatePlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorRotation(GetActorRotation() + RotateDirection * MoveSpeed * DeltaTime);
}

