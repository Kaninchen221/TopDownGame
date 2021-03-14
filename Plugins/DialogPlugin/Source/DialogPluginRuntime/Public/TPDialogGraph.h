#pragma once

#include "CoreMinimal.h"
#include "GenericGraph.h"
#include "Math/Color.h"
#include "TPDialogGraph.generated.h"

UCLASS(Blueprintable)
class DIALOGPLUGINRUNTIME_API UTPDialogGraph : public UGenericGraph
{
	GENERATED_BODY()

public:
	UTPDialogGraph();

private:

	template<typename InGraphNode>
	void SetAsAcceptedNodeType();

	template<typename InEdgeType>
	void SetAsEdgeType();

};

template<typename InGraphNode>
void UTPDialogGraph::SetAsAcceptedNodeType()
{
	NodeType = InGraphNode::StaticClass();
}

template<typename InEdgeType>
void UTPDialogGraph::SetAsEdgeType()
{
	EdgeType = InEdgeType::StaticClass();
}
