// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WalletConnect : ModuleRules
{
	public WalletConnect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"HeadMountedDisplay", 
			"HTTP",
			"Json",
			"JsonUtilities"
		});
	}
}
