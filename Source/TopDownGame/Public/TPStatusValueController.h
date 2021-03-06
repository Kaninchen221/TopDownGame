// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TPStatusValueController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewCurrentValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewMinimumValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewMaximumValue);

/**
 * 
 */
UCLASS(Blueprintable)
class TOPDOWNGAME_API UTPStatusValueController : public UObject
{
	GENERATED_BODY()
	
public:

	UTPStatusValueController();

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	void SetMaximumValue(int32 NewMaximumValue) noexcept;

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	int32 GetMaximumValue() const noexcept;

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	void SetMinimumValue(int32 NewMinimumValue) noexcept;

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	int32 GetMinimumValue() const noexcept;

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	void SetCurrentValue(int32 NewCurrentValue) noexcept;

	UFUNCTION(BlueprintCallable, Category = "ValueController")
	int32 GetCurrentValue() const noexcept;

	UPROPERTY(Category = "ValueController|Event", BlueprintAssignable)
	FOnNewCurrentValue OnNewCurrentValue;

	UPROPERTY(Category = "ValueController|Event", BlueprintAssignable)
	FOnNewMinimumValue OnNewMinimumValue;

	UPROPERTY(Category = "ValueController|Event", BlueprintAssignable)
	FOnNewMaximumValue OnNewMaximumValue;

private:

	void ValidateCurrentValue();
	void BroadcastNewCurrentValue();
	void BroadcastNewMinimumValue();
	void BroadcastNewMaximumValue();

	int32 MinimumValue;
	int32 CurrentValue;
	int32 MaximumValue;

};
