// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomLeftRight.h"

// Sets default values
ARandomLeftRight::ARandomLeftRight()
{
	PrimaryActorTick.bCanEverTick = false;

	bIsLeft = (FMath::RandRange(0, 1) == 0);
	/// ������ ������� ������ �˾ƾ� �Ǵϱ�...
	UE_LOG(LogTemp, Warning, TEXT("bIsLeft: %s"), bIsLeft ? TEXT("true") : TEXT("false"));

	// ������ �޾ư� ������ ��� �÷��̿��� ������ �޾ư��´� ��� �� �� ���� �����ڿ��� �����Ѵ�

}

// Called when the game starts or when spawned
void ARandomLeftRight::BeginPlay()
{
	Super::BeginPlay();
	
}

