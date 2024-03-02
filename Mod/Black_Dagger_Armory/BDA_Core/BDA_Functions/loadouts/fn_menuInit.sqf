defaultLoadouts = ["BDA_Rifleman", "BDA_AutoRifleman", "BDA_Sniper", "BDA_EOD", "BDA_Demolitions", "BDA_Grenadier", "BDA_RktJky"];

createDialog "BDA_LoadoutDiag";

disableSerialization;

_display = findDisplay 42000;
_picture = _display displayCtrl 42005;
_weapon = _display displayCtrl 42002;

// ------------------------------------- Getting all Loadouts

lbClear 42001;

{
	// Current result is saved in variable _x
	_getFrName = getText(configFile >> "CfgWallaceLoad" >> _x >> "name");
	_getData = getText(configFile >> "CfgWallaceLoad" >> _x >> "data");

	lbAdd [42001, _getFrName];
	lbSetData [42001, lbSize 42001 - 1, _x];
} forEach defaultLoadouts;

lbSetCurSel [42001, 0];

// ------------------------------------- Getting all Launcher

lbClear 42003;

allowedlaunch = ["NO LAUNCHER", "OPTRE_M41_SSR"];

{
	// Current result is saved in variable _x

	_getRealName = getText(configFile >> "CfgWeapons" >> _x >> "displayname");

	lbAdd [42003, _getRealName];
	lbSetData [42003, lbSize 42003 - 1, _x];
} forEach allowedlaunch;

lbSetCurSel [42003, 0];

// ------------------------------------- Getting all Squads

lbClear 42006;

squadLists = ["Default", "1st CMD", "1-1", "1-2", "1-3", "2nd CMD", "2-1", "2-2"];

{
	// Current result is saved in variable _x

	lbAdd [42006, _x];
	lbSetData [42006, lbSize 42006 - 1, _x];
} forEach squadLists;

lbSetCurSel [42006, 0];