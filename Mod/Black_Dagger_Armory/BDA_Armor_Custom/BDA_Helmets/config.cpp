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
			"V_FZ_Armor"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class HitpointsProtectionInfo;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class OPTRE_Helmet_NavyDeckCrew;
	class OPTRE_PatrolCap_Navy;
	class OPTRE_UNSC_Cap_ODST;
	class H_Booniehat_oli;
	class VES_S1ONIR;
	class VES_S1ONIR_dp;


	class BDA_CH252D_Mustang_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
	class BDA_CH252D_Mustang_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa"
			};
		};
	};


	class BDA_CH252D_Carthwright_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
	class BDA_CH252D_Carthwright_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa"
			};
		};
	};


	class BDA_CH252D_Flowers_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Flowers_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa"
			};
		};
	};


	class BDA_CH252D_Beefus_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Beefus_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa"
			};
		};
	};


	class BDA_CH252D_Cards_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Cards_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
			};
		};
	};


	class BDA_CH252D_Chase_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Chase_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
			};
		};
	};

	class BDA_VX19_Rib_Helmet: OPTRE_FC_VX19_Helmet
	{
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa"
		};
	};
	class BDA_VX19_Rib_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
		};
	};

	class BDA_CH252D_Bouquet_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
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
	class BDA_CH252D_Bouquet_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
			};
		};
	};

	class BDA_CH252D_Sniper_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Rib";
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_S2_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Sniper_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
	{
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
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sniper_CO.paa"
			};
		};
	};


	
};
class cfgMods
{
	author="Schlopp";
	timepacked="1683664746";
};
