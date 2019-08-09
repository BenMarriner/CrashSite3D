using UnrealBuildTool;

public class CrashSite3DTarget : TargetRules
{
	public CrashSite3DTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CrashSite3D");
	}
}
