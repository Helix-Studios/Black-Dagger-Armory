class CfgPatches
{
	class BDA_Core_functions
	{
		author="Schlopp";
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

class CfgFunctions {
    class BDA_Scripts 
    {
        tag = "BDA";
        class Core_Func 
        {
            file = "\BDA_Core\BDA_Functions";
            class vehSpawner {};
			class vehSupply {};
        };
    };
};
