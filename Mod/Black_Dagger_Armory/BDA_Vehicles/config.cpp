class CfgPatches {
	class BDA_Vehicles {
		author = "Black Dagger Armories";
		units[]=
		{
			"BDA_UNSC_D77_TC_Pelican",
			"OPTRE_UNSC_Marine_Soldier_Rifleman_AR",
			"BDA_UNSC_Hornet",
			"BDA_UNSC_Hornet_Lite",
			"BDA_UNSC_UH145A_Falcon2"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"OPTRE_Core",
			"BDA_Core",
			"Splits_Functions",
			"Splits_Vehicles_Air_Pelican",
			"OPTRE_Vehicles_Pelican",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Hornet",
			"OPTRE_Vehicles_Sparrowhawk",
			"BDA_Weapons"
		};
	};
};

class CfgFactionClasses {
	class B_UNSCODST;
};

class components;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
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
class WeaponCloudsMGun;

class CfgVehicles {
	/*extern*/ class Splits_Pelican_base;
	/*extern*/ class OPTRE_UNSC_hornet;
	/*extern*/ class OPTRE_AV22_Sparrowhawk;
	/*extern*/ class OPTRE_UNSC_falcon_armed_S;
	/*extern*/ class VTOL_02_Base_F;

	class BDA_UNSC_D77_TC_Pelican: Splits_Pelican_base {
		scope = 2;
		scopeCurator = 2;
		side = 1;
		vehicleClass = "Air";
		dlc="BDA";
		author = "Rib/Split";
		faction = "B_UNSCODST";
		displayName = "D77-TC Pelican";
		//textures
		textureList[]={
			"BDA_Green", 1,
			"BDA_Black", 1,
			"BDA_Whiskey", 1,
			"UNSC_HW2_Winter", 1
		};
		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\BDA_G_body_co.paa",
			"\BDA_Vehicles\data\BDA_G_wings_and_gear_co.paa",
			"\BDA_Vehicles\data\BDA_G_weaponry_co.paa"
		};
		class textureSources {
			class BDA_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class BDA_Black {
				displayName="UNSC Black";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class BDA_Whiskey {
				displayName="UNSC Whiskey 316";
				author="Splitjaw/Grif";
				textures[]={
					"\BDA_Vehicles\data\BDA_W_body_co.paa",
					"\BDA_Vehicles\data\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class UNSC_HW2_Winter {
				displayName="UNSC Winter";
				author="SplitJaw/Rib";
				textures[]=
				{
					"Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\body_co.paa",
					"\BDA_Vehicles\data\wings_and_gear_co.paa",
					"Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
		};
		//Structural
		armor = 420;
		maxSpeed = 900;
		fuelConsumptionRate = 0.27;

		//Weapons
		magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"BDA_missiles_LGIR_Anvil3_x60",
			"BDA_missiles_LGIR_Anvil3_x60"
		};
		weapons[] = {
			"CMFlareLauncher",
			"BDA_missiles_Guided_Anvil3"
		};

		// radar stuff
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";

		//hud colour change
		class MFD {
			class MFD_Pilot_1
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={0};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0.25,1,0.25};
					condition="on";
					class ReticleGroup
					{
						color[]={1,1,1};
						class Reticle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.50142902,0.49276599},
									1
								},
								
								{
									{0.505,0.49276599},
									1
								},
								
								{
									{0.505,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49276599},
									1
								},
								{},
								
								{
									{0.50928599,0.49578801},
									1
								},
								
								{
									{0.587143,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.50283903},
									1
								},
								
								{
									{0.50285703,0.59752798},
									1
								},
								{},
								
								{
									{0.49857101,0.49578801},
									1
								},
								
								{
									{0.41999999,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.39404801},
									1
								},
								
								{
									{0.50285703,0.48672199},
									1
								},
								{},
								
								{
									{0.62,0.339652},
									1
								},
								
								{
									{0.65285701,0.339652},
									1
								},
								
								{
									{0.65285701,0.382967},
									1
								},
								{},
								
								{
									{0.65285701,0.615659},
									1
								},
								
								{
									{0.65285701,0.65998203},
									1
								},
								
								{
									{0.62071401,0.65998203},
									1
								},
								{},
								
								{
									{0.38428599,0.65998203},
									1
								},
								
								{
									{0.35142899,0.65998203},
									1
								},
								
								{
									{0.35142899,0.615659},
									1
								},
								{},
								
								{
									{0.38428599,0.339652},
									1
								},
								
								{
									{0.35142899,0.339652},
									1
								},
								
