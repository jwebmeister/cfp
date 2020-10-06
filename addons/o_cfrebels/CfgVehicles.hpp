#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_G_Soldier_F;
    class O_G_Soldier_F_OCimport_01 : O_G_Soldier_F { scope = 0; class EventHandlers; };
    class O_G_Soldier_F_OCimport_02 : O_G_Soldier_F_OCimport_01 { class EventHandlers; };


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

    class O_G_Offroad_01_repair_F;
    class O_G_Offroad_01_repair_F_OCimport_01 : O_G_Offroad_01_repair_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_repair_F_OCimport_02 : O_G_Offroad_01_repair_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class O_G_Offroad_01_AT_F;
    class O_G_Offroad_01_AT_F_OCimport_01 : O_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_AT_F_OCimport_02 : O_G_Offroad_01_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class CUP_I_V3S_Open_TKG;
    class CUP_I_V3S_Open_TKG_OCimport_01 : CUP_I_V3S_Open_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Open_TKG_OCimport_02 : CUP_I_V3S_Open_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class O_G_Boat_Transport_01_F;
    class O_G_Boat_Transport_01_F_OCimport_01 : O_G_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Boat_Transport_01_F_OCimport_02 : O_G_Boat_Transport_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_Hilux_unarmed_TK;
    class CUP_I_Hilux_unarmed_TK_OCimport_01 : CUP_I_Hilux_unarmed_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_unarmed_TK_OCimport_02 : CUP_I_Hilux_unarmed_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_Hilux_DSHKM_TK;
    class CUP_I_Hilux_DSHKM_TK_OCimport_01 : CUP_I_Hilux_DSHKM_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_DSHKM_TK_OCimport_02 : CUP_I_Hilux_DSHKM_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_SPG9_TK;
    class CUP_I_Hilux_SPG9_TK_OCimport_01 : CUP_I_Hilux_SPG9_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_SPG9_TK_OCimport_02 : CUP_I_Hilux_SPG9_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_zu23_TK;
    class CUP_I_Hilux_zu23_TK_OCimport_01 : CUP_I_Hilux_zu23_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_zu23_TK_OCimport_02 : CUP_I_Hilux_zu23_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class CFP_O_CFRebels_Rifleman_01 : O_G_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        genericNames = "Afromen";
        side = 0;
        faction = "CFP_O_CFRebels";

        identityTypes[] = {"Head_African","LanguageFRE_F","G_GUERIL_default"};

        uniformClass = "CFP_GUER_ERDLpants";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ERDLpants",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_2", 0.2,
          "CUP_I_B_PMC_Unit_20", 0.2,
          "CUP_I_B_PMC_Unit_16", 0.2,
          "CUP_I_B_PMC_Unit_1", 0.2,
          "CUP_I_B_PARA_Unit_5", 0.2,
          "CUP_I_B_PARA_Unit_10", 0.2,
          "CUP_U_I_GUE_Woodland1", 0.2,
          "U_BG_Guerilla2_2", 0.2,
          "U_BG_Guerilla2_3", 0.2,
          "U_BG_Guerrilla_6_1", 0.2,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_PolyDespants", 0.2,
          "CFP_GUER_PolyDesert", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_polygonwoodlanddark", 0.2,
          "SP_0000_Standard_BattleDressUniform_Green", 0.2,
          "CFP_U_BattleDressUniform_dpmwoodlandgreen", 0.2,
          "CFP_U_BattleDressUniform_DPMWoodland", 0.2,
          "CUP_U_B_BDUv2_CEU", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "SP_Beret2_Red", 0.2,
            "SP_BoonieHat_M81", 0.2,
            "SP_BoonieHat_Green", 0.2,
            "H_Booniehat_khk", 0.2,
            "H_Booniehat_oli", 0.2,
            "SP_BaseballCap_Green", 0.2,
            "SP_BaseballCap_Black", 0.2,
            "SP_BaseballCap_Tan", 0.2,
            "SP_BoonieHat_PolygonWoodland", 0.2,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Green", 0.2,
            "CFP_PatrolCap_M81", 0.2,
            "CFP_PatrolCap_EDRL", 0.2,
            "SP_PatrolCap_Green", 0.2,
            "SP_PatrolCap_Black", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.3,
            "CFP_Neck_Plain3", 0.3,
            "CFP_Neck_Plain4", 0.3,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
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

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.1,
            "CUP_V_OI_TKI_Jacket3_02", 0.1,
            "CUP_V_OI_TKI_Jacket3_01", 0.1,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
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

    class CFP_O_CFRebels_Militiaman_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Militiaman_01.JPG;

        displayName = "Militiaman";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS"};
        respawnWeapons[] = {"CUP_arifle_AKMS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_Green",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Autorifleman_RPK_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Autorifleman_RPK_01.JPG;

        displayName = "Autorifleman (RPK)";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_GUER_PolyDespants",{{"FirstAidKit",1},{"Chemlight_blue",1,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",1,75}}},{"CFP_UtilityJacket_EDRL",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2,75}}},{"B_AssaultPack_rgr",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",4,75}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Team_Leader_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Team_Leader_01.JPG;

        displayName = "Team Leader";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_16",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1},{"SmokeShell",1,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Surgeon_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Surgeon_01.JPG;

        displayName = "Surgeon";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "G_FieldPack_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_GUER_Tigerpants",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74_plum_M",2,30}}},{"CFP_UtilityJacket_ChocChip",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"G_FieldPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Demo_Specialist_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Demo_Specialist_01.JPG;

        displayName = "Demo Specialist";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_GL"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "G_Carryall_Exp";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_GUER_M81",{{"FirstAidKit",1},{"MiniGrenade",1,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",1,1},{"CUP_IlumFlareRed_GP25_M",1,1}}},{"G_Carryall_Exp",{{"ToolKit",1},{"MineDetector",1},{"APERSBoundingMine_Range_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"DemoCharge_Remote_Mag",5,1},{"CUP_1Rnd_HE_GP25_M",4,1},{"CUP_IlumFlareRed_GP25_M",2,1},{"CUP_1Rnd_SMOKE_GP25_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Grenadier_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Grenadier_01.JPG;

        displayName = "Grenadier";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_GL"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_Kitbag_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CUP_U_I_GUE_Woodland1",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_1Rnd_HE_GP25_M",4,1},{"CUP_1Rnd_SMOKE_GP25_M",4,1}}},{"CFP_Kitbag_M81",{{"CUP_1Rnd_HE_GP25_M",7,1},{"CUP_IlumFlareRed_GP25_M",2,1},{"CUP_1Rnd_SMOKE_GP25_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Squad_Leader_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Squad_Leader_01.JPG;

        displayName = "Squad Leader";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CUP_I_B_PARA_Unit_10",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_M",2,30},{"MiniGrenade",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_545x39_AK74M_M",4,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_RPG_Gunner_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_RPG_Gunner_01.JPG;

        displayName = "RPG Gunner";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V2"};
        respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V2"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_RPG7V_PGO7V2","","","CUP_optic_PGO7V2",{"CUP_PG7VL_M",1},{},""},{},{"SP_0000_Standard_BattleDressUniform_Green",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGO",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",2,1},{"CUP_OG7_M",1,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Sharpshooter_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Sharpshooter_01.JPG;

        displayName = "Sharpshooter";

        linkedItems[] = {"CFP_TakJacket_PolygonWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_PolygonWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield","Binocular"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield","Binocular"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","",{"CUP_10x_303_M",10},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_10x_303_M",2,10}}},{"CFP_TakJacket_PolygonWoodland",{{"SmokeShell",2,1},{"CUP_10x_303_M",4,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Sniper_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Sniper_01.JPG;

        displayName = "Sniper";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_CZ550","CUP_hgun_SA61","Binocular"};
        respawnWeapons[] = {"CUP_srifle_CZ550","CUP_hgun_SA61","Binocular"};

        magazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_10Rnd_B_765x17_Ball_M","CUP_5x_22_LR_17_HMR_M","CUP_10Rnd_B_765x17_Ball_M"};
        respawnMagazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_10Rnd_B_765x17_Ball_M","CUP_5x_22_LR_17_HMR_M","CUP_10Rnd_B_765x17_Ball_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_CZ550","","","",{"CUP_5x_22_LR_17_HMR_M",5},{},""},{},{"CUP_hgun_SA61","","","",{"CUP_10Rnd_B_765x17_Ball_M",10},{},""},{"CFP_U_WorkUniform_DPM",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_5x_22_LR_17_HMR_M",2,5}}},{"CUP_V_OI_TKI_Jacket3_01",{{"CUP_5x_22_LR_17_HMR_M",4,5}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Machinegunner_PKM_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Machinegunner_PKM_01.JPG;

        displayName = "Machinegunner (PKM)";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_FieldPack_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CUP_I_B_PARA_Unit_5",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_FieldPack_oli",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Commander_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Commander_01.JPG;

        displayName = "Commander";

        linkedItems[] = {"CFP_AK_VEST_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_MicroUzi","Binocular"};
        respawnWeapons[] = {"CUP_hgun_MicroUzi","Binocular"};

        magazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_MicroUzi","","","",{"CUP_30Rnd_9x19_UZI",30},{},""},{"CUP_U_B_BDUv2_CEU",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_9x19_UZI",2,30}}},{"CFP_AK_VEST_Black",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"Chemlight_blue",2,1},{"CUP_30Rnd_9x19_UZI",4,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Ex_FACA_Rifleman_01 : O_G_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Ex_FACA_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ex-FACA Rifleman";
        genericNames = "Afromen";
        side = 0;
        faction = "CFP_O_CFRebels";

        identityTypes[] = {"Head_African","LanguageFRE_F","G_GUERIL_default"};

        uniformClass = "CFP_U_BattleDressUniform_polygonwoodlanddark";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_hgun_Makarov"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_U_BattleDressUniform_polygonwoodlanddark",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_8Rnd_9x18_Makarov_M",1,8},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Olive",{{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_PolyDespants", 0.2,
          "CFP_GUER_PolyDesert", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_polygonwoodlanddark", 0.2,
          "SP_0000_Standard_BattleDressUniform_Green", 0.2,
          "CFP_U_BattleDressUniform_dpmwoodlandgreen", 0.2,
          "CFP_U_BattleDressUniform_DPMWoodland", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "SP_Beret2_Red", 0.5,
            "SP_BoonieHat_M81", 0.5,
            "SP_BoonieHat_Green", 0.5,
            "H_Booniehat_khk", 0.5,
            "H_Booniehat_oli", 0.5,
            "SP_BaseballCap_Green", 0.5,
            "SP_BaseballCap_Black", 0.2,
            "SP_BaseballCap_Tan", 0.2,
            "SP_BoonieHat_PolygonWoodland", 0.5,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Green", 0.2,
            "CFP_PatrolCap_M81", 0.5,
            "CFP_PatrolCap_EDRL", 0.5,
            "SP_PatrolCap_Green", 0.5,
            "SP_PatrolCap_Black", 0.5
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.3,
            "CFP_Neck_Plain3", 0.3,
            "CFP_Neck_Plain4", 0.3,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
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

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.1,
            "CUP_V_OI_TKI_Jacket3_02", 0.1,
            "CUP_V_OI_TKI_Jacket3_01", 0.1,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
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

    class CFP_O_CFRebels_Ex_FACA_Autorifleman_01 : CFP_O_CFRebels_Ex_FACA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Ex_FACA_Autorifleman_01.JPG;

        displayName = "Ex-FACA Autorifleman";

        linkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_GUER_PolyDespants",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_camo",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_AssaultPack_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Ex_FACA_Team_Leader_01 : CFP_O_CFRebels_Ex_FACA_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Ex_FACA_Team_Leader_01.JPG;

        displayName = "Ex-FACA Team Leader";

        linkedItems[] = {"CFP_Tactical1_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_GUER_PolyDesert",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_545x39_AK74M_M",2,30}}},{"CFP_Tactical1_Woodland",{{"CUP_HandGrenade_RGD5",1,1},{"SmokeShell",1,1},{"CUP_30Rnd_545x39_AK74M_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Gunner_HMG_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Gunner_HMG_01.JPG;

        displayName = "Gunner (HMG)";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS"};
        respawnWeapons[] = {"CUP_arifle_AKMS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Assistant_Gunner_HMG_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Assistant_Gunner_HMG_01.JPG;

        displayName = "Assistant Gunner (HMG)";

        linkedItems[] = {"V_TacVest_brn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","",{"CUP_10x_303_M",10},{},""},{},{},{"CUP_I_B_PMC_Unit_1",{{"FirstAidKit",1},{"CUP_10x_303_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_brn",{{"CUP_10x_303_M",5,10}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Gunner_Mortar_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Gunner_Mortar_01.JPG;

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_camo","","","",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"CUP_I_B_PARA_Unit_10",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_camo_M",2,30}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_545x39_AK74M_camo_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_CFRebels_Assistant_Gunner_Mortar_01 : CFP_O_CFRebels_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Assistant_Gunner_Mortar_01.JPG;

        displayName = "Assistant Gunner (Mortar)";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","",{"CUP_10x_303_M",10},{},""},{},{},{"CFP_U_BattleDressUniform_dpmwoodlandgreen",{{"FirstAidKit",1},{"CUP_10x_303_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_10x_303_M",4,10}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_Hilux_unarmed_Base;
    class CFP_O_CFRebels_Hilux_01 :CUP_Hilux_unarmed_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";
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
    class CFP_O_CFRebels_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";
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
    class CFP_O_CFRebels_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";
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
    class CFP_O_CFRebels_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";
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

    class CFP_O_CFRebels_Technical_PK_01 : CUP_I_Datsun_PK_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Technical_PK_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical (PK)";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SOREBEL_Rifleman_01"; };
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

    class CFP_O_CFRebels_Offroad_Repair_01 : O_G_Offroad_01_repair_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Offroad_Repair_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad Repair";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\PolygonWoodland.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "PolygonWooodland";

    };

    class CFP_O_CFRebels_Offroad_50_Cal_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Offroad_50_Cal_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad 50. Cal";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_CFRebels_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\PolygonWoodland.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "PolygonWooodland";

    };

    class CFP_O_CFRebels_Offroad_SPG_9_01 : O_G_Offroad_01_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Offroad_SPG_9_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad SPG-9";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_CFRebels_Rifleman_01"; };
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

    class CFP_O_CFRebels_Truck_01 : CUP_I_V3S_Open_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Truck_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_SPG9_Base;
    class CFP_O_CFRebels_SPG_9_01 : CUP_SPG9_Base {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_SPG_9_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

    };

    class CUP_2b14_82mm_Base;
    class CFP_O_CFRebels_Podnos_Mortar_01 : CUP_2b14_82mm_Base {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Podnos_Mortar_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos Mortar";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";
    };

    class CFP_O_CFRebels_Assault_Boat_01 : O_G_Boat_Transport_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_cfrebels\data\preview\CFP_O_CFRebels_Assault_Boat_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "CFP_O_CFRebels";
        crew = "CFP_O_CFRebels_Rifleman_01";

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

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_CFRebels_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(Chemlight_blue,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_IlumFlareRed_GP25_M,50);
            mag_xx(APERSBoundingMine_Range_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_5x_22_LR_17_HMR_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_CFRebels_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_5x_22_LR_17_HMR_M,50);
            mag_xx(CUP_10Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_arifle_RPK74,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_CZ550,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_hgun_MicroUzi,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_arifle_AKS,10);
        };
        class TransportItems {
        };
    };
    class CFP_O_CFRebels_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V_PGO7V2,5);
        };
        class TransportItems {
            item_xx(CUP_optic_PGO7V2,5);
        };
    };
    class CFP_O_CFRebels_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(U_BG_Guerilla2_2,15);
            item_xx(U_C_Poloshirt_tricolour,15);
            item_xx(U_OG_Guerilla2_1,15);
            item_xx(CUP_O_TKI_Khet_Jeans_04,15);
            item_xx(U_OG_Guerilla2_3,15);
            item_xx(CUP_U_I_GUE_Woodland1,15);
            item_xx(CUP_U_I_GUE_Anorak_03,15);
            item_xx(U_C_Poloshirt_blue,15);
            item_xx(U_BG_Guerrilla_6_1,15);
            item_xx(U_I_C_Soldier_Bandit_2_F,15);
            item_xx(CUP_U_O_Partisan_VSR_Mixed1,15);
            item_xx(CFP_U_BattleDressUniform_polygonwoodlanddark,15);
            item_xx(U_I_C_Soldier_Bandit_3_F,15);
            item_xx(U_I_C_Soldier_Bandit_5_F,15);
            item_xx(U_C_IDAP_Man_Tee_F,15);
            item_xx(U_I_C_Soldier_Bandit_4_F,15);
        };
    };
    class CFP_O_CFRebels_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_H_PMC_Cap_Burberry,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_TakJacket_M81,10);
            item_xx(H_Bandanna_sand,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CUP_H_C_Beanie_03,10);
            item_xx(V_TacVest_blk,10);
            item_xx(SP_BaseballCap_Hunter2,10);
            item_xx(CUP_V_OI_TKI_Jacket2_04,10);
            item_xx(H_Booniehat_oli,10);
            item_xx(G_FieldPack_Medic,10);
            item_xx(SP_Harness1_Green,10);
            item_xx(CFP_Basic_Helmet_PolygonDesert,10);
            item_xx(G_Sport_Greenblack,10);
            item_xx(G_Carryall_Exp,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_Cap_blu,10);
            item_xx(B_Messenger_Olive_F,10);
            item_xx(Binocular,10);
            item_xx(CFP_Smersh_Brown,10);
            item_xx(SP_M1Helmet_UN,10);
            item_xx(G_Aviator,10);
            item_xx(CUP_V_O_TK_Vest_1,10);
            item_xx(H_Cap_red,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_TakJacket_PolygonWoodland,10);
            item_xx(CFP_BoonieHat_PolygonWoodland,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_UtilityJacket_M81,10);
            item_xx(H_Cap_grn,10);
            item_xx(B_FieldPack_oli,10);
            item_xx(CUP_V_CDF_OfficerBelt2,10);
            item_xx(H_Beret_blk,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(G_Sport_Checkered,10);
            item_xx(V_TacVest_camo,10);
            item_xx(CFP_Basic_Helmet_M81,10);
            item_xx(SP_Modular2_Green,10);
            item_xx(CFP_Basic_Helmet_PolygonWoodland,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_BaseballCap_Hunter,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(SP_Tactical1_Green,10);
            item_xx(CUP_H_C_Beanie_04,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
        };
    };
    class CFP_O_CFRebels_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Central African Rebels Supply Box;
        class TransportMagazines {
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(Chemlight_blue,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_IlumFlareRed_GP25_M,50);
            mag_xx(APERSBoundingMine_Range_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_5x_22_LR_17_HMR_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_arifle_RPK74,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_CZ550,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_hgun_MicroUzi,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_launch_RPG7V_PGO7V2,10);
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_H_PMC_Cap_Burberry,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_TakJacket_M81,10);
            item_xx(H_Bandanna_sand,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CUP_H_C_Beanie_03,10);
            item_xx(V_TacVest_blk,10);
            item_xx(SP_BaseballCap_Hunter2,10);
            item_xx(CUP_V_OI_TKI_Jacket2_04,10);
            item_xx(H_Booniehat_oli,10);
            item_xx(G_FieldPack_Medic,10);
            item_xx(SP_Harness1_Green,10);
            item_xx(CFP_Basic_Helmet_PolygonDesert,10);
            item_xx(G_Sport_Greenblack,10);
            item_xx(G_Carryall_Exp,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_Cap_blu,10);
            item_xx(B_Messenger_Olive_F,10);
            item_xx(Binocular,10);
            item_xx(CFP_Smersh_Brown,10);
            item_xx(SP_M1Helmet_UN,10);
            item_xx(G_Aviator,10);
            item_xx(CUP_V_O_TK_Vest_1,10);
            item_xx(H_Cap_red,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_TakJacket_PolygonWoodland,10);
            item_xx(CFP_BoonieHat_PolygonWoodland,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_UtilityJacket_M81,10);
            item_xx(H_Cap_grn,10);
            item_xx(B_FieldPack_oli,10);
            item_xx(CUP_V_CDF_OfficerBelt2,10);
            item_xx(H_Beret_blk,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_AK_VEST_Olive,10);
            item_xx(G_Sport_Checkered,10);
            item_xx(V_TacVest_camo,10);
            item_xx(CFP_Basic_Helmet_M81,10);
            item_xx(SP_Modular2_Green,10);
            item_xx(CFP_Basic_Helmet_PolygonWoodland,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_BaseballCap_Hunter,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(SP_Tactical1_Green,10);
            item_xx(CUP_H_C_Beanie_04,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(U_BG_Guerilla2_2,10);
            item_xx(U_C_Poloshirt_tricolour,10);
            item_xx(U_OG_Guerilla2_1,10);
            item_xx(CUP_O_TKI_Khet_Jeans_04,10);
            item_xx(U_OG_Guerilla2_3,10);
            item_xx(CUP_U_I_GUE_Woodland1,10);
            item_xx(CUP_U_I_GUE_Anorak_03,10);
            item_xx(U_C_Poloshirt_blue,10);
            item_xx(U_BG_Guerrilla_6_1,10);
            item_xx(U_I_C_Soldier_Bandit_2_F,10);
            item_xx(CUP_U_O_Partisan_VSR_Mixed1,10);
            item_xx(CFP_U_BattleDressUniform_polygonwoodlanddark,10);
            item_xx(U_I_C_Soldier_Bandit_3_F,10);
            item_xx(U_I_C_Soldier_Bandit_5_F,10);
            item_xx(U_C_IDAP_Man_Tee_F,10);
            item_xx(U_I_C_Soldier_Bandit_4_F,10);
            item_xx(CUP_optic_PGO7V2,5);
        };
    };
};