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
UCLASS()
class TOPDOWNGAME_API UStackBasedStateMachine : public UObject
{
	GENERATED_BODY()

public:
	UStackBasedStateMachine() = default;

	using FStatesStack = TArray<UStateBase*>;

	using FKeyType = FString;
	using FStatesContainer = TMap<FKeyType, UStateBase*>;

	UStateBase* AddState(FKeyType Key, UStateBase* State);

	bool PushState(FKeyType Key);

	UStateBase* TopState();

	void PopState();

	void SetControledObject(UObject* NewControledObject);

	bool SetDefaultState(FKeyType Key);

	void Update();

	void Tick(float DeltaSeconds);

private:

	UObject* ControledObject = nullptr;

	FStatesContainer States;

	bool bShrinkStackWhenPossible = false;
	FStatesStack StatesStack;

	UStateBase* DefaultState = nullptr;
};

inline UStateBase* UStackBasedStateMachine::AddState(FKeyType Key, UStateBase* State)
{
	if (State) {
		UStateBase* AddedState = States.Add(Key, State);
		AddedState->SetControledObject(ControledObject);
		return AddedState;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Trying add nullptr State with key: %s"), *Key);
		return nullptr;
	}
}

inline bool UStackBasedStateMachine::PushState(FKeyType Key)
{
	auto FindResult = States.Find(Key);
	if (FindResult) {
		StatesStack.Push(*FindResult);
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
	if (StatesOnStack <= 0) {
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
		StatesStack.Pop(bShrinkStackWhenPossible);
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
		State->SetControledObject(ControledObject);
	}
}

inline bool UStackBasedStateMachine::SetDefaultState(FKeyType Key)
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
	if (StatesStack.Num() == 0 && DefaultState) {
		DefaultState->Update();
	}
	else {
		for (UStateBase* State : StatesStack) {
			State->Update();
		}
	}
}

inline void UStackBasedStateMachine::Tick(float DeltaSeconds)
{
	if (StatesStack.Num() == 0 && DefaultState) {
		DefaultState->Tick(DeltaSeconds);
	}
	else {
		for (UStateBase* State : StatesStack) {
			State->Tick(DeltaSeconds);
		}
	}
}
