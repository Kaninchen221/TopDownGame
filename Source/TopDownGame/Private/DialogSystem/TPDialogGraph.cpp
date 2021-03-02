#include "DialogSystem/TPDialogGraph.h"
#include "DialogSystem/TPDialogGraphNode.h"
#include "DialogSystem/TPDialogGraphEdge.h"

UTPDialogGraph::UTPDialogGraph()
{
	SetAsAcceptedNodeType<UTPDialogGraphNode>();
	SetAsEdgeType<UTPDialogGraphEdge>();

	Name = "Dialog Graph";
}