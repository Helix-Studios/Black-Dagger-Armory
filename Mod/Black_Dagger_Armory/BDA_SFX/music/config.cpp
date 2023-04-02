class CfgPatches
{
	class BDA_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class BDA_RCH
	{
		displayName = "Black Dagger (Reach)";
	};
	class BDA_2
	{
		displayName = "Black Dagger (2)";
	};
	class BDA_3
	{
		displayName = "Black Dagger (3)";
	};
	class BDA_OTH
	{
		displayName = "Black Dagger (Other)";
	};
};

class CfgMusic
{
	tracks[]={};
	
	class BDA_MjolnirMix
	{
		name = "Mjolnir Mix";
		sound[] = {"BDA_SFX\music\data\MjolnirMix.ogg",1,1};
		theme = "Halo 2";
		duration = "251";
		musicClass = "BDA_2";
	};
	class BDA_WarthogRun
	{
		name = "Warthog Run";
		sound[] = {"BDA_SFX\music\data\WarthogRun.ogg",1,1};
		theme = "Halo 3";
		duration = "500";
		musicClass = "BDA_3";
	};
	class BDA_Overture
	{
		name = "Overture";
		sound[] = {"BDA_SFX\music\data\Overture.ogg",1,1};
		theme = "Reach";
		duration = "287";
		musicClass = "BDA_RCH";
	};
	class BDA_WinterContingency
	{
		name = "Winter Contingency";
		sound[] = {"BDA_SFX\music\data\WinterContingency.ogg",1,1};
		theme = "Reach";
		duration = "730";
		musicClass = "BDA_RCH";
	};
	class BDA_ONI_SwordBase
	{
		name = "ONI: Sword Base";
		sound[] = {"BDA_SFX\music\data\ONI_SwordBase.ogg",1,1};
		theme = "Reach";
		duration = "508";
		musicClass = "BDA_RCH";
	};
	class BDA_Nightfall
	{
		name = "Nightfall";
		sound[] = {"BDA_SFX\music\data\Nightfall.ogg",1,1};
		theme = "Reach";
		duration = "340";
		musicClass = "BDA_RCH";
	};
	class BDA_TipOfTheSpear
	{
		name = "Tip of the Spear";
		sound[] = {"BDA_SFX\music\data\TipOfTheSpear.ogg",1,1};
		theme = "Reach";
		duration = "365";
		musicClass = "BDA_RCH";
	};
	class BDA_LongNightOfSolace
	{
		name = "Long Night of Solace";
		sound[] = {"BDA_SFX\music\data\LongNightOfSolace.ogg",1,1};
		theme = "Reach";
		duration = "706";
		musicClass = "BDA_RCH";
	};
	class BDA_Exodus
	{
		name = "Exodus";
		sound[] = {"BDA_SFX\music\data\Exodus.ogg",1,1};
		theme = "Reach";
		duration = "438";
		musicClass = "BDA_RCH";
	};
	class BDA_FreeBird
	{
		name = "Free Bird";
		sound[] = {"BDA_SFX\music\data\FreeBird.ogg",1,1};
		theme = "Lynyrd Skynyrd";
		duration = "550";
		musicClass = "BDA_OTH";
	};
};
