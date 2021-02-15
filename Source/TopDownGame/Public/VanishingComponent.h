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
	void SetupCameraArmComponent();
	void BindBeginHide();
	void BindBeginUnhide();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UPaperSpriteComponent* ControlledSpriteComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MinAlphaChannelValue;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float MaxAlphaChannelValue;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	USphereComponent* ColllisionComponent;

	UPROPERTY()
	bool bShouldUpdate;

	UPROPERTY()
	bool bShouldHide;

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetupControlledSpriteComponent(UPaperSpriteComponent* Component) noexcept;

	UFUNCTION(BlueprintCallable)
	UPaperSpriteComponent* GetControlledSpriteComponent() const noexcept;

	UFUNCTION(BlueprintCallable)
	void SetMinAlphaChannelValue(float Value) noexcept;

	UFUNCTION(BlueprintCallable)
	float GetMinAlphaChannelValue() const noexcept;

	UFUNCTION(BlueprintCallable)
	float GetMaxAlphaChannelValue() const noexcept;

	UFUNCTION(BlueprintCallable)
	USphereComponent* GetCollisionComponent() const noexcept;

	UFUNCTION(BlueprintCallable)
	bool GetShouldUpdate() const noexcept;

	UFUNCTION(BlueprintCallable)
	bool GetShouldHide() const noexcept;

	UFUNCTION()
	void BeginHide();

	UFUNCTION()
	void BeginUnhide();

private:

	void SetupCorrectMobilityType(UPaperSpriteComponent* Component);

	void Hide(float DeltaSeconds);

	void Unhide(float DeltaSeconds);

	void Update(float Multiplier);

};
