#include "TPDialogGraphNode.h"
#include "TPDialogGraph.h"

UTPDialogGraphNode::UTPDialogGraphNode()
{

	#if WITH_EDITORONLY_DATA

	ContextMenuName = FText::FromString("Dialog Node");
	NodeTitle = FText::FromString("Dialog Node");

	#endif

}

#if WITH_EDITOR

bool UTPDialogGraphNode::CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage)
{

	bool bCanCreateConnection = !(Other->IsA<UTPDialogGraphNode>());

	if (!bCanCreateConnection)
	{
		ErrorMessage = FText::FromString("Can't connect DialogNode to other DialogNode");
	}

	return bCanCreateConnection;
}

#endif