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
    // MyGameInstance ���� �������� -> NewMyGameInstance�� ����
    MyGameInstanceRef = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

    if (MyGameInstanceRef)
    {
        // ���� ���� �� �� �� ���ü� ������Ʈ
        UpdateVisibility();
    }

}

void ANewLevelTransferVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
    // �� if�� �� ����� ���� �� ����� �ε����� ������ �Ѿ��;
    if (myCharacter.Get())
    {
        if (OtherActor && OtherActor->IsA(myCharacter))
        {
            // �̵�~

            UNewMyGameInstance* MyGameInstance = Cast<UNewMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

            // ���� �ν��Ͻ��� ���������� ���� ������ �ø���
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


        /// �Ⱥ��̰� �ҰŸ� �׳� �׿��� �޸𸮿��� ���ش�
        if (!bIsVisible)
            Destroy();
    }
}