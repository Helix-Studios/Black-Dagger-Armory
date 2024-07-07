class CfgPatches
{
	class BDA_Frigate
	{
		author = "Black Dagger Development Crew";
		units[]=
		{
			"BDA_Frigate"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Frigate",
			"BDA_Core"
		};
	};
};
class CfgEditorCategories
{
	class BDA_EdCat_Blackdagger;
};
class CfgEditorSubcategories
{
	class BDA_EdSubCat_Frigate_UNSC
	{
		displayName="Black Dagger Ships";
	};
};
class CfgVehicles
{
	class OPTRE_Frigate_UNSC;
	class BDA_Frigate: OPTRE_Frigate_UNSC
	{
		author="Rib";
		DLC="BDA";
		displayName="Frigate (Alaskan Conquest)";
		editorCategories="BDA_EdCat_BlackDagger";
		editorSubcategory="BDA_EdSubCat_Frigate_UNSC";
		hiddenSelectionsTextures[]=
		{
			"BDA_Ext\BDA_Frigate\data\decals_ca.paa",
			"OPTRE_Frigate\data\Paris_back_co.paa",
			"OPTRE_Frigate\data\Paris_front_co.paa",
			"OPTRE_Frigate\data\Armament_co.paa"
		};
		class SimpleObject
		{
			eden=1;
		};
	};
};
