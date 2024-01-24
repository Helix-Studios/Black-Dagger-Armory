class CfgPatches
{
	class BDA_MA2B_P
	{
		author ="";
		requiredAddons[] = {   
			"A3_Data_F",
		    "A3_Weapons_F",};
		units[]={};
		weapons[] = {"BDA_MA2B"};
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

class CfgWeapons
{
	class Rifle;
	class OPTRE_MA5B: Rifle
	{
		class WeaponSlotsInfo;
	};
	class BDA_MA2B: OPTRE_MA5B
	{
		author="BDA || Wallace";
		baseWeapon="BDA_MA2B";
		scope=2;
		displayName="[BDA] MA2B";
		descriptionShort="Assault Rifle";
		model="\BDA_Weapons\BDA_MA2B\MA2B.p3d";
		ace_overheating_mrbs=3000000000;
		ACE_Overheating_SlowdownFactor=0;
		ACE_Overheating_JamChance=0;
		ACE_Overheating_Dispersion=0;
		ACE_overheating_allowSwapBarrel=1;
		reloadAction="GestureReloadTRG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\BDA_Weapons\BDA_MA2B\data\Handanim_MA2B.rtm"
		};
		magazines[]=
		{
			"BDA30rnd_MA2b_Mag"
		};
		magazineWell[]={};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\BDA_Weapons\BDA_MA2B\data\ma2b_co.paa"};
	};
};
