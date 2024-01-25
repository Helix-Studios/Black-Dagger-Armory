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
	class arifle_Mk20_F;
	class muzzle_snds_H;
	class OPTRE_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;

    class BDA_Dev_MA2B: OPTRE_Rifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\BDA_Weapons\MA2B\data\Handanim_MA2B.rtm"
		};
		model="\BDA_Weapons\MA2B\MA2B.p3d";
		displayName="[BDA] Test MA2B";
		descriptionShort="UNSC Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag"
		};
		magazineWell[]=
		{
			"OPTRE_Magwell_MA5B"
		};
		reloadMagazineSound[]=
		{
			"\OPTRE_Wbk_WeaponImprovements\reload\mb5_reload.ogg",
			2,
			1,
			25
		};
		reloadAction="GestureReloadMA5";
		baseWeapon="BDA_Dev_MA2B";
		recoil="recoil_trg21";
		cursor="OPTRE_MA5";
		picture="\OPTRE_weapons\ar\icons\ma5b_icon.paa";
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=0;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
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
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_MA5B_SoundSet",
					"Rogue9_Tail_SoundSet",
					"Rogue9_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg",
					"db10",
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg",
					"db10",
					1,
					2000
				};
				begin3[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg",
					"db10",
					1,
					2000
				};
				begin4[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg",
					"db10",
					1,
					2000
				};
				begin5[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg",
					"db10",
					1,
					2000
				};
				begin6[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg",
					"db10",
					1,
					2000
				};
				begin7[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg",
					"db10",
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.16,
					"begin2",
					0.14,
					"begin3",
					0.14,
					"begin4",
					0.14,
					"begin5",
					0.14,
					"begin6",
					0.14,
					"begin7",
					0.14
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Msbs65_01_Shot_Silencer_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.066699997;
			dispersion=0.00075000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_MA5B_SoundSet",
					"Rogue9_Tail_SoundSet",
					"Rogue9_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg",
					"db10",
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg",
					"db10",
					1,
					2000
				};
				begin3[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg",
					"db10",
					1,
					2000
				};
				begin4[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg",
					"db10",
					1,
					2000
				};
				begin5[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg",
					"db10",
					1,
					2000
				};
				begin6[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg",
					"db10",
					1,
					2000
				};
				begin7[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg",
					"db10",
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.16,
					"begin2",
					0.14,
					"begin3",
					0.14,
					"begin4",
					0.14,
					"begin5",
					0.14,
					"begin6",
					0.14,
					"begin7",
					0.14
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Msbs65_01_Shot_Silencer_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.066699997;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=3;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=10;
	};
};