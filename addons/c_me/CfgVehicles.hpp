//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.4.1.1710051
//////////////////////////////////////////////////////////////////////////////////

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class C_man_1;
    class C_man_1_OCimport_01 : C_man_1 { scope = 0; class EventHandlers; };
    class C_man_1_OCimport_02 : C_man_1_OCimport_01 { class EventHandlers; };

    class CUP_C_Ikarus_TKC;
    class CUP_C_Ikarus_TKC_OCimport_01 : CUP_C_Ikarus_TKC { scope = 0; class EventHandlers; };
    class CUP_C_Ikarus_TKC_OCimport_02 : CUP_C_Ikarus_TKC_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_LR_Transport_CTK;
    class CUP_C_LR_Transport_CTK_OCimport_01 : CUP_C_LR_Transport_CTK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_LR_Transport_CTK_OCimport_02 : CUP_C_LR_Transport_CTK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_UAZ_Unarmed_TK_CIV;
    class CUP_C_UAZ_Unarmed_TK_CIV_OCimport_01 : CUP_C_UAZ_Unarmed_TK_CIV { scope = 0; class EventHandlers; };
    class CUP_C_UAZ_Unarmed_TK_CIV_OCimport_02 : CUP_C_UAZ_Unarmed_TK_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_SUV_TK;
    class CUP_C_SUV_TK_OCimport_01 : CUP_C_SUV_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_SUV_TK_OCimport_02 : CUP_C_SUV_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CUP_C_Skoda_White_CIV;
    class CUP_C_Skoda_White_CIV_OCimport_01 : CUP_C_Skoda_White_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Skoda_White_CIV_OCimport_02 : CUP_C_Skoda_White_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Datsun_Plain;
    class CUP_C_Datsun_Plain_OCimport_01 : CUP_C_Datsun_Plain { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Datsun_Plain_OCimport_02 : CUP_C_Datsun_Plain_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_Datsun_Covered;
    class CUP_C_Datsun_Covered_OCimport_01 : CUP_C_Datsun_Covered { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Datsun_Covered_OCimport_02 : CUP_C_Datsun_Covered_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_Golf4_red_Civ;
    class CUP_C_Golf4_red_Civ_OCimport_01 : CUP_C_Golf4_red_Civ { scope = 0; class EventHandlers; };
    class CUP_C_Golf4_red_Civ_OCimport_02 : CUP_C_Golf4_red_Civ_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Octavia_CIV;
    class CUP_C_Octavia_CIV_OCimport_01 : CUP_C_Octavia_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Octavia_CIV_OCimport_02 : CUP_C_Octavia_CIV_OCimport_01 { scope = 0; class EventHandlers; };

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


    class CFP_C_ME_Civ_1_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_1_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 1";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_U_C_Citizen_02',[]],[],[],'','',[],['','','','','','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_2_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_2_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 2";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_U_C_Citizen_01',[]],[],[],'CUP_H_C_Beanie_03','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_3_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_3_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 3";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_C_Man_casual_3_F',[]],[],[],'','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_4_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_4_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 4";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_U_C_Citizen_04',[]],[],[],'','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_5_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_5_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 5";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_U_C_Citizen_03',[]],[],[],'CUP_H_C_Beanie_02','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_6_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_6_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 6";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_BG_Guerilla2_3',[]],[],[],'','',[],['','','','','','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_7_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_7_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 7";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_I_B_PMC_Unit_1',[]],[],[],'','',[],['','','','','','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_8_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_8_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 8";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_I_B_PMC_Unit_2',[]],[],[],'','',[],['','','','','','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_9_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_9_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 9";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_C_Man_casual_1_F',[]],[],[],'','',[],['','','','','','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_10_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_10_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 10";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_C_Man_casual_2_F',[]],[],[],'','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_11_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_11_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 11";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_Marshal',[]],[],[],'','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_12_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_12_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 12";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_U_I_GUE_Anorak_03',[]],[],[],'H_Bandanna_sgg','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_13_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_13_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 13";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['CUP_I_B_PMC_Unit_4',[]],[],[],'H_Bandanna_cbr','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Civ_14_01 : C_man_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\c_me\data\preview\CFP_C_ME_Civ_14_01.JPG";
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civ 14";
        side = 3;
        faction = "CFP_C_ME";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_this setunitloadout [[],[],[],['U_C_Poor_1',[]],[],[],'H_Bandanna_blu','',[],['','','','','ItemWatch','']];reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Ikarus_01 : CUP_C_Ikarus_TKC_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ikarus";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_1_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Land_Rover_01 : CUP_C_LR_Transport_CTK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_2_01";

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

    class CFP_C_ME_UAZ_01 : CUP_C_UAZ_Unarmed_TK_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_3_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_SUV_01 : CUP_C_SUV_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_4_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
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

    class CFP_C_ME_Skoda_01 : CUP_C_Skoda_White_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_5_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Datsun_Pickup_01 : CUP_C_Datsun_Plain_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_6_01";

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

    class CFP_C_ME_Datsun_Pickup_Covered_01 : CUP_C_Datsun_Covered_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup Covered";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_7_01";

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

    class CFP_C_ME_Golf_Red_01 : CUP_C_Golf4_red_Civ_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Golf Red";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_8_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Skoda_Octavia_01 : CUP_C_Octavia_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda Octavia";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_9_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ME_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 3;
        faction = "CFP_C_ME";
        crew = "CFP_C_ME_Civ_10_01";

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

};