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
	if (TargetCharacter && TargetCharacter->IsA(myCharacter)) // �̷����ϸ� ĳ���� �������Ʈ�� ���� ������� �� �����
	{
		UE_LOG(LogTemp, Warning, TEXT("Restart Level!"));
		/// ���� ���� �̸��� �޾ƿͼ� �ٽ� �����Ѵ�
		FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true);
		UGameplayStatics::OpenLevel(this, FName(*CurrentLevelName));
	}
}
