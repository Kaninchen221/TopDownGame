// Fill out your copyright notice in the Description page of Project Settings.


#include "TPVanishingComponent.h"

#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UTPVanishingComponent::UTPVanishingComponent()
	: MaxAlphaChannelValue(1.0f),
	bShouldUpdate(false),
	bShouldHide(false)
{
	AlwaysTick();

	InitializeCollisionComponent();
}


void UTPVanishingComponent::AlwaysTick()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTPVanishingComponent::InitializeCollisionComponent()
{
	ColllisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	if (ColllisionComponent) {
		SetupCameraArmComponent();
		BindBeginHide();
		BindBeginUnhide();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("ColllisionComponent is null, class name: %s"), *this->GetClass()->GetName());
	}
}

void UTPVanishingComponent::SetupCameraArmComponent()
{
	ColllisionComponent->SetupAttachment(this);
	ColllisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ColllisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	ColllisionComponent->SetGenerateOverlapEvents(true);
	ColllisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ColllisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	ColllisionComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_Yes;
}

void UTPVanishingComponent::BindBeginHide()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "BeginHide");
	ColllisionComponent->OnComponentBeginOverlap.Add(ScriptDelegate);
}

void UTPVanishingComponent::BindBeginUnhide()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "BeginUnhide");
	ColllisionComponent->OnComponentEndOverlap.Add(ScriptDelegate);
}

void UTPVanishingComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UTPVanishingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bShouldUpdate) {
		if (bShouldHide) {
			Hide(DeltaTime);
		}
		else {
			Unhide(DeltaTime);
		}
	}
}

void UTPVanishingComponent::SetupControlledSpriteComponent(UPaperSpriteComponent* Component) noexcept
{
	ControlledSpriteComponent = Component;

	SetupCorrectMobilityType(Component);
}

UPaperSpriteComponent* UTPVanishingComponent::GetControlledSpriteComponent() const noexcept
{
	return ControlledSpriteComponent;
}

void UTPVanishingComponent::SetMinAlphaChannelValue(float Value) noexcept
{
	MinAlphaChannelValue = Value;
}

float UTPVanishingComponent::GetMinAlphaChannelValue() const noexcept
{
	return MinAlphaChannelValue;
}

float UTPVanishingComponent::GetMaxAlphaChannelValue() const noexcept
{
	return MaxAlphaChannelValue;
}

USphereComponent* UTPVanishingComponent::GetCollisionComponent() const noexcept
{
	return ColllisionComponent;
}

bool UTPVanishingComponent::GetShouldUpdate() const noexcept
{
	return bShouldUpdate;
}

bool UTPVanishingComponent::GetShouldHide() const noexcept
{
	return bShouldHide;
}

void UTPVanishingComponent::BeginHide()
{
	bShouldUpdate = true;
	bShouldHide = true;
	
}

void UTPVanishingComponent::BeginUnhide()
{
	bShouldUpdate = true;
	bShouldHide = false;
}

void UTPVanishingComponent::SetupCorrectMobilityType(UPaperSpriteComponent* Component)
{
	TEnumAsByte<EComponentMobility::Type> SpriteMobility = Component->Mobility;
	if (SpriteMobility == EComponentMobility::Static) {
		Component->Mobility = EComponentMobility::Stationary;
	}
}

void UTPVanishingComponent::Hide(float DeltaSeconds)
{
	const static float bHideMultiplier = 1.0f;
	Update(bHideMultiplier * DeltaSeconds);
}

void UTPVanishingComponent::Unhide(float DeltaSeconds)
{
	const static float bUnhideMultiplier = -1.0f;
	Update(bUnhideMultiplier * DeltaSeconds);
}

void UTPVanishingComponent::Update(float Multiplier)
{
	FLinearColor SpriteColor = ControlledSpriteComponent->GetSpriteColor();

	SpriteColor.A -= Multiplier;

	SpriteColor.A = FMath::Clamp(SpriteColor.A, MinAlphaChannelValue, MaxAlphaChannelValue);

	ControlledSpriteComponent->SetSpriteColor(SpriteColor);
}

