defaultLoadouts = ["BDA_Rifleman", "BDA_AutoRifleman", "BDA_Sniper", "BDA_EOD", "BDA_Demolitions", "BDA_Grenadier", "BDA_RktJky"];

createDialog "BDA_LoadoutDiag";

disableSerialization;

lbClear 42001;

{
	// Current result is saved in variable _x
	_getFrName = getText(configFile >> "CfgWallaceLoad" >> _x >> "name");
	_getData = getText(configFile >> "CfgWallaceLoad" >> _x >> "data");

	lbAdd [42001, _getFrName];
	lbSetData [42001, lbSize 42001 - 1, _x];
} forEach defaultLoadouts;

ctrlSetText

lbSetCurSel [42001, 0];