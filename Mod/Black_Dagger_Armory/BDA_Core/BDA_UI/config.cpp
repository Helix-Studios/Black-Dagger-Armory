class CfgPatches
{
	class BDA_Markers
	{
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMarkerClasses
{
	class BDA_Markers_USNC
	{
		displayName="UNSC";
	};
	class BDA_Markers_Covenant
	{
		displayName="Covenant";
	};
	class BDA_Markers_BD
	{
		displayName="UNSC (Black Dagger Company)";
	};
};
class CfgMarkers
 {
	class BDA_UNSC_Sigil
	{
	name="UNSC";
	icon="BDA_Core\BDA_UI\flags\BDA_UNSC_CA.paa";
	color[]={1,1,1,1};
	size=32;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
	};
	class BDA_UNSC_Sigil_B
	{
	name="UNSC (simple)";
	icon="BDA_Core\BDA_UI\flags\BDA_UNSC_B_CA.paa";
	color[]={1,1,1,1};
	size=32;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
	};
	class BDA_Covenant_Sigil
	{
	name="Covenant";
	icon="BDA_Core\BDA_UI\flags\BDA_Covenant_CA.paa";
	color[]={1,1,1,1};
	size=32;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
	};

	class BDA_UNSC_Halberd
	{
	name="Halberd-class destroyer";
	icon="BDA_Core\BDA_UI\markers\BDA_Halberd_CA.paa";
	color[]={1,1,1,1};
	size=32;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
	};
};