class CfgPatches
{
	class BDA_Vests_C
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
			"BDA_Core",
			"BDA_Vests"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		skipWhenMissingDependencies=1;
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
	/*intern*/ class BDA_Armor_RF_ONI;
	/*intern*/ class BDA_Armor_SN;
	/*intern*/ class BDA_Armor_DM;
	/*intern*/ class BDA_Armor_MD;
	/*intern*/ class BDA_Armor_RF;
	/*intern*/ class BDA_Armor_AR_S1;
	/*extern*/ class OPTRE_UNSC_M52A_Armor_Base;

	class BDA_Armor_Mustang: OPTRE_UNSC_M52D_Armor
	{
		displayName="M52D Body Armor (E. Mustang)";
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
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperRight",
			"AS_ODSTSniperLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_Sniper"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
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
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
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
				"APO_Sniper"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
			};
		};
	};
	class BDA_Armor_Flowers: OPTRE_UNSC_M52D_Armor
	{
		displayName="M52D Body Armor (J. Flowers)";
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
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AP_AR",
			"AP_BR",
			"AP_GL",
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
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Flowers_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Flowers_CO.paa"
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
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_GL",
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
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Flowers_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Flowers_CO.paa"
			};
		};
	};


	class BDA_Armor_Ribbington_v2: OPTRE_UNSC_M52D_Armor
	{
		author = "Rib";
		displayName="M52D Body Armor (R. Ribbington)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelections[]=
		{
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
//			"A_ODST",
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
//			"AS_ODSTRight",
			"AS_ODSTSniperRight",
			"AS_ODSTSniperLeft",
			"AS_SmallRight",
//			"AS_SmallLeft",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
//			"AP_Knife",
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
//			"AP_Smoke",
			"APO_AR",
			"APO_BR",
//			"APO_Knife",
//			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Vest_Rib_CO.paa",//vest camo
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_2_CO.paa",//Shoulder camo2
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Legs_Rib_CO.paa", //legs camo3
			"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_odst_CO.paa"//camo5
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
			hiddenSelections[]=
			{
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
	//			"A_ODST",
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
	//			"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
	//			"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
	//			"AP_Knife",
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
	//			"AP_Smoke",
				"APO_AR",
				"APO_BR",
	//			"APO_Knife",
	//			"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",//vest camo
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_2_CO.paa",//Shoulder camo2
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Legs_Rib_CO.paa", //legs camo3
				"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_odst_CO.paa"//camo5
			};
		};
	};

	class BDA_Armor_Zarush: OPTRE_UNSC_M52D_Armor {
		displayName="M52D Body Armor (A. Zarush)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zarush_CO.paa"
		};
		hiddenSelections[]=
		{
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
//			"A_ODST",
//			"A_TacPad",
//			"A_ShinArmorLeft",
//			"A_ShinArmorRight",
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
//			"AS_ODSTSniperRight",
//			"AS_ODSTSniperLeft",
			"AS_SmallRight",
			"AS_SmallLeft",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
//			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
//			"AP_Thigh",
//			"AP_Frag",
//			"AP_Smoke",
//			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
		{
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
	//			"A_ODST",
	//			"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
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
	//			"AS_ODSTSniperRight",
	//			"AS_ODSTSniperLeft",
				"AS_SmallRight",
				"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
	//			"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
	//			"AP_Thigh",
	//			"AP_Frag",
	//			"AP_Smoke",
	//			"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
		};
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zarush_CO.paa"
			};
		};
	};

	class BDA_Armor_Soviet: BDA_Armor_AR_S1 {
		scope=1;
		scopeCurator=1;
		displayName="M52D Body Armor (U. Soviet)";
		hiddenSelectionsTextures[]={};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[]={};
		};
	};

};
class cfgMods
{
	author="Rib";
	timepacked="2409231239";
};
