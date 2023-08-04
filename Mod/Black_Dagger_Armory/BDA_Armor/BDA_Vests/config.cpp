class CfgPatches
{
	class BDA_Vests
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
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_M52D_Armor_Medic;
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class OPTRE_UNSC_M52D_Armor_Scout;
	class OPTRE_UNSC_M52D_Armor_Light;
	class BDA_Armor_RF: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
		};
	};
	class BDA_Armor_MD: OPTRE_UNSC_M52D_Armor
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_ODSTRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperRight",
			"AS_ODSTSniperLeft",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_Knife",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_Knife",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
			};
		};
	};
	class BDA_Armor_DM: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
		};
	};
	class BDA_Armor_SN: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
		};
	};
	class BDA_Armor_RF_P1: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1stPLT)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};
	class BDA_Armor_MD_P1: BDA_Armor_MD
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1stPLT)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Scythe_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_P1: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions, 1stPLT)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};
	class BDA_Armor_SN_P1: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Sniper, 1stPLT)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};
	class BDA_Armor_RF_S1: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1-1)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	class BDA_Armor_MD_S1: BDA_Armor_MD
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1-1)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S1_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S1: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions, 1-1)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	class BDA_Armor_SN_S1: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Sniper, 1-1)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	class BDA_Armor_RF_S2: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};
	class BDA_Armor_MD_S2: BDA_Armor_MD
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S2_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S2: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};
	class BDA_Armor_SN_S2: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Sniper, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};
	class BDA_Armor_RF_S3: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_MD_S3: OPTRE_UNSC_M52D_Armor_Medic
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S3: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_SN_S3: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		displayName="M52D Body Armor (Sniper, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_RF_ONI: OPTRE_UNSC_M52D_Armor
	{
		author="Schlopp";
		displayName="M52D Body Armor (ONI)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			//"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperRight",
			"AS_ODSTSniperLeft",
			"AS_SmallRight",
			"AS_SmallLeft",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_Knife",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_ONI_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_ONI_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_ONI_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_ONI_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
				"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				//"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_Knife",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_ONI_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_ONI_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_ONI_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_ONI_CO.paa"
			};
		};
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1683669322";
};
