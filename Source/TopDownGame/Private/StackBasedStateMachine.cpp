
#include "../Public/StackBasedStateMachine.h"


UStateBase* UStackBasedStateMachine::AddState(FString Key, UStateBase* State)
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

bool UStackBasedStateMachine::PushState(FString Key)
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

UStateBase* UStackBasedStateMachine::TopState()
{
	int32 StatesOnStack = StatesStack.Num();
	if (StatesOnStack == 0) {
		return nullptr;
	}
	else {
		return StatesStack.Top();
	}
}

UStateBase* UStackBasedStateMachine::CurrentState()
{
	int32 StatesOnStack = StatesStack.Num();
	if (StatesOnStack == 0) {
		return DefaultState;
	}
	else {
		return StatesStack.Top();
	}
}

void UStackBasedStateMachine::PopState()
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

void UStackBasedStateMachine::SetControledObject(UObject* NewControledObject)
{
	ControledObject = NewControledObject;

	for (auto& Pair : States) {
		UStateBase*& State = Pair.Value;
		State->OnSetControledObject(ControledObject);
	}
}

bool UStackBasedStateMachine::SetDefaultState(FString Key)
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

void UStackBasedStateMachine::Update()
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

void UStackBasedStateMachine::Tick(float DeltaSeconds)
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

void UStackBasedStateMachine::ChangeCurrentState(FString Key)
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