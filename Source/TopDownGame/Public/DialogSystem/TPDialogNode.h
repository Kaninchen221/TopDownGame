// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPDialogNode.generated.h"


USTRUCT(Category = "DialogEditor|Node")
struct TOPDOWNGAME_API FTPDialogNode
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
