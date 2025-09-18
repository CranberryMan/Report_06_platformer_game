// Fill out your copyright notice in the Description page of Project Settings.


#include "worldEndWall.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include <Kismet/GameplayStatics.h>

AworldEndWall::AworldEndWall()
{
    PrimaryActorTick.bCanEverTick = false;
	    
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    SetRootComponent(TriggerBox);
    TriggerBox->SetCollisionProfileName(TEXT("OverlapAll"));
}

// Called when the game starts or when spawned
void AworldEndWall::BeginPlay()
{
	Super::BeginPlay();
	
}

void AworldEndWall::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ACharacter* TargetCharacter = Cast<ACharacter>(OtherActor);
	if (TargetCharacter && TargetCharacter->IsA(myCharacter)) // 이렇게하면 캐릭터 블루프린트가 뭐든 상관없이 다 적용됨
	{
		UE_LOG(LogTemp, Warning, TEXT("Restart Level!"));
		/// 현재 레벨 이름을 받아와서 다시 오픈한다
		FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true);
		UGameplayStatics::OpenLevel(this, FName(*CurrentLevelName));
	}
}
