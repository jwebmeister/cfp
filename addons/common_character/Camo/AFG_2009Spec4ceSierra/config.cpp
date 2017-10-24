#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2 

class CfgPatches
{
	class CFP_AFG_2009Spec4ceSierra
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};

class CfgFactionClasses {
	class CFP_Camo {
		displayName = "CFP Camo";
		priority = 100;
		side = 1;
		icon = "\x\cfp\addons\common_character\Uniforms\Icon\AFG.jpg";

	};
};

class CfgVehicleClasses
{
	class AFG_2009Spec4ceSierra
	{
		displayName = "AFG 2009 Spec4ce Sierra";

		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	class B_Carryall_oucamo;
	
	class AFG_2009Spec4ceSierra_BattleDressUniform: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Battle Dress Uniform)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_BattleDressUniform";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\BattleDressUniform.paa","\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\FieldUniform.paa"};   
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
	};
        class AFG_2009Spec4ceSierra_PulloverUniform: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Pullover Uniform)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_PulloverUniform";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\PulloverUniform.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
        class AFG_2009Spec4ceSierra_ReconUniform: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Recon Uniform)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_ReconUniform";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\ReconUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ReconUniform.paa","\x\cfp\addons\common_character\Uniforms\ReconUniform\0000_Standard\Tan2.paa"};   
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class AFG_2009Spec4ceSierra_FieldUniform: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Field Uniform)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_FieldUniform";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\FieldUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\FieldUniform.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			
			

		};
	};

	class AFG_2009Spec4ceSierra_FieldUniform_SS: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Field Uniform SS)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_FieldUniform_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\FieldUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\FieldUniform.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class AFG_2009Spec4ceSierra_TacticalUniform: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Tactical Uniform)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\TacticalUniform.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			
			

		};
	};

	class AFG_2009Spec4ceSierra_TacticalUniform_SS: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Tactical Uniform SS)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\TacticalUniform.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class AFG_2009Spec4ceSierra_TacticalUniform_TS: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "(Tactical Uniform TS)";
		faction = "CFP_Camo";
		vehicleClass = "AFG_2009Spec4ceSierra";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\TacticalUniform.paa","\x\cfp\addons\common_character\Uniforms\Underwear\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};     };
		};
	};
	

	class cfgWeapons
	{
		class Uniform_Base;
		class UniformItem;
		class InventoryItem_Base_F;
		class ItemCore;
		class HeadGearItem;
		class V_PlateCarrier1_rgr;
		class VestItem;

		class AFG_2009Spec4ceSierra_BattleDressUniform: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Battle Dress Uniform)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\BattleDressUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_BattleDressUniform";
				containerClass="Supply60";
				mass=80;
			};
		};
        class AFG_2009Spec4ceSierra_PulloverUniform: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Pullover Uniform)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\PulloverUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_PulloverUniform";
				containerClass="Supply60";
				mass=80;
			};
		};
        class AFG_2009Spec4ceSierra_ReconUniform: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Recon Uniform)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\ReconUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_ReconUniform";
				containerClass="Supply60";
				mass=80;

			};
		};

		class AFG_2009Spec4ceSierra_FieldUniform: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Field Uniform)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\FieldUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_FieldUniform";
				containerClass="Supply60";
				mass=80;
			};
		};

		class AFG_2009Spec4ceSierra_FieldUniform_SS: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Field Uniform SS)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\FieldUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_FieldUniform_SS";
				containerClass="Supply60";
				mass=80;
			};
		};

		class AFG_2009Spec4ceSierra_TacticalUniform: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Tactical Uniform)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\TacticalUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform";
				containerClass="Supply60";
				mass=80;
			};
		};

		class AFG_2009Spec4ceSierra_TacticalUniform_SS: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Tactical Uniform SS)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\TacticalUniform.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform_SS";
				containerClass="Supply60";
				mass=80;
			};
		};

		class AFG_2009Spec4ceSierra_TacticalUniform_TS: Uniform_Base
		{
			scope=1;
			model = "\x\cfp\addons\common_character\Models\Suitpack";
			displayName = "Afghanistan 2009 Spec4ce Sierra (Tactical Uniform TS)";
			picture = "\x\cfp\addons\common_character\Camo\AFG_2009Spec4ceSierra\ui\TacticalUniformTS.jpg";
			author = "SP Craig";

			class ItemInfo: UniformItem
			{
				uniformModel = "-";
				uniformClass = "AFG_2009Spec4ceSierra_TacticalUniform_TS";
				containerClass="Supply60";
				mass=80;			};
			};
		};
	};
//};
