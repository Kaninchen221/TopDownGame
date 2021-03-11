#pragma once

class UGenericGraphNode;

class UTPDialogGraph;

class FTPDialogGraphValidator
{

public:

	void ValidateGraph(UTPDialogGraph* DialogGraph);

	FText ValidateRootNode(UGenericGraphNode* GraphNode);

};