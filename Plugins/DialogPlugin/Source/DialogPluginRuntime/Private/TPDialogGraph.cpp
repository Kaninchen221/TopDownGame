#include "TPDialogGraph.h"
#include "TPDialogGraphNodeBase.h"
#include "TPDialogGraphEdge.h"

UTPDialogGraph::UTPDialogGraph()
{
	SetAsAcceptedNodeType<UTPDialogGraphNodeBase>();
	SetAsEdgeType<UTPDialogGraphEdge>();

	Name = "Dialog Graph";
}