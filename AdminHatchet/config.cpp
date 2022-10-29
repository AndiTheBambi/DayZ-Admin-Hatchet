#define _ARMA_

class CfgPatches
{
	class AdminHatchet
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee_Blade","DZ_Characters","DZ_Gear_Tools"};
	};
};

class CfgMods
{
	class AdminHatchet
	{
		dir = "AdminHatchet";
		name = "AdminHatchet";
		credits = "AndiTheBambi";
		version = "0.1";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"AdminHatchet/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	class Hatchet;
	class NewDawn_Admin_Hatchet: Hatchet
	{
		displayName = "Admin Hatchet";
		descriptionShort = "Build Stuff Easily";
		itemSize[] = {1,2};
		fragility = 100.00;
		class Health
		{
			hitpoints = 9999;
			healthLevels[] = {
				{1.0,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
				{0.7,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
				{0.5,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
				{0.3,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
				{0.0,{"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"}}
			};
		};
	};
	
	class Hammer;
	class NewDawn_Admin_Hammer: Hammer
	{
		displayName = "Admin Hammer";
		descriptionShort = "Build Stuff Easily";
		itemSize[] = {1,2};
		fragility = 100.00;
		class Health
		{
			hitpoints = 9999;
			healthLevels[] = {
				{1.0,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
				{0.7,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
				{0.5,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
				{0.3,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
				{0.0,{"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"}}
			};
		};
	};
};
