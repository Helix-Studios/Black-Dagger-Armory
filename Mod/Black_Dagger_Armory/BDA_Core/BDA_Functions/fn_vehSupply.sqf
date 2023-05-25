//
//		Name: BDA_fn_vehSpawner.sqf
//		Author: Wallace modified by Rib
//		Description: To create a more refined way to spawn vehicles so the init field can be cleaned up
//		and would allow anyone to easily add or remove certain vehicles or spawn pads.
//                                                                                                                                                                                          
//                       object    className
//		Example would be [pad1, "Vehicle_class"] call BDA_fnc_vehSpawner;

_marker = _this select 0;
_markerLoc = getPosATL marker;
_dir = getDir marker;
_pri = -900;


BDA_Rearm = {
    marker = _this select 0;
    veh = nearestObjects [marker, ["Helicopter","Plane"], 35] select 0; ["Rearming", 5, {!isEngineOn veh;}, {hint "rearming complete";veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint "rearming aborted";}] call CBA_fnc_progressBar;
};

BDA_Refuel = {
    marker = _this select 0;
    veh = nearestObjects [marker, ["Helicopter","Plane"], 35] select 0; ["Refueling", 5, {!isEngineOn veh;}, {hint "refueling complete";veh setFuel 1;}, {hint "refueling aborted";}] call CBA_fnc_progressBar;
};

BDA_Repair = {
    marker = _this select 0;
    veh = nearestObjects [marker, ["Helicopter","Plane"], 35] select 0; ["Repairing", 5, {!isEngineOn veh;}, {hint "repairing complete";veh setDamage 0;}, {hint "repairing aborted";}] call CBA_fnc_progressBar;
};

BDA_Pylons = {
    marker = _this select 0;
    _veh = nearestObjects [marker, ["Helicopter","Plane"], 35] select 0; [_veh] call ace_pylons_fnc_showDialog;
};

this addAction ["Rearm Vehicle", "call BDA_Rearm"];
this addAction ["Refuel Vehicle", "call BDA_Refuel"];
this addAction ["Repair Vehicle", "call BDA_Repair"];
this addAction ["Pylon Vehicle", "call BDA_Pylons"];

