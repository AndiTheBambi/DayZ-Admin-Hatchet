class NewDawn_Admin_Hatchet extends ToolBase
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionBuildPartSwitch);
		AddAction(ActionMineTree);
		AddAction(ActionMineBush);
		AddAction(ActionBuildPart);
		AddAction(ActionDismantlePart);
		AddAction(ActionDestroyPart);
		AddAction(ActionSawPlanks);
		AddAction(ActionUnrestrainTarget);
	}
	bool isNDAdminTool() {return true;}
}