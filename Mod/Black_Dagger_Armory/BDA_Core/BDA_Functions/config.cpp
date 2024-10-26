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
			"ace_common",
			"OPTRE_Core",
            "BDA_Core",
			"BDA_Weapons"
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
			class isBino {};
			class advMark {};
        };
		class BDA_Vehcamo {
			file = "\BDA_Core\BDA_Functions\vehcamo";
			class chgTex {};
		};
		class BDA_Loadouts {
			file = "\BDA_Core\BDA_Functions\loadouts";
			class menuInit {};
			class openLoadouts {};
			class loadLoadout {};
			class updateLoadLB {};
			class getScopes {};
		};
		class BDA_Markers {
			file = "\BDA_Core\BDA_Functions\Markers";
			class isLZ {};
			class isFM {};
			class isFrd {};
			class isEnm {};
			class isCM {};
		};
		class BDA_Transf {
			file = "\BDA_Core\BDA_Functions\transf_scipts";
		};
		class BDA_PeliMagSys {
			file = "\BDA_Core\BDA_Functions\PeliMagSys";
			class pelicanloadvalidate {};
			class pelicanunloadvalidate {};
			class pelicanload_unloadallsupplypods {};
			class pelicanloadsupplypodsmenudetachmentmenu {};
			class pelicanloadsupplypodsmenuload {};
			class pelicanloadsupplypodsmenuopened {};
			class pelicanloadsupplypodsmenuunload {};
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

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class Markers {
                displayName = "Place Marker";
                condition = "[] call BDA_fnc_isBino";
				class MarkLZ {
                displayName = "Mark LZ";
				statement = "[] call BDA_fnc_isLZ";
            	};
				class MarkFM {
                displayName = "Mark Firemission";
				statement = "[] call BDA_fnc_isFM";
            	};
				class MarkFRND {
                displayName = "Mark Friendly";
				statement = "[] call BDA_fnc_isFrd";
            	};
				class MarkENMY {
                displayName = "Mark Enemy";
				statement = "[] call BDA_fnc_isEnm";
            	};
				class MarkCM {
				displayName = "Mark CAS Mission";
				statement = "[] call BDA_fnc_isCM";
				};
            };
        };
    };
};

enableDebugConsole[] = { "76561198805462515", "76561198249403686", "76561198066703139" };

class cfgMods {
	author="Rib";
	timepacked="1210241618";
};