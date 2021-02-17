// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPStateBase.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPStateBaseTest, "Project.UnitTests.UTPStateBase", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPStateBaseTest::RunTest(const FString& Parameters)
{

    auto CreateState = [&]() {
        UTPStateBase* State = NewObject<UTPStateBase>();
        TestNotNull("Created Statet can't be null", State);
        return State;
    };

    {
        UTPStateBase* State = CreateState();
    }

    {
        UTPStateBase* State = CreateState();
        UObject* Object = NewObject<UTPStateBase>();

        State->OnSetControledObject(Object);
   
    }

    {
        UTPStateBase* State = CreateState();

        State->OnEnter();
    }

    {
        UTPStateBase* State = CreateState();

        State->OnUpdate();
    }

    {
        UTPStateBase* State = CreateState();

        float DeltaSeconds = 34.f;
        State->OnTick(DeltaSeconds);
    }

    {
        UTPStateBase* State = CreateState();

        State->OnExit();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS