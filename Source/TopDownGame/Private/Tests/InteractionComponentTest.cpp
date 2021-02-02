// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/InteractionComponent.h"
#include "../Public/TopDownCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUInteractionComponentTest, "Project.UnitTests.Components.UInteractionComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUInteractionComponentTest::RunTest(const FString& Parameters)
{
    auto CreateInteractionComponent = [&]() -> UInteractionComponent* {
        UInteractionComponent* InteractionComponent = NewObject<UInteractionComponent>();
        TestNotNull("Component can't be null at this stage", InteractionComponent);
        return InteractionComponent;
    };

    auto CreateCharacter = []() -> ATopDownCharacter* {
        ATopDownCharacter* Character = NewObject<ATopDownCharacter>();
        return Character;
    };

    {
        CreateInteractionComponent();
    }

    {
        UInteractionComponent* InteractionComponent = CreateInteractionComponent();
        bool bIsChoosedInteractableCharacterValid = InteractionComponent->IsChoosedInteractableActorValid();
        TestFalse("bIsChoosedInteractableCharacterValid", bIsChoosedInteractableCharacterValid);
    }

    {
        UInteractionComponent* InteractionComponent = CreateInteractionComponent();
        TSoftObjectPtr<AActor> CurrentInteractableActor = InteractionComponent->GetCurrentInteractableActor();
        TestNull("CurrentInteractableActor", CurrentInteractableActor.Get());
    }

    {
        UInteractionComponent* InteractionComponent = CreateInteractionComponent();
        InteractionComponent->NextInteractableActor();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS