// 42002 = weapons!!!!!!!!!!!!!!!!!!!!!
// 42003 = scope list


//Redundant Script till i figure out what's goin on with it!
_getIndex = lbCurSel 42002;
_getSel = lbData [42002, _getIndex];

allowedScopes = getArray(configfile >> "CfgWeapons" >> _getSel >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleitems");
allowedMuzzle = getArray(configfile >> "CfgWeapons" >> _getSel >> "WeaponSlotsInfo" >> "muzzles" >> "compatibleitems");

defaultScopes = [];

defaultScopes + allowedScopes;

diag_log "getting Scopes!";
diag_log _getSel;
diag_log allowedScopes;
diag_log allowedMuzzle;
diag_log defaultScopes;

{
	// Current result is saved in variable _x

	lbAdd [42003, _x];
	lbSetData [42003, lbSize 42003 - 1, _x];
} forEach allowedScopes;