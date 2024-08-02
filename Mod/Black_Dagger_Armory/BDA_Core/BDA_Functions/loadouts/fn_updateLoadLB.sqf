_getIndex = lbCurSel 42001;
_getSel = lbData [42001, _getIndex];

ctrlShow [42004, false];
ctrlShow [42003, false];

switch (_getSel) do {
	case "BDA_Rifleman": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\rifle.paa"]; };
	case "BDA_AutoRifleman": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\auto.paa"]; };
	case "BDA_Sniper": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\sniper.paa"]; };
	case "BDA_EOD": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"]; };
	case "BDA_Demolitions": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"]; };
	case "BDA_Grenadier": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\gren.paa"]; };
	case "BDA_RktJky": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\RkyJky.paa"]; ctrlShow [42003, true]; };
	case "BDA_Breacher": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\sniper.paa"]; };
	default { };
};

// ------------------------------------- Getting all Weapons according to loadouts

lbClear 42002;

switch (_getSel) do {
	case "BDA_Rifleman": { allowedWeapons = ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	case "BDA_AutoRifleman": { allowedWeapons = ["OPTRE_M73", "OPTRE_M247"]; };
	case "BDA_Sniper": { allowedWeapons = ["OPTRE_SRS99D","OPTRE_M392_DMR"]; };
	case "BDA_EOD": { allowedWeapons = ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	case "BDA_Demolitions": { allowedWeapons = ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	case "BDA_Grenadier": { allowedWeapons = ["OPTRE_MA5BGL","OPTRE_M319N","OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	case "BDA_RktJky": { allowedWeapons = ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	case "BDA_Breacher": { allowedWeapons = ["OPTRE_M90A","OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
	default { allowedWeapons = ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"]; };
};  //OPTRE_MA5BGL

{
	// Current result is saved in variable _x

	_getRealName = getText(configFile >> "CfgWeapons" >> _x >> "displayname");
	_getIcon = getText(configFile >> "CfgWeapons" >> _x >> "picture");

	lbAdd [42002, _getRealName];
	lbSetData [42002, lbSize 42002 - 1, _x];
	lbSetPicture[42002, lbSize 42002 - 1, _getIcon];
	lbSetPictureColor[42002, lbSize 42002 - 1, [1,1,1,1]];
} forEach allowedWeapons;
lbSetCurSel [42002, 0];
