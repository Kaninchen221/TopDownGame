// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.generated.h"

class USphereComponent;
class ATopDownCharacter;
class AActor;

DECLARE_EVENT(UInteractionComponent, OnCurrentInteractableActorHasBeenChanged)

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOPDOWNGAME_API UInteractionComponent : public USceneComponent
{
	GENERATED_BODY()

public:	

	UInteractionComponent();

private:

	void InitializeCollisionComponent();
	void SetupCollisionComponentProperties();
	void BindCollisionComponentEvents();
	void BindCollisionComponentBeginOverlapEvent();
	void BindCollisionComponentEndOverlapEvent();

protected:

	UPROPERTY(Category = "Collision", EditAnywhere, BlueprintReadWrite)
	USphereComponent* CollisionComponent;

	UPROPERTY(Category = "Interaction", BlueprintReadOnly)
	TSoftObjectPtr<AActor> CurrentInteractableActor;

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void NextInteractableActor();

	UFUNCTION(BlueprintCallable)
	TSoftObjectPtr<AActor> GetCurrentInteractableActor();

	UFUNCTION(BlueprintCallable)
	bool IsChoosedInteractableActorValid() const;

	UFUNCTION()
	void ComponentBeginOverlapInteractableActor();

	UFUNCTION()
	void ComponentEndOverlapInteractableActor();

	USphereComponent* GetCollisionComponent() { return CollisionComponent; }

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	OnCurrentInteractableActorHasBeenChanged CurrentInteractableActorHasBeenChangedEvent;

private:

	TArray<AActor*> GetOverlapedActors();

	void NeverTick();

};
