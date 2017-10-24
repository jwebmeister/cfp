class CfgPatches
{
	class SP_Goggles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgGlasses
{
	class None;
	class SP_Goggles_Black: None
	{
		scope = 2;
		displayname = "Goggles (Black)";
		model = "\x\cfp\addons\common_character\Models\GogglesBlack.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\Goggles\ui\Black.jpg";
		identityTypes[] = {"NoGlasses",1000};

	};

	class SP_Goggles_Green: None
	{
		scope = 2;
		displayname = "Goggles (Green)";
		model = "\x\cfp\addons\common_character\Models\GogglesGreen.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\Goggles\ui\Green.jpg";
		identityTypes[] = {"NoGlasses",1000};
		

	};

	class SP_Goggles_Tan: None
	{
		scope = 2;
		displayname = "Goggles (Tan)";
		model = "\x\cfp\addons\common_character\Models\GogglesTan.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\Goggles\ui\Tan.jpg";
		identityTypes[] = {"NoGlasses",1000};
		

	};
};