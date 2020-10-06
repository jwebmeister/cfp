//////////////////////////////////////////////////////////////////////////////////

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class O_recon_F;
    class O_recon_F_OCimport_01 : O_recon_F { scope = 0; class EventHandlers; };
    class O_recon_F_OCimport_02 : O_recon_F_OCimport_01 { class EventHandlers; };

    class CUP_O_DSHKM_SLA;
    class CUP_O_2b14_82mm_SLA;
    class CUP_O_DSHKM_MiniTripod_SLA;
    class CUP_O_D30_SLA;
    class CUP_O_SPG9_SLA;

    class CUP_I_Hilux_unarmed_TK;
    class CUP_Hilux_DSHKM_base;

    class B_G_Van_01_transport_F;
    class B_G_Van_01_transport_F_OCimport_01 : B_G_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Van_01_transport_F_OCimport_02 : B_G_Van_01_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };

    class B_G_Offroad_01_AT_F;
    class B_G_Offroad_01_AT_F_OCimport_01 : B_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_AT_F_OCimport_02 : B_G_Offroad_01_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class CUP_O_Ural_SLA;
    class CUP_O_Ural_SLA_OCimport_01 : CUP_O_Ural_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_SLA_OCimport_02 : CUP_O_Ural_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T34_TKA_OCimport_02 : CUP_O_T34_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class FrontGunner;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_O_T55_TK;
    class CUP_O_T55_TK_OCimport_01 : CUP_O_T55_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T55_TK_OCimport_02 : CUP_O_T55_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_BTR60_TK;
    class CUP_O_BTR60_TK_OCimport_01 : CUP_O_BTR60_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR60_TK_OCimport_02 : CUP_O_BTR60_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoGunner_1;
            class CargoGunner_2;
        };
    };

    class CUP_O_BTR40_TKA;
    class CUP_O_BTR40_TKA_OCimport_01 : CUP_O_BTR40_TKA { scope = 0; class EventHandlers; };
    class CUP_O_BTR40_TKA_OCimport_02 : CUP_O_BTR40_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR40_MG_TKA_OCimport_02 : CUP_O_BTR40_MG_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BRDM2_CSAT;
    class CUP_O_BRDM2_CSAT_OCimport_01 : CUP_O_BRDM2_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BRDM2_CSAT_OCimport_02 : CUP_O_BRDM2_CSAT_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_UAZ_Open_TKA;
    class CUP_O_UAZ_Open_TKA_OCimport_01 : CUP_O_UAZ_Open_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_Open_TKA_OCimport_02 : CUP_O_UAZ_Open_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class CUP_O_Ural_ZU23_TKA;
    class CUP_O_Ural_ZU23_TKA_OCimport_01 : CUP_O_Ural_ZU23_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_ZU23_TKA_OCimport_02 : CUP_O_Ural_ZU23_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_LR_Ambulance_TKA;
    class CUP_O_LR_Ambulance_TKA_OCimport_01 : CUP_O_LR_Ambulance_TKA { scope = 0; class EventHandlers; };
    class CUP_O_LR_Ambulance_TKA_OCimport_02 : CUP_O_LR_Ambulance_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class CUP_O_Mi24_D_Dynamic_SLA;
    class CUP_O_Mi24_D_Dynamic_SLA_OCimport_01 : CUP_O_Mi24_D_Dynamic_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi24_D_Dynamic_SLA_OCimport_02 : CUP_O_Mi24_D_Dynamic_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_SA330_Puma_HC1_RACS;
    class CUP_I_SA330_Puma_HC1_RACS_OCimport_01 : CUP_I_SA330_Puma_HC1_RACS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_SA330_Puma_HC1_RACS_OCimport_02 : CUP_I_SA330_Puma_HC1_RACS_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_RG31E_M2_OD_USMC;
    class CUP_B_RG31E_M2_OD_USMC_OCimport_01 : CUP_B_RG31E_M2_OD_USMC { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_RG31E_M2_OD_USMC_OCimport_02 : CUP_B_RG31E_M2_OD_USMC_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_MLARMY_Rifleman_01 : O_Soldier_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
	    genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};
        uniformClass = "CFP_BDU_Wdl_Mali";

        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_M1Helmet_GrayDim","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	randomGearProbability = 100;

	// Malian Army Uniforms
		uniformList[] = {
	"CFP_BDU_Wdl_Mali", 1.0
		};

	// Malian Army Headgear
		headgearList[] = {
	"SP_M1Helmet_GrayDim", 0.4,
	"SP_M1Helmet_Green", 0.4,
	"SP_M1Helmet_Black", 0.4,
	"CFP_PatrolCap_MaliWdl", 0.4,
    "CUP_H_Ger_M92_Black", 0.25,
    "CUP_H_Ger_M92_RGR", 0.25,
    "CUP_H_Ger_M92", 0.25,
    "CUP_H_Ger_M92_Tan", 0.25,
    "SP_BeanieHat_Black", 0.2,
    "SP_BeanieHat_Green", 0.2,
    "SP_BeanieHat_Tan", 0.2,
	"SP_Beret2_Black", 0.3
		};

    //Facewear
        facewearList[] = {
    "", 0.4,
    "CFP_Oakleys_Clr", 0.2,
    "CFP_Oakleys_Drk", 0.5,
    "CFP_Oakleys_Embr", 0.2,
    "CFP_Neck_Wrap2", 0.3,
    "CFP_Neck_Wrap3", 0.3,
    "CFP_Neck_Wrap4", 0.3,
    "CFP_Neck_Plain2", 0.2,
    "CFP_Neck_Plain3", 0.2,
    "CFP_Neck_Plain4", 0.2,
    "CFP_Scarfshades_tan", 0.3,
    "CFP_Scarfshades_grey", 0.3,
    "CFP_Scarfshades_white", 0.3,
    "CFP_Scarfshades_green", 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_MALI_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_MALI_SHIELD";

    };

    class CFP_B_MLARMY_Squad_Leader_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Squad_Leader_01.JPG;

        displayName = "Squad Leader";


        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_M1Helmet_Green","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Rifleman_AT_01 : O_Soldier_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Rifleman_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        side = 1;
        genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};
        uniformClass = "CFP_BDU_Wdl_Mali";

        backpack = "CUP_B_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_BDU_Wdl_Mali",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_M1Helmet_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        // Malian Army Uniforms
            uniformList[] = {
        "CFP_BDU_CEU", 0.8,
        "CFP_BDU_M81", 0.2,
        "CFP_BDU_Green", 0.33
            };

        // Malian Army Headgear
            headgearList[] = {
        "SP_M1Helmet_GrayDim", 0.4,
        "SP_M1Helmet_Green", 0.4,
        "SP_M1Helmet_Black", 0.4,
        "CFP_PatrolCap_CEU", 0.4,
        "SP_PatrolCap_Green", 0.2,
        "CUP_H_Ger_M92_Black", 0.2,
        "CUP_H_Ger_M92_RGR", 0.2,
        "CUP_H_Ger_M92", 0.2,
        "CUP_H_Ger_M92_Tan", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Green", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_Beret2_Black", 0.2
            };

        //Facewear
            facewearList[] = {
        "", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.5,
        "CFP_Oakleys_Embr", 0.2,
        "CFP_Neck_Wrap2", 0.3,
        "CFP_Neck_Wrap3", 0.3,
        "CFP_Neck_Wrap4", 0.3,
        "CFP_Neck_Plain2", 0.2,
        "CFP_Neck_Plain3", 0.2,
        "CFP_Neck_Plain4", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3
            };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_MALI_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_MALI_SHIELD";

    };

    class CFP_B_MLARMY_Machine_Gunner_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Machine_Gunner_01.JPG;

        displayName = "Machine Gunner";

        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{}},{"CFP_AK_VEST_LOlive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",4,100}}},"SP_M1Helmet_GrayDim","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Grenadier_01 : CFP_B_MLARMY_Rifleman_AT_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Grenadier_01.JPG;

        displayName = "Grenadier";


        weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_PatrolCap_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_PatrolCap_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",6,1}}},{},"SP_PatrolCap_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Explosive_Specialist_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Explosive_Specialist_01.JPG;

        displayName = "Explosive Specialist";
        engineer = 1;
        canDeactivateMines = 1;

        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"CUP_PipeBomb_M",1,1},{"APERSTripMine_Wire_Mag",1,1}}},"SP_M1Helmet_GrayDim","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Medic_01 : CFP_B_MLARMY_Rifleman_AT_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Medic_01.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        backpack = "B_AssaultPack_rgr";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_PatrolCap_GreenOlive","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_PatrolCap_GreenOlive","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"SP_PatrolCap_GreenOlive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Sniper_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Sniper_01.JPG;

        displayName = "Sniper";

        weapons[] = {"CUP_srifle_SVD","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_SVD","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_M1Helmet_GrayDim","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_AK_VEST_LOlive",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"SP_M1Helmet_GrayDim","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Crew_01 : O_Soldier_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Crew_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew";
        side = 1;
	    genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};
        uniformClass = "CFP_BDU_Wdl_Mali";


        weapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        linkedItems[] = {"CUP_V_CDF_OfficerBelt","SP_TSH04Helmet_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_CDF_OfficerBelt","SP_TSH04Helmet_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_BDU_Wdl_Mali",{{"CUP_8Rnd_9x18_Makarov_M",3,8}}},{"CUP_V_CDF_OfficerBelt",{}},{},"SP_TSH04Helmet_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_MALI_NAME'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_MALI_NAME";

    };

    class CFP_B_MLARMY_Helicopter_Pilot_01 : O_helipilot_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Helicopter_Pilot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};

        uniformClass = "SP_0000_Standard_FieldUniform_Tan";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Tan",{{"FirstAidKit",1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"CUP_30Rnd_545x39_AK74_plum_M",2,30}}},{"V_TacVest_khk",{{"Chemlight_red",2,1},{"CUP_30Rnd_545x39_AK74_plum_M",1,30}}},{},"H_PilotHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_SF_Rifleman_01 : O_recon_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SF_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SF Rifleman";
        side = 1;
        genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};

        uniformClass = "CFP_BDU_M81Mali";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Mali",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"MiniGrenade",2,1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CFP_BoonieHat2_M81Mali","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Facewear
            facewearList[] = {
        "", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.5,
        "CFP_Oakleys_Embr", 0.2,
        "CFP_Neck_Wrap2", 0.3,
        "CFP_Neck_Wrap3", 0.3,
        "CFP_Neck_Wrap4", 0.3,
        "CFP_Neck_Plain2", 0.2,
        "CFP_Neck_Plain3", 0.2,
        "CFP_Neck_Plain4", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3
            };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_MALI_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_SF_Team_Leader_01 : CFP_B_MLARMY_SF_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SF_Team_Leader_01.JPG;

        displayName = "SF Team Leader";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_GL","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Mali",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"MiniGrenade",2,1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_cbr",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"CFP_BoonieHat2_M81Mali","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_SF_Machine_Gunner_01 : CFP_B_MLARMY_SF_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SF_Machine_Gunner_01.JPG;

        displayName = "SF Machine Gunner";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74_45","Binocular"};
        respawnWeapons[] = {"CUP_arifle_RPK74_45","Binocular"};

        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_45","","","",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_BDU_M81Mali",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,45}}},{"V_I_G_resistanceLeader_F",{{"MiniGrenade",2,1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45}}},{"B_AssaultPack_cbr",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45}}},"CFP_BoonieHat2_M81Mali","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_SF_Explosive_Specialist_01 : CFP_B_MLARMY_SF_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SF_Explosive_Specialist_01.JPG;

        displayName = "SF Explosive Specialist";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Mali",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"MiniGrenade",2,1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_Kitbag_cbr",{{"MineDetector",1},{"ToolKit",1},{"DemoCharge_Remote_Mag",5,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1}}},"CFP_BoonieHat2_M81Mali","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_SF_Medic_01 : CFP_B_MLARMY_SF_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SF_Medic_01.JPG;

        displayName = "SF Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_BoonieHat2_M81Mali","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Mali",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"MiniGrenade",2,1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_cbr",{{"FirstAidKit",10},{"Medikit",1}}},"CFP_BoonieHat2_M81Mali","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Officer_01 : O_Soldier_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Officer_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        genericNames = "Afromen";
        faction = "CFP_B_MLARMY";

        identityTypes[] = {"Head_African","LanguageFRE_F"};

        uniformClass = "CFP_BDU_Wdl_Mali";

        linkedItems[] = {"CUP_V_CDF_OfficerBelt","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CDF_OfficerBelt","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"hgun_Pistol_01_F"};
        respawnWeapons[] = {"hgun_Pistol_01_F"};

        magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_01_F","","","",{"10Rnd_9x21_Mag",10},{},""},{"CFP_BDU_Wdl_Mali",{{"FirstAidKit",1},{"10Rnd_9x21_Mag",3,10}}},{"CUP_V_CDF_OfficerBelt",{}},{},"SP_Beret2_Black","CFP_Scarfshades_green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Facewear
            facewearList[] = {
        "", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.5,
        "CFP_Oakleys_Embr", 0.2,
        "CFP_Neck_Wrap2", 0.3,
        "CFP_Neck_Wrap3", 0.3,
        "CFP_Neck_Wrap4", 0.3,
        "CFP_Neck_Plain2", 0.2,
        "CFP_Neck_Plain3", 0.2,
        "CFP_Neck_Plain4", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3
            };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_MALI_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_MALI_SHIELD";

    };

    class CFP_B_MLARMY_Gunner_DShKM_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Gunner_DShKM_01.JPG;

        displayName = "Gunner [DShKM]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_MaliWdl","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_MaliWdl","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CFP_PatrolCap_MaliWdl","CFP_Oakleys_Drk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Asst_Gunner_DShKM_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"CUP_H_Ger_M92","CFP_Oakleys_Clr",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Gunner_Mortar_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_BeanieHat_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","SP_BeanieHat_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"SP_BeanieHat_Green","CFP_Neck_Plain2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_Asst_Gunner_Mortar_01 : CFP_B_MLARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Wdl_Mali",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"SP_Beret2_Black","CFP_Neck_Plain4",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_MLARMY_DShKM_01 : CUP_O_DSHKM_SLA {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
    };

    class CFP_B_MLARMY_Podnos_2B14_01 : CUP_O_2b14_82mm_SLA  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Podnos_2B14_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14 ";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
    };

    class CFP_B_MLARMY_DShKM_Mini_tripod_01 : CUP_O_DSHKM_MiniTripod_SLA  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_DShKM_Mini_tripod_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM Mini tripod";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
    };

    class CFP_B_MLARMY_D30_01 : CUP_O_D30_SLA  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_D30_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
    };

    class CFP_B_MLARMY_SPG_9_01 : CUP_O_SPG9_SLA  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SPG_9_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
    };

    class CFP_B_MLARMY_Technical_Armed_01 : CUP_Hilux_DSHKM_base  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Technical_Armed_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [Armed]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)
    };
    class CFP_B_MLARMY_Technical_01 : CUP_I_Hilux_unarmed_TK  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Technical_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical ";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)
    };

    class CFP_B_MLARMY_Truck_01 : B_G_Van_01_transport_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Truck_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Technical_AT_01 : B_G_Offroad_01_AT_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Technical_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [AT]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionstextures[] = {
            "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
            "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_01 : CUP_O_Ural_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_Ammo_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_Refuel_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_open_iran.paa","\x\cfp\addons\vehicles\Ural\ural_fuel_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_Repair_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_Open_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Open]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_open_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Land_Rover_Ambulance_01 : CUP_O_LR_Ambulance_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Land_Rover_Ambulance_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover [Ambulance]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_amb_ext_desert_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_T34_01 : CUP_O_T34_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_T34_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-34";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Crew_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\T34\t34_body01_desert.paa",
            "\x\cfp\addons\vehicles\T34\t34_body02_desert.paa",
            "\x\cfp\addons\vehicles\T34\t34_turret_desert.paa",
            "\x\cfp\addons\vehicles\T34\t34_wheels_desert.paa",
            "\x\cfp\addons\vehicles\T34\t34_body03_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Crew_01"; };
            class FrontGunner : FrontGunner { gunnerType = "CFP_B_MLARMY_Crew_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_T55_01 : CUP_O_T55_TK_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_T55_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Crew_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\t55\t55_body_desert.paa","\x\cfp\addons\vehicles\t55\t55_tower_desert.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_BTR_60PB_01 : CUP_O_BTR60_TK_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_BTR_60PB_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60PB";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Crew_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR60\desertbody1.paa",
            "\x\cfp\addons\vehicles\BTR60\desertbody2.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Crew_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_MLARMY_Crew_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
            class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_BTR_40_Unarmed_01 : CUP_O_BTR40_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_BTR_40_Unarmed_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-40 [Unarmed] ";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR40\btr40ext_des"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_BTR_40_DShKM_01 : CUP_O_BTR40_MG_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_BTR_40_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-40 [DShKM]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR40\btr40ext_des"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_BRDM_2_01 : CUP_O_BRDM2_CSAT_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_BRDM_2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BRDM-2";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Crew_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\BRDM\brdm2_01_des_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\acr_des_brdm2_02_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_UAZ_01 : CUP_O_UAZ_Open_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_UAZ_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Ural_ZU_23_01 : CUP_O_Ural_ZU23_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Ural_ZU_23_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [ZU-23]";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa","\x\cfp\addons\vehicles\Ural\ural_open_iran.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Harbin_ZB_9_01 : O_Heli_Light_02_unarmed_F_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Harbin_ZB_9_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Harbin ZB-9";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Orca\Orca_Mali.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_MLARMY_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_Mi_35_01 : CUP_O_Mi24_D_Dynamic_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_Mi_35_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Mi24\mi24_01_mali.paa",
            "\x\cfp\addons\vehicles\Mi24\mi24_02_mali.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_SA_330_Puma_01 : CUP_I_SA330_Puma_HC1_RACS_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_SA_330_Puma_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SA-330 Puma";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Puma\Puma_Mali.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_MLARMY_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_MLARMY_RG_31_01 : CUP_B_RG31E_M2_OD_USMC_OCimport_02  {
        editorPreview = \x\cfp\addons\b_mlarmy\data\preview\CFP_B_MLARMY_RG_31_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "RG-31";
        side = 1;
        faction = "CFP_B_MLARMY";
        crew = "CFP_B_MLARMY_Rifleman_01";
        hiddenSelectionsTextures[] = {
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body1_des.paa",
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body2_des.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_rg31\data\exa_rg31_interior2_co.paa",
                    "\x\cfp\addons\vehicles\RG31\id\afr_union.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa",
                    "",
                    ""
                };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_Kitbag_cbr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_MLARMY_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class CUP_RUVehicleBox; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class CFP_B_MLARMY_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(SmokeShellOrange,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_30Rnd_545x39_AK74_plum_M,50);
            mag_xx(Chemlight_red,50);
            mag_xx(MiniGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(10Rnd_9x21_Mag,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };

    class CFP_B_MLARMY_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_30Rnd_545x39_AK74_plum_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(10Rnd_9x21_Mag,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AKM_GL,10);
            weap_xx(CUP_arifle_RPK74_45,10);
            weap_xx(hgun_Pistol_01_F,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_B_MLARMY_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_B_MLARMY_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_BDU_Wdl_Mali,15);
            item_xx(CFP_BDU_CEU,15);
            item_xx(CFP_U_BattleDressUniform_edrl,15);
            item_xx(SP_0000_Standard_FieldUniform_Tan,15);
            item_xx(CFP_BDU_M81Mali,15);
        };
    };
    class CFP_B_MLARMY_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_H_Ger_M92_Black,10);
            item_xx(CFP_Scarfshades_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(Binocular,10);
            item_xx(SP_M1Helmet_GrayDim,10);
            item_xx(CFP_Neck_Wrap4,10);
            item_xx(CFP_PatrolCap_CEU,10);
            item_xx(CFP_Scarfshades_grey,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Neck_Wrap2,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(SP_PatrolCap_Green,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(B_AssaultPack_rgr,10);
            item_xx(SP_BeanieHat_Green,10);
            item_xx(CUP_V_CDF_OfficerBelt,10);
            item_xx(SP_TSH04Helmet_Black,10);
            item_xx(V_TacVest_khk,10);
            item_xx(H_PilotHelmetHeli_O,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(V_I_G_resistanceLeader_F,10);
            item_xx(CFP_BoonieHat2_M81Mali,10);
            item_xx(CFP_Neck_Plain3,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_Neck_Plain2,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(SP_Beret2_Black,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(CFP_Scarfshades_white,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CFP_Oakleys_Embr,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(SP_M1Helmet_Black,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
        };
    };
    class CFP_B_MLARMY_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Malian Government Forces Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(SmokeShellOrange,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_30Rnd_545x39_AK74_plum_M,50);
            mag_xx(Chemlight_red,50);
            mag_xx(MiniGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(10Rnd_9x21_Mag,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AKM_GL,10);
            weap_xx(CUP_arifle_RPK74_45,10);
            weap_xx(hgun_Pistol_01_F,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_H_Ger_M92_Black,10);
            item_xx(CFP_Scarfshades_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(Binocular,10);
            item_xx(SP_M1Helmet_GrayDim,10);
            item_xx(CFP_Neck_Wrap4,10);
            item_xx(CFP_PatrolCap_CEU,10);
            item_xx(CFP_Scarfshades_grey,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Neck_Wrap2,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(SP_PatrolCap_Green,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(B_AssaultPack_rgr,10);
            item_xx(SP_BeanieHat_Green,10);
            item_xx(CUP_V_CDF_OfficerBelt,10);
            item_xx(SP_TSH04Helmet_Black,10);
            item_xx(V_TacVest_khk,10);
            item_xx(H_PilotHelmetHeli_O,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(V_I_G_resistanceLeader_F,10);
            item_xx(CFP_BoonieHat2_M81Mali,10);
            item_xx(CFP_Neck_Plain3,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_Neck_Plain2,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(SP_Beret2_Black,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(CFP_Scarfshades_white,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CFP_Oakleys_Embr,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(SP_M1Helmet_Black,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_BDU_Wdl_Mali,10);
            item_xx(CFP_BDU_CEU,10);
            item_xx(CFP_U_BattleDressUniform_edrl,10);
            item_xx(SP_0000_Standard_FieldUniform_Tan,10);
            item_xx(CFP_BDU_M81Mali,10);
        };
    };

};