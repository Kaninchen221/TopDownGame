// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/StackBasedStateMachine.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTStackBasedStateMachineTest, "Project.UnitTests.UStackBasedStateMachine", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTStackBasedStateMachineTest::RunTest(const FString& Parameters)
{

    auto CreateStackBasedStateMachine = [&]() -> UStackBasedStateMachine* {
         UStackBasedStateMachine* StateMachine = NewObject<UStackBasedStateMachine>();
         TestNotNull("Created State MAchine can't be null", StateMachine);
         return StateMachine;
    };

    auto AddStateToStateMachine = [&](UStackBasedStateMachine* StateMachine, const FString& Key) -> UTPStateBase* {
        UTPStateBase* State = NewObject<UTPStateBase>();
        TestNotNull("State can't be null", State);

        UTPStateBase* AddStateResult = StateMachine->AddState(Key, State);
        return AddStateResult;
    }; 
    
    auto AddInvalidStateToStateMachine = [&](UStackBasedStateMachine* StateMachine, const FString& Key) -> UTPStateBase* {
        UTPStateBase* AddStateResult = StateMachine->AddState(Key, (UTPStateBase*)nullptr);
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
        UTPStateBase* ExpectedTopState = AddStateToStateMachine(StateMachine, "State_1");

        bool PushedState = StateMachine->PushState(StateName);
        TestTrue("State must be pushed", PushedState);

        UTPStateBase* ActualTopState = StateMachine->TopState();
        TestNotNull("TopState", ActualTopState);
        TestEqual("ActualTopState address and ExpectedTopState address must be equal", ActualTopState, ExpectedTopState);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        FString StateName = "State_1";
        AddStateToStateMachine(StateMachine, "State_1");

        StateMachine->PushState(StateName);
        StateMachine->PopState();

        UTPStateBase* ActualTopState = StateMachine->TopState();
        TestNull("Actual top state must be null", ActualTopState);
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        StateMachine->PopState();
    }

    {
        UStackBasedStateMachine* StateMachine = CreateStackBasedStateMachine();

        UObject* ControledObject = NewObject<UTPStateBase>();

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
        UTPStateBase* ExpectedState = AddStateToStateMachine(StateMachine, Key1);

        FString Key2 = "Key2";
        AddStateToStateMachine(StateMachine, Key2);

        StateMachine->ChangeCurrentState(Key1);

        UTPStateBase* ActualState = StateMachine->TopState();
        TestEqual("Top State must be same as Expected State", ActualState, ExpectedState);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS