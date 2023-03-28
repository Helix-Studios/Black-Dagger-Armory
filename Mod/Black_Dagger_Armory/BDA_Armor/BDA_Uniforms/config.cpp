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

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B: OPTRE_UNSC_Army_Uniform_WDL
	{
		displayName="Cross-Branch BDU (Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Uniform_B_UNSC";
		};
	};

    class BDA_Uniform_B_SL: BDA_Uniform_B
	{
		displayName="Cross-Branch BDU (Black, Slim Legs)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Uniform_B_SL_UNSC";
		};
	};

};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgVehicles
{
	class ContainerSupply;
	class OPTRE_UNSC_Army_Soldier_WDL;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B_UNSC: OPTRE_UNSC_Army_Soldier_WDL
	{
		uniformClass="BDA_Uniform_B";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa"
		};
	};

	class BDA_Uniform_B_SL_UNSC: BDA_Uniform_B_UNSC
	{
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

};