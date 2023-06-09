class cfgpatches
{
	class BDA_Flags
	{
		author="Schlopp";
		requiredAddons[]={};
		weapons[]={};
		units[]={};
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//


class CfgVehicles
{
	class FlagCarrier;

	class BDA_Flag_Base: FlagCarrier
	{
		author="Schlopp";
		displayName="Base Flag";
		editorCategory="BDA_EdCat_BlackDagger";
		editorSubcategory="BDA_EdSubCat_Flags";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
	};

	class BDA_Flag_BlackDagger: BDA_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Black Dagger Company Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'BDA_Core\BDA_Flags\data\BDA_Flag_BlackDagger.paa'";
		};
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgMods
{
	author="";
	timepacked="1612347698";
};