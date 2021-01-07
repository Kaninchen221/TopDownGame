// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Containers/Array.h"
#include "DialogNode.generated.h"

class UDialogOption;

/**
 * 
 */
UCLASS(config = Dialog, BlueprintType, Blueprintable)
class TOPDOWNGAME_API UDialogNode : public UObject
{
	GENERATED_BODY()
	
public:

protected:

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	TArray<UDialogOption*> Options;

public:

	UFUNCTION(BluePrintCallable)
	UDialogOption* AddDialogOption(FText DialogOptionText, bool CanBeChoosen);

	UFUNCTION(BluePrintCallable)
	TArray<UDialogOption*> GetDialogOptions() { return Options; }

	UFUNCTION(BlueprintCallable)
	void SetText(FText NewText) { Text = NewText; }

	UFUNCTION(BlueprintCallable)
	FText GetText() const { return Text; }
};
