// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/Array.h"
#include "DialogNode.h"
#include "Templates/SubclassOf.h"
#include "Dialog.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewCurrentDialogNode);

UCLASS( ClassGroup=(Dialog), Blueprintable, meta=(BlueprintSpawnableComponent) )
class TOPDOWNGAME_API UDialog : public UActorComponent
{
	GENERATED_BODY()


public:	

	UDialog();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	FText Topic;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	UDialogNode* StartNode;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadOnly)
	UDialogNode* CurrentNode;

public:	
	
	UFUNCTION(BlueprintCallable)
	void StartDialog();

	UFUNCTION(BlueprintCallable)
	bool ChooseOption(int Index);

	UFUNCTION(BlueprintCallable)
	void EndDialog();

	UFUNCTION(BlueprintCallable)
	UDialogNode* GetStartNode() { return StartNode; }

	UPROPERTY(Category = "Dialog|Event", BlueprintAssignable)
	FOnNewCurrentDialogNode OnNewCurrentDialogNode;

private:

	void SetCurrentNode(UDialogNode* NewCurrentNode);

};
