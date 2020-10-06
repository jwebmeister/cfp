//////////////////////////////////////////////////////////////////////////////////

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

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

    class CUP_O_UAZ_METIS_SLA;
    class CUP_O_UAZ_METIS_SLA_OCimport_01 : CUP_O_UAZ_METIS_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_METIS_SLA_OCimport_02 : CUP_O_UAZ_METIS_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_Ural_ZU23_SLA;
    class CUP_O_Ural_ZU23_SLA_OCimport_01 : CUP_O_Ural_ZU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_ZU23_SLA_OCimport_02 : CUP_O_Ural_ZU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_G_Offroad_01_F;
    class O_G_Offroad_01_F_OCimport_01 : O_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_F_OCimport_02 : O_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class O_G_Van_01_transport_F;
    class O_G_Van_01_transport_F_OCimport_01 : O_G_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Van_01_transport_F_OCimport_02 : O_G_Van_01_transport_F_OCimport_01 {
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


    class CFP_O_HAMAS_Rifleman_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman ";
        side = 0;
        faction = "CFP_O_HAMAS";

        identityTypes[] = {"Head_TK","Language_Ackbar","G_IRAN_default"};

        uniformClass = "SP_0000_Standard_FieldUniform_Black";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"","SP_Balaclava_HamasBlack",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

            headgearList[] = {
                "", 1.0
            };

            facewearList[] = {
                "SP_Balaclava_Hamas", 0.7,
                "SP_Balaclava_HamasBlack", 0.3
            };

            uniformList[] = {
                "SP_0000_Standard_FieldUniform_Black", 0.4,
                "SP_0000_Standard_FieldUniform_Black_SS", 0.4,
                "SP_0000_Standard_FieldUniform_Green_SS", 0.2,
                "CFP_FieldUniform_blackacu_SS", 0.3,
                "CFP_U_FieldUniform_M81", 0.4,
                "CFP_U_FieldUniform_M81_SS", 0.4,
                "CFP_U_FieldUniform_digital_multicam", 0.2,
                "CFP_U_FieldUniform_marpat_w_SS", 0.2,
                "CFP_U_FieldUniform_edrl", 0.2
            };

            vestList[] = {
                "SP_Tactical1_Black", 0.4,
                "CFP_Tactical1_M81", 0.2,
                "CFP_Tactical1_EDRL", 0.2,
                "SP_Tactical1_Grey", 0.2,
                "V_TacVest_camo", 0.4,
                "CFP_Tactical1_Woodland", 0.2,
                "V_TacVest_oli", 0.2
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

    class CFP_O_HAMAS_Rifleman_AT_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Rifleman_AT_01.JPG;

        displayName = "Rifleman AT";

        linkedItems[] = {"CFP_Tactical1_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Black";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Tactical1_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CFP_RPGPack_Black",{{"CUP_PG7V_M",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Team_Leader_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Team_Leader_01.JPG;

        displayName = "Team Leader";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_acu",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"","SP_Balaclava_Hamas",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Medic_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Medic_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        side = 0;
        faction = "CFP_O_HAMAS";

        identityTypes[] = {"Head_TK","Language_Ackbar","G_IRAN_default"};

        uniformClass = "CFP_U_FieldUniform_M81";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"B_FieldPack_blk",{{"Medikit",1},{"FirstAidKit",10}}},"","SP_Balaclava_Hamas",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

            headgearList[] = {
                "CFP_PatrolCap_BlackHamas", 0.5,
                "CFP_PatrolCap_M81Hamas", 0.5
            };

            facewearList[] = {
                "G_Bandanna_blk", 0.3,
                "G_Bandanna_oli", 0.3,
                "G_Bandanna_khk", 0.3,
                "CFP_Shemagh_Half_Red", 0.3,
                "CFP_Shemagh_Half_White", 0.3,
                "CFP_Shemagh_Half_Tan", 0.3,
                "CFP_Shemagh_Half_Black", 0.3,
                "CFP_Shemagh_Face_Atacsau", 0.3
            };

            uniformList[] = {
                "SP_0000_Standard_FieldUniform_Black", 0.4,
                "SP_0000_Standard_FieldUniform_Black_SS", 0.4,
                "SP_0000_Standard_FieldUniform_Green_SS", 0.2,
                "CFP_FieldUniform_blackacu_SS", 0.3,
                "CFP_U_FieldUniform_M81", 0.4,
                "CFP_U_FieldUniform_M81_SS", 0.4,
                "CFP_U_FieldUniform_digital_multicam", 0.2,
                "CFP_U_FieldUniform_marpat_w_SS", 0.2,
                "CFP_U_FieldUniform_edrl", 0.2
            };

            vestList[] = {
                "SP_Tactical1_Black", 0.4,
                "CFP_Tactical1_M81", 0.2,
                "CFP_Tactical1_EDRL", 0.2,
                "SP_Tactical1_Grey", 0.2,
                "V_TacVest_camo", 0.4,
                "CFP_Tactical1_Woodland", 0.2,
                "V_TacVest_oli", 0.2
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

    class CFP_O_HAMAS_Grenadier_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Grenadier_01.JPG;

        displayName = "Grenadier";

        linkedItems[] = {"SP_Tactical1_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Grey","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"SP_Tactical1_Grey",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_1Rnd_HE_GP25_M",8,1}}},{"B_AssaultPack_blk",{{"CUP_1Rnd_SMOKE_GP25_M",8,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Machine_Gunner_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Machine_Gunner_01.JPG;

        displayName = "Machine Gunner";

        linkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_FieldUniform_digital_multicam",{{"FirstAidKit",1}}},{"V_TacVest_camo",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","SP_Balaclava_HamasBlack",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Explosive_Specialist_01 : CFP_O_HAMAS_Medic_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Explosive_Specialist_01.JPG;

        displayName = "Explosive Specialist";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"V_TacVest_oli","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_oli","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CFP_Kitbag_EDRL";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_TacVest_oli",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"CFP_Kitbag_EDRL",{{"APERSTripMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",3,1},{"ATMine_Range_Mag",2,1}}},"CFP_PatrolCap_M81Hamas","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Repair_Specialist_01 : CFP_O_HAMAS_Medic_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Repair_Specialist_01.JPG;

        displayName = "Repair Specialist";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"SP_Tactical1_Black","CFP_PatrolCap_BlackHamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","CFP_PatrolCap_BlackHamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"ToolKit",1}}},"CFP_PatrolCap_BlackHamas","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Sniper_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Sniper_01.JPG;

        displayName = "Sniper";

        linkedItems[] = {"CFP_Tactical1_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"SP_0000_Standard_FieldUniform_Green_SS",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_Tactical1_M81",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","SP_Balaclava_Hamas",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Gunner_DShKM_01 : CFP_O_HAMAS_Medic_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Gunner_DShKM_01.JPG;

        displayName = "Gunner [DShKM]";

        linkedItems[] = {"V_TacVest_camo","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CFP_PatrolCap_M81Hamas","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Asst_Gunner_DShKM_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Asst_Gunner_DShKM_01.JPG;

        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Gunner_Mortar_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        linkedItems[] = {"CFP_Tactical1_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Tactical1_Woodland",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Asst_Gunner_Mortar_01 : CFP_O_HAMAS_Medic_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Asst_Gunner_Mortar_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Gunner_SPG_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Gunner_SPG_01.JPG;

        displayName = "Gunner [SPG-9]";

        linkedItems[] = {"CFP_Tactical1_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_edrl",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Tactical1_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Asst_Gunner_SPG_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Asst_Gunner_SPG_01.JPG;

        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Gunner_Metis_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Gunner_Metis_01.JPG;

        displayName = "Gunner [Metis]";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Green_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"","SP_Balaclava_HamasBlack",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HAMAS_Asst_Gunner_Metis_01 : CFP_O_HAMAS_Medic_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Asst_Gunner_Metis_01.JPG;

        displayName = "Asst. Gunner [Metis]";

        linkedItems[] = {"V_TacVest_oli","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_oli","CFP_PatrolCap_M81Hamas","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacVest_oli",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Gun_Bag",{}},"CFP_PatrolCap_M81Hamas","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_DSHKM_base;
    class CFP_O_HAMAS_DShKM_01 : CUP_DSHKM_base {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
    };

    class CUP_2b14_82mm_Base;
    class CFP_O_HAMAS_Podnos_2B14_01 : CUP_2b14_82mm_Base {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Podnos_2B14_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14 ";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
    };

    class CUP_SPG9_base;
    class CFP_O_HAMAS_SPG_9_01 : CUP_SPG9_base {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_SPG_9_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
    };

    class CUP_Metis_base;
    class CFP_O_HAMAS_Metis_01 : CUP_Metis_base {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Metis_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Metis AT-13";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
    };

    class CFP_O_HAMAS_Rifleman_AA_01 : CFP_O_HAMAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Rifleman_AA_01.JPG;

        displayName = "Rifleman AA";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_Igla"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_Igla"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Igla_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Igla_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_Kitbag_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_Igla","","","",{"CUP_Igla_M",1},{},""},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CFP_Kitbag_M81",{{"CUP_Igla_M",1,1}}},"","SP_Balaclava_Hamas",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_Hilux_unarmed_Base;
    class CFP_O_HAMAS_Hilux_01 : CUP_Hilux_unarmed_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_DSHKM_Base;
    class CFP_O_HAMAS_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_SPG9_Base;
    class CFP_O_HAMAS_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_igla_Base;
    class CFP_O_HAMAS_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_metis_Base;
    class CFP_O_HAMAS_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_podnos_Base;
    class CFP_O_HAMAS_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_MLRS_Base;
    class CFP_O_HAMAS_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_zu23_Base;
    class CFP_O_HAMAS_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CUP_Hilux_AGS30_Base;
    class CFP_O_HAMAS_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";
        textureList[] = {
            "White", 0.5,
            "Blue", 0.5,
            "Red2", 0.5,
            "Tan", 0.5,
            "Guer1", 0.2,
            "Guer3", 0.2,
            "Guer4", 0.3,
            "Guer5", 0.2,
            "Guer6", 0.2,
            "Guer7", 0.2,
            "Guer8", 0.2,
            "Guer9", 0.2,
            "Creme", 0.5
        };
    };

    class CFP_O_HAMAS_Technical_MG_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Technical_MG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [MG]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_HAMAS_Rifleman_01"; };
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

    class CFP_O_HAMAS_Technical_SPG_01 : O_G_Offroad_01_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Technical_SPG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [SPG-9]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_HAMAS_Rifleman_01"; };
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

    class CFP_O_HAMAS_Technical_Metis_01 : CUP_O_UAZ_METIS_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Technical_Metis_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [Metis]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_HAMAS_Grenadier_01"; };
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

    class CFP_O_HAMAS_Ural_ZU_23_01 : CUP_O_Ural_ZU23_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Ural_ZU_23_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [ZU-23]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_HAMAS_Rifleman_01"; };
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

    class CFP_O_HAMAS_Technical_Unarmed_01 : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Technical_Unarmed_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical [Unarmed]";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

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

    class CFP_O_HAMAS_Truck_01 : O_G_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_hamas\data\preview\CFP_O_HAMAS_Truck_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_HAMAS";
        crew = "CFP_O_HAMAS_Rifleman_01";

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

    class CFP_O_HAMAS_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_Igla_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_HAMAS_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_srifle_SVD,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_3,10);
        };
    };
    class CFP_O_HAMAS_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
            mag_xx(CUP_Igla_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
            weap_xx(CUP_launch_Igla,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_HAMAS_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_FieldUniform_marpat_w_SS,15);
            item_xx(SP_0000_Standard_FieldUniform_Black_SS,15);
            item_xx(CFP_U_FieldUniform_edrl,15);
            item_xx(CFP_U_FieldUniform_acu,15);
            item_xx(SP_0000_Standard_FieldUniform_Black,15);
            item_xx(CFP_U_FieldUniform_M81_SS,15);
        };
    };
    class CFP_O_HAMAS_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(V_TacVest_camo,10);
            item_xx(SP_Balaclava_Hamas,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_Tactical1_M81,10);
            item_xx(CFP_RPGPack_Black,10);
            item_xx(SP_Tactical1_Black,10);
            item_xx(V_TacVest_oli,10);
            item_xx(CFP_PatrolCap_M81Hamas,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_FieldPack_blk,10);
            item_xx(CFP_Tactical1_Woodland,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(CFP_PatrolCap_BlackHamas,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(CFP_Kitbag_EDRL,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CFP_Tactical1_EDRL,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_Balaclava_HamasBlack,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Gun_Bag,10);
            item_xx(CFP_Kitbag_M81,10);
        };
    };
    class CFP_O_HAMAS_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Hamas Al Qassam Brigades Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_1Rnd_SMOKE_GP25_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_Igla_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_launch_RPG7V,10);
            weap_xx(CUP_launch_Igla,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_3,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_Balaclava_Hamas,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_Tactical1_M81,10);
            item_xx(CFP_RPGPack_Black,10);
            item_xx(SP_Tactical1_Black,10);
            item_xx(V_TacVest_oli,10);
            item_xx(CFP_PatrolCap_M81Hamas,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_FieldPack_blk,10);
            item_xx(CFP_Tactical1_Woodland,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(B_Kitbag_rgr,10);
            item_xx(CFP_PatrolCap_BlackHamas,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(CFP_Kitbag_EDRL,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CFP_Tactical1_EDRL,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_Balaclava_HamasBlack,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Gun_Bag,10);
            item_xx(CFP_Kitbag_M81,10);
            item_xx(CFP_U_FieldUniform_marpat_w_SS,10);
            item_xx(SP_0000_Standard_FieldUniform_Black_SS,10);
            item_xx(CFP_U_FieldUniform_edrl,10);
            item_xx(CFP_U_FieldUniform_acu,10);
            item_xx(SP_0000_Standard_FieldUniform_Black,10);
            item_xx(CFP_U_FieldUniform_M81_SS,10);
        };
    };

};