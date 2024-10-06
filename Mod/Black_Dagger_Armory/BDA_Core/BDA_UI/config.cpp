class CfgPatches
{
	class BDA_Markers
	{
		author = "Black Dagger Development Crew";
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
	class BDA_Markers_Misc
	{
		displayName="Misc. Factions";
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
	class BDA_UNSC_Army_SA
    {
    name="UNSC Army";
    icon="BDA_Core\BDA_UI\markers\UNSC_Army_SA.paa";
    color[]={0,0,0,1};
    size=40;
    shadow = 0;
    scope = 1;
    markerClass = "BDA_Markers_USNC";
    };
	class BDA_UNSC_Marine_SA
    {
	name="UNSC Marine Corps";
	icon="BDA_Core\BDA_UI\markers\UNSC_Marines_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
	class BDA_UNSC_Navy_SA
    {
	name="UNSC Navy";
	icon="BDA_Core\BDA_UI\markers\UNSC_Navy_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
	class BDA_ODST_SA
    {
	name="ODST";
	icon="BDA_Core\BDA_UI\markers\ODST_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
	class BDA_Spartan_SA
    {
	name="Spartan Operations";
	icon="BDA_Core\BDA_UI\markers\Spartan_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
	class BDA_WhiteTeam_SA
    {
	name="SII White Team";
	icon="BDA_Core\BDA_UI\markers\WhiteTeam_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
	class BDA_Flood_SA
    {
	name="Flood";
	icon="BDA_Core\BDA_UI\flags\BDA_Flood_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Misc";
    };
    class BDA_Forerunner_SA
    {
	name="Forerunner";
	icon="BDA_Core\BDA_UI\flags\BDA_Forerunner_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Misc";
    };
    class BDA_Banished_SA
    {
	name="Banished";
	icon="BDA_Core\BDA_UI\flags\BDA_Banished_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Misc";
    };
	class BDA_Insurrectionist_SA
    {
	name="Insurrectionist";
	icon="BDA_Core\BDA_UI\flags\BDA_Insurrectionist_SA.paa";
	color[]={0,0,0,0};
	size=42;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Misc";
    };
	class BDA_SoS_SA
    {
	name="Swords of Sanghelios";
	icon="BDA_Core\BDA_UI\markers\SoS_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
    };
    class BDA_CAS_SA
    {
	name="Assault Carrier (CAS)";
	icon="BDA_Core\BDA_UI\markers\CAS_SA.paa";
	color[]={0,0,0,1};
	size=90;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
    };
    class BDA_CCS_SA
    {
	name="Battlecruiser (CCS)";
	icon="BDA_Core\BDA_UI\markers\CCS_SA.paa";
	color[]={0,0,0,1};
	size=80;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
    };
    class BDA_CPV_SA
    {
	name="Battlecruiser (CPV)";
	icon="BDA_Core\BDA_UI\markers\CPV_SA.paa";
	color[]={0,0,0,1};
	size=80;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
    };
    class BDA_SDV_SA
    {
	name="Heavy Corvette (SDV)";
	icon="BDA_Core\BDA_UI\markers\SDV_SA.paa";
	color[]={0,0,0,1};
	size=60;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_Covenant";
    };
    class BDA_D20_SA
    {
	name="D20 Heron";
	icon="BDA_Core\BDA_UI\markers\D20Her_SA.paa";
	color[]={0,0,0,1};
	size=60;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Frigate_SA
    {
	name="Frigate";
	icon="BDA_Core\BDA_UI\markers\Frigate_SA.paa";
	color[]={0,0,0,1};
	size=70;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Drake_SA
    {
	name="Drake-class";
	icon="BDA_Core\BDA_UI\markers\Drakeclass_SA.paa";
	color[]={0,0,0,1};
	size=55;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Halberd_SA
    {
	name="Halberd-class";
	icon="BDA_Core\BDA_UI\markers\Halberd_SA.paa";
	color[]={0,0,0,1};
	size=80;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Phoenix_SA
    {
	name="Phoenix-class";
	icon="BDA_Core\BDA_UI\markers\Phoenix_SA.paa";
	color[]={0,0,0,1};
	size=70;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Pillar_SA
    {
	name="Halcyon-class";
	icon="BDA_Core\BDA_UI\markers\Pillar_SA.paa";
	color[]={0,0,0,1};
	size=85;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Longsword_SA
    {
	name="Longsword";
	icon="BDA_Core\BDA_UI\markers\Longsword_SA.paa";
	color[]={0,0,0,1};
	size=40;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
    };
    class BDA_Pelican_SA
    {
	name="Pelican";
	icon="BDA_Core\BDA_UI\markers\Pelican_SA.paa";
	color[]={0,0,0,1};
	size=32;
	shadow = 0;
	scope = 1;
	markerClass = "BDA_Markers_USNC";
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


class cfgMods {
	author="Rib";
	timepacked="051020242250";
};