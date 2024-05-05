//
//		Name: BDA_fn_medicCheck.sqf
//		Author: Wallace 
//		Description: Relatively simple system to check, add and remove ace doctor from yourself
//		
//		[]call BDA_fnc_medicCheck

this addAction ["Check Doctor Status", "call BDA_CheckMedStats"];
this addAction ["<img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca'/> Become a Doctor", "call BDA_GiveDoctor"];
this addAction ["<t color='#de1f1f'>[Debug]</t> Remove Doctor",  "call BDA_RemoveDoctor"];


// Mostly Using the default arma medic as a debug option and decent fucking variable (thanks ace yer shite)
BDA_CheckMedStats = {
	_getAMed = player getUnitTrait "Medic";
	systemChat str _getAMed;
	if (_getAMed isEqualTo false) then 
	{
		["You are not a Doctor", "amber", 3] call BDA_fnc_notify;
	} else {
		["You are a Doctor", "success", 3] call BDA_fnc_notify;
	};
	
};

BDA_GiveDoctor = {
	player setUnitTrait ["Medic",true];
	player setVariable ["ace_medical_medicclass", 2, true];
	["You have now been assigned a Doctor!", "success", 2] call BDA_fnc_notify;
};

BDA_RemoveDoctor = {
	player setUnitTrait ["Medic",false];
	player setVariable ["ace_medical_medicclass", 0, true];
	["You are no longer a Doctor", "error", 2] call BDA_fnc_notify;
};
