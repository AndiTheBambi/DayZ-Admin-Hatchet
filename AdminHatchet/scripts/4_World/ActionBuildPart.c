modded class ActionBuildPartCB
{
    override void CreateActionComponent()
    {
        ItemBase item = m_ActionData.m_MainItem;

        if (item && item.isNDAdminTool())
        {
            m_ActionData.m_ActionComponent = new CAContinuousTime(0.5);
            return;
        }
        super.CreateActionComponent();
    }
}

modded class ActionBuildPart
{
	override void OnFinishProgressServer( ActionData action_data )
	{
		BaseBuildingBase base_building = BaseBuildingBase.Cast( action_data.m_Target.GetObject() );
		Construction construction = base_building.GetConstruction();
		
		string part_name = BuildPartActionData.Cast(action_data).m_PartType;
		
		if ( action_data.m_MainItem.isNDAdminTool() )
        {
			construction.AdminBuildPartServer( action_data.m_Player, part_name, AT_BUILD_PART );
        }

		if ( !construction.IsColliding( part_name ) && construction.CanBuildPart( part_name, action_data.m_MainItem, true ) )
		{
			construction.BuildPartServer( action_data.m_Player, part_name, AT_BUILD_PART );
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.BUILD, false );
		}
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
}
