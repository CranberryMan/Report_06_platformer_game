// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomLeftRight.h"

// Sets default values
ARandomLeftRight::ARandomLeftRight()
{
	PrimaryActorTick.bCanEverTick = false;

	bIsLeft = (FMath::RandRange(0, 1) == 0);
	/// 디버깅용 어느쪽이 답인진 알아야 되니까...
	UE_LOG(LogTemp, Warning, TEXT("bIsLeft: %s"), bIsLeft ? TEXT("true") : TEXT("false"));

	// 정답을 받아갈 발판이 비긴 플레이에서 정답을 받아갈태니 얘는 좀 더 빨리 생성자에서 생성한다

}

// Called when the game starts or when spawned
void ARandomLeftRight::BeginPlay()
{
	Super::BeginPlay();
	
}

