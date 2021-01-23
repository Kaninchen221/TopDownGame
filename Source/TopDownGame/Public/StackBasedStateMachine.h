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

	using FStatesStack = TArray<UStateBase*>;
	
	using FStatesContainer = TMap<FString, UStateBase*>;

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UStateBase* AddState(FString Key, UStateBase* State);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	bool PushState(FString Key);

	UFUNCTION(Category = "StateMachine", BlueprintCallable)
	UStateBase* TopState();

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

	FStatesStack StatesStack;

	UStateBase* DefaultState = nullptr;
};

inline UStateBase* UStackBasedStateMachine::AddState(FString Key, UStateBase* State)
{
	if (State) {
		UStateBase* AddedState = States.Add(Key, State);
		AddedState->OnSetControledObject(ControledObject);
		return AddedState;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Trying add nullptr State with key: %s"), *Key);
		return nullptr;
	}
}

inline bool UStackBasedStateMachine::PushState(FString Key)
{
	auto FindResult = States.Find(Key);
	if (FindResult) {
		StatesStack.Push(*FindResult);
		UStateBase* TopState = StatesStack.Top();
		if (TopState) {
			TopState->OnEnter();
		}
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Can't find state with key: %s"), *Key);
		return false;
	}
}

inline UStateBase* UStackBasedStateMachine::TopState()
{
	int32 StatesOnStack = StatesStack.Num();
	if (StatesOnStack == 0) {
		UE_LOG(LogTemp, Warning, TEXT("States Stack is empty return nullptr"));
		return nullptr;
	}
	else {
		return StatesStack.Top();
	}
}

inline void UStackBasedStateMachine::PopState()
{
	int32 NumOfStatesOnStack = StatesStack.Num();
	if (NumOfStatesOnStack > 0) {
		UStateBase* TopState = StatesStack.Top();
		if (TopState) {
			TopState->OnExit();
		}
		StatesStack.Pop(bShrinkStackWhenPossible);

		NumOfStatesOnStack = StatesStack.Num();
		if (NumOfStatesOnStack > 0) {
			TopState = StatesStack.Top();
			if (TopState) {
				TopState->OnEnter();
			}
		}
		else {
			if (DefaultState) {
				DefaultState->OnEnter();
			}
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Trying to pop element from empty stack"));
	}
}

inline void UStackBasedStateMachine::SetControledObject(UObject* NewControledObject)
{
	ControledObject = NewControledObject;

	for (auto& Pair : States) {
		UStateBase*& State = Pair.Value;
		State->OnSetControledObject(ControledObject);
	}
}

inline bool UStackBasedStateMachine::SetDefaultState(FString Key)
{
	UStateBase** State = States.Find(Key);
	if (State) {
		DefaultState = *State;
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Can't find state with key: %s"), *Key);
		return false;
	}
}

inline void UStackBasedStateMachine::Update()
{
	if (StatesStack.Num() == 0) {
		if (DefaultState) {
			DefaultState->OnUpdate();
		}
	}
	else {
		UStateBase* TopState = StatesStack.Top();
		if (TopState) {
			TopState->OnUpdate();
		}
	}
}

inline void UStackBasedStateMachine::Tick(float DeltaSeconds)
{
	if (StatesStack.Num() == 0) {
		if (DefaultState) {
			DefaultState->OnTick(DeltaSeconds);
		}
	}
	else {
		UStateBase* TopState = StatesStack.Top();
		TopState->OnTick(DeltaSeconds);
	}
}

inline void UStackBasedStateMachine::ChangeCurrentState(FString Key)
{
	UStateBase** State = States.Find(Key);
	if (State) {
		UStateBase* ActualTopState = TopState();
		if (ActualTopState) {
			ActualTopState->OnExit();
			PopState();
		}
		else {
			if (DefaultState) {
				DefaultState->OnExit();
			}
		}
		StatesStack.Push(*State);
		TopState()->OnEnter();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Can't find state with key: %s"), *Key);
	}
}
