#include "TPDialogGraphOption.h"
#include "TPDialogGraph.h"

UTPDialogGraphOption::UTPDialogGraphOption()
{

	#if WITH_EDITORONLY_DATA

	ContextMenuName = FText::FromString("Dialog Option");
	NodeTitle = FText::FromString("Dialog Option");

	#endif

}

#if WITH_EDITOR

bool UTPDialogGraphOption::CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage)
{
	bool bIsHaveEnoughNodes = IsHaveEnoughNodes(Other);
	bool bCanCreateConnection = !bIsHaveEnoughNodes;

	if (!bCanCreateConnection)
	{
		ErrorMessage = FText::FromString(NodeTitle.ToString() + " DialogOption can't have more than 1 nodes");
		return bCanCreateConnection;
	}

	bool bIsAcceptableNodeType = IsAcceptableNodeType(Other);
	bCanCreateConnection = bIsAcceptableNodeType;

	if (!bCanCreateConnection)
	{
		ErrorMessage = FText::FromString(NodeTitle.ToString() + " Can't create connection with other DialogOption");
	}

	return bCanCreateConnection;
}

bool UTPDialogGraphOption::IsHaveEnoughNodes(UGenericGraphNode* Other) const
{
	size_t ChildrenNodesCount = ChildrenNodes.Num();
	if (ChildrenNodesCount < 1)
	{
		return false;
	}
	else
	{
		if (ChildrenNodes[0] == Other)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

bool UTPDialogGraphOption::IsAcceptableNodeType(UGenericGraphNode* Node)
{
	return !Node->IsA<UTPDialogGraphOption>();
}

#endif