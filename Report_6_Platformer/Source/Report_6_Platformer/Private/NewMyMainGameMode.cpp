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
    // ���� �ν��Ͻ� ��������
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

            // 1�� �Ŀ� StartFadeOut �Լ� ȣ��
            FTimerHandle FadeOutStartTimer;
            GetWorld()->GetTimerManager().SetTimer(
                FadeOutStartTimer,
                MoveStageWidget,
                &UNewMoveStageWidget::StartFadeOut,
                1.0f, // 1�� ��
                false // �ݺ����� ����
            );
        }
    }
}