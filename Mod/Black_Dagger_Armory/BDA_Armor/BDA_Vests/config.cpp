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
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_M52D_Armor_Medic;
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class OPTRE_UNSC_M52D_Armor_Scout;
	class OPTRE_UNSC_M52D_Armor_Light;
    
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// Base
    
//------------------------------------------------------------------// Base Rifleman Armor.
    
    class BDA_Armor_RF: OPTRE_UNSC_M52D_Armor_Rifleman
	{

		author="Schlopp";
		displayName="M52D Body Armor (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa",
		};
	};

//------------------------------------------------------------------// Base Medic Armor.

    class BDA_Armor_MD: OPTRE_UNSC_M52D_Armor_Medic									
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to medic texture.
		};
	};

//------------------------------------------------------------------// Base Demolition Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to demolition texture.
		};
	};

//------------------------------------------------------------------// Base Sniper Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to sniper texture.
		};
	};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// 1st Platoon.

//------------------------------------------------------------------// 1st Platoon Rifleman Armor.
    
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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa",
		};
	};

//------------------------------------------------------------------// 1st Platoon Medic Armor.

    class BDA_Armor_MD_P1: OPTRE_UNSC_M52D_Armor_Medic									
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1stPLT)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa", // Update to medic texture.
		};
	};

//------------------------------------------------------------------// 1st Platoon Demolition Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa", // Update to demolition texture.
		};
	};

//------------------------------------------------------------------// 1st Platoon Sniper Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa", // Update to sniper texture.
		};
	};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// 1-1

//------------------------------------------------------------------// 1-1 Rifleman Armor.
    
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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa",
		};
	};

//------------------------------------------------------------------// 1-1 Medic Armor.

    class BDA_Armor_MD_S1: OPTRE_UNSC_M52D_Armor_Medic									
	{
		author="Schlopp";
		displayName="M52D Body Armor (Medic, 1-1)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_Medic_CO.paa", // Update to medic texture.
		};
	};

//------------------------------------------------------------------// 1-1 Demolition Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa", // Update to demolition texture.
		};
	};

//------------------------------------------------------------------// 1-1 Sniper Armor.

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
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_S1_CO.paa", // Update to sniper texture.
		};
	};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// 1-2

//------------------------------------------------------------------// 1-2 Rifleman Armor.
    
    class BDA_Armor_RF_S2: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		scope=0;
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa",
		};
	};

//------------------------------------------------------------------// 1-2 Medic Armor.

    class BDA_Armor_MD_S2: OPTRE_UNSC_M52D_Armor_Medic									
	{
		author="Schlopp";
		scope=0;
		displayName="M52D Body Armor (Medic, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to medic texture.
		};
	};

//------------------------------------------------------------------// 1-2 Demolition Armor.

    class BDA_Armor_DM_S2: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Schlopp";
		scope=0;
		displayName="M52D Body Armor (Demolitions, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to demolition texture.
		};
	};

//------------------------------------------------------------------// 1-2 Sniper Armor.

    class BDA_Armor_SN_S2: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Schlopp";
		scope=0;
		displayName="M52D Body Armor (Sniper, 1-2)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to sniper texture.
		};
	};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// 1-3

//------------------------------------------------------------------// 1-3 Rifleman Armor.
    
    class BDA_Armor_RF_S3: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		scope=0;
		author="Schlopp";
		displayName="M52D Body Armor (Rifleman, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa",
		};
	};

//------------------------------------------------------------------// 1-3 Medic Armor.

    class BDA_Armor_MD_S3: OPTRE_UNSC_M52D_Armor_Medic									
	{
		author="Schlopp";
		scope=0;
		displayName="M52D Body Armor (Medic, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to medic texture.
		};
	};

//------------------------------------------------------------------// 1-3 Demolition Armor.

    class BDA_Armor_DM_S3: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		scope=0;
		author="Schlopp";
		displayName="M52D Body Armor (Demolitions, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to demolition texture.
		};
	};

//------------------------------------------------------------------// 1-3 Sniper Armor.

    class BDA_Armor_SN_S3: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		scope=0;
		author="Schlopp";
		displayName="M52D Body Armor (Sniper, 1-3)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_CO.paa", // Update to sniper texture.
		};
	};
};