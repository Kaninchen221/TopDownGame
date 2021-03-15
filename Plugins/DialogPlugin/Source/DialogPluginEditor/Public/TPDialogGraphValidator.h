#pragma once

class UGenericGraphNode;

class UTPDialogGraph;

class FTPDialogGraphValidator
{

public:

	static FString ValidateGraph(UTPDialogGraph* DialogGraph);

	static FString ValidateRootNode(UGenericGraphNode* GraphNode);

	static FString ValidateNode(UGenericGraphNode* GraphNode);

	static FString CanCreateConnection(UGenericGraphNode* ParentNode, const TArray<UGenericGraphNode*>& ChildrenNodes);

};