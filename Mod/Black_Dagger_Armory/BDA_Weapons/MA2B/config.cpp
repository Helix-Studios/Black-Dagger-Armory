class CfgPatches 
{
    class BDA_MA2B_Dev 
    {
        author = "Rib";
		name = "Ribs Weapons";
		requiredAddons[] = {"A3_Weapons_F", "OPTRE_Weapons"};
		requiredVersion = 0.100000;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
    };
};

class CfgAmmo 
{
	class B_762x51_Ball;
	class BDA_Ammo_390_AP: B_762x51_Ball
	{
		hit=14;
		typicalSpeed=900;
		caliber=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};

class CfgMagazines 
{
	class 20Rnd_762x51_Mag;
	class BDA30rnd_MA2b_Mag: 20Rnd_762x51_Mag
	{
		scope=2;
		scopeArsenal=2;
		author="Wallace";
		displayName="MA2B 30rnd .390 Magazine";
		count=30;
		mass=10;
		ammo="BDA_Ammo_390_AP";
		tracersEvery=3;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;

class CfgWeapons 
{
    class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_H;
	class OPTRE_MA5B;
	class BDA_RifleBaseAR: OPTRE_MA5B
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;

    class BDA_Dev_MA2B: BDA_RifleBaseAR
	{
		author="Black Dagger | Wallace";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\BDA_Weapons\MA2B\data\Handanim_MA2B.rtm"
		};
		model="\BDA_Weapons\MA2B\MA2B.p3d";
		displayName="[BDA] MA2B";
		descriptionShort="UNSC Assault Rifle";
		magazines[]=
		{
			"BDA30rnd_MA2b_Mag"
		};
		magazineWell[] = {};
		reloadAction="GestureReloadMA5";
		baseWeapon="BDA_Dev_MA2B";
		recoil="recoil_trg21";
		cursor="OPTRE_MA5";
		picture="\OPTRE_weapons\ar\icons\ma5b_icon.paa";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\BDA_Weapons\MA2B\data\MA2B_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: OPTRE_MuzzleSlot
			{
			};
			class CowsSlot: OPTRE_CowsSlot_Rail
			{
			};
			class PointerSlot: OPTRE_Pointers
			{
			};
			class UnderBarrelSlot: OPTRE_UnderBarrelSlot_rail
			{
				compatibleitems[]={};
			};
		};
	};

	class BDA_Wal_MA2B: BDA_Dev_MA2B 
	{
		displayName = "[BDA] MA2B (Wallace)";
		baseWeapon = "BDA_Wal_MA2B";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\BDA_Weapons\MA2B\data\wal_ma2b.paa"};
	};
};