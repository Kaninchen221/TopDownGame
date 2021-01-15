// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "UObject/Object.h"
#include "UObject/UObjectGlobals.h"
#include "Misc/AutomationTest.h"

#include "../TopDownPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownPlayerCharacterTest, "TopDownGame.Character.ATopDownPlayerCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FATopDownPlayerCharacterTest::RunTest(const FString& Parameters)
{
    auto CreatePlayerCharacter = [&]() -> ATopDownPlayerCharacter* {
        auto PlayerCharacter = NewObject<ATopDownPlayerCharacter>();
        TestNotNull("PlayerCharacter must be initialized", PlayerCharacter);
        return PlayerCharacter;
    };

    {
        auto PlayerCharacter = CreatePlayerCharacter();

        auto CameraArmComponent = PlayerCharacter->GetCameraArmComponent();
        TestNotNull("CameraArmComponent can't be null", CameraArmComponent);
    }

    {
        auto PlayerCharacter = CreatePlayerCharacter();

        auto CameraComponent = PlayerCharacter->GetCameraComponent();
        TestNotNull("CameraComponent can't be null", CameraComponent);
    } 
    
    {
        auto PlayerCharacter = CreatePlayerCharacter();

        auto UI = PlayerCharacter->GetUserInterface();
        TestNull("UserInterface must be null", UI);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS