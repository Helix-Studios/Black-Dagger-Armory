//
//		Name: BDA_fn_vehSpawner.sqf
//		Author: Wallace modified by Rib
//		Description: To create a more refined way to spawn vehicles so the init field can be cleaned up
//		and would allow anyone to easily add or remove certain vehicles or spawn pads.
//                                                                                                                                                                                          
//                       object    className
//		Example would be [pad1, "Vehicle_class"] call BDA_fnc_vehSpawner;

_marker = _this select 0;
_markerLoc = getPosATL _marker;
_vehClass = _this select 1;
_dir = getDir _marker;
_vehName = getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName");

_this addAction ["Rearm Vehicle", "_this call BDA_Rearm"];
_this addAction ["Refuel Vehicle", "_this call BDA_Refuel"];
_this addAction ["Repair Vehicle", "_this call BDA_Repair"];
_this addAction ["Pylon Vehicle", "_this call BDA_Pylons"];

BDA_Rearm = {
    veh = nearestObjects [_marker, ["Helicopter","Plane"], 10] select 0; ["Rearming", 5, {!isEngineOn veh;}, {hint "rearming complete";veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint "rearming aborted";}] call CBA_fnc_progressBar;
};

BDA_Refuel = {
    veh = nearestObjects [_marker, ["Helicopter","Plane"], 10] select 0; ["Refueling", 5, {!isEngineOn veh;}, {hint "refueling complete";veh setFuel 1;}, {hint "refueling aborted";}] call CBA_fnc_progressBar;
};

BDA_Repair = {
    veh = nearestObjects [_marker, ["Helicopter","Plane"], 10] select 0; ["Repairing", 5, {!isEngineOn veh;}, {hint "repairing complete";veh setDamage 0;}, {hint "repairing aborted";}] call CBA_fnc_progressBar;
};

BDA_Pylons = {
    _veh = nearestObjects [_marker, ["Helicopter","Plane"], 10] select 0; [_veh] call ace_pylons_fnc_showDialog;
};