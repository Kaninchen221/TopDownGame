#pragma once

#include "CoreMinimal.h"
#include "GenericGraphAssetEditor/AssetEditor_GenericGraph.h"

class FAssetEditor_DialogGraph : public FAssetEditor_GenericGraph
{
public:

	virtual void SaveAsset_Execute() override;

};