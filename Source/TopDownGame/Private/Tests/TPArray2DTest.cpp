// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Engine/DataTable.h"

#include <type_traits>

#include "../Public/TPArray2D.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPArray2DTest, "Project.UnitTests.TTPArray2D", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPArray2DTest::RunTest(const FString& Parameters)
{
	auto CreateArray2D = [&](auto InElementType) 
		-> TTPArray2D<decltype(InElementType)>
	{
		return TTPArray2D<decltype(InElementType)>();
	};

	{
		auto Array = CreateArray2D(int());
	}
	
	{
		auto Array = CreateArray2D(int());

		FIntPoint ArraySize(3, 6);
		Array.Resize(ArraySize);

		FIntPoint Location(0, 5);
		bool bIsValidLocation = Array.IsValidLocation(Location);
		TestTrue("Location must be valid", bIsValidLocation);

		Location = FIntPoint(4, 1);
		bIsValidLocation = Array.IsValidLocation(Location);
		TestFalse("Location must be invalid", bIsValidLocation);

		Location = FIntPoint(1, 7);
		bIsValidLocation = Array.IsValidLocation(Location);
		TestFalse("Location must be invalid", bIsValidLocation);
	}

	{
		auto Array = CreateArray2D(int());

		FIntPoint ArraySize(4, 7);
		Array.Resize(ArraySize);

		FIntPoint Location2D(3, 4);
		int32 ActualLocation1D = Array.FlatLocation(Location2D);

		int32 ExpectedLocation1D = 19;
		TestEqual("Actual and Expected location must be equal", ActualLocation1D, ExpectedLocation1D);
	}

	{
		auto Array = CreateArray2D(int());

		FIntPoint ActualSize = Array.GetSize();
		FIntPoint ExpectedSize = FIntPoint(0, 0);

		TestEqual("After constructed the Array2D must have size (0, 0)", ActualSize, ExpectedSize);
	}

	{
		auto Array = CreateArray2D(int());

		FIntPoint ExpectedSize(10, 45);
		Array.Resize(ExpectedSize);

		FIntPoint ActualSize = Array.GetSize();

		TestEqual("Expected and Actual array size must be equal", ActualSize, ExpectedSize);
	}


	{
		auto Array = CreateArray2D(int());

		Array.Resize(FIntPoint(2, 2));
		Array.Resize(FIntPoint(5, 4));
	}

	{
		auto Array = CreateArray2D(NewObject<UDataTable>());
	
		FIntPoint Size(3, 3);
		Array.Resize(Size);
	
		FIntPoint ElementLocation(1, 2);
		UDataTable** ElementPointer = Array.GetElement(ElementLocation);

		TestNotNull("ElementPointer can't be null", ElementPointer);
		TestNull("Dereferenced ElementPointer must be null", *ElementPointer);
	
		*ElementPointer = NewObject<UDataTable>();
		ElementPointer = Array.GetElement(ElementLocation);

		TestNotNull("ElementPointer can't be null", ElementPointer);
		TestNotNull("Dereferenced ElementPointer can't be null", ElementPointer);
	}

	{
		auto Array = CreateArray2D(int());

		FIntPoint InvalidElementLocation(255, 255);
		int* ElementPointer = Array.GetElement(InvalidElementLocation);
		TestNull("ElementPointer must be null", ElementPointer);

		FIntPoint ArraySize(5, 1);
		Array.Resize(ArraySize);

		InvalidElementLocation = FIntPoint(0, 255);
		ElementPointer = Array.GetElement(InvalidElementLocation);
		TestNull("ElementPointer must be null", ElementPointer);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS