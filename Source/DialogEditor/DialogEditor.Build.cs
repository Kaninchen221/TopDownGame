using UnrealBuildTool;

public class DialogEditor : ModuleRules
{
    public DialogEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject",
			"UnrealEd"
		});

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        //Only if you created the Public and Private folder paths
        PublicIncludePaths.AddRange(
            new string[]
            {
                "DialogEditor/Public"
            });

        PrivateIncludePaths.AddRange(
            new string[]
            {
				"DialogEditor/Private"
            });
    }
}