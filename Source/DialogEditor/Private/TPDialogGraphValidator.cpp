#include "TPDialogGraphValidator.h"

#include "DialogSystem/TPDialogGraphNode.h"

void FTPDialogGraphValidator::ValidateGraph(UTPDialogGraph* DialogGraph)
{

}

FText FTPDialogGraphValidator::ValidateRootNode(UGenericGraphNode* GraphNode)
{
	const thread_local FString ResultPrefix = "FTPDialogGraphValidator::ValidateRootNode: ";

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
