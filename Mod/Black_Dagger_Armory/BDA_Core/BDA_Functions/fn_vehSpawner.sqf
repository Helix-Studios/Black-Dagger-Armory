//
//		Name: BDA_fn_vehSpawner.sqf
//		Author: Wallace 
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

_veh = createVehicle [_vehClass, _markerLoc, [], 0, "NONE" ];
_veh setDir _dir;
systemChat format ["Spawned a %1 at %2", _vehName, _marker];
_veh = { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;

// Init code
// [SGV_SPWNP, "OPTRE_UNSC_hornet"] call BDA_fnc_vehSpawner;
// [SGV_SPWNP, "OPTRE_UNSC_falcon_armed_s"] call BDA_fnc_vehSpawner;
// [MGV_SPWNP, "OPTRE_AV22C_Sparrowhawk"] call BDA_fnc_vehSpawner;
// [MGV_SPWNP, "BDA_UNSC_D77_TC_Pelican"] call BDA_fnc_vehSpawner;
