// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.


#include "NewLevelTransferVolume.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
// #include "ABP_Character.h"
#include "NewMyGameInstance.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
ANewLevelTransferVolume::ANewLevelTransferVolume()
{
    PrimaryActorTick.bCanEverTick = false;

    TransferVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferVolume"));
    RootComponent = TransferVolume;

    TransferVolume->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

    NiagaraEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraEffectComponent"));
    NiagaraEffectComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ANewLevelTransferVolume::BeginPlay()
{
    Super::BeginPlay();
    // MyGameInstance 참조 가져오기 -> NewMyGameInstance로 개선
    MyGameInstanceRef = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

    if (MyGameInstanceRef)
    {
        // 게임 시작 시 한 번 가시성 업데이트
        UpdateVisibility();
    }

}

void ANewLevelTransferVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
    // 이 if문 안 씌우면 별에 별 잡것이 부딪혀도 레벨이 넘어간다;
    if (myCharacter.Get())
    {
        if (OtherActor && OtherActor->IsA(myCharacter))
        {
            // 이동~

            UNewMyGameInstance* MyGameInstance = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

            // 게임 인스턴스의 스테이지를 다음 레벨로 올린다
            if (IsValid(MyGameInstance))
            {
                MyGameInstance->SetCurrentStage(StageIndex);
            }

            UGameplayStatics::OpenLevel(GetWorld(), FName(TransferLevelName));

        }
    }
}

void ANewLevelTransferVolume::UpdateVisibility()
{
    if (MyGameInstanceRef)
    {
        int32 CurrentStage = MyGameInstanceRef->GetCurrentStage();
        bool bIsVisible = (CurrentStage == showStage);

        if (NiagaraEffectComponent)
        {
            NiagaraEffectComponent->SetVisibility(bIsVisible);
        }


        /// 안보이게 할거면 그냥 죽여서 메모리에서 없앤다
        if (!bIsVisible)
            Destroy();
    }
}