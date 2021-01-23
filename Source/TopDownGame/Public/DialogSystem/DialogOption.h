// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "Containers/Array.h"
#include "DialogOption.generated.h"

class UDialogNode;

DECLARE_DYNAMIC_DELEGATE(FActionOfThisOption);

/**
 * 
 */
UCLASS(config = Dialog, BlueprintType, Blueprintable)
class TOPDOWNGAME_API UDialogOption : public UObject
{
	GENERATED_BODY()
	
public:



protected:

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadOnly)
	FText Text;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadOnly)
	UDialogNode* ResultNode;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadOnly)
	bool CanBeChoosen;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadOnly)
	FActionOfThisOption ActionOfThisOption;

public:

	UFUNCTION(BlueprintCallable)
	UDialogNode* Choose();

	UFUNCTION(BlueprintCallable)
	UDialogNode* CreateResultNode(FText DialogNodeText);

	UFUNCTION(BlueprintCallable)
	UDialogNode* SetResultNode(UDialogNode* DialogNode);

	UFUNCTION(BlueprintCallable)
	UDialogNode* GetResultNode() { return ResultNode; }

	void SetCanBeChoosen(bool Value) { CanBeChoosen = Value; }

	UFUNCTION(BlueprintCallable)
	bool IsCanBeChoosen() const noexcept { return CanBeChoosen; }

	UFUNCTION(BlueprintCallable)
	void SetText(FText NewText) { this->Text = NewText; }

	UFUNCTION(BlueprintCallable)
	FText GetText() { return Text; }

	UFUNCTION(BlueprintCallable)
	UDialogOption* SetActionOfThisOption(FActionOfThisOption NewActionOfThisOption);
};
