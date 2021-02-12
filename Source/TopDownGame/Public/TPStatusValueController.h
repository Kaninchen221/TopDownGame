// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TPStatusValueController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TOPDOWNGAME_API UTPStatusValueController : public UObject
{
	GENERATED_BODY()
	
public:

	UTPStatusValueController();

	void SetMaximumValue(int32 NewMaximumValue) noexcept;

	int32 GetMaximumValue() const noexcept;

	void SetMinimumValue(int32 NewMinimumValue) noexcept;

	int32 GetMinimumValue() const noexcept;

	void SetCurrentValue(int32 NewCurrentValue) noexcept;

	int32 GetCurrentValue() const noexcept;

private:

	void ValidateCurrentValue();

	int32 MinimumValue;
	int32 CurrentValue;
	int32 MaximumValue;

};
