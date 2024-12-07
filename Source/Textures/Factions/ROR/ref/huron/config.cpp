////////////////////////////////////////////////////////////////////
//DeRap: air_f_heli\Heli_Transport_03\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 19 15:59:33 2021 : 'file' last modified on Tue Jun 22 16:48:57 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Air_F_Heli_Heli_Transport_03
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Transport_03_black_F","B_Heli_Transport_03_F","B_Heli_Transport_03_unarmed_F","B_Heli_Transport_03_unarmed_green_F"};
		weapons[] = {};
	};
};
class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewPilot;
		class ViewOptics;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 27.48;
		_generalMacro = "Heli_Transport_03_base_F";
		features = "Randomization: No						<br />Camo selections: Camo1, Camo2						<br />Script door sources: Door_R_source, Door_L_source, Door_rear_source						<br />Script animations: HideMiniguns						<br />Executed scripts: None						<br />Firing from vehicles: Yes, two positions at the rear ramp (015, 016)						<br />Slingload: Slingloads up to 12,000 kg						<br />Cargo proxy indexes: 001-016";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Heli\Heli_Transport_03\RTD_Heli_Transport_03.xml";
			autoHoverCorrection[] = {6.5,0,0};
			defaultCollective = 0.605;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 4032;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 350000;
			maxTailRotorStress = 350000;
		};
		armor = 40;
		maxSpeed = 300;
		fuelCapacity = 1360;
		fuelConsumptionRate = 0.126;
		slingLoadMaxCargoMass = 12000;
		enableSweep = 0;
		liftForceCoef = 1.65;
		mainBladeRadius = 8;
		tailBladeCenter = "rotor_02_center";
		tailBladeRadius = 8;
		tailBladeVertical = 0;
		maxFordingDepth = 1;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		cost = 1000000;
		threat[] = {0.8,0.1,0.6};
		editorSubcategory = "EdSubcat_Helicopters";
		icon = "\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Map_Heli_Transport_03_base_CA.paa";
		picture = "\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Heli_Transport_03_base_CA.paa";
		gearRetracting = 1;
		gearUpTime = 1;
		gearDownTime = 1;
		driveOnComponent[] = {"gear_1_1_wheels","gear_2_1_wheels","gear_1_2_wheel","gear_2_2_wheel"};
		scope = 0;
		displayname = "$STR_A3_CfgVehicles_B_Heli_Transport_03_base_F0";
		class Library
		{
			libTextDesc = "$STR_A3_HURON_DESC_F0";
		};
		driverAction = "pilot_Heli_Transport_03";
		driverInAction = "pilot_Heli_Transport_03";
		GetInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_apc_generic04","passenger_apc_generic02","passenger_apc_generic03","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_apc_generic03","passenger_apc_narrow_generic03","passenger_generic01_foldhands","passenger_apc_generic03","passenger_apc_narrow_generic03","passenger_apc_generic01","passenger_apc_generic01","passenger_generic01_leanleft","passenger_generic01_leanright","passenger_low01"};
		enableManualFire = 0;
		model = "\A3\Air_F_Heli\Heli_Transport_03\Heli_Transport_03_F.p3d";
		DLC = "Heli";
		overviewPicture = "\A3\Data_F_Heli\Images\dlcbrowser_heli_01_ca.paa";
		transportSoldier = 14;
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		hideWeaponsCargo = 1;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment3"};
		getInRadius = 2;
		memoryPointCM[] = {"Flare_launcher_1_pos","Flare_launcher_2_pos"};
		memoryPointCMDir[] = {"Flare_launcher_1_dir","Flare_launcher_2_dir"};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		radarTargetSize = 1.2;
		visualTargetSize = 1.2;
		irTargetSize = 1.2;
		lockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		selectionHRotorMove = "main_rotor_1_blur";
		selectionHRotorStill = "main_rotor_1_static";
		selectionVRotorMove = "main_rotor_2_blur";
		selectionVRotorStill = "main_rotor_2_static";
		maximumLoad = 6000;
		supplyRadius = -0.5;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		class MFD{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 999;
				visual = "zbytek";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel: HitFuel
			{
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics: HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.05;
				explosionShielding = 1.5;
			};
			class HitEngine1
			{
				armor = 0.7;
				radius = 0.6;
				name = "engine_1_hit";
				explosionShielding = 3;
				minimalHit = 0.1;
				visual = "motor";
				passThrough = 1;
				convexComponent = "engine_1_hit";
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				radius = 1;
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine3: HitEngine1
			{
				radius = 0.75;
				name = "engine_3_hit";
				convexComponent = "engine_3_hit";
			};
			class HitEngine4: HitEngine1
			{
				radius = 0.75;
				name = "engine_4_hit";
				convexComponent = "engine_4_hit";
			};
			class HitEngine: HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				depends = "0.25 * (HitEngine1 + HitEngine2 + HitEngine3 + HitEngine4)";
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
				name = "main_rotor_1_hit";
				convexComponent = "main_rotor_1_hit";
				visual = "main_rotor_1_damage";
			};
			class HitVRotor: HitVRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
				name = "main_rotor_1_hit";
				convexComponent = "main_rotor_1_hit";
				depends = "HitHRotor";
				visual = "main_rotor_2_damage";
			};
			class HitRotorVirtual: HitHRotor
			{
				name = "";
				convexComponent = "";
				visual = "";
				depends = "0.5 * (HitHRotor + HitVRotor)";
			};
			class HitGlass1: HitGlass1
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitGlass6: HitGlass6
			{
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitGlass7: HitGlass6
			{
				name = "glass7";
				convexComponent = "glass7";
				visual = "glass7";
				radius = 0.2;
			};
			class HitGlass8: HitGlass7
			{
				name = "glass8";
				convexComponent = "glass8";
				visual = "glass8";
			};
			class HitGlass9: HitGlass6
			{
				name = "glass9";
				convexComponent = "glass9";
				visual = "glass9";
				radius = 0.42;
			};
			class HitGlass10: HitGlass9
			{
				name = "glass10";
				convexComponent = "glass10";
				visual = "glass10";
			};
			class HitGlass11: HitGlass9
			{
				name = "glass11";
				convexComponent = "glass11";
				visual = "glass11";
			};
			class HitGlass12: HitGlass9
			{
				name = "glass12";
				convexComponent = "glass12";
				visual = "glass12";
			};
			class HitGlass13: HitGlass6
			{
				name = "glass13";
				convexComponent = "glass13";
				visual = "glass13";
				radius = 0.33;
			};
			class HitGlass14: HitGlass13
			{
				name = "glass14";
				convexComponent = "glass14";
				visual = "glass14";
			};
			class HitGlass15: HitGlass14
			{
				name = "glass15";
				convexComponent = "glass15";
				visual = "glass15";
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitRotor_source
			{
				source = "Hit";
				hitpoint = "HitRotorVirtual";
				raw = 1;
			};
			class HitHRotor_source: HitRotor_source
			{
				hitpoint = "HitHRotor";
			};
			class HitVRotor_source: HitRotor_source
			{
				hitpoint = "HitVRotor";
			};
			class Door_R_source
			{
				source = "door";
				initPhase = 0;
				animPeriod = 1;
				sound = "ServoRampSound";
			};
			class Door_L_source: Door_R_source{};
			class Door_rear_source: Door_R_source{};
			class Minigun_Hide_Source
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class Minigun
			{
				source = "revolving";
				weapon = "LMG_Minigun_Transport";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "LMG_Minigun_Transport";
			};
			class Minigun2
			{
				source = "revolving";
				weapon = "LMG_Minigun_Transport2";
			};
			class Muzzle_flash2
			{
				source = "ammorandom";
				weapon = "LMG_Minigun_Transport2";
			};
		};
		class UserActions
		{
			class Ramp_Open
			{
				userActionID = 60;
				displayName = "$STR_ACTION_RAMP_OPEN0";
				textToolTip = "$STR_ACTION_RAMP_OPEN0";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position = "";
				condition = "this doorPhase 'Door_rear_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)}";
				statement = "this animateDoor ['Door_rear_source', 1]";
				priority = 1.5;
				radius = 1.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID = 61;
				displayName = "$STR_ACTION_RAMP_CLOSE0";
				textToolTip = "$STR_ACTION_RAMP_CLOSE0";
				condition = "this doorPhase 'Door_rear_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)}";
				statement = "this animateDoor ['Door_rear_source', 0]";
			};
		};
		class RenderTargets
		{
			class SlingLoadCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "slingLoad_cam_pos";
					pointDirection = "slingLoad_cam_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
				BBoxes[] = {"PIP_0_TL","PIP_0_TR","PIP_0_BL","PIP_0_BR"};
			};
		};
		dustEffect = "HeliDustBig";
		class Exhausts
		{
			class Exhaust_L
			{
				position = "exhaust_L";
				direction = "exhaust_L_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust_R
			{
				position = "exhaust_R";
				direction = "exhaust_R_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10.0,1};
		soundGetIn[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\getout",1.0,1,40};
		soundEngineOnInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_start_int2",0.25118864,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_start_ext",1.4125376,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_stop_int2",0.25118864,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_stop_ext",1.4125376,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.7782794,1.0,200};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.7782794,1.0,200};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,300};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,200};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		gearUpExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_OUT",1.0,1.0,1000};
		gearUpInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_IN",1.0,1.0,100};
		gearUp[] = {"gearUpInt","gearUpExt"};
		gearDownInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_IN",1.0,1.0,100};
		gearDownExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_OUT",1.0,1.0,1000};
		gearDown[] = {"gearDownInt","gearDownExt"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_ext2",1.7782794,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*(rotorSpeed factor[0.4,1])";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_ext2",1.4125376,0.8,2000};
				frequency = "rotorSpeed*1.1";
				volume = "1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorSwistExt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_sfx",1.0,1,400};
				frequency = 1;
				volume = "camPos*(rotorThrust factor [0.6, 1])";
				cone[] = {1.0,1.4,1.0,0};
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_int3",0.7943282,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_int",1.0,0.8};
				frequency = "rotorSpeed*1.1";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.22387211,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.2589254,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.2589254,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.63095737,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",1.1220185,1.0,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1.0,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[50,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_ext2",1.7782794,1.0,800};
					frequency = "rotorSpeed";
					volume = "camPos*(rotorSpeed factor[0.4,1])";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_ext2",1.4125376,0.8,2000};
					frequency = "rotorSpeed*1.1";
					volume = "1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class RotorSwistExt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_sfx",1.0,1,400};
					frequency = 1;
					volume = "camPos*(rotorThrust factor [0.6, 1])";
					cone[] = {1.0,1.4,1.0,0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_int3",0.7943282,1.0};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_int",1.0,0.8};
					frequency = "rotorSpeed*1.1";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.22387211,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.63095737,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",1.1220185,1.0,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1.0,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		class CargoTurret;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -8;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_03";
				gunnerInAction = "pilot_Heli_Transport_03";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				preciseGetInOut = "GETIN_OLD";
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				proxyIndex = 3;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment2";
				commanding = -3;
				class ViewGunner: ViewPilot{};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
				};
				selectionFireAnim = "";
			};
			class MainTurret: MainTurret
			{
				CanEject = 1;
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType = "B_helicrew_F";
				minElev = -25;
				maxElev = 20;
				initElev = -15;
				minTurn = 30;
				maxTurn = 140;
				initTurn = 90;
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_beg";
				gunEnd = "muzzle_end";
				gunnerName = "$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				memoryPointGunnerOptics = "Eye";
				gunnerAction = "Gunner_HeliTransport3_1";
				gunnerInAction = "Gunner_HeliTransport3_1";
				gunnerLeftHandAnimName = "gunner_1_hand_l";
				gunnerRightHandAnimName = "gunner_1_hand_r";
				gunnerLeftLegAnimName = "gunner_1_legs";
				gunnerRightLegAnimName = "gunner_1_legs";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				soundServo[] = {"",1.4125376,1,30};
				soundServoVertical[] = {"",1.4125376,1,30};
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 1;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerDoor = "";
				playerPosition = 3;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
				canUseScanners = 0;
				selectionFireAnim = "zasleh";
			};
			class RightDoorGun: MainTurret
			{
				minTurn = -140;
				maxTurn = -30;
				initTurn = -90;
				body = "RightDoorTurret";
				gun = "RightDoorGun";
				animationSourceBody = "mainTurret2";
				animationSourceGun = "mainGun2";
				selectionFireAnim = "zasleh_1";
				gunnerAction = "Gunner_HeliTransport3_2";
				gunnerInAction = "Gunner_HeliTransport3_2";
				gunnerLeftHandAnimName = "gunner_2_hand_l";
				gunnerRightHandAnimName = "gunner_2_hand_r";
				gunnerLeftLegAnimName = "gunner_2_legs";
				gunnerRightLegAnimName = "gunner_2_legs";
				proxyIndex = 2;
				gunnerName = "$STR_A3_RIGHT_GUNNER";
				weapons[] = {"LMG_Minigun_Transport2"};
				commanding = -3;
				gunBeg = "muzzle_beg_2";
				gunEnd = "muzzle_end_2";
				primaryGunner = 0;
				memoryPointGun = "";
				memoryPointGunnerOptics = "Eye2";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				gunnerDoor = "";
				canUseScanners = 0;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo dir r";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 15;
				class TurnOut
				{
					limitsArrayTop[] = {{-9.5507,-1.5932},{7.2316,6.1824},{21.2761,24.8757},{18.4188,51.9779},{-1.294,61.9024}};
					limitsArrayBottom[] = {{-10.5189,-1.5408},{-11.8771,7.4937},{-9.0822,24.5906},{-13.2861,45.5957},{-23.2533,55.885}};
				};
				class TurnIn: TurnOut{};
				isPersonTurret = 1;
				enabledByAnimationSource = "Door_rear_source";
				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				selectionFireAnim = "";
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo dir l";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				class TurnOut
				{
					limitsArrayTop[] = {{4.2148,-41.2222},{15.2573,-37.7332},{25.2445,-33.5716},{28.3595,-4.6949},{21.892,7.129},{13.5426,15.8007},{-4.1974,23.5159}};
					limitsArrayBottom[] = {{-12.4846,-33.923},{-6.78,-26.0082},{-1.3741,-5.0386},{-5.0306,13.1077},{-3.7142,23.5767}};
				};
				class TurnIn: TurnOut{};
				proxyIndex = 16;
			};
		};
		class Reflectors
		{
			class Light_L
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L";
				selection = "Light_L_hide";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Light_R: Light_L
			{
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R";
				selection = "Light_R_hide";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingLoad_cam";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_destruct.rvmat","a3\data_f\glass_veh.rvmat","a3\Data_f\Glass_veh_damage.rvmat","a3\Data_f\Glass_veh_damage.rvmat","a3\data_f\glass_veh_int.rvmat","a3\Data_f\Glass_veh_damage.rvmat","a3\Data_f\Glass_veh_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard_damage.rvmat","A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard_destruct.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat"};
		};
		numberPhysicalWheels = 4;
		availableForSupportTypes[] = {"Drop","Transport"};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 20;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName = "$STR_A3_TEXTURESOURCES_GREEN0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Black
			{
				displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
		class EventHandlers: EventHandlers
		{
			postinit = "if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"mainrotor1",0},{"mainrotor2",0},{"mainrotor1_bend",0},{"mainrotor2_bend",0},{"mainrotor1_hide",0},{"mainrotor1_hide2",0},{"mainrotor2_hide",0},{"mainrotor2_hide2",0},{"damagedrotor1show",0},{"damagedrotor2show",0},{"gear_fl",0},{"gear_fr",0},{"gear_rl",0},{"gear_rl_piston",0},{"gear_rr",0},{"gear_rr_piston",0},{"damper_fl",-0.15},{"damper_fr",-0.15},{"damper_rl",-0.15},{"damper_rr",-0.15},{"door_rt",0},{"door_rb",0},{"door_lt",0},{"door_lb",0},{"door_rear",0},{"door_rear_hide",0},{"display_on",0},{"pitch_r",0.02},{"pitch_l",0.02},{"bank_r",0},{"bank_l",0},{"altitude_large",-0.15},{"altitude_small",-0.15},{"altitude_thousands",-0.15},{"compass_r",0},{"compass_l",0},{"compass_middle",0},{"compass_display_r",0},{"compass_display_l",0},{"rpm_r_1",0},{"rpm_r_2",0},{"rpm_l_1",0},{"rpm_l_2",0},{"speed_r",0},{"speed_r_negative",0},{"speed_l",0},{"speed_l_negative",0},{"torque_r_1",0},{"torque_r_2",0},{"torque_l_1",0},{"torque_l_2",0},{"vertspeed_r",0},{"vertspeed_l",0},{"fuel_r_1",1},{"fuel_r_2",1},{"fuel_l_1",1},{"fuel_l_2",1},{"gear_up",0},{"gear_down",0},{"mainturret",1.57},{"maingun",-0.26},{"minigun",0.33},{"rightdoorturret",-1.57},{"rightdoorgun",-0.26},{"minigun2",0.33},{"hidewinch",0},{"hideminiguns",0},{"hmg_muzzleflashrot",700},{"hmg_muzzleflashrot2",806},{"gunner_1_rot1",1.57},{"gunner_1_rot2",1.57},{"gunner_1_aimdown1",-0.26},{"gunner_1_leftside_tilt1",1.57},{"gunner_1_leftside_tilt2",1.57},{"gunner_1_leftside_tilt3",1.57},{"gunner_1_leftside_tilt4",1.57},{"gunner_1_leftside_tilt4a",1.57},{"gunner_1_leftside_tilt5",1.57},{"gunner_1_leftside_tilt5a",1.57},{"gunner_1_leftside_tilt6",1.57},{"gunner_1_leftside_hand_l",1.57},{"gunner_1_leftside_hand_r",1.57},{"gunner_1_rightside_tilt1",1.57},{"gunner_1_rightside_tilt2",1.57},{"gunner_1_rightside_tilt3",1.57},{"gunner_1_rightside_tilt4",1.57},{"gunner_1_rightside_tilt4a",1.57},{"gunner_1_rightside_tilt5",1.57},{"gunner_1_rightside_tilt5a",1.57},{"gunner_1_rightside_tilt6",1.57},{"gunner_1_rightside_hand_l",1.57},{"gunner_1_rightside_hand_r",1.57},{"gunner_1_translation1",1.57},{"gunner_1_translationhands1",1.57},{"gunner_1_translationhandl2",1.57},{"gunner_2_rot1",-1.57},{"gunner_2_rot2",-1.57},{"gunner_2_aimdown1",-0.26},{"gunner_2_leftside_tilt1",-1.57},{"gunner_2_leftside_tilt2",-1.57},{"gunner_2_leftside_tilt3",-1.57},{"gunner_2_leftside_tilt4",-1.57},{"gunner_2_leftside_tilt4a",-1.57},{"gunner_2_leftside_tilt5",-1.57},{"gunner_2_leftside_tilt5a",-1.57},{"gunner_2_leftside_tilt6",-1.57},{"gunner_2_leftside_hand_l",-1.57},{"gunner_2_leftside_hand_r",-1.57},{"gunner_2_rightside_tilt1",-1.57},{"gunner_2_rightside_tilt2",-1.57},{"gunner_2_rightside_tilt3",-1.57},{"gunner_2_rightside_tilt4",-1.57},{"gunner_2_rightside_tilt4a",-1.57},{"gunner_2_rightside_tilt5",-1.57},{"gunner_2_rightside_tilt5a",-1.57},{"gunner_2_rightside_tilt6",-1.57},{"gunner_2_rightside_hand_l",-1.57},{"gunner_2_rightside_hand_r",-1.57},{"wheels_front_r",0},{"wheels_front_l",0},{"wheels_rear_r",0},{"wheels_rear_l",0},{"positionlights",0},{"collisionlight",0},{"collective_pilot",0},{"stick_pilot_dive_01",0},{"stick_pilot_dive_02",0},{"stick_pilot_dive_03",0},{"stick_pilot_dive_04",0},{"stick_pilot_dive_05",0},{"stick_pilot_bank_01",0},{"stick_pilot_bank_02",0},{"stick_pilot_bank_03",0},{"stick_pilot_bank_04",0},{"stick_pilot_bank_05",0},{"stick_copilot_dive01",0},{"stick_copilot_dive02",0},{"stick_copilot_dive03",0},{"stick_copilot_dive04",0},{"stick_copilot_dive05",0},{"stick_copilot_bank01",0},{"stick_copilot_bank02",0},{"stick_copilot_bank03",0},{"stick_copilot_bank04",0},{"stick_copilot_bank05",0},{"pedals_right",0},{"pedals_left",0}};
			hide[] = {"clan","zasleh","zasleh_1","light_l_hide","light_r_hide","main_rotor_2_blur","main_rotor_1_blur","zadni svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 3.325;
			verticalOffsetWorld = -0.02;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_F.jpg";
		_generalMacro = "B_Heli_Transport_03_F";
		crew = "B_helipilot_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		side = 1;
		faction = "BLU_F";
		scope = 2;
		DLC = "Heli";
		textureList[] = {"Green",1};
	};
	class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Heli_Transport_03_unarmed_base_F";
		displayName = "$STR_A3_CfgVehicles_B_Heli_Transport_03_unarmed_base_F0";
		features = "Randomization: No						<br />Camo selections: Camo1, Camo2						<br />Script door sources: Door_R_source, Door_L_source, Door_rear_source						<br />Script animations: HideMiniguns						<br />Executed scripts: None						<br />Firing from vehicles: Yes, two positions at the rear ramp (015, 016), two positions at the windows (Gunner.001 and 002)						<br />Slingload: Slingloads up to 12,000 kg						<br />Cargo proxy indexes: 001-016";
		forceInGarage = 1;
		class AnimationSources: AnimationSources
		{
			class Minigun_Hide_Source: Minigun_Hide_Source
			{
				initPhase = 1;
			};
			class MainTurret
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class MainGun: MainTurret{};
			class MainTurret2: MainTurret{};
			class MainGun2: MainTurret{};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class MainTurret: MainTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerName = "$STR_A3_TURRETS_WINDOW_L";
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				dontCreateAI = 1;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				startEngine = 0;
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				outGunnerMayFire = 1;
				gunnerOpticsModel = "";
				magazines[] = {};
				weapons[] = {};
				memoryPointGunnerOptics = "gunnerview";
				showAsCargo = 1;
				proxyIndex = 4;
				isPersonTurret = 1;
				maxElev = 30;
				minElev = -25;
				maxTurn = 30;
				minTurn = -30;
			};
			class RightDoorGun: MainTurret
			{
				proxyIndex = 5;
				gunnerName = "$STR_A3_TURRETS_WINDOW_R";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				gunnerDoor = "";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo dir r";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 15;
				class TurnOut
				{
					limitsArrayTop[] = {{-9.5507,-1.5932},{7.2316,6.1824},{21.2761,24.8757},{18.4188,51.9779},{-1.294,61.9024}};
					limitsArrayBottom[] = {{-10.5189,-1.5408},{-11.8771,7.4937},{-9.0822,24.5906},{-13.2861,45.5957},{-23.2533,55.885}};
				};
				class TurnIn: TurnOut{};
				isPersonTurret = 1;
				enabledByAnimationSource = "Door_rear_source";
				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				selectionFireAnim = "";
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo dir l";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				class TurnOut
				{
					limitsArrayTop[] = {{4.2148,-41.2222},{15.2573,-37.7332},{25.2445,-33.5716},{28.3595,-4.6949},{21.892,7.129},{13.5426,15.8007},{-4.1974,23.5159}};
					limitsArrayBottom[] = {{-12.4846,-33.923},{-6.78,-26.0082},{-1.3741,-5.0386},{-5.0306,13.1077},{-3.7142,23.5767}};
				};
				class TurnIn: TurnOut{};
				proxyIndex = 16;
			};
		};
		hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
	};
	class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"mainrotor1",0},{"mainrotor2",0},{"mainrotor1_bend",0},{"mainrotor2_bend",0},{"mainrotor1_hide",0},{"mainrotor1_hide2",0},{"mainrotor2_hide",0},{"mainrotor2_hide2",0},{"damagedrotor1show",0},{"damagedrotor2show",0},{"gear_fl",0},{"gear_fr",0},{"gear_rl",0},{"gear_rl_piston",0},{"gear_rr",0},{"gear_rr_piston",0},{"damper_fl",-0.15},{"damper_fr",-0.15},{"damper_rl",-0.15},{"damper_rr",-0.15},{"door_rt",0},{"door_rb",0},{"door_lt",0},{"door_lb",0},{"door_rear",0},{"door_rear_hide",0},{"display_on",0},{"pitch_r",0.02},{"pitch_l",0.02},{"bank_r",0},{"bank_l",0},{"altitude_large",-0.15},{"altitude_small",-0.15},{"altitude_thousands",-0.15},{"compass_r",0},{"compass_l",0},{"compass_middle",0},{"compass_display_r",0},{"compass_display_l",0},{"rpm_r_1",0},{"rpm_r_2",0},{"rpm_l_1",0},{"rpm_l_2",0},{"speed_r",0},{"speed_r_negative",0},{"speed_l",0},{"speed_l_negative",0},{"torque_r_1",0},{"torque_r_2",0},{"torque_l_1",0},{"torque_l_2",0},{"vertspeed_r",0},{"vertspeed_l",0},{"fuel_r_1",1},{"fuel_r_2",1},{"fuel_l_1",1},{"fuel_l_2",1},{"gear_up",0},{"gear_down",0},{"minigun",0},{"rightdoorturret",0},{"rightdoorgun",0},{"minigun2",0},{"hidewinch",0},{"hideminiguns",1},{"hmg_muzzleflashrot",0},{"hmg_muzzleflashrot2",0},{"gunner_1_rot1",0},{"gunner_1_rot2",0},{"gunner_1_aimdown1",0},{"gunner_1_leftside_tilt1",0},{"gunner_1_leftside_tilt2",0},{"gunner_1_leftside_tilt3",0},{"gunner_1_leftside_tilt4",0},{"gunner_1_leftside_tilt4a",0},{"gunner_1_leftside_tilt5",0},{"gunner_1_leftside_tilt5a",0},{"gunner_1_leftside_tilt6",0},{"gunner_1_leftside_hand_l",0},{"gunner_1_leftside_hand_r",0},{"gunner_1_rightside_tilt1",0},{"gunner_1_rightside_tilt2",0},{"gunner_1_rightside_tilt3",0},{"gunner_1_rightside_tilt4",0},{"gunner_1_rightside_tilt4a",0},{"gunner_1_rightside_tilt5",0},{"gunner_1_rightside_tilt5a",0},{"gunner_1_rightside_tilt6",0},{"gunner_1_rightside_hand_l",0},{"gunner_1_rightside_hand_r",0},{"gunner_1_translation1",0},{"gunner_1_translationhands1",0},{"gunner_1_translationhandl2",0},{"gunner_2_rot1",0},{"gunner_2_rot2",0},{"gunner_2_aimdown1",0},{"gunner_2_leftside_tilt1",0},{"gunner_2_leftside_tilt2",0},{"gunner_2_leftside_tilt3",0},{"gunner_2_leftside_tilt4",0},{"gunner_2_leftside_tilt4a",0},{"gunner_2_leftside_tilt5",0},{"gunner_2_leftside_tilt5a",0},{"gunner_2_leftside_tilt6",0},{"gunner_2_leftside_hand_l",0},{"gunner_2_leftside_hand_r",0},{"gunner_2_rightside_tilt1",0},{"gunner_2_rightside_tilt2",0},{"gunner_2_rightside_tilt3",0},{"gunner_2_rightside_tilt4",0},{"gunner_2_rightside_tilt4a",0},{"gunner_2_rightside_tilt5",0},{"gunner_2_rightside_tilt5a",0},{"gunner_2_rightside_tilt6",0},{"gunner_2_rightside_hand_l",0},{"gunner_2_rightside_hand_r",0},{"wheels_front_r",0},{"wheels_front_l",0},{"wheels_rear_r",0},{"wheels_rear_l",0},{"positionlights",0},{"collisionlight",0},{"collective_pilot",0},{"stick_pilot_dive_01",0},{"stick_pilot_dive_02",0},{"stick_pilot_dive_03",0},{"stick_pilot_dive_04",0},{"stick_pilot_dive_05",0},{"stick_pilot_bank_01",0},{"stick_pilot_bank_02",0},{"stick_pilot_bank_03",0},{"stick_pilot_bank_04",0},{"stick_pilot_bank_05",0},{"stick_copilot_dive01",0},{"stick_copilot_dive02",0},{"stick_copilot_dive03",0},{"stick_copilot_dive04",0},{"stick_copilot_dive05",0},{"stick_copilot_bank01",0},{"stick_copilot_bank02",0},{"stick_copilot_bank03",0},{"stick_copilot_bank04",0},{"stick_copilot_bank05",0},{"pedals_right",0},{"pedals_left",0}};
			hide[] = {"clan","zasleh","light_l_hide","light_r_hide","main_rotor_2_blur","main_rotor_1_blur","zadni svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 3.325;
			verticalOffsetWorld = -0.02;
			postinit = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_unarmed_F.jpg";
		_generalMacro = "B_Heli_Transport_03_unarmed_F";
		crew = "B_helipilot_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		side = 1;
		faction = "BLU_F";
		scope = 2;
		DLC = "Heli";
		textureList[] = {"Black",1};
	};
	class B_Heli_Transport_03_black_F: B_Heli_Transport_03_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"mainrotor1",0},{"mainrotor2",0},{"mainrotor1_bend",0},{"mainrotor2_bend",0},{"mainrotor1_hide",0},{"mainrotor1_hide2",0},{"mainrotor2_hide",0},{"mainrotor2_hide2",0},{"damagedrotor1show",0},{"damagedrotor2show",0},{"gear_fl",0},{"gear_fr",0},{"gear_rl",0},{"gear_rl_piston",0},{"gear_rr",0},{"gear_rr_piston",0},{"damper_fl",-0.15},{"damper_fr",-0.15},{"damper_rl",-0.15},{"damper_rr",-0.15},{"door_rt",0},{"door_rb",0},{"door_lt",0},{"door_lb",0},{"door_rear",0},{"door_rear_hide",0},{"display_on",0},{"pitch_r",0.02},{"pitch_l",0.02},{"bank_r",0},{"bank_l",0},{"altitude_large",-0.15},{"altitude_small",-0.15},{"altitude_thousands",-0.15},{"compass_r",0},{"compass_l",0},{"compass_middle",0},{"compass_display_r",0},{"compass_display_l",0},{"rpm_r_1",0},{"rpm_r_2",0},{"rpm_l_1",0},{"rpm_l_2",0},{"speed_r",0},{"speed_r_negative",0},{"speed_l",0},{"speed_l_negative",0},{"torque_r_1",0},{"torque_r_2",0},{"torque_l_1",0},{"torque_l_2",0},{"vertspeed_r",0},{"vertspeed_l",0},{"fuel_r_1",1},{"fuel_r_2",1},{"fuel_l_1",1},{"fuel_l_2",1},{"gear_up",0},{"gear_down",0},{"mainturret",1.57},{"maingun",-0.26},{"minigun",0.33},{"rightdoorturret",-1.57},{"rightdoorgun",-0.26},{"minigun2",0.33},{"hidewinch",0},{"hideminiguns",0},{"hmg_muzzleflashrot",89},{"hmg_muzzleflashrot2",705},{"gunner_1_rot1",1.57},{"gunner_1_rot2",1.57},{"gunner_1_aimdown1",-0.26},{"gunner_1_leftside_tilt1",1.57},{"gunner_1_leftside_tilt2",1.57},{"gunner_1_leftside_tilt3",1.57},{"gunner_1_leftside_tilt4",1.57},{"gunner_1_leftside_tilt4a",1.57},{"gunner_1_leftside_tilt5",1.57},{"gunner_1_leftside_tilt5a",1.57},{"gunner_1_leftside_tilt6",1.57},{"gunner_1_leftside_hand_l",1.57},{"gunner_1_leftside_hand_r",1.57},{"gunner_1_rightside_tilt1",1.57},{"gunner_1_rightside_tilt2",1.57},{"gunner_1_rightside_tilt3",1.57},{"gunner_1_rightside_tilt4",1.57},{"gunner_1_rightside_tilt4a",1.57},{"gunner_1_rightside_tilt5",1.57},{"gunner_1_rightside_tilt5a",1.57},{"gunner_1_rightside_tilt6",1.57},{"gunner_1_rightside_hand_l",1.57},{"gunner_1_rightside_hand_r",1.57},{"gunner_1_translation1",1.57},{"gunner_1_translationhands1",1.57},{"gunner_1_translationhandl2",1.57},{"gunner_2_rot1",-1.57},{"gunner_2_rot2",-1.57},{"gunner_2_aimdown1",-0.26},{"gunner_2_leftside_tilt1",-1.57},{"gunner_2_leftside_tilt2",-1.57},{"gunner_2_leftside_tilt3",-1.57},{"gunner_2_leftside_tilt4",-1.57},{"gunner_2_leftside_tilt4a",-1.57},{"gunner_2_leftside_tilt5",-1.57},{"gunner_2_leftside_tilt5a",-1.57},{"gunner_2_leftside_tilt6",-1.57},{"gunner_2_leftside_hand_l",-1.57},{"gunner_2_leftside_hand_r",-1.57},{"gunner_2_rightside_tilt1",-1.57},{"gunner_2_rightside_tilt2",-1.57},{"gunner_2_rightside_tilt3",-1.57},{"gunner_2_rightside_tilt4",-1.57},{"gunner_2_rightside_tilt4a",-1.57},{"gunner_2_rightside_tilt5",-1.57},{"gunner_2_rightside_tilt5a",-1.57},{"gunner_2_rightside_tilt6",-1.57},{"gunner_2_rightside_hand_l",-1.57},{"gunner_2_rightside_hand_r",-1.57},{"wheels_front_r",0},{"wheels_front_l",0},{"wheels_rear_r",0},{"wheels_rear_l",0},{"positionlights",0},{"collisionlight",0},{"collective_pilot",0},{"stick_pilot_dive_01",0},{"stick_pilot_dive_02",0},{"stick_pilot_dive_03",0},{"stick_pilot_dive_04",0},{"stick_pilot_dive_05",0},{"stick_pilot_bank_01",0},{"stick_pilot_bank_02",0},{"stick_pilot_bank_03",0},{"stick_pilot_bank_04",0},{"stick_pilot_bank_05",0},{"stick_copilot_dive01",0},{"stick_copilot_dive02",0},{"stick_copilot_dive03",0},{"stick_copilot_dive04",0},{"stick_copilot_dive05",0},{"stick_copilot_bank01",0},{"stick_copilot_bank02",0},{"stick_copilot_bank03",0},{"stick_copilot_bank04",0},{"stick_copilot_bank05",0},{"pedals_right",0},{"pedals_left",0}};
			hide[] = {"clan","zasleh","zasleh_1","light_l_hide","light_r_hide","main_rotor_2_blur","main_rotor_1_blur","zadni svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 3.324;
			verticalOffsetWorld = -0.02;
			init = "''";
		};
		_generalMacro = "B_Heli_Transport_03_black_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_B_Heli_Transport_03_black_F0";
		DLC = "Heli";
		textureList[] = {"Black",1};
	};
	class B_Heli_Transport_03_unarmed_green_F: B_Heli_Transport_03_unarmed_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"mainrotor1",0},{"mainrotor2",0},{"mainrotor1_bend",0},{"mainrotor2_bend",0},{"mainrotor1_hide",0},{"mainrotor1_hide2",0},{"mainrotor2_hide",0},{"mainrotor2_hide2",0},{"damagedrotor1show",0},{"damagedrotor2show",0},{"gear_fl",0},{"gear_fr",0},{"gear_rl",0},{"gear_rl_piston",0},{"gear_rr",0},{"gear_rr_piston",0},{"damper_fl",-0.15},{"damper_fr",-0.15},{"damper_rl",-0.15},{"damper_rr",-0.15},{"door_rt",0},{"door_rb",0},{"door_lt",0},{"door_lb",0},{"door_rear",0},{"door_rear_hide",0},{"display_on",0},{"pitch_r",0.02},{"pitch_l",0.02},{"bank_r",0},{"bank_l",0},{"altitude_large",-0.15},{"altitude_small",-0.15},{"altitude_thousands",-0.15},{"compass_r",0},{"compass_l",0},{"compass_middle",0},{"compass_display_r",0},{"compass_display_l",0},{"rpm_r_1",0},{"rpm_r_2",0},{"rpm_l_1",0},{"rpm_l_2",0},{"speed_r",0},{"speed_r_negative",0},{"speed_l",0},{"speed_l_negative",0},{"torque_r_1",0},{"torque_r_2",0},{"torque_l_1",0},{"torque_l_2",0},{"vertspeed_r",0},{"vertspeed_l",0},{"fuel_r_1",1},{"fuel_r_2",1},{"fuel_l_1",1},{"fuel_l_2",1},{"gear_up",0},{"gear_down",0},{"minigun",0},{"rightdoorturret",0},{"rightdoorgun",0},{"minigun2",0},{"hidewinch",0},{"hideminiguns",1},{"hmg_muzzleflashrot",0},{"hmg_muzzleflashrot2",0},{"gunner_1_rot1",0},{"gunner_1_rot2",0},{"gunner_1_aimdown1",0},{"gunner_1_leftside_tilt1",0},{"gunner_1_leftside_tilt2",0},{"gunner_1_leftside_tilt3",0},{"gunner_1_leftside_tilt4",0},{"gunner_1_leftside_tilt4a",0},{"gunner_1_leftside_tilt5",0},{"gunner_1_leftside_tilt5a",0},{"gunner_1_leftside_tilt6",0},{"gunner_1_leftside_hand_l",0},{"gunner_1_leftside_hand_r",0},{"gunner_1_rightside_tilt1",0},{"gunner_1_rightside_tilt2",0},{"gunner_1_rightside_tilt3",0},{"gunner_1_rightside_tilt4",0},{"gunner_1_rightside_tilt4a",0},{"gunner_1_rightside_tilt5",0},{"gunner_1_rightside_tilt5a",0},{"gunner_1_rightside_tilt6",0},{"gunner_1_rightside_hand_l",0},{"gunner_1_rightside_hand_r",0},{"gunner_1_translation1",0},{"gunner_1_translationhands1",0},{"gunner_1_translationhandl2",0},{"gunner_2_rot1",0},{"gunner_2_rot2",0},{"gunner_2_aimdown1",0},{"gunner_2_leftside_tilt1",0},{"gunner_2_leftside_tilt2",0},{"gunner_2_leftside_tilt3",0},{"gunner_2_leftside_tilt4",0},{"gunner_2_leftside_tilt4a",0},{"gunner_2_leftside_tilt5",0},{"gunner_2_leftside_tilt5a",0},{"gunner_2_leftside_tilt6",0},{"gunner_2_leftside_hand_l",0},{"gunner_2_leftside_hand_r",0},{"gunner_2_rightside_tilt1",0},{"gunner_2_rightside_tilt2",0},{"gunner_2_rightside_tilt3",0},{"gunner_2_rightside_tilt4",0},{"gunner_2_rightside_tilt4a",0},{"gunner_2_rightside_tilt5",0},{"gunner_2_rightside_tilt5a",0},{"gunner_2_rightside_tilt6",0},{"gunner_2_rightside_hand_l",0},{"gunner_2_rightside_hand_r",0},{"wheels_front_r",0},{"wheels_front_l",0},{"wheels_rear_r",0},{"wheels_rear_l",0},{"positionlights",0},{"collisionlight",0},{"collective_pilot",0},{"stick_pilot_dive_01",0},{"stick_pilot_dive_02",0},{"stick_pilot_dive_03",0},{"stick_pilot_dive_04",0},{"stick_pilot_dive_05",0},{"stick_pilot_bank_01",0},{"stick_pilot_bank_02",0},{"stick_pilot_bank_03",0},{"stick_pilot_bank_04",0},{"stick_pilot_bank_05",0},{"stick_copilot_dive01",0},{"stick_copilot_dive02",0},{"stick_copilot_dive03",0},{"stick_copilot_dive04",0},{"stick_copilot_dive05",0},{"stick_copilot_bank01",0},{"stick_copilot_bank02",0},{"stick_copilot_bank03",0},{"stick_copilot_bank04",0},{"stick_copilot_bank05",0},{"pedals_right",0},{"pedals_left",0}};
			hide[] = {"clan","zasleh","light_l_hide","light_r_hide","main_rotor_2_blur","main_rotor_1_blur","zadni svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 3.325;
			verticalOffsetWorld = -0.02;
			postinit = "[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro = "B_Heli_Transport_03_unarmed_green_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_B_Heli_Transport_03_unarmed_green_F0";
		DLC = "Heli";
		textureList[] = {"Green",1};
	};
	class B_Heli_Transport_03_base_F: Heli_Transport_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "B_Heli_Transport_03_base_F";
		deprecated = 1;
	};
	class B_Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "B_Heli_Transport_03_unarmed_base_F";
		deprecated = 1;
	};
};
