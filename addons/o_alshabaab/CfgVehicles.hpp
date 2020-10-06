
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

    class CUP_I_Ural_ZU23_TK_Gue;
    class CUP_I_Ural_ZU23_TK_Gue_OCimport_01 : CUP_I_Ural_ZU23_TK_Gue { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Ural_ZU23_TK_Gue_OCimport_02 : CUP_I_Ural_ZU23_TK_Gue_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_TK_Random_OCimport_02 : CUP_I_Datsun_PK_TK_Random_OCimport_01 {
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

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

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

    class C_Truck_02_transport_F;
    class C_Truck_02_transport_F_OCimport_01 : C_Truck_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_transport_F_OCimport_02 : C_Truck_02_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
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

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_UAZ_SPG9_SLA;
    class CUP_O_UAZ_SPG9_SLA_OCimport_01 : CUP_O_UAZ_SPG9_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_SPG9_SLA_OCimport_02 : CUP_O_UAZ_SPG9_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
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

    class B_G_Offroad_01_AT_F;
    class B_G_Offroad_01_AT_F_OCimport_01 : B_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_AT_F_OCimport_02 : B_G_Offroad_01_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class CFP_O_ALSHABAAB_Rifleman_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
    	genericNames = "AfroMen";
        faction = "CFP_O_ALSHABAAB";

        identityTypes[] = {"Head_African","Language_Ackbar"};
        uniformClass = "CFP_U_KhetPartug_Long_olive";


        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_olive",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"IS_shemag_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// al Shabaab Uniforms
    		uniformList[] = {
    	"CFP_U_KhetPartug_Short_M81", 0.2,
    	"CFP_U_KhetPartug_Long_M81", 0.2,
    	"CFP_U_KhetPartug_Long_olive", 0.2,
    	"CFP_U_KhetPartug_Short_olive", 0.2,
    	"CFP_U_KhetPartug_Long_Light_Olive", 0.2,
        "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
        "CFP_U_KhetPartug_Short_Woodland", 0.2,
        "CFP_U_KhetPartug_Long_Woodland", 0.2,
        "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
        "CFP_U_KhetPartug_Long_Black", 0.2,
        "CFP_U_KhetPartug_Short_Black", 0.2,
        "CFP_U_KhetPartug_Long_EDRL", 0.2,
        "CFP_U_KhetPartug_Short_EDRL", 0.2
    		};

    	// al Shabaab Headgear
    		headgearList[] = {
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
        "CFP_Shemagh_Full_Green", 0.3,
        "CFP_Shemagh_Full_White", 0.3,
        "CFP_Shemagh_Full_Creme", 0.2
        	};

        // al Shabaab Vests
            vestList[] = {
        "CFP_AK_VEST_Black", 0.2,
        "CFP_AK_VEST_EDRL", 0.2,
        "CFP_AK_VEST_LOlive", 0.2,
        "CFP_AK_VEST_Olive", 0.2,
        "CFP_AK_VEST_Tan", 0.2,
        "CFP_AK_VEST_Lime", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2,
        "CFP_TakJacket_Woodland", 0.2,
        "CFP_TakJacket_M81", 0.2,
        "CFP_TakJacket_EDRL", 0.2,
        "CFP_TakJacket_ChocChip", 0.2
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

    class CFP_O_ALSHABAAB_Team_Leader_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Team_Leader_01.JPG;

        displayName = "Team Leader";


        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Shemagh_CheckBlack","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Rifleman_AT_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Rifleman_AT_01.JPG;

        displayName = "Rifleman AT";

        backpack = "CUP_B_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Olive","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Olive","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"IS_shemag_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Machine_Gunner_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Machine_Gunner_01.JPG;

        displayName = "Machine Gunner";

        backpack = "B_TacticalPack_oli";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_KhetPartug_Short_olive",{}},{"CFP_AK_VEST_Olive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_TacticalPack_oli",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"SP_Shemagh_CheckRed","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Medic_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Medic_01.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "B_FieldPack_oli";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_CheckGreen","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_FieldPack_oli",{{"FirstAidKit",10}}},"SP_Shemagh_CheckGreen","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Grenadier_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Grenadier_01.JPG;

        displayName = "Grenadier";


        weapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_EDRL","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_EDRL","IS_shemag_black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_olive",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",6,1}}},{},"IS_shemag_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Explosive_Specialist_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Explosive_Specialist_01.JPG;

        displayName = "Explosive Specialist";
        canDeactivateMines = 1;
        engineer = 1;
        backpack = "SP_Carryall_Green";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Shemagh_CheckTan","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"SP_Carryall_Green",{{"DemoCharge_Remote_Mag",4,1},{"ATMine_Range_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1}}},"SP_Shemagh_CheckTan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Sniper_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Sniper_01.JPG;

        displayName = "Sniper";


        weapons[] = {"CUP_srifle_SVD","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_SVD","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckRed","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_KhetPartug_Long_olive",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x54_SVD_M",7,10}}},{},"SP_Shemagh_CheckRed","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Gunner_DShKM_High_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Gunner_DShKM_High_01.JPG;

        displayName = "Gunner [DShKM High]";

        backpack = "CUP_B_DShkM_TripodHigh_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_CheckBlue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_04",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"SP_Shemagh_CheckBlue","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Gunner_DShKM_Low_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Gunner_DShKM_Low_01.JPG;

        displayName = "Gunner [DShKM Low]";

        backpack = "CUP_B_DShkM_TripodLow_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_EDRL","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_EDRL","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_olive",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Gunner_Mortar_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        backpack = "CUP_B_Podnos_Bipod_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Tan","SP_Shemagh_Black","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_04",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Gunner_SPG_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Gunner_SPG_01.JPG;

        displayName = "Gunner [SPG-9]";

        backpack = "CUP_B_SPG9_Tripod_Bag";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        linkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_CheckBlack","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_olive",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"SP_Shemagh_CheckBlack","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Ural_ZU_23_01 : CUP_I_Ural_ZU23_TK_Gue_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Ural_ZU_23_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [ZU-23]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ALSHABAAB_Rifleman_01"; };
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

    class CUP_Hilux_Base;
    class CFP_O_ALSHABAAB_Hilux_01 : CUP_Hilux_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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
    class CFP_O_ALSHABAAB_Hilux_UB_32_01 : CUP_Hilux_UB32_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [UB-32]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";
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

    class CFP_O_ALSHABAAB_Technical_PK_01 : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Technical_PK_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [PK]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ALSHABAAB_Rifleman_01"; };
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

    class CFP_O_ALSHABAAB_Technical_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Technical_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

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

    class CFP_O_ALSHABAAB_Offroad_Armed_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Offroad_Armed_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad [Armed]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_ALSHABAAB_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\PolygonDesert.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "PolygonDesert";

    };

    class CFP_O_ALSHABAAB_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Offroad_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\PolygonWoodland.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "PolygonWoodland";

    };

    class CFP_O_ALSHABAAB_Zamak_01 : C_Truck_02_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Zamak_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

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

    class CFP_O_ALSHABAAB_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Truck_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

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

    class CUP_SPG9_base;
    class CFP_O_ALSHABAAB_SPG_9_01 : CUP_SPG9_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

    };

    class CUP_2b14_82mm_Base;
    class CFP_O_ALSHABAAB_Podnos_2B14_01 : CUP_2b14_82mm_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

    };

    class CUP_DSHKM_base;
    class CFP_O_ALSHABAAB_DShKM_01 : CUP_DSHKM_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_O_ALSHABAAB_DShKM_Low_01 : CUP_DSHKM_MiniTripod_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

    };

    class CFP_O_ALSHABAAB_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Ural_Ammo_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ALSHABAAB_Ural_Fuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Ural_Fuel_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Fuel]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ALSHABAAB_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Ural_Repair_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ALSHABAAB_UAZ_SPG_01 : CUP_O_UAZ_SPG9_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_UAZ_SPG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [SPG-9]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_ALSHABAAB_Rifleman_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_ALSHABAAB_Rifleman_01"; };
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

    class CFP_O_ALSHABAAB_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Ural_Open_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Open]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

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

    class CFP_O_ALSHABAAB_Asst_Gunner_DShKM_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"CFP_UtilityJacket_Woodland","SP_Shemagh_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_Woodland","SP_Shemagh_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_EDRL",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_Woodland",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Asst_Gunner_Mortar_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","SP_Shemagh_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_Black",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Asst_Gunner_SPG_01 : CFP_O_ALSHABAAB_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Asst_Gunner_SPG_01.JPG;

        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"CFP_AK_VEST_EDRL","SP_Shemagh_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_EDRL","SP_Shemagh_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_light_olive",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"SP_Shemagh_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ALSHABAAB_Offroad_AT_01 : B_G_Offroad_01_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_alshabaab\data\preview\CFP_O_ALSHABAAB_Offroad_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad [AT]";
        side = 0;
        faction = "CFP_O_ALSHABAAB";
        crew = "CFP_O_ALSHABAAB_Rifleman_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_ALSHABAAB_Grenadier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

           class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "PolygonWoodland";

    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_ALSHABAAB_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_ALSHABAAB_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_srifle_SVD,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_3,10);
        };
    };
    class CFP_O_ALSHABAAB_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_ALSHABAAB_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_KhetPartug_Short_Woodland,15);
            item_xx(CFP_U_KhetPartug_Long_olive,15);
            item_xx(CFP_U_KhetPartug_Long_EDRL,15);
            item_xx(CFP_U_KhetPartug_Short_olive,15);
            item_xx(CFP_U_KhetPartug_Short_Black,15);
            item_xx(CFP_U_KhetPartug_Long_Black,15);
            item_xx(CFP_U_KhetPartug_Short_light_olive,15);
            item_xx(CFP_U_KhetPartug_Long_M81,15);
            item_xx(CFP_U_KhetPartug_Long_Woodland,15);
        };
    };
    class CFP_O_ALSHABAAB_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_EDRL,10);
            item_xx(SP_Shemagh_CheckWhite,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_TacticalPack_oli,10);
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(B_FieldPack_oli,10);
            item_xx(CFP_TakJacket_Woodland,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(SP_Shemagh_Grey,10);
            item_xx(SP_Carryall_Green,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_TakJacket_EDRL,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(SP_Shemagh_CheckTan,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
        };
    };
    class CFP_O_ALSHABAAB_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = al-Shabaab Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_3,10);
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_AK_VEST_EDRL,10);
            item_xx(SP_Shemagh_CheckWhite,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(SP_Shemagh_Black,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_TacticalPack_oli,10);
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(B_FieldPack_oli,10);
            item_xx(CFP_TakJacket_Woodland,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(SP_Shemagh_Grey,10);
            item_xx(SP_Carryall_Green,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_TakJacket_EDRL,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(SP_Shemagh_CheckTan,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CFP_U_KhetPartug_Short_Woodland,10);
            item_xx(CFP_U_KhetPartug_Long_olive,10);
            item_xx(CFP_U_KhetPartug_Long_EDRL,10);
            item_xx(CFP_U_KhetPartug_Short_olive,10);
            item_xx(CFP_U_KhetPartug_Short_Black,10);
            item_xx(CFP_U_KhetPartug_Long_Black,10);
            item_xx(CFP_U_KhetPartug_Short_light_olive,10);
            item_xx(CFP_U_KhetPartug_Long_M81,10);
            item_xx(CFP_U_KhetPartug_Long_Woodland,10);
        };
    };
};
