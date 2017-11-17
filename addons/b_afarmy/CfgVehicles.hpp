//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.5.0.1711091
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class CFP_B_AFARMY_Rifleman_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "CFP_B_AFARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_BattleDressUniform_edrl";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CUP_V_BAF_Osprey_Mk2_DPM_Empty",{{"CUP_30Rnd_556x45_Stanag",6,30}}},{},"CUP_H_RUS_6B27_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AFG_NationalArmy'] call BIS_fnc_setUnitInsignia;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalArmy";

    };

    class CFP_B_AFARMY_Commando_Rifleman_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commando Rifleman";
        side = 1;
        faction = "CFP_B_AFARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "IA_uniform_generic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_desert","","CUP_acc_ANPEQ_2_camo","CUP_optic_HoloWdl",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"IA_uniform_generic",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CUP_V_B_RRV_Scout3",{{"CUP_17Rnd_9x19_glock17",1,17},{"CUP_30Rnd_556x45_Stanag",7,30}}},{},"H_Cap_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","SP_Kneepads_Black"}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AFG_CommandoSpecialForces'] call BIS_fnc_setUnitInsignia;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_CommandoSpecialForces";

    };

};