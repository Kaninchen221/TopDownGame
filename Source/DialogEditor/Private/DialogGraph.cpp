#include "DialogGraph.h"
#include "DialogGraphNode.h"
#include "DialogGraphStartNode.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "DialogEditor.h"

UDialogGraph::UDialogGraph()
{

#if WITH_EDITORONLY_DATA

	EdGraph = nullptr;

#endif

}

TArray<UDialogGraphStartNode*> UDialogGraph::GetStartingNodes()
{
	TArray<UDialogGraphStartNode*>NodesArray;
	for (UDialogGraphNode* Node : Nodes)
	{
		if (UDialogGraphStartNode* StartNode = Cast<UDialogGraphStartNode>(Node))
			NodesArray.Add(StartNode);
	}
	return NodesArray;
}

void UDialogGraph::InitGraph(UObject* ParentObject)
{
	Owner = ParentObject;
	//it seems that a Rename after the asset has already been assigned in a variable prevents referencing it properly on runtime
	//Rename(nullptr, ParentObject);
}


#if WITH_ENGINE

UWorld* UDialogGraph::GetWorld() const
{
	if (Owner->IsA(UActorComponent::StaticClass()) || Owner->IsA(AActor::StaticClass()))
	{
		return Owner->GetWorld();
	}

	UE_LOG(DialogEditor, Warning, TEXT("It hasn't been possible to retrieve the world context from %s for %s"), *Owner->GetFullName(), *GetFullName());

	return nullptr;

}

#endif

#if WITH_EDITORONLY_DATA

void UDialogGraph::AddNode(UDialogGraphNode* InNode)
{
	InNode->SetGraph(this);
	InNode->Rename(nullptr, this);
	int32 Index = Nodes.Add(InNode);

	UE_LOG(DialogEditor, Log, TEXT("Spawned node at index %d"), Index);
}

void UDialogGraph::RemoveNode(UDialogGraphNode* NodeToRemove)
{
	for (UDialogGraphNode* Node : Nodes)
	{
		Node->RemoveLinkedNode(NodeToRemove);
	}

	int32 Removed = Nodes.Remove(NodeToRemove);

	if (Removed > 0)
	{
		UE_LOG(DialogEditor, Log, TEXT("Node Removed"));
	}
	else
	{
		UE_LOG(DialogEditor, Log, TEXT("The node is not present inside the graph."));
	}
}

#endif
