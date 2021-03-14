#include "TPAssetEditor_DialogGraph.h"
#include "TPDialogGraphValidator.h"
#include "TPDialogGraph.h"

#include "Misc/MessageDialog.h"

void FTPAssetEditor_DialogGraph::SaveAsset_Execute()
{
	UTPDialogGraph* DialogGraph = Cast<UTPDialogGraph>(EditingGraph);
	if (DialogGraph)
	{
		RebuildGenericGraph();

		FString Result = FTPDialogGraphValidator::ValidateGraph(DialogGraph);
		if (Result.IsEmpty())
		{
			FAssetEditorToolkit::SaveAsset_Execute();
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(Result));
		}
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(FString(__FUNCTION__) + " EditingGraph is not a UTPDialogGraph type"));
	}
}
