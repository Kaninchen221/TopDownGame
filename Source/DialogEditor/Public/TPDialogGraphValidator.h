#pragma once

class UGenericGraphNode;

class UTPDialogGraph;

class FTPDialogGraphValidator
{

public:

	FText ValidateGraph(UTPDialogGraph* DialogGraph);

	FText ValidateRootNode(UGenericGraphNode* GraphNode);

	FText ValidateNode(UGenericGraphNode* GraphNode);

	FText CanCreateConnection(UGenericGraphNode* ParentNode, const TArray<UGenericGraphNode*>& ChildrenNodes);

};