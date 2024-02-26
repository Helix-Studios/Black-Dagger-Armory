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
			"OPTRE_FC_Units_Marines",
			"V_FZ_Armor",
			"BDA_Core",
			"BDA_Helmets"
		};
		units[]={};
		weapons[]={"BDA_VX19_Rib_Helmet"};
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
	/*extern*/ class OPTRE_FC_VX19_Helmet;
	/*extern*/ class OPTRE_FC_VX19_Helmet_dp;
	/*extern*/ class OPTRE_Helmet_NavyDeckCrew;
	/*extern*/ class OPTRE_PatrolCap_Navy;
	/*extern*/ class OPTRE_UNSC_Cap_ODST;
	/*arma*/ class H_Booniehat_oli;
	/*extern*/ class VES_S1ONIR;
	/*extern*/ class VES_S1ONIR_dp;
	/*intern*/ class BDA_CH252D_Helmet;
	/*intern*/ class BDA_CH252D_Helmet_dp;
	/*intern*/ class BDA_VX19_Helmet;
	/*intern*/ class BDA_VX19_Helmet_dp;


	class BDA_CH252D_Mustang_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (E. Mustang)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Mustang_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};


	class BDA_CH252D_Carthwright_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (M. Carthwright)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Carthwright_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};


	class BDA_CH252D_Flowers_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (J. Flowers)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S1_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S1_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Flowers_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};


	class BDA_CH252D_Beefus_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (G. Beefus)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Beefus_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Sniper_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (D. Vito)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Sniper_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Cards_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (H. Cards)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Cards_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};


	class BDA_CH252D_Chase_Helmet: BDA_CH252D_Helmet
	{
		scope=2;
		author="Schlopp";
		displayName="CH252D Helmet (F. Chase)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Chase_Helmet_dp: BDA_CH252D_Helmet_dp
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Bouquet_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (A. Bouquet)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Bouquet_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_VX19_Rib_Helmet: BDA_VX19_Helmet
	{
		scope = 1;
		scopeCurator = 1;
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Rib_Helmet_dp: BDA_VX19_Helmet_dp 
	{
		scope = 1;
		scopeCurator = 1;
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Rib_Helmet: BDA_CH252D_Helmet
	{
		displayName="CH252D Helmet (R. Ribbington)";
		subItems[] = {"Integrated_NVG_TI_1_F"};
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Rib_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Karson_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (J. Karson)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S5_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S5_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Karson_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Aejax_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (A. Zodiac)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Aejax_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Aejax_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S3_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Aejax_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Aejax_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Aejax_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Ryder_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (C. Ryder)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Ryder_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Arturo_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (L. Arturo)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Arturo_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Boston_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (L. Boston)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Boston_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Sullivan_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (D. O'Sullivan)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Sullivan_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Smith_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (F. Smith)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Smith_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Knight_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (N. Knight)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Knight_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Kevin_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (F. Kevin)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kevin_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kevin_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S4_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Kevin_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kevin_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kevin_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Puma_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (R. Puma)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S3_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Puma_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Rib";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Cross_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (S. Cross)";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Cross_Helmet_dp: BDA_CH252D_Helmet_dp
	{
		author="Wallace";
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

};
class cfgMods
{
	author="Rib";
	timepacked="0601241250";
};
