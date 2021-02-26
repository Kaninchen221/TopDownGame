#include "DialogEditor/Public/DialogGraphNode.h"
#include "DialogEditor/Public/DialogGraph.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"

UDialogGraphNode::UDialogGraphNode()
{
	DefaultNodeTitle = FText::FromString("Dialog Graph Node");
}

UDialogGraphNode* UDialogGraphNode::GetNodePointer_Implementation()
{
	return this;
}

void UDialogGraphNode::SetGraph(UDialogGraph* InGraph)
{
	Graph = InGraph;
}

UDialogGraph* UDialogGraphNode::GetGraph()
{
	return Graph;
}

FText UDialogGraphNode::GetNodeTitle_Implementation()
{
	return DefaultNodeTitle;
}

TArray<UDialogGraphNode*> UDialogGraphNode::GetChildren()
{
	TArray<UDialogGraphNode*>ReturnArray;
	for (UDialogGraphNode* Node : ChildNodes)
	{
		auto* object = Node->GetNodePointer();
		if (object)ReturnArray.Add(object);
	}
	return ReturnArray;
}

TArray<UDialogGraphNode*> UDialogGraphNode::GetParents()
{
	return ParentNodes;
}

bool UDialogGraphNode::HasInputPins_Implementation()
{
	return bHasInputPins;
}

bool UDialogGraphNode::HasOutputPins_Implementation()
{
	return bHasOutputPins;
}

void UDialogGraphNode::AddToChildren(UDialogGraphNode* NewSubNode)
{
	ChildNodes.Add(NewSubNode);
}

void UDialogGraphNode::AddToParent(UDialogGraphNode* NewParentNode)
{
	ParentNodes.Add(NewParentNode);
}

bool UDialogGraphNode::HasParentNodes()
{
	return ParentNodes.Num() > 0;
}

void UDialogGraphNode::LinkArgumentNodeAsChild(UDialogGraphNode* Child)
{
	AddToChildren(Child);
	Child->AddToParent(this);
}

void UDialogGraphNode::ClearLinks()
{
	ParentNodes.Empty();
	ChildNodes.Empty();
}

bool UDialogGraphNode::RemoveLinkedNode(UDialogGraphNode* NodeToRemove)
{
	return RemoveNodeFromParents(NodeToRemove) || RemoveNodeFromChilds(NodeToRemove);
}

bool UDialogGraphNode::RemoveNodeFromParents(UDialogGraphNode* NodeToRemove)
{
	int32 ItemsRemovedCount = ParentNodes.Remove(NodeToRemove);
	if (ItemsRemovedCount == 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool UDialogGraphNode::RemoveNodeFromChilds(UDialogGraphNode* NodeToRemove)
{
	int32 ItemsRemovedCount = ChildNodes.Remove(NodeToRemove);
	if (ItemsRemovedCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

#if WITH_ENGINE

UWorld* UDialogGraphNode::GetWorld() const
{
	if (Graph)
	{
		return Graph->GetWorld();
	}

	return nullptr;
}

#endif