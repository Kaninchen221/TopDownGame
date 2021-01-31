// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "VanishingComponent.generated.h"

class UPaperSpriteComponent;
class USphereComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOPDOWNGAME_API UVanishingComponent : public USceneComponent
{
	GENERATED_BODY()

public:	

	UVanishingComponent();

private:

	void AlwaysTick();
	void InitializeCollisionComponent();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	UPaperSprite* ControlledSprite;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MinAlphaChannelValue;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float MaxAlphaChannelValue;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	USphereComponent* ColllisionComponent;

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetControlledSprite(UPaperSprite* Sprite) noexcept;

	UFUNCTION(BlueprintCallable)
	UPaperSprite* GetControlledSprite() const noexcept;

	UFUNCTION(BlueprintCallable)
	void SetMinAlphaChannelValue(float Value) noexcept;

	UFUNCTION(BlueprintCallable)
	float GetMinAlphaChannelValue() const noexcept;

	UFUNCTION(BlueprintCallable)
	float GetMaxAlphaChannelValue() const noexcept;

	UFUNCTION(BlueprintCallable)
	USphereComponent* GetCollisionComponent() const noexcept;
};
