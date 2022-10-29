modded class Construction
{
	override bool CanBuildPart( string part_name, ItemBase tool, bool use_tool )
	{
		if ( tool && tool.isNDAdminTool() && !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && !HasConflictPart( part_name ) )
		{return true;}
		
		else if ( !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && !HasConflictPart( part_name ) && HasMaterials( part_name ) && (!use_tool || CanUseToolToBuildPart( part_name, tool )) && !MaterialIsRuined(part_name) )
		{return true;}
		
		return false;
	}

	void AdminBuildPartServer( notnull Man player, string part_name, int action_id )
	{
		DestroyCollisionTrigger();
		GetParent().OnPartBuiltServer( player, part_name, action_id );
	}
}
