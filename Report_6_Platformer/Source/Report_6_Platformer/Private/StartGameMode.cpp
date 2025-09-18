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

	    // 게임 인스턴스 가져오기
    if (!IsValid(MyGameInstance))
    {
        return;
    }
	
	// 게임 시작시 스테이지는 1로 고정
	// 만약 엔딩이후 다시 스타트 UI로 돌아올 때를 대비 1로 다시 고정
	MyGameInstance->SetCurrentStage(1);
	UE_LOG(LogTemp, Warning, TEXT("Set Current Stage to 1"));

	StartUI = CreateWidget<UStartUI>(GetWorld(), StartUIClass);
	if (StartUI)
	{
		UE_LOG(LogTemp, Warning, TEXT("Set Current Stage to 21"));
		StartUI->AddToViewport();
	}
}
