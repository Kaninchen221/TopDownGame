// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"
#include "../TopDownCharacter.h"
#include "Components/SphereComponent.h"

UInteractionComponent::UInteractionComponent()
{
	NeverTick();

	InitializeCollisionComponent();
}

void UInteractionComponent::InitializeCollisionComponent()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	if (CollisionComponent) {
		SetupCollisionComponentProperties();
		BindCollisionComponentEvents();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CollisionComponent is null in InteractionComponent"));
	}
}

void UInteractionComponent::SetupCollisionComponentProperties()
{
	CollisionComponent->AttachTo(this);
	CollisionComponent->InitSphereRadius(48.f);
	CollisionComponent->SetCollisionProfileName("Interaction", true);
	CollisionComponent->CanCharacterStepUpOn = ECB_Yes;
	CollisionComponent->SetShouldUpdatePhysicsVolume(false);
	CollisionComponent->SetCanEverAffectNavigation(false);
	CollisionComponent->bDynamicObstacle = true;
}

void UInteractionComponent::BindCollisionComponentEvents()
{
	BindCollisionComponentBeginOverlapEvent();
	BindCollisionComponentEndOverlapEvent();
}

void UInteractionComponent::BindCollisionComponentBeginOverlapEvent()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "ComponentBeginOverlapInteractableCharacter");
	CollisionComponent->OnComponentBeginOverlap.Add(ScriptDelegate);
}

void UInteractionComponent::BindCollisionComponentEndOverlapEvent()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "ComponentEndOverlapInteractableCharacter");
	CollisionComponent->OnComponentBeginOverlap.Add(ScriptDelegate);
}

void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

TSoftObjectPtr<AActor> UInteractionComponent::GetCurrentInteractableActor()
{
	return CurrentInteractableActor;
}

bool UInteractionComponent::IsChoosedInteractableCharacterValid() const
{
	bool bIsPtrValid = CurrentInteractableActor.IsValid();
	if (bIsPtrValid) {

		bool bIsChoosedInteractableCharacterOverlaped = CollisionComponent->IsOverlappingActor(CurrentInteractableActor.Get());
		if (bIsChoosedInteractableCharacterOverlaped) {
			return true;
		}

	}

	return false;
}

void UInteractionComponent::ComponentBeginOverlapInteractableCharacter()
{
	bool bIsChoosedInteractableCharacterValid = IsChoosedInteractableCharacterValid();
	if (!bIsChoosedInteractableCharacterValid) 
	{
		TArray<AActor*> OverlapedActors = GetOverlapedActors();
		CurrentInteractableActor = OverlapedActors[0];
	}
}

void UInteractionComponent::ComponentEndOverlapInteractableCharacter()
{
	bool bIsChoosedInteractableCharacterValid = IsChoosedInteractableCharacterValid();
	if (!bIsChoosedInteractableCharacterValid) 
	{
		TArray<AActor*> OverlapedActors = GetOverlapedActors();
		bool bIsAnyOverlapedActor = OverlapedActors.Num() > 0;
		if (bIsAnyOverlapedActor) 
		{
			CurrentInteractableActor = OverlapedActors[0];
		}
		else 
		{
			CurrentInteractableActor = nullptr;
		}
	}
}

void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

TArray<AActor*> UInteractionComponent::GetOverlapedActors()
{
	TArray<AActor*> OverlapedActors;
	CollisionComponent->GetOverlappingActors(OverlapedActors);
	return OverlapedActors;
}

void UInteractionComponent::NeverTick()
{
	PrimaryComponentTick.bCanEverTick = false;
}

