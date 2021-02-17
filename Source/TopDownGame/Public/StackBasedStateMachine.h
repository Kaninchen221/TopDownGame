// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Containers/Map.h"
#include "Containers/Array.h"
#include "Containers/ChunkedArray.h"
#include "TPStateBase.h"
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
	UTPStateBase* AddState(FString Key, UTPStateBase* State);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	bool PushState(FString Key);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UTPStateBase* TopState();

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UTPStateBase* CurrentState();

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
	TMap<FString, UTPStateBase*> States;

	TArray<UTPStateBase*> StatesStack;

	UTPStateBase* DefaultState = nullptr;
};
