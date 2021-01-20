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
	CollisionComponent->SetupAttachment(this);
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
	ScriptDelegate.BindUFunction(this, "ComponentBeginOverlapInteractableActor");
	CollisionComponent->OnComponentBeginOverlap.Add(ScriptDelegate);
}

void UInteractionComponent::BindCollisionComponentEndOverlapEvent()
{
	FScriptDelegate ScriptDelegate;
	ScriptDelegate.BindUFunction(this, "ComponentEndOverlapInteractableActor");
	CollisionComponent->OnComponentEndOverlap.Add(ScriptDelegate);
}

void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UInteractionComponent::NextInteractableActor()
{
	TArray<AActor*> OverlapedActors = GetOverlapedActors();

	int32 NumOfOverlapedActors = OverlapedActors.Num();
	bool bCanChangeCurrentInteractableActor = NumOfOverlapedActors > 1;
	if (bCanChangeCurrentInteractableActor) {

		int32 ActualIndex = OverlapedActors.Find(CurrentInteractableActor.Get());

		bool bCurrentInteractableActorIsLastItem = ActualIndex == (NumOfOverlapedActors - 1);
		if (bCurrentInteractableActorIsLastItem) {
			CurrentInteractableActor = OverlapedActors[0];
		}
		else {
			int32 NextIndex = ActualIndex + 1;
			CurrentInteractableActor = OverlapedActors[NextIndex];
		}

		CurrentInteractableActorHasBeenChangedEvent.Broadcast();
	}
}

TSoftObjectPtr<AActor> UInteractionComponent::GetCurrentInteractableActor()
{
	return CurrentInteractableActor;
}

bool UInteractionComponent::IsChoosedInteractableActorValid() const
{
	bool bIsPtrValid = CurrentInteractableActor.IsValid();
	bool bIsChoosedInteractableCharacterOverlaped = CollisionComponent->IsOverlappingActor(CurrentInteractableActor.Get());
	if (bIsPtrValid && bIsChoosedInteractableCharacterOverlaped) {

		return true;

	}

	return false;
}

void UInteractionComponent::ComponentBeginOverlapInteractableActor()
{
	bool bIsChoosedInteractableCharacterValid = IsChoosedInteractableActorValid();
	if (!bIsChoosedInteractableCharacterValid) 
	{
		TArray<AActor*> OverlapedActors = GetOverlapedActors();
		CurrentInteractableActor = OverlapedActors[0];

		CurrentInteractableActorHasBeenChangedEvent.Broadcast();
	}
}

void UInteractionComponent::ComponentEndOverlapInteractableActor()
{
	bool bIsChoosedInteractableCharacterValid = IsChoosedInteractableActorValid();
	if (!bIsChoosedInteractableCharacterValid) 
	{
		TArray<AActor*> OverlapedActors = GetOverlapedActors();
		bool bIsAnyActorOverlapped = OverlapedActors.Num() > 0;
		if (bIsAnyActorOverlapped)
		{
			CurrentInteractableActor = OverlapedActors[0];
		}
		else 
		{
			CurrentInteractableActor = nullptr;
		}

		CurrentInteractableActorHasBeenChangedEvent.Broadcast();
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

