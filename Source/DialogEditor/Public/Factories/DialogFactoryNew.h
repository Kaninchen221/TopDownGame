// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "DialogFactoryNew.generated.h"

/**
 * 
 */
UCLASS(Config = "Dialog")
class DIALOGEDITOR_API UDialogFactoryNew : public UFactory
{
	GENERATED_BODY()
	
public:

	UDialogFactoryNew();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual bool ShouldShowInNewMenu() const override;



};
