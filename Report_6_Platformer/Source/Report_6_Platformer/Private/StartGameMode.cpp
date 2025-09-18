// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"
#include "NewMyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "StartUI.h"

AStartGameMode::AStartGameMode(const FObjectInitializer& ObjectInitializer)
{
	if(IsValid(GetWorld()))
	{
		MyGameInstance = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	}

}

void AStartGameMode::BeginPlay()
{

	    // ���� �ν��Ͻ� ��������
    if (!IsValid(MyGameInstance))
    {
        return;
    }
	
	// ���� ���۽� ���������� 1�� ����
	// ���� �������� �ٽ� ��ŸƮ UI�� ���ƿ� ���� ��� 1�� �ٽ� ����
	MyGameInstance->SetCurrentStage(1);
	UE_LOG(LogTemp, Warning, TEXT("Set Current Stage to 1"));

	StartUI = CreateWidget<UStartUI>(GetWorld(), StartUIClass);
	if (StartUI)
	{
		UE_LOG(LogTemp, Warning, TEXT("Set Current Stage to 21"));
		StartUI->AddToViewport();
	}
}
