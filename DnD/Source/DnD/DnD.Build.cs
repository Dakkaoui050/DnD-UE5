// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DnD : ModuleRules
{
	public DnD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "ProceduralMeshComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "Landscape",
            "InputCore",
            "UMG",
            "NavigationSystem",
            "AIModule",
            "Niagara",
            "EnhancedInput"
        });

    }
}
