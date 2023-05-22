class CfgPatches
{
	class BDA_Helmets_C
	{
		author="Schlopp";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
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
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_Helmet_NavyDeckCrew;
	class OPTRE_PatrolCap_Navy;
	class OPTRE_UNSC_Cap_ODST;
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class H_Booniehat_oli;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// 1st Platoon.


    class BDA_CH252D_Carthwright_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (M. Carthwright)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Carthwright_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (M. Carthwright)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

	class BDA_CH252D_Flowers_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (J. Flowers)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Flowers_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (J. Flowers)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

	class BDA_CH252D_Beefus_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (G. Beefus)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa"
		};
	};

    class BDA_CH252D_Beefus_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (G. Beefus)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

	class BDA_VX19_Rib_Helmet: OPTRE_FC_VX19_Helmet
	{
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
	};
	class BDA_VX19_Rib_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_CA.paa"
		};
	};
};