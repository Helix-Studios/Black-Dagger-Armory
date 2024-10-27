class CfgPatches
{
	class BDA_Uniforms
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
			"BDA_Core"
		};
		units[]={"BDA_Uniform_B_UNSC", "BDA_Uniform_B_SL_UNSC", "BDA_Navy_Uniform_B_F", "BDA_Navy_Uniform_Avi1_F", "BDA_Navy_Uniform_Avi2_F"};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgWeapons
{
	class UniformItem;
	class VestItem;
	class Uniform_Base;
	class ItemInfo;
	class HitpointsProtectionInfo;
	class U_B_HeliPilotCoveralls;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Navy_Uniform;
	class U_C_Scientist;

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

	class BDA_Uniform_ONI_SL: BDA_Uniform_B
	{
		scope=2;
		author="Schlopp";
		displayName="Cross-Branch BDU (ONI)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Uniform_ONI_UNSC";
		};
	};

//------------------------------------------------------------------// Naval Uniforms


	class BDA_Navy_Uniform_ONI: U_B_HeliPilotCoveralls {
		scope=2;
		author="Schlopp";
		displayName="Naval BDU (ONI)";
		class ItemInfo: ItemInfo
		{
			uniformClass="BDA_Navy_Uniform_ONI_F";
		};
	};

	class BDA_Navy_Uniform_B: U_C_Scientist {
		author="Schlopp";
		scope=2;
		scopeCurator = 2;
		displayName="Naval BDU";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_B_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_B_F";
			containerClass="Supply120";
			mass=10;
		};
	};

	class BDA_Navy_Uniform_Avi1: U_C_Scientist {
		author="Rib";
		scope=2;
		scopeCurator = 2;
		displayName="Naval BDU (81st Naval Air Squadron - Gray)";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi1_CO.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_Avi1_F";
			containerClass="Supply120";
			mass=10;
		};
	};

	class BDA_Navy_Uniform_Avi2: U_C_Scientist {
		author="Rib";
		scope=2;
		displayName="Naval BDU (81st Naval Air Squadron - Green)";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi2_CO.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_Avi2_F";
			containerClass="Supply120";
			mass=10;
		};
	};


	class BDA_Navy_Uniform_G: U_C_Scientist {
		author="Rib";
		scope=2;
		displayName="Naval BDU (Maintenance)";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_G_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_G_F";
			containerClass="Supply100";
			mass=10;
		};
	};
	class BDA_Navy_Uniform_R: U_C_Scientist {
		author="Rib";
		scope=2;
		displayName="Naval BDU (Ordnance)";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_R_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_R_F";
			containerClass="Supply100";
			mass=10;
		};
	};
	class BDA_Navy_Uniform_P: U_C_Scientist {
		author="Rib";
		scope=2;
		displayName="Naval BDU (Fuel)";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_P_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BDA_Navy_Uniform_P_F";
			containerClass="Supply100";
			mass=10;
		};
	};


};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgVehicles {
	class ContainerSupply;
	class B_Helipilot_F;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class OPTRE_UNSC_Navy_Soldier;
	class U_C_Scientist;
	class C_scientist_F;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B_UNSC: OPTRE_UNSC_Army_Soldier_WDL {
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		uniformClass="BDA_Uniform_B";
		faction = "B_BDCUNSC";
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
		faction = "B_BDCUNSC";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	class BDA_Uniform_ONI_UNSC: OPTRE_UNSC_Army_Soldier_WDL {
		scope=1;
		scopeCurator=1;
		author="Schlopp";
		uniformClass="BDA_Uniform_ONI_SL";
		faction = "B_BDCUNSC";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	//------------------------------------------------------------------// Naval Uniform

	class BDA_Navy_Uniform_B_F: C_scientist_F {
		author="Schlopp";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_B";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_B_CO.paa"
		};
	};

	class BDA_Navy_Uniform_G_F: C_scientist_F {
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_G";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_G_co.paa"
		};
	};
	class BDA_Navy_Uniform_R_F: C_scientist_F {
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_R";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_R_co.paa"
		};
	};
	class BDA_Navy_Uniform_P_F: C_scientist_F {
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_P";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_P_co.paa"
		};
	};

	class BDA_Navy_Uniform_Avi1_F: C_scientist_F {
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_Avi1";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi1_CO.paa"
		};
	};

	class BDA_Navy_Uniform_Avi2_F: C_scientist_F {
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
		uniformClass="BDA_Navy_Uniform_Avi2";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi2_CO.paa"
		};
	};

	class BDA_Navy_Uniform_ONI_F: B_Helipilot_F {
		scope=2;
		scopeCurator=2;
		author="Rib";
		faction = "B_BDCUNSC";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		uniformClass="BDA_Navy_Uniform_ONI";
		hiddenSelections[]= {
			"Camo"
		};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_ONI_CO.paa"
		};
	};

};