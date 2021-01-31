// Fill out your copyright notice in the Description page of Project Settings.


#include "VanishingComponent.h"

#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UVanishingComponent::UVanishingComponent()
	: MaxAlphaChannelValue(1.0f),
	bShouldUpdate(false),
	bShouldHide(false)
{
	AlwaysTick();

	InitializeCollisionComponent();
}


void UVanishingComponent::AlwaysTick()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UVanishingComponent::InitializeCollisionComponent()
{
	ColllisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	if (ColllisionComponent) {
		ColllisionComponent->SetupAttachment(this);
		ColllisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		ColllisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
		ColllisionComponent->SetGenerateOverlapEvents(true);
		ColllisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		ColllisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		ColllisionComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_Yes;

		BindBeginHide();
		BindBeginUnhide();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("ColllisionComponent is null, class name: %s"), *this->GetClass()->GetName());
	}
}

void UVanishingComponent::BindBeginHide()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "BeginHide");
	ColllisionComponent->OnComponentBeginOverlap.Add(ScriptDelegate);
}

void UVanishingComponent::BindBeginUnhide()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "BeginUnhide");
	ColllisionComponent->OnComponentEndOverlap.Add(ScriptDelegate);
}

void UVanishingComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UVanishingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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

void UVanishingComponent::SetControlledSpriteComponent(UPaperSpriteComponent* Component) noexcept
{
	ControlledSpriteComponent = Component;
}

UPaperSpriteComponent* UVanishingComponent::GetControlledSpriteComponent() const noexcept
{
	return ControlledSpriteComponent;
}

void UVanishingComponent::SetMinAlphaChannelValue(float Value) noexcept
{
	MinAlphaChannelValue = Value;
}

float UVanishingComponent::GetMinAlphaChannelValue() const noexcept
{
	return MinAlphaChannelValue;
}

float UVanishingComponent::GetMaxAlphaChannelValue() const noexcept
{
	return MaxAlphaChannelValue;
}

USphereComponent* UVanishingComponent::GetCollisionComponent() const noexcept
{
	return ColllisionComponent;
}

bool UVanishingComponent::GetShouldUpdate() const noexcept
{
	return bShouldUpdate;
}

bool UVanishingComponent::GetShouldHide() const noexcept
{
	return bShouldHide;
}

void UVanishingComponent::BeginHide()
{
	bShouldUpdate = true;
	bShouldHide = true;
	
}

void UVanishingComponent::BeginUnhide()
{
	bShouldUpdate = true;
	bShouldHide = false;
}

void UVanishingComponent::Hide(float DeltaSeconds)
{
	const static float bHideMultiplier = 1.0f;
	Update(bHideMultiplier * DeltaSeconds);
}

void UVanishingComponent::Unhide(float DeltaSeconds)
{
	const static float bUnhideMultiplier = -1.0f;
	Update(bUnhideMultiplier * DeltaSeconds);
}

void UVanishingComponent::Update(float Multiplier)
{
	FLinearColor SpriteColor = ControlledSpriteComponent->GetSpriteColor();

	SpriteColor.A -= Multiplier;

	SpriteColor.A = FMath::Clamp(SpriteColor.A, MinAlphaChannelValue, MaxAlphaChannelValue);

	ControlledSpriteComponent->SetSpriteColor(SpriteColor);
}

