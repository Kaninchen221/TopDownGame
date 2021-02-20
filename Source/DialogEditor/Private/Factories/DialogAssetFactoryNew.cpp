// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/Factories/DialogAssetFactoryNew.h"
#include "DialogEditor/Public/DialogAsset.h"

UDialogFactoryNew::UDialogFactoryNew()
{
	SupportedClass = UDialogAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UDialogFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UDialogAsset>(InParent, InClass, InName, Flags);
}

bool UDialogFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}
