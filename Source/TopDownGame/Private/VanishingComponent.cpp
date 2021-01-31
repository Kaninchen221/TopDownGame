// Fill out your copyright notice in the Description page of Project Settings.


#include "VanishingComponent.h"

#include "PaperSprite.h"
#include "Components/SphereComponent.h"

// Sets default values for this component's properties
UVanishingComponent::UVanishingComponent()
	: MaxAlphaChannelValue(1.0f)
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
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("ColllisionComponent is null, class name: %s"), *this->GetClass()->GetName());
	}
}

void UVanishingComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UVanishingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UVanishingComponent::SetControlledSprite(UPaperSprite* Sprite) noexcept
{
	ControlledSprite = Sprite;
}

UPaperSprite* UVanishingComponent::GetControlledSprite() const noexcept
{
	return ControlledSprite;
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

