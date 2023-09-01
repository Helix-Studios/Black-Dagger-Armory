class CfgPatches {

	class BDA_Weapons {
		author = "Rib";
		name = "Ribs/Splits Weapons";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.100000;
		units[] = {};
		weapons[] = {};
		magazines[] = {"BDA_PylonMissile_AA_Pelican_x3"};
		ammo[] = {"MissileBase"};
	};
};
/*extern*/ class SensorTemplatePassiveRadar;
/*extern*/ class SensorTemplateAntiRadiation;
/*extern*/ class SensorTemplateActiveRadar;
/*extern*/ class SensorTemplateIR;
/*extern*/ class SensorTemplateVisual;
/*extern*/ class SensorTemplateMan;
/*extern*/ class SensorTemplateLaser;
/*extern*/ class SensorTemplateNV;
/*extern*/ class SensorTemplateDataLink;

class CfgAmmo {
	/*extern*/ class MissileCore;

	class MissileBase: MissileCore {
		/*extern*/ class Components;
	};
	/*extern*/ class BulletBase;
	/*extern*/ class RocketBase;
	/*extern*/ class LaserBombCore;
	/*extern*/ class BombCore;
	/*extern*/ class ShellBase;
	/*extern*/ class Missile_AA_04_F;
};

class CfgMagazines {
	/*extern*/ class VehicleMagazine;

	class BDA_PylonMissile_AA_Pelican_x4: VehicleMagazine {
		dlc = "BDA";
		scope = 2;
		displayName = "4Rnd AAM-3000B Guided AA Missiles";
		displayNameShort = "4Rnd Guided AAM";
		model = "Splits\Splits_Weaponry\Aircraft\pylonpod_Pelican_Top_AA_01";
		count = 4;
		ammo = "Splits_M_ATA_Anazonda_AA";
		initSpeed = 350;
		maxLeadSpeed = 320;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2", 1.258930, 1, 1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1.300000, 400};
		soundHit[] = {"", 1.258930, 1, 1};
		reloadSound[] = {"", 0.000316, 1, 20};
		nameSound = "missiles";
		muzzlePos = "machinegun_beg";
		muzzleEnd = "machinegun_end";
		hardpoints[] = {"Splits_B_Missiles"};
		pylonWeapon = "BDA_weapon_Guided_AA_Bottom_Launcher";
	};

class CfgWeapons {
	/*extern*/ class CannonCore;
	/*extern*/ class MissileLauncher;
	/*extern*/ class RocketPods;
	/*extern*/ class SmokeLauncher;
	/*extern*/ class Rifle_Base_F;
	/*extern*/ class Cannon_105mm;

	class BDA_weapon_Guided_AA_Bottom_Launcher: RocketPods {
		displayName="AAM-3000B";
		ballisticsComputer = 8;
		magazines = {"BDA_PylonMissile_AA_Pelican_x4"};
		reloadTime = 0.200000;
		magazineReloadTime = 0.200000;
	};

};
