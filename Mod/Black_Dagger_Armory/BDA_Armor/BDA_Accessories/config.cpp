class CfgPatches
{
	class BDA_Accessories
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
class CfgVehicles
{
	class ContainerSupply;
	class B_TacticalPack_blk;
	class B_Bergen_Base;
	class V_Rangemaster_Belt;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class ItemInfo;
	class BDA_Rucksack_B: B_Bergen_Base
	{
		dlc="OPTRE";
		author="Schlopp";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName="ILCS Rucksack";
		model="\OPTRE_weapons\backpacks\ODST_ruck.p3d";
		vehicleClass="OPTRE_UNSC_Backpack_class";
		allowedSlots[]={901};
		maximumLoad=400;
		mass=40;
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Accessories\data\BDA_Rucksack_B_CO.paa"
		};
		transportMaxWeapons=10;
		transportMaxMagazines=100;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class BDA_Rucksack_B_Medical: BDA_Rucksack_B
	{
		dlc="OPTRE";
		author="Schlopp";
		displayName="ILCS Backpack (Medic)";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy"
		};
	};
	class BDA_Rucksack_B_Heavy: BDA_Rucksack_B
	{
		dlc="OPTRE";
		author="Schlopp";
		maximumLoad=550;
		mass=50;
		displayName="ILCS Rucksack (Heavy)";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};
	class BDA_Rucksack_B_SL: BDA_Rucksack_B
	{
		dlc="OPTRE";
		author="Schlopp";
		maximumLoad=400;
		mass=50;
		displayName="ILCS Rucksack UL/CNM";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Accessories\data\BDA_Rucksack_B_CO.paa"
		};
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class BDA_COMM_Uplink_Module: BDA_Rucksack_B
	{
		dlc="OPTRE";
		author="Schlopp";
		picture="\OPTRE_UNSC_Units\Army\NVGs\HUL\V_UL";
		displayName="UNSC Communications Uplink Module";
		model="\OPTRE_UNSC_Units\Army\NVGs\HUL\V_UL";
		maximumLoad=400;
		mass=40;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]={};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class BDA_Naval_Belt_R: BDA_Rucksack_B
	{
		dlc="OPTRE";
		author="Schlopp";
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		displayName="NAVCOM Carrier Belt";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		maximumLoad=400;
		mass=40;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Belt_NAVCOM_CO.paa"
		};
		hiddenSelectionsTextures[]={};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1683669322";
};
