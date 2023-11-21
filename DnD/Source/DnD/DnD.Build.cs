// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DnD : ModuleRules
{
	public DnD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "Landscape",
            "InputCore",
            "NavigationSystem",
            "AIModule",
            "Niagara",
            "EnhancedInput"
        });
    }
}
