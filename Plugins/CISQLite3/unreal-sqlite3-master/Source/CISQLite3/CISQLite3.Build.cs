// Copyright (c) 2015 Jussi Saarivirta 2016 conflict.industries MIT License (MIT)

using UnrealBuildTool;

public class CISQLite3 : ModuleRules
{
  public CISQLite3(ReadOnlyTargetRules Target) : base(Target)
  {
	  
    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
    PublicDependencyModuleNames.AddRange(
      new string[] {
        "Engine",
        "Core",
        "CoreUObject"
      }
    );

    PrivateDependencyModuleNames.AddRange(
      new string[] {}
    );

    DynamicallyLoadedModuleNames.AddRange(
      new string[] {}
    );
	
    PublicIncludePaths.AddRange(
      new string[] {
        System.IO.Path.Combine(ModuleDirectory, "Public")
      }
    );

    PrivateIncludePaths.AddRange(
      new string[] {
        System.IO.Path.Combine(ModuleDirectory, "Private")
      }
    );

  }
}
