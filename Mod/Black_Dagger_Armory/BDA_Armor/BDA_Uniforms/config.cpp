class CfgPatches
{
	class BDA_Uniforms
	{
		author="Schlopp";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class HitpointsProtectionInfo;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Navy_Uniform;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B: OPTRE_UNSC_Army_Uniform_WDL
	{
		scope=2;
		author="Schlopp";
		displayName="Cross-Branch BDU (Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Uniform_B_UNSC";
		};
	};

    class BDA_Uniform_B_SL: BDA_Uniform_B
	{
		scope=2;
		author="Schlopp";
		displayName="Cross-Branch BDU (Black, Slim Legs)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Uniform_B_SL_UNSC";
		};
	};

//------------------------------------------------------------------// Naval Uniform - Black.

	class BDA_Navy_Uniform_B: OPTRE_UNSC_Navy_Uniform
	{
		scope=2;
		author="Schlopp";
		displayName="Naval BDU (Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Navy_Uniform_B_UNSC";
		};
	};


};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgVehicles
{
	class ContainerSupply;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class OPTRE_UNSC_Navy_Soldier;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B_UNSC: OPTRE_UNSC_Army_Soldier_WDL
	{
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		uniformClass="BDA_Uniform_B";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa"
		};
	};

	class BDA_Uniform_B_SL_UNSC: BDA_Uniform_B_UNSC
	{
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		uniformClass="BDA_Uniform_B_SL";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	//------------------------------------------------------------------// Naval Uniform - Black.

	class BDA_Navy_Uniform_B_UNSC: OPTRE_UNSC_Navy_Soldier
	{
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		uniformClass="BDA_Navy_Uniform_B";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_B_CO.paa"
		};
	};

};