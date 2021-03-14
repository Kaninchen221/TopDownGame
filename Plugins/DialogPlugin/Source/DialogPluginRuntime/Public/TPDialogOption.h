// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPDialogOption.generated.h"


USTRUCT(Category = "DialogEditor")
struct DIALOGPLUGINRUNTIME_API FTPDialogOption
{
	GENERATED_BODY()

	void SetText(const FText& InText);

	FText GetText() const;

	void SetResultNode(int32 DialogNodeIndex);

	int32 GetResultNode() const;

private:

	FText Text;
	int32 ResultNodeIndex;

};