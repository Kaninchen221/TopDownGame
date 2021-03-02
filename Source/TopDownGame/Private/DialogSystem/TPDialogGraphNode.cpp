#include "DialogSystem/TPDialogGraphNode.h"
#include "DialogSystem/TPDialogGraph.h"

UTPDialogGraphNode::UTPDialogGraphNode()
{

	#if WITH_EDITORONLY_DATA

		CompatibleGraphType = UTPDialogGraph::StaticClass();

		ContextMenuName = FText::FromString("Dialog Node");

	#endif

}

#if WITH_EDITOR

FLinearColor UTPDialogGraphNode::GetBackgroundColor() const
{
	return FLinearColor::Black;
}

#endif