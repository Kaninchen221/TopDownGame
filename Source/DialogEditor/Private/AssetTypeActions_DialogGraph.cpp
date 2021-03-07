#include "AssetTypeActions_DialogGraph.h"
#include "AssetEditor_DialogGraph.h"
#include "DialogSystem/TPDialogGraph.h"

FAssetTypeActions_DialogGraph::FAssetTypeActions_DialogGraph()
{
}

FText FAssetTypeActions_DialogGraph::GetName() const
{
	return FText::FromString("FDialogGraphAssetTypeActionsName");
}

FColor FAssetTypeActions_DialogGraph::GetTypeColor() const
{
	return FColor(120, 180, 120);
}

UClass* FAssetTypeActions_DialogGraph::GetSupportedClass() const
{
	return UTPDialogGraph::StaticClass();
}

void FAssetTypeActions_DialogGraph::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UGenericGraph* Graph = Cast<UGenericGraph>(*ObjIt))
		{
			//TSharedRef<FAssetEditor_GenericGraph> NewGraphEditor(new FAssetEditor_GenericGraph());
			//NewGraphEditor->InitGenericGraphAssetEditor(Mode, EditWithinLevelEditor, Graph);
			
			TSharedRef<FAssetEditor_DialogGraph> NewDialogEditor(new FAssetEditor_DialogGraph());
			NewDialogEditor->InitGenericGraphAssetEditor(Mode, EditWithinLevelEditor, Graph);
		}
	}
}

uint32 FAssetTypeActions_DialogGraph::GetCategories()
{
	return EAssetTypeCategories::Gameplay;
}