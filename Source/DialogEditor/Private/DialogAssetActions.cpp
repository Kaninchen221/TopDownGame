// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/DialogAssetActions.h"

FText FDialogAssetActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_DialogAsset", "Dialog Asset");
}

FColor FDialogAssetActions::GetTypeColor() const
{ 
	return FColor(175, 0, 128); 
}

UClass* FDialogAssetActions::GetSupportedClass() const
{ 
	return UDialogAsset::StaticClass(); 
}

uint32 FDialogAssetActions::GetCategories()
{ 
	return EAssetTypeCategories::Gameplay; 
}

void FDialogAssetActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor /*= TSharedPtr<IToolkitHost>()*/)
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}
