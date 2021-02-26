#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogGraphNode.generated.h"

class UDialogGraph;

UCLASS(Abstract, Blueprintable, BlueprintType)
class DIALOGEDITOR_API UDialogGraphNode : public UObject
{
	GENERATED_BODY()

public:
	UDialogGraphNode();


	UFUNCTION(BlueprintPure, Category = "Node Data")
	TArray<UDialogGraphNode*> GetChildren();

	UFUNCTION(BlueprintPure, Category = "Node Data")
	TArray<UDialogGraphNode*> GetParents();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Node Data")
	FText GetNodeTitle();

	virtual FText GetNodeTitle_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Node Data")
	bool HasInputPins();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Node Data")
	bool HasOutputPins();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Data")
	UDialogGraphNode* GetNodePointer();

	virtual UDialogGraphNode* GetNodePointer_Implementation();


	virtual void SetGraph(UDialogGraph* InGraph);
	virtual UDialogGraph* GetGraph();
	virtual void AddToChildren(UDialogGraphNode* NewChildNode);
	virtual void AddToParent(UDialogGraphNode* NewParentNode);
	virtual bool HasParentNodes();
	virtual void LinkArgumentNodeAsChild(UDialogGraphNode* Child);
	virtual void ClearLinks();
	virtual bool RemoveLinkedNode(UDialogGraphNode* NodeToRemove);
	virtual bool RemoveNodeFromParents(UDialogGraphNode* NodeToRemove);
	virtual bool RemoveNodeFromChilds(UDialogGraphNode* NodeToRemove);


#if WITH_ENGINE
	virtual class UWorld* GetWorld() const override;
#endif

protected:

	UPROPERTY()
	UDialogGraph* Graph = nullptr;

	UPROPERTY()
	TArray<UDialogGraphNode*> ParentNodes;

	UPROPERTY()
	TArray<UDialogGraphNode*> ChildNodes;

	UPROPERTY()
	bool bHasInputPins = true;

	UPROPERTY()
	bool bHasOutputPins = true;

	UPROPERTY()
	FText DefaultNodeTitle = FText();

};