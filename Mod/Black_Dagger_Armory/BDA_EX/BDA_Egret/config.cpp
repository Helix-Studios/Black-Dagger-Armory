class CfgPatches
{
	class BDA_EX_Egret
	{
        author = "Schlopp";
        version = "0.02";
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta","A3_Data_F","A3_Weapons_F_Gamma", "A3_Sounds_F", "A3_Sounds_F_Mark"};
		requiredVersion = 0.1;
		units[] = 
        {
            "BDA_Egret_Spaceliner_Static_F",
            "BDA_Egret_Spaceliner_F"
        };
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgVehicles
{
	class Thing;
	class B_T_VTOL_01_infantry_F;
	class OPTRE_Pelican_unarmed;
	class BDA_Egret_Spaceliner_Static_F: Thing
	{
		author = "Schlopp";
		scope = 2;
		editorCategory="BDA_EdCat_BlackDagger";
		editorSubcategory="BDA_EdSubCat_AerospaceShip";
		armor = 500000;
		displayname = "Egret Spaceliner";
		model = "BDA_EX\BDA_Egret\BDA_Egret_Spaceliner";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"BDA_EX\BDA_Egret\data\BDA_Civilian_Transport_CO.paa"};
	};

	class BDA_Egret_Spaceliner_F: OPTRE_Pelican_unarmed
	{
		author = "Schlopp";
		scope = 2;
		armor = 200000;
		side = 1;
		faction = "B_UNSCODST";
		editorSubcategory="BDA_EdSubCat_AerospaceShip";
		displayname = "Egret Spaceliner";
		model = "BDA_EX\BDA_Egret\BDA_Egret_Spaceliner";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"BDA_EX\BDA_Egret\data\BDA_Civilian_Transport_CO.paa"};
		soundSetSonicBoom[]=
        {
            "Plane_Fighter_SonicBoom_SoundSet"
        };
        soundLocked[]=
        {
            "BDA_EX\BDA_Egret\sfx\targeted_alarm.ogg",
            1,
            1
        };
        soundIncommingMissile[]=
        {
            "NCA\NCA_vehicles\aircraft\sounds\incomingMissile_alarm.ogg",
            1,
            1
        };
        soundEngineOnExt[]=
        {
            "BDA_EX\BDA_Egret\sfx\engineStartup_exterior.ogg",
            1.4125376,
            1,
            600
        };
        soundEngineOnInt[]=
        {
            "BDA_EX\BDA_Egret\sfx\engineStartup_interior.ogg",
            1.4125376,
            1,
            600
        };
        soundEngineOffExt[]=
        {
            "BDA_EX\BDA_Egret\sfx\engineShutdown_exterior.ogg",
            0.31622776,
            1
        };
        soundEngineOffInt[]=
        {
            "BDA_EX\BDA_Egret\sfx\engineShutdown_interior.ogg",
            0.79432821,
            1,
            600
        };
        flySound[] = {"BDA_EX\BDA_Egret\sfx\engine_exterior.ogg", 0.000000, 1, 1};
	};
};

