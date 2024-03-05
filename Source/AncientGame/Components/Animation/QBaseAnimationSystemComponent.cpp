// Fill out your copyright notice in the Description page of Project Settings.


#include "QBaseAnimationSystemComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DataAssets/Character/QCharacterDataAsset.h"
#include "Characters/QBaseCharacter.h"
#include "Curves/CurveVector.h"


UQBaseAnimationSystemComponent::UQBaseAnimationSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	MovementMainParameters.MovementState = ECharacterMovementState::OnGround;
}

void UQBaseAnimationSystemComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnCharacter = Cast<ACharacter>(GetOwner());
	OwnCharacter->GetMesh()->AddTickPrerequisiteComponent(this);
	MainAnimInstacne = OwnCharacter->GetMesh()->GetAnimInstance();
	CharacterMovementSettingModel = GetCharacterMovementModel();

	LastVelocityRotation = OwnCharacter->GetActorRotation();
	LastMovementInputRotation = OwnCharacter->GetActorRotation();
}

void UQBaseAnimationSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateEssentialValues();
	CacheValues();
	if (MovementMainParameters.MovementState == ECharacterMovementState::OnGround)
	{
		if (CharacterMovementSettingModel.IsVaild())
		{
			UpdateCharacterMovement();
			UpdateGroundRotation();
		}
	}
	else if (MovementMainParameters.MovementState == ECharacterMovementState::InAir)
	{
		UpdateInAirRotation();
	}
}

void UQBaseAnimationSystemComponent::CacheValues()
{
	PreviousVelocity = GetVelocity();
	PreviousAimYaw = GetControlRotation().Yaw;

	if (bIsMoving) {
		FVector Velocity = GetVelocity();
		Velocity.Z = 0;
		LastVelocityRotation = Velocity.Rotation();
	}
	if (bHasMovementInput) {
		LastMovementInputRotation = OwnCharacter->GetCharacterMovement()->GetCurrentAcceleration().Rotation();
	}
}

void UQBaseAnimationSystemComponent::UpdateEssentialValues()
{
	AimYawRate = GetAimYawRate();
	bHasMovementInput = HasMovementInput();
	MovementInputAmount = GetMovementInputAmount();
	Speed = GetSpeed();
	Acceleration = GetAcceleration();
	bIsMoving = IsMoving();
}

void UQBaseAnimationSystemComponent::UpdateCharacterMovement()
{
	ECharacterMovementGait AllowedGait = GetAllowedGait();	
	ECharacterMovementGait ActualGait = GetActualGait(AllowedGait);
	if (ActualGait != MovementMainParameters.ActualGait)UpdateGait(ActualGait);
	UpdateDynamicMovementSettings(AllowedGait);
}

ECharacterMovementGait UQBaseAnimationSystemComponent::GetAllowedGait()
{

	if (MovementMainParameters.ActualStance == ECharacterMovementStance::Stance)
	{
		if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::Aiming)
		{
			if (DesiredGit == ECharacterMovementGait::Walk)
			{
				return ECharacterMovementGait::Walk;
			}
			else
			{
				return ECharacterMovementGait::Run;//瞄准状态最多用跑不可冲刺
			}
		}
		else
		{
			if (DesiredGit == ECharacterMovementGait::Sprint)
			{
				return  CanSprint() ? ECharacterMovementGait::Sprint : ECharacterMovementGait::Run;
			}
			else
			{
				return DesiredGit;
			}
		}
	}
	else
	{
		if (DesiredGit == ECharacterMovementGait::Walk)
		{
			return ECharacterMovementGait::Walk;
		}
		else
		{
			return ECharacterMovementGait::Run;//下蹲状态最多用跑不可冲刺
		}
	}
}

bool UQBaseAnimationSystemComponent::CanSprint()
{
	if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::VelocityDirection)
	{
		return MovementInputAmount > 0.9f ? true : false;
	}
	else if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::LookingDirection)
	{
		if (!OwnCharacter)return false;
		UCharacterMovementComponent* MovementComponent = OwnCharacter->GetCharacterMovement();
		FRotator CurrentAcclerationRotation = MovementComponent->GetCurrentAcceleration().Rotation();
		FRotator ControlRoattion = GetControlRotation();
		FRotator Angle = ControlRoattion - CurrentAcclerationRotation;
		Angle.Normalize();
		if (fabs(Angle.Yaw) < 50.f && MovementInputAmount > 0.9f)return true;
		return false;
	}
	return false;
}

