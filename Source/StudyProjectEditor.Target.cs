// Study Project, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class StudyProjectEditorTarget : TargetRules
{
	public StudyProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "StudyProject" } );
	}
}
