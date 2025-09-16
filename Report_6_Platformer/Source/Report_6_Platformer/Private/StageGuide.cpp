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

	// MyGameInstance ���� �������� -> NewMyGameInstance�� ����
	MyGameInstanceRef = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (MyGameInstanceRef)
	{
		// ���� ���� �� �� �� ���ü� ������Ʈ
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

		/// �Ⱥ��̰� �ҰŸ� �׳� �׿��� �޸𸮿��� ���ش�
		if (!bIsVisible)
			Destroy();
	}
}

