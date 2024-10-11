systemChat "Working Textures";
_vehCamo = _this select 0;
_vehClass = _this select 1;
systemChat _vehCamo;
systemChat _vehClass;

//this really doesn't work ;)
_tarVeh = objectParent player;
diag_log _tarVeh;

switch (_vehCamo) do {
	case "UNSC_BDA_Winter": 
	{
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\weaponry_co.paa"];
		};
		systemChat "Applying winter texture";
	};
	default { };
};