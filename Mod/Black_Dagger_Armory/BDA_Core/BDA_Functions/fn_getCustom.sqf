_playerUid = getPlayerUID player;

private["_baseClasses", "_foundBaseClasses"];

_baseClasses = [];

// Iterate through each class in CfgWeapons
/*{
	_baseClass = _x;
	
	if (!isNil {configFile >> "CfgWeapons" >> _baseClass >> "wal_id"}) then {
		_baseClasses pushBack _baseClass;
	};
} forEach ("true" configClasses (configFile >> "CfgWeapons"));

// Return the list of base classes with wal_id property
diag_log _baseClasses;*/

_name = configName (configFile >> "CfgWeapons" >> "_x" >> "wal_id");
diag_log "Getting Helmet";
diag_log _name;

diag_log "Getting new Helmets";

private _classesWithWalID = [];

private _patchClasses = "true" configClasses (configFile >> "CfgPatches" >> "BDA_Helmets_C" >> "CfgWeapons");

{
	if (!isNil {configFile >> "CfgPatches" >> "BDA_Helmets_C" >> "CfgWeapons" >> _x >> "wal_id"}) then {
		_classesWithWalID pushBack _x;
	};
} forEach _patchClasses;

diag_log _classesWithWalID;

