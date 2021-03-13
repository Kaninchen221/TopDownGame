#include "TPDialogGraphValidator.h"

#include "DialogSystem/TPDialogGraphNode.h"

void FTPDialogGraphValidator::ValidateGraph(UTPDialogGraph* DialogGraph)
{

}

FText FTPDialogGraphValidator::ValidateRootNode(UGenericGraphNode* GraphNode)
{
	const FString ResultPrefix = "FTPDialogGraphValidator::ValidateRootNode: ";

	if (!GraphNode)
	{
		return FText::FromString(ResultPrefix + "GraphNode is nullptr");
	}

	bool IsTypeValid = GraphNode->IsA<UTPDialogGraphNode>();
	if (!IsTypeValid)
	{
		return FText::FromString(ResultPrefix + "GraphNode is not a UTPDialogGraphNode type");
	}

	return FText::GetEmpty();
}

FText FTPDialogGraphValidator::ValidateNode(UGenericGraphNode* GraphNode)
{
	const FString ResultPrefix = "FTPDialogGraphValidator::ValidateNode: ";

	if (!GraphNode)
	{
		return FText::FromString(ResultPrefix + "GrapNode is nullptr");
	}

	TArray<UGenericGraphNode*> NodeChildrenNodes = GraphNode->ChildrenNodes;
	for (UGenericGraphNode* ChildNode : NodeChildrenNodes)
	{
		FText ErrorMessage;
		bool bCanCreateConnection = GraphNode->CanCreateConnection(ChildNode, ErrorMessage);

		if (!bCanCreateConnection)
		{
			return FText::FromString(ResultPrefix + ErrorMessage.ToString());
		}
	}

	return FText::GetEmpty();
}
