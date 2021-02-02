// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/VanishingComponent.h"

#include "PaperSpriteComponent.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FVanishingComponentTest, "Project.UnitTests.Components.UVanishingComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FVanishingComponentTest::RunTest(const FString& Parameters)
{
	auto CreateVanishingComponent = [&]() -> UVanishingComponent* {
		UVanishingComponent* VanishingComponent = NewObject<UVanishingComponent>();
		TestNotNull("VanishingComponent can't be null", VanishingComponent);
		return VanishingComponent;
	};

	auto CreateSpriteComponent = [&]() -> UPaperSpriteComponent* {
		UPaperSpriteComponent* SpriteComponent = NewObject<UPaperSpriteComponent>();
		TestNotNull("SpriteComponent can't be null", SpriteComponent);
		return SpriteComponent;
	};

	{
		UVanishingComponent* Component = CreateVanishingComponent();
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();
		UPaperSpriteComponent* ExpectedSpriteComponent = CreateSpriteComponent();

		Component->SetControlledSpriteComponent(ExpectedSpriteComponent);
		UPaperSpriteComponent* ActualSpriteComponent = Component->GetControlledSpriteComponent();

		TestEqual("Expected and Actual sprite components must be equal", ActualSpriteComponent, ExpectedSpriteComponent);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		float ExpectedMinAlphaChannelValue = 0.65f;
		Component->SetMinAlphaChannelValue(ExpectedMinAlphaChannelValue);

		float ActualMinAlphaChannelValue = Component->GetMinAlphaChannelValue();
		TestEqual("Actual and Expected MinAlphaChannelValues must be equal", ActualMinAlphaChannelValue, ExpectedMinAlphaChannelValue);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		USphereComponent* CollisionComponent = Component->GetCollisionComponent();
		TestNotNull("CollisionComponent can't be null", CollisionComponent);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		const float ExpectedMaxAlphaChannelValue = 1.0f;
		float ActualMaxAlphaChannelValue = Component->GetMaxAlphaChannelValue();

		TestEqual("Expected and Actual MaxAlphaChannelValue must be equal", ActualMaxAlphaChannelValue, ExpectedMaxAlphaChannelValue);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		bool bShouldUpdate = Component->GetShouldUpdate();
		TestFalse("ShouldUpdate should be default false", bShouldUpdate);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		bool bShouldHide = Component->GetShouldHide();
		TestFalse("ShouldHide should be default false", bShouldHide);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS