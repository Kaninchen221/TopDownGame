// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPNonPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPNonPlayerCharacterTest, "Project.UnitTests.ATPNonPlayerCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPNonPlayerCharacterTest::RunTest(const FString& Parameters)
{
    auto CreateNonPlayerCharacter = [&]() -> ATPNonPlayerCharacter* {
        auto NonPlayerCharacter = NewObject<ATPNonPlayerCharacter>();
        TestNotNull("NonPlayerCharacter must be initialized", NonPlayerCharacter);
        return NonPlayerCharacter;
    };

    {
        CreateNonPlayerCharacter();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS