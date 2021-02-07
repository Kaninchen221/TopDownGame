// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TopDownGame : ModuleRules
{
	public TopDownGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D", "UMG", "DialogEditor", "CISQLite3" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}
