class CfgPatches 
{
    class BDA_Weapons 
    {
        author = "Rib";
		name = "Ribs Weapons";
		requiredAddons[] = {"A3_Weapons_F","A3_Data_F_Jets","Splits_Weapons_Vehicle","Splits_Weaponry_Ammo"};
		requiredVersion = 0.100000;
		units[] = {};
		weapons[] = {"BDA_missiles_Guided_Anvil3","BDA_weapon_Guided_AA_Bottom_Launcher"};
		magazines[] = {"BDA_missiles_LGIR_Anvil3_x60","BDA_PylonMissile_AA_Pelican_x4"};
		ammo[] = {"Ribs_M_Anvil3_LGIR"};
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
	/*extern*/ class M_AT;
	/*extern*/ class Missile_AGM_02_F;
	/*extern*/ class Splits_M_ATA_Anaconda_AA;

	class Ribs_M_Anvil3_LGIR: Missile_AGM_02_F {
		model = "Splits\Splits_Weaponry\Aircraft\Anvil_1_missile_fly.p3d";
		hit = 850;
		caliber=1;
        explosionEffects="HelicopterExplosionEffects2";
        missileLockMaxDistance=5000;
        missileLockMinDistance=0;
        missileLockCone=360;
        airlock=1;
        weaponLockSystem="1 + 2 + 4 + 8 + 16";
        missileKeepLockedCone=180;
        indirectHit=100;
        mass=2;
        indirectHitRange=10;
		maxSpeed=400;
        thrust=60;
        timeToLive=80;
        typicalSpeed=50;
        thrustTime=60;
	};
};

class CfgMagazines {
	/*extern*/ class VehicleMagazine;
	/*extern*/ class 6Rnd_LG_scalpel;
	/*extern*/ class OPTRE_100Rnd_95x40_Box;
 
	class BDA_PylonMissile_AA_Pelican_x4: VehicleMagazine {
		dlc = "BDA";
		scope = 2;
		displayName = "4Rnd AAM-3000B Guided AA Missiles";
		displayNameShort = "4Rnd Guided AAM";
		model = "Splits\Splits_Weaponry\Aircraft\pylonpod_Pelican_Top_AA_01";
		count = 4;
		ammo = "Splits_M_ATA_Anaconda_AA";
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
	class BDA_missiles_LGIR_Anvil3_x60: 6Rnd_LG_scalpel {
		dlc = "BDA";
		scope = 2;
		displayName = "60Rnd ANVIL III LGIR Missile Pods";
		descriptionShort = "LGIR Missiles";
		count = 60;
		initSpeed = 350;
		maxLeadSpeed = 320;
		muzzlePos = "machinegun_beg";
		muzzleEnd = "machinegun_end";
		ammo = "Ribs_M_Anvil3_LGIR";
		autoSeekTarget=1;
	};
	class BDA_95x40_Box_400rnd_Box: OPTRE_100Rnd_95x40_Box {
	dlc = "BDA";
	scope = 2;
	displayName = "400Rnd 9.5x40mm Box Mag";
	descriptionshort="400 Round Box Magazine<br/>9.5x40mm<br/>";
	count = 400;
	mass = 95;
	};
	class BDA_95x40_Box_400rnd_Box: BDA_95x40_Box_400rnd_Box {
	displayName = "400Rnd 9.5x40mm Box Mag (Tracers)";
	ammo="OPTRE_B_95x40_Tracer";
	descriptionshort="400 Round Box Magazine<br/>9.5x40mm<br/>Tracers";
	tracersEvery=1;
	lastRoundsTracer=400;
	};

};

class CfgWeapons 
{
    /*extern*/ class RocketPods;
    /*extern*/ class missiles_ASRAAM;
	/*extern*/ class missiles_titan;
	/*extern*/ class missiles_SCALPEL;
	/*extern*/ class Missile_AGM_02_Plane_CAS_01_F;

    class BDA_missiles_Guided_Anvil3: Missile_AGM_02_Plane_CAS_01_F 
    {
        scope = 2;
        displayName = "ANVIL III LGIR Missile Pods";
		descriptionShort = "LGIR Missiles";
        magazines[] = 
        {
            "BDA_missiles_LGIR_Anvil3_x60"
        };
        ballisticsComputer = 16;
		showAimCursorInternal = 1;
		reloadTime	= 0.1;
		magazineReloadTime = 10;
		weaponLockDelay= 3;
		canLock = 2;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_ANVIL1";
		lockAcquire=1;
    };

    class BDA_weapon_Guided_AA_Bottom_Launcher: RocketPods {
		scope = 2;
		displayName ="AAM-3000B";
		descriptionShort = "AA Missiles";
		ballisticsComputer = 8;
		magazines[] = 
        {
            "BDA_PylonMissile_AA_Pelican_x4",
			"Splits_PylonMissile_AA_Pelican_x2"
        };
		reloadTime = 0.200000;
		magazineReloadTime = 0.200000;
	};
};
