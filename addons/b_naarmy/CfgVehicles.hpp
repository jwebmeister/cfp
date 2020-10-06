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

    class O_recon_F;
    class O_recon_F_OCimport_01 : O_recon_F { scope = 0; class EventHandlers; };
    class O_recon_F_OCimport_02 : O_recon_F_OCimport_01 { class EventHandlers; };

    class CUP_O_T72_SLA;
    class CUP_O_T72_SLA_OCimport_01 : CUP_O_T72_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T72_SLA_OCimport_02 : CUP_O_T72_SLA_OCimport_01 {
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

    class CUP_O_BMP2_SLA;
    class CUP_O_BMP2_SLA_OCimport_01 : CUP_O_BMP2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_SLA_OCimport_02 : CUP_O_BMP2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_07;
        };
    };

    class CUP_O_BTR60_SLA;
    class CUP_O_BTR60_SLA_OCimport_01 : CUP_O_BTR60_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR60_SLA_OCimport_02 : CUP_O_BTR60_SLA_OCimport_01 {
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

    class CUP_B_LR_MG_GB_W;
    class CUP_B_LR_MG_GB_W_OCimport_01 : CUP_B_LR_MG_GB_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_LR_MG_GB_W_OCimport_02 : CUP_B_LR_MG_GB_W_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
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

    class CUP_O_Mi8_SLA_2;
    class CUP_O_Mi8_SLA_2_OCimport_01 : CUP_O_Mi8_SLA_2 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi8_SLA_2_OCimport_02 : CUP_O_Mi8_SLA_2_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class SideTurret;
            class BackTurret;
            class FrontTurret;
            class CopilotTurret;
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

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_B_LR_Ambulance_GB_W;
    class CUP_B_LR_Ambulance_GB_W_OCimport_01 : CUP_B_LR_Ambulance_GB_W { scope = 0; class EventHandlers; };
    class CUP_B_LR_Ambulance_GB_W_OCimport_02 : CUP_B_LR_Ambulance_GB_W_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_B_Ridgback_HMG_GB_W;
    class CUP_B_Ridgback_HMG_GB_W_OCimport_01 : CUP_B_Ridgback_HMG_GB_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Ridgback_HMG_GB_W_OCimport_02 : CUP_B_Ridgback_HMG_GB_W_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_Ridgback_LMG_GB_W;
    class CUP_B_Ridgback_LMG_GB_W_OCimport_01 : CUP_B_Ridgback_LMG_GB_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Ridgback_LMG_GB_W_OCimport_02 : CUP_B_Ridgback_LMG_GB_W_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class Mainturret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_Ridgback_GMG_GB_W;
    class CUP_B_Ridgback_GMG_GB_W_OCimport_01 : CUP_B_Ridgback_GMG_GB_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Ridgback_GMG_GB_W_OCimport_02 : CUP_B_Ridgback_GMG_GB_W_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_LR_Transport_CZ_W;
    class CUP_B_LR_Transport_CZ_W_OCimport_01 : CUP_B_LR_Transport_CZ_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_LR_Transport_CZ_W_OCimport_02 : CUP_B_LR_Transport_CZ_W_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_DSHKM_SLA;
    class CUP_O_DSHKM_MiniTripod_SLA;
    class CUP_O_AGS_SLA;
    class CUP_O_SPG9_SLA;
    class CUP_O_Metis_RU;
    class CUP_O_2b14_82mm_SLA;
    class CUP_O_D30_AT_SLA;
    class CUP_O_ZU23_SLA;

    class CFP_B_NAARMY_Squad_Leader_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Squad_Leader_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
	    genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "CFP_BDU_M812";


        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_1","CUP_H_Ger_M92_Tan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","CUP_H_Ger_M92_Tan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// Nigerian Army Uniforms
    		uniformList[] = {
            	"CFP_BDU_PolyDes", 0.6,
                "CFP_BDU_PolyDes2", 0.6,
            	"CFP_BDU_PolyDes3", 0.6,
                "CFP_BDU_PolyDes4", 0.6,
                "CFP_BDU_PolyDes5", 0.6,
                "CFP_BDU_DCU", 0.4,
                "CFP_BDU_DCU2", 0.4,
                "CFP_BDU_DCU3", 0.4,
                "CFP_BDU_DCU4", 0.4,
                "CFP_BDU_DCU5", 0.4,
                "CFP_BDU_M812", 0.2,
            	"CFP_BDU_M813", 0.2,
                "CFP_BDU_M81", 0.2
        	};

    	// Nigerian Army Headgear
    		headgearList[] = {
            	"CUP_H_Ger_M92_Black", 0.25,
                "CUP_H_Ger_M92", 0.25,
                "CUP_H_Ger_M92_RGR", 0.25,
                "CUP_H_Ger_M92_RGR_GG", 0.25,
                "CUP_H_Ger_M92_Tan", 0.25,
                "CFP_PASGTHelmet_DCU2", 0.25,
                "CFP_PASGTHelmet_DCU1", 0.25,
                "CUP_H_Ger_M92_Tan_GG", 0.25
    		};

        //Vests
            vestList[] = {
                "CFP_Osprey1_Wd", 0.25,
                "CFP_Modular1_M81", 0.4,
                "SP_Modular1_Green", 0.4,
                "SP_Modular1_Tan", 0.4,
                "CFP_M23_VEST_M81", 0.4,
                "CFP_M23_VEST_LIME", 0.4,
                "CFP_Modular1_IDF", 0.4,
                "CFP_Modular1_DCU", 0.4,
                "V_I_G_resistanceLeader_F", 0.25,
                "CFP_AK_VEST_Lime", 0.25
            };

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_NAARMY_Rifleman_AKM_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_AKM_01.JPG;

        displayName = "Rifleman [AKM]";


        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Rifleman_AK47_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_AK47_01.JPG;

        displayName = "Rifleman [AK47]";


        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_cbr_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_PolyDes2",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacChestrig_cbr_F",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{},"CUP_H_Ger_M92_RGR","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Machine_Gunner_PKM_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Machine_Gunner_PKM_01.JPG;

        displayName = "Machine Gunner [PKM]";

        backpack = "CFP_Kitbag_PolygonWoodland";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Black1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Black1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_BDU_M812",{}},{"V_TacChestrig_grn_F",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CFP_Kitbag_PolygonWoodland",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"SP_PASGTHelmet_Black1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Rifleman_AT_AK47_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_AT_AK47_01.JPG;

        displayName = "Rifleman AT [AK47]";

        backpack = "CFP_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_oli_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_BDU_PolyDes2",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"CUP_H_Ger_M92_RGR","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Grenadier_AKM_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Grenadier_AKM_01.JPG;

        displayName = "Grenadier [AKM]";


        weapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Tan2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Tan2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_545x39_AK_M",7,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",3,1}}},{},"SP_PASGTHelmet_Tan2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Medic_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Medic_01.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "CFP_AssaultPack_PolygonDesert";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_2","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_2","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_O_TK_Vest_2",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"CFP_AssaultPack_PolygonDesert",{{"FirstAidKit",8}}},"CUP_H_Ger_M92_RGR","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Explosive_Specialist_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Explosive_Specialist_01.JPG;

        displayName = "Explosive Specialist";
        canDeactivateMines = 1;
        backpack = "CFP_AssaultPack_PolygonDesert";
        weapons[] = {"CUP_arifle_AK74M","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M","Throw","Put"};
        linkedItems[] = {"V_TacChestrig_cbr_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F","CUP_H_Ger_M92_RGR","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_BDU_M81",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_TacChestrig_cbr_F",{{"MineDetector",1},{"CUP_30Rnd_545x39_AK_M",7,30}}},{"CFP_AssaultPack_PolygonDesert",{{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",3,1},{"APERSTripMine_Wire_Mag",1,1}}},"CUP_H_Ger_M92_RGR","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Sniper_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Sniper_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
	    genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "CUP_U_B_US_BDU_roll2_glove";


        weapons[] = {"CUP_srifle_G22_wdl","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_G22_wdl","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","H_Booniehat_PolygonWoodland","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Booniehat_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"};
        respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_G22_wdl","","","CUP_optic_LeupoldMk4_10x40_LRT_Woodland",{"CUP_5Rnd_762x67_G22",5},{},""},{},{},{"CUP_U_B_US_BDU_roll2_glove",{{"CUP_5Rnd_762x67_G22",3,5}}},{"CFP_AK_VEST_LOlive",{{"CUP_5Rnd_762x67_G22",7,5}}},{},"CFP_Booniehat_PolygonWoodland","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA";

    };

    class CFP_B_NAARMY_Crew_Officer_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Crew_Officer_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew Officer";
        side = 1;
	    genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "CFP_BDU_PolyDes2";


        weapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        linkedItems[] = {"CUP_V_CDF_OfficerBelt2","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_CDF_OfficerBelt2","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_BDU_PolyDes2",{{"CUP_8Rnd_9x18_Makarov_M",3,8}}},{"CUP_V_CDF_OfficerBelt2",{{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_NIGERIA_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA_SHIELD";

    };

    class CFP_B_NAARMY_Crew_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Crew_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew";
        side = 1;
	   genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "CFP_BDU_PolyDes2";


        weapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        linkedItems[] = {"CUP_V_CDF_CrewBelt","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_CDF_CrewBelt","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_BDU_PolyDes2",{}},{"CUP_V_CDF_CrewBelt",{{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_NIGERIA_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA_SHIELD";

    };

    class CFP_B_NAARMY_Helicopter_Pilot_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Helicopter_Pilot_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
	   genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "SP_0000_Standard_FieldUniform_Green";


        weapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        linkedItems[] = {"CUP_V_B_PilotVest","CUP_H_BAF_Helmet_Pilot","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_PilotVest","CUP_H_BAF_Helmet_Pilot","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M"};
        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"SP_0000_Standard_FieldUniform_Green",{}},{"CUP_V_B_PilotVest",{}},{},"CUP_H_BAF_Helmet_Pilot","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_NIGERIA_NAME'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA_NAME";

    };

    class CFP_B_NAARMY_T72_01 : CUP_O_T72_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_T72_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Crew_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Crew_Officer_01"; };
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

    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_NAARMY_T55_01 : CUP_O_T55_CSAT_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "T-55";
        faction = "CFP_B_NAARMY";
        vehicleClass = "CFP_B_NAARMY_ARMORED";
        camouflage = 4;
        crew = "CFP_B_NAARMY_Crew_01";
        typicalCargo[] = {"CFP_B_NAARMY_Crew_01","CFP_B_NAARMY_Crew_01","CFP_B_NAARMY_Crew_Officer_01"};
        hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_sla_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_sla_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_T55_01.JPG;
    };

    class CFP_B_NAARMY_BMP_1_01 : CUP_O_BMP2_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_BMP_1_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Crew_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Crew_Officer_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
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

    class CUP_O_MTLB_pk_Green_RU;
    class CFP_B_NAARMY_MTLB_01 : CUP_O_MTLB_pk_Green_RU {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "MTLB";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Crew_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
    };

    class CFP_B_NAARMY_BTR_60_01 : CUP_O_BTR60_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_BTR_60_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Crew_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR60\lgreenbody1.paa",
            "\x\cfp\addons\vehicles\BTR60\lgreenbody2.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Crew_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_NAARMY_Crew_Officer_01"; };
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

    class CFP_B_NAARMY_Land_Rover_MG_01 : CUP_B_LR_MG_GB_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Land_Rover_MG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover MG";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
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

    class CFP_B_NAARMY_Mi_24D_01 : CUP_O_Mi24_D_Dynamic_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Mi_24D_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24D";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Mi24\mi24_nigeria.paa",
            "\x\cfp\addons\vehicles\Mi24\mi24_nigeria2.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Helicopter_Pilot_01"; };
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

    class CFP_B_NAARMY_Mi_8MTV3_01 : CUP_O_Mi8_SLA_2_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Mi_8MTV3_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MTV3";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Mi8\mi17_body_nigeria.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa",
            "a3\data_f\clear_empty.paa",
            "CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class SideTurret : SideTurret { gunnerType = "CFP_B_NAARMY_Helicopter_Pilot_01"; };
            class BackTurret : BackTurret { gunnerType = "CFP_B_NAARMY_Helicopter_Pilot_01"; };
            class FrontTurret : FrontTurret { gunnerType = "CFP_B_NAARMY_Helicopter_Pilot_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_NAARMY_Helicopter_Pilot_01"; };
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

    class CFP_B_NAARMY_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ural_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class CFP_B_NAARMY_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ural_Refuel_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_NAARMY_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ural_Repair_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class CFP_B_NAARMY_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ural_Ammo_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class CFP_B_NAARMY_Land_Rover_Ambulance_01 : CUP_B_LR_Ambulance_GB_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Land_Rover_Ambulance_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover [Ambulance]";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_special_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "OLIVE";

    };

    class CFP_B_NAARMY_Ridgeback_HMG_01 : CUP_B_Ridgback_HMG_GB_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ridgeback_HMG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ridgeback HMG";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ridgeback\tex1_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex2_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex3_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\turretbig_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourf_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourr_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex4_grn_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
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

    class CFP_B_NAARMY_Ridgeback_LMG_01 : CUP_B_Ridgback_LMG_GB_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ridgeback_LMG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ridgeback LMG";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ridgeback\tex1_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex2_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex3_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\turretbig_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourf_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourr_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex4_grn_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class Mainturret : Mainturret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
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

    class CFP_B_NAARMY_Ridgeback_GMG_01 : CUP_B_Ridgback_GMG_GB_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Ridgeback_GMG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ridgeback GMG";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AK47_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Ridgeback\tex1_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex2_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex3_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\turretbig_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourf_grn_co.paa",
        "x\cfp\addons\vehicles\Ridgeback\bar_armourr_grn_co.paa",
        "\x\cfp\addons\vehicles\Ridgeback\tex4_grn_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_NAARMY_Rifleman_AK47_01"; };
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

    class CUP_Hilux_unarmed_Base;
    class CFP_B_NAARMY_Hilux_Unarmed_01: CUP_Hilux_unarmed_Base
    {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_polywood_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
    };

    class CFP_B_NAARMY_Hilux_Unarmed_02: CUP_Hilux_unarmed_Base
    {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux SF";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_SF_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_polydesert_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
    };

    class CUP_Hilux_DSHKM_Base;
    class CFP_B_NAARMY_Hilux_DSHKM_01: CUP_Hilux_DSHKM_Base
    {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (DSHKM)";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_polywood_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
    };

    class CFP_B_NAARMY_Hilux_DSHKM_02: CUP_Hilux_DSHKM_Base
    {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux SF (DSHKM)";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_SF_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_polydesert_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)
    };

    class CFP_B_NAARMY_Land_Rover_01 : CUP_B_LR_Transport_CZ_W_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Land_Rover_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_PolygonWoodland)

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

    class CFP_B_NAARMY_Rifleman_SF_01 : O_recon_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_SF_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [SF]";
        side = 1;
        faction = "CFP_B_NAARMY";
        genericNames = "Afromen";
        identityTypes[] = {"Head_African","LanguageENGFRE_F"};
        uniformClass = "CFP_U_FieldUniform_multicam";

        linkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CFP_Modular1_Multicam",{{"CUP_30Rnd_545x39_AK74M_M",6,30}}},{},"CFP_BaseballCap_Multicam_DEF","CUP_G_Oakleys_Drk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_NIGERIA_SHIELD'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA_SHIELD";

    };

    class CFP_B_NAARMY_Team_Leader_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Team_Leader_SF_01.JPG;

        displayName = "Team Leader [SF]";

        uniformClass = "CUP_U_CRYE_MCAM_NP_Full";
        linkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CFP_BaseballCap_Multicam_DEF_Back","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CFP_BaseballCap_Multicam_DEF_Back","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        backpack = "B_AssaultPack_mcamo";
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CUP_U_CRYE_MCAM_NP_Full",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CUP_V_B_LBT_LBV_MCam",{{"CUP_30Rnd_545x39_AK74M_M",6,30}}},{"B_AssaultPack_mcamo",{}},"CFP_BaseballCap_Multicam_DEF_Back","CUP_G_Tan_Scarf_Shades",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
    };

    class CFP_B_NAARMY_Grenadier_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Grenadier_SF_01.JPG;

        displayName = "Grenadier [SF]";

        uniformClass = "CFP_U_FieldUniform_multicam_SS";
        linkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CFP_BoonieHat_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CFP_BoonieHat_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK74M_GL_railed","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed","Binocular"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};
        backpack = "B_AssaultPack_mcamo";
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_railed","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_FieldUniform_multicam_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_30Rnd_545x39_AK74M_M",2,30},{"CUP_1Rnd_HE_GP25_M",1,1}}},{"CUP_V_B_LBT_LBV_MCam",{{"SP_Kneepads_Black",1},{"CUP_1Rnd_SMOKE_GP25_M",2,1},{"CUP_30Rnd_545x39_AK74M_M",6,30},{"CUP_1Rnd_HE_GP25_M",2,1}}},{"B_AssaultPack_mcamo",{}},"CFP_BoonieHat_Multicam","CUP_G_Grn_Scarf_Shades",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Rifleman_AT_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_AT_SF_01.JPG;

        displayName = "Rifleman AT [SF]";

        uniformClass = "CFP_U_FieldUniform_multicam_SS";

        linkedItems[] = {"CFP_Modular1_Multicam","CUP_H_PMC_Beanie_Headphones_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_Multicam","CUP_H_PMC_Beanie_Headphones_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","CUP_launch_RPG7V","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","CUP_launch_RPG7V","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_PG7V_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_PG7V_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_FieldUniform_multicam_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CFP_Modular1_Multicam",{{"CUP_30Rnd_545x39_AK74M_M",6,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"CUP_H_PMC_Beanie_Headphones_Black","CUP_G_Oakleys_Embr",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Explosive_Specialist_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Explosive_Specialist_SF_01.JPG;

        displayName = "Explosive Specialist [SF]";
        canDeactivateMines = 1;
        uniformClass = "CUP_U_CRYE_MCAM_NP2_Full";

        linkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CUP_H_PMC_Beanie_Headphones_Khaki","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_LBT_LBV_MCam","CUP_H_PMC_Beanie_Headphones_Khaki","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "B_Carryall_mcamo";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CUP_U_CRYE_MCAM_NP2_Full",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CUP_V_B_LBT_LBV_MCam",{{"CUP_30Rnd_545x39_AK74M_M",6,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"B_Carryall_mcamo",{{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"ATMine_Range_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"CUP_PipeBomb_M",1,1}}},"CUP_H_PMC_Beanie_Headphones_Khaki","CUP_G_Oakleys_Drk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Medic_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Medic_SF_01.JPG;

        displayName = "Medic [SF]";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        uniformClass = "CFP_U_FieldUniform_multicam_SS";

        linkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF_Back","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF_Back","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "CFP_B_USPack_Mcam";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam_SS",{{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CFP_Modular1_Multicam",{{"CUP_30Rnd_545x39_AK74M_M",6,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"CFP_B_USPack_Mcam",{{"FirstAidKit",10},{"Medikit",1}}},"CFP_BaseballCap_Multicam_DEF_Back","CUP_G_White_Scarf_Shades",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Automatic_Rifleman_SF_01 : CFP_B_NAARMY_Rifleman_SF_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Automatic_Rifleman_SF_01.JPG;

        displayName = "Automatic Rifleman [SF]";

        uniformClass = "CUP_U_CRYE_MCAM_NP2_Roll";

        linkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_Multicam","CFP_BaseballCap_Multicam_DEF","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74M_railed","Binocular"};
        respawnWeapons[] = {"CUP_arifle_RPK74M_railed","Binocular"};

        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"};

        backpack = "B_AssaultPack_mcamo";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74M_railed","","CUP_acc_Flashlight","CUP_optic_MicroT1_low",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",45},{},""},{},{},{"CUP_U_CRYE_MCAM_NP2_Roll",{{"FirstAidKit",1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",1,45},{"SmokeShell",1,1}}},{"CFP_Modular1_Multicam",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",5,45},{"MiniGrenade",1,1}}},{"B_AssaultPack_mcamo",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",2,45}}},"CFP_BaseballCap_Multicam_DEF","CUP_G_Oakleys_Drk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Rifleman_Light_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Rifleman_Light_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [Light]";
        side = 1;
        genericNames = "Afromen";
        faction = "CFP_B_NAARMY";

        identityTypes[] = {"Head_African","LanguageENGFRE_F","G_IRAN_default"};

        uniformClass = "CUP_U_B_US_BDU_roll2_glove";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_PolygonWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_PolygonWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_roll2_glove",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CFP_PatrolCap_PolygonWoodland","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_NIGERIA";

    };

    class CFP_B_NAARMY_Gunner_DShKM_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Gunner_DShKM_01.JPG;

        displayName = "Gunner [DShKM]";

        linkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92_RGR","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92_RGR","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_roll2_glove",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Modular1_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CUP_H_Ger_M92_RGR","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Asst_Gunner_DShKM_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"CFP_AK_VEST_Lime","CUP_H_Ger_M92_Tan_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","CUP_H_Ger_M92_Tan_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_PolyDes",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"CUP_H_Ger_M92_Tan_GG","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Gunner_Mortar_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        linkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_roll_glove",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Modular1_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"CUP_H_Ger_M92","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Asst_Gunner_Mortar_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"CFP_Osprey1_Wd","CFP_Basic_Helmet_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Osprey1_Wd","CFP_Basic_Helmet_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M813",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Osprey1_Wd",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"CFP_Basic_Helmet_Woodland","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Gunner_SPG_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Gunner_SPG_01.JPG;

        displayName = "Gunner [SPG-9]";

        linkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Osprey1_Wd",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"CUP_H_Ger_M92","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Asst_Gunner_SPG_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Asst_Gunner_SPG_01.JPG;

        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Osprey1_Wd",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"CUP_H_Ger_M92","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Gunner_AGS30_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Gunner_AGS30_01.JPG;

        displayName = "Gunner [AGS30]";

        linkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92_Tan_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_M81","CUP_H_Ger_M92_Tan_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_roll2_glove",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Modular1_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"CUP_H_Ger_M92_Tan_GG","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Asst_Gunner_AGS30_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Asst_Gunner_AGS30_01.JPG;

        displayName = "Asst. Gunner [AGS30]";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_PolyDes3",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AGS30_Gun_Bag",{}},"CUP_H_Ger_M92","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Gunner_Metis_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Gunner_Metis_01.JPG;

        displayName = "Gunner [Metis]";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CUP_H_Ger_M92_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CUP_H_Ger_M92_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M812",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"CUP_H_Ger_M92_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_Asst_Gunner_Metis_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Asst_Gunner_Metis_01.JPG;

        displayName = "Asst. Gunner [Metis]";

        linkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Osprey1_Wd","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M813",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_Osprey1_Wd",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Metis_Gun_Bag",{}},"CUP_H_Ger_M92","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_NAARMY_DShKM_01 : CUP_O_DSHKM_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_DShKM_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_DShKM_Minitripod_01 : CUP_O_DSHKM_MiniTripod_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_DShKM_Minitripod_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM Minitripod";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_AGS_30_01 : CUP_O_AGS_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_AGS_30_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "AGS-30";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_SPG_9_01 : CUP_O_SPG9_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_SPG_9_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_Metis_01 : CUP_O_Metis_RU {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Metis_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Metis AT-13";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_Podnos_2B14_01 : CUP_O_2b14_82mm_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Podnos_2B14_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_D30_AT_01 : CUP_O_D30_AT_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_D30_AT_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30 AT";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_ZU_23_01 : CUP_O_ZU23_SLA {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_ZU_23_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 1;
        faction = "CFP_B_NAARMY";
        crew = "CFP_B_NAARMY_Rifleman_AKM_01";
    };

    class CFP_B_NAARMY_Engineer_01 : CFP_B_NAARMY_Squad_Leader_01 {
        editorPreview = \x\cfp\addons\b_naarmy\data\preview\CFP_B_NAARMY_Engineer_01.JPG;

        displayName = "Engineer";
        engineer =1;
        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_AssaultPack_PolygonDesert";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_PolyDes3",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CFP_AssaultPack_PolygonDesert",{{"ToolKit",1},{"MineDetector",1}}},"CFP_Basic_Helmet_Woodland","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_USBasicAmmunitionBox; // CUP_USBasicAmmunitionBox

    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox

    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox

    class CUP_USLaunchersBox; // CUP_USLaunchersBox

    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_NAARMY_AmmoBox : CUP_USBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_NAARMY_WeaponsBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_srifle_G22_wdl,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_RPK74M,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldMk4_10x40_LRT_Woodland,10);
            item_xx(CUP_optic_Kobra,10);
        };
    };
    class CFP_B_NAARMY_LaunchersBox : CUP_USLaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_B_NAARMY_UniformBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_BattleDressUniform_polygonwoodlanddark,15);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,15);
            item_xx(CFP_U_BattleDressUniform_AfricanWoodlandLight,15);
            item_xx(CFP_U_BattleDressUniform_woodlanddark,15);
            item_xx(CFP_U_BattleDressUniform_polygondesertdark,15);
            item_xx(CFP_U_BattleDressUniform_polygonwoodlandlight,15);
            item_xx(SP_0000_Standard_FieldUniform_Green,15);
            item_xx(SP_0000_Standard_FieldUniform_Black,15);
            item_xx(CFP_U_BattleDressUniform_polygondesertlight,15);
            item_xx(CFP_U_BattleDressUniform_AfricanWoodlandDark,15);
        };
    };
    class CFP_B_NAARMY_SupportBox : CUP_USSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(V_I_G_resistanceLeader_F,10);
            item_xx(CUP_H_Ger_M92_RGR,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(CFP_Basic_Helmet_Woodland,10);
            item_xx(CFP_Osprey1_Wd,10);
            item_xx(CUP_H_Ger_M92_Black,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_Basic_Helmet_PolygonWoodland,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_Modular1_M81,10);
            item_xx(CFP_AssaultPack_PolygonDesert,10);
            item_xx(CUP_H_Ger_M92_Tan_GG,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CFP_BoonieHat_PolygonWoodland,10);
            item_xx(CUP_V_CDF_OfficerBelt2,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CUP_V_CDF_CrewBelt,10);
            item_xx(CUP_V_B_PilotVest,10);
            item_xx(CUP_H_BAF_Helmet_Pilot,10);
            item_xx(Binocular,10);
            item_xx(SP_Modular1_Green,10);
            item_xx(SP_Balaclava_Black,10);
            item_xx(SP_Kneepads_Black,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_Carryall_oli,10);
            item_xx(CUP_B_USPack_Black,10);
            item_xx(CFP_PatrolCap_PolygonWoodland,10);
            item_xx(CUP_H_Ger_M92_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_AGS30_Gun_Bag,10);
            item_xx(CUP_H_Ger_M92,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Gun_Bag,10);
        };
    };
    class CFP_B_NAARMY_SupplyBox : CUP_USVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Nigerian Army Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_srifle_G22_wdl,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_RPK74M,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldMk4_10x40_LRT_Woodland,10);
            item_xx(CUP_optic_Kobra,10);
            item_xx(V_I_G_resistanceLeader_F,10);
            item_xx(CUP_H_Ger_M92_RGR,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(CFP_Basic_Helmet_Woodland,10);
            item_xx(CFP_Osprey1_Wd,10);
            item_xx(CUP_H_Ger_M92_Black,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_Basic_Helmet_PolygonWoodland,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_Modular1_M81,10);
            item_xx(CFP_AssaultPack_PolygonDesert,10);
            item_xx(CUP_H_Ger_M92_Tan_GG,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CFP_BoonieHat_PolygonWoodland,10);
            item_xx(CUP_V_CDF_OfficerBelt2,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CUP_V_CDF_CrewBelt,10);
            item_xx(CUP_V_B_PilotVest,10);
            item_xx(CUP_H_BAF_Helmet_Pilot,10);
            item_xx(Binocular,10);
            item_xx(SP_Modular1_Green,10);
            item_xx(SP_Balaclava_Black,10);
            item_xx(SP_Kneepads_Black,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_Carryall_oli,10);
            item_xx(CUP_B_USPack_Black,10);
            item_xx(CFP_PatrolCap_PolygonWoodland,10);
            item_xx(CUP_H_Ger_M92_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_AGS30_Gun_Bag,10);
            item_xx(CUP_H_Ger_M92,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Gun_Bag,10);
            item_xx(CFP_U_BattleDressUniform_polygonwoodlanddark,10);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,10);
            item_xx(CFP_U_BattleDressUniform_AfricanWoodlandLight,10);
            item_xx(CFP_U_BattleDressUniform_woodlanddark,10);
            item_xx(CFP_U_BattleDressUniform_polygondesertdark,10);
            item_xx(CFP_U_BattleDressUniform_polygonwoodlandlight,10);
            item_xx(SP_0000_Standard_FieldUniform_Green,10);
            item_xx(SP_0000_Standard_FieldUniform_Black,10);
            item_xx(CFP_U_BattleDressUniform_polygondesertlight,10);
            item_xx(CFP_U_BattleDressUniform_AfricanWoodlandDark,10);
        };
    };
};

