// Fill out your copyright notice in the Description page of Project Settings.


#include "StartUI.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"

void UStartUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (!IsValid(GetWorld()))
	{
		return;
	}
	if (!IsValid(GetWorld()->GetFirstPlayerController()))
	{
		return;
	}

	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	if(IsValid(StartButton))
	{
		StartButton->OnClicked.AddDynamic(this, &UStartUI::OnGameStart);
	}
	if (IsValid(Exit))
	{
		Exit->OnClicked.AddDynamic(this, &UStartUI::OnExit);
	}

}

void UStartUI::OnGameStart()
{

	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);
	UGameplayStatics::OpenLevel(this, FName("mainLevel"));
	
}
void UStartUI::OnExit()
{

	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}
