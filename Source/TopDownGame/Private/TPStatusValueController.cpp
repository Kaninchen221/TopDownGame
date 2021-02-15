// Fill out your copyright notice in the Description page of Project Settings.


#include "TPStatusValueController.h"
#include "Math/UnrealMathUtility.h"

UTPStatusValueController::UTPStatusValueController()
	: MinimumValue(0),
	CurrentValue(100),
	MaximumValue(200)
{

}

void UTPStatusValueController::SetMaximumValue(int32 NewMaximumValue) noexcept
{
	if (NewMaximumValue >= MinimumValue) {
		MaximumValue = NewMaximumValue;
	}
	else 
	{
		MaximumValue = MinimumValue;
	}

	ValidateCurrentValue();
}

int32 UTPStatusValueController::GetMaximumValue() const noexcept
{
	return MaximumValue;
}

void UTPStatusValueController::SetMinimumValue(int32 NewMinimumValue) noexcept
{
	if (NewMinimumValue <= MaximumValue)
	{
		MinimumValue = NewMinimumValue;
	}
	else 
	{
		MinimumValue = MaximumValue;
	}

	ValidateCurrentValue();
}

int32 UTPStatusValueController::GetMinimumValue() const noexcept
{
	return MinimumValue;
}

void UTPStatusValueController::SetCurrentValue(int32 NewCurrentValue) noexcept
{
	CurrentValue = NewCurrentValue;
	ValidateCurrentValue();
}

int32 UTPStatusValueController::GetCurrentValue() const noexcept
{
	return CurrentValue;
}

void UTPStatusValueController::ValidateCurrentValue()
{
	if (CurrentValue < MinimumValue)
	{
		CurrentValue = MinimumValue;
	}
	else if (CurrentValue > MaximumValue)
	{
		CurrentValue = MaximumValue;
	}

	BroadcastNewCurrentValue();
}

void UTPStatusValueController::BroadcastNewCurrentValue()
{
	OnNewCurrentValue.Broadcast();
}
