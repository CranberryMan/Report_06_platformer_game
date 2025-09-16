// Fill 

#include "NewMyMainGameMode.h"
#include "Blueprint/UserWidget.h"
#include "NewMoveStageWidget.h"
#include "NewMyGameInstance.h"
#include "Kismet/GameplayStatics.h"


ANewMyMainGameMode::ANewMyMainGameMode(const FObjectInitializer& ObjectInitializer)
{
    MyGameInstance = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

}

ANewMyMainGameMode::~ANewMyMainGameMode()
{
}

void ANewMyMainGameMode::BeginPlay()
{
    Super::BeginPlay();
    // 게임 인스턴스 가져오기
    if (!IsValid(MyGameInstance))
    {
        return;
    }

    SetNowStage(MyGameInstance->GetCurrentStage());
}

void ANewMyMainGameMode::SetNowStage(int32 NewStage)
{
    FString StageName;
    if (NewStage <= 0)
    {
        StageName = FString::Printf(TEXT("WELCOME"));
    }
    else
    {
        StageName = FString::Printf(TEXT("STAGE %d"), NewStage);
    }
    ShowFadeOutWidget(StageName);
}


void ANewMyMainGameMode::ShowFadeOutWidget(const FString& StageName)
{
    if (IsValid(WidgetClass))
    {
        MoveStageWidget = CreateWidget<UNewMoveStageWidget>(GetWorld(), WidgetClass);
        MoveStageWidget->SetStageName(StageName);
        if (MoveStageWidget)
        {
            MoveStageWidget->AddToViewport();

            // 1초 후에 StartFadeOut 함수 호출
            FTimerHandle FadeOutStartTimer;
            GetWorld()->GetTimerManager().SetTimer(
                FadeOutStartTimer,
                MoveStageWidget,
                &UNewMoveStageWidget::StartFadeOut,
                1.0f, // 1초 뒤
                false // 반복하지 않음
            );
        }
    }
}