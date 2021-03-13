#include "TPAssetEditor_DialogGraph.h"
#include "DialogEditor.h"
#include "TPDialogGraphValidator.h"
#include "DialogSystem/TPDialogGraph.h"

#include "Misc/MessageDialog.h"

void FTPAssetEditor_DialogGraph::SaveAsset_Execute()
{
	UTPDialogGraph* DialogGraph = Cast<UTPDialogGraph>(EditingGraph);
	if (DialogGraph)
	{
		RebuildGenericGraph();

		FText Result = FTPDialogGraphValidator::ValidateGraph(DialogGraph);
		if (Result.IsEmpty())
		{
			FAssetEditorToolkit::SaveAsset_Execute();
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, Result);
		}
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("FTPAssetEditor_DialogGraph::SaveAsset_Execute EditingGraph is not a UTPDialogGraph type"));
	}
}
