// Study Project, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class StudyProjectTarget : TargetRules
{
	public StudyProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "StudyProject" } );
	}
}
