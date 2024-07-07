class CfgPatches
{
	class BDA_Core_functions
	{
		author="Black Dagger Development Crew";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
            "BDA_Core"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
#include "\BDA_Core\BDA_Functions\loadouts\BDA_LoadoutDiag.hpp"

class CfgFunctions {
    class BDA_Scripts 
    {
        tag = "BDA";
        class Core_Func 
        {
            file = "\BDA_Core\BDA_Functions";
            class vehSpawner {};
			class vehSupply {};
			class medicCheck {};
			class notify {};
        };
		class BDA_Loadouts 
		{
			file = "\BDA_Core\BDA_Functions\loadouts";
			class menuInit {};
			class openLoadouts {};
			class loadLoadout {};
			class updateLoadLB {};
			class getScopes {};
		};
    };
};

class CfgWallaceLoad 
{
	class BDA_Rifleman 
	{
		name = "Rifleman Kit";
	};
	class BDA_AutoRifleman 
	{
		name = "AutoRifleman Kit";
	};
	class BDA_Sniper 
	{
		name = "Sniper Kit";
	};
	class BDA_EOD
	{
		name = "EOD Kit";
	};
	class BDA_Demolitions 
	{
		name = "Demolitions Kit";
	};
	class BDA_Grenadier 
	{
		name = "Grenadier Kit";
	};
	class BDA_RktJky 
	{
		name = "Rocket Jockey Kit";
	};
};
