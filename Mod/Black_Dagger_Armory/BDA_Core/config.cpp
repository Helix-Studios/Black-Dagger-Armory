class CfgPatches
{
	class BDA_Core
	{
		author="Schlopp/Rib";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F_Enoch_Loadorder",
			"A3_Map_Altis",
			"A3_Map_Altis_Scenes",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"DMNS_Modules",
			"OPTRE_Core",
			
			
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------editor categories------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgEditorCategories
{
	class BDA_EdCat_BlackDagger
	{
		displayName="Black Dagger Company";
	};
};

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
	class BDA_EdSubCat_Vehicles
	{
		displayName="Vehicles";
	};
	class BDA_EdSubCat_Air
	{
		displayName="Aviation";
	};

};

//------main menu--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//


/*class RscBackgroundLogo {
	class BDA_MM {
		picture = "\BDA_MM\bda_mm_1.paa";
	};
	class BDA_MM2 {
		picture = "\BDA_MM\bda_mm_2.paa";
	};
	class BDA_MM3 {
		picture = "\BDA_MM\bda_mm_3.paa";
	};
	class BDA_MM4 {
		picture = "\BDA_MM\bda_mm_4.paa";
	};
};*/
class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;


class RscDisplayMain // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{
	idd=0;
	idc=1;
	enableDisplay=1;
	picture="BDA_Core\BDA_UI\BDA_LoadingScreen_A_CO";
	class RscActiveText;
	class RscActivePicture: RscActiveText {};

	class BDATitle: RscTitle {
			picture = "BDA_Core\BDA_UI\BDA_Arizona_Sword_TP.paa";
		};
	
	class controls {
		class Spotlight2;
		
		class ConnectServer: Spotlight2
		{
			picture = "BDA_Core\BDA_UI\images\BDA_Spotlight_CO.paa";
			onbuttonClick = "connectToServer ['74.91.126.92', 2302, '']";
			text = "Join the Black Dagger Company Server";
		};
	};
	class controlsBackground {
		class LoadPicture_BDA1: RscPicture {
			idc=1;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
            y="SafeZoneY";
            h="SafeZoneH";
            w="SafeZoneW";
			text="BDA_Core\BDA_MM\bda_mm_2.paa";
		};
	};
};