ECharacterMovementGait UQBaseAnimationSystemComponent::GetActualGait(ECharacterMovementGait AllowedGait)
{
	if (Speed >= CurrentMovementSetting.RunSpeed + 10.f) {

		switch (AllowedGait)
		{
		case ECharacterMovementGait::Walk:return ECharacterMovementGait::Run;
		case ECharacterMovementGait::Run:return ECharacterMovementGait::Run;
		case ECharacterMovementGait::Sprint:return ECharacterMovementGait::Sprint;
		}

	}
	else if (Speed >= CurrentMovementSetting.WalkSpeed + 10.f) {
		return ECharacterMovementGait::Run;
	}
	else {
		return ECharacterMovementGait::Walk;
	}
	return ECharacterMovementGait();
}

void UQBaseAnimationSystemComponent::UpdateGroundRotation()
{
	if (MovementMainParameters.MovementAction == ECharacterMovementAction::None) {
		if (CanUpdateMovingRotation()) {
			if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::VelocityDirection) {
				FRotator Target = { 0,LastVelocityRotation.Yaw,0 };
				SmoothCharacterRotation(Target, 800.f, CalcuateGroundRotationRate());
			}
			else if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::LookingDirection) {
				if (MovementMainParameters.ActualGait == ECharacterMovementGait::Sprint) {
					FRotator Target = { 0,LastVelocityRotation.Yaw,0 };
					SmoothCharacterRotation(Target, 500.f, CalcuateGroundRotationRate());
				}
				else {
					FRotator Target = { 0,GetControlRotation().Yaw + GetAnimCurveValue(TEXT("YawOffset")),0 };
					SmoothCharacterRotation(Target, 500.f, CalcuateGroundRotationRate());
				}

			}
			else if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::Aiming) {
				FRotator Target = { 0,GetControlRotation().Yaw ,0 };
				SmoothCharacterRotation(Target, 1000.f, 20.f);
			}
		}
		else {
			//Not Moving
			if (MovementMainParameters.ViewMode == ECharacterViewMode::ThirdPerson) {
				if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::Aiming) {
					LimitRotation(-100.f, 100.f, 20.f);
				}
				float RotationAmount = GetAnimCurveValue(TEXT("RotationAmount"));
				if (fabs(RotationAmount) > 0.001f) {
					RotationAmount = RotationAmount * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * 30.f;
					OwnCharacter->AddActorWorldRotation(FRotator(0, RotationAmount, 0));
					TargetRotation = GetActorRotation();
				}
			}
			else {
				LimitRotation(-100.f, 100.f, 20.f);
			}
		}
	}
	else if (MovementMainParameters.MovementAction == ECharacterMovementAction::Rolling) {
		if (bHasMovementInput) {
			FRotator Target = { 0,LastMovementInputRotation.Yaw,0 };
			SmoothCharacterRotation(Target, 0.f, 2.f);
		}
	}
}

void UQBaseAnimationSystemComponent::UpdateInAirRotation()
{

	FRotator Target;
	if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::Aiming)
	{
		Target = GetControlRotation();
		Target.Pitch = 0;
		Target.Roll = 0;
		SmoothCharacterRotation(Target, 0.f, 15.f);
		InAirRotation = GetActorRotation();
	}
	else {
		Target = InAirRotation;
		Target.Pitch = 0;
		Target.Roll = 0;
		SmoothCharacterRotation(Target, 0.f, 5.f);
	}
}

void UQBaseAnimationSystemComponent::UpdateDynamicMovementSettings(ECharacterMovementGait AllowedGait)
{
	CurrentMovementSetting = GetTargetMovementSettings();
	UCharacterMovementComponent* MovementComponent = OwnCharacter->GetCharacterMovement();
	float CurrentConfigSpeed = 0.0f;
	switch (AllowedGait)
	{
	case ECharacterMovementGait::Walk:CurrentConfigSpeed = CurrentMovementSetting.WalkSpeed;
		break;
	case ECharacterMovementGait::Run:CurrentConfigSpeed = CurrentMovementSetting.RunSpeed;
		break;
	case ECharacterMovementGait::Sprint:CurrentConfigSpeed = CurrentMovementSetting.SprintSpeed;
		break;
	}
	MovementComponent->MaxWalkSpeed = CurrentConfigSpeed;
	MovementComponent->MaxWalkSpeedCrouched = CurrentConfigSpeed;

	FVector Data = CurrentMovementSetting.MovementCurve->GetVectorValue(GetMappedSpeed());
	MovementComponent->MaxAcceleration = Data.X;
	MovementComponent->BrakingDecelerationWalking = Data.Y;
	MovementComponent->GroundFriction = Data.Z;//摩擦力
}

