#include "TPDialogGraphValidator.h"

#include "DialogSystem/TPDialogGraph.h"
#include "DialogSystem/TPDialogGraphNode.h"

FText FTPDialogGraphValidator::ValidateGraph(UTPDialogGraph* DialogGraph)
{
	const FString ResultPrefix = "FTPDialogGraphValidator::ValidateGraph: ";

	if (!DialogGraph)
	{
		return FText::FromString(ResultPrefix + "DialogGraph is nullptr");
	}

	for (UGenericGraphNode* GraphNode : DialogGraph->AllNodes)
	{
		TArray<UGenericGraphNode*> NodeChildrenNodes = GraphNode->ChildrenNodes;
		FText Result = CanCreateConnection(GraphNode, NodeChildrenNodes);
		if (!Result.IsEmpty())
		{
			return FText::FromString(ResultPrefix + Result.ToString());
		}
	}

	return FText::GetEmpty();
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
	FText Result = CanCreateConnection(GraphNode, NodeChildrenNodes);
	if (!Result.IsEmpty())
	{
		return FText::FromString(ResultPrefix + Result.ToString());
	}

	return FText::GetEmpty();
}

FText FTPDialogGraphValidator::CanCreateConnection(UGenericGraphNode* ParentNode, const TArray<UGenericGraphNode*>& ChildrenNodes)
{
	for (UGenericGraphNode* ChildNode : ChildrenNodes)
	{
		FText ErrorMessage;
		bool bCanCreateConnection = ParentNode->CanCreateConnection(ChildNode, ErrorMessage);

		if (!bCanCreateConnection)
		{
			return FText::FromString(ErrorMessage.ToString());
		}
	}

	return FText::GetEmpty();
}
