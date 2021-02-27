// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogNode.generated.h"


USTRUCT(Category = "DialogEditor|Node")
struct DIALOGEDITOR_API FDialogNode
{
	GENERATED_BODY()

	void SetText(const FText& InText);

	FText GetText() const;

	void AddDialogOption(int32 DialogOptionIndex);

	const TArray<int32>& GetDialogOptions() const;

private:

	FText Text;
	TArray<int32> DialogOptions;

};
