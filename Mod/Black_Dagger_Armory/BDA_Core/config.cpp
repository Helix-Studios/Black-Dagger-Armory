class CfgPatches
{
	class BDA_Core
	{
		author="Schlopp";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgEditorCategories
{
	class BDA_EdCat_BlackDagger
	{
		displayName="Black Dagger Company";
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgEditorSubcategories
{
	class BDA_EdSubCat_Flags
	{
		displayName="Flags";
	};
	class BDA_EdSubCat_AerospaceShip
	{
		displayName="Aerospace Ships";
	};

};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgMainMenuSpotlight // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{

	class JoinServer
	{
		text = "Black Dagger Company";
		picture = "BDA_Core\BDA_UI\images\BDA_Spotlight_CO.paa";
		action = "connectToServer ['74.91.126.92', 2302, '']";
		actionText = "Join the Black Dagger Company Server";
		condition = "true";
	};
};