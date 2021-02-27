#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "DialogGraph.generated.h"


class UDialogGraphNode;
class UDialogGraphStartNode;
class UEdGraph;


UCLASS(Blueprintable, BlueprintType)
class DIALOGEDITOR_API UDialogGraph : public UObject
{
	GENERATED_BODY()

public:
	UDialogGraph();

	UPROPERTY(BlueprintReadOnly, Category = "DialogEditor|Graph")
	TArray<UDialogGraphNode*> Nodes;

	UPROPERTY(BlueprintReadOnly, Category = "DialogEditor|Graph")
	TMap<FString, UDialogGraphNode*> NamedNodes;

	UPROPERTY(BlueprintReadOnly, Category = "DialogEditor|Graph")
	TMap<UDialogGraphNode*, FString> NodesNames;

	UPROPERTY(BlueprintReadWrite, Category = "DialogEditor|Graph")
	UObject* Owner;

	UFUNCTION(BlueprintPure, Category = "DialogEditor|Graph")
	TArray<UDialogGraphStartNode*> GetStartingNodes();

	UFUNCTION(BlueprintCallable, Category = "DialogEditor|Graph")
	void InitGraph(UObject* ParentObject);


#if WITH_ENGINE

	virtual class UWorld* GetWorld() const override;

#endif


#if WITH_EDITORONLY_DATA

public:

	UPROPERTY()
	UEdGraph* EdGraph;

	template <class T>
	T* SpawnNodeInsideGraph(TSubclassOf<UDialogGraphNode> InNodeClass)
	{
		T* SpawenNode = NewObject<T>(this, InNodeClass);
		AddNode(SpawenNode);
		return SpawenNode;
	}


	virtual void AddNode(UDialogGraphNode* InNode);
	virtual void RemoveNode(UDialogGraphNode* NodeToRemove);

#endif
};
