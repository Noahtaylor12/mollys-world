// Copyright 2026 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MollysWorld : ModuleRules
{
    public MollysWorld(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { } );
        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystemNull");
    }
}