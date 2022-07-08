// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PMT_Unreal_Cpp : ModuleRules
{
	public PMT_Unreal_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
