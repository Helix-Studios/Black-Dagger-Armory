class CfgPatches {
	class BDA_Flags {
		author="Black Dagger Development Crew";
		requiredAddons[]={};
		weapons[]={};
		units[]={};
	};
};

class CfgVehicles {
	class FlagCarrier;
	class Banner_01_F;
	class OPTRE_CTF_Flag_Base;

	class BDA_Flag_Base: FlagCarrier {
		author="Schlopp";
		displayName="Base Flag";
		editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Flags";
		class SimpleObject {
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

	class BDA_Banner: Banner_01_F {
		scope = 2;
		scopeCurator = 2;
		author = "Rib";
		displayName = "Black Dagger Company Banner";
		editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Flags";
		hiddenSelectionsTextures[] = {
			"BDA_Core\BDA_Flags\data\BDA_Flag_BlackDagger.paa"
		};
	};

	class BDA_CTF_Banner: OPTRE_CTF_Flag_Base {
		scope = 2;
		scopeCurator = 2;
		author = "Rib";
		displayName = "Black Dagger Company Banner CTF";
		editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Flags";
		hiddenSelectionsTextures[] = {
			"BDA_Core\BDA_Flags\data\BDA_Flag_BlackDagger.paa"
		};
	};

	class BDA_Flag_BlackDagger: BDA_Flag_Base {
		scope=2;
		scopeCurator=2;
		displayName="Black Dagger Company Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'BDA_Core\BDA_Flags\data\BDA_Flag_BlackDagger.paa'";
		};
	};
};

class cfgMods {
	author="Rib";
	timepacked="1210241652";
};