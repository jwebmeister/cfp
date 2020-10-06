//////////////////////////////////////////////////////////////////////////////////
#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_MG_TKA_OCimport_02 : CUP_O_LR_MG_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_SPG9_TKA_OCimport_02 : CUP_O_LR_SPG9_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class CUP_B_M1151_M2_USA;
    class CUP_B_M1151_M2_USA_OCimport_01 : CUP_B_M1151_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1151_M2_USA_OCimport_02 : CUP_B_M1151_M2_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CUP_O_DSHKM_SLA;
    class CUP_O_DSHKM_SLA_OCimport_01 : CUP_O_DSHKM_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_SLA_OCimport_02 : CUP_O_DSHKM_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CFP_O_BH_Rifleman_AK47_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Rifleman_AK47_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AK47)";
        side = 0;
	    genericNames = "AfroMen";
        faction = "CFP_O_BOKOHARAM";

        identityTypes[] = {"Head_African","Language_Ackbar","G_IRAN_default"};
        uniformClass = "CFP_U_KhetPartug_Short_M81";


        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// Boko Haram Gear
    		uniformList[] = {
    	    "CFP_U_KhetPartug_Short_M81", 0.25,
    	    "CFP_U_KhetPartug_Long_M81", 0.25,
    	    "CFP_U_KhetPartug_Long_olive", 0.25,
    	    "CFP_U_KhetPartug_Long_olive_polygon", 0.25,
    	    "CFP_U_KhetPartug_Long_light_olive", 0.25,
    	    "CFP_U_KhetPartug_Short_olive", 0.25,
    	    "CFP_U_KhetPartug_Short_light_olive", 0.25,
    	    "CFP_U_KhetPartug_Short_olive_polygon", 0.25,
    	    "CFP_U_KhetPartug_Long_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Black", 0.2,
            "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
            "CFP_U_KhetPartug_Long_Blue", 0.2,
            "CFP_U_KhetPartug_Long_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Long_Brown", 0.2,
            "CFP_U_KhetPartug_Long_PolygonDesert", 0.2,
            "CFP_U_KhetPartug_Long_Grey", 0.2,
            "CFP_U_KhetPartug_Long_Purple", 0.2,
            "CFP_U_KhetPartug_Long_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Blue", 0.2,
            "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Short_Brown", 0.2,
            "CFP_U_KhetPartug_Short_PolygonDesert", 0.2,
            "CFP_U_KhetPartug_Short_Grey", 0.2,
            "CFP_U_KhetPartug_Short_Purple", 0.2,
            "CFP_U_KhetPartug_Short_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Black", 0.2,
            "CFP_U_KhetPartug_Short_EDRL", 0.2,
            "CFP_U_KhetPartug_Long_EDRL", 0.2,
            "CFP_U_KhetPartug_Short_Woodland", 0.2,
            "CFP_U_KhetPartug_Long_Woodland", 0.2
    		    };

    	// Boko Haram Headgear
    		headgearList[] = {
    	    "SP_Shemagh_Black", 0.2,
    	    "SP_Shemagh_CheckBlack", 0.2,
    	    "SP_Shemagh_CheckGreen", 0.2,
    	    "SP_Shemagh_CheckRed", 0.2,
    	    "SP_Shemagh_CheckTan", 0.2,
    	    "SP_Shemagh_CheckWhite", 0.2,
    	    "CUP_H_TK_Lungee", 0.2,
            "CFP_Shemagh_Full_Red", 0.4,
            "CFP_Shemagh_Full_Black", 0.4,
            "CFP_Shemagh_Full_Gold", 0.3,
            "CFP_Shemagh_Full_Tan", 0.3,
            "CFP_Shemagh_Full_Green", 0.3,
            "CFP_Shemagh_Full_Creme", 0.3,
            "CFP_Shemagh_Full_White", 0.3,
    	    "CUP_H_TKI_Lungee_Open_01", 0.2,
    	    "CUP_H_TKI_Lungee_Open_02", 0.2,
    	    "CUP_H_TKI_Lungee_Open_03", 0.2,
    	    "CUP_H_TKI_Lungee_Open_04", 0.2,
    	    "CUP_H_TKI_Lungee_Open_05", 0.2,
    	    "CUP_H_TKI_Lungee_Open_06", 0.2,
    	    "CUP_H_TKI_Lungee_01", 0.2,
    	    "CUP_H_TKI_Lungee_02", 0.2,
    	    "CUP_H_TKI_Lungee_03", 0.2,
    	    "CUP_H_TKI_Lungee_04", 0.2,
    	    "CUP_H_TKI_Lungee_05", 0.2,
    	    "CUP_H_TKI_Lungee_06", 0.2,
            "CFP_Lungee_Open_Tan", 0.2,
            "CFP_Lungee_Open_LightOlive", 0.2,
            "CFP_Lungee_Open_Grey", 0.2,
            "CFP_Lungee_Open_Creme", 0.2,
            "CFP_Lungee_Open_Brown", 0.2,
            "CFP_Lungee_Open_BlueGrey", 0.2,
            "CFP_Lungee_Open_Blue", 0.2,
            "CFP_Lungee_BlueGrey", 0.2,
            "CFP_Lungee_Brown", 0.2,
            "CFP_Lungee_Green", 0.2,
            "CFP_Lungee_Grey", 0.2,
            "CFP_Lungee_LightOlive", 0.2,
            "CFP_Lungee_Tan", 0.2
    	        };

        // Boko Haram Vests
            vestList[] = {
            "CFP_TakJacket_Woodland", 0.2,
            "CFP_TakJacket_Marpat", 0.2,
            "CFP_TakJacket_M81", 0.2,
            "CFP_TakJacket_EDRL", 0.2,
            "CFP_TakJacket_ChocChip", 0.2,
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_EDRL", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_EDRL", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "CFP_AK_VEST_Olive", 0.2,
            "CFP_AK_VEST_Lime", 0.2,
            "CFP_TakJacket_PolygonWoodland", 0.2,
            "CFP_TakJacket_PolygonDesert", 0.2,
            "CFP_UtilityJacket_PolygonWoodland", 0.2,
            "CFP_UtilityJacket_PolygonDesert", 0.2
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

    class CFP_O_BH_Rifleman_AK74_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Rifleman_AK74_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AK74]";
        side = 0;
        genericNames = "AfroMen";
        faction = "CFP_O_BOKOHARAM";

        identityTypes[] = {"Head_African","Language_Ackbar","G_IRAN_default"};
        uniformClass = "CFP_U_KhetPartug_Short_M81";

        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_oli_F","CUP_H_TKI_Lungee_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","CUP_H_TKI_Lungee_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"CUP_H_TKI_Lungee_02","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        // Boko Haram Gear
            uniformList[] = {
            "CFP_U_KhetPartug_Short_M81", 0.25,
            "CFP_U_KhetPartug_Long_M81", 0.25,
            "CFP_U_KhetPartug_Long_olive", 0.25,
            "CFP_U_KhetPartug_Long_olive_polygon", 0.25,
            "CFP_U_KhetPartug_Long_light_olive", 0.25,
            "CFP_U_KhetPartug_Short_olive", 0.25,
            "CFP_U_KhetPartug_Short_light_olive", 0.25,
            "CFP_U_KhetPartug_Short_olive_polygon", 0.25,
            "CFP_U_KhetPartug_Long_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Black", 0.2,
            "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
            "CFP_U_KhetPartug_Long_Blue", 0.2,
            "CFP_U_KhetPartug_Long_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Long_Brown", 0.2,
            "CFP_U_KhetPartug_Long_PolygonDesert", 0.2,
            "CFP_U_KhetPartug_Long_Grey", 0.2,
            "CFP_U_KhetPartug_Long_Purple", 0.2,
            "CFP_U_KhetPartug_Long_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Blue", 0.2,
            "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Short_Brown", 0.2,
            "CFP_U_KhetPartug_Short_PolygonDesert", 0.2,
            "CFP_U_KhetPartug_Short_Grey", 0.2,
            "CFP_U_KhetPartug_Short_Purple", 0.2,
            "CFP_U_KhetPartug_Short_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Black", 0.2,
            "CFP_U_KhetPartug_Short_EDRL", 0.2,
            "CFP_U_KhetPartug_Long_EDRL", 0.2,
            "CFP_U_KhetPartug_Short_Woodland", 0.2,
            "CFP_U_KhetPartug_Long_Woodland", 0.2
                };

        // Boko Haram Headgear
            headgearList[] = {
            "CUP_H_TKI_Lungee_Open_01", 0.2,
            "CUP_H_TKI_Lungee_Open_02", 0.2,
            "CUP_H_TKI_Lungee_Open_03", 0.2,
            "CUP_H_TKI_Lungee_Open_04", 0.2,
            "CUP_H_TKI_Lungee_Open_05", 0.2,
            "CUP_H_TKI_Lungee_Open_06", 0.2,
            "CFP_Lungee_Open_Tan", 0.2,
            "CFP_Lungee_Open_LightOlive", 0.2,
            "CFP_Lungee_Open_Grey", 0.2,
            "CFP_Lungee_Open_Creme", 0.2,
            "CFP_Lungee_Open_Brown", 0.2,
            "CFP_Lungee_Open_BlueGrey", 0.2,
            "CFP_Lungee_Open_Blue", 0.2
                };

        // Boko Haram Vests
            vestList[] = {
            "CFP_TakJacket_Woodland", 0.2,
            "CFP_TakJacket_Marpat", 0.2,
            "CFP_TakJacket_M81", 0.2,
            "CFP_TakJacket_EDRL", 0.2,
            "CFP_TakJacket_ChocChip", 0.2,
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_EDRL", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_EDRL", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "CFP_AK_VEST_Olive", 0.2,
            "CFP_AK_VEST_Lime", 0.2,
            "CFP_TakJacket_PolygonWoodland", 0.2,
            "CFP_TakJacket_PolygonDesert", 0.2,
            "CFP_UtilityJacket_PolygonWoodland", 0.2,
            "CFP_UtilityJacket_PolygonDesert", 0.2
                };

        // Boko Haram Beards
            facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
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
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3,
            "CFP_Shemagh_Half_Black", 0.3,
            "CFP_Shemagh_Face_Atacsau", 0.3,
            "CFP_Shemagh_Neck_Gold", 0.3,
            "CFP_Shemagh_Neck_Creme", 0.3,
            "CFP_Shemagh_Neck_Red", 0.3,
            "CFP_Shemagh_Neck_White", 0.3,
            "CFP_Shemagh_Neck", 0.3
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

    class CFP_O_BH_Team_Leader_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Team_Leader_01.JPG;

        displayName = "Team Leader [AKM]";


        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","CUP_H_TKI_Lungee_Open_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","CUP_H_TKI_Lungee_Open_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"CUP_H_TKI_Lungee_Open_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Machine_Gunner_PKM_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Machine_Gunner_PKM_01.JPG;

        displayName = "Machine Gunner [PKM]";


        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{}},{"CUP_V_OI_TKI_Jacket2_01",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{},"SP_Shemagh_CheckGreen","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Rifleman_AT_AK47_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Rifleman_AT_AK47_01.JPG;

        displayName = "Rifleman AT [AK47]";

        backpack = "CUP_B_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_oli_F","H_Shemag_olive","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","H_Shemag_olive","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Grenadier_AK74_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Grenadier_AK74_01.JPG;

        displayName = "Grenadier [AK74]";


        weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_oli_F","CUP_H_TKI_Lungee_Open_01","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","CUP_H_TKI_Lungee_Open_01","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",3,1}}},{},"CUP_H_TKI_Lungee_Open_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Medic_AK47_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Medic_AK47_01.JPG;

        displayName = "Medic [AK47]";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "CFP_Kitbag_PolygonWoodland";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_cbr_F","SP_Shemagh_Tan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F","SP_Shemagh_Tan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_cbr_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CFP_Kitbag_PolygonWoodland",{}},"SP_Shemagh_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Explosive_Specialist_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Explosive_Specialist_01.JPG;

        displayName = "Explosive Specialist";
        canDeactivateMines = 1;
        engineer = 1;
        backpack = "CFP_Kitbag_Woodland";
        weapons[] = {"CUP_arifle_AK74M","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"CFP_Kitbag_Woodland",{{"DemoCharge_Remote_Mag",5,1},{"ATMine_Range_Mag",1,1},{"APERSTripMine_Wire_Mag",2,1}}},"SP_Shemagh_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Sniper_SVD_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Sniper_SVD_01.JPG;

        displayName = "Sniper [SVD]";


        weapons[] = {"CUP_srifle_SVD","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_SVD","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"V_TacChestrig_grn_F",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"SP_Shemagh_CheckTan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Sniper_Enfield_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Sniper_Enfield_01.JPG;

        displayName = "Sniper [Enfield]";


        weapons[] = {"CUP_srifle_LeeEnfield_rail","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield_rail","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","CUP_H_TKI_Lungee_05","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","CUP_H_TKI_Lungee_05","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield_rail","","","CUP_optic_LeupoldM3LR",{"CUP_10x_303_M",10},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_10x_303_M",3,10}}},{"V_TacChestrig_grn_F",{{"CUP_10x_303_M",7,10}}},{},"CUP_H_TKI_Lungee_05","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Offroad_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

       class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS2Dirty1";

    };

    class CFP_O_BH_Offroad_MG_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Offroad_MG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad MG";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS2Dirty1";

    };

    class CUP_Hilux_Base;
    class CFP_O_BH_Hilux_01 : CUP_Hilux_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",0.4,
            "BlackIS",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_DSHKM_Base;
    class CFP_O_BH_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_SPG9_Base;
    class CFP_O_BH_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_igla_Base;
    class CFP_O_BH_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_metis_Base;
    class CFP_O_BH_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_podnos_Base;
    class CFP_O_BH_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_MLRS_Base;
    class CFP_O_BH_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_zu23_Base;
    class CFP_O_BH_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_AGS30_Base;
    class CFP_O_BH_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CUP_Hilux_UB32_Base;
    class CFP_O_BH_Hilux_UB_32_01 : CUP_Hilux_UB32_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [UB-32]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        textureList[]=
        {
            "White",1,
            "WhiteIS",1,
            "Blue",1,
            "BlackIS",1,
            "Red",1,
            "RedIS",1,
            "Tan",1,
            "ArmyGreen",1,
            "Guer1",1,
            "Guer3",1,
            "Guer4",1,
            "Guer4IS",1,
            "Guer5",1,
            "Guer6IS",1,
            "Geur7IS",1,
            "Geur9IS",1,
            "Guer9",1,
            "Creme",1,
            "CremeIS",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

    };

    class CFP_O_BH_Pickup_PK_01 : CUP_I_Datsun_PK_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Pickup_PK_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup PK";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Grenadier_AK74_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_2.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"
        };

         class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
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

    class CFP_O_BH_Landrover_SPG9_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Landrover_SPG9_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Landrover [SPG9]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_1.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
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

    class CFP_O_BH_Humvee_M2_01 : CUP_B_M1151_M2_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Humvee_M2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Humvee [M2]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
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

    class CFP_O_BH_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Ural_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Team_Leader_01";

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

    class CFP_O_BH_Landrover_M2_01 : CUP_O_LR_MG_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Landrover_M2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Landrover [M2]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_2.paa"
        };

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
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

    class CFP_O_BH_Gunner_DShKM_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Gunner_DShKM_01.JPG;

        displayName = "Gunner [DShKM]";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","CUP_H_TKI_Lungee_Open_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","CUP_H_TKI_Lungee_Open_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_PolygonDesert",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CUP_H_TKI_Lungee_Open_02","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Asst_Gunner_DShKM_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"CFP_UtilityJacket_PolygonDesert","CUP_H_TKI_Lungee_Open_04","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_PolygonDesert","CUP_H_TKI_Lungee_Open_04","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_light_olive",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_UtilityJacket_PolygonDesert",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"CUP_H_TKI_Lungee_Open_04","CFP_Beard",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Gunner_Mortar_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        linkedItems[] = {"CFP_UtilityJacket_Woodland","SP_Shemagh_White","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_Woodland","SP_Shemagh_White","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_BlueGrey",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_Woodland",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"SP_Shemagh_White","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Asst_Gunner_Mortar_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"CFP_TakJacket_PolygonDesert","CFP_Lungee_Open_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_PolygonDesert","CFP_Lungee_Open_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_PolygonDesert",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_TakJacket_PolygonDesert",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"CFP_Lungee_Open_Grey","CFP_Beard",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Gunner_SPG_01 : CFP_O_BH_Rifleman_AK74_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Gunner_SPG_01.JPG;

        displayName = "Gunner [SPG-9]";

        linkedItems[] = {"CFP_TakJacket_ChocChip","CFP_Lungee_Open_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_ChocChip","CFP_Lungee_Open_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_GreenOlive",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_TakJacket_ChocChip",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"CFP_Lungee_Open_Brown","CFP_Beard",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Asst_Gunner_SPG_01 : CFP_O_BH_Rifleman_AK47_01 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Asst_Gunner_SPG_01.JPG;

        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_Black",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"SP_Shemagh_Grey","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_SPG9_base;
    class CFP_O_BH_SPG_9_01 : CUP_SPG9_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

    };

    class CUP_2b14_82mm_Base;
    class CFP_O_BH_Podnos_2B14_01 : CUP_2b14_82mm_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

    };

    class CUP_DSHKM_base;
    class CFP_O_BH_DShKM_01 : CUP_DSHKM_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_O_BH_DShKM_Low_01 : CUP_DSHKM_MiniTripod_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

    };

    class CUP_D30_base;
    class CFP_O_BH_D30_AT_01 : CUP_D30_base  {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "D30";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";
    };

    class CUP_ZU23_base;
    class CFP_O_BH_ZU_23_01 : CUP_ZU23_base  {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";
    };

    class CFP_O_BH_Offroad_AT_01 : B_G_Offroad_01_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_bokoharam\data\preview\CFP_O_BH_Offroad_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad [AT]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_BH_Rifleman_AK74_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_2.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS4Dirty2";

    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_BOKOHARAM_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_10x_303_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_BOKOHARAM_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_10x_303_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_srifle_LeeEnfield_rail,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CUP_optic_LeupoldM3LR,10);
        };
    };
    class CFP_O_BOKOHARAM_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_BOKOHARAM_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_KhetPartug_Short_EDRL,15);
            item_xx(CFP_U_KhetPartug_Long_olive_polygon,15);
            item_xx(CFP_U_KhetPartug_Short_Woodland,15);
            item_xx(CFP_U_KhetPartug_Short_olive_polygon,15);
            item_xx(CFP_U_KhetPartug_Long_Brown,15);
            item_xx(CFP_U_KhetPartug_Short_olive,15);
            item_xx(CFP_U_KhetPartug_Long_Blue,15);
            item_xx(CFP_U_KhetPartug_Long_light_olive,15);
            item_xx(CFP_U_KhetPartug_Long_Grey,15);
            item_xx(CFP_U_KhetPartug_Short_PolygonDesert,15);
            item_xx(CFP_U_KhetPartug_Long_BlueGrey,15);
            item_xx(CFP_U_KhetPartug_Short_M81,15);
            item_xx(CFP_U_KhetPartug_Short_BlueGrey,15);
            item_xx(CFP_U_KhetPartug_Short_Black,15);
        };
    };
    class CFP_O_BOKOHARAM_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CFP_Lungee_Open_LightOlive,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_TakJacket_EDRL,10);
            item_xx(CUP_H_TKI_Lungee_Open_01,10);
            item_xx(CFP_Beard,10);
            item_xx(CFP_TakJacket_Woodland,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(CUP_H_TKI_Lungee_Open_06,10);
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Lungee_Open_Blue,10);
            item_xx(CFP_UtilityJacket_PolygonWoodland,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(CFP_Lungee_Open_BlueGrey,10);
            item_xx(CFP_Kitbag_Woodland,10);
            item_xx(CUP_H_TK_Lungee,10);
            item_xx(CFP_TakJacket_Marpat,10);
            item_xx(CFP_UtilityJacket_PolygonDesert,10);
            item_xx(CFP_Lungee_Open_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_UtilityJacket_ChocChip,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_TakJacket_M81,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_TakJacket_PolygonDesert,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_TKI_Lungee_01,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
        };
    };
    class CFP_O_BOKOHARAM_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Boko Haram Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_10x_303_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_srifle_LeeEnfield_rail,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CFP_Lungee_Open_LightOlive,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_TakJacket_EDRL,10);
            item_xx(CUP_H_TKI_Lungee_Open_01,10);
            item_xx(CFP_Beard,10);
            item_xx(CFP_TakJacket_Woodland,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(CUP_H_TKI_Lungee_Open_06,10);
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Lungee_Open_Blue,10);
            item_xx(CFP_UtilityJacket_PolygonWoodland,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(CFP_Lungee_Open_BlueGrey,10);
            item_xx(CFP_Kitbag_Woodland,10);
            item_xx(CUP_H_TK_Lungee,10);
            item_xx(CFP_TakJacket_Marpat,10);
            item_xx(CFP_UtilityJacket_PolygonDesert,10);
            item_xx(CFP_Lungee_Open_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_UtilityJacket_ChocChip,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_TakJacket_M81,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_TakJacket_PolygonDesert,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_TKI_Lungee_01,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CFP_U_KhetPartug_Short_EDRL,10);
            item_xx(CFP_U_KhetPartug_Long_olive_polygon,10);
            item_xx(CFP_U_KhetPartug_Short_Woodland,10);
            item_xx(CFP_U_KhetPartug_Short_olive_polygon,10);
            item_xx(CFP_U_KhetPartug_Long_Brown,10);
            item_xx(CFP_U_KhetPartug_Short_olive,10);
            item_xx(CFP_U_KhetPartug_Long_Blue,10);
            item_xx(CFP_U_KhetPartug_Long_light_olive,10);
            item_xx(CFP_U_KhetPartug_Long_Grey,10);
            item_xx(CFP_U_KhetPartug_Short_PolygonDesert,10);
            item_xx(CFP_U_KhetPartug_Long_BlueGrey,10);
            item_xx(CFP_U_KhetPartug_Short_M81,10);
            item_xx(CFP_U_KhetPartug_Short_BlueGrey,10);
            item_xx(CFP_U_KhetPartug_Short_Black,10);
        };
    };

};
