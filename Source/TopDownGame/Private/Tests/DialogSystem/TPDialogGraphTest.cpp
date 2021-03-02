// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "DialogSystem/TPDialogGraph.h"
#include "DialogSystem/TPDialogGraphNode.h"
#include "DialogSystem/TPDialogGraphEdge.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphTest, "Project.UnitTests.DialogSystem.UTPDialogGraph", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphTest::RunTest(const FString& Parameters)
{
    auto CreateDialogGraph = [&]() -> UTPDialogGraph* {
        UTPDialogGraph* DialogGraph = NewObject<UTPDialogGraph>();
        TestNotNull("DialogGraph can't be null", DialogGraph);
        return DialogGraph;
    };

    {
        UTPDialogGraph* DialogGraph = CreateDialogGraph();

        TSubclassOf<UGenericGraphNode> ExpectedGraphNodeType = UTPDialogGraphNode::StaticClass();
        TSubclassOf<UGenericGraphNode> ActualGraphNodeType =  DialogGraph->NodeType;
        TestEqual("NodeType must be equal to UTPDialogGraphNode", ActualGraphNodeType, ExpectedGraphNodeType);
	}

	{
		UTPDialogGraph* DialogGraph = CreateDialogGraph();

		TSubclassOf<UGenericGraphEdge> ExpectedGraphEdgeType = UTPDialogGraphEdge::StaticClass();
		TSubclassOf<UGenericGraphEdge> ActualGraphEdgeType = DialogGraph->EdgeType;
        TestEqual("EdgeType must be equal to UTPDialogGraphEdge", ActualGraphEdgeType, ExpectedGraphEdgeType);
	}

    {
        UTPDialogGraph* DialogGraph = CreateDialogGraph();

        FString ActualName = DialogGraph->Name;
        TestTrue("ActualName can't be empty", ActualName.IsEmpty());
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS