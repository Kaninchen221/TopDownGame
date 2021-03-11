#include "TPAssetEditor_DialogGraph.h"
#include "DialogEditor.h"

void FTPAssetEditor_DialogGraph::SaveAsset_Execute()
{
	UE_LOG(DialogEditor, Log, TEXT("FAssetEditor_DialogGraph::SaveAsset_Execute"));

	if (EditingGraph)
	{
		RebuildGenericGraph();
	}
}

