// Fill out your copyright notice in the Description page of Project Settings.


#include "NewMoveStageWidget.h"
#include "Components/TextBlock.h"


void UNewMoveStageWidget::SetStageName(const FString& StageName)
{
    if (IsValid(StageNameTextBlock))
    {
        StageNameTextBlock->SetText(FText::FromString(StageName));
    }
}

void UNewMoveStageWidget::StartFadeOut()
{

    if (GetWorld()->GetTimerManager().IsTimerActive(FadeOutTimer))
    {
        return;
    }

    StartRenderOpacity = 1.f;

    UE_LOG(LogTemp, Warning, TEXT("StartRenderOpacity: %f"), StartRenderOpacity);
    // 0.01초마다 FadeOutTick 함수 호출
    GetWorld()->GetTimerManager().SetTimer(
        FadeOutTimer,
        this,
        &UNewMoveStageWidget::FadeOutTick,
        0.1f, // 반복 주기
        true // 반복
    );
}

void UNewMoveStageWidget::FadeOutTick()
{
    float ElapsedTime = GetWorld()->GetTimerManager().GetTimerElapsed(FadeOutTimer);
    float CurrentOpacity = FMath::Lerp(StartRenderOpacity, 0.0f, ElapsedTime / FadeOutDuration);

    StartRenderOpacity = CurrentOpacity;
    SetRenderOpacity(CurrentOpacity);
    if (CurrentOpacity <= 0.1f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Widget FadeOut Complete"));

        GetWorld()->GetTimerManager().ClearTimer(FadeOutTimer);
        RemoveFromParent();
    }
}