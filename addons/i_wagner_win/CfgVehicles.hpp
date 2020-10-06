//////////////////////////////////////////////////////////////////////////////////
#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_Men { displayName = "Men";  };
};

class CfgVehicles {

    class CUP_O_RU_Soldier_EMR;
    class CUP_O_RU_Soldier_EMR_OCimport_01 : CUP_O_RU_Soldier_EMR { scope = 0; class EventHandlers; };
    class CUP_O_RU_Soldier_EMR_OCimport_02 : CUP_O_RU_Soldier_EMR_OCimport_01 { class EventHandlers; };

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

    class CUP_O_UAZ_Unarmed_SLA;
    class CUP_O_UAZ_Unarmed_SLA_OCimport_01 : CUP_O_UAZ_Unarmed_SLA { scope = 0; class EventHandlers; };
    class CUP_O_UAZ_Unarmed_SLA_OCimport_02 : CUP_O_UAZ_Unarmed_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };


    class CUP_O_Ural_Reammo_RU;
    class CUP_O_Ural_Reammo_RU_OCimport_01 : CUP_O_Ural_Reammo_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_RU_OCimport_02 : CUP_O_Ural_Reammo_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_RU;
    class CUP_O_Ural_Repair_RU_OCimport_01 : CUP_O_Ural_Repair_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_RU_OCimport_02 : CUP_O_Ural_Repair_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Refuel_RU;
    class CUP_O_Ural_Refuel_RU_OCimport_01 : CUP_O_Ural_Refuel_RU { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_RU_OCimport_02 : CUP_O_Ural_Refuel_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_RU;
    class CUP_O_Ural_RU_OCimport_01 : CUP_O_Ural_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_RU_OCimport_02 : CUP_O_Ural_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_UAZ_AMB_RU;
    class CUP_O_UAZ_AMB_RU_OCimport_01 : CUP_O_UAZ_AMB_RU { scope = 0; class EventHandlers; };
    class CUP_O_UAZ_AMB_RU_OCimport_02 : CUP_O_UAZ_AMB_RU_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_BMP2_RU;
    class CUP_O_BMP2_RU_OCimport_01 : CUP_O_BMP2_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_RU_OCimport_02 : CUP_O_BMP2_RU_OCimport_01 {
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

    class CUP_O_BTR80_GREEN_RU;
    class CUP_O_BTR80_GREEN_RU_OCimport_01 : CUP_O_BTR80_GREEN_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR80_GREEN_RU_OCimport_02 : CUP_O_BTR80_GREEN_RU_OCimport_01 {
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

    class CUP_O_Mi24_P_Dynamic_RU;
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_01 : CUP_O_Mi24_P_Dynamic_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_02 : CUP_O_Mi24_P_Dynamic_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_Pchela1T_RU;
        class CUP_O_Pchela1T_RU_OCimport_01 : CUP_O_Pchela1T_RU { scope = 0; class EventHandlers; class Turrets; };
        class CUP_O_Pchela1T_RU_OCimport_02 : CUP_O_Pchela1T_RU_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

    class CUP_O_T72_RU;
        class CUP_O_T72_RU_OCimport_01 : CUP_O_T72_RU { scope = 0; class EventHandlers; class Turrets; };
        class CUP_O_T72_RU_OCimport_02 : CUP_O_T72_RU_OCimport_01 {
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

        class CUP_O_MTLB_pk_Winter_RU;
        class CUP_O_MTLB_pk_Winter_RU_OCimport_01 : CUP_O_MTLB_pk_Winter_RU { scope = 0; class EventHandlers; class Turrets; };
        class CUP_O_MTLB_pk_Winter_RU_OCimport_02 : CUP_O_MTLB_pk_Winter_RU_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

    class CFP_I_WAGNER_Contractor_1_WIN_01 : CUP_O_RU_Soldier_EMR_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        editorSubCategory = "CFP_EdSubcat_Personnel_Men";
        displayName = "Contractor 1";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";

        identityTypes[] = {"Head_Greek","LanguageRUS_F"};

        uniformClass = "CFP_U_O_RUMVD_Gorka_Klyaksa";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_Klyaksa",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30}}},{"CFP_V_RUS_6B45_MCam_3",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //PMC Uniforms
            uniformList[] = {
                "CFP_U_O_RUMVD_Gorka_Klyaksa", 0.3,
                "CFP_U_O_RUMVD_Gorka_Berezka_White", 0.3,
                "CFP_U_O_RUMVD_Gorka_White", 0.3,
                "CFP_U_FieldUniform_flecktarn_snow", 0.3,
                "CFP_U_FieldUniform_mtp_snow", 0.3,
                "CFP_U_FieldUniform_multicam_snow", 0.3
            };

        //Facewear
            facewearList[] = {
                "", 0.4,
                "CFP_Oakley_Goggles_Alp", 0.3,
                "CFP_Oakley_Goggles_Olv", 0.3,
                "CFP_Oakley_Goggles_Blk_Drk", 0.3,
                "CFP_Oakley_Goggles_Alp_Drk", 0.3,
                "SP_Goggles_Black", 0.3
            };

        //Headgear
            headgearList[] = {
                "CFP_FullFaceWrap_BerezWhite", 0.33,
                "CFP_FullFaceWrap_Snow", 0.33,
                "SP_BeanieHat_Green", 0.2,
                "CFP_BeanieHat_White", 0.2,
                "CFP_FullFaceWrap_Black", 0.33
            };

        //Vests
            vestList[] = {
                "CFP_Tactical1_White2", 0.5,
                "CFP_Tactical1_Berez", 0.5,
                "SP_Tactical1_White", 0.5,
                "CFP_M23_VEST_VSR98", 0.3,
                "CFP_M23_VEST_Lime", 0.3,
                "CUP_V_O_SLA_M23_1_OD", 0.3,
                "CUP_V_RUS_Smersh_1", 0.3,
                "CFP_V_RUS_6B45_MCam_3", 0.2,
                "CUP_V_RUS_6B45_3", 0.4,
                "CUP_V_RUS_Smersh_2", 0.3
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

    class CFP_I_WAGNER_Contractor_2_WIN_01 : CUP_O_RU_Soldier_EMR_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor 2";
        editorSubCategory = "CFP_EdSubcat_Personnel_Men";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";

        identityTypes[] = {"Head_Greek","LanguageRUS_F"};

        uniformClass = "CFP_U_O_RUMVD_Gorka_Klyaksa";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_Klyaksa",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30}}},{"CFP_V_RUS_6B45_MCam_3",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

            //PMC Uniforms
            uniformList[] = {
                "CFP_U_O_RUMVD_Gorka_Klyaksa", 0.3,
                "CFP_U_O_RUMVD_Gorka_Berezka_White", 0.3,
                "CFP_U_O_RUMVD_Gorka_White", 0.3,
                "CFP_U_FieldUniform_flecktarn_snow", 0.3,
                "CFP_U_FieldUniform_mtp_snow", 0.3,
                "CFP_U_FieldUniform_multicam_snow", 0.3
            };

            //Facewear
            facewearList[] = {
                "SP_Balaclava_white", 0.7,
                "G_Balaclava_oli", 0.3,
                "CFP_Balaclava_WhiteBerez", 0.5,
                "CFP_Balaclava_White2", 0.5
            };

            //Headgear
            headgearList[] = {
                "CUP_H_PMC_EP_Headset", 1.0
            };

            //Vests
            vestList[] = {
                "CFP_Tactical1_White2", 0.5,
                "CFP_Tactical1_Berez", 0.5,
                "SP_Tactical1_White", 0.5,
                "CFP_M23_VEST_VSR98", 0.3,
                "CFP_M23_VEST_Lime", 0.3,
                "CUP_V_O_SLA_M23_1_OD", 0.3,
                "CUP_V_RUS_Smersh_1", 0.3,
                "CFP_V_RUS_6B45_MCam_3", 0.2,
                "CUP_V_RUS_6B45_3", 0.4,
                "CUP_V_RUS_Smersh_2", 0.3
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

    class CFP_I_WAGNER_Marksman_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Marksman";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","CUP_muzzle_snds_KZRZP_AK545","","CUP_optic_PSO_1_AK_open",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_White",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_M",3,30}}},{"CFP_V_RUS_6B45_MCam_3",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74M_M",6,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Field_Medic_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Field Medic";

        linkedItems[] = {"V_TacVest_khk","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_khk","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        backpack = "CFP_FieldPack_ATACSAU";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_Berezka_White",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30}}},{"V_TacVest_khk",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_FieldPack_ATACSAU",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Field_Specialist_RPK_WIN_01 : CFP_I_WAGNER_Contractor_2_WIN_01 {

        displayName = "Field Specialist (RPK)";

        linkedItems[] = {"V_I_G_resistanceLeader_F","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74_45"};
        respawnWeapons[] = {"CUP_arifle_RPK74_45"};

        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_45","","","CUP_optic_1p63",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_U_FieldUniform_mtp_snow",{{"FirstAidKit",1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2,45},{"SmokeShell",1,1}}},{"V_I_G_resistanceLeader_F",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Field_Specialist_PKM_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Field Specialist [PKM]";

        linkedItems[] = {"CFP_V_O_RUMVD_MCam","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_O_RUMVD_MCam","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKMN","Binocular"};
        respawnWeapons[] = {"CUP_lmg_PKMN","Binocular"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKMN","","","CUP_optic_PechenegScope",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_White",{{"FirstAidKit",1}}},{"CFP_V_O_RUMVD_MCam",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Field_Specialist_RPG_18_WIN_01 : CFP_I_WAGNER_Contractor_2_WIN_01 {

        displayName = "Field Specialist [RPG-18]";

        linkedItems[] = {"CUP_V_RUS_6B45_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_RUS_6B45_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo","CUP_launch_RPG18_Loaded","CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo","CUP_launch_RPG18_Loaded","CUP_hgun_Makarov"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_RPG18_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_RPG18_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{"CUP_launch_RPG18_Loaded","","","",{"CUP_RPG18_M",1},{},""},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_U_FieldUniform_multicam_snow",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30},{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{"CUP_V_RUS_6B45_3",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_8Rnd_9x18_Makarov_M",1,8}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Field_Technician_WIN_01 : CFP_I_WAGNER_Contractor_2_WIN_01 {

        displayName = "Field Technician";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        backpack = "B_Carryall_mcamo";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_Klyaksa",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30}}},{"CFP_V_RUS_6B45_MCam_3",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1}}},{"B_Carryall_mcamo",{{"ToolKit",1},{"MineDetector",1}}},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Bodyguard_1_WIN_01 : CUP_O_RU_Soldier_EMR_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bodyguard 1";
        editorSubCategory = "CFP_EdSubcat_Personnel_Men";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";

        identityTypes[] = {"Head_Greek","LanguageRUS_F"};

        uniformClass = "CUP_I_B_PMC_Unit_40";

        linkedItems[] = {"CUP_V_B_LBT_LBV_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_LBT_LBV_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_OTS14_GROZA_762_Grip"};
        respawnWeapons[] = {"CUP_arifle_OTS14_GROZA_762_Grip"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_OTS14_GROZA_762_Grip","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_40",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_B_LBT_LBV_Black",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","CUP_G_PMC_Facewrap_Black_Glasses_Dark",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //PMC Uniforms
            uniformList[] = {
                "CUP_I_B_PMC_Unit_40", 0.3,
                "CUP_I_B_PMC_Unit_41", 0.3,
                "CUP_I_B_PMC_Unit_42", 0.3,
                "CUP_I_B_PMC_Unit_39", 0.3,
                "CUP_I_B_PMC_Unit_38", 0.3,
                "CUP_I_B_PMC_Unit_37", 0.3,
                "CUP_I_B_PMC_Unit_36", 0.3
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

    class CFP_I_WAGNER_Bodyguard_2_WIN_01 : CFP_I_WAGNER_Bodyguard_1_WIN_01 {

        displayName = "Bodyguard 2";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_42",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74_plum_M",3,30}}},{"SP_Tactical1_Black",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74_plum_M",5,30}}},{},"","CUP_G_PMC_Facewrap_Black_Glasses_Ember",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Security_Contractor_AKMN_WIN_01 : CFP_I_WAGNER_Contractor_2_WIN_01 {

        displayName = "Security Contractor (AKMN)";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS"};
        respawnWeapons[] = {"CUP_arifle_AKMS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS","","","CUP_optic_1p63",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"CFP_U_FieldUniform_flecktarn_snow",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{"CFP_V_RUS_6B45_MCam_3",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",6,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Security_Contractor_AK74_GL_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Security Contractor [AK74-GL]";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL_railed_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_AssaultPack_Multicam";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_railed_camo","","","CUP_optic_AIMM_MICROT1_TAN",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_O_RUMVD_Gorka_EMR_Full",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30},{"CUP_1Rnd_HE_GP25_M",3,1}}},{"CFP_V_RUS_6B45_MCam_3",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"CUP_1Rnd_HE_GP25_M",6,1},{"CUP_1Rnd_SMOKE_GP25_M",6,1}}},{"CFP_AssaultPack_Multicam",{{"CUP_1Rnd_HE_GP25_M",6,1},{"CUP_1Rnd_SMOKE_GP25_M",6,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Security_Contractor_SVD_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Security Contractor [SVD]";

        linkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_V_RUS_6B45_MCam_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_wdl","CUP_hgun_Makarov","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_SVD_wdl","CUP_hgun_Makarov","Rangefinder"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_wdl","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_U_O_RUMVD_Gorka_Berezka_White",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",3,10},{"CUP_8Rnd_9x18_Makarov_M",3,8}}},{"CFP_V_RUS_6B45_MCam_3",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_10Rnd_762x54_SVD_M",8,10}}},{},"","",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Tactical_Driver_WIN_01 : CUP_O_RU_Soldier_EMR_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Driver";
        editorSubCategory = "CFP_EdSubcat_Personnel_Men";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";

        identityTypes[] = {"Head_Greek","LanguageRUS_F"};

        uniformClass = "CFP_U_O_RUMVD_Gorka_Klyaksa";

        linkedItems[] = {"SP_Tactical1_Black","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_SR3M_Vikhr_VFG","Binocular"};
        respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr_VFG","Binocular"};

        magazines[] = {"CUP_30Rnd_9x39_SP5_VIKHR_M","CUP_30Rnd_9x39_SP5_VIKHR_M"};
        respawnMagazines[] = {"CUP_30Rnd_9x39_SP5_VIKHR_M","CUP_30Rnd_9x39_SP5_VIKHR_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_SR3M_Vikhr_VFG","","","CUP_optic_Kobra",{"CUP_30Rnd_9x39_SP5_VIKHR_M",30},{},""},{},{},{"CFP_U_O_RUMVD_Gorka_Klyaksa",{{"FirstAidKit",1},{"CUP_30Rnd_9x39_SP5_VIKHR_M",2,30}}},{"SP_Tactical1_Black",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_9x39_SP5_VIKHR_M",3,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //PMC Uniforms
            uniformList[] = {
                "CFP_U_O_RUMVD_Gorka_Klyaksa", 0.3,
                "CFP_U_O_RUMVD_Gorka_Berezka_White", 0.3,
                "CFP_U_O_RUMVD_Gorka_White", 0.3,
                "CFP_U_FieldUniform_flecktarn_snow", 0.3,
                "CFP_U_FieldUniform_mtp_snow", 0.3,
                "CFP_U_FieldUniform_multicam_snow", 0.3
            };

        //Facewear
            facewearList[] = {
                "", 0.4,
                "CFP_Oakley_Goggles_Alp", 0.3,
                "CFP_Oakley_Goggles_Olv", 0.3,
                "CFP_Oakley_Goggles_Blk_Drk", 0.3,
                "CFP_Oakley_Goggles_Alp_Drk", 0.3,
                "SP_Goggles_Black", 0.3
            };

        //Headgear
            headgearList[] = {
                "CFP_FullFaceWrap_BerezWhite", 0.33,
                "CFP_FullFaceWrap_Snow", 0.33,
                "SP_BeanieHat_Green", 0.2,
                "CFP_BeanieHat_White", 0.2,
                "CFP_FullFaceWrap_Black", 0.33
            };

        //PMC Vests
            vestList[] = {
                "CFP_Tactical1_White2", 0.5,
                "CFP_Tactical1_Berez", 0.5,
                "SP_Tactical1_White", 0.5,
                "CFP_Tactical1_Woodland", 0.3
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

    class CFP_I_WAGNER_Tactical_Pilot_WIN_01 : CUP_O_RU_Soldier_EMR_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Pilot";
        editorSubCategory = "CFP_EdSubcat_Personnel_Men";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";

        identityTypes[] = {"Head_Greek","LanguageRUS_F"};

        uniformClass = "CFP_U_FieldUniform_multicam";

        linkedItems[] = {"CFP_Modular1_Multicam","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Modular1_Multicam","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_vityaz_vfg"};
        respawnWeapons[] = {"CUP_smg_vityaz_vfg"};

        magazines[] = {"CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz"};
        respawnMagazines[] = {"CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_vityaz_vfg","","","CUP_optic_Kobra",{"CUP_30Rnd_9x19AP_Vityaz",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"FirstAidKit",1},{"CUP_30Rnd_9x19AP_Vityaz",3,30}}},{"CFP_Modular1_Multicam",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_9x19AP_Vityaz",3,30},{"SmokeShellRed",1,1},{"Chemlight_red",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_O","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //PMC Facewear
            facewearList[] = {
                "", 0.3,
                "CUP_FR_NeckScarf", 0.3,
                "CUP_FR_NeckScarf2", 0.3,
                "CUP_FR_NeckScarf3", 0.3,
                "CUP_FR_NeckScarf4", 0.3,
                "CUP_FR_NeckScarf5", 0.3
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

    class CFP_I_WAGNER_Tactical_Specialist_Igla_WIN_01 : CFP_I_WAGNER_Contractor_2_WIN_01 {

        displayName = "Tactical Specialist [Igla]";

        linkedItems[] = {"CUP_V_RUS_6B45_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_RUS_6B45_3","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg_camo","CUP_launch_Igla_Loaded","hgun_Rook40_F","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg_camo","CUP_launch_Igla_Loaded","hgun_Rook40_F","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_Igla_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74M_camo_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_Igla_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74M_camo_M","16Rnd_9x21_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{"CUP_launch_Igla_Loaded","","","",{"CUP_Igla_M",1},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"CFP_U_FieldUniform_mtp_snow",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",3,30},{"16Rnd_9x21_Mag",2,16}}},{"CUP_V_RUS_6B45_3",{{"CUP_30Rnd_545x39_AK74M_camo_M",6,30},{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"16Rnd_9x21_Mag",1,16}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_Team_Coordinator_WIN_01 : CFP_I_WAGNER_Contractor_1_WIN_01 {

        displayName = "Team Coordinator";

        linkedItems[] = {"CUP_V_B_LBT_LBV_MCam","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_LBT_LBV_MCam","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK105_railed","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AK105_railed","hgun_Rook40_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74M_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74M_M","16Rnd_9x21_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK105_railed","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_AIMM_MICROT1_BLK",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"CFP_U_O_RUMVD_Gorka_White",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_M",2,30},{"16Rnd_9x21_Mag",3,16}}},{"CUP_V_B_LBT_LBV_MCam",{{"SmokeShell",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74M_M",6,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_WAGNER_BTR_80_WIN_01 : CUP_O_BTR80_GREEN_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-80";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\BTR80\btr80_wagner_snow_co.paa",
            "\x\cfp\addons\vehicles\BTR80\kpvt_wagner_snow_co.paa",
            "\x\cfp\addons\vehicles\BTR80\Wheels_chedaki_snow_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_WAGNER_Tactical_Driver_WIN_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_I_WAGNER_Tactical_Driver_WIN_01"; };
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

    class CFP_I_WAGNER_BMP_2_WIN_01 : CUP_O_BMP2_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionsTextures[] =
        {
            "\x\cfp\addons\vehicles\BMP2\WagnerSnowBody1_co.paa",
            "\x\cfp\addons\vehicles\BMP2\WagnerSnowBody2_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_WAGNER_Tactical_Driver_WIN_01"; };
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

    class CFP_I_WAGNER_Assault_Boat_WIN_01 : B_Boat_Transport_01_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

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

    class B_Quadbike_01_F;
    class CFP_I_WAGNER_Quad_Bike_WIN_01 : B_Quadbike_01_F {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Quadbike\quadbike_01_white_co.paa","x\cfp\addons\vehicles\Quadbike\quadbike_01_wheel_snow_co.paa"};

    };

    class CFP_I_WAGNER_MT_LB_LV_WIN_01 : CUP_O_MTLB_pk_Winter_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MT-LB LV";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_WAGNER_Contractor_1_WIN_01"; };
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

    class CUP_I_LSV_02_unarmed_ION;
    class CFP_I_WAGNER_Mk2_Light_Strike_Vehicle_WIN_01 : CUP_I_LSV_02_unarmed_ION {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk2 Light Strike Vehicle";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";
        hiddenSelectionsTextures[] =
        {
                    "x\cfp\addons\vehicles\LSV02\Wagner_lsv_02_01_winter_co.paa",
                    "x\cfp\addons\vehicles\LSV02\Wagner_lsv_02_02_winter_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_LSV_02\data\PMC_lsv_02_03_winter_co.paa"
                };
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LSV_02\data\preview\CUP_I_LSV_02_unarmed_ION.jpg";
        TRANSPORTWEAPONSLARGE(CUP_arifle_AK74M,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESLARGE(CUP_30Rnd_545x39_AK_M,CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,CUP_1Rnd_HE_GP25_M,CUP_PG7V_M,CUP_HandGrenade_RGD5,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSLARGE
        TRANSPORTBACKPACKSLARGE(CUP_B_CivPack_WDL)
    };

    class CFP_I_WAGNER_Ural_WIN_01 : CUP_O_Ural_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionstextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\whl_snow_co.paa"};

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

    class CFP_I_WAGNER_Ural_Refuel_WIN_01 : CUP_O_Ural_Refuel_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionstextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\ural_open_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\ural_fuel_chedaki_snow_co.paa","\x\cfp\addons\vehicles\Ural\whl_snow_co.paa"};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_WAGNER_Ural_Repair_WIN_01 : CUP_O_Ural_Repair_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Field_Technician_WIN_01";
        hiddenSelectionstextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\whl_snow_co.paa"};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_WAGNER_Ural_Ammo_WIN_01 : CUP_O_Ural_Reammo_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionstextures[] = {"\x\cfp\addons\vehicles\Ural\ural_kabina_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\ural_plachta_grn_snow_co.paa","\x\cfp\addons\vehicles\Ural\whl_snow_co.paa"};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_WAGNER_UAZ_Medevac_WIN_01 : CUP_O_UAZ_AMB_RU_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [Medevac]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Field_Medic_WIN_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_wagner_snow_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_WAGNER_UAZ_Open_WIN_01 : CUP_O_UAZ_Open_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [Open]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionsTextures[] = {
                "\x\cfp\addons\vehicles\UAZ\uaz_wagner_snow_co.paa",
                "\x\cfp\addons\vehicles\UAZ\uaz_mount_snow_co.paa"
            };

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

    class CFP_I_WAGNER_UAZ_WIN_01 : CUP_O_UAZ_Unarmed_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_wagner_snow_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};

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
    class CFP_I_WAGNER_Hilux_WIN_01 : CUP_Hilux_unarmed_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelections[] = {"camo","body"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_snowcamo1_co.paa","x\cfp\addons\vehicles\Hilux\hilux_tex2_snow_co.paa"};
        hiddenSelectionsMaterials[] = {"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body.rvmat","x\cfp\addons\vehicles\Hilux\hilux_tex2.rvmat"};
        textureList[]=
        {
            "WINCAMO",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_DSHKM_Base;
    class CFP_I_WAGNER_Hilux_DShKM_WIN_01 : CUP_Hilux_DSHKM_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelections[] = {"camo","body"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_snowcamo1_co.paa","x\cfp\addons\vehicles\Hilux\hilux_tex2_snow_co.paa"};
        hiddenSelectionsMaterials[] = {"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body.rvmat","x\cfp\addons\vehicles\Hilux\hilux_tex2.rvmat"};
        textureList[]=
        {
            "WINCAMO",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_SPG9_Base;
    class CFP_I_WAGNER_Hilux_SPG_WIN_01 : CUP_Hilux_SPG9_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelections[] = {"camo","body"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_snowcamo1_co.paa","x\cfp\addons\vehicles\Hilux\hilux_tex2_snow_co.paa"};
        hiddenSelectionsMaterials[] = {"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body.rvmat","x\cfp\addons\vehicles\Hilux\hilux_tex2.rvmat"};
        textureList[]=
        {
            "WINCAMO",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_igla_Base;
    class CFP_I_WAGNER_Hilux_Igla_WIN_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelections[] = {"camo","body"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_snowcamo1_co.paa","x\cfp\addons\vehicles\Hilux\hilux_tex2_snow_co.paa"};
        hiddenSelectionsMaterials[] = {"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body.rvmat","x\cfp\addons\vehicles\Hilux\hilux_tex2.rvmat"};
        textureList[]=
        {
            "WINCAMO",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_metis_Base;
    class CFP_I_WAGNER_Hilux_Metis_WIN_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Driver_WIN_01";
        hiddenSelections[] = {"camo","body"};
        hiddenSelectionsTextures[] = {"x\cfp\addons\vehicles\Hilux\body_snowcamo1_co.paa","x\cfp\addons\vehicles\Hilux\hilux_tex2_snow_co.paa"};
        hiddenSelectionsMaterials[] = {"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body.rvmat","x\cfp\addons\vehicles\Hilux\hilux_tex2.rvmat"};
        textureList[]=
        {
            "WINCAMO",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_ZU23_base;
    class CFP_I_WAGNER_ZU_23_WIN_01 : CUP_ZU23_base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

    };

    class CUP_SPG9_base;
    class CFP_I_WAGNER_SPG_9_WIN_01 : CUP_SPG9_base {
        //editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_WAGNER_SPG_9_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

    };

    class CUP_2b14_82mm_Base;
    class CFP_I_WAGNER_Mortar_WIN_01 : CUP_2b14_82mm_Base {
        //editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_WAGNER_Mortar_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

    };

    class CUP_DSHKM_base;
    class CFP_I_WAGNER_DShKM_WIN_01 : CUP_DSHKM_base {
        //editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_WAGNER_DShKM_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_I_WAGNER_DShKM_Low_WIN_01 : CUP_DSHKM_MiniTripod_base {
        //editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_WAGNER_DShKM_Low_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Contractor_1_WIN_01";

    };

    class CFP_I_WAGNER_Pchela_1T_WIN_01 : CUP_O_Pchela1T_RU_OCimport_02 {
        //editorPreview = "\x\cfp\addons\o_ruarmy_des\data\preview\CFP_O_RUARMY_Pchela_1T_DES_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pchela-1T";
        side = 2;
        faction = "CFP_I_WAGNER_WIN";
        crew = "O_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class CUP_Mi24_D_Dynamic_Base;
    class CFP_I_WAGNER_Mi24_D_WIN_01: CUP_Mi24_D_Dynamic_Base
    {
        scope = 2;
        side = 2;
        accuracy = 1000;
        displayname = "Mi-24 D";
        crew = "CFP_I_WAGNER_Tactical_Pilot_WIN_01";
        typicalCargo[] = {"CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01"};
        faction = "CFP_I_WAGNER_WIN";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Mi24\mi24_01_olive_co.paa","\x\cfp\addons\vehicles\Mi24\mi24_02_olive_co.paa"};
        editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_D_SLA.jpg";
    };

    class CUP_Mi8_MTV3_base;
    class CFP_I_WAGNER_Mi8_WIN_01: CUP_Mi8_MTV3_base
    {
        scope = 2;
        side = 2;
        accuracy = 1000;
        displayName = "Mi-8 MTV3";
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Pilot_WIN_01";
        typicalCargo[] = {"CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01","CFP_I_WAGNER_Tactical_Pilot_WIN_01"};
        hiddenSelectionsTextures[] =
            {
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
            "a3\data_f\clear_empty.paa",
            "CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
        };
        editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_2.jpg";
    };

    class Heli_Light_02_unarmed_base_F;
    class CFP_I_WAGNER_Ka60_WIN_01: Heli_Light_02_unarmed_base_F
    {
        scope = 2;
        side = 2;
        author = "CFP";
        displayname = "Ka60";
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Tactical_Pilot_WIN_01";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"};
        editorPreview = "CUP\AirVehicles\CUP_AirVehicles_KA60\Data\preview\CUP_O_Ka60_Blk_CSAT.jpg";
    };

    class SUV_01_base_black_F;
    class CFP_I_WAGNER_SUV_WIN_01: SUV_01_base_black_F
    {
        scope = 2;
        side = 2;
        author = "CFP";
        displayname = "SUV";
        faction = "CFP_I_WAGNER_WIN";
        crew = "CFP_I_WAGNER_Bodyguard_1_WIN_01";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\SUV\suv_a3_snow_co.paa"};
    };
};
