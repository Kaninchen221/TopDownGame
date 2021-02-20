// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTools/DialogAssetActions.h"
#include "Widgets/DialogAssetEditor.h"
#include "Toolkits/DialogAssetEditorToolkit.h"

#include "Toolkits/IToolkitHost.h"

FDialogAssetActions::FDialogAssetActions(const TSharedRef<ISlateStyle>& InStyle)
	: Style(InStyle)
{

}

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

void FDialogAssetActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	//EToolkitMode::Type Mode = EToolkitMode::Standalone;

	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid()
		? EToolkitMode::WorldCentric
		: EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto TextAsset = Cast<UDialogAsset>(*ObjIt);

		if (TextAsset != nullptr)
		{
			TSharedRef<FDialogAssetEditorToolkit> EditorToolkit = MakeShareable(new FDialogAssetEditorToolkit(Style));
			EditorToolkit->Initialize(TextAsset, Mode, EditWithinLevelEditor);
		}
	}

	//FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
	//SDialogAssetEditor::Cons
}
