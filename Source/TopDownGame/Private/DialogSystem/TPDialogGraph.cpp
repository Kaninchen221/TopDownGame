#include "DialogSystem/TPDialogGraph.h"
#include "DialogSystem/TPDialogGraphNodeBase.h"
#include "DialogSystem/TPDialogGraphEdge.h"

UTPDialogGraph::UTPDialogGraph()
{
	SetAsAcceptedNodeType<UTPDialogGraphNodeBase>();
	SetAsEdgeType<UTPDialogGraphEdge>();

	Name = "Dialog Graph";
}