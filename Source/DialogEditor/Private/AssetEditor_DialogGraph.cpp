#include "AssetEditor_DialogGraph.h"

void FAssetEditor_DialogGraph::SaveAsset_Execute()
{
	UE_LOG(LogTemp, Log, TEXT("FAssetEditor_DialogGraph::SaveAsset_Execute"));

	if (EditingGraph != nullptr)
	{
		RebuildGenericGraph();
	}
}

