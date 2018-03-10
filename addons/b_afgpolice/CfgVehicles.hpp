//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.4.1.1710311
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class CFP_B_AFGPolice_Rifleman_AK74_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Rifleman [AK74]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then { _onSpawn = { private _unit = _this select 0; sleep 0.2; private _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _unit) >> 'backpack'); waituntil {sleep 0.2; backpack _unit == _backpack}; _unit setunitloadout [ ['CUP_arifle_AK74','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[], ['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_545x39_AK_M',3,30]]], ['CFP_AK_VEST_LOlive',[['CUP_30Rnd_545x39_AK_M',5,30]]],[], 'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']]; [_unit,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _unit; };_this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Grenadier_AK74_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Grenadier [AK74]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AK74_GL','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_545x39_AK_M',3,30]]],['CFP_AK_VEST_LOlive',[['CUP_1Rnd_HE_GP25_M',5,1],['CUP_1Rnd_SMOKE_GP25_M',3,1],['CUP_30Rnd_545x39_AK_M',5,30]]],[],'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Rifleman_AK74M_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Rifleman [AK74M]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AK74M','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_545x39_AK_M',3,30]]],['CFP_AK_VEST_LOlive',[['CUP_30Rnd_545x39_AK_M',5,30]]],[],'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Officer_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = " ANP Officer";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; _this setunitloadout [['CUP_arifle_AK74M','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_545x39_AK_M',3,30]]],['CFP_AK_VEST_LOlive',[['CUP_30Rnd_545x39_AK_M',5,30]]],[],'CFP_PatrolCap_ANP','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Grenadier_AK74M_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Grenadier [AK74M]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; _this setunitloadout [['CUP_arifle_AK74M_GL','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_545x39_AK_M',3,30]]],['CFP_AK_VEST_LOlive',[['CUP_1Rnd_HE_GP25_M',5,1],['CUP_1Rnd_SMOKE_GP25_M',3,1],['CUP_30Rnd_545x39_AK_M',5,30]]],[],'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Machine_Gunner_PKM_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Machine Gunner [PKM]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_PKM','','','',['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',100],[],''],[],[],['CFP_U_BattleDressUniform_anp_dark',[]],['CFP_AK_VEST_LOlive',[['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',1,100]]],['CUP_B_AssaultPack_Black',[['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',2,100]]],'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Rifleman_AT_RPG_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "ANP Rifleman AT [RPG]";
        side = 1;
        faction = "CFP_B_AFGPOLICE";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "CFP_U_BattleDressUniform_anp_dark";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AKM','','','',['CUP_30Rnd_762x39_AK47_M',30],[],''],['CUP_launch_RPG7V','','','',['CUP_PG7V_M',1],[],''],[],['CFP_U_BattleDressUniform_anp_dark',[['CUP_30Rnd_762x39_AK47_M',2,30]]],['CFP_AK_VEST_LOlive',[['CUP_30Rnd_762x39_AK47_M',5,30]]],['CUP_B_RPGPack_Khaki',[['CUP_PG7V_M',3,1]]],'CFP_PatrolCap_ANP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class Offroad_01_base_F;
    class CFP_B_AFGPolice_offroad: Offroad_01_base_F
    {
        scope = 2;
        side = 1;
        displayName = "Afghan Police Offroad";
        faction = "CFP_B_AFGPOLICE";
        camouflage = 4;
        crew = "CFP_B_AFGPolice_Rifleman_AK74_01";
        typicalCargo[] = {"CFP_B_AFGPolice_Rifleman_AK74_01","CFP_B_AFGPolice_Rifleman_AK74M_01"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_afgpolice\data\offroad_afghan_police.paa","\x\cfp\addons\b_afgpolice\data\offroad_afghan_police.paa"};
        editorPreview = "\x\cfp\addons\b_afgpolice\data\Preview_afgpolice_Offroad.jpg";
    };

    class B_G_Offroad_01_armed_F;
    class CFP_B_AFGPolice_offroad_armed: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 1;
        displayName = "Afghan Police Offroad (Armed)";
        faction = "CFP_B_AFGPOLICE";
        camouflage = 4;
        crew = "CFP_B_AFGPolice_Rifleman_AK74_01";
        typicalCargo[] = {"CFP_B_AFGPolice_Rifleman_AK74_01","CFP_B_AFGPolice_Rifleman_AK74M_01"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_afgpolice\data\offroad_afghan_police.paa","\x\cfp\addons\b_afgpolice\data\offroad_afghan_police.paa"};
        editorPreview = "\x\cfp\addons\b_afgpolice\data\Preview_afgpolice_Offroad.jpg";
    };
};
