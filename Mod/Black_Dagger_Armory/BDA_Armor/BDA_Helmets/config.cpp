class CfgPatches
{
	class BDA_Helmets
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
			"OPTRE_FC_Units_Marines",
			"BDA_Core"
		};
		units[]={};
		weapons[]={"BDA_VX19_Helmet"};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class cfgWeapons
{
	/*arma*/ class ItemInfo;
	/*arma*/ class UniformItem;
	/*arma*/ class VestItem;
	/*arma*/ class HeadgearItem;
	/*arma*/ class Uniform_Base;
	/*arma*/ class HitpointsProtectionInfo;
	/*extern*/ class OPTRE_UNSC_CH252D_Helmet;
	/*extern*/ class OPTRE_UNSC_CH252D_Helmet_Base;
	/*extern*/ class OPTRE_UNSC_CH252D_Helmet_dp;
	/*extern*/ class OPTRE_UNSC_Recon_Helmet;
	/*extern*/ class OPTRE_UNSC_Recon_Helmet_dp;
	/*extern*/ class OPTRE_Helmet_NavyDeckCrew;
	/*extern*/ class OPTRE_PatrolCap_Navy;
	/*extern*/ class OPTRE_FC_VX19_Helmet;
	/*extern*/ class OPTRE_FC_VX19_Helmet_dp;
	/*extern*/ class OPTRE_UNSC_Cap_ODST;
	/*arma*/ class H_Booniehat_oli;
	/*arma*/ class H_MilCap_Blue;

	class BDA_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
		displayName="CH252D Helmet";
		picture="\BDA_Armor\BDA_Helmets\data\icons\BDA_ODST_Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Schlopp";
		displayName="CH252D Helmet";
		picture="\BDA_Armor\BDA_Helmets\data\icons\BDA_ODST_Helmet";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_P1: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_P1_dp: BDA_CH252D_Helmet_dp
	{
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S1: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (1-1)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S1_dp: BDA_CH252D_Helmet_dp
	{
		displayName="CH252D Helmet (1-1)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S2: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (1-2)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S2_dp: BDA_CH252D_Helmet_dp
	{
		displayName="CH252D Helmet (1-2)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S3: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (1-3)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S3_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S3_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S3_dp: BDA_CH252D_Helmet_dp
	{
		displayName="CH252D Helmet (1-3)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S4: BDA_CH252D_Helmet
	{
		scope=2;
		author="Schlopp";
		displayName="CH252D Helmet (2-1)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S4_dp: BDA_CH252D_Helmet_dp
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Schlopp";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_Recon: BDA_CH252D_Helmet {
		scope = 2;
		author = "Rib";
		displayName="CH252D Helmet (Recon)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_Recon_dp: BDA_CH252D_Helmet_dp {
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa"
			};
		};
	};
	
	class BDA_VX19_Helmet: OPTRE_FC_VX19_Helmet {
		dlc="BDA";
		scope=2;
		author="Rib";
		displayName="VX19 Flight Helmet";
		hiddenSelections[]={
			"camo",
			"camo2",
			"camo3",
			"camo4",
			//"H_Collar",
			//"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				//"H_Collar",
				//"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Helmet_dp: OPTRE_FC_VX19_Helmet_dp {
		dlc="BDA";
		scope=1;
		author="Rib";
		hiddenSelections[]={
			"camo",
			"camo2",
			"camo3",
			"camo4",
			//"H_Collar",
			//"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		subItems[] = {"Integrated_NVG_TI_1_F"};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				//"H_Collar",
				//"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};	
		};
	};

	class BDA_PatrolCap_Navy: H_MilCap_Blue
	{
		author="Schlopp";
		displayname="NAVCOM Patrol Cap";
		hiddenselectionstextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_patrolcap_Navy_co.paa",
		};
	};

	class BDA_FlightDeck_Navy_G: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Maintenance]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_G_co.paa"
		};
	};
	class BDA_FlightDeck_Navy_P: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Fuel]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_P_co.paa"
		};
	};
	class BDA_FlightDeck_Navy_R: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Ordnance]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_R_co.paa"
		};
	};

};
//end

class cfgMods
{
	author="Rib";
	timepacked="2409231239";
};
