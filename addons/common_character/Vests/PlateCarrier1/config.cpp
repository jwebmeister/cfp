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
	class CFP_PlateCarrier1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_PlateCarrier
	{
		displayName = "Plate Carrier";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_PlateCarrier1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Black)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};        class SP_PlateCarrier1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Green)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};        class SP_PlateCarrier1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Tan)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};
	
	
	class SP_PlateCarrier1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Grey)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};
	

	class SP_PlateCarrier1_Hunter: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Hunter)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Hunter.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};
	

	class SP_PlateCarrier1_Hunter2: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Hunter2)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\Hunter2.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	
	class SP_PlateCarrier1_ATacsFG: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (A-Tacs FG)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\ATacsFG.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_PlateCarrier1_NodUrban: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Plate Carrier 1 (Nod Urban)";
		picture = "\x\cfp\addons\common_character\Vests\PlateCarrier1\ui\NodUrban.jpg";
		model = "\x\cfp\addons\common_character\Models\PlateCarrier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\PlateCarrier1\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\PlateCarrier1";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 200;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;

				};
			};
		};
	};
};
};
	//};