// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimationInstance/QBaseAnimInstance.h"
#include "DataAssets/Character/QCharacterDataAsset.h"
#include "DataAssets/Character/QCharacterAnimationDataAsset.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"

void UQBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);
    if (Character)
    {
        UpdateCharacterInfo();
    }
}

void UQBaseAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    if (APawn* Owner = TryGetPawnOwner()) {
        Character = Cast<AQBaseCharacter>(Owner);
        OwnAnimationSystemComponent = Character->GetAnimationSystemCompont();
    }
    
}

bool UQBaseAnimInstance::UpdateCharacterInfo()
{
    if (!OwnAnimationSystemComponent)return false;
    return true;
}

UQCharacterAnimationDataAsset* UQBaseAnimInstance::GetCharacterAnimationDataAsset() const
{
    if (UQCharacterDataAsset* CharacterData = Character->GetCharacterData())
    {
        return CharacterData->CharacterAnimationDataAsset;
    }
  
    return DefaultCharacterAnimDataAsset;
}

ECharacterMovementGait UQBaseAnimInstance::GetGait() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.ActualGait;
    }
    return ECharacterMovementGait();
}

ECharacterMovementState UQBaseAnimInstance::GetState() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.MovementState;
    }
    return ECharacterMovementState();
}

ECharacterMovementRotationMode UQBaseAnimInstance::GetRotationMode() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.RotationMode;
    }
    return ECharacterMovementRotationMode();
}

ECharacterMovementStance UQBaseAnimInstance::GetStance() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.ActualStance;
    }
    return ECharacterMovementStance();
}

ECharacterMovementAction UQBaseAnimInstance::GetAction() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.MovementAction;
    }
    return ECharacterMovementAction();
}

ECharacterViewMode UQBaseAnimInstance::GetViewMode() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.ViewMode;
    }
    return ECharacterViewMode();
}

ECharacterOverlayState UQBaseAnimInstance::GetOverlayState() const
{
    if (OwnAnimationSystemComponent)
    {
        return OwnAnimationSystemComponent->MovementMainParameters.OverlayState;
    }
    return ECharacterOverlayState();
}
