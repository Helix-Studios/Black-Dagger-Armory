class CfgPatches
{
	class BDA_Vests
	{
		author="Black Dagger Armories";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"BDA_Core"
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
	/*arma*/ class ItemInfo;
	/*arma*/ class UniformItem;
	/*arma*/ class VestItem;
	/*arma*/ class HeadgearItem;
	/*arma*/ class Uniform_Base;
	/*arma*/ class HitpointsProtectionInfo;
	/*extern*/ class OPTRE_UNSC_M52D_Armor;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Demolitions;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Sniper;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Medic;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Marksman;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Rifleman;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Scout;
	/*extern*/ class OPTRE_UNSC_M52D_Armor_Light;
	/*arma*/ class V_Rangemaster_belt;
	
	class BDA_Armor_RF: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="BDA";
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
	class BDA_Armor_RF_Big: BDA_Armor_RF {
		author = "Rib";
		displayName = "M52D Body Armor (Big)";
		class ItemInfo: ItemInfo {
			containerClass="Supply300";
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
			};
		};
	};
	class BDA_Armor_MD: OPTRE_UNSC_M52D_Armor
	{
		dlc="BDA";
		author="Schlopp";
		displayName="M52D Body Armor (Medic)";
		picture="\optre_unsc_units\army\icons\odst_vest";
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
		dlc="BDA";
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
		dlc="BDA";
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

	class BDA_Armor_AR: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author="Rib";
		displayName="M52D Body Armor (Autorifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
			};
		class ItemInfo: ItemInfo {
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
	//			"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
	//			"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa"
			};
		};
	};


	
	//Scythe
	class BDA_Armor_RF_P1: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 1stPLT)";
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
		displayName="M52D Body Armor (Medic, 1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Scythe_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_P1: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};
	class BDA_Armor_SN_P1: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};
	class BDA_Armor_AR_P1: BDA_Armor_AR
	{
		displayName="M52D Body Armor (Autorifleman, 1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
	};

	//1-1
	class BDA_Armor_RF_S1: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 1-1)";
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
		displayName="M52D Body Armor (Medic, 1-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S1_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S1: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 1-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	class BDA_Armor_SN_S1: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 1-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	class BDA_Armor_AR_S1: BDA_Armor_AR {
		displayName="M52D Body Armor (Autorifleman, 1-1)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa"
		};
	};
	
	//1-2
	class BDA_Armor_RF_S2: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 1-2)";
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
		displayName="M52D Body Armor (Medic, 1-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S2_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S2: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 1-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};
	class BDA_Armor_SN_S2: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 1-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};
	class BDA_Armor_AR_S2: BDA_Armor_AR {
		displayName="M52D Body Armor (Autorifleman, 1-2)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S2_CO.paa"
		};
	};

	//1-3
	class BDA_Armor_RF_S3: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_MD_S3: BDA_Armor_MD
	{
		displayName="M52D Body Armor (Medic, 1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S3_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S3: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_SN_S3: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};
	class BDA_Armor_AR_S3: BDA_Armor_AR {
		displayName="M52D Body Armor (Autorifleman, 1-3)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S3_CO.paa"
		};
	};

	//Druid
	class BDA_Armor_RF_P2: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 2ndPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Druid_CO.paa"
		};
	};
	class BDA_Armor_MD_P2: BDA_Armor_MD
	{
		displayName="M52D Body Armor (Medic, 2ndPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Scythe_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_P2: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 2ndPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Druid_CO.paa"
		};
	};
	class BDA_Armor_SN_P2: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 2ndPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Druid_CO.paa"
		};
	};
	class BDA_Armor_AR_P2: BDA_Armor_AR
	{
		displayName="M52D Body Armor (Autorifleman, 2ndPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Druid_CO.paa"
		};
	};

	//2-1
	class BDA_Armor_RF_S4: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 2-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S4_CO.paa"
		};
	};
	class BDA_Armor_MD_S4: BDA_Armor_MD
	{
		displayName="M52D Body Armor (Medic, 2-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S4_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S4_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S4: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 2-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S4_CO.paa"
		};
	};
	class BDA_Armor_SN_S4: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 2-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S4_CO.paa"
		};
	};
	class BDA_Armor_AR_S4: BDA_Armor_AR {
		displayName="M52D Body Armor (Autorifleman, 2-1)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S4_CO.paa"
		};
	};
	

	//2-2
	class BDA_Armor_RF_S5: BDA_Armor_RF
	{
		displayName="M52D Body Armor (Rifleman, 2-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S5_CO.paa"
		};
	};
	class BDA_Armor_MD_S5: BDA_Armor_MD
	{
		displayName="M52D Body Armor (Medic, 2-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S5_Medic_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S5_Medic_CO.paa"
		};
	};
	class BDA_Armor_DM_S5: BDA_Armor_DM
	{
		displayName="M52D Body Armor (Demolitions, 2-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S5_CO.paa"
		};
	};
	class BDA_Armor_SN_S5: BDA_Armor_SN
	{
		displayName="M52D Body Armor (Sniper, 2-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S5_CO.paa"
		};
	};
	class BDA_Armor_AR_S5: BDA_Armor_AR {
		displayName="M52D Body Armor (Autorifleman, 2-2)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S5_CO.paa"
		};
	};

	class BDA_Armor_RF_ONI: OPTRE_UNSC_M52D_Armor
	{
		author="Schlopp";
		displayName="M52D Body Armor (ONI)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_ONI_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_ONI_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_ONI_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_ONI_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
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
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_ONI_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_ONI_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_ONI_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_ONI_CO.paa"
			};
		};
	};
	
	class BDA_M52D_Recon_Armor: OPTRE_UNSC_M52D_Armor {
		author = "Rib";
		displayName = "M52D Body Armor (Recon)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Recon_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Recon_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_Recon_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Recon_CO.paa"
			};
			vestType="Rebreather";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class BDA_Armor_Mortar: BDA_Armor_RF_Big {
		author = "Rib";
		displayName = "M52D Body Armor (Hangman)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Mortar_CO.paa"
		};
	};

	class BDA_Armor_Pilot: OPTRE_UNSC_M52D_Armor {
		author = "Rib";
		displayName="M52D Body Armor (81st Naval Air Squadron)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
		class ItemInfo: ItemInfo {
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
	//			"A_KneesMarLeft",
	//			"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
	//			"AS_SmallRight",
	//			"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
	//			"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
	//			"AP_Pack",
		//		"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
		//		"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
	//			"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
			};
		};
	};

	class BDA_Naval_Belt: V_Rangemaster_Belt
	{
		author="Schlopp";
		displayName="NAVCOM Carrier Belt";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Belt_NAVCOM_CO.paa"
			};
		};
	};

//end
};
class cfgMods
{
	author="Rib";
	timepacked="2409231239";
};
