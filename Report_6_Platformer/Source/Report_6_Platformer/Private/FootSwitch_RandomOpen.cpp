// Fill out your copyright notice in the Description page of Project Settings.


#include "FootSwitch_RandomOpen.h"
#include "RandomLeftRight.h"
AFootSwitch_RandomOpen::AFootSwitch_RandomOpen()
{
}

void AFootSwitch_RandomOpen::BeginPlay()
{

	Super::BeginPlay();

	if (RandomGenerator)
	{
		ARandomLeftRight* getRan = Cast<ARandomLeftRight>(RandomGenerator);
		if (IsValid(getRan))
		{
			// ���� ����Ʈ�� ��
			if (LEFT_RIGHT == "RIGHT" && getRan->getIsLeft())
			{
				UE_LOG(LogTemp, Warning, TEXT("Correct is Left"));
				TargetActorToDelete = nullptr;
				//TargetActorToDelete1 = nullptr;
				//TargetActorToDelete2 = nullptr;
				// TargetActorToShow->Destroy(); // ������̸� �Ӹ� �� ������ ����
			}
			// ���� ����Ʈ�� ��
			else if (LEFT_RIGHT == "LEFT" && !getRan->getIsLeft())
			{
				UE_LOG(LogTemp, Warning, TEXT("Correct is Right"));
				TargetActorToDelete = nullptr;
				//TargetActorToDelete1 = nullptr;
				//TargetActorToDelete2 = nullptr;
				// TargetActorToShow->Destroy();
			}

			/// ���� �� on off
			if (LEFT_RIGHT == "RIGHT" && !getRan->getIsLeft())
			{
				TargetActorToDelete1 = nullptr;
			}
			if (LEFT_RIGHT == "LEFT" && getRan->getIsLeft())
			{
				TargetActorToDelete1 = nullptr;
			}
		}
	}
}