								{
									{0.35142899,0.382967},
									1
								}
							};
						};
						class ModeText
						{
							type="text";
							source="static";
							text="Mode: TI WHOT";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.31999999},
								1
							};
							right[]=
							{
								{0.07,0.31999999},
								1
							};
							down[]=
							{
								{0.039999999,0.345},
								1
							};
						};
						class RangeText
						{
							type="text";
							source="static";
							text="Range:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.33000001,0.81},
								1
							};
							right[]=
							{
								{0.37,0.81},
								1
							};
							down[]=
							{
								{0.33000001,0.84500003},
								1
							};
						};
						class Fuel
						{
							type="text";
							source="laserDist";
							sourceScale=1;
							sourceLength=4;
							align="right";
							scale=1;
							pos[]=
							{
								{0.47999999,0.81},
								1
							};
							right[]=
							{
								{0.51999998,0.81},
								1
							};
							down[]=
							{
								{0.47999999,0.84500003},
								1
							};
						};
					};
				};
			};
			class MFD_Pilot_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class Time
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.11},
							1
						};
						right[]=
						{
							{0.13,0.11},
							1
						};
						down[]=
						{
							{0.029999999,0.2},
							1
						};
					};
					class Fuel
					{
						type="text";
						source="fuel";
						text="%X";
						sourceScale=2517;
						sourceLength=4;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.31},
							1
						};
						right[]=
						{
							{0.13,0.31},
							1
						};
						down[]=
						{
							{0.029999999,0.40000001},
							1
						};
					};
					class LBSText
					{
						type="text";
						source="static";
						text="LBS";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30000001,0.31},
							1
						};
						right[]=
						{
							{0.40000001,0.31},
							1
						};
						down[]=
						{
							{0.30000001,0.40000001},
							1
						};
					};
					class GridX
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceOffset=-0.5;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.61000001},
							1
						};
						right[]=
						{
							{0.13,0.61000001},
							1
						};
						down[]=
						{
							{0.029999999,0.69999999},
							1
						};
					};
					class GridY: GridX
					{
						source="coordinateY";
						pos[]=
						{
							{0.23999999,0.61000001},
							1
						};
						right[]=
						{
							{0.34,0.61000001},
							1
						};
						down[]=
						{
							{0.23999999,0.69999999},
							1
						};
					};
					class GridText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.50999999},
							1
						};
						right[]=
						{
							{0.13,0.50999999},
							1
						};
						down[]=
						{
							{0.029999999,0.60000002},
							1
						};
					};
				};
			};
			class MFD_Pilot_3
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="left";
						scale=1;
						pos[]=
						{
							{0.28,0.45199999},
							1
						};
						right[]=
						{
							{0.31999999,0.45199999},
							1
						};
						down[]=
						{
							{0.28,0.49200001},
							1
						};
					};
					class AltNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							{0.75,0.45199999},
							1
						};
						right[]=
						{
							{0.79000002,0.45199999},
							1
						};
						down[]=
						{
							{0.75,0.49200001},
							1
						};
					};
					class CruiseMode
					{
						condition="1+((altitudeASL-27) min 1) - autohover";
						class AltNumberASL
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.81,0.16},
								1
							};
							right[]=
							{
								{0.85000002,0.16},
								1
							};
							down[]=
							{
								{0.81,0.2},
								1
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.00,1.00,0.2,1.0}; //original RGBA=0.169,0.85100001,0.83899999
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				enableParallax=1;
				font="LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.15,1.0,0.2,1.0}; //original 0.15000001,0.15000001,1,1 RGBA
					condition="on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.88499999},
								1
							},
							
							{
								{0.40799999,0.88499999},
								1
							},
							{},
							
							{
								{0.60000002,0.88499999},
								1
							},
							
							{
								{0.59200001,0.88499999},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.51999998,0.079999998},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								{0.47999999,0.079999998},
								1
							},
							
							{
								{0.51999998,0.079999998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089802},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							{}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class MGun
					{
						condition="mgun+rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
		};
		class Components: Components {
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=45;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=50;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=150;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent {
				uiPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class Pylons {
					class PylonRight1
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=5;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=4;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=3;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="BDA_PylonMissile_AA_Pelican_x4";
						priority=2;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
						UIposition[]={0.25,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[]={0.25,0.40000001};
						mirroredMissilePos=1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Presets {
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",

							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class OPTRE_Default
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_2Rnd_Jackknife_missile",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AA
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",

							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AT
					{
						displayName="OPTRE AT";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
				};
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=15;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=30;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=2;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=10;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=2;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=20;};
			//class _xx_ACE_
		};
		//TFAR Config
		tf_range = 50000;
		tf_isolatedAmount = 0.45;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasRadio = 1;
		enableRadio = 1;
	};
	
	class BDA_UNSC_D77_TC_Pelican_VTOL: VTOL_02_Base_F { //TB Fixed
		scope = 0;
		scopeCurator = 0;
		side = 1;
		dlc="BDA";
		author = "Rib/Split";
		faction = "B_UNSCODST";
		displayName = "D77-TC Pelican [VTOL]";
		vehicleClass = "Air";
		model = "Splits\Splits_Vehicles\Pelican\D77_TC_Pelican_19th.p3d";
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa"; //replace me later
		picture = "OPTRE_Vehicles\Pelican\Data\icon2.paa"; //replace me later
		//Structural
		armor = 420;
		getInRadius = 4;
		//vtol and engine
		maxSpeed = 950; //source 700
		gearRetracting=1;
		gearUpTime = 3.33;
		landingAoa = "10*3.1415/180";
		landingSpeed = 0;
		stallSpeed = 200; //source 210
		stallWarningTreshold = 0.2;
		airBrake = 1;
		flaps = 1;
		flapsFrictionCoef = 0;
		angleOfIndicence = "1*3.1415/180";
		envelope[] = {0,0.01,0.2,4.0,6.0,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8.0,1.0};
		altNoForce = 11000;
		altFullForce = 2500;
		throttleToThrustLogFactor = 2;
		thrustCoef[] = {1.42,1.17,1.15,1.14,1.13,1.12,1.1,1.07,0.99,0.2,0.0,0.0,0};
		aileronSensitivity = 0.5;
		aileronCoef[] = {0.6,0.8,1.0,1.1,1.2,1.2,0.4};
		elevatorSensitivity = 0.9;
		elevatorCoef[] = {0.2,0.39,0.51,0.6,0.68,0.75,0.8,0.85,0.9,0.74,0.3};
		rudderInfluence = 0.866;
		rudderCoef[] = {0.2,0.5,1.0,1.5,1.8,2.1,2.4,2.5,2.6,2.7,2.7,0.8,0.4};
		aileronControlsSensitivityCoef = 2.0;
		elevatorControlsSensitivityCoef = 4.0;
		rudderControlsSensitivityCoef = 2.0;
		draconicForceXCoef = 14.0;
		draconicForceYCoef = 1.0;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {14.0,12.0,11.2,10.6,9.9,9.6,9.7,10.5,11.0,11.5,12.0};
		draconicTorqueYCoef[] = {0.5,1.0,2.0,2.3,3.0,2.6,2.4,2.2,2.0,1.9,1.8};
		vtol = 4;
		VTOLYawInfluence = 6.0;
		VTOLPitchInfluence = 2.0;
		VTOLRollInfluence = 8.0;
		maxOmega = 2000;
		numberPhysicalWheels=3;
		wheelSteeringSensitivity=0.69999999;
		//textures
		textureList[]={
			"BDA_Green", 1,
			"BDA_Black", 1,
			"BDA_Whiskey", 1,
			"UNSC_HW2_Winter", 1
		};
		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\BDA_G_body_co.paa",
			"\BDA_Vehicles\data\BDA_G_wings_and_gear_co.paa",
			"\BDA_Vehicles\data\BDA_G_weaponry_co.paa"
		};
		class textureSources {
			class BDA_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class BDA_Black {
				displayName="UNSC Black";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class BDA_Whiskey {
				displayName="UNSC Whiskey";
				author="Splitjaw/Grif";
				textures[]={
					"\BDA_Vehicles\data\BDA_W_body_co.paa",
					"\BDA_Vehicles\data\BDA_W_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
			class UNSC_HW2_Winter {
				displayName="UNSC Winter";
				author="SplitJaw/Rib";
				textures[]=
				{
					"Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\body_co.paa",
					"\BDA_Vehicles\data\wings_and_gear_co.paa",
					"Splits\Splits_Vehicles\Pelican\data\HW2_19th_winter\weaponry_co.paa"
				};
				factions[]={"B_UNSCODST"};
			};
		};
		//Weapons
		magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"BDA_missiles_LGIR_Anvil3_x60",
			"BDA_missiles_LGIR_Anvil3_x60"
		};
		weapons[] = {
			"CMFlareLauncher",
			"BDA_missiles_Guided_Anvil3"
		};
		// radar stuff
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";
		nvScanner = 1;
		radarTarget = 1;
		radarTargetSize = 0.6;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		showAllTargets = 4; 
		allowTabLock = 1;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		driverCanSee = 31;
		canUseScanner = 1;
		irScanToEyeFactor = 1;
		irScanRangeMin = 200;
		irScanRangeMax = 10000;
		irScanGround = 1;
		irTarget = 1;
		irTargetSize = 0.6;
		laserScanner = 1;
		laserTarget = 0;
		//Driver+cargo actions
		destrType = "DestructWreck";
		driverAction = "Splits_Pilot_Pelican"; //Plane_Fighter_03_pilot //replace me
		driverInAction = "Splits_Pilot_Pelican"; //replace me
		driverLeftHandAnimName="stick_pilot";
		driverRightHandAnimName="lever_pilot";
		driverLeftLegAnimName="Pedals_1_left_2";
		driverRightLegAnimName="Pedals_1_right_2";
		precisegetinout = 2; //source 1
		GetInAction = "pilot_Heli_Light_02_Enter";
		GetOutAction = "pilot_Heli_Light_02_Exit";
		cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
		cargoGetOutAction[] = {"GetOutMedium", "GetOutHighHemtt"};
		transportSoldier = 10;
		cargoAction[] = {
			"passenger_generic02_foldhands",
			"passenger_generic01_leanleft",
			"passenger_mantisrear",
			"passenger_generic01_leanright",
			"passenger_apc_generic01",
			"passenger_apc_generic02",
			"passenger_apc_generic03",
			"passenger_apc_generic04",
			"passenger_generic01_leanright",
			"passenger_generic02_foldhands" 
		};
		cargoIsCoDriver[] = { 0,0 };
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		hideWeaponsCargo = 0;
		cargoProxyIndexes[] = { 3,4,5,6,7,8,9,10,11,12 };
		maximumLoad = 50000;
		cargoCanEject = 1;
		driverCanEject = 0;
		//hud colour change
		class MFD {
			class MFD_Pilot_1
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={0};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0.25,1,0.25};
					condition="on";
					class ReticleGroup
					{
						color[]={1,1,1};
						class Reticle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.50142902,0.49276599},
									1
								},
								
								{
									{0.505,0.49276599},
									1
								},
								
								{
									{0.505,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49276599},
									1
								},
								{},
								
								{
									{0.50928599,0.49578801},
									1
								},
								
								{
									{0.587143,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.50283903},
									1
								},
								
								{
									{0.50285703,0.59752798},
									1
								},
								{},
								
								{
									{0.49857101,0.49578801},
									1
								},
								
								{
									{0.41999999,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.39404801},
									1
								},
								
								{
									{0.50285703,0.48672199},
									1
								},
								{},
								
								{
									{0.62,0.339652},
									1
								},
								
								{
									{0.65285701,0.339652},
									1
								},
								
								{
									{0.65285701,0.382967},
									1
								},
								{},
								
								{
									{0.65285701,0.615659},
									1
								},
								
								{
									{0.65285701,0.65998203},
									1
								},
								
								{
									{0.62071401,0.65998203},
									1
								},
								{},
								
								{
									{0.38428599,0.65998203},
									1
								},
								
								{
									{0.35142899,0.65998203},
									1
								},
								
								{
									{0.35142899,0.615659},
									1
								},
								{},
								
								{
									{0.38428599,0.339652},
									1
								},
								
								{
									{0.35142899,0.339652},
									1
								},
								
								{
									{0.35142899,0.382967},
									1
								}
							};
						};
						class ModeText
						{
							type="text";
							source="static";
							text="Mode: TI WHOT";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.31999999},
								1
							};
							right[]=
							{
								{0.07,0.31999999},
								1
							};
							down[]=
							{
								{0.039999999,0.345},
								1
							};
						};
						class RangeText
						{
							type="text";
							source="static";
							text="Range:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.33000001,0.81},
								1
							};
							right[]=
							{
								{0.37,0.81},
								1
							};
							down[]=
							{
								{0.33000001,0.84500003},
								1
							};
						};
						class Fuel
						{
							type="text";
							source="laserDist";
							sourceScale=1;
							sourceLength=4;
							align="right";
							scale=1;
							pos[]=
							{
								{0.47999999,0.81},
								1
							};
							right[]=
							{
								{0.51999998,0.81},
								1
							};
							down[]=
							{
								{0.47999999,0.84500003},
								1
							};
						};
					};
				};
			};
			class MFD_Pilot_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class Time
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.11},
							1
						};
						right[]=
						{
							{0.13,0.11},
							1
						};
						down[]=
						{
							{0.029999999,0.2},
							1
						};
					};
					class Fuel
					{
						type="text";
						source="fuel";
						text="%X";
						sourceScale=2517;
						sourceLength=4;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.31},
							1
						};
						right[]=
						{
							{0.13,0.31},
							1
						};
						down[]=
						{
							{0.029999999,0.40000001},
							1
						};
					};
					class LBSText
					{
						type="text";
						source="static";
						text="LBS";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30000001,0.31},
							1
						};
						right[]=
						{
							{0.40000001,0.31},
							1
						};
						down[]=
						{
							{0.30000001,0.40000001},
							1
						};
					};
					class GridX
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceOffset=-0.5;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.61000001},
							1
						};
						right[]=
						{
							{0.13,0.61000001},
							1
						};
						down[]=
						{
							{0.029999999,0.69999999},
							1
						};
					};
					class GridY: GridX
					{
						source="coordinateY";
						pos[]=
						{
							{0.23999999,0.61000001},
							1
						};
						right[]=
						{
							{0.34,0.61000001},
							1
						};
						down[]=
						{
							{0.23999999,0.69999999},
							1
						};
					};
					class GridText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.50999999},
							1
						};
						right[]=
						{
							{0.13,0.50999999},
							1
						};
						down[]=
						{
							{0.029999999,0.60000002},
							1
						};
					};
				};
			};
			class MFD_Pilot_3
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="left";
						scale=1;
						pos[]=
						{
							{0.28,0.45199999},
							1
						};
						right[]=
						{
							{0.31999999,0.45199999},
							1
						};
						down[]=
						{
							{0.28,0.49200001},
							1
						};
					};
					class AltNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							{0.75,0.45199999},
							1
						};
						right[]=
						{
							{0.79000002,0.45199999},
							1
						};
						down[]=
						{
							{0.75,0.49200001},
							1
						};
					};
					class CruiseMode
					{
						condition="1+((altitudeASL-27) min 1) - autohover";
						class AltNumberASL
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.81,0.16},
								1
							};
							right[]=
							{
								{0.85000002,0.16},
								1
							};
							down[]=
							{
								{0.81,0.2},
								1
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.00,1.00,0.2,1.0}; //original RGBA=0.169,0.85100001,0.83899999
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				enableParallax=1;
				font="LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.15,1.0,0.2,1.0}; //original 0.15000001,0.15000001,1,1 RGBA
					condition="on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.88499999},
								1
							},
							
							{
								{0.40799999,0.88499999},
								1
							},
							{},
							
							{
								{0.60000002,0.88499999},
								1
							},
							
							{
								{0.59200001,0.88499999},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.51999998,0.079999998},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								{0.47999999,0.079999998},
								1
							},
							
							{
								{0.51999998,0.079999998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089802},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							{}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};

					//HUD Draw Vectoring
					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = {{0.102,0.14},1};
							right[] = {{0.127,0.14},1};
							down[] = {{0.102,0.155},1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 3.0;
							points[] = {{"ThrustVectoringRotation",{-0.034,-0.006},1},{"ThrustVectoringRotation",{-0.044,0.0},1},{"ThrustVectoringRotation",{-0.034,0.006},1},{"ThrustVectoringRotation",{-0.034,-0.006},1},{},{"ThrustVectoringRotation",{-0.044,0.0},1},{"ThrustVectoringRotation",{-0.004,0.0},1},{}};
						};
					};
					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							pos[] = {{0.103,0.14},1};
							right[] = {{0.123,0.14},1};
							down[] = {{0.103,0.155},1};
						};
					};
					class EngineRPM
					{
						type = "line";
						width = 3.0;
						points[] = {{{0.89,0.5},1},{{0.89,0.66},1},{},{{0.92,0.5},1},{{0.86,0.5},1},{},{{0.92,0.66},1},{{0.86,0.66},1},{},{{0.91,0.54},1},{{0.87,0.54},1},{},{{0.91,0.58},1},{{0.87,0.58},1},{},{{0.91,0.62},1},{{0.87,0.62},1},{}};
					};
					class EngineRPMLines
					{
						type = "line";
						width = 5.0;
						points[] = {{{"0.90+0.01",0.66},1},{"rtdrpm1",{"0.90+0.01",0.66},1},{},{{"0.86+0.01",0.66},1},{"rtdrpm2",{"0.86+0.01",0.66},1},{},{}};
					};
					class RPM60Text
					{
						type = "text";
						source = "static";
						text = "60";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.645},1};
						right[] = {{0.955,0.645},1};
						down[] = {{0.925,0.67},1};
					};
					class RPM80Text
					{
						type = "text";
						source = "static";
						text = "80";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.605},1};
						right[] = {{0.955,0.605},1};
						down[] = {{0.925,0.63},1};
					};
					class RPM100Text
					{
						type = "text";
						source = "static";
						text = "100";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.565},1};
						right[] = {{0.955,0.565},1};
						down[] = {{0.925,0.59},1};
					};
					class RPM120Text
					{
						type = "text";
						source = "static";
						text = "120";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.525},1};
						right[] = {{0.955,0.525},1};
						down[] = {{0.925,0.55},1};
					};
					class HeadingRotationArrow
					{
						condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type = "line";
							width = 3.0;
							points[] = {{{0.52,0.08},1},{{0.5,0.11},1},{{0.48,0.08},1},{{0.52,0.08},1},{}};
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302","0.082+0.001"},1};
							right[] = {{"0.83-0.302","0.082+0.001"},1};
							down[] = {{"0.80-0.302","0.113+0.001"},1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3.0;
							points[] = {{{0.478,0.075},1},{{0.522,0.075},1},{{0.552,0.095},1},{{0.522,0.115},1},{{0.478,0.115},1},{{0.448,0.095},1},{{0.478,0.075},1},{}};
						};
					};

					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class MGun
					{
						condition="mgun+rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};

					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0,0.0};
							clipBR[] = {1.0,1.0};
							class ILS
							{
								type = "line";
								points[] = {{"ILS_W",{-0.24,0},1},{"ILS_W",{0.24,0},1},{},{"ILS_W",{-0.24,-0.0235897},1},{"ILS_W",{-0.24,0.0235897},1},{},{"ILS_W",{-0.12,-0.0176923},1},{"ILS_W",{-0.12,0.0176923},1},{},{"ILS_W",{0,-0.0235897},1},{"ILS_W",{0,0.0235897},1},{},{"ILS_W",{0.12,-0.0176923},1},{"ILS_W",{0.12,0.0176923},1},{},{"ILS_W",{0.24,-0.0235897},1},{"ILS_W",{0.24,0.0235897},1},{},{"ILS_H",{0,-0.235897},1},{"ILS_H",{0,0.235897},1},{},{"ILS_H",{-0.024,-0.235897},1},{"ILS_H",{0.024,-0.235897},1},{},{"ILS_H",{-0.018,-0.117949},1},{"ILS_H",{0.018,-0.117949},1},{},{"ILS_H",{-0.024,0},1},{"ILS_H",{0.024,0},1},{},{"ILS_H",{-0.018,0.117949},1},{"ILS_H",{0.018,0.117949},1},{},{"ILS_H",{-0.024,0.235897},1},{"ILS_H",{0.024,0.235897},1}};
							};
							class airport
							{
								type = "line";
								points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
							};
						};
					};
					class Rockets
					{
						condition = "-2+rocket*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0.0,-0.0294872},1},{"ImpactPoint",{0.0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0.0,-0.002},1},{"ImpactPoint",{0.0,0.002},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0,-0.0275214},1},{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};

					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
		};
		class Components {
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=45;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=50;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=150;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent {
				uiPicture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons {
					class PylonRight1
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=5;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=4;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=3;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="BDA_PylonMissile_AA_Pelican_x4";
						priority=2;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL"
						};
						turret[]={};
						UIposition[]={0.60000002,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
						UIposition[]={0.25,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[]={0.25,0.40000001};
						mirroredMissilePos=1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Presets {
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",

							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class OPTRE_Default
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_2Rnd_Jackknife_missile",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AA
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",

							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AT
					{
						displayName="OPTRE AT";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
				};
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=15;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=30;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=2;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=10;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=2;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=20;};
			//class _xx_ACE_
		};
		class Turrets {
			class MainTurret {
				isCopilot=1;
				CanEject=0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev=-51;
				maxElev=9;
				initElev=6;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Splits_Gunner_Pelican";
				gunnerInAction = "Splits_Gunner_Pelican";
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				precisegetinout=1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments="Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				commanding = -2;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
				playerPosition=3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "lever_pilot";
				gunnerRightHandAnimName = "stick_copilot";
				//gunnerRightLegAnimName = "OtocHlave";
								//gunnerLeftLegAnimName = "OtocHlave";
				memoryPointGun = "machinegun";
				weapons[] = { "Splits_M370_70mm_autocannon", "Laserdesignator_mounted"  };
				magazines[] =
				{
					"Splits_1200Rnd_Cannon_70mm_M370_MP",
					"Splits_1200Rnd_Cannon_70mm_M370_HE",
					"Laserbatteries"
				};
				memoryPointGunnerOptics = "PIP2_pos";
				memoryPointGunnerOutOptics= "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						initAngleX=0;
						initAngleY=0;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class RearDoorGun: MainTurret
			{
				showAsCargo=1;
				minElev=-35;
				maxElev=15;
				initElev=0;
				minTurn=120; //35
				maxTurn=240;
				initTurn=180;
				isCopilot=0;
				stabilizedInAxes=3;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				gunnerAction = "Splits_Rear_Gunner_Pelican";
				gunnerInAction = "Splits_Rear_Gunner_Pelican";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				ejectDeadGunner = 0;
				body="rearturret";
				gun="reargun";
				turretAxis="reargun_turretaxis";
				gunAxis="reargun_gunaxis";
				gunnerType="OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				animationSourceBody="rearturret"; //replace meee
				animationSourceGun="reargun"; //replace meee
				selectionFireAnim="zasleh3";
				proxyIndex=26;
				gunnerName="Rear Gunner";
				weapons[]=
				{
					"Splits_M247_Coax"
				};
				magazines[] = { "Splits_1200Rnd_762x51_AP_Mag_Tracer" };
				commanding=-3;
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				primaryGunner=0;
				primaryObserver = 0;
				hideWeaponsGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				memoryPointGun="usti hlavne3";
				memoryPointGunnerOptics="reargunview";
				gunnerCompartments="Compartment26";
				gunnerLeftHandAnimName="rear_gun";
				gunnerRightHandAnimName="rear_gun";
				gunnerLeftLegAnimName="gunner_2_legs";
				gunnerRightLegAnimName="gunner_2_legs";
				gunnerOpticsModel="";
				memoryPointsGetInGunner="pos_reargunner";
				memoryPointsGetInGunnerDir="pos_reargunner_dir";
				canUseScanners=0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Hitpoints
				{
				};
			};
			class CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger (Left door)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 10;
				minTurn = -50;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger (Right door)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -25;
				maxTurn = 50;
				minTurn = -10;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="Splits_Observer_Pelican";
				gunnerInAction="Splits_Observer_Pelican";
				gunnerType="OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				gunnerName="Pelican Observer Seat";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment25";
				proxyIndex=25;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerName="Standing Seat Left";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment14";
				proxyIndex=14;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerName="Standing Seat Left";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment15";
				proxyIndex=15;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_02_Pelican"; // Splits_Standing_Seat_Left_03_Pelican unhide weapon
				gunnerName="Standing Seat Left";
       			memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment17";
				proxyIndex=17;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_07: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerName="Standing Seat Left";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment19";
				proxyIndex=19;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_08: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerName="Standing Seat Left";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment21";
				proxyIndex=21;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_09: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerName="Standing Seat Left";
        		memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        		gunnerCompartments = "Compartment23";
				proxyIndex=23;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_10: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_01_Pelican"; //Splits_Standing_Seat_Right_01_Pelican unhide weapon
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment13";
				proxyIndex=13;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_11: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_03_Pelican"; //Splits_Standing_Seat_Right_02_Pelican hide weapon
				gunnerInAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment16";
				proxyIndex=16;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_12: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_04_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_04_Pelican";
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment18";
				proxyIndex=18;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_13: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment20";
				proxyIndex=20;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_14: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment22";
				proxyIndex=22;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_15: CargoTurret_01
			{
				gunnerAction="Splits_Standing_Seat_Right_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_02_Pelican";
				gunnerName="Standing Seat Right";
        		memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        		gunnerCompartments = "Compartment24";
				proxyIndex=24;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
		};
		class HitPoints {
			class HitHull
			{
				armor = 0.1;
				visual = "Hull";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel
			{
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.05;
				explosionShielding = 1.5;
			};
			class HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
			};
			class HitVRotor
			{
				armor = 1.3;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 1;
			};
			class HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass1";
				name = "glass1";
				passThrough = 0.05;
			};
			class HitGlass2 : HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass2";
				name = "glass2";
				passThrough = 0.05;
			};
			class HitGlass3 : HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass3";
				name = "glass3";
				passThrough = 0.05;
			};
			class HitGlass4 : HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass4";
				name = "glass4";
				passThrough = 0.05;
			};
			class HitGlass5 : HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass5";
				name = "glass5";
				passThrough = 0.05;
			};
			class HitGlass6 : HitGlass1
			{
				armor = 5.25;
				explosionShielding = 1;
				visual = "glass6";
				name = "glass6";
				passThrough = 0.05;
			};
		};
		//TFAR Config
		tf_range = 50000;
		tf_isolatedAmount = 0.45;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasRadio = 1;
		enableRadio = 1;
		//scripts/UserActions
		class UserActions {
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn Splits_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				//condition = "( vehicle player != this AND vehicle player != this AND player == driver vehicle player AND (vehicle player) isKindOf ""OPTRE_cart_base"" ) ";
				statement = "Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn Splits_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]";
				animPeriod = 5;
			};
			class RampClose : RampOpen
			{
				userActionID = 51;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
			};
		};
		//Sound, mem points, dmg etc
		extCameraPosition[]={0,5.5,-32};
		memoryPointCM[]= {
			"flare_launcher1",
			"flare_launcher2",
			"flare_launcher3",
			"flare_launcher4",
			"flare_launcher5"
		};
		memoryPointCMDir[]= {
			"flare_launcher1_dir",
			"flare_launcher2_dir",
			"flare_launcher3_dir",
			"flare_launcher4_dir",
			"flare_launcher5_dir"
		};
		class ViewPilot {
			initFov = 0.75;
			minFov = 0.22; //was 0.375
			maxFov = 1.15;
		};
		class Viewoptics {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		memoryPointDriverOptics = "slingcamera";
		slingLoadMaxCargoMass = 5000;
		slingLoadMemoryPoint = "slingload0";
		class Damage {
			tex[] = {};
			mat[] = { "A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat" };
		};
		class RenderTargets {
			class FrontView
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearView
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Gunner_Camera
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.050000001;
				};
			};
		};
		class Sounds {
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-10, 1.0, 900}; // changed "db5" to "db-5"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
				//volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext", db-5, 1.0, 1200}; // changed "db3" to "db-3"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				//volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-5, 1.0, 1500}; // changed "db5" to "db-5"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
				//volume = "camPos*10*(0 max (rotorThrust-0.9))" ;
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext", db-5, 1, 800}; // changed "db0" to "db-0"
				frequency = 1;
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = {1.6,3.14,1.6,0.95};
				//volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
				//cone[] = {0.7, 1.3, 1.0, 0}; //smerovy kuzel zvuku - a=uhel vyzarovani zvuku b=uhel fadu (hranice vnejsiho fadu) x=hlasitost v vnitrnim kuzelu  y=hlasitost na druhou stranu smeru zvuku
			};
			class EngineLowIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int", db-5, 1.0};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				//volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
			};
			class EngineHighIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int", db-5, 1.2};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
				//volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int", db-5, 1.0};
				frequency = "rotorSpeed";
				volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				//volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0};
				frequency ="1";
				volume = "0.25*(1-camPos)*(speed factor[1, 150])";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1","db0",1.0,150 };
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2","db0",1.0,150 };
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1","db0",1.0,150 };
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2","db0",1.0,150 };
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor","db-10",1.0 };
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor","db-13",1.0,20 };
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low","db-10",1.0 };
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low","db-13",1.0,20 };
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\wheelsInt","db0",1.0,100 };
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = { "A3\Sounds_F\dummysound","db0",1.0,100 };
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\wheelsInt","db0",1.0,100 };
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = { "A3\Sounds_F\dummysound","db0",1.0,100 };
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\scrubTreeInt","db0",1.0,100 };
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\scrubTreeExt","db0",1.0,100 };
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = { "A3\Sounds_F\vehicles\noises\rain1_ext","db0",1.0,100 };
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = { "A3\Sounds_F\vehicles\noises\rain1_int","db0",1.0,100 };
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT","db0",1.0,500 };
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT","db0",1.0,500 };
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineDownINT","db0",1.0,500 };
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineUpINT","db0",1.0,500 };
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = { "A3\Sounds_F\vehicles\air\noises\wind_closed","db-7",1.0,50 };
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = { "A3\Sounds_F\vehicles\noises\vehicle_stress2e","db-8",1.0,50 };
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt {
			class SoundEvents {};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-10, 1.0, 900}; // changed "db5" to "db-5"
					frequency = "rotorSpeed";
					volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
					//volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorLowOut
				{
					sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext", db-5, 1.0, 1200}; // changed "db3" to "db-3"
					frequency = "rotorSpeed";
					volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					//volume = "camPos*(0 max (rotorSpeed-0.1))";
					cone[] = {1.6,3.14, 1.6, 0.95};
				};
				class RotorHighOut
				{
					sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-5, 1.0, 1500}; // changed "db5" to "db-5"
					frequency = "rotorSpeed";
					volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
					//volume = "camPos*10*(0 max (rotorThrust-0.9))" ;
					cone[] = {1.6,3.14, 1.6, 0.95};
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext", db-5, 1, 800}; // changed "db0" to "db-0"
					frequency = 1;
					volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					cone[] = {1.6,3.14,1.6,0.95};
					//volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
					//cone[] = {0.7, 1.3, 1.0, 0}; //smerovy kuzel zvuku - a=uhel vyzarovani zvuku b=uhel fadu (hranice vnejsiho fadu) x=hlasitost v vnitrnim kuzelu  y=hlasitost na druhou stranu smeru zvuku
				};
				class EngineLowIn
				{
					sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int", db-5, 1.0};
					frequency = "rotorSpeed";
					volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					//volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
				};
				class EngineHighIn
				{
					sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int", db-5, 1.2};
					frequency = "rotorSpeed";
					volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
					//volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
				};
				class ForsageIn
				{
					sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int", db-5, 1.0};
					frequency = "rotorSpeed";
					volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					//volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
				};
				class WindNoiseIn
				{
					sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0};
					frequency ="1";
					volume = "0.25*(1-camPos)*(speed factor[1, 150])";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1","db0",1.0,150 };
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2","db0",1.0,150 };
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1","db0",1.0,150 };
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2","db0",1.0,150 };
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor","db-10",1.0 };
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor","db-13",1.0,20 };
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low","db-10",1.0 };
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low","db-13",1.0,20 };
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\wheelsInt","db0",1.0,100 };
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = { "A3\Sounds_F\dummysound","db0",1.0,100 };
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\wheelsInt","db0",1.0,100 };
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = { "A3\Sounds_F\dummysound","db0",1.0,100 };
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\scrubTreeInt","db0",1.0,100 };
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\scrubTreeExt","db0",1.0,100 };
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = { "A3\Sounds_F\vehicles\noises\rain1_ext","db0",1.0,100 };
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = { "A3\Sounds_F\vehicles\noises\rain1_int","db0",1.0,100 };
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT","db0",1.0,500 };
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT","db0",1.0,500 };
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineDownINT","db0",1.0,500 };
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\SL_engineUpINT","db0",1.0,500 };
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = { "A3\Sounds_F\vehicles\air\noises\wind_closed","db-7",1.0,50 };
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[] = { "A3\Sounds_F\vehicles\noises\vehicle_stress2e","db-8",1.0,50 };
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class AnimationSources {
			class cargoDoors
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class cockpit
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";
				weapon = "Splits_M370_70mm_autocannon";
			};
			class Gatling_flash
			{
				source = "reload";
				weapon = "Splits_M370_70mm_autocannon";
			};
			class rockets_revolving_source
			{
				source = "revolving";
				weapon = "Splits_missiles_Anvil1";
			};
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class jumplight
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class cargolights_hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class cabinlights_hide: cargolights_hide
			{
			};
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};

	class BDA_UNSC_Hornet_Lite: OPTRE_UNSC_Hornet {
		dlc = "BDA";
		author = "Rib";
		faction = "B_UNSCODST";
		side = 1;
		displayName = "AV-15 Hornet Lite";
		weapons[] = {
			"OPTRE_GUA23AW",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS",
			"OPTRE_missiles_Anvil3"
		};
		magazines[] = {
			"OPTRE_2000Rnd_30mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_32Rnd_Anvil3_missiles",
		};
		armor = 200;
		hiddenSelectionsTextures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
		class textureSources {
			class standard {
				displayName="Standard Marine";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
				factions[]={"B_UNSCODST"};
			};
			class blackout {
				displayName="Blackout";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"};
				factions[]={"B_UNSCODST"};
			};
			class dark {
				displayName="Urban";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Desert {
				displayName="Desert";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Grey {
				displayName="Grey";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Jungle {
				displayName="Jungle";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Olive {
				displayName="Olive";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Woodland {
				displayName="Woodland";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Winter {
				displayName="Winter";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"};
				factions[]={"B_UNSCODST"};
			};
		};
		textureList[]= {
			"standard", 1,
			"blackout", 1,
			"dark", 1,
			"Desert", 1,
			"Grey", 1,
			"Jungle", 1,
			"Olive", 1,
			"Woodland", 1,
			"Winter", 1
		};
		class Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Hornet\HornetPylonPic.paa";
				class pylons {
					class pylons1 {
						maxweight=800;
						hardpoints[] = {"OPAEX_Hardpoint_AV14"};
						attachment="OPTRE_8rnd_C2GMLS_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.100000,0.2};
						turret[]={};
					};
					class pylons2: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.42,0.2};
					};
				};
				class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Combat Air Patrol";
						attachment[]={
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
						};
					};
					class CAS_AT {
						displayName="Vehicle Hunter";
						attachment[]={
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_2Rnd_Jackknife_missile"
						};
					};
					class CAS_Rockets {
						displayName="CAS Strafe";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};

	class BDA_UNSC_Hornet: OPTRE_UNSC_Hornet {
		dlc = "BDA";
		author = "Rib";
		faction = "B_UNSCODST";
		side = 1;
		displayName = "AV-15 Super Hornet";
		weapons[] = {
			"OPTRE_GUA23AW",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS",
			"OPTRE_missiles_Anvil3"
		};
		magazines[] = {
			"OPTRE_2000Rnd_30mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_32Rnd_Anvil3_missiles",
		};
		armor = 220;

		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"
		};
		class textureSources {
			class standard {
				displayName="Standard Marine";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
				factions[]={"B_UNSCODST"};
			};
			class blackout {
				displayName="Blackout";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"};
				factions[]={"B_UNSCODST"};
			};
			class dark {
				displayName="Urban";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Desert {
				displayName="Desert";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Grey {
				displayName="Grey";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Jungle {
				displayName="Jungle";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Olive {
				displayName="Olive";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Woodland {
				displayName="Woodland";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"};
				factions[]={"B_UNSCODST"};
			};
			class Winter {
				displayName="Winter";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"};
				factions[]={"B_UNSCODST"};
			};
		};
		textureList[]= {
			"standard", 1,
			"blackout", 1,
			"dark", 1,
			"Desert", 1,
			"Grey", 1,
			"Jungle", 1,
			"Olive", 1,
			"Woodland", 1,
			"Winter", 1
		};

		
		class Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Hornet\HornetPylonPic.paa";
				class pylons {
					class pylons1 {
						maxweight=600;
						hardpoints[] = {"OPAEX_Hardpoint_AV14"};
						attachment="OPTRE_8rnd_C2GMLS_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.100000,0.2};
						turret[]={};
					};
					class pylons2: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.22,0.2};
					};
					class pylons3: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.42,0.2};
					};
					class pylons4: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.54,0.2};
					};
				};
				class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Combat Air Patrol";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
						};
					};
					class CAS_AT {
						displayName="Vehicle Hunter";
						attachment[]={
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_2Rnd_Jackknife_missile"
						};
					};
					class CAS_Rockets {
						displayName="CAS Strafe";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};

	class BDA_UNSC_UH145A_Falcon2: OPTRE_UNSC_falcon_armed_S {
		dlc = "BDA";
		author = "Rib";
		side = 1;
		faction = "B_UNSCODST";
		displayName = "UH-145 Falcon Heavy (Armed)";
		armor = 220;
		cost = 1500;
		class TransportBackpacks {
			class _xx_B_Parachute {backpack = "B_Parachute"; count = 9;}; //1 per passenger
		};
		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=10;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=20;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=1;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=5;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=1;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};
		weapons[]=
		{
			"OPTRE_M638",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HE",
			"Laserbatteries"
		};
	};

}; //cfgend