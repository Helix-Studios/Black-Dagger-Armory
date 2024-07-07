class CfgPatches
{
	class BDA_Uniforms_Customs
	{
		author="Black Dagger Development Crew";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"BDA_Core",
			"BDA_Uniforms"
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
	class U_B_HeliPilotCoveralls;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Navy_Uniform;
	class U_C_Scientist;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Naval Uniforms


	class BDA_Navy_Uniform_Shadow: U_C_Scientist
	{
		author="Rib";
		scope=2;
		displayName="Naval BDU (G. Shadow)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Shadow_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_Shadow_F";
			containerClass="Supply100";
			mass=10;
		};
	};
	class BDA_Navy_Uniform_Knight: U_C_Scientist
	{
		author="Rib";
		scope=2;
		displayName="Naval BDU (N. Knight)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Knight_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_Knight_F";
			containerClass="Supply100";
			mass=10;
		};
	};

};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgVehicles
{
	class ContainerSupply;
	class B_Helipilot_F;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class OPTRE_UNSC_Navy_Soldier;
	class U_C_Scientist;
	class C_scientist_F;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	//------------------------------------------------------------------// Naval Uniform

	class BDA_Navy_Uniform_Shadow_F: C_scientist_F
	{
		author="Rib";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_Shadow";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Shadow_CO.paa"
		};
	};
	class BDA_Navy_Uniform_Knight_F: C_scientist_F
	{
		author="Rib";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_Knight";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Knight_CO.paa"
		};
	};

};