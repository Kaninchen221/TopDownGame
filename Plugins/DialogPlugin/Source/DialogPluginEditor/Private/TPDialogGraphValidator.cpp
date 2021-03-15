#include "TPDialogGraphValidator.h"

#include "TPDialogGraph.h"
#include "TPDialogGraphNode.h"

FString FTPDialogGraphValidator::ValidateGraph(UTPDialogGraph* DialogGraph)
{
	if (!DialogGraph)
	{
		return FString(__FUNCTION__) + " DialogGraph is nullptr";
	}

	for (UGenericGraphNode* RootNode : DialogGraph->RootNodes)
	{
		FString Result = ValidateRootNode(RootNode);
		if (!Result.IsEmpty())
		{
			return FString(__FUNCTION__) + " " + Result;
		}
	}

	for (UGenericGraphNode* GraphNode : DialogGraph->AllNodes)
	{
		TArray<UGenericGraphNode*> NodeChildrenNodes = GraphNode->ChildrenNodes;
		FString Result = CanCreateConnection(GraphNode, NodeChildrenNodes);
		if (!Result.IsEmpty())
		{
			return FString(__FUNCTION__) + " " + Result;
		}
	}

	return FString();
}

FString FTPDialogGraphValidator::ValidateRootNode(UGenericGraphNode* GraphNode)
{
	if (!GraphNode)
	{
		return FString(__FUNCTION__) + " Node is nullptr";
	}

	bool IsTypeValid = GraphNode->IsA<UTPDialogGraphNode>();
	if (!IsTypeValid)
	{
		return FString(__FUNCTION__) + " Node is not a UTPDialogGraphNode type";
	}

	return FString();
}

FString FTPDialogGraphValidator::ValidateNode(UGenericGraphNode* GraphNode)
{
	if (!GraphNode)
	{
		return FString(__FUNCTION__) + " GrapNode is nullptr";
	}

	TArray<UGenericGraphNode*> NodeChildrenNodes = GraphNode->ChildrenNodes;
	FString Result = CanCreateConnection(GraphNode, NodeChildrenNodes);
	if (!Result.IsEmpty())
	{
		return FString(__FUNCTION__) + " " + Result;
	}

	return FString();
}

FString FTPDialogGraphValidator::CanCreateConnection(UGenericGraphNode* ParentNode, const TArray<UGenericGraphNode*>& ChildrenNodes)
{
	for (UGenericGraphNode* ChildNode : ChildrenNodes)
	{
		FText ErrorMessage;
		bool bCanCreateConnection = ParentNode->CanCreateConnection(ChildNode, ErrorMessage);

		if (!bCanCreateConnection)
		{
			return ErrorMessage.ToString();
		}
	}

	return FString();
}
