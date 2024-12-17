//
//		Name: BDA_fn_vehRRR.sqf
//		Author: Rib & Apollo
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//                                                                                                                                                                                          
//                    
//		Example: call BDA_fnc_vehRRR.sqf
//      Example: call BDA_fnc_..._Supply

BDA_Rearm_Supply = {
    _veh = objectParent player; if (isNull _veh) exitWith {hint 'No vehicle found!';}; ['Rearming', 15, {(_this select 0) params ['_veh']; !isEngineOn _veh;}, {(_this select 0) params ['_veh']; hint 'Rearming Complete';_veh setVehicleAmmoDef 1;_veh setVehicleAmmo 1;}, {hint 'Rearming Aborted'}, _veh] call CBA_fnc_progressBar;
};

BDA_Repair_Supply = {
    _veh = objectParent player; if (isNull _veh) exitWith {hint 'No vehicle found!';}; ['Repairing', 30, {(_this select 0) params ['_veh']; !isEngineOn _veh;}, {(_this select 0) params ['_veh']; hint 'Repair Complete';_veh setDamage 0;}, {hint 'Repair Aborted'}, _veh] call CBA_fnc_progressBar;
};

BDA_Refuel_Supply = {
    _veh = objectParent player; if (isNull _veh) exitWith {hint 'No vehicle found!';}; ['Refueling', 40, {(_this select 0) params ['_veh']; !isEngineOn _veh;}, {(_this select 0) params ['_veh']; hint 'Refueling Complete';_veh setFuel 1;}, {hint 'Refueling Aborted'}, _veh] call CBA_fnc_progressBar;
};

