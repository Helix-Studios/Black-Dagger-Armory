systemChat "Working Textures";
_vehCamo = _this select 0;
_vehClass = _this select 1;

//this really doesn't work ;)
_tarVeh = objectParent player;

switch (_vehCamo) do {
	//pelcain
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
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_Wi_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_Wi_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_Wi_weaponry_co.paa"];
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
	//hornet
	case "BDA_Standard": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"];
		};
		systemChat "Applying Marine texture";
	};
	case "BDA_Blackout": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"];
		};
		systemChat "Applying Black texture";
	};
	case "BDA_Dark": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"];
		};
		systemChat "Applying Dark texture";
	};
	case "BDA_Desert": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"];
		};
		systemChat "Applying Desert texture";
	};
	case "BDA_Grey": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"];
		};
		systemChat "Applying Grey texture";
	};
	case "BDA_Jungle": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"];
		};
		systemChat "Applying Jungle texture";
	};
	case "BDA_Olive": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"];
		};
		systemChat "Applying Olive texture";
	};
	case "BDA_Woodland": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"];
		};
		systemChat "Applying Woodland texture";
	};
	case "BDA_Winter": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"];
		};
		systemChat "Applying Winter texture";
	};
	

	
	default { };
};