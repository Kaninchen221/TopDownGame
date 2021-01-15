// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/StackBasedStateMachine.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTStackBasedStateMachineTest, "TopDownGame.StateMachine.UStackBasedStateMachine", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FTStackBasedStateMachineTest::RunTest(const FString& Parameters)
{

    auto CreateStackBasedStateMachine = [&]() -> UStackBasedStateMachine* {
         UStackBasedStateMachine* StateMachine = NewObject<UStackBasedStateMachine>();
         TestNotNull("Created State MAchine can't be null", StateMachine);
         return StateMachine;
    };

    auto AddStateToStateMachine = [&](UStackBasedStateMachine* StateMachine, const FString& Key) -> UStateBase* {
        UStateBase* State = NewObject<UStateBase>();
        TestNotNull("State can't be null", State);

        UStateBase* AddStateResult = StateMachine->AddState(Key, State);
        return AddStateResult;
    }; 
    
    auto AddInvalidStateToStateMachine = [&](UStackBasedStateMachine* StateMachine, const FString& Key) -> UStateBase* {
        UStateBase* AddStateResult = StateMachine->AddState(Key, (UStateBase*)nullptr);
        return AddStateResult;
    };

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        AddStateToStateMachine(StateMachine, "State_1");
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();
    
        FString StateName = "State_1";
        UStateBase* ExpectedTopState = AddStateToStateMachine(StateMachine, "State_1");

        bool PushedState = StateMachine->PushState(StateName);
        TestTrue("State must be pushed", PushedState);

        UStateBase* ActualTopState = StateMachine->TopState();
        TestNotNull("TopState", ActualTopState);
        TestEqual("ActualTopState address and ExpectedTopState address must be equal", ActualTopState, ExpectedTopState);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString StateName = "State_1";
        AddStateToStateMachine(StateMachine, "State_1");

        StateMachine->PushState(StateName);
        StateMachine->PopState();

        UStateBase* ActualTopState = StateMachine->TopState();
        TestNull("Actual top state must be null", ActualTopState);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        StateMachine->PopState();
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        UObject* ControledObject = NewObject<UStateBase>();

        StateMachine->SetControledObject(ControledObject);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString Key = "Placeholder";
        AddStateToStateMachine(StateMachine, Key);

        bool bIsDefaultStateSetted = StateMachine->SetDefaultState(Key);
        TestTrue("Default state must be setted", bIsDefaultStateSetted);

        FString InvalidKey = "InvalidKey";
        bIsDefaultStateSetted = StateMachine->SetDefaultState(InvalidKey);
        TestFalse("Default state can't be setted", bIsDefaultStateSetted);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        StateMachine->Update();
        float DeltaSeconds = 21.37f;
        StateMachine->Tick(DeltaSeconds);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString Key1 = "Key1";
        AddStateToStateMachine(StateMachine, Key1);

        FString Key2 = "Key2";
        AddStateToStateMachine(StateMachine, Key2);

        StateMachine->SetDefaultState(Key2);
        StateMachine->PushState(Key1);
        StateMachine->PushState(Key2);

        StateMachine->Update();
        float DeltaSeconds = 21.37f;
        StateMachine->Tick(DeltaSeconds);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString InvalidStateKey = "InvalidStateKey";
        AddInvalidStateToStateMachine(StateMachine, InvalidStateKey);
        StateMachine->PushState(InvalidStateKey);

        StateMachine->Update();
        float DeltaSeconds = 21.37f;
        StateMachine->Tick(DeltaSeconds);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString Key1 = "Key1";
        StateMachine->ChangeCurrentState(Key1);
        UStateBase* ExpectedState = AddStateToStateMachine(StateMachine, Key1);

        FString Key2 = "Key2";
        AddStateToStateMachine(StateMachine, Key2);

        StateMachine->ChangeCurrentState(Key1);

        UStateBase* ActualState = StateMachine->TopState();
        TestEqual("Top State must be same as Expected State", ActualState, ExpectedState);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS