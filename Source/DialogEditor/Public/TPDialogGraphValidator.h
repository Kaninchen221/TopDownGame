#pragma once

class UGenericGraphNode;

class UTPDialogGraph;

class FTPDialogGraphValidator
{

public:

	static FText ValidateGraph(UTPDialogGraph* DialogGraph);

	static FText ValidateRootNode(UGenericGraphNode* GraphNode);

	static FText ValidateNode(UGenericGraphNode* GraphNode);

	static FText CanCreateConnection(UGenericGraphNode* ParentNode, const TArray<UGenericGraphNode*>& ChildrenNodes);

};