bool UQBaseAnimationSystemComponent::CanUpdateMovingRotation()
{
	if ((bIsMoving && bHasMovementInput) || Speed > 150.f) {
		if (!OwnCharacter->HasAnyRootMotion()) {
			return true;
		}
	}
	return false;
}

void UQBaseAnimationSystemComponent::SmoothCharacterRotation(const FRotator& Target, float TargetInterpSpeed, float ActorInterpSpeed)
{
	TargetRotation = FMath::RInterpTo(TargetRotation, Target, UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), TargetInterpSpeed);
	FRotator NowRotaion = FMath::RInterpTo(GetActorRotation(), TargetRotation, UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), ActorInterpSpeed);
	OwnCharacter->SetActorRotation(NowRotaion);
}

void UQBaseAnimationSystemComponent::LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed)
{
	//瞄准夹角到达一定程度开始旋转
	FRotator Angle = GetControlRotation() - GetActorRotation();
	Angle.Normalize();
	float AngleControllAndActor = Angle.Yaw;

	if (AngleControllAndActor < AimYawMin || AngleControllAndActor > AimYawMax) {
		FRotator Target;
		if (AngleControllAndActor > 0.0f) {
			Target = { 0,GetControlRotation().Yaw + AimYawMin,0 };
		}
		else {
			Target = { 0,GetControlRotation().Yaw + AimYawMax,0 };
		}
		//插值速度为0表示目标角度不再插值，仅仅插值真实旋转速度
		SmoothCharacterRotation(Target, 0.0f, InterpSpeed);
	}
}

float UQBaseAnimationSystemComponent::CalcuateGroundRotationRate()const
{
	float ActorRotatorSpeed = CurrentMovementSetting.RotationRateCurve->GetFloatValue(GetMappedSpeed());
	float AimRotatorSpeed = FMath::GetMappedRangeValueClamped(TRange<float>(0.f, 300.f), TRange<float>(1.f, 3.f), AimYawRate);
	return AimRotatorSpeed * ActorRotatorSpeed;
}

float UQBaseAnimationSystemComponent::GetMappedSpeed()const
{
	float Walk = FMath::GetMappedRangeValueClamped<float>(FVector2f(0.0f, CurrentMovementSetting.WalkSpeed),
		FVector2f(0.0f, 1.0f), Speed);
	float Run = FMath::GetMappedRangeValueClamped<float>(FVector2f(CurrentMovementSetting.WalkSpeed, CurrentMovementSetting.RunSpeed),
		FVector2f(1.0f, 2.0f), Speed);
	float Sprint = FMath::GetMappedRangeValueClamped<float>(FVector2f(CurrentMovementSetting.RunSpeed, CurrentMovementSetting.SprintSpeed),
		FVector2f(2.0f, 3.0f), Speed);
	if (Speed > CurrentMovementSetting.RunSpeed)return Sprint;
	if (Speed > Walk)return Run;
	return Walk;
}

float UQBaseAnimationSystemComponent::GetAnimCurveValue(const FName& CurveName)const
{
	if (MainAnimInstacne) {
		return MainAnimInstacne->GetCurveValue(CurveName);
	}
	return 0.0f;
}

FCharacterMovementSetting UQBaseAnimationSystemComponent::GetTargetMovementSettings()
{
	auto SwitchStance = [this](const FCharacterMovementSettingStance& Data) {
		switch (MovementMainParameters.ActualStance)
		{
		case ECharacterMovementStance::Stance:return Data.Standing;
		case ECharacterMovementStance::Crouching:return Data.Crouching;
		}
		return FCharacterMovementSetting();
		};
	switch (MovementMainParameters.RotationMode)
	{
	case ECharacterMovementRotationMode::VelocityDirection:return SwitchStance(CharacterMovementSettingModel.VelocityDirection);
	case ECharacterMovementRotationMode::LookingDirection:return SwitchStance(CharacterMovementSettingModel.LookingDirection);
	case ECharacterMovementRotationMode::Aiming:return SwitchStance(CharacterMovementSettingModel.Aiming);
	}
	return FCharacterMovementSetting();
}

bool UQBaseAnimationSystemComponent::IsMoving() const
{
	if (GetSpeed() > 1.f)
	{
		return true;
	}
	return false;
}

