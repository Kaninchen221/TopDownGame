// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.generated.h"

class USphereComponent;
class ATopDownCharacter;
class AActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCurrentInteractableActorHasBeenChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOPDOWNGAME_API UInteractionComponent : public USceneComponent
{
	GENERATED_BODY()

public:	

	UInteractionComponent();

private:

	void NeverTick();
	void InitializeCollisionComponent();
	void SetupCollisionComponentProperties();
	void BindCollisionComponentEvents();
	void BindCollisionComponentBeginOverlapEvent();
	void BindCollisionComponentEndOverlapEvent();

protected:

	UPROPERTY(Category = "Interaction", EditAnywhere, BlueprintReadOnly)
	USphereComponent* CollisionComponent;

	UPROPERTY(Category = "Interaction", VisibleAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<AActor> CurrentInteractableActor;

	virtual void BeginPlay() override;

public:

	UFUNCTION(Category = "Interaction", BlueprintCallable)
	void NextInteractableActor();

	UFUNCTION(Category = "Interaction", BlueprintCallable)
	TSoftObjectPtr<AActor> GetCurrentInteractableActor();

	UFUNCTION(Category = "Interaction", BlueprintCallable)
	bool IsChoosedInteractableActorValid() const;

	UFUNCTION()
	void ComponentBeginOverlapInteractableActor();

	UFUNCTION()
	void ComponentEndOverlapInteractableActor();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(Category = "Interaction|Event", BlueprintAssignable)
	FOnCurrentInteractableActorHasBeenChanged CurrentInteractableActorHasBeenChangedEvent;

private:

	TArray<AActor*> GetOverlapedActors();

};
