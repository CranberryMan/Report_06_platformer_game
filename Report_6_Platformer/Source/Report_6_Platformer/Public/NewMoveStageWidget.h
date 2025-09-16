#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NewMoveStageWidget.generated.h"

/**
 *
 */
UCLASS()
class REPORT_6_PLATFORMER_API UNewMoveStageWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UTextBlock> StageNameTextBlock;


	void SetStageName(const FString& StageName);
	void StartFadeOut();
	void FadeOutTick();


protected:
	float FadeOutDuration = 1.0f; // 페이드아웃에 걸릴 시간 (2초)
	FTimerHandle FadeOutTimer;
	float StartRenderOpacity;
};
