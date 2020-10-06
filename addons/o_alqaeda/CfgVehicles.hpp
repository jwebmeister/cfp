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

    class CUP_I_Datsun_PK_TK;
    class CUP_I_Datsun_PK_TK_OCimport_01 : CUP_I_Datsun_PK_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_TK_OCimport_02 : CUP_I_Datsun_PK_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_I_Datsun_4seat_TK;
    class CUP_I_Datsun_4seat_TK_OCimport_01 : CUP_I_Datsun_4seat_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_TK_OCimport_02 : CUP_I_Datsun_4seat_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class C_Van_01_transport_F;
    class C_Van_01_transport_F_OCimport_01 : C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_01_transport_F_OCimport_02 : C_Van_01_transport_F_OCimport_01 {
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

    class B_G_Offroad_01_F;
    class B_G_Offroad_01_F_OCimport_01 : B_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_F_OCimport_02 : B_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_armed_F_OCimport_02 : B_G_Offroad_01_armed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_ALQAEDA_Rifleman_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "CFP_O_ALQAEDA";

        identityTypes[] = {"Head_TK","Language_Ackbar","G_IRAN_default"};
        uniformClass = "CFP_U_BattleDressUniform_atacs_au";


        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_atacs_au",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Shemagh_CheckRed","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	randomGearProbability = 100;

	// Al Qaeda Uniforms
		uniformList[] = {
        	"CFP_U_BattleDressUniform_atacs_au", 0.1,
        	"SP_0000_Standard_FieldUniform_Black", 0.1,
        	"CUP_I_B_PMC_Unit_3", 0.1,
        	"CUP_O_TKI_Khet_Partug_04", 0.1,
        	"CFP_U_KhetPartug_Long_olive", 0.1,
        	"CFP_U_BattleDressUniform_ChocChip", 0.1,
        	"CUP_O_TKI_Khet_Partug_02", 0.1,
        	"CFP_U_KhetPartug_Long_light_olive", 0.1,
        	"CUP_I_B_PMC_Unit_24", 0.1,
        	"SP_0000_Standard_PulloverUniform_Tan", 0.1,
        	"SP_0000_Standard_BattleDressUniform_Green", 0.1,
        	"CFP_U_BattleDressUniform_scorpion_w2", 0.1,
        	"SP_0000_Standard_BattleDressUniform_ATacsFG", 0.1,
        	"U_BG_Guerilla2_1", 0.1,
            "CFP_FieldUniform_rogtan_SS", 0.2,
            "CFP_FieldUniform_tanblack_SS", 0.2,
            "CFP_FieldUniform_tanatacs_SS", 0.2,
            "CFP_FieldUniform_marpatm81_SS", 0.2,
            "CFP_FieldUniform_fleckacr_SS", 0.2,
            "CFP_FieldUniform_dcum81_SS", 0.2,
            "CFP_FieldUniform_blackacu_SS", 0.2
		};


	// Al Qaeda Headgear
		headgearList[] = {
            "",0.25,
        	"SP_Shemagh_Black", 0.25,
        	"SP_Shemagh_CheckBlack", 0.25,
        	"SP_Shemagh_CheckGreen", 0.1,
        	"SP_Shemagh_CheckRed", 0.1,
        	"SP_Shemagh_CheckTan", 0.1,
        	"SP_Shemagh_CheckWhite", 0.1,
        	"CFP_Shemagh_Full_Red", 0.3,
            "CFP_Shemagh_Full_Black", 0.3,
            "CFP_Shemagh_Full_Gold", 0.2,
            "CFP_Shemagh_Full_Tan", 0.2,
            "CFP_Shemagh_Full_Green", 0.2,
            "CFP_Shemagh_Full_Creme", 0.2,
            "CFP_Shemagh_Full_White", 0.2
		};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this, 'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ALQAEDA_Team_Leader_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Team_Leader_01.JPG;

        displayName = "Team Leader";

        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Black","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Black","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Shemagh_CheckTan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Grenadier_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Grenadier_01.JPG;

        displayName = "Grenadier";


        weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_3",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",6,1}}},{},"IS_shemag_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Rifleman_AT_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Rifleman_AT_01.JPG;

        displayName = "Rifleman AT";

        backpack = "CUP_B_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckWhite","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckWhite","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_BattleDressUniform_ChocChip",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_Shemagh_CheckWhite","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Explosive_Specialist_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Explosive_Specialist_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        engineer = 1;
        canDeactivateMines = 1;
        side = 0;
        faction = "CFP_O_ALQAEDA";

        identityTypes[] = {"Head_TK","Language_Ackbar","G_IRAN_default"};
        uniformClass = "CUP_O_TKI_Khet_Partug_04";

        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_04",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"DemoCharge_Remote_Mag",5,1},{"ATMine_Range_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"CUP_PipeBomb_M",1,1}}},"","IS_Balaclava",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// Al Qaeda Uniforms
		uniformList[] = {
        	"CFP_U_BattleDressUniform_atacs_au", 0.1,
        	"SP_0000_Standard_FieldUniform_Black", 0.1,
        	"CUP_I_B_PMC_Unit_3", 0.1,
        	"CUP_O_TKI_Khet_Partug_04", 0.1,
        	"CFP_U_KhetPartug_Long_olive", 0.1,
        	"CFP_U_BattleDressUniform_ChocChip", 0.1,
        	"CUP_O_TKI_Khet_Partug_02", 0.1,
        	"CFP_U_KhetPartug_Long_light_olive", 0.1,
        	"CUP_I_B_PMC_Unit_24", 0.1,
        	"SP_0000_Standard_PulloverUniform_Tan", 0.1,
        	"SP_0000_Standard_BattleDressUniform_Green", 0.1,
        	"CFP_U_BattleDressUniform_scorpion_w2", 0.1,
        	"SP_0000_Standard_BattleDressUniform_ATacsFG", 0.1,
        	"U_BG_Guerilla2_1", 0.1,
        	"CUP_U_O_CHDKZ_Lopotev", 0.2,
            "CFP_FieldUniform_rogtan_SS", 0.3,
            "CFP_FieldUniform_tanblack_SS", 0.3,
            "CFP_FieldUniform_tanatacs_SS", 0.3,
            "CFP_FieldUniform_marpatm81_SS", 0.3,
            "CFP_FieldUniform_fleckacr_SS", 0.3,
            "CFP_FieldUniform_dcum81_SS", 0.3,
            "CFP_FieldUniform_blackacu_SS", 0.3
		};

	// Al Qaeda Facewear
		facewearList[] = {
            "G_Balaclava_oli", 0.33,
        	"IS_Balaclava", 0.33,
        	"IS_Balaclava_logo1", 0.33,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3,
            "CFP_Shemagh_Half_Black", 0.3,
            "CFP_Shemagh_Face_Atacsau", 0.3
		};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this, 'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ALQAEDA_Medic_01 : CFP_O_ALQAEDA_Explosive_Specialist_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Medic_01.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "B_AssaultPack_rgr";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_02",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Sniper_01 : CFP_O_ALQAEDA_Explosive_Specialist_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Sniper_01.JPG;

        displayName = "Sniper";


        weapons[] = {"CUP_srifle_SVD","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_SVD","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_KhetPartug_Long_light_olive",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_AK_VEST_LOlive",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Gunner_DShKM_High_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Gunner_DShKM_High_01.JPG;

        displayName = "Gunner [DShKM High]";

        backpack = "CUP_B_DShkM_TripodHigh_Bag";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_24",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"SP_Shemagh_CheckBlue","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Gunner_DShKM_Low_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Gunner_DShKM_Low_01.JPG;

        displayName = "Gunner [DShKM Low]";

        backpack = "CUP_B_DShkM_TripodLow_Bag";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_PulloverUniform_Tan",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"SP_Shemagh_CheckRed","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Gunner_SPG9_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Gunner_SPG9_01.JPG;

        displayName = "Gunner [SPG9]";

        backpack = "CUP_B_SPG9_Tripod_Bag";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_BattleDressUniform_ATacsFG",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"SP_Shemagh_CheckBlack","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Gunner_Mortar_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        backpack = "CUP_B_Podnos_Bipod_Bag";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_scorpion_w2",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"SP_Shemagh_CheckGreen","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Asst_Gunner_DShKM_01 : CFP_O_ALQAEDA_Explosive_Specialist_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        backpack = "CUP_B_DShkM_Gun_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_CHDKZ_Lopotev",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Asst_Gunner_SPG9_01 : CFP_O_ALQAEDA_Explosive_Specialist_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Asst_Gunner_SPG9_01.JPG;

        displayName = "Asst. Gunner [SPG9]";

        backpack = "CUP_B_SPG9_Gun_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"U_BG_Guerilla2_1",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","IS_Balaclava_logo1",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Asst_Gunner_Mortar_01 : CFP_O_ALQAEDA_Explosive_Specialist_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        backpack = "CUP_B_Podnos_Gun_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_olive",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","IS_Balaclava_logo1",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALQAEDA_Machine_Gunner_01 : CFP_O_ALQAEDA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alqaeda\data\preview\CFP_O_ALQAEDA_Machine_Gunner_01.JPG;

        displayName = "Machine Gunner";

        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_Lungee_Shemagh_White","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","CFP_Lungee_Shemagh_White","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"SP_0000_Standard_BattleDressUniform_Green",{}},{"CFP_AK_VEST_Tan",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",4,100}}},"CFP_Lungee_Shemagh_White","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_SPG9_base;
    class CFP_O_ALQAEDA_SPG_9_01 : CUP_SPG9_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

    };

    class CUP_2b14_82mm_Base;
    class CFP_O_ALQAEDA_Podnos_2B14_01 : CUP_2b14_82mm_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

    };

    class CUP_DSHKM_base;
    class CFP_O_ALQAEDA_DShKM_01 : CUP_DSHKM_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_O_ALQAEDA_DShKM_Low_01 : CUP_DSHKM_MiniTripod_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

    };

    class CFP_O_ALQAEDA_Datsun_Pickup_PK_01 : CUP_I_Datsun_PK_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup [PK]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ALQAEDA_Rifleman_01"; };
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

    class CFP_O_ALQAEDA_Datsun_Pickup_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class CFP_O_ALQAEDA_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

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

    class CUP_Hilux_unarmed_Base;
    class CFP_O_ALQAEDA_Hilux_01 :CUP_Hilux_unarmed_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_Hilux_DSHKM_Base;
    class CFP_O_ALQAEDA_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_Hilux_SPG9_Base;
    class CFP_O_ALQAEDA_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_igla_Base;
    class CFP_O_ALQAEDA_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_metis_Base;
    class CFP_O_ALQAEDA_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_podnos_Base;
    class CFP_O_ALQAEDA_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_MLRS_Base;
    class CFP_O_ALQAEDA_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_zu23_Base;
    class CFP_O_ALQAEDA_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_AGS30_Base;
    class CFP_O_ALQAEDA_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_UB32_Base;
    class CFP_O_ALQAEDA_Hilux_UB_32_01 : CUP_Hilux_UB32_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [UB-32]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";
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
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CFP_O_ALQAEDA_Offroad_01 : B_G_Offroad_01_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

    class CFP_O_ALQAEDA_Offroad_M2_01 : B_G_Offroad_01_armed_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad [M2]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_ALQAEDA_Rifleman_01"; };
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

    class CFP_O_ALQAEDA_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Open]";
        side = 0;
        faction = "CFP_O_ALQAEDA";
        crew = "CFP_O_ALQAEDA_Rifleman_01";

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

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox


    class CFP_O_ALQAEDA_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_ALQAEDA_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_lmg_PKM,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_ALQAEDA_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_ALQAEDA_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(SP_0000_Standard_PulloverUniform_Tan,15);
            item_xx(CFP_U_BattleDressUniform_ChocChip,15);
            item_xx(CUP_I_B_PMC_Unit_24,15);
            item_xx(CFP_U_KhetPartug_Long_olive,15);
            item_xx(SP_0000_Standard_BattleDressUniform_Green,15);
            item_xx(CFP_U_KhetPartug_Long_light_olive,15);
            item_xx(CUP_O_TKI_Khet_Partug_02,15);
            item_xx(CUP_O_TKI_Khet_Partug_04,15);
            item_xx(CUP_I_B_PMC_Unit_3,15);
        };
    };
    class CFP_O_ALQAEDA_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_Shemagh_Grey,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_Black,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(G_Balaclava_oli,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(B_AssaultPack_rgr,10);
            item_xx(SP_Shemagh_White,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(IS_Balaclava,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
        };
    };
    class CFP_O_ALQAEDA_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Al Qaeda Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_Shemagh_Grey,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_Black,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(G_Balaclava_oli,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(B_AssaultPack_rgr,10);
            item_xx(SP_Shemagh_White,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(IS_Balaclava,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(SP_0000_Standard_PulloverUniform_Tan,10);
            item_xx(CFP_U_BattleDressUniform_ChocChip,10);
            item_xx(CUP_I_B_PMC_Unit_24,10);
            item_xx(CFP_U_KhetPartug_Long_olive,10);
            item_xx(SP_0000_Standard_BattleDressUniform_Green,10);
            item_xx(CFP_U_KhetPartug_Long_light_olive,10);
            item_xx(CUP_O_TKI_Khet_Partug_02,10);
            item_xx(CUP_O_TKI_Khet_Partug_04,10);
            item_xx(CUP_I_B_PMC_Unit_3,10);
        };
    };
};