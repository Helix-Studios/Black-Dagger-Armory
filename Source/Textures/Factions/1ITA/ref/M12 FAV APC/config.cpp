class CfgPatches
{
	class OPTRE_Vehicles_Warthog {
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Vehicles"
		};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
		class EventHandlers;
	};
	class OPTRE_M12_Base: Car_F
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=1;
		displayName="$STR_OPTRE_Vehicles_Warthog_FAV_displayName";
		class Library
		{
			libTextDesc="$STR_OPTRE_Vehicles_Warthog_Library";
		};
		model="\OPTRE_Vehicles\Warthog\M12_MAAV.p3d";
		faction="OPTRE_UNSC";
		side=1;
		crew="OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		picture="OPTRE_Vehicles\Warthog\Data\picture.paa";
		Icon="OPTRE_Vehicles\Warthog\Data\icon.paa";
		armor=200;
		camouflage=4;
		canFloat=0;
		cargoAction[]=
		{
			"passenger_inside_2"
		};
		cargoDoors[]={};
		cargoGetInAction[]=
		{
			"GetInMRAP_01_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutMRAP_01"
		};
		commanderCanSee=31;
		cost=500000;
		crewVulnerable=1;
		crewCrashProtection=0;
		crewExplosionProtection=0.5;
		destrType="DestructWreck";
		driverAction="OPTRE_Warthog_Driver";
		driverDoor="";
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		enableGPS=1;
		epeImpulseDamageCoef=10;
		fuelExplosionPower=2;
		getInAction="GetInMRAP_01";
		getOutAction="GetOutMRAP_01";
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		maxFordingDepth=0.94999999;
		magazines[]={};
		mapSize=4;
		precision=15;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		threat[]={0.80000001,0.60000002,0.30000001};
		transportMaxBackpacks=5;
		transportSoldier=0;
		vehicleClass="OPTRE_UNSC_Vehicle_class";
		weapons[]=
		{
			"TruckHorn2"
		};
		enableRadio=1;
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				armor=6;
				explosionShielding=1.5;
				material=-1;
				minimalHit=0.0099999998;
				name="karoserie";
				passThrough=1;
				radius=0.44999999;
				visual="-";
			};
			class HitLFWheel: HitLFWheel
			{
				armor=2.2;
				material=-1;
				name="wheel_1_1_steering";
				visual="-";
				passThrough=0.30000001;
				explosionShielding=4;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=2.2;
				material=-1;
				name="wheel_1_2_steering";
				visual="-";
				passThrough=0.30000001;
				explosionShielding=4;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=2.2;
				material=-1;
				name="wheel_2_1_steering";
				visual="-";
				passThrough=0.30000001;
				explosionShielding=4;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=2.2;
				material=-1;
				name="wheel_2_2_steering";
				visual="-";
				passThrough=0.30000001;
				explosionShielding=4;
			};
			class HitLF2Wheel: HitLBWheel
			{
			};
			class HitRF2Wheel: HitRBWheel
			{
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class CargoTurret_02: CargoGunner_1
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="Left Rear Passenger";
				memoryPointsGetInGunner="pos pas1";
				memoryPointsGetInGunnerDir="pos pas1 dir";
				gunnerCompartments="Compartment3";
				proxyIndex=2;
				isPersonTurret=2;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="cargo_rear1";
				enabledByAnimationSource="";
				forceHideGunner=0;
				canHideGunner=1;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="Right Rear Passenger";
				memoryPointsGetInGunner="pos pas2";
				memoryPointsGetInGunnerDir="pos pas2 dir";
				gunnerCompartments="Compartment3";
				proxyIndex=3;
				isPersonTurret=2;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="cargo_rear2";
				forceHideGunner=0;
				canHideGunner=1;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL
			{
				ambient[]={5,5,5};
				color[]={1900,1800,1700};
				coneFadeCoef=10;
				dayLight=0;
				direction="light_l_end";
				flareSize=1;
				hitpoint="light_l";
				innerAngle=30;
				intensity=50;
				outerAngle=179;
				position="light_l";
				selection="light_l";
				size=1;
				useFlare=0;
				class Attenuation
				{
					constant=0;
					hardLimitEnd=75;
					hardLimitStart=40;
					linear=0;
					quadratic=0.25;
					start=1;
				};
			};
			class LightCarHeadL01: LightCarHeadL
			{
				position="light_l_flare";
				useFlare=1;
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="light_l2_flare";
				hitpoint="light_l2";
				flareSize=0.5;
			};
			class LightCarHeadL03: LightCarHeadL01
			{
				position="light_l3_flare";
				selection="light_l3_flare";
			};
			class LightCarHeadR: LightCarHeadL
			{
				direction="light_r_end";
				hitpoint="light_r";
				position="light_r";
				selection="light_r";
			};
			class LightCarHeadR01: LightCarHeadR
			{
				position="light_r_flare";
				useFlare=1;
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="light_r2_flare";
				hitpoint="light_r2";
				flareSize=0.5;
			};
			class LightCarHeadR03: LightCarHeadR01
			{
				position="light_r3_flare";
				selection="light_r3_flare";
			};
			class LightCarRearL01: LightCarHeadL
			{
				color[]={200,0,0};
				direction="rearlight_l_end";
				position="rearlight_l_flare";
				selection="rearlight_l";
				hitpoint="rearlight_l";
				flareSize=0.80000001;
				useFlare=1;
				intensity=2;
				class Attenuation
				{
					constant=0;
					hardLimitEnd=0;
					hardLimitStart=0;
					linear=0;
					quadratic=0;
					start=0;
				};
			};
			class LightCarRearR01: LightCarRearL01
			{
				direction="rearlight_r_end";
				position="rearlight_r_flare";
				selection="rearlight_r";
				hitpoint="rearlight_r";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL",
				"LightCarHeadL01",
				"LightCarHeadL02",
				"LightCarHeadR",
				"LightCarHeadR01",
				"LightCarHeadR02",
				"LightCarHeadL03",
				"LightCarHeadR03",
				"LightCarRearL01",
				"LightCarRearR01"
			}
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=4;
			};
		};
		class TransportWeapons
		{
		};
		class UserActions
		{
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Warthog";
				displayName="Press SPACEBAR to Flip Warthog";
				position="";
				radius=6;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 4]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
			class colorgold
			{
				displayName="Gold";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_ylw_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
			class colorstripe
			{
				displayName="Striped";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_ylwBlk_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
			class colorblue
			{
				displayName="Blue";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_blue_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
			class colorgrey
			{
				displayName="Grey";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_gry_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
			class colorred
			{
				displayName="Red";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_red_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		class AnimationSources
		{
			class showDoors
			{
				displayName="Attach Armored Doors";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=200;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
		terrainCoef=0.30000001;
		turnCoef=4.5;
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=125;
		fuelCapacity=150;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		idleRpm=800;
		redRpm=4500;
		slowSpeedForwardCoef=0.34999999;
		normalSpeedForwardCoef=0.64999998;
		waterLeakiness=5;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-6,
				"N",
				0,
				"D1",
				7.5,
				"D2",
				3.75,
				"D3",
				2.4000001,
				"D4",
				1.53,
				"D5",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=3;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=1;
		rearBias=1;
		centreBias=1;
		clutchStrength=20;
		enginePower=537;
		maxOmega=330;
		peakTorque=1500;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.1,0.69999999},
			{0.2,0.89999998},
			{0.34999999,0.95499998},
			{0.5,1},
			{0.60000002,1},
			{0.69999999,0.95499998},
			{0.80000001,0.89999998},
			{1,0.60000002}
		};
		changeGearMinEffectivity[]={0.94999999,0,0.85000002,0.85000002,0.85000002,0.85000002,0.85000002};
		switchTime=0.25;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="L_F_Wheel_Axis";
				boundary="L_F_Wheel_Bound";
				mass=150;
				MOI=40;
				dampingRate=0.5;
				maxBrakeTorque=7700;
				maxHandBrakeTorque=9700;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="L_F_Wheel_Axis";
				tireForceAppPointOffset="L_F_Wheel_Axis";
				maxCompression=0.5;
				maxDroop=0.5;
				sprungMass=750;
				springStrength=75000;
				springDamperRate=7500;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				center="L_R_Wheel_Axis";
				boundary="L_R_Wheel_Bound";
				suspForceAppPointOffset="L_R_Wheel_Axis";
				tireForceAppPointOffset="L_R_Wheel_Axis";
				side="left";
				steering=0;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="R_F_Wheel_Axis";
				boundary="R_F_Wheel_Bound";
				suspForceAppPointOffset="R_F_Wheel_Axis";
				tireForceAppPointOffset="R_F_Wheel_Axis";
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				center="R_R_Wheel_Axis";
				boundary="R_R_Wheel_Bound";
				suspForceAppPointOffset="R_R_Wheel_Axis";
				tireForceAppPointOffset="R_R_Wheel_Axis";
				steering=0;
			};
		};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_MRAP_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_MRAP_p"
				};
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		nameSound="car";
		soundAttenuationCargo[]={1,0};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\getin",
			0.56234127,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_01\getout",
			0.56234127,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234127,
			1
		};
		soundEngineOnExt[]=
		{
			"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_start.ogg",
			6.3095698,
			1,
			100
		};
		soundEngineOnInt[]=
		{
			"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_start.ogg",
			0.56234097,
			1
		};
		soundEngineOffExt[]=
		{
			"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_stop.ogg",
			6.3095698,
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_stop.ogg",
			0.56234097,
			1
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_idle.ogg",
					0.3981072,
					1,
					150
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",
					0.45668361,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",
					0.56234127,
					1,
					300
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",
					0.71794581,
					1,
					350
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",
					1.2,
					1,
					400
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_exhaust_idle.ogg",
					0.55234128,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",
					0.71794581,
					1,
					350
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",
					0.9012509,
					1,
					400
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",
					1.222018,
					1,
					425
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",
					1.268925,
					1,
					450
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_idle.ogg",
					0.25118861,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",
					0.32622781,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",
					0.3981072,
					1
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",
					0.5111872,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",
					0.64095742,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_idle.ogg",
					0.3548134,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",
					0.45668361,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",
					0.56234127,
					1
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",
					0.71794581,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",
					0.8043282,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125381,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.4125381,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1.258925,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1.122018,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.258925,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1.122018,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.122018,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794582,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.56234127,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794582,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794582,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794582,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794582,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794582,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794582,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794582,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794582,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622779,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Siren_int
			{
				sound[]=
				{
					"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Int_Loop",
					0.3981072,
					1
				};
				frequency=1;
				volume="1  * 1 * CustomSoundController1";
			};
			class Siren_ext
			{
				sound[]=
				{
					"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Ext_Loop",
					0.56234127,
					1,
					550
				};
				frequency=1;
				volume="1  * 0.7 * CustomSoundController1";
			};
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class GunnerCam2
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.75;
				};
			};
			class GunnerCam3
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
	};
	class OPTRE_M12A1_LRV: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12A1_LRV.jpg";
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_ATGM_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_ATGM.p3d";
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-15;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				ejectDeadGunner=1;
				hideWeaponsGunner=0;
				stabilizedInAxes=3;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="usti hlavne";
				weapons[]=
				{
					"OPTRE_102R_Turret"
				};
				magazines[]=
				{
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerForceOptics=0;
				hasGunner=1;
				class ViewGunner: ViewOptics
				{
					initFov=0.75;
					minFov=0.375;
					maxFov=1.1;
				};
			};
		};
		class AnimationSources
		{
			class showDoors
			{
				displayName="Attach Armored Doors";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=200;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret",
			"camo_turret_decals",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
	};
	class OPTRE_M12_FAV_APC: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_APC_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_APC.p3d";
		transportSoldier=5;
		cargoAction[]=
		{
			"passenger_generic01_foldhands"
		};
		class Turrets: Turrets
		{
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa", //transport variant
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa", //APC box variant
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa", //decals
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa", //int
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
		};
	};
	class OPTRE_M12_FAV_APC_MED: OPTRE_M12_FAV_APC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC_MED.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_Medical_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_MED.p3d";
		transportSoldier=3;
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"Patient_Van_02_Medevac_Back",
			"Patient_Van_02_Medevac_Back"
		};
		class AnimationSources
		{
		};
		class Turrets: Turrets
		{
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net",
			"camo_medical"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
		};
	};
	class OPTRE_M914_RV: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M914_RV.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_Repair_displayName";
		transportRepair=200000000;
		ace_repair_canRepair=1;
		author="Article 2 Studios";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_REP.p3d";
		transportSoldier=0;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_net",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
	};
	class OPTRE_M12G1_LRV: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12G1_LRV.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_Gauss_displayName";
		author="Article 2 Studios";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_G.p3d";
		transportSoldier=0;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-15;
				maxElev=15;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				ejectDeadGunner=1;
				hideWeaponsGunner=0;
				stabilizedInAxes=3;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="usti hlavne";
				weapons[]=
				{
					"OPTRE_M68_GAUSS"
				};
				magazines[]=
				{
					"OPTRE_15Rnd_ALIM_Gauss_Slugs",
					"OPTRE_15Rnd_ALIM_Gauss_Slugs",
					"OPTRE_15Rnd_ALIM_Gauss_Slugs",
					"OPTRE_15Rnd_ALIM_Gauss_Slugs"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor=1;
				turretInfoType="OPTRE_RscOptics_Static_Turret_Gunner";
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1800,2100,2400,2700,3000,3500,4000,4500,5000};
				discreteDistanceInitIndex=0;
				class Viewoptics: ViewOptics
				{
					minFov=0.025;
					opticsZoomMin=0.025;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					initFov=0.85000002;
					maxFov=0.89999998;
				};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerForceOptics=0;
				class ViewGunner: Viewoptics
				{
					initFov=0.75;
					minFov=0.375;
					maxFov=1.1;
				};
			};
		};
		class AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="OPTRE_M68_GAUSS";
			};
			class Gatling_flash
			{
				source="reload";
				weapon="OPTRE_M68_GAUSS";
			};
			class showDoors
			{
				displayName="Attach Armored Doors";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=200;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m68_turret_woodland_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m68_turret_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m68_turret_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
	};
	class OPTRE_M12R_AA: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12R_AA.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_AA_displayName";
		author="Article 2 Studios";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_AA.p3d";
		transportSoldier=0;
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_4";
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				gunAxis="Osa Hlavne";
				minElev=-15;
				maxElev=45;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				ejectDeadGunner=1;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				stabilizedInAxes=3;
				weapons[]=
				{
					"OPTRE_M79_MLRS"
				};
				magazines[]=
				{
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunneroutOptics="gunnerview";
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				hasGunner=1;
				class Viewoptics: ViewOptics
				{
					opticsZoomMin=0.25;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6};
				};
				startEngine=0;
				enableManualFire=0;
				gunnerForceOptics=0;
				class ViewGunner: Viewoptics
				{
					initFov=0.75;
					minFov=0.375;
					maxFov=1.1;
				};
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m79_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m79_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins2_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins3_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m79_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M79_MLRS";
			};
			class Missiles_reloading: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class missiles_alternating
			{
				source="ammo";
				weapon="OPTRE_M79_MLRS";
			};
			class showDoors
			{
				displayName="Attach Armored Doors";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=200;
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class OPTRE_M813_TT: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M813_TT.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_OPTRE_Vehicles_Warthog_TT_displayName";
		author="Article 2 Studios";
		class AnimationSources
		{
		};
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_TT.p3d";
		transportSoldier=0;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class CargoGunner_02: CargoGunner_1
			{
				gunnerAction="passenger_bench_1";
				gunnerInAction="passenger_bench_1";
				gunnerName="Right Passenger (Rear)";
				memoryPointsGetInGunner="pos pasrr";
				memoryPointsGetInGunnerDir="pos pasrr dir";
				proxyIndex=4;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
				inGunnerMayFire=1;
			};
			class CargoGunner_03: CargoGunner_02
			{
				gunnerAction="passenger_bench_1";
				gunnerInAction="passenger_bench_1";
				gunnerName="Left Passenger (Rear)";
				memoryPointsGetInGunner="pos paslr";
				memoryPointsGetInGunnerDir="pos paslr dir";
				proxyIndex=5;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
			};
			class CargoGunner_04: CargoGunner_02
			{
				gunnerAction="passenger_inside_2";
				gunnerInAction="passenger_inside_2";
				gunnerName="Right Passenger (Middle)";
				memoryPointsGetInGunner="pos pasrm";
				memoryPointsGetInGunnerDir="pos pasrm dir";
				proxyIndex=6;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
			};
			class CargoGunner_05: CargoGunner_02
			{
				gunnerAction="passenger_inside_2";
				gunnerInAction="passenger_inside_2";
				gunnerName="Left Passenger (Middle)";
				memoryPointsGetInGunner="pos paslm";
				memoryPointsGetInGunnerDir="pos paslm dir";
				proxyIndex=7;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
			};
			class CargoGunner_06: CargoGunner_02
			{
				gunnerAction="passenger_inside_2";
				gunnerInAction="passenger_inside_2";
				gunnerName="Right Passenger (Front)";
				memoryPointsGetInGunner="pos pasrf";
				memoryPointsGetInGunnerDir="pos pasrf dir";
				proxyIndex=8;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
			};
			class CargoGunner_07: CargoGunner_02
			{
				gunnerAction="passenger_inside_2";
				gunnerInAction="passenger_inside_2";
				gunnerName="Left Passenger (Front)";
				memoryPointsGetInGunner="pos paslf";
				memoryPointsGetInGunnerDir="pos paslf dir";
				proxyIndex=9;
				gunnerCompartments="Compartment2";
				canHideGunner=0;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_net",
			"camo_transport_decal"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
	class OPTRE_M12_LRV: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_LRV.jpg";
		scope=2;
		scopeCurator=2;
		author="Article 2 Studios";
		displayName="$STR_OPTRE_Vehicles_Warthog_MG_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_MG.p3d";
		transportSoldier=0;
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=1;
				minElev=-15;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="machinegun";
				weapons[]=
				{
					"OPTRE_M41_LAAG"
				};
				magazines[]=
				{
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=1;
				hasGunner=1;
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				class ViewOptics: ViewOptics
				{
					initFov=0.89999998;
					maxFov=0.89999998;
					minFov=0.07;
				};
			};
		};
		class AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="OPTRE_M41_LAAG";
			};
			class Gatling_flash
			{
				source="reload";
				weapon="OPTRE_M41_LAAG";
			};
			class showDoors
			{
				displayName="Attach Armored Doors";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=200;
			};
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
					"\OPTRE_Vehicles\warthog\data\night\hog_apc_night_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\woodland\M12HogMaav_interior_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\sand\M12HogMaav_interior_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins2_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret_decal",
			"camo_sight",
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
	};
	class OPTRE_M12_FAV: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV.jpg";
		scope=2;
		scopeCurator=2;
	};
	class OPTRE_M12_FAV_ins: OPTRE_M12_FAV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_ins.jpg";
		displayName="M12-FAV [Ins]";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
	};
	class OPTRE_M12_LRV_ins: OPTRE_M12_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_LRV_ins.jpg";
		displayName="M12 LRV (MG) [Ins]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret_decal",
			"camo_sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_BR";
		faction="OPTRE_Ins";
	};
	class OPTRE_M12A1_LRV_ins: OPTRE_M12A1_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12A1_LRV_ins.jpg";
		displayName="M12A1 LRV (Rocket) [Ins]";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
	};
	class OPTRE_M12R_AA_ins: OPTRE_M12R_AA
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12R_AA_ins.jpg";
		displayName="M12R (AA) [Ins]";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\ins\m79_turret_ins3_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
	};
	class OPTRE_M914_RV_ins: OPTRE_M914_RV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M914_RV_ins.jpg";
		displayName="M914 Repair Hog [Ins]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
	};
	class OPTRE_M12_ins_APC: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_ins_APC.jpg";
		scope=2;
		scopeCurator=2;
		displayName="M12 APC (Ins)";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_APC.p3d";
		transportSoldier=8;
		cargoAction[]=
		{
			"passenger_generic01_foldhands"
		};
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
		class AnimationSources
		{
		};
		class textureSources
		{
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=9;
				proxyType="CPCargo";
				showAsCargo=1;
				forceHideGunner=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class CargoTurret_02: CargoGunner_1
			{
				class TurnIn
				{
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
				};
				gunnerAction="vehicle_turnout_2";
				gunnerInAction="passenger_inside_7";
				canHideGunner=1;
				forceHideGunner=0;
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=1;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				animationSourceHatch="gunner_move";
				enabledByAnimationSource="gunner_prox_rot";
				gunnerForceOptics=0;
				memoryPointGunnerOptics="";
				selectionFireAnim="";
				commanding=-1;
				gunnerType="OPTRE_Ins_URF_Autorifleman";
				gunnerName="Top Gunner";
				memoryPointsGetInGunner="pos pas1";
				memoryPointsGetInGunnerDir="pos pas1 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=10;
				showAsCargo=1;
				primaryGunner=0;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_rollcage"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
	};
	class OPTRE_M12_ins_MED: OPTRE_M12_ins_APC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_ins_MED.jpg";
		displayName="M12 Medical APC (Ins)";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_MED.p3d";
		transportSoldier=2;
		cargoAction[]=
		{
			"Patient_Van_02_Medevac_Back"
		};
		class AnimationSources
		{
		};
		class textureSources
		{
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical\lz_lopo_co.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical\lz_lopo_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical\lz_lopo_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\medical\lz_lopo_co.paa"
				};
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_rollcage",
			"camo_medical",
			"camo_medical_logo"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\medical\lz_lopo_co.paa"
		};
		textureList[]=
		{
			"Sand",
			1,
			"Guerrilla",
			1,
			"Green",
			1,
			"Innie",
			1
		};
	};
	class OPTRE_M12_TD_ins: OPTRE_M12_Base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_TD_ins.jpg";
		scope=2;
		scopeCurator=2;
		displayName="M12 TD [Ins]";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_TD.p3d";
		class AnimationSources
		{
		};
		transportSoldier=1;
		cargoAction[]=
		{
			"passenger_generic01_foldhands"
		};
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
			class CMA
			{
				displayName="CMA";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
				};
				factions[]=
				{
					"OPTRE_CAA"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=1;
				minElev=-7;
				maxElev=12;
				minTurn=-45;
				maxTurn=45;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="usti hlavne";
				weapons[]=
				{
					"OPTRE_75mm_M75",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_4Rnd_75mm_HE",
					"OPTRE_4Rnd_75mm_HE",
					"OPTRE_4Rnd_75mm_AP",
					"OPTRE_4Rnd_75mm_AP",
					"OPTRE_4Rnd_75mm_AP",
					"OPTRE_4Rnd_75mm_AP",
					"Laserbatteries"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerForceOptics=1;
				hasGunner=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"camo_details",
			"camo_interior",
			"camo_console"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
		};
	};
	class OPTRE_M12_VBIED: OPTRE_M12_FAV_ins
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_VBIED.jpg";
		displayName="M12-FAV (VBIED)";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_IED.p3d";
		memoryPointLRocket="bomb";
		memoryPointRRocket="bomb";
		memoryPointGun="bomb";
		class AnimationSources
		{
		};
		weapons[]=
		{
			"OPTRE_bomblauncher_VBIED_Med"
		};
		magazines[]=
		{
			"OPTRE_1Rnd_VBIED_Med"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
		};
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
		};
	};
	class OPTRE_M12_VBIED_Big: OPTRE_M12_VBIED
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_VBIED_Big.jpg";
		displayName="M12-APC (VBIED)";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_APC_IED.p3d";
		class AnimationSources
		{
		};
		weapons[]=
		{
			"OPTRE_bomblauncher_VBIED_Big"
		};
		magazines[]=
		{
			"OPTRE_1Rnd_VBIED_Big"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_transport",
			"camo_rollcage"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
		};
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\indapc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\apc_ind_det1_lopo_co.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=9;
				proxyType="CPCargo";
				showAsCargo=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=0;
				isPersonTurret=2;
				forceHideGunner=0;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			delete CargoTurret_02;
			delete CargoTurret_03;
		};
	};
	class OPTRE_M12_FAV_PD: OPTRE_M12_FAV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_PD.jpg";
		displayName="M12-FAV (Police)";
		scope=2;
		scopeCurator=2;
		side=2;
		author="Article 2 Studios";
		faction="OPTRE_PD";
		crew="OPTRE_CPD_Officer";
		weapons[]=
		{
			"PoliceHorn"
		};
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_police.p3d";
		class UserActions: UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=0;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' < 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' > 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',0];";
			};
			class siren_Start: beacons_start
			{
				userActionID=52;
				displayName="$STR_A3_CfgVehicles_siren_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
				statement="[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
			class siren_stop: siren_Start
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_siren_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
				statement="[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
		};
		class textureSources
		{
			class Police
			{
				displayName="Police";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\Police\M12HogMaav_extupper_police_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
			};
		};
		class AnimationSources
		{
			class lights_em_hide
			{
				source="user";
				useSource=1;
				displayName="Start beacon lights";
				initPhase=0;
				animPeriod=9.9999997e-005;
				onPhaseChanged="";
			};
		};
	};
	class OPTRE_M12_FAV_APC_PD: OPTRE_M12_FAV_APC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC_PD.jpg";
		scope=2;
		scopeCurator=2;
		displayName="M12 APC (Police)";
		side=2;
		author="Article 2 Studios";
		faction="OPTRE_PD";
		crew="OPTRE_CPD_SWAT_M7";
		weapons[]=
		{
			"PoliceHorn"
		};
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_APC_police.p3d";
		class UserActions: UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=0;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' < 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' > 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',0];";
			};
			class siren_Start: beacons_start
			{
				userActionID=52;
				displayName="$STR_A3_CfgVehicles_siren_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
				statement="[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
			class siren_stop: siren_Start
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_siren_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
				statement="[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
		};
		class textureSources
		{
			class Police
			{
				displayName="Police";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\police\hog_apc_police_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_PD"
				};
			};
		};
		class AnimationSources
		{
			class lights_em_hide
			{
				source="user";
				useSource=1;
				displayName="Start beacon lights";
				initPhase=0;
				animPeriod=9.9999997e-005;
				onPhaseChanged="";
			};
		};
		textureList[]=
		{
			"Police",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\police\hog_apc_police_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
		};
	};
	class OPTRE_M12_LRV_PD: OPTRE_M12_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_LRV_PD.jpg";
		scope=2;
		scopeCurator=2;
		author="Article 2 Studios";
		displayName="M12 LRV MG (Police)";
		side=2;
		class AnimationSources
		{
			class lights_em_hide
			{
				source="user";
				useSource=1;
				displayName="Start beacon lights";
				initPhase=0;
				animPeriod=9.9999997e-005;
				onPhaseChanged="";
			};
		};
		faction="OPTRE_PD";
		crew="OPTRE_CPD_SWAT_M7";
		weapons[]=
		{
			"PoliceHorn"
		};
		class UserActions: UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=0;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' < 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' > 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',0];";
			};
			class siren_Start: beacons_start
			{
				userActionID=52;
				displayName="$STR_A3_CfgVehicles_siren_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
				statement="[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
			class siren_stop: siren_Start
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_siren_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
				statement="[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
		};
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_MG_police.p3d";
		transportSoldier=0;
		class textureSources
		{
			class Police
			{
				displayName="Police";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_PD"
				};
			};
		};
		textureList[]=
		{
			"Police",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret_decal",
			"camo_sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	class OPTRE_M914_RV_PD: OPTRE_M914_RV
	{
		displayName="$STR_OPTRE_Vehicles_Warthog_Repair_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_REP_police.p3d";
		transportSoldier=0;
		faction="OPTRE_PD";
		crew="OPTRE_CPD_SWAT_M7";
		weapons[]=
		{
			"PoliceHorn"
		};
		side=2;
		class AnimationSources
		{
			class lights_em_hide
			{
				source="user";
				useSource=1;
				displayName="Start beacon lights";
				initPhase=0;
				animPeriod=9.9999997e-005;
				onPhaseChanged="";
			};
		};
		class UserActions: UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=0;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' < 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' > 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',0];";
			};
			class siren_Start: beacons_start
			{
				userActionID=52;
				displayName="$STR_A3_CfgVehicles_siren_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
				statement="[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
			class siren_stop: siren_Start
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_siren_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
				statement="[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
		};
		class textureSources
		{
			class Police
			{
				displayName="Police";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_PD"
				};
			};
		};
		textureList[]=
		{
			"Police",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
	};
	class OPTRE_M813_TT_Police: OPTRE_M813_TT
	{
		displayName="$STR_OPTRE_Vehicles_Warthog_TT_displayName";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_TT_police.p3d";
		transportSoldier=0;
		faction="OPTRE_PD";
		crew="OPTRE_CPD_SWAT_M7";
		weapons[]=
		{
			"PoliceHorn"
		};
		class AnimationSources
		{
			class lights_em_hide
			{
				source="user";
				useSource=1;
				displayName="Start beacon lights";
				initPhase=0;
				animPeriod=9.9999997e-005;
				onPhaseChanged="";
			};
		};
		side=2;
		class UserActions: UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=0;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' < 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND  {this animationPhase 'lights_em_hide' > 0.5} AND {Alive(this)} ";
				statement="this animateSource ['lights_em_hide',0];";
			};
			class siren_Start: beacons_start
			{
				userActionID=52;
				displayName="$STR_A3_CfgVehicles_siren_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
				statement="[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
			class siren_stop: siren_Start
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_siren_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['beacon_rear_hide','beacon_front_hide','LED_lights_hide'] > 0} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
				statement="[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
			};
		};
		class textureSources
		{
			class Police
			{
				displayName="Police";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"OPTRE_PD"
				};
			};
		};
		textureList[]=
		{
			"Police",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_net",
			"camo_transport_decal"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\police\M12HogMaav_extupper_police_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
		};
	};
	class OPTRE_M12_FAV_CMA: OPTRE_M12_FAV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12-FAV [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
		};
	};
	class OPTRE_M813_TT_CMA: OPTRE_M813_TT
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M813_TT_CMA.jpg";
		scope=2;
		scopeCurator=2;
		author="Article 2 Studios";
		side=2;
		faction="OPTRE_CAA";
		displayName="M831 Troop Transport [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_net",
			"camo_transport_decal"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
		};
	};
	class OPTRE_M12_FAV_APC_CMA: OPTRE_M12_FAV_APC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12 APC [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
		};
	};
	class OPTRE_M12_FAV_APC_MED_CMA: OPTRE_M12_FAV_APC_MED
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC_MED_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12 Medical APC [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net",
			"camo_medical"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
		};
	};
	class OPTRE_M914_RV_CMA: OPTRE_M914_RV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M914_RV_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M914 Repair Hog [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
	};
	class OPTRE_M12_LRV_CMA: OPTRE_M12_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_LRV_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12 LRV (MG) [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret_decal",
			"camo_sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	class OPTRE_M12A1_LRV_CMA: OPTRE_M12A1_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12A1_LRV_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12A1 LRV (Rocket) [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_turret",
			"camo_turret_decals"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class OPTRE_M12G1_LRV_CMA: OPTRE_M12G1_LRV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12G1_LRV_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12G1 LRV (Gauss) [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
	};
	class OPTRE_M12R_AA_CMA: OPTRE_M12R_AA
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12R_AA_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12R (AA) [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
	};
	class OPTRE_M12_TD_CMA: OPTRE_M12_TD_ins
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_TD_CMA.jpg";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		displayName="M12 TD [CMA]";
		crew="OPTRE_CMA_Army_Soldier_Rifleman_VK78";
		textureList[]=
		{
			"CMA",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"camo_details",
			"camo_interior",
			"camo_console"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Weapons_Turrets\fg75\data\console_co.paa"
		};
	};
	class OPTRE_M12_CIV: OPTRE_M12_FAV
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_CIV.jpg";
		displayName="AMG Hog";
		author="Article 2 Studios";
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_CIV.p3d";
		faction="OPTRE_UEG_Civ";
		side=3;
		crew="OPTRE_UEG_Civilian_Commoner";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_ylwBlk_civ_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
		};
		class EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		textureList[]=
		{
			"colorstripe",
			1,
			"colorgold",
			1,
			"colorblue",
			1,
			"colorgrey",
			1,
			"colorred",
			1
		};
		vehicleClass="Car";
	};
	class OPTRE_M12_CIV2: OPTRE_M12_FAV
	{
		scope=2;
		scopeCurator=2;
		model="\OPTRE_Vehicles\Warthog\M12_MAAV_CIV.p3d";
		displayName="Racing Hog";
		author="Article 2 Studios";
		faction="OPTRE_UEG_Civ";
		crew="OPTRE_UEG_Civilian_Formal";
		side=3;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		textureList[]=
		{
			"Racing",
			1
		};
		class textureSources
		{
			class Racing
			{
				displayName="Racing";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_ita_civ_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"OPTRE_UEG_Civ"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\gen_warthog_up_ita_civ_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
		};
	};
	class Wreck_base_F;
	class OPTRE_Objects_Wreck_Warthog: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Warthog.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		editorCategory="OPTRE_EditorCategory_Objects";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		displayName="Warthog Wreck";
		model="OPTRE_Vehicles\Warthog\warthog_wreck.p3d";
	};
	class OPTRE_Objects_Wreck_Warthog_MG: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Warthog_MG.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		editorCategory="OPTRE_EditorCategory_Objects";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		displayName="Warthog Wreck (MG)";
		model="OPTRE_Vehicles\Warthog\warthog_MG_wreck.p3d";
	};
	class OPTRE_Objects_Wreck_Warthog_Armed: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Warthog_Armed.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		editorCategory="OPTRE_EditorCategory_Objects";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		displayName="Warthog Wreck (Armed)";
		model="OPTRE_Vehicles\Warthog\warthog_armed_wreck.p3d";
	};
	class OPTRE_Objects_Wreck_Warthog_TT: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Warthog_TT.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		editorCategory="OPTRE_EditorCategory_Objects";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		displayName="Warthog Wreck (TT)";
		model="OPTRE_Vehicles\Warthog\warthog_TT_wreck.p3d";
	};
	class OPTRE_Objects_Wreck_Warthog_APC: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Warthog_APC.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		editorCategory="OPTRE_EditorCategory_Objects";
		displayName="Warthog Wreck (APC)";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		model="OPTRE_Vehicles\Warthog\warthog_APC_wreck.p3d";
	};
};