bool UQBaseAnimationSystemComponent::HasMovementInput() const
{
	if (GetMovementInputAmount() > 0.f)
	{
		return true;
	}
	return false;
}

FVector UQBaseAnimationSystemComponent::GetVelocity() const
{

	if (OwnCharacter)
	{
		return OwnCharacter->GetVelocity();
	}
	return FVector();
}

FRotator UQBaseAnimationSystemComponent::GetActorRotation() const
{
	if (OwnCharacter)
	{
		return OwnCharacter->GetActorRotation();
	}
	return FRotator();
}

FRotator UQBaseAnimationSystemComponent::GetControlRotation() const
{
	if (OwnCharacter)
	{
		return OwnCharacter->GetControlRotation();
	}
	return FRotator();
}

FVector UQBaseAnimationSystemComponent::GetAcceleration() const
{
	FVector VelocityAmount = GetVelocity() - PreviousVelocity;
	VelocityAmount /= UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	return VelocityAmount;
}

float UQBaseAnimationSystemComponent::GetSpeed() const
{
	FVector Velocity = GetVelocity();
	Velocity.Z = 0;
	return Velocity.Length();
}

float UQBaseAnimationSystemComponent::GetMovementInputAmount() const
{
	if (OwnCharacter)
	{
		return OwnCharacter->GetCharacterMovement()->GetCurrentAcceleration().Length() / OwnCharacter->GetCharacterMovement()->GetMaxAcceleration();
	}
	return 0.0f;
}

float UQBaseAnimationSystemComponent::GetAimYawRate() const
{
	float Angle = GetControlRotation().Yaw - PreviousAimYaw;

	return fabs(Angle / UGameplayStatics::GetWorldDeltaSeconds(GetWorld()));
}

void UQBaseAnimationSystemComponent::SetGait(ECharacterMovementGait NewGait)
{
	DesiredGit = NewGait;
}

void UQBaseAnimationSystemComponent::SetState(ECharacterMovementState NewState)
{
	MovementMainParameters.MovementState = NewState;
	OnMovementStateChangeDelegate.Broadcast(NewState);
}

void UQBaseAnimationSystemComponent::SetRotationMode(ECharacterMovementRotationMode NewRotationMode)
{
	
	MovementMainParameters.RotationMode = NewRotationMode;
	if (MovementMainParameters.RotationMode == ECharacterMovementRotationMode::VelocityDirection&& MovementMainParameters.ViewMode == ECharacterViewMode::FirstPerson)
	{
		SetViewMode(ECharacterViewMode::ThirdPerson);
	}
	OnMovementRotationModeChangeDelegate.Broadcast(NewRotationMode);
}

void UQBaseAnimationSystemComponent::SetStance(ECharacterMovementStance NewStance)
{
	MovementMainParameters.ActualStance = NewStance;
	OnMovementStanceChangeDelegate.Broadcast(NewStance);
}

void UQBaseAnimationSystemComponent::SetAction(ECharacterMovementAction NewAction)
{
	MovementMainParameters.MovementAction = NewAction;
	OnMovementActionChangeDelegate.Broadcast(NewAction);
}

void UQBaseAnimationSystemComponent::SetViewMode(ECharacterViewMode NewViewMode)
{
	MovementMainParameters.ViewMode = NewViewMode;
	OnViewModeChangeDelegate.Broadcast(NewViewMode);
}

void UQBaseAnimationSystemComponent::SetOverlayState(ECharacterOverlayState NewOverlayState)
{
	MovementMainParameters.OverlayState = NewOverlayState;
	OnOverlayStateChangeDelegate.Broadcast(NewOverlayState);
}

FCharacterMovementSettingModel UQBaseAnimationSystemComponent::GetCharacterMovementModel() const
{
	if (AQBaseCharacter* Character = Cast<AQBaseCharacter>(OwnCharacter))
	{

		if (UQCharacterDataAsset* CharacterData = Character->GetCharacterData())
		{
			FCharacterMovementSettingModel* Data = CharacterData->CharacterMovementSetting.GetRow<FCharacterMovementSettingModel>("CharacterMovement");
			if (Data) 
			{
				return *Data;
			}
		}
	}
	return FCharacterMovementSettingModel();
}

void UQBaseAnimationSystemComponent::UpdateGait(ECharacterMovementGait NewGait)
{
	MovementMainParameters.ActualGait = NewGait;
	OnMovementGaitChangeDelegate.Broadcast(NewGait);
}




