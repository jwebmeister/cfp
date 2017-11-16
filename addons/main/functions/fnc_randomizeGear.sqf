#include <\x\cfp\addons\main\script_component.hpp>
SCRIPT(randomizeGear);

/* ----------------------------------------------------------------------------
Function: CFP_fnc_randomizeGear
Description:
Randomizes a units gear loadout based on config

Parameters:
Object - Unit
String - Category

Returns:
Nil

Examples:
(begin example)
[_unit, "headgear"] call cfp_main_fnc_randomizeGear;
(end)

See Also:
- nil

Author:
Tupolov

Peer reviewed:
nil
----------------------------------------------------------------------------*/
params ["_unit","_cat"];

private _category = format["%1List",_cat];
private _array = (configFile >> "CfgVehicles" >> typeOf _unit >> _category) call bis_fnc_getCfgData;

private _item = selectRandomWeighted _array;

switch (_cat) do {

	case ("headgear") : {
		removeHeadGear _unit;
		if (_item != "") then {
			_unit addHeadGear _item;
		};
	};
	case ("facewear") : {
		removeGoggles _unit;
		if (_item != "") then {
			_unit addGoggles _item;
		};
	};
	case ("uniform") : {
		removeUniform _unit;
		if (_item isEqualType []) then {
				_unit forceAddUniform (_item select 0);
				private _textures = selectRandomWeighted (_item select 1);
				{
					_unit setObjectTextureGlobal [_foreachIndex,_x];
				} foreach _textures;
		} else {
			_unit forceAddUniform _item;
		};
	};
	case ("vest") : {
		removeVest _unit;
		if (_item != "") then {
			_unit addVest _item;
		};
	};
	case ("backpack") : {
		removeBackpack _unit;
		if (_item != "") then {
			_unit addBackpack _item;
		};
	};
	case ("nvg") : {
		if (_item == "") then {
			_unit unlinkItem "NVGoggles";
		} else {
			_unit linkItem _item;
		};
	};
	case ("speaker") : {
		[_unit, _item] remoteExecCall ["SetSpeaker",0];
	};
	case ("insignia") : {
		[_unit, _item] call BIS_fnc_setUnitInsignia;
	};
};


