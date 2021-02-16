// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPVanishingComponent.h"

#include "PaperSpriteComponent.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FVanishingComponentTest, "Project.UnitTests.Components.UTPVanishingComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FVanishingComponentTest::RunTest(const FString& Parameters)
{
	auto CreateVanishingComponent = [&]() -> UTPVanishingComponent* {
		UTPVanishingComponent* VanishingComponent = NewObject<UTPVanishingComponent>();
		TestNotNull("VanishingComponent can't be null", VanishingComponent);
		return VanishingComponent;
	};

	auto CreateSpriteComponent = [&]() -> UPaperSpriteComponent* {
		UPaperSpriteComponent* SpriteComponent = NewObject<UPaperSpriteComponent>();
		TestNotNull("SpriteComponent can't be null", SpriteComponent);
		return SpriteComponent;
	};

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();
		UPaperSpriteComponent* ExpectedSpriteComponent = CreateSpriteComponent();

		Component->SetupControlledSpriteComponent(ExpectedSpriteComponent);
		UPaperSpriteComponent* ActualSpriteComponent = Component->GetControlledSpriteComponent();

		TestEqual("Expected and Actual sprite components must be equal", ActualSpriteComponent, ExpectedSpriteComponent);

		EComponentMobility::Type NotExpectedMobilityType = EComponentMobility::Static;
		EComponentMobility::Type ActualMobilityType = Component->Mobility;

		TestNotEqual("Component mobility type can't be Static at this stage", ActualMobilityType, NotExpectedMobilityType);
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();

		float ExpectedMinAlphaChannelValue = 0.65f;
		Component->SetMinAlphaChannelValue(ExpectedMinAlphaChannelValue);

		float ActualMinAlphaChannelValue = Component->GetMinAlphaChannelValue();
		TestEqual("Actual and Expected MinAlphaChannelValues must be equal", ActualMinAlphaChannelValue, ExpectedMinAlphaChannelValue);
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();

		USphereComponent* CollisionComponent = Component->GetCollisionComponent();
		TestNotNull("CollisionComponent can't be null", CollisionComponent);
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();

		const float ExpectedMaxAlphaChannelValue = 1.0f;
		float ActualMaxAlphaChannelValue = Component->GetMaxAlphaChannelValue();

		TestEqual("Expected and Actual MaxAlphaChannelValue must be equal", ActualMaxAlphaChannelValue, ExpectedMaxAlphaChannelValue);
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();

		bool bShouldUpdate = Component->GetShouldUpdate();
		TestFalse("ShouldUpdate should be default false", bShouldUpdate);
	}

	{
		UTPVanishingComponent* Component = CreateVanishingComponent();

		bool bShouldHide = Component->GetShouldHide();
		TestFalse("ShouldHide should be default false", bShouldHide);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS