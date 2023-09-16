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
			"OPTRE_UNSC_Units_Army"
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
	class OPTRE_Helmet_NavyDeckCrew;
	class OPTRE_PatrolCap_Navy;
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class OPTRE_UNSC_Cap_ODST;
	class H_Booniehat_oli;
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
	class BDA_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Schlopp";
		picture="\BDA_Armor\BDA_Helmets\data\icons\BDA_ODST_Helmet";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_P1: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
	class BDA_CH252D_Helmet_P1_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
			""
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S1: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
	class BDA_CH252D_Helmet_S1_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S2: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
	class BDA_CH252D_Helmet_S2_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S3: OPTRE_UNSC_CH252D_Helmet_Base
	{
		scope=2;
		author="Schlopp";
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Scythe_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S3_dp: OPTRE_UNSC_CH252D_Helmet_Base
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
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
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
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa"
			};
		};
	};
	class BDA_VX19_Helmet: OPTRE_FC_VX19_Helmet
	{
		scope=2;
		author="Schlopp";
		displayName="VX19 Flight Helmet";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
	};
	class BDA_VX19_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
		scope=1;
		author="Schlopp";
		displayName="VX19 Flight Helmet";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet_dp.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_CA.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1683669322";
};
