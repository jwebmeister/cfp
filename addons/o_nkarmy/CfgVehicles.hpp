//////////////////////////////////////////////////////////////////////////////////
#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_T_Soldier_F;
    class O_T_Soldier_F_OCimport_01 : O_T_Soldier_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_F_OCimport_02 : O_T_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_T_Officer_F;
    class O_T_Officer_F_OCimport_01 : O_T_Officer_F { scope = 0; class EventHandlers; };
    class O_T_Officer_F_OCimport_02 : O_T_Officer_F_OCimport_01 { class EventHandlers; };

    class O_T_Crew_F;
    class O_T_Crew_F_OCimport_01 : O_T_Crew_F { scope = 0; class EventHandlers; };
    class O_T_Crew_F_OCimport_02 : O_T_Crew_F_OCimport_01 { class EventHandlers; };

    class O_T_Helipilot_F;
    class O_T_Helipilot_F_OCimport_01 : O_T_Helipilot_F { scope = 0; class EventHandlers; };
    class O_T_Helipilot_F_OCimport_02 : O_T_Helipilot_F_OCimport_01 { class EventHandlers; };

    class O_T_Pilot_F;
    class O_T_Pilot_F_OCimport_01 : O_T_Pilot_F { scope = 0; class EventHandlers; };
    class O_T_Pilot_F_OCimport_02 : O_T_Pilot_F_OCimport_01 { class EventHandlers; };

    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_ZSU23_SLA_OCimport_02 : CUP_O_ZSU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CUP_O_UAZ_Unarmed_SLA;
    class CUP_O_UAZ_Unarmed_SLA_OCimport_01 : CUP_O_UAZ_Unarmed_SLA { scope = 0; class EventHandlers; };
    class CUP_O_UAZ_Unarmed_SLA_OCimport_02 : CUP_O_UAZ_Unarmed_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_BRDM2_SLA;
    class CUP_O_BRDM2_SLA_OCimport_01 : CUP_O_BRDM2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BRDM2_SLA_OCimport_02 : CUP_O_BRDM2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BTR80A_SLA;
    class CUP_O_BTR80A_SLA_OCimport_01 : CUP_O_BTR80A_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR80A_SLA_OCimport_02 : CUP_O_BTR80A_SLA_OCimport_01 {
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
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_O_BTR80_SLA;
    class CUP_O_BTR80_SLA_OCimport_01 : CUP_O_BTR80_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR80_SLA_OCimport_02 : CUP_O_BTR80_SLA_OCimport_01 {
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
            class CargoTurret_07;
            class CargoTurret_08;
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

    class CUP_O_BMP1_CSAT;
    class CUP_O_BMP1_CSAT_OCimport_01 : CUP_O_BMP1_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP1_CSAT_OCimport_02 : CUP_O_BMP1_CSAT_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CommanderOptics;
            class MainTurret;
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

    class CUP_O_Ural_RU;
    class CUP_O_Ural_RU_OCimport_01 : CUP_O_Ural_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_RU_OCimport_02 : CUP_O_Ural_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Refuel_RU;
    class CUP_O_Ural_Refuel_RU_OCimport_01 : CUP_O_Ural_Refuel_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_RU_OCimport_02 : CUP_O_Ural_Refuel_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_RU;
    class CUP_O_Ural_Repair_RU_OCimport_01 : CUP_O_Ural_Repair_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_RU_OCimport_02 : CUP_O_Ural_Repair_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Reammo_RU;
    class CUP_O_Ural_Reammo_RU_OCimport_01 : CUP_O_Ural_Reammo_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_RU_OCimport_02 : CUP_O_Ural_Reammo_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Su25_Dyn_SLA;
    class CUP_O_Su25_Dyn_SLA_OCimport_01 : CUP_O_Su25_Dyn_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Su25_Dyn_SLA_OCimport_02 : CUP_O_Su25_Dyn_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 {
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

    class CUP_O_UAZ_Open_SLA;
    class CUP_O_UAZ_Open_SLA_OCimport_01 : CUP_O_UAZ_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_Open_SLA_OCimport_02 : CUP_O_UAZ_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class CUP_O_UAZ_METIS_SLA;
    class CUP_O_UAZ_METIS_SLA_OCimport_01 : CUP_O_UAZ_METIS_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_METIS_SLA_OCimport_02 : CUP_O_UAZ_METIS_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_C_AN2_AEROSCHROT_TK_CIV;
    class CUP_C_AN2_AEROSCHROT_TK_CIV_OCimport_01 : CUP_C_AN2_AEROSCHROT_TK_CIV { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_AN2_AEROSCHROT_TK_CIV_OCimport_02 : CUP_C_AN2_AEROSCHROT_TK_CIV_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class CFP_O_NKARMY_Rifleman_01 : O_T_Soldier_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 1.0
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

    class CFP_O_NKARMY_Rifleman_AT_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Rifleman_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AT]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS74","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7V_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7V_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Auto_Rifleman_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Auto_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Auto Rifleman";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74_45"};
        respawnWeapons[] = {"CUP_arifle_RPK74_45"};

        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_45","","","",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,45}}},{"CFP_Field_Satchel",{{"MiniGrenade",1,1},{"SmokeShell",1,1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45}}},{},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Squad_Leader_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Squad_Leader_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74","CUP_hgun_Colt1911","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKS74","CUP_hgun_Colt1911","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30},{"CUP_7Rnd_45ACP_1911",1,7}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"CUP_7Rnd_45ACP_1911",2,7}}},{},"SP_SSh68CoverHelmet_DRK","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Sniper_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Sniper_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_Field_Satchel",{{"MiniGrenade",1,1},{"SmokeShell",1,1},{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Medic_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Medic_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_FieldPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"B_FieldPack_khk",{{"Medikit",1},{"FirstAidKit",10}}},"SP_SSh68CoverHelmet_DRK","G_Sport_Blackyellow",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_AA_Specialist_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_AA_Specialist_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "AA Specialist";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74","CUP_launch_Igla"};
        respawnWeapons[] = {"CUP_arifle_AKS74","CUP_launch_Igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_Igla_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_Igla_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_Igla","","","",{"CUP_Igla_M",1},{},""},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"B_Kitbag_rgr",{{"CUP_Igla_M",1,1}}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Engineer_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Engineer_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"ToolKit",1},{"ATMine_Range_Mag",1,1}}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Explosive_Specialist_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Explosive_Specialist_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"DemoCharge_Remote_Mag",2,1},{"SatchelCharge_Remote_Mag",1,1},{"ATMine_Range_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1}}},"SP_SSh68CoverHelmet_DRK","G_Squares_Tinted",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Machine_Gunner_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Machine_Gunner_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_FieldPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1}}},{"CFP_Field_Satchel",{{"MiniGrenade",1,1},{"SmokeShell",1,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_FieldPack_khk",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Spotter_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Spotter_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{},"SP_SSh68CoverHelmet_DRK","",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Gunner_DShKM_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Gunner_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner [DShKM]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"SP_SSh68CoverHelmet_DRK","G_Sport_Blackyellow",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Asst_Gunner_DShKM_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Asst_Gunner_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner [DShKM]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_DShkM_Gun_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Gunner_SPG_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Gunner_SPG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner [SPG-9]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_SPG9_Tripod_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Asst_Gunner_SPG_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Asst_Gunner_SPG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner [SPG-9]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_SPG9_Gun_Bag",{}},"SP_SSh68CoverHelmet_DRK","G_Sport_BlackWhite",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Gunner_Mortar_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Gunner_Mortar_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner [Mortar]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_Podnos_Bipod_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Asst_Gunner_Mortar_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Asst_Gunner_Mortar_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner [Mortar]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_Podnos_Gun_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Gunner_Metis_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Gunner_Metis_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner [Metis]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_Metis_Tripod_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Asst_Gunner_Metis_01 : CFP_O_NKARMY_Rifleman_01  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Asst_Gunner_Metis_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner [Metis]";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK";

        linkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Field_Satchel","SP_SSh68CoverHelmet_DRK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Metis_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_DRK",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_Field_Satchel",{{"CUP_30Rnd_545x39_AK_M",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1}}},{"CUP_B_Metis_Gun_Bag",{}},"SP_SSh68CoverHelmet_DRK","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Officer_01 : O_T_Officer_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Officer_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK2v2";

        linkedItems[] = {"CUP_H_C_Ushanka_03","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_C_Ushanka_03","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"hgun_Rook40_F"};
        respawnWeapons[] = {"hgun_Rook40_F"};

        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"CFP_U_WorkUniform_DRK2v2",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,16}}},{},{},"CUP_H_C_Ushanka_03","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 1.0
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

    class CFP_O_NKARMY_Crewman_01 : O_T_Crew_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Crewman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CFP_U_WorkUniform_DRK2";

        linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"hgun_Rook40_F"};
        respawnWeapons[] = {"hgun_Rook40_F"};

        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"CFP_U_WorkUniform_DRK2",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,16}}},{},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 1.0
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

    class CFP_O_NKARMY_Helicopter_Pilot_01 : O_T_Helipilot_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Helicopter_Pilot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "SP_0000_Standard_FieldUniform_Black";

        linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","hgun_Rook40_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"hgun_Rook40_F","","","",{},{},""},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"CUP_30Rnd_545x39_AK_M",1,30},{"16Rnd_9x21_Mag",1,16}}},{"V_TacVest_blk",{{"FirstAidKit",1},{"Chemlight_red",2,1},{"CUP_30Rnd_545x39_AK_M",3,30},{"SmokeShell",2,1}}},{},"H_PilotHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Pilot_01 : O_T_Pilot_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Pilot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "CFP_O_NKARMY";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_pilotCoveralls";

        linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_pilotCoveralls",{{"FirstAidKit",1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{},{"B_Parachute",{}},"CUP_H_RUS_ZSH_Shield_Up","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_D30_AT_base;
    class CFP_O_NKARMY_D30_AT_01 : CUP_D30_AT_base {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_D30_AT_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30 AT";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";
    };
    class CUP_ZU23_base;
    class CFP_O_NKARMY_ZU_23_01 : CUP_ZU23_base {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_ZU_23_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";
    };

    class CUP_DSHKM_base;
    class CFP_O_NKARMY_DShKM_01 : CUP_DSHKM_base  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";
    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_O_NKARMY_DShKM_Minitripod_01 : CUP_DSHKM_MiniTripod_base  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_DShKM_Minitripod_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM Minitripod";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";
    };

    class CFP_O_NKARMY_ZSU_23_4_01 : CUP_O_ZSU23_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_ZSU_23_4_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-23-4";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        hiddenSelectionsTextures[] =
        {
                    "\x\cfp\addons\vehicles\ZSU\ZSU_T_1_NK_co.paa",
                    "\x\cfp\addons\vehicles\ZSU\ZSU_T_2_NK_co.paa",
                    "\x\cfp\addons\vehicles\ZSU\ZSU_T_3_NK_co.paa"
                };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class cup_t55_base;
    class CFP_O_NKARMY_T55_01: cup_t55_base
    {
        scope = 2;
        scopeCurator = 2;
        side = 0;
        displayName = "T-55";
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        typicalCargo[] = {"CFP_O_NKARMY_Crewman_01","CFP_O_NKARMY_Crewman_01","CFP_O_NKARMY_Crewman_01"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\T55\t55_body_nkorea.paa","\x\cfp\addons\vehicles\T55\t55_tower_nkorea.paa"};
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_T55_01.JPG;

    };

    class CFP_O_NKARMY_T34_01 : CUP_O_T34_TKA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_T34_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-34";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\T34\t34_body01_nk.paa",
            "\x\cfp\addons\vehicles\T34\t34_body02_nk.paa",
            "\x\cfp\addons\vehicles\T34\t34_turret_nk.paa",
            "\x\cfp\addons\vehicles\T34\t34_wheels_nk_co.paa",
            "\x\cfp\addons\vehicles\T34\t34_body03_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
            class FrontGunner : FrontGunner { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_UAZ_01 : CUP_O_UAZ_Unarmed_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_UAZ_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_BRDM_2_01 : CUP_O_BRDM2_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_BRDM_2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BRDM-2";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BRDM\brdm2_01_nk.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_BTR_60_01 : CUP_O_BTR60_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_BTR_60_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR60\nkoreabody1.paa",
            "\x\cfp\addons\vehicles\BTR60\nkoreabody2.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_BTR_80A_01 : CUP_O_BTR80A_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-80A";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_BTR_80_01 : CUP_O_BTR80_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-80";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_BMP_1_01 : CUP_O_BMP1_CSAT_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_BMP_1_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-1";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Crewman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BMP\trup_nkorea.paa",
            "\x\cfp\addons\vehicles\BMP\veza0_nkorea.paa"
        };

        class Turrets : Turrets {
            class CommanderOptics : CommanderOptics { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Crewman_01"; };
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

    class CFP_O_NKARMY_Ural_01 : CUP_O_Ural_RU_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Ural_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";

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

    class CFP_O_NKARMY_Ural_Refuel_01 : CUP_O_Ural_Refuel_RU_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Ural_Refuel_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Ural_Repair_01 : CUP_O_Ural_Repair_RU_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Ural_Repair_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_Ural_Ammo_01 : CUP_O_Ural_Reammo_RU_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Ural_Ammo_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_NKARMY_SU_25_Frogfoot_01 : CUP_O_Su25_Dyn_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_SU_25_Frogfoot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SU-25 Frogfoot";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\SU25\su25_body1_nk_co.paa",
            "\x\cfp\addons\vehicles\SU25\su25_body2_nk_co.paa"
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

    class CFP_O_NKARMY_MD500_01 : B_Heli_Light_01_dynamicLoadout_F_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_MD500_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD500";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Hummingbird\Hummingbird_NK.paa"
        };
        TRANSPORTWEAPONSSMALL(CUP_arifle_AKS74U)
        TRANSPORTMAGAZINESSMALL(CUP_30Rnd_545x39_AK_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSSMALL
        TRANSPORTBACKPACKSEMPTY

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_O_NKARMY_Helicopter_Pilot_01"; };
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

    class CFP_O_NKARMY_Mi_24D_01 : CUP_O_Mi24_D_Dynamic_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Mi_24D_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24D";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Helicopter_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Mi24\mi24_nkorea1.paa",
            "\x\cfp\addons\vehicles\Mi24\mi24_nkorea2.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Helicopter_Pilot_01"; };
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

    class CUP_Mi8_Base;
    class CUP_O_Mi17_TK : CUP_Mi8_Base { class EventHandlers;  class Turrets;};
    class CUP_O_Mi17_TK_OCimport_01 : CUP_O_Mi17_TK {
        scope = 0;
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };
    class CFP_O_NKARMY_Mi_8MT_01 : CUP_O_Mi17_TK_OCimport_01
    {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Mi_8MT_01.JPG;
        scope = 2;
        side = 0;
        displayName = "Mi-8MT";
        faction = "CFP_O_NKARMY";
        vehicleClass = "CFP_O_NKARMY_AIRCRAFT";
        camouflage = 4;
        crew = "CFP_O_NKARMY_Helicopter_Pilot_01";
        typicalCargo[] = {"CFP_O_NKARMY_Helicopter_Pilot_01","CFP_O_NKARMY_Helicopter_Pilot_01"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Mi8\mi17_nk.paa","\x\cfp\addons\vehicles\Mi8\mi17_det_nk.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
        };
    };

    class CFP_O_NKARMY_UAZ_Open_01 : CUP_O_UAZ_Open_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_UAZ_Open_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [Open]";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";

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

    class CFP_O_NKARMY_UAZ_Metis_01 : CUP_O_UAZ_METIS_SLA_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_UAZ_Metis_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [Metis-M]";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_NKARMY_Rifleman_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Rifleman_01"; };
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

    class CFP_O_NKARMY_Anotov_AN_2_01 : CUP_C_AN2_AEROSCHROT_TK_CIV_OCimport_02  {
        editorPreview = \x\cfp\addons\o_nkarmy\data\preview\CFP_O_NKARMY_Anotov_AN_2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Anotov AN-2";
        side = 0;
        faction = "CFP_O_NKARMY";
        crew = "CFP_O_NKARMY_Pilot_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\AN2\an2_1_nk.paa",
            "\x\cfp\addons\vehicles\AN2\an2_2_nk.paa",
            "\x\cfp\addons\vehicles\AN2\an2_wings_nk.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_NKARMY_Pilot_01"; };
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

};