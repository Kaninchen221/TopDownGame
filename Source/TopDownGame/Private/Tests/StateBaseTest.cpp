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

        State->SetControledObject(Object);
   
    }

    {
        UStateBase* State = CreateState();

        State->Enter();
    }

    {
        UStateBase* State = CreateState();

        State->Update();
    }

    {
        UStateBase* State = CreateState();

        float DeltaSeconds = 34.f;
        State->Tick(DeltaSeconds);
    }

    {
        UStateBase* State = CreateState();

        State->Exit();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS