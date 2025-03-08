//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace & Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//		Adds Pylons and vehicle cleanup scripts.
//                                                                                                                                                                                          
//      Exmaple1: [pad1] call BDA_fnc_vehSupply;              
//		Example2: call BDA_fnc_vehSupply;
//      Example3: [variable] call BDA_fnc_Rearm/Refuel/Repair;

_marker = _this select 0;
_markerLoc = getPosATL marker;
_pri = -900;

//BDA_Rearm,Repair,Refuel moved to another structure to be defined properly for object calls
BDA_Rearm = {
    _marker = _this select 0; //this is only here when these functions are called individually
    _veh = nearestObjects [_marker, ["Air","Car","Tank","Plane"], 50] select 0; ["Rearming", 5, {!isEngineOn veh;}, {hint "rearming complete";veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint "rearming aborted";}] call CBA_fnc_progressBar;
};

BDA_Refuel = {
    _marker = _this select 0;                     
    _veh = nearestObjects [_marker, ["Air","Car","Tank","Plane"], 50] select 0; ["Refueling", 5, {!isEngineOn veh;}, {hint "refueling complete";veh setFuel 1;}, {hint "refueling aborted";}] call CBA_fnc_progressBar;
};

BDA_Repair = {
    _marker = _this select 0;
    _veh = nearestObjects [_marker, ["Air","Car","Tank","Plane"], 50] select 0; ["Repairing", 5, {!isEngineOn veh;}, {hint "repairing complete";veh setDamage 0;}, {hint "repairing aborted";}] call CBA_fnc_progressBar;
};

BDA_Pylons = {
    _veh = nearestObjects [_marker, ["Helicopter","Plane","Rotary"], 100] select 0; [ace_player, _veh] call ace_pylons_fnc_showDialog;
};

BDA_Cleanup = {
    _veh = { deleteVehicle _x; } forEach nearestObjects [_marker, ["Air","Car","Tank","Plane"],120] select 0;
    systemChat format ["Removed Vehicles..."];
};

this addAction ["Pylon Vehicle", "call BDA_Pylons"];
this addAction ["Cleanup Vehicles", "call BDA_Cleanup"];
this addAction ["Refuel Vehicle", "call BDA_Refuel"];
this addAction ["Rearm Vehicles", "call BDA_Rearm"];
this addAction ["Repair Vehicle", "call BDA_Repair"];