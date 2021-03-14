using UnrealBuildTool;

public class DialogPluginEditor : ModuleRules
{
    public DialogPluginEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject"
		});

        PrivateDependencyModuleNames.AddRange(new string[] { 
			"UnrealEd",
			"GenericGraphRuntime",
			"GenericGraphEditor",
			"AssetTools",
			"TopDownGame",
			"DialogPluginRuntime"
		});

        //Only if you created the Public and Private folder paths
        PublicIncludePaths.AddRange(
            new string[]
            {
            }
        );

        PrivateIncludePaths.AddRange(
            new string[]
            {
            }
        );
    }
}