// Fill out your copyright notice in the Description page of Project Settings.


#include "NewMyGameInstance.h"

UNewMyGameInstance::UNewMyGameInstance()
{
    UE_LOG(LogTemp, Warning, TEXT("MyGameInstance Constructor"));
}

UNewMyGameInstance::~UNewMyGameInstance()
{
}

void UNewMyGameInstance::SetCurrentStage(int32 NewStage)
{
    CurrentStage = NewStage;
}

int32 UNewMyGameInstance::GetCurrentStage() const
{
    return CurrentStage;
}