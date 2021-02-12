// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPStatusValueController.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPStatusValueControllerTest, "Project.UnitTests.UTPStatusValueController", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPStatusValueControllerTest::RunTest(const FString& Parameters)
{

	auto CreateStatusValueController = [&]() -> UTPStatusValueController* {
		UTPStatusValueController* StatusValueController = NewObject<UTPStatusValueController>();
		TestNotNull("StatusValueController can't be null", StatusValueController);
		return StatusValueController;
	};

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 ExpectedMaximumValue = 0;
		int32 ActualMaximumValue = StatusValueController->GetMaximumValue();
		TestEqual("Actual and Expected MaximumValue must be equal", ActualMaximumValue, ExpectedMaximumValue);

		int32 ExpectedMinimumValue = 0;
		int32 ActualMinimumValue = StatusValueController->GetMinimumValue();
		TestEqual("Actual and Expected MinimumValue must be equal", ActualMinimumValue, ExpectedMinimumValue);

		int32 ExpectedCurrentValue = 0;
		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();
		TestEqual("Actual and Expected CurrentValue must be equal", ActualCurrentValue, ExpectedCurrentValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 ExpectedMaximumValue = 1000;
		StatusValueController->SetMaximumValue(ExpectedMaximumValue);

		int32 ActualMaximumValue = StatusValueController->GetMaximumValue();

		TestEqual("Actual and Expected MaximumValue must be equal", ActualMaximumValue, ExpectedMaximumValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MaximumValue = 400;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 ExpectedMinimumValue = 300;
		StatusValueController->SetMinimumValue(ExpectedMinimumValue);

		int32 ActualMinimumValue = StatusValueController->GetMinimumValue();

		TestEqual("Actual and Expected MinimumValue must be equal", ActualMinimumValue, ExpectedMinimumValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MinimumValue = 0;
		StatusValueController->SetMinimumValue(MinimumValue);

		int32 MaximumValue = 1000;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 ExpectedCurrentValue = 500;
		StatusValueController->SetCurrentValue(ExpectedCurrentValue);

		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();

		TestEqual("Actual and Expected CurrentValue must be equal", ActualCurrentValue, ExpectedCurrentValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MaximumValue = 400;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 MinimumValue = 300;
		StatusValueController->SetMinimumValue(MinimumValue);

		int32 InvalidCurrentValue = 100;
		StatusValueController->SetCurrentValue(InvalidCurrentValue);

		int32 ExpectedCurrentValue = MinimumValue;
		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();
		TestEqual("Actual CurrentValue must be clamped to MinimumValue", ActualCurrentValue, ExpectedCurrentValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MaximumValue = 300;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 InvalidCurrentValue = 400;
		StatusValueController->SetCurrentValue(InvalidCurrentValue);

		int32 ExpectedCurrentValue = MaximumValue;
		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();
		TestEqual("Actual CurrentValue must be clamped to MaximumValue", ActualCurrentValue, ExpectedCurrentValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MaximumValue = 100;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 InvalidMinimumValue = 200;
		StatusValueController->SetMinimumValue(InvalidMinimumValue);

		int32 ExpectedMinimumValue = MaximumValue;
		int32 ActualMinimumValue = StatusValueController->GetMinimumValue();

		TestEqual("MinimumValue can't be greater than MaximumValue", ActualMinimumValue, ExpectedMinimumValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MinimumValue = 0;
		StatusValueController->SetMinimumValue(MinimumValue);

		int32 InvalidMaximumValue = -100;
		StatusValueController->SetMaximumValue(InvalidMaximumValue);

		int32 ExpectedMaximumValue = MinimumValue;
		int32 ActualMaximumValue = StatusValueController->GetMaximumValue();

		TestEqual("MaximumValue can't be smaller than MinimumValue", ActualMaximumValue, ExpectedMaximumValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 CurrentValue = 0;
		StatusValueController->SetCurrentValue(CurrentValue);

		int32 MaximumValue = 200;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 MinimumValue = 100;
		StatusValueController->SetMinimumValue(MinimumValue);

		int32 ExpectedCurrentValue = MinimumValue;
		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();

		TestEqual("When minimum value is greater than current value the current value must be increased to minimum value", ActualCurrentValue, ExpectedCurrentValue);
	}

	{
		UTPStatusValueController* StatusValueController = CreateStatusValueController();

		int32 MinimumValue = 0;
		StatusValueController->SetMinimumValue(MinimumValue);

		int32 MaximumValue = 200;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 CurrentValue = 200;
		StatusValueController->SetCurrentValue(CurrentValue);

		MaximumValue = 100;
		StatusValueController->SetMaximumValue(MaximumValue);

		int32 ExpectedCurrentValue = MaximumValue;
		int32 ActualCurrentValue = StatusValueController->GetCurrentValue();

		TestEqual("When maximum value is smaller than current value the current value must be decreased to maximum value", ActualCurrentValue, ExpectedCurrentValue);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS