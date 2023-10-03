//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace modified by Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//		Adds Pylons and cleanup scripts on the bottom.
//                                                                                                                                                                                          
//                    
//		Example: call BDA_fnc_vehSupply

_marker = _this select 0;
_markerLoc = getPosATL marker;
_dir = getDir marker;
_pri = -900;


BDA_Rearm = {
    marker = _this select 0;                      //this is the radius
    _veh = nearestObjects [marker, ["Helicopter","Planes","Rotary","Tanks","APCs","Cars","Armored Vehicles","IFVs"], 100] select 0; ["Rearming", 5, {!isEngineOn veh;}, {hint "rearming complete";veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint "rearming aborted";}] call CBA_fnc_progressBar;
};

BDA_Refuel = {
    marker = _this select 0;                        
    _veh = nearestObjects [marker, ["Helicopter","Planes","Rotary","Tanks","APCs","Cars","Armored Vehicles","IFVs"], 100] select 0; ["Refueling", 5, {!isEngineOn veh;}, {hint "refueling complete";veh setFuel 1;}, {hint "refueling aborted";}] call CBA_fnc_progressBar;
};

BDA_Repair = {
    marker = _this select 0;
    _veh = nearestObjects [marker, ["Helicopter","Planes","Rotary","Tanks","APCs","Cars","Armored Vehicles","IFVs"], 100] select 0; ["Repairing", 5, {!isEngineOn veh;}, {hint "repairing complete";veh setDamage 0;}, {hint "repairing aborted";}] call CBA_fnc_progressBar;
};

BDA_Pylons = {
    marker = _this select 0;
    _veh = nearestObjects [marker, ["Helicopter","Planes","Rotary"], 100] select 0; [_veh] call ace_pylons_fnc_showDialog;
};

BDA_Cleanup = {
    marker = _this select 0;
    _veh = { deleteVehicle _x; } forEach nearestObjects [marker, ["Helicopter","Planes","Rotary","Tanks","Armored Vehicles","APCs","IFVs"],100] select 0;
};

this addAction ["Rearm Vehicle", "call BDA_Rearm"];
this addAction ["Refuel Vehicle", "call BDA_Refuel"];
this addAction ["Repair Vehicle", "call BDA_Repair"];
this addAction ["Pylon Vehicle", "call BDA_Pylons"];
this addAction ["Cleanup Vehicles", "call BDA_Cleanup"];

