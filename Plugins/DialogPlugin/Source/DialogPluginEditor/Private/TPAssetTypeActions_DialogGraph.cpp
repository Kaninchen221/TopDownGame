#include "TPAssetTypeActions_DialogGraph.h"
#include "TPAssetEditor_DialogGraph.h"
#include "TPDialogGraph.h"

FTPAssetTypeActions_DialogGraph::FTPAssetTypeActions_DialogGraph()
{
}

FText FTPAssetTypeActions_DialogGraph::GetName() const
{
	return FText::FromString("FDialogGraphAssetTypeActionsName");
}

FColor FTPAssetTypeActions_DialogGraph::GetTypeColor() const
{
	return FColor(120, 180, 120);
}

UClass* FTPAssetTypeActions_DialogGraph::GetSupportedClass() const
{
	return UTPDialogGraph::StaticClass();
}

void FTPAssetTypeActions_DialogGraph::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UGenericGraph* Graph = Cast<UGenericGraph>(*ObjIt))
		{
			TSharedRef<FTPAssetEditor_DialogGraph> NewDialogEditor(new FTPAssetEditor_DialogGraph());
			NewDialogEditor->InitGenericGraphAssetEditor(Mode, EditWithinLevelEditor, Graph);
		}
	}
}

uint32 FTPAssetTypeActions_DialogGraph::GetCategories()
{
	return EAssetTypeCategories::Gameplay;
}