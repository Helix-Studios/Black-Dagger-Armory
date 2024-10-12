systemChat "Working Textures";
_vehCamo = _this select 0;
_vehClass = _this select 1;
systemChat _vehCamo;
systemChat _vehClass;

//this really doesn't work ;)
_tarVeh = objectParent player;
diag_log _tarVeh;

switch (_vehCamo) do {
	case "UNSC_BDA_Green": {
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_G_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"];
		};
		systemChat "Applying green texture";
	};
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
	case "UNSC_BDA_Black": {
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_B_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"];
		};
		systemChat "Applying blackout texture";
	};
	
	default { };
};