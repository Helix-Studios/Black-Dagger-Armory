class CfgPatches
{
	class OPTRE_Vehicles_Bison
	{
		units[]=
		{
			"OPTRE_M412_IFV_UNSC",
			"OPTRE_M413_MGS_UNSC",
			"OPTRE_M413_MGS_UNSC_tan",
			"OPTRE_M413_MGS_UNSC_blk",
			"OPTRE_M412_IFV_UNSC_tan",
			"OPTRE_M412_IFV_UNSC_blk",
			"OPTRE_M413_MGS_INS",
			"OPTRE_M412_IFV_INS",
			"OPTRE_M411_APC_UNSC",
			"OPTRE_Objects_Wreck_Bison"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Vehicles"
		};
		addonRootClass="OPTRE_Vehicles";
		magazines[]={};
		ammo[]={};
	};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CargoTurret;
	};
	class OPTRE_M413_base: APC_Wheeled_01_base_F
	{
		crew="OPTRE_UNSC_Army_Soldier_Crewman_ARI";
		displayName="-";
		accuracy=0.25;
		model="\OPTRE_Vehicles\Bison\IFV_Bison.p3d";
		picture="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
		icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
		class RenderTargets
		{
			class DriverCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="driverview";
					pointDirection="pip1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class BackCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="pip2_pos";
					pointDirection="pip2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class GunnerCam
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class CargoCam
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pip4_pos";
					pointDirection="pip4_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class GunnerCam2
			{
				renderTarget="rendertarget5";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class DriverCam2
			{
				renderTarget="rendertarget6";
				class CameraView1
				{
					pointPosition="driverview";
					pointDirection="pip1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class BackCam2
			{
				renderTarget="rendertarget7";
				class CameraView1
				{
					pointPosition="pip2_pos";
					pointDirection="pip2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		terrainCoef=0.25;
		turnCoef=3;
		canFloat=1;
		waterAngularDampingCoef=10;
		waterPPInVehicle=1;
		waterResistanceCoef=0.5;
		engineShiftY=0.5;
		waterDamageEngine=0.2;
		waterLinearDampingCoefX=0;
		waterLinearDampingCoefY=0;
		waterSpeedFactor=0.2;
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		maxSpeed=110;
		fuelCapacity=45;
		wheelCircumference=3.8050001;
		waterLeakiness=10;
		normalSpeedForwardCoef=0.51999998;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		idleRpm=425;
		redRpm=2300;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=4.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=35;
		enginePower=405;
		maxOmega=241;
		peakTorque=2260;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/2260)"
			},
			
			{
				"(1200/2300)",
				"(1625/2260)"
			},
			
			{
				"(1400/2300)",
				"(2100/2260)"
			},
			
			{
				"(1500/2300)",
				"(2200/2260)"
			},
			
			{
				"(1550/2300)",
				"(2260/2260)"
			},
			
			{
				"(1600/2300)",
				"(2200/2260)"
			},
			
			{
				"(2300/2300)",
				"(1700/2260)"
			},
			
			{
				"(4700/2300)",
				"(0/2260)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		switchTime=0.1;
		latency=1.4;
		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-0.99599999,-0.089000002};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1125;
				mMaxDroop=0.1125;
				sprungMass=3090;
				springStrength=110000;
				springDamperRate=27900;
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
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_axis";
				tireForceAppPointOffset="wheel_1_4_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_axis";
				tireForceAppPointOffset="wheel_2_4_axis";
				maxHandBrakeTorque=300000;
			};
		};
		crewExplosionProtection=0.99949998;
		damageResistance=0.0071899998;
		armor=535;
		armorStructural=4;
		armorLights=1;
		forceHideDriver=1;
		driverForceOptics=0;
		driverAction="Driver_OPTRE_Bison";
		driverInAction="Driver_OPTRE_Bison";
		driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
		cargoAction[]=
		{
			"passenger_apc_generic02b",
			"passenger_apc_generic04",
			"passenger_apc_generic04",
			"passenger_apc_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic04",
			"passenger_apc_generic02b",
			"passenger_apc_generic04"
		};
		castCargoShadow=0;
		castDriverShadow=0;
		castGunnerShadow=0;
		weapons[]=
		{
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=1;
				name="palivo";
				passThrough=0.5;
				explosionShielding=0.5;
			};
			class HitEngine: HitEngine
			{
				armor=1.25;
				name="engine";
				passThrough=0.5;
				explosionShielding=0.5;
			};
			class HitBody: HitBody
			{
				armor=2.25;
				name="zbytek";
				visual="zbytek";
				passThrough=1;
				explosionShielding=0.2;
				minimalHit=0.2;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				body="mainTurret";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				maxVerticalRotSpeed=1.8;
				maxHorizontalRotSpeed=1.8;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGun="usti hlavne";
				weapons[]=
				{
					"OPTRE_105mm_M556",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"OPTRE_60Rnd_105mm_APBC",
					"OPTRE_60Rnd_105mm_SAPHE",
					"OPTRE_60Rnd_105mm_HEAT",
					"OPTRE_60Rnd_105mm_APBC",
					"OPTRE_60Rnd_105mm_SAPHE",
					"OPTRE_60Rnd_105mm_HEAT",
					"OPTRE_60Rnd_105mm_APBC",
					"OPTRE_60Rnd_105mm_SAPHE",
					"OPTRE_60Rnd_105mm_HEAT",
					"OPTRE_2Rnd_GAT_missiles"
				};
				minElev=-7;
				maxElev=20;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				isPersonTurret=0;
				usepip=1;
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=0;
					initAngleY=-90;
					minAngleX=-90;
					maxAngleX=90;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				showCrewAim=2;
				class HitPoints
				{
				};
				gunnerAction="Gunner_OPTRE_Bison";
				gunnerInAction="Gunner_OPTRE_Bison";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerHasFlares=1;
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
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="OPTRE_105mm_M556";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_105mm_M556";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class CargoDoorAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M670_ATGM_Launcher";
			};
			class recoil_source
			{
				source="reload";
				weapon="OPTRE_105mm_M556";
			};
		};
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID=60;
				displayName="Open Cargo Door";
				displayNameDefault="Open Cargo Door";
				textToolTip="Open Cargo Door";
				position="chargodoor_axis";
				radius=6;
				priority=2;
				onlyForPlayer=0;
				condition="((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",1]";
				animPeriod=5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID=61;
				displayName="Close Cargo Door";
				displayNameDefault="Close Cargo Door";
				textToolTip="Close Cargo Door";
				priority=2;
				condition="((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",0]";
				animPeriod=5;
			};
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Bison";
				displayName="Press SPACEBAR to Flip Bison";
				position="";
				radius=6;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"OPTRE_Vehicles\Bison\data\Bison_Body.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Body_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Body_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Misc.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Misc_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Misc_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Seats.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Seats_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Seats_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Interior.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Interior_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Interior_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_CameraGlass.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_CameraGlass_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_CameraGlass_destruct.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_90mm.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_90mm_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_90mm_destruct.rvmat"
			};
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust_1";
				direction="exhaust_1_dir";
				effect="ExhaustsEffectAMV";
			};
			class Exhaust2
			{
				position="exhaust_2";
				direction="exhaust_2_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=5;
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class Right3: Right2
			{
				position="light_R_flare2";
				flareSize=0.69999999;
				hitpoint="Light_R2";
				selection="Light_R2";
			};
			class Left3: Left2
			{
				position="light_L_flare2";
				flareSize=0.69999999;
				hitpoint="Light_L2";
				selection="Light_L2";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Left3",
				"Right",
				"Right2",
				"Right3"
			}
		};
		explosionEffect="FuelExplosionBig";
	};
	class OPTRE_M413_MGS_UNSC: OPTRE_M413_base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M413_MGS_UNSC.jpg";
		dlc="OPTRE";
		vehicleClass="OPTRE_UNSC_Armored_class";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="OPTRE_UNSC";
		displayName="$STR_OPTRE_M413_BISON_MGS_DISPLAYNAME";
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
	class OPTRE_M412_IFV_UNSC: OPTRE_M413_base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M412_IFV_UNSC.jpg";
		dlc="OPTRE";
		vehicleClass="OPTRE_UNSC_Armored_class";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="OPTRE_UNSC";
		displayName="$STR_OPTRE_M412_BISON_IFV_DISPLAYNAME";
		model="\OPTRE_Vehicles\Bison\IFV_Bison_40.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_2Rnd_GAT_missiles"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="OPTRE_M230";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_M230";
			};
			class recoil_source
			{
				source="reload";
				weapon="OPTRE_M230";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
	class OPTRE_M411_APC_UNSC: OPTRE_M413_base
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M411_APC_UNSC.jpg";
		displayName="$STR_OPTRE_M411_BISON_APC_DISPLAYNAME";
		vehicleClass="OPTRE_UNSC_Armored_class";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		faction="OPTRE_UNSC";
		scope=2;
		scopeCurator=2;
		side=1;
		model="\OPTRE_Vehicles\Bison\APC_Bison.p3d";
		magazines[]=
		{
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		transportSoldier=12;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerInAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="outcargo1";
				memoryPointsGetInGunnerDir="outcargo1dir";
				memoryPointGunnerOptics="";
				gunnerName="Top Right 1";
				proxyIndex=13;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=0;
				LODTurnedOut=0;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Top Left 1";
				memoryPointsGetInGunner="outcargo2";
				memoryPointsGetInGunnerDir="outcargo2dir";
				proxyIndex=14;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName="Top Right 2";
				memoryPointsGetInGunner="outcargo3";
				memoryPointsGetInGunnerDir="outcargo3dir";
				proxyIndex=15;
			};
			class CargoTurret_04: CargoTurret_01
			{
				memoryPointsGetInGunner="outcargo4";
				memoryPointsGetInGunnerDir="outcargo4dir";
				gunnerName="Top Left 2";
				proxyIndex=16;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerName="Top Right 3";
				memoryPointsGetInGunner="outcargo5";
				memoryPointsGetInGunnerDir="outcargo5dir";
				proxyIndex=17;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerName="Top Left 3";
				memoryPointsGetInGunner="outcargo6";
				memoryPointsGetInGunnerDir="outcargo6dir";
				proxyIndex=18;
			};
			class CargoTurret_07: CargoTurret_01
			{
				gunnerName="Top Right 4";
				memoryPointsGetInGunner="outcargo7";
				memoryPointsGetInGunnerDir="cargo157dir";
				proxyIndex=19;
			};
			class CargoTurret_08: CargoTurret_01
			{
				proxyIndex=20;
				gunnerName="Top Left 4";
				memoryPointsGetInGunner="outcargo8";
				memoryPointsGetInGunnerDir="outcargo8dir";
			};
			class CargoTurret_09: CargoTurret_01
			{
				proxyIndex=21;
				gunnerName="Top Right 5";
				memoryPointsGetInGunner="outcargo9";
				memoryPointsGetInGunnerDir="outcargo9dir";
			};
			class CargoTurret_10: CargoTurret_01
			{
				proxyIndex=22;
				gunnerName="Top Left 5";
				memoryPointsGetInGunner="outcargo10";
				memoryPointsGetInGunnerDir="outcargo10dir";
			};
			class CargoTurret_11: CargoTurret_01
			{
				proxyIndex=23;
				gunnerName="Top Front";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerAction="passenger_flatground_4";
				gunnerInAction="passenger_flatground_4";
			};
			class CargoTurret_12: CargoTurret_01
			{
				proxyIndex=24;
				gunnerName="Top Rear";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerAction="passenger_flatground_2";
				gunnerInAction="passenger_flatground_2";
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
	};
	class OPTRE_M413_MGS_INS: OPTRE_M413_MGS_UNSC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M413_MGS_INS.jpg";
		dlc="OPTRE";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		scope=2;
		scopeCurator=2;
		faction="OPTRE_Ins";
		displayName="M413 Bison MGS [ins]";
		side=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_ins_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_ins_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
		class textureSources
		{
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_ins_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_ins_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_INS"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_ins2_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_ins2_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_INS"
				};
			};
		};
		textureList[]=
		{
			"Innie",
			1,
			"Guerrilla",
			1
		};
	};
	class OPTRE_M412_IFV_INS: OPTRE_M412_IFV_UNSC
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M412_IFV_INS.jpg";
		dlc="OPTRE";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		scope=2;
		scopeCurator=2;
		faction="OPTRE_Ins";
		side=0;
		displayName="M412 Bison IFV [ins]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_ins_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_ins_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
		class textureSources
		{
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_ins_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_ins_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_INS"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_ins2_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_ins2_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_INS"
				};
			};
		};
		textureList[]=
		{
			"Innie",
			1,
			"Guerrilla",
			1
		};
	};
	class OPTRE_M413_MGS_UNSC_tan: OPTRE_M413_MGS_UNSC
	{
		dlc="OPTRE";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_DES";
		scope=1;
		scopeCurator=2;
		displayName="M413 Bison MGS [Tan]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
	};
	class OPTRE_M413_MGS_UNSC_blk: OPTRE_M413_MGS_UNSC
	{
		dlc="OPTRE";
		scope=1;
		scopeCurator=2;
		displayName="M413 Bison MGS [Black]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
	};
	class OPTRE_M412_IFV_UNSC_tan: OPTRE_M412_IFV_UNSC
	{
		dlc="OPTRE";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_DES";
		scope=1;
		scopeCurator=2;
		displayName="M412 Bison IFV [Tan]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
	};
	class OPTRE_M412_IFV_UNSC_blk: OPTRE_M412_IFV_UNSC
	{
		dlc="OPTRE";
		scope=1;
		scopeCurator=2;
		displayName="M412 Bison IFV [Black]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
	};
	class Wreck_base_F;
	class OPTRE_Objects_Wreck_Bison: Wreck_base_F
	{
		editorPreview="\OPTRE_Misc\Image\OPTRE\Wrecks\OPTRE_Objects_Wreck_Bison.jpg";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		model="OPTRE_Vehicles\Bison\IFV_Bison_Wreck.p3d";
		icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
		editorCategory="OPTRE_EditorCategory_Objects";
		editorSubcategory="OPTRE_EditorSubcategory_Wrecks";
		displayname="Bison Wreck";
		typicalCargo[]={};
		vehicleClass="OPTRE_UNSC_Object_class";
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
};
