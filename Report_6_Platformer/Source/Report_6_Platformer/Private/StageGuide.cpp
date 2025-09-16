// Fill out your copyright notice in the Description page of Project Settings.


#include "StageGuide.h"
#include "Components/StaticMeshComponent.h"
#include "NewMyGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStageGuide::AStageGuide()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
}

// Called when the game starts or when spawned
void AStageGuide::BeginPlay()
{
	Super::BeginPlay();

	// MyGameInstance 참조 가져오기 -> NewMyGameInstance로 개선
	MyGameInstanceRef = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (MyGameInstanceRef)
	{
		// 게임 시작 시 한 번 가시성 업데이트
		UpdateArrowVisibility();
	}

}

void AStageGuide::UpdateArrowVisibility()
{
	if (MyGameInstanceRef)
	{
		int32 CurrentStage = MyGameInstanceRef->GetCurrentStage();
		bool bIsVisible = (CurrentStage == showStage);

		if (IsValid(StaticMeshComponent))
		{
			StaticMeshComponent->SetVisibility(bIsVisible);
		}

		/// 안보이게 할거면 그냥 죽여서 메모리에서 없앤다
		if (!bIsVisible)
			Destroy();
	}
}

