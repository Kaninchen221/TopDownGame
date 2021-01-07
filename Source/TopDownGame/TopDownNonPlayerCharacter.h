// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/UnrealString.h"

#include "TopDownCharacter.h"

#include "TopDownNonPlayerCharacter.generated.h"

class UDialog;

/**
 * 
 */
UCLASS()
class TOPDOWNGAME_API ATopDownNonPlayerCharacter : public ATopDownCharacter
{
	GENERATED_BODY()
	
public:

	ATopDownNonPlayerCharacter();

private:

	void InitializeDialogComponent();

protected:

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	UDialog* DialogComponent;

public:

	UFUNCTION(BlueprintCallable)
	UDialog * GetDialogComponent() const { return DialogComponent; }

};
