// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/StateBase.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUStateBaseTypeTest, "TopDownGame.StateMachine.UStateBase", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUStateBaseTypeTest::RunTest(const FString& Parameters)
{

    auto CreateState = [&]() {
        UStateBase* State = NewObject<UStateBase>();
        TestNotNull("Created Statet can't be null", State);
        return State;
    };

    {
        UStateBase* State = CreateState();
    }

    {
        UStateBase* State = CreateState();
        UObject* Object = NewObject<UStateBase>();

        State->OnSetControledObject(Object);
   
    }

    {
        UStateBase* State = CreateState();

        State->OnEnter();
    }

    {
        UStateBase* State = CreateState();

        State->OnUpdate();
    }

    {
        UStateBase* State = CreateState();

        float DeltaSeconds = 34.f;
        State->OnTick(DeltaSeconds);
    }

    {
        UStateBase* State = CreateState();

        State->OnExit();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS