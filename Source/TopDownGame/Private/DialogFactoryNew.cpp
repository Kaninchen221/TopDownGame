// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogSystem/Factories/DialogFactoryNew.h"
#include "DialogSystem/DialogAsset.h"

UDialogFactoryNew::UDialogFactoryNew()
{
	SupportedClass = UDialogAsset::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UDialogFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UDialogAsset>(InParent, InName, Flags);
}

bool UDialogFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}
