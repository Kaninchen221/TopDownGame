#include "TPAssetEditor_DialogGraph.h"

void FTPAssetEditor_DialogGraph::SaveAsset_Execute()
{
	UE_LOG(DialogEditor, Log, TEXT("FAssetEditor_DialogGraph::SaveAsset_Execute"));

	if (EditingGraph != nullptr)
	{
		RebuildGenericGraph();
	}
}

