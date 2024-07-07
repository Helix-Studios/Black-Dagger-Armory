class CfgPatches
{
	class BDA_Accessories
	{
		author="Black Dagger Development Crew";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"DMNS_Supplies_F_Bags"
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
	class Bag_Base;

	class Weapon_Bag_Base: Bag_Base {
		/*extern*/ class assembleInfo;
	};

	class BDA_Rucksack_B: B_Bergen_Base {
		dlc="BDA";
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
	class BDA_Rucksack_B_Super_Heavy: BDA_Rucksack_B
	{
		author="Rib";
		maximumLoad=800;
		mass=60;
		displayName="ILCS Rucksack (Super Heavy)";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};
	class BDA_Rucksack_B_SL: BDA_Rucksack_B
	{
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
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		displayName="NAVCOM Carrier Belt";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		maximumLoad=400;
		mass=10;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Vests\data\BDA_Belt_NAVCOM_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class BDA_UAV_Backpack: Weapon_Bag_Base {
		dlc="BDA";
		scope = 1;
		scopeCurator = 1;
		_generalMacro="BDA_UAV_Backpack";
		author="Rib";
		displayName="(WIP) UAV MQ94 Drone Bag";
		maximumLoad=150;
		mass = 300;
		faction="B_UNSCODST";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_C_IDAP_UAV_ca";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		hiddenSelectionTextures[]={
			"BDA_Armor\BDA_Accessories\data\BDA_UAV_Bacpack_CO.paa"
		};
		class assembleInfo: assembleInfo {
			base = "";
			displayName = "Assemble MQ-94 Drone";
			assembleTo = "DMNS_UAV_01_F";
		};
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1683669322";
};
