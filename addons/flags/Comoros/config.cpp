
class CfgPatches
{
	class CFP_Flags_Comoros
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
	};
};
class CfgVehicles
{
	class FlagPole_F;	
	class Comoros_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Comoros";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Comoros\Comoros.paa""";
		};
	};
};
//};
