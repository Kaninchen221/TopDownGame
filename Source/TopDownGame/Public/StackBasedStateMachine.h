// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Containers/Map.h"
#include "Containers/Array.h"
#include "Containers/ChunkedArray.h"
#include "StateBase.h"
#include "StackBasedStateMachine.generated.h"

/**
 * 
 */
UCLASS(Category = "StateMachine", Blueprintable, BlueprintType)
class TOPDOWNGAME_API UStackBasedStateMachine : public UObject
{
	GENERATED_BODY()

public:
	UStackBasedStateMachine() = default;

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UStateBase* AddState(FString Key, UStateBase* State);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	bool PushState(FString Key);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UStateBase* TopState();

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UStateBase* CurrentState();

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	void PopState();

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	void SetControledObject(UObject* NewControledObject);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	bool SetDefaultState(FString Key);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	void Update();

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	void Tick(float DeltaSeconds);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	void ChangeCurrentState(FString Key);

protected:

	UPROPERTY(Category = "StateMachine", BlueprintReadWrite)
	bool bShrinkStackWhenPossible = false;

private:

	UPROPERTY()
	UObject* ControledObject = nullptr;

	UPROPERTY()
	TMap<FString, UStateBase*> States;

	TArray<UStateBase*> StatesStack;

	UStateBase* DefaultState = nullptr;
};
