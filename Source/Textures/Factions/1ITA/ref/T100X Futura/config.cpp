class CfgPatches
{
	class A3_Armor_F_Decade_MBT_02
	{
		addonRootClass="A3_Armor_F_Decade";
		requiredAddons[]=
		{
			"A3_Armor_F_Decade"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_MBT_02_railgun_F",
			"O_T_MBT_02_railgun_ghex_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class HitPoints;
	};
	class MBT_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class AnimationSources;
		class RenderTargets
		{
			class commander_display
			{
				class CameraView1;
			};
			class driver_display
			{
				class CameraView1;
			};
		};
		class MFD;
		class HitPoints: HitPoints
		{
			class HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
				};
			};
		};
		class DestructionEffects;
		class Wheels
		{
			class L2;
		};
	};
	class MBT_02_railgun_base_F: MBT_02_base_F
	{
		model="\a3\Armor_F_Decade\MBT_02\MBT_02_railgun_F.p3d";
		picture="\a3\Armor_F_Decade\MBT_02\Data\UI\MBT_02_RailGun_ca.paa";
		Icon="\A3\Armor_F_Decade\MBT_02\Data\UI\map_MBT_02_RailGun_ca.paa";
		displayName="$STR_A3_CfgVehicles_MBT_02_railgun_base_F0";
		class Library
		{
			libTextDesc="$STR_a3_cfgvehicles_mbt_02_railgun_base_library0";
		};
		irTargetSize=1.3;
		class RenderTargets: RenderTargets
		{
			class commander_display: commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1: CameraView1
				{
				};
			};
			class driver_display: driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1: CameraView1
				{
				};
			};
			class gunner_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="PIP2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_GUN_TL",
					"PIP_GUN_TR",
					"PIP_GUN_BL",
					"PIP_GUN_BR"
				};
			};
		};
		defaultUserMFDvalues[]={0,0,0.2,0.23999999,0.30000001};
		class MFD
		{
			class MFD_APU
			{
				topLeft="MFD_8_TL";
				topRight="MFD_8_TR";
				bottomLeft="MFD_8_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="RobotoCondensed";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={55,55,55,1};
				};
				class Bones
				{
					class Offset_Condensator
					{
						type="fixed";
						pos[]={0.31,0.34};
					};
					class Offset_Engine: Offset_Condensator
					{
						pos[]={0.31,0.53799999};
					};
					class Offset_Temp1: Offset_Condensator
					{
						pos[]={0.148,0.68000001};
					};
					class Offset_Temp2: Offset_Condensator
					{
						pos[]={0.461,0.68000001};
					};
					class Offset_FuelTemp: Offset_Condensator
					{
						pos[]={0.76999998,0.315};
					};
					class Offset_PressureUnit1: Offset_Condensator
					{
						pos[]={0.1205,0.336};
					};
					class Offset_PressureUnit2: Offset_Condensator
					{
						pos[]={0.1205,0.43599999};
					};
					class Offset_PressureUnit3: Offset_Condensator
					{
						pos[]={0.2705,0.31600001};
					};
					class Offset_Circle1: Offset_Condensator
					{
						pos[]={0.74599999,0.37900001};
					};
					class Offset_Circle2: Offset_Condensator
					{
						pos[]={0.69199997,0.505};
					};
					class Offset_Circle3: Offset_Condensator
					{
						pos[]={0.69199997,0.64099997};
					};
					class CondensatorLevel1
					{
						type="linear";
						source="user";
						sourceIndex=0;
						sourceScale=1;
						refreshRate=0.1;
						min=0;
						max=1;
						minPos[]={0,-0.105};
						maxPos[]={0,0};
					};
					class FuelLevel1: CondensatorLevel1
					{
						source="fuel";
					};
					class DeltaNLevel1: CondensatorLevel1
					{
						sourceIndex=1;
						sourceOffset=0.1;
						minPos[]={0,-0.094999999};
					};
					class HPLevel1: DeltaNLevel1
					{
						sourceIndex=2;
						sourceOffset=0.30000001;
					};
					class Rotate_Condensator
					{
						type="rotational";
						source="user";
						sourceIndex=0;
						sourceScale=1;
						center[]={0.31,0.34};
						min=0;
						max=1;
						minAngle=0;
						maxAngle=180;
						aspectRatio=1.01389;
					};
					class Rotate_Engine: Rotate_Condensator
					{
						center[]={0.31,0.53799999};
						source="user";
						sourceIndex=1;
					};
					class Rotate_Temp1: Rotate_Condensator
					{
						center[]={0.148,0.68000001};
						source="user";
						sourceIndex=2;
					};
					class Rotate_Temp2: Rotate_Condensator
					{
						center[]={0.461,0.68000001};
						source="user";
						sourceIndex=3;
					};
					class Rotate_FuelTemp: Rotate_Condensator
					{
						center[]={0.76999998,0.315};
						source="turretGunTemp";
						sourceIndex=4;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={1,1,1};
					condition="1";
					class Group_FuelTank_Background_Blue
					{
						color[]={0,0.2,1};
						alpha=0.60000002;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.67000002,0.52200001},
										1
									},
									
									{
										{0.722,0.52200001},
										1
									},
									
									{
										{0.722,0.41499999},
										1
									},
									
									{
										{0.67000002,0.41499999},
										1
									}
								},
								
								{
									
									{
										{0.67000002,0.65899998},
										1
									},
									
									{
										{0.722,0.65899998},
										1
									},
									
									{
										{0.722,0.55199999},
										1
									},
									
									{
										{0.67000002,0.55199999},
										1
									}
								}
							};
						};
					};
					class Group_FuelTank_Red
					{
						color[]={1,0,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Low
						{
							condition="(user0<0.11)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Low
						{
							condition="fuel<0.11";
							blinkingPattern=0.30000001;
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_FuelTank_Background_Yellow
					{
						color[]={0.30000001,0.30000001,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Full_Blink
						{
							condition="user0>0.9";
							blinkingPattern=0.050000001;
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class Condensator_Medium
						{
							condition="(user0<0.301)*(user0>0.1)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Medium
						{
							condition="(fuel<0.501)*(fuel>0.1)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_FuelTank_Background_Green
					{
						color[]={0,0.60000002,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Full
						{
							condition="(user0>0.3)*(user0<0.9)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Full
						{
							condition="fuel>0.5";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_Black_Background
					{
						color[]={0,0,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.67449999,0.42899999},
										1
									},
									
									{
										{0.71450001,0.42899999},
										1
									},
									
									{
										{0.71450001,0.449},
										1
									},
									
									{
										{0.67449999,0.449},
										1
									}
								},
								
								{
									
									{
										{0.67449999,0.56900001},
										1
									},
									
									{
										{0.71450001,0.56900001},
										1
									},
									
									{
										{0.71450001,0.58899999},
										1
									},
									
									{
										{0.67449999,0.58899999},
										1
									}
								}
							};
						};
					};
					class Lines
					{
						type="line";
						width=4;
						lineType=0;
						points[]=
						{
							
							{
								{0.31494099,0.57324201},
								1
							},
							
							{
								{0.32177699,0.57324201},
								1
							},
							{},
							
							{
								{0.307129,0.58642602},
								1
							},
							
							{
								{0.32177699,0.58642602},
								1
							},
							{},
							
							{
								{0.31494099,0.59765601},
								1
							},
							
							{
								{0.32177699,0.59765601},
								1
							},
							{},
							
							{
								{0.307129,0.61084002},
								1
							},
							
							{
								{0.32177699,0.61084002},
								1
							},
							{},
							
							{
								{0.31494099,0.62304699},
								1
							},
							
							{
								{0.32177699,0.62304699},
								1
							},
							{},
							
							{
								{0.307129,0.63622999},
								1
							},
							
							{
								{0.32177699,0.63622999},
								1
							},
							{},
							
							{
								{0.31494099,0.64990199},
								1
							},
							
							{
								{0.32177699,0.64990199},
								1
							},
							{},
							
							{
								{0.32177699,0.66113299},
								1
							},
							
							{
								{0.32177699,0.56152302},
								1
							},
							{},
							
							{
								{0.33300799,0.56152302},
								1
							},
							
							{
								{0.33300799,0.66113299},
								1
							},
							
							{
								{0.30859399,0.66113299},
								1
							},
							{},
							
							{
								{0.347168,0.56152302},
								1
							},
							
							{
								{0.307129,0.56152302},
								1
							},
							{},
							
							{
								{0.28906301,0.57324201},
								1
							},
							
							{
								{0.28222701,0.57324201},
								1
							},
							{},
							
							{
								{0.296875,0.58642602},
								1
							},
							
							{
								{0.28222701,0.58642602},
								1
							},
							{},
							
							{
								{0.28906301,0.59765601},
								1
							},
							
							{
								{0.28222701,0.59765601},
								1
							},
							{},
							
							{
								{0.296875,0.61084002},
								1
							},
							
							{
								{0.28222701,0.61084002},
								1
							},
							{},
							
							{
								{0.28906301,0.62304699},
								1
							},
							
							{
								{0.28222701,0.62304699},
								1
							},
							{},
							
							{
								{0.296875,0.63622999},
								1
							},
							
							{
								{0.28222701,0.63622999},
								1
							},
							{},
							
							{
								{0.28906301,0.64990199},
								1
							},
							
							{
								{0.28222701,0.64990199},
								1
							},
							{},
							
							{
								{0.28222701,0.66113299},
								1
							},
							
							{
								{0.28222701,0.56152302},
								1
							},
							{},
							
							{
								{0.270996,0.56152302},
								1
							},
							
							{
								{0.270996,0.66113299},
								1
							},
							
							{
								{0.29541001,0.66113299},
								1
							},
							{},
							
							{
								{0.256836,0.56152302},
								1
							},
							
							{
								{0.296875,0.56152302},
								1
							},
							{},
							
							{
								{0.70898402,0.64209002},
								1
							},
							
							{
								{0.74609399,0.64209002},
								1
							},
							{},
							
							{
								{0.67382801,0.50732398},
								1
							},
							
							{
								{0.640625,0.50732398},
								1
							},
							
							{
								{0.640625,0.37890601},
								1
							},
							
							{
								{0.74609399,0.37890601},
								1
							},
							
							{
								{0.74609399,0.67040998},
								1
							},
							
							{
								{0.81347698,0.67040998},
								1
							},
							
							{
								{0.81347698,0.68554699},
								1
							},
							
							{
								{0.84960902,0.68554699},
								1
							},
							
							{
								{0.84960902,0.65722698},
								1
							},
							
							{
								{0.81347698,0.65722698},
								1
							},
							
							{
								{0.81347698,0.67040998},
								1
							},
							{},
							
							{
								{0.59228498,0.162109},
								1
							},
							
							{
								{0.59228498,0.69287097},
								1
							},
							{},
							
							{
								{0.58642602,0.162109},
								1
							},
							
							{
								{0.58642602,0.69287097},
								1
							},
							{},
							
							{
								{0.029785199,0.16064499},
								1
							},
							
							{
								{0.96142602,0.16064499},
								1
							},
							
							{
								{0.96142602,0.207031},
								1
							},
							
							{
								{0.98632801,0.207031},
								1
							},
							
							{
								{0.98632801,0.32910201},
								1
							},
							
							{
								{0.961914,0.32910201},
								1
							},
							
							{
								{0.961914,0.69384801},
								1
							},
							
							{
								{0.029785199,0.69384801},
								1
							},
							
							{
								{0.029785199,0.16064499},
								1
							},
							{},
							
							{
								{0.51074201,0.89111298},
								1
							},
							
							{
								{0.53759801,0.91796899},
								1
							},
							{},
							
							{
								{0.48925799,0.89111298},
								1
							},
							
							{
								{0.46240199,0.91796899},
								1
							},
							{},
							
							{
								{0.53759801,0.86328101},
								1
							},
							
							{
								{0.50732398,0.89404303},
								1
							},
							
							{
								{0.50292999,0.897461},
								1
							},
							
							{
								{0.5,0.897461},
								1
							},
							
							{
								{0.49707001,0.897461},
								1
							},
							
							{
								{0.49267599,0.89404303},
								1
							},
							
							{
								{0.46240199,0.86328101},
								1
							},
							
							{
								{0.53759801,0.86328101},
								1
							},
							{},
							
							{
								{0.46240199,0.86328101},
								1
							},
							
							{
								{0.46240199,0.91796899},
								1
							},
							
							{
								{0.53759801,0.91796899},
								1
							},
							
							{
								{0.53759801,0.86328101},
								1
							},
							{},
							
							{
								{0.14501999,0.89111298},
								1
							},
							
							{
								{0.172363,0.91796899},
								1
							},
							{},
							
							{
								{0.124023,0.89111298},
								1
							},
							
							{
								{0.096679702,0.91796899},
								1
							},
							{},
							
							{
								{0.172363,0.86328101},
								1
							},
							
							{
								{0.14208999,0.89404303},
								1
							},
							
							{
								{0.137207,0.897461},
								1
							},
							
							{
								{0.134766,0.897461},
								1
							},
							
							{
								{0.131836,0.897461},
								1
							},
							
							{
								{0.12695301,0.89404303},
								1
							},
							
							{
								{0.096679702,0.86328101},
								1
							},
							
							{
								{0.172363,0.86328101},
								1
							},
							{},
							
							{
								{0.096679702,0.86328101},
								1
							},
							
							{
								{0.096679702,0.91796899},
								1
							},
							
							{
								{0.172363,0.91796899},
								1
							},
							
							{
								{0.172363,0.86328101},
								1
							},
							{},
							
							{
								{0.86279303,0.84716803},
								1
							},
							
							{
								{0.84228498,0.88818401},
								1
							},
							
							{
								{0.85644501,0.88818401},
								1
							},
							
							{
								{0.852539,0.91845697},
								1
							},
							
							{
								{0.87304699,0.87744099},
								1
							},
							
							{
								{0.85986298,0.87744099},
								1
							},
							
							{
								{0.86279303,0.84716803},
								1
							},
							{},
							
							{
								{0.79736298,0.631836},
								1
							},
							
							{
								{0.79736298,0.649414},
								1
							},
							{},
							
							{
								{0.74560499,0.37890601},
								1
							},
							
							{
								{0.76757801,0.37890601},
								1
							},
							
							{
								{0.76757801,0.649414},
								1
							},
							
							{
								{0.83544898,0.649414},
								1
							},
							
							{
								{0.83544898,0.631836},
								1
							},
							{},
							
							{
								{0.068000004,0.345},
								1
							},
							
							{
								{0.115,0.345},
								1
							},
							
							{
								{0.115,0.375},
								1
							},
							
							{
								{0.068000004,0.375},
								1
							},
							
							{
								{0.068000004,0.345},
								1
							},
							{},
							
							{
								{0.221,0.32499999},
								1
							},
							
							{
								{0.26800001,0.32499999},
								1
							},
							
							{
								{0.26800001,0.35499999},
								1
							},
							
							{
								{0.221,0.35499999},
								1
							},
							
							{
								{0.221,0.32499999},
								1
							},
							{},
							
							{
								{0.34099999,0.32499999},
								1
							},
							
							{
								{0.38800001,0.32499999},
								1
							},
							
							{
								{0.38800001,0.35499999},
								1
							},
							
							{
								{0.34099999,0.35499999},
								1
							},
							
							{
								{0.34099999,0.32499999},
								1
							},
							{},
							
							{
								{0.27500001,0.27599999},
								1
							},
							
							{
								{0.34200001,0.27599999},
								1
							},
							
							{
								{0.34200001,0.30599999},
								1
							},
							
							{
								{0.27500001,0.30599999},
								1
							},
							
							{
								{0.27500001,0.27599999},
								1
							},
							{},
							
							{
								{0.21699999,0.50599998},
								1
							},
							
							{
								{0.28400001,0.50599998},
								1
							},
							
							{
								{0.28400001,0.53600001},
								1
							},
							
							{
								{0.21699999,0.53600001},
								1
							},
							
							{
								{0.21699999,0.50599998},
								1
							},
							{},
							
							{
								{0.32699999,0.50599998},
								1
							},
							
							{
								{0.39399999,0.50599998},
								1
							},
							
							{
								{0.39399999,0.53600001},
								1
							},
							
							{
								{0.32699999,0.53600001},
								1
							},
							
							{
								{0.32699999,0.50599998},
								1
							},
							{},
							
							{
								{0.068000004,0.44499999},
								1
							},
							
							{
								{0.115,0.44499999},
								1
							},
							
							{
								{0.115,0.47499999},
								1
							},
							
							{
								{0.068000004,0.47499999},
								1
							},
							
							{
								{0.068000004,0.44499999},
								1
							},
							{},
							
							{
								{0.068000004,0.48100001},
								1
							},
							
							{
								{0.115,0.48100001},
								1
							},
							
							{
								{0.115,0.51099998},
								1
							},
							
							{
								{0.068000004,0.51099998},
								1
							},
							
							{
								{0.068000004,0.48100001},
								1
							},
							{},
							
							{
								{0.11,0.64899999},
								1
							},
							
							{
								{0.18700001,0.64899999},
								1
							},
							
							{
								{0.18700001,0.67900002},
								1
							},
							
							{
								{0.11,0.67900002},
								1
							},
							
							{
								{0.11,0.64899999},
								1
							},
							{},
							
							{
								{0.426,0.64899999},
								1
							},
							
							{
								{0.50300002,0.64899999},
								1
							},
							
							{
								{0.50300002,0.67900002},
								1
							},
							
							{
								{0.426,0.67900002},
								1
							},
							
							{
								{0.426,0.64899999},
								1
							},
							{},
							
							{
								{0.47499999,0.18099999},
								1
							},
							
							{
								{0.54500002,0.18099999},
								1
							},
							
							{
								{0.54500002,0.211},
								1
							},
							
							{
								{0.47499999,0.211},
								1
							},
							
							{
								{0.47499999,0.18099999},
								1
							},
							{},
							
							{
								{0.73500001,0.26199999},
								1
							},
							
							{
								{0.81,0.26199999},
								1
							},
							
							{
								{0.81,0.292},
								1
							},
							
							{
								{0.73500001,0.292},
								1
							},
							
							{
								{0.73500001,0.26199999},
								1
							},
							{},
							
							{
								{0.63800001,0.324},
								1
							},
							
							{
								{0.68900001,0.324},
								1
							},
							
							{
								{0.68900001,0.35800001},
								1
							},
							
							{
								{0.63800001,0.35800001},
								1
							},
							
							{
								{0.63800001,0.324},
								1
							},
							{},
							
							{
								{0.66799998,0.414},
								1
							},
							
							{
								{0.72000003,0.414},
								1
							},
							
							{
								{0.72000003,0.52399999},
								1
							},
							
							{
								{0.66799998,0.52399999},
								1
							},
							
							{
								{0.66799998,0.414},
								1
							},
							{},
							
							{
								{0.66799998,0.551},
								1
							},
							
							{
								{0.72000003,0.551},
								1
							},
							
							{
								{0.72000003,0.66100001},
								1
							},
							
							{
								{0.66799998,0.66100001},
								1
							},
							
							{
								{0.66799998,0.551},
								1
							},
							{},
							
							{
								{0.27000001,0.542431},
								1
							},
							
							{
								{0.27500001,0.55561101},
								1
							},
							
							{
								{0.26499999,0.55561101},
								1
							},
							
							{
								{0.27000001,0.542431},
								1
							},
							{},
							
							{
								"Offset_PressureUnit1",
								1,
								{0,0.023319401},
								1
							},
							
							{
								"Offset_PressureUnit1",
								1,
								{0.025,0.023319401},
								1
							},
							{},
							
							{
								"Offset_PressureUnit2",
								1,
								{0,0.023319401},
								1
							},
							
							{
								"Offset_PressureUnit2",
								1,
								{0.025,0.023319401},
								1
							},
							{},
							
							{
								"Offset_Circle1",
								{0,-0.0131806},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0022568,-0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0044459999,-0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0065000001,-0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0083563998,-0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0099579999,-0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{0.011258,-0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0122161,-0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0128024,-0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{0.013,0},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0128024,0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0122161,0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{0.011258,0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0099579999,0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0083563998,0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0065000001,0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0044459999,0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0022568,0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0,0.0131806},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0022568,0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0044459999,0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0065000001,0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0083563998,0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0099579999,0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.011258,0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0122161,0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0128024,0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.013,0},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0128024,-0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0122161,-0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.011258,-0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0099579999,-0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0083563998,-0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0065000001,-0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0044459999,-0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0022568,-0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0,-0.0131806},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Condensator",
								{0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Condensator",
								{0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Condensator",
								{0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Condensator",
								{0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Condensator",
								{0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Condensator",
								{0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Condensator",
								{0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Condensator",
								{0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Condensator",
								{0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Condensator",
								{0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Condensator",
								{0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Condensator",
								{0,-0.162222},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.151732,-0.00913978},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15971801,-0.0096208202},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.150931,-0.018247399},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15887401,-0.0192078},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.149598,-0.0272907},
								1
							},
							
							{
								"Offset_Condensator",
								{0.157471,-0.028727099},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.14773799,-0.036238},
								1
							},
							
							{
								"Offset_Condensator",
								{0.155514,-0.0381453},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.145358,-0.045057699},
								1
							},
							
							{
								"Offset_Condensator",
								{0.153009,-0.0474292},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.14246701,-0.053718802},
								1
							},
							
							{
								"Offset_Condensator",
								{0.149965,-0.056546099},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.139074,-0.062190801},
								1
							},
							
							{
								"Offset_Condensator",
								{0.146394,-0.065463997},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.13519099,-0.070443898},
								1
							},
							
							{
								"Offset_Condensator",
								{0.142307,-0.074151397},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.130833,-0.078448899},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13771901,-0.082577802},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.12021,-0.082209103},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13264599,-0.090713501},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.120751,-0.093603402},
								1
							},
							
							{
								"Offset_Condensator",
								{0.127106,-0.098529898},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.115063,-0.100699},
								1
							},
							
							{
								"Offset_Condensator",
								{0.121119,-0.105999},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.10897,-0.107441},
								1
							},
							
							{
								"Offset_Condensator",
								{0.114706,-0.113096},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.102494,-0.113804},
								1
							},
							
							{
								"Offset_Condensator",
								{0.107888,-0.119794},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0956567,-0.119767},
								1
							},
							
							{
								"Offset_Condensator",
								{0.100691,-0.12606999},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0884827,-0.12530801},
								1
							},
							
							{
								"Offset_Condensator",
								{0.093139701,-0.13190299},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.080997199,-0.130408},
								1
							},
							
							{
								"Offset_Condensator",
								{0.085260198,-0.137271},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.073226497,-0.135049},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0770806,-0.142156},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.065198101,-0.13921399},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0686296,-0.146541},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.054318,-0.136309},
								1
							},
							
							{
								"Offset_Condensator",
								{0.059937101,-0.15041},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0484818,-0.146062},
								1
							},
							
							{
								"Offset_Condensator",
								{0.051033501,-0.153749},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.039852701,-0.14872},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0419503,-0.156547},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.031083399,-0.15085401},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0327194,-0.158794},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0222046,-0.152458},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0233733,-0.160482},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0132477,-0.15352499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0139449,-0.161605},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0042440798,-0.15405101},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0044674599,-0.162159},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0047744401,-0.154035},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.00502573,-0.16214199},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0137762,-0.153477},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0145012,-0.16155501},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.022729401,-0.15237799},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.023925699,-0.16039801},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0301472,-0.143801},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0332659,-0.158677},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0403645,-0.148578},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.042489,-0.156398},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.048984401,-0.145889},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.051562499,-0.153568},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.057431798,-0.14268699},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.060454499,-0.150197},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.065677002,-0.138982},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.069133699,-0.14629699},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0736911,-0.134789},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0775695,-0.141883},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.081445701,-0.13011999},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.085732304,-0.136969},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.088913597,-0.124994},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.093593203,-0.13157301},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.096068397,-0.119428},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.101125,-0.12571301},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.102885,-0.113441},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.1083,-0.119411},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.104304,-0.102124},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.115094,-0.112689},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.115497,-0.088884503},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.127445,-0.098079398},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.132873,-0.0588568},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.14661799,-0.064945497},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.14105199,-0.034070101},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.155644,-0.037594602},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Engine",
								{0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Engine",
								{0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Engine",
								{0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Engine",
								{0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Engine",
								{0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Engine",
								{0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Engine",
								{0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Engine",
								{0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Engine",
								{0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Engine",
								{0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Engine",
								{0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Engine",
								{0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Engine",
								{0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Engine",
								{0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Engine",
								{0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Engine",
								{0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Engine",
								{0,-0.162222},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Engine",
								{-0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Engine",
								{-0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Engine",
								{-0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Engine",
								{-0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Engine",
								{-0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Engine",
								{-0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Engine",
								{-0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Engine",
								{-0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Engine",
								{-0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Engine",
								{-0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Engine",
								{-0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Engine",
								{-0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Engine",
								{-0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Engine",
								{-0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Engine",
								{-0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Engine",
								{-0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Engine",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.151732,-0.00913978},
								1
							},
							
							{
								"Offset_Engine",
								{0.15971801,-0.0096208202},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.150931,-0.018247399},
								1
							},
							
							{
								"Offset_Engine",
								{0.15887401,-0.0192078},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.149598,-0.0272907},
								1
							},
							
							{
								"Offset_Engine",
								{0.157471,-0.028727099},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.14773799,-0.036238},
								1
							},
							
							{
								"Offset_Engine",
								{0.155514,-0.0381453},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.145358,-0.045057699},
								1
							},
							
							{
								"Offset_Engine",
								{0.153009,-0.0474292},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.14246701,-0.053718802},
								1
							},
							
							{
								"Offset_Engine",
								{0.149965,-0.056546099},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.139074,-0.062190801},
								1
							},
							
							{
								"Offset_Engine",
								{0.146394,-0.065463997},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.13519099,-0.070443898},
								1
							},
							
							{
								"Offset_Engine",
								{0.142307,-0.074151397},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.130833,-0.078448899},
								1
							},
							
							{
								"Offset_Engine",
								{0.13771901,-0.082577802},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.12021,-0.082209103},
								1
							},
							
							{
								"Offset_Engine",
								{0.13264599,-0.090713501},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.120751,-0.093603402},
								1
							},
							
							{
								"Offset_Engine",
								{0.127106,-0.098529898},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.115063,-0.100699},
								1
							},
							
							{
								"Offset_Engine",
								{0.121119,-0.105999},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.10897,-0.107441},
								1
							},
							
							{
								"Offset_Engine",
								{0.114706,-0.113096},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.102494,-0.113804},
								1
							},
							
							{
								"Offset_Engine",
								{0.107888,-0.119794},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0956567,-0.119767},
								1
							},
							
							{
								"Offset_Engine",
								{0.100691,-0.12606999},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0884827,-0.12530801},
								1
							},
							
							{
								"Offset_Engine",
								{0.093139701,-0.13190299},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.080997199,-0.130408},
								1
							},
							
							{
								"Offset_Engine",
								{0.085260198,-0.137271},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.073226497,-0.135049},
								1
							},
							
							{
								"Offset_Engine",
								{0.0770806,-0.142156},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.065198101,-0.13921399},
								1
							},
							
							{
								"Offset_Engine",
								{0.0686296,-0.146541},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.054318,-0.136309},
								1
							},
							
							{
								"Offset_Engine",
								{0.059937101,-0.15041},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0484818,-0.146062},
								1
							},
							
							{
								"Offset_Engine",
								{0.051033501,-0.153749},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.039852701,-0.14872},
								1
							},
							
							{
								"Offset_Engine",
								{0.0419503,-0.156547},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.031083399,-0.15085401},
								1
							},
							
							{
								"Offset_Engine",
								{0.0327194,-0.158794},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0222046,-0.152458},
								1
							},
							
							{
								"Offset_Engine",
								{0.0233733,-0.160482},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0132477,-0.15352499},
								1
							},
							
							{
								"Offset_Engine",
								{0.0139449,-0.161605},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0042440798,-0.15405101},
								1
							},
							
							{
								"Offset_Engine",
								{0.0044674599,-0.162159},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0047744401,-0.154035},
								1
							},
							
							{
								"Offset_Engine",
								{-0.00502573,-0.16214199},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0137762,-0.153477},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0145012,-0.16155501},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.022729401,-0.15237799},
								1
							},
							
							{
								"Offset_Engine",
								{-0.023925699,-0.16039801},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0301472,-0.143801},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0332659,-0.158677},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0403645,-0.148578},
								1
							},
							
							{
								"Offset_Engine",
								{-0.042489,-0.156398},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.048984401,-0.145889},
								1
							},
							
							{
								"Offset_Engine",
								{-0.051562499,-0.153568},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.057431798,-0.14268699},
								1
							},
							
							{
								"Offset_Engine",
								{-0.060454499,-0.150197},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.065677002,-0.138982},
								1
							},
							
							{
								"Offset_Engine",
								{-0.069133699,-0.14629699},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0736911,-0.134789},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0775695,-0.141883},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.081445701,-0.13011999},
								1
							},
							
							{
								"Offset_Engine",
								{-0.085732304,-0.136969},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.088913597,-0.124994},
								1
							},
							
							{
								"Offset_Engine",
								{-0.093593203,-0.13157301},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.096068397,-0.119428},
								1
							},
							
							{
								"Offset_Engine",
								{-0.101125,-0.12571301},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.102885,-0.113441},
								1
							},
							
							{
								"Offset_Engine",
								{-0.1083,-0.119411},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.104304,-0.102124},
								1
							},
							
							{
								"Offset_Engine",
								{-0.115094,-0.112689},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.115497,-0.088884503},
								1
							},
							
							{
								"Offset_Engine",
								{-0.127445,-0.098079398},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.132873,-0.0588568},
								1
							},
							
							{
								"Offset_Engine",
								{-0.14661799,-0.064945497},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.14105199,-0.034070101},
								1
							},
							
							{
								"Offset_Engine",
								{-0.155644,-0.037594602},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Engine",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp1",
								{0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp1",
								{0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp1",
								{0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp1",
								{0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp1",
								{0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp1",
								{0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp1",
								{0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp1",
								{0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp1",
								{0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp1",
								{0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp1",
								{0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp1",
								{0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp1",
								{0,-0.116597},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.090840898,-0.05339},
								1
							},
							
							{
								"Offset_Temp1",
								{0.099492401,-0.058474801},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.052182298,-0.092380904},
								1
							},
							
							{
								"Offset_Temp1",
								{0.057151999,-0.101179},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.00054978201,-0.106457},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.00060214201,-0.116596},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.053133599,-0.091821797},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0581939,-0.100567},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.091387302,-0.052422602},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.100091,-0.057415199},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0983698,-0.037230302},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.107738,-0.040775999},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.102914,-0.0211151},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.112715,-0.023126099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.109848,-0.0058563501},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114841,-0.00612255},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.109393,-0.0116965},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114366,-0.0122282},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.108637,-0.0175044},
								1
							},
							
							{
								"Offset_Temp1",
								{0.113575,-0.018300099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.10758,-0.023264101},
								1
							},
							
							{
								"Offset_Temp1",
								{0.11247,-0.0243215},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.106227,-0.0289595},
								1
							},
							
							{
								"Offset_Temp1",
								{0.111055,-0.0302759},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.104581,-0.034575},
								1
							},
							
							{
								"Offset_Temp1",
								{0.109334,-0.0361466},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.102646,-0.040095199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.107311,-0.0419177},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.100427,-0.0455046},
								1
							},
							
							{
								"Offset_Temp1",
								{0.104992,-0.047573},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.097932197,-0.0507886},
								1
							},
							
							{
								"Offset_Temp1",
								{0.102384,-0.053097099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.092138603,-0.060921799},
								1
							},
							
							{
								"Offset_Temp1",
								{0.096326701,-0.063690998},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.088856302,-0.0657432},
								1
							},
							
							{
								"Offset_Temp1",
								{0.092895202,-0.068731502},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.085328802,-0.070383199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.089207403,-0.073582403},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.081565797,-0.0748289},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0852734,-0.078230299},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.077577896,-0.079068199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0811041,-0.082662202},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.073375799,-0.083089396},
								1
							},
							
							{
								"Offset_Temp1",
								{0.076711103,-0.086866103},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.068971299,-0.086881198},
								1
							},
							
							{
								"Offset_Temp1",
								{0.072106399,-0.090830401},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.064376503,-0.090433396},
								1
							},
							
							{
								"Offset_Temp1",
								{0.067302696,-0.094544001},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.059604,-0.093736},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0623133,-0.097996697},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.049579401,-0.099556901},
								1
							},
							
							{
								"Offset_Temp1",
								{0.051833,-0.104082},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0443548,-0.102059},
								1
							},
							
							{
								"Offset_Temp1",
								{0.046371002,-0.106698},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.039007898,-0.10428},
								1
							},
							
							{
								"Offset_Temp1",
								{0.040780999,-0.10902},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.033553399,-0.106213},
								1
							},
							
							{
								"Offset_Temp1",
								{0.035078499,-0.111041},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0280062,-0.107852},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0292792,-0.112755},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.022381799,-0.109195},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0233991,-0.114158},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0166956,-0.110236},
								1
							},
							
							{
								"Offset_Temp1",
								{0.017454499,-0.115246},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0109634,-0.110972},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0114617,-0.116017},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0052008899,-0.111403},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0054372898,-0.116467},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0063512102,-0.111342},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0066399002,-0.116403},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0121089,-0.11085},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0126593,-0.115889},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0178333,-0.110052},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.018643901,-0.115055},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0235084,-0.108951},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.024576901,-0.113903},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.029118599,-0.107549},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.030442201,-0.112438},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0346485,-0.105851},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.036223501,-0.110662},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.040082801,-0.10386},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0419048,-0.108581},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.045406502,-0.101583},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.047470398,-0.1062},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.050604898,-0.099025004},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.052905198,-0.103526},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.060568899,-0.093098},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.063322,-0.097329699},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.065306999,-0.089744903},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.068275496,-0.0938242},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.069864802,-0.086144201},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0730405,-0.090059802},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.07423,-0.082305796},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0776041,-0.086046897},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.078390203,-0.078240298},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.081953399,-0.081796601},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.082334198,-0.073958799},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.086076699,-0.077320598},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.086051002,-0.069473401},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0899624,-0.072631203},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.089530401,-0.064796202},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.093599997,-0.067741498},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.092762701,-0.0599402},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.096979201,-0.062664799},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp2",
								{0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp2",
								{0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp2",
								{0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp2",
								{0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp2",
								{0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp2",
								{0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp2",
								{0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp2",
								{0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp2",
								{0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp2",
								{0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp2",
								{0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp2",
								{0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp2",
								{0,-0.116597},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.090840898,-0.05339},
								1
							},
							
							{
								"Offset_Temp2",
								{0.099492401,-0.058474801},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.052182298,-0.092380904},
								1
							},
							
							{
								"Offset_Temp2",
								{0.057151999,-0.101179},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.00054978201,-0.106457},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.00060214201,-0.116596},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.053133599,-0.091821797},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0581939,-0.100567},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.091387302,-0.052422602},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.100091,-0.057415199},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0983698,-0.037230302},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.107738,-0.040775999},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.102914,-0.0211151},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.112715,-0.023126099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.109848,-0.0058563501},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114841,-0.00612255},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.109393,-0.0116965},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114366,-0.0122282},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.108637,-0.0175044},
								1
							},
							
							{
								"Offset_Temp2",
								{0.113575,-0.018300099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.10758,-0.023264101},
								1
							},
							
							{
								"Offset_Temp2",
								{0.11247,-0.0243215},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.106227,-0.0289595},
								1
							},
							
							{
								"Offset_Temp2",
								{0.111055,-0.0302759},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.104581,-0.034575},
								1
							},
							
							{
								"Offset_Temp2",
								{0.109334,-0.0361466},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.102646,-0.040095199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.107311,-0.0419177},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.100427,-0.0455046},
								1
							},
							
							{
								"Offset_Temp2",
								{0.104992,-0.047573},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.097932197,-0.0507886},
								1
							},
							
							{
								"Offset_Temp2",
								{0.102384,-0.053097099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.092138603,-0.060921799},
								1
							},
							
							{
								"Offset_Temp2",
								{0.096326701,-0.063690998},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.088856302,-0.0657432},
								1
							},
							
							{
								"Offset_Temp2",
								{0.092895202,-0.068731502},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.085328802,-0.070383199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.089207403,-0.073582403},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.081565797,-0.0748289},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0852734,-0.078230299},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.077577896,-0.079068199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0811041,-0.082662202},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.073375799,-0.083089396},
								1
							},
							
							{
								"Offset_Temp2",
								{0.076711103,-0.086866103},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.068971299,-0.086881198},
								1
							},
							
							{
								"Offset_Temp2",
								{0.072106399,-0.090830401},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.064376503,-0.090433396},
								1
							},
							
							{
								"Offset_Temp2",
								{0.067302696,-0.094544001},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.059604,-0.093736},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0623133,-0.097996697},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.049579401,-0.099556901},
								1
							},
							
							{
								"Offset_Temp2",
								{0.051833,-0.104082},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0443548,-0.102059},
								1
							},
							
							{
								"Offset_Temp2",
								{0.046371002,-0.106698},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.039007898,-0.10428},
								1
							},
							
							{
								"Offset_Temp2",
								{0.040780999,-0.10902},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.033553399,-0.106213},
								1
							},
							
							{
								"Offset_Temp2",
								{0.035078499,-0.111041},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0280062,-0.107852},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0292792,-0.112755},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.022381799,-0.109195},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0233991,-0.114158},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0166956,-0.110236},
								1
							},
							
							{
								"Offset_Temp2",
								{0.017454499,-0.115246},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0109634,-0.110972},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0114617,-0.116017},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0052008899,-0.111403},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0054372898,-0.116467},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0063512102,-0.111342},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0066399002,-0.116403},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0121089,-0.11085},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0126593,-0.115889},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0178333,-0.110052},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.018643901,-0.115055},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0235084,-0.108951},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.024576901,-0.113903},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.029118599,-0.107549},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.030442201,-0.112438},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0346485,-0.105851},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.036223501,-0.110662},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.040082801,-0.10386},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0419048,-0.108581},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.045406502,-0.101583},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.047470398,-0.1062},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.050604898,-0.099025004},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.052905198,-0.103526},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.060568899,-0.093098},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.063322,-0.097329699},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.065306999,-0.089744903},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.068275496,-0.0938242},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.069864802,-0.086144201},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0730405,-0.090059802},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.07423,-0.082305796},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0776041,-0.086046897},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.078390203,-0.078240298},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.081953399,-0.081796601},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.082334198,-0.073958799},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.086076699,-0.077320598},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.086051002,-0.069473401},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0899624,-0.072631203},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.089530401,-0.064796202},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.093599997,-0.067741498},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.092762701,-0.0599402},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.096979201,-0.062664799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.144448,-0.0128131},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14279699,-0.025528699},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14005899,-0.03805},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.136255,-0.0502817},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.13141499,-0.062130701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.12557399,-0.073506899},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.118777,-0.084323697},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.111076,-0.094498701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.10253,-0.103955},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0932042,-0.112619},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.083168603,-0.120427},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.072499998,-0.12731799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.061279599,-0.13324},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.049592901,-0.13814799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.037528802,-0.142005},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.025179001,-0.14478},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0126376,-0.14645401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0,-0.14701401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0126376,-0.14645401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.025179001,-0.14478},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.037528802,-0.142005},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.049592901,-0.13814799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.061279599,-0.13324},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.072499998,-0.12731799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.083168603,-0.120427},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0932042,-0.112619},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.10253,-0.103955},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.111076,-0.094498701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.118777,-0.084323697},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.12557399,-0.073506899},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.13141499,-0.062130701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.136255,-0.0502817},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14005899,-0.03805},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14279699,-0.025528699},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.144448,-0.0128131},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.145,6.42618e-009},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.132,5.85004e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.13393401,-0.0239441},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14279699,-0.025528699},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.124039,-0.0457737},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.136255,-0.0502817},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.117779,-0.068944402},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.12557399,-0.073506899},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.101118,-0.0860264},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.111076,-0.094498701},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.0874191,-0.105629},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0932042,-0.112619},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.066,-0.115903},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.072499998,-0.12731799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.046514701,-0.129573},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.049592901,-0.13814799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.022921599,-0.1318},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.025179001,-0.14478},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0,-0.137889},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0,-0.14701401},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.022921599,-0.1318},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.025179001,-0.14478},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.046514701,-0.129573},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.049592901,-0.13814799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.066,-0.115903},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.072499998,-0.12731799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.0874191,-0.105629},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0932042,-0.112619},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.101118,-0.0860264},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.111076,-0.094498701},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.117779,-0.068944402},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.12557399,-0.073506899},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.124039,-0.0457737},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.136255,-0.0502817},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.13393401,-0.0239441},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14279699,-0.025528699},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.132,5.85004e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.145,6.42618e-009},
								1
							},
							{}
						};
					};
					class Yellow
					{
						color[]={1,1,0};
						alpha=1;
						class Arrows
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"Rotate_Condensator",
									{-0.125,-0.0060000001},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.13500001,0},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.125,0.0060000001},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.125,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Engine",
									{-0.125,-0.0060000001},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.13500001,0},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.125,0.0060000001},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.125,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Temp1",
									{-0.079999998,-0.0060000001},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.090000004,0},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.079999998,0.0060000001},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.079999998,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Temp2",
									{-0.079999998,-0.0060000001},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.090000004,0},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.079999998,0.0060000001},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.079999998,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_FuelTemp",
									{-0.11,-0.0060000001},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.12,0},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.11,0.0060000001},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.11,-0.0060000001},
									1
								},
								{}
							};
						};
						class ArrowsBold
						{
							type="line";
							width=14;
							points[]=
							{
								
								{
									"Rotate_Condensator",
									{-0.12800001,0},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.108,0},
									1
								},
								{},
								
								{
									"Rotate_Engine",
									{-0.12800001,0},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.108,0},
									1
								},
								{},
								
								{
									"Rotate_Temp1",
									{-0.082000002,0},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.071999997,0},
									1
								},
								{},
								
								{
									"Rotate_Temp2",
									{-0.082000002,0},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.071999997,0},
									1
								},
								{},
								
								{
									"Rotate_FuelTemp",
									{-0.108,0},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.092,0},
									1
								},
								{}
							};
						};
					};
					class LinesThin
					{
						type="line";
						width=1;
						lineType=0;
						points[]=
						{
							
							{
								{0.78564501,0.37890601},
								1
							},
							
							{
								{0.84619099,0.37890601},
								1
							},
							{},
							
							{
								{0.83740199,0.63622999},
								1
							},
							
							{
								{0.84619099,0.63622999},
								1
							},
							{},
							
							{
								{0.79980499,0.63622999},
								1
							},
							
							{
								{0.83300799,0.63622999},
								1
							},
							{},
							
							{
								{0.78564501,0.63622999},
								1
							},
							
							{
								{0.79443401,0.63622999},
								1
							},
							{},
							
							{
								{0.84814501,0.38085899},
								1
							},
							
							{
								{0.84814501,0.63427699},
								1
							},
							{},
							
							{
								{0.78320301,0.38085899},
								1
							},
							
							{
								{0.78320301,0.63427699},
								1
							},
							{},
							
							{
								{0.79736298,0.631836},
								1
							},
							
							{
								{0.79736298,0.649414},
								1
							},
							{},
							
							{
								{0.82665998,0.64111298},
								1
							},
							
							{
								{0.83007801,0.64111298},
								1
							},
							{},
							
							{
								{0.80419898,0.63867199},
								1
							},
							
							{
								{0.80419898,0.64404303},
								1
							},
							{},
							
							{
								{0.80175799,0.64160198},
								1
							},
							
							{
								{0.80761701,0.64160198},
								1
							},
							{}
						};
					};
					class Group_RG_Background_DarkYellow
					{
						color[]={0.95700002,0.78799999,0.078000002};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.80322301,0.631836},
										1
									},
									
									{
										{0.79052699,0.631836},
										1
									},
									
									{
										{0.79052699,0.38281301},
										1
									},
									
									{
										{0.80322301,0.38281301},
										1
									}
								},
								
								{
									
									{
										{0.84082001,0.631836},
										1
									},
									
									{
										{0.82861298,0.631836},
										1
									},
									
									{
										{0.82861298,0.38281301},
										1
									},
									
									{
										{0.84082001,0.38281301},
										1
									}
								}
							};
						};
					};
					class Red_RG_Lines
					{
						color[]={0.89999998,0.1,0.1};
						alpha=1;
						class Lines
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									{0.80322301,0.631836},
									1
								},
								
								{
									{0.79052699,0.631836},
									1
								},
								
								{
									{0.79052699,0.38281301},
									1
								},
								
								{
									{0.80322301,0.38281301},
									1
								},
								
								{
									{0.80322301,0.631836},
									1
								},
								{}
							};
						};
					};
					class Group_RG_Background_White
					{
						color[]={1,1,1};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.82031298,0.56542999},
										1
									},
									
									{
										{0.81152302,0.56542999},
										1
									},
									
									{
										{0.81445301,0.55859399},
										1
									},
									
									{
										{0.81738299,0.55859399},
										1
									}
								},
								
								{
									
									{
										{0.82177699,0.57177699},
										1
									},
									
									{
										{0.80957001,0.57177699},
										1
									},
									
									{
										{0.81152302,0.56542999},
										1
									},
									
									{
										{0.82031298,0.56542999},
										1
									}
								},
								
								{
									
									{
										{0.82177699,0.60693401},
										1
									},
									
									{
										{0.80957001,0.60693401},
										1
									},
									
									{
										{0.80957001,0.57177699},
										1
									},
									
									{
										{0.82177699,0.57177699},
										1
									}
								}
							};
						};
					};
					class Blue_RG_Lines
					{
						color[]={0.030999999,0.1,0.9497};
						alpha=1;
						class Lines
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									{0.81591803,0.55859399},
									1
								},
								
								{
									{0.81445301,0.55859399},
									1
								},
								
								{
									{0.81396502,0.55957001},
									1
								},
								
								{
									{0.8125,0.5625},
									1
								},
								
								{
									{0.81103498,0.56640601},
									1
								},
								
								{
									{0.80957001,0.57177699},
									1
								},
								
								{
									{0.80957001,0.60693401},
									1
								},
								
								{
									{0.81591803,0.60693401},
									1
								},
								
								{
									{0.82177699,0.60693401},
									1
								},
								
								{
									{0.82177699,0.57177699},
									1
								},
								
								{
									{0.82080102,0.56640601},
									1
								},
								
								{
									{0.819336,0.56298798},
									1
								},
								
								{
									{0.81787097,0.55957001},
									1
								},
								
								{
									{0.81689501,0.55859399},
									1
								},
								
								{
									{0.81591803,0.55859399},
									1
								},
								{},
								
								{
									{0.84082001,0.631836},
									1
								},
								
								{
									{0.82861298,0.631836},
									1
								},
								
								{
									{0.82861298,0.38281301},
									1
								},
								
								{
									{0.84082001,0.38281301},
									1
								},
								
								{
									{0.84082001,0.631836},
									1
								},
								{}
							};
						};
					};
					class Group_RG_Background_Blue
					{
						color[]={0.030999999,0.271,0.9497};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.834961,0.602539},
										1
									},
									
									{
										{0.81884801,0.602539},
										1
									},
									
									{
										{0.81884801,0.57714802},
										1
									},
									
									{
										{0.834961,0.57714802},
										1
									}
								},
								
								{
									
									{
										{0.81347698,0.602539},
										1
									},
									
									{
										{0.79736298,0.602539},
										1
									},
									
									{
										{0.79736298,0.57714802},
										1
									},
									
									{
										{0.81347698,0.57714802},
										1
									}
								}
							};
						};
					};
					class Green_RG_Lines
					{
						color[]={0.1,0.40000001,0.1};
						alpha=1;
						class Lines
						{
							type="line";
							width=2;
							lineType=0;
							points[]=
							{
								
								{
									{0.834961,0.602539},
									1
								},
								
								{
									{0.81884801,0.602539},
									1
								},
								
								{
									{0.81884801,0.57714802},
									1
								},
								
								{
									{0.834961,0.57714802},
									1
								},
								
								{
									{0.834961,0.602539},
									1
								},
								{},
								
								{
									{0.81347698,0.602539},
									1
								},
								
								{
									{0.79736298,0.602539},
									1
								},
								
								{
									{0.79736298,0.57714802},
									1
								},
								
								{
									{0.81347698,0.57714802},
									1
								},
								
								{
									{0.81347698,0.602539},
									1
								},
								{}
							};
						};
					};
					class TopText_1
					{
						type="text";
						source="static";
						text="ДПУ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*0",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.15099999,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*0",
								0.041999999
							},
							1
						};
					};
					class TopText_2
					{
						type="text";
						source="static";
						text="ОТБ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*1",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.271,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*1",
								0.041999999
							},
							1
						};
					};
					class TopText_3
					{
						type="text";
						source="static";
						text="ОВО";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*2",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.391,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*2",
								0.041999999
							},
							1
						};
					};
					class TopText_4
					{
						type="text";
						source="static";
						text="БКС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*3",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.51099998,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*3",
								0.041999999
							},
							1
						};
					};
					class TopText_5
					{
						type="text";
						source="static";
						text="БВ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*4",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.63099998,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*4",
								0.041999999
							},
							1
						};
					};
					class TopText_6
					{
						type="text";
						source="static";
						text="СН";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*5",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.75099999,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*5",
								0.041999999
							},
							1
						};
					};
					class TextRight1
					{
						type="text";
						source="static";
						text="В";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.222},
							1
						};
						right[]=
						{
							{1.013,0.222},
							1
						};
						down[]=
						{
							{0.97299999,0.259},
							1
						};
					};
					class TextRight2
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.24699999},
							1
						};
						right[]=
						{
							{1.013,0.24699999},
							1
						};
						down[]=
						{
							{0.97299999,0.28400001},
							1
						};
					};
					class TextRight3
					{
						type="text";
						source="static";
						text="У";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.27200001},
							1
						};
						right[]=
						{
							{1.013,0.27200001},
							1
						};
						down[]=
						{
							{0.97299999,0.30899999},
							1
						};
					};
					class TextRight4
					{
						type="text";
						source="static";
						text="Г";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.34200001},
							1
						};
						right[]=
						{
							{1.013,0.34200001},
							1
						};
						down[]=
						{
							{0.97299999,0.37900001},
							1
						};
					};
					class TextRight5
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.36700001},
							1
						};
						right[]=
						{
							{1.013,0.36700001},
							1
						};
						down[]=
						{
							{0.97299999,0.40400001},
							1
						};
					};
					class TextRight6
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.42199999},
							1
						};
						right[]=
						{
							{1.013,0.42199999},
							1
						};
						down[]=
						{
							{0.97299999,0.45899999},
							1
						};
					};
					class TextRight7
					{
						type="text";
						source="static";
						text="О";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.447},
							1
						};
						right[]=
						{
							{1.013,0.447},
							1
						};
						down[]=
						{
							{0.97299999,0.484},
							1
						};
					};
					class TextRight8
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.472},
							1
						};
						right[]=
						{
							{1.013,0.472},
							1
						};
						down[]=
						{
							{0.97299999,0.509},
							1
						};
					};
					class TextRight9
					{
						type="text";
						source="static";
						text="Л";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.49700001},
							1
						};
						right[]=
						{
							{1.013,0.49700001},
							1
						};
						down[]=
						{
							{0.97299999,0.53399998},
							1
						};
					};
					class TextRight10
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.542},
							1
						};
						right[]=
						{
							{1.013,0.542},
							1
						};
						down[]=
						{
							{0.97299999,0.579},
							1
						};
					};
					class TextRight11
					{
						type="text";
						source="static";
						text="Э";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.56699997},
							1
						};
						right[]=
						{
							{1.013,0.56699997},
							1
						};
						down[]=
						{
							{0.97299999,0.60399997},
							1
						};
					};
					class TextRight12
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.59200001},
							1
						};
						right[]=
						{
							{1.013,0.59200001},
							1
						};
						down[]=
						{
							{0.97299999,0.62900001},
							1
						};
					};
					class TextRight13
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.63599998},
							1
						};
						right[]=
						{
							{1.013,0.63599998},
							1
						};
						down[]=
						{
							{0.97299999,0.67299998},
							1
						};
					};
					class TextRight14
					{
						type="text";
						source="static";
						text="О";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.66100001},
							1
						};
						right[]=
						{
							{1.013,0.66100001},
							1
						};
						down[]=
						{
							{0.97299999,0.69800001},
							1
						};
					};
					class TextRight15
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.68599999},
							1
						};
						right[]=
						{
							{1.013,0.68599999},
							1
						};
						down[]=
						{
							{0.97299999,0.72299999},
							1
						};
					};
					class MainCondensator1
					{
						type="text";
						source="static";
						text="ГЛАВ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.25999999},
							1
						};
						right[]=
						{
							{0.121,0.25999999},
							1
						};
						down[]=
						{
							{0.093000002,0.289},
							1
						};
					};
					class MainCondensator2
					{
						type="text";
						source="static";
						text="СК";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.28299999},
							1
						};
						right[]=
						{
							{0.121,0.28299999},
							1
						};
						down[]=
						{
							{0.093000002,0.31200001},
							1
						};
					};
					class MainEngine1
					{
						type="text";
						source="static";
						text="ГЛАВ ДВИГ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.41},
							1
						};
						right[]=
						{
							{0.121,0.41},
							1
						};
						down[]=
						{
							{0.093000002,0.43900001},
							1
						};
					};
					class RmCondensator1
					{
						type="text";
						source="static";
						text="Р";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.34},
							1
						};
						right[]=
						{
							{0.068000004,0.34},
							1
						};
						down[]=
						{
							{0.039999999,0.36899999},
							1
						};
					};
					class RmCondensator2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.345
							},
							1
						};
						right[]=
						{
							{0.082999997,0.345},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.37400001
							},
							1
						};
					};
					class RmCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user0 < 0.5";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class RmCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user0 > 0.49)*(user0<0.51)+user0>0.8";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class RmCondensatorValue_3
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user0 > 0.5)*(user0<0.81)";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class PnwCondensator1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.235,0.27200001},
							1
						};
						right[]=
						{
							{0.26300001,0.27200001},
							1
						};
						down[]=
						{
							{0.235,0.301},
							1
						};
					};
					class PnwCondensator2
					{
						type="text";
						source="static";
						text="нв";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.235+0.015",
								0.27700001
							},
							1
						};
						right[]=
						{
							{0.278,0.27700001},
							1
						};
						down[]=
						{
							
							{
								"0.235+0.015",
								0.30599999
							},
							1
						};
					};
					class PnwCondensator3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.335+0.015",
								0.27700001
							},
							1
						};
						right[]=
						{
							{0.37799999,0.27700001},
							1
						};
						down[]=
						{
							
							{
								"0.335+0.015",
								0.30599999
							},
							1
						};
					};
					class PnwCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user0 < 0.21";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class PnwCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user0 > 0.2)*(user0<0.67)+user0>0.8";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class PnwCondensatorValue_3
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user0 > 0.65)*(user0<0.81)";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class MtCondensator1
					{
						type="text";
						source="static";
						text="М";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.44499999,0.182},
							1
						};
						right[]=
						{
							{0.47299999,0.182},
							1
						};
						down[]=
						{
							{0.44499999,0.211},
							1
						};
					};
					class MtCondensator2
					{
						type="text";
						source="static";
						text="т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.445+0.015",
								0.18700001
							},
							1
						};
						right[]=
						{
							{0.48800001,0.18700001},
							1
						};
						down[]=
						{
							
							{
								"0.445+0.015",
								0.21600001
							},
							1
						};
					};
					class MtCondensator3
					{
						type="text";
						source="static";
						text="кг";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.539+0.015",
								0.18700001
							},
							1
						};
						right[]=
						{
							{0.58200002,0.18700001},
							1
						};
						down[]=
						{
							
							{
								"0.539+0.015",
								0.21600001
							},
							1
						};
					};
					class MtCondensatorValue_1
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user0 < 0.11";
						class MtCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourceScale=67.050003;
							refreshRate=0.89999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.445+0.088",
									"0.182-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.56199998,
									"0.182-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.445+0.088",
									0.212
								},
								1
							};
						};
					};
					class MtCondensatorValue_2
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="user0>0.1";
						class MtCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourceScale=67.050003;
							refreshRate=0.89999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.445+0.088",
									"0.182-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.56199998,
									"0.182-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.445+0.088",
									0.212
								},
								1
							};
						};
					};
					class TmCondensator1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30899999,0.324},
							1
						};
						right[]=
						{
							{0.33700001,0.324},
							1
						};
						down[]=
						{
							{0.30899999,0.35299999},
							1
						};
					};
					class TmCondensator2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.309+0.015",
								0.329
							},
							1
						};
						right[]=
						{
							{0.352,0.329},
							1
						};
						down[]=
						{
							
							{
								"0.309+0.015",
								0.35800001
							},
							1
						};
					};
					class TmCondensator3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.39899999,0.324},
							1
						};
						right[]=
						{
							{0.42699999,0.324},
							1
						};
						down[]=
						{
							{0.39899999,0.35299999},
							1
						};
					};
					class TmCondensatorValue_1
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="user4 < 0.7";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class TmCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user4 > 0.69)*(user4<0.91)";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class TmCondensatorValue_3
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user4 > 0.9";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user4 < 0.7";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_2
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user4 > 0.69)*(user4<0.91)";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_3
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user4 > 0.9";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class RmEngine1
					{
						type="text";
						source="static";
						text="Р";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.44600001},
							1
						};
						right[]=
						{
							{0.068000004,0.44600001},
							1
						};
						down[]=
						{
							{0.039999999,0.47499999},
							1
						};
					};
					class RmEngine2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.45100001
							},
							1
						};
						right[]=
						{
							{0.082999997,0.45100001},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.47999999
							},
							1
						};
					};
					class RmEngineValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=3.5;
						sourcePrecision=1;
						refreshRate=0.80000001;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.04+0.068",
								"0.446-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.13699999,
								"0.446-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.068",
								0.47600001
							},
							1
						};
					};
					class TmEngine1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.48100001},
							1
						};
						right[]=
						{
							{0.068000004,0.48100001},
							1
						};
						down[]=
						{
							{0.039999999,0.50999999},
							1
						};
					};
					class TmEngine2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.486
							},
							1
						};
						right[]=
						{
							{0.082999997,0.486},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.51499999
							},
							1
						};
					};
					class TmEngine3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13,0.48100001},
							1
						};
						right[]=
						{
							{0.15800001,0.48100001},
							1
						};
						down[]=
						{
							{0.13,0.50999999},
							1
						};
					};
					class TmEngineValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=115;
						refreshRate=0.89999998;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.04+0.068",
								"0.481-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.13699999,
								"0.481-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.068",
								0.51099998
							},
							1
						};
					};
					class PtkEngine1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							{-0.018999999,-0.056000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.0089999996,-0.056000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							{-0.018999999,-0.027000001},
							1
						};
					};
					class PtkEngine2
					{
						type="text";
						source="static";
						text="тк";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"-0.019+0.015",
								-0.050999999
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.024,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"-0.019+0.015",
								-0.022
							},
							1
						};
					};
					class PtkEngine3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							{-0.003,-0.026000001},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.025,-0.026000001},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							{-0.003,0.003},
							1
						};
					};
					class PtkEngineValue1
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=110;
						refreshRate=0.5;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Engine",
							{-0.057,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							{-0.028000001,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							{-0.057,-0.001},
							1
						};
					};
					class PtkEngineValue2: PtkEngineValue1
					{
						sourceIndex=1;
						sourceScale=108;
						refreshRate=0.80000001;
						pos[]=
						{
							"Offset_Engine",
							{0.050999999,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							{0.079999998,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							{0.050999999,-0.001},
							1
						};
					};
					class PtkFuelTemp1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.61000001,0.32600001},
							1
						};
						right[]=
						{
							{0.63800001,0.32600001},
							1
						};
						down[]=
						{
							{0.61000001,0.35499999},
							1
						};
					};
					class PtkFuelTemp2
					{
						type="text";
						source="static";
						text="тк";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.61+0.015",
								0.331
							},
							1
						};
						right[]=
						{
							{0.653,0.331},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.015",
								0.36000001
							},
							1
						};
					};
					class PtkFuelTemp3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.61+0.09",
								0.32600001
							},
							1
						};
						right[]=
						{
							{0.72799999,0.32600001},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.09",
								0.35499999
							},
							1
						};
					};
					class PtkFuelTempValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=78;
						refreshRate=0.2;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.61+0.068",
								"0.326-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.70700002,
								"0.326-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.068",
								0.35600001
							},
							1
						};
					};
					class TempEng1Text1
					{
						type="text";
						source="static";
						text="Т1";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{-0.055,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.027000001,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{-0.055,-0.0040000002},
							1
						};
					};
					class TempEng1Text2
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{0.052999999,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.081,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{0.052999999,-0.0040000002},
							1
						};
					};
					class TempEng1Text3
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{0,-0.059999999},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.028000001,-0.059999999},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{0,-0.030999999},
							1
						};
					};
					class TempEng1Value
					{
						type="text";
						source="user";
						sourceIndex=2;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Temp1",
							{0.001,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							{0.029999999,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							{0.001,-0.001},
							1
						};
					};
					class TempEng2Text1
					{
						type="text";
						source="static";
						text="Т2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{-0.055,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.027000001,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{-0.055,-0.0040000002},
							1
						};
					};
					class TempEng2Text2
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{0.052999999,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.081,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{0.052999999,-0.0040000002},
							1
						};
					};
					class TempEng2Text3
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{0,-0.059999999},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.028000001,-0.059999999},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{0,-0.030999999},
							1
						};
					};
					class TempEng2Value
					{
						type="text";
						source="user";
						sourceIndex=3;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Temp2",
							{0.001,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							{0.029999999,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							{0.001,-0.001},
							1
						};
					};
					class FuelTempText1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.055,-0.057},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.027000001,-0.057},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.055,-0.028000001},
							1
						};
					};
					class FuelTempText2
					{
						type="text";
						source="static";
						text="г";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.045000002,-0.050999999},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.017000001,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.045000002,-0.022},
							1
						};
					};
					class FuelTempText3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{0.052999999,-0.050999999},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.081,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{0.052999999,-0.022},
							1
						};
					};
					class FuelTempText4
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{0,-0.082999997},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.028000001,-0.082999997},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{0,-0.054000001},
							1
						};
					};
					class FuelTempValue
					{
						type="text";
						source="turretGunTemp";
						sourceLength=1;
						sourceScale=900;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_FuelTemp",
							{0.001,-0.055},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							{0.029999999,-0.055},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							{0.001,-0.024},
							1
						};
					};
					class FuelTempCondensator
					{
						type="text";
						source="static";
						text="СК";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.69099998,0.38999999},
							1
						};
						right[]=
						{
							{0.71399999,0.38999999},
							1
						};
						down[]=
						{
							{0.69099998,0.41499999},
							1
						};
					};
					class FuelTempTank
					{
						type="text";
						source="static";
						text="ТПЛБ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.69099998,0.52600002},
							1
						};
						right[]=
						{
							{0.71399999,0.52600002},
							1
						};
						down[]=
						{
							{0.69099998,0.551},
							1
						};
					};
					class CondensatorValue
					{
						type="text";
						source="user";
						sourceIndex=0;
						sourceLength=1;
						sourceScale=110;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								0.69099998,
								"0.39+0.034"
							},
							1
						};
						right[]=
						{
							
							{
								0.71799999,
								"0.39+0.034"
							},
							1
						};
						down[]=
						{
							{0.69099998,0.45199999},
							1
						};
					};
					class FuelValue
					{
						type="text";
						source="fuel";
						sourceIndex=0;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							{0.69099998,0.56400001},
							1
						};
						right[]=
						{
							{0.71799999,0.56400001},
							1
						};
						down[]=
						{
							{0.69099998,0.59200001},
							1
						};
					};
					class TempStats1
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.301,0.66600001},
							1
						};
						right[]=
						{
							{0.324,0.66600001},
							1
						};
						down[]=
						{
							{0.301,0.69099998},
							1
						};
					};
					class TempStats2
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.64899999},
							1
						};
						right[]=
						{
							{0.32499999,0.64899999},
							1
						};
						down[]=
						{
							{0.30199999,0.67400002},
							1
						};
					};
					class TempStats3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.625},
							1
						};
						right[]=
						{
							{0.32499999,0.625},
							1
						};
						down[]=
						{
							{0.30199999,0.64999998},
							1
						};
					};
					class TempStats4
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.59500003},
							1
						};
						right[]=
						{
							{0.32499999,0.59500003},
							1
						};
						down[]=
						{
							{0.30199999,0.62},
							1
						};
					};
					class TempStats5
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.57099998},
							1
						};
						right[]=
						{
							{0.32499999,0.57099998},
							1
						};
						down[]=
						{
							{0.30199999,0.59600002},
							1
						};
					};
					class TempStats6
					{
						type="text";
						source="static";
						text="Л.С.  2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.34200001,0.53500003},
							1
						};
						right[]=
						{
							{0.36500001,0.53500003},
							1
						};
						down[]=
						{
							{0.34200001,0.56},
							1
						};
					};
					class TempStats7
					{
						type="text";
						source="static";
						text="1     N";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.252,0.53500003},
							1
						};
						right[]=
						{
							{0.27500001,0.53500003},
							1
						};
						down[]=
						{
							{0.252,0.56},
							1
						};
					};
					class PressureUnit1
					{
						type="text";
						source="static";
						text="КГС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.025,0},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.026000001},
							1
						};
					};
					class PressureUnit2
					{
						type="text";
						source="static";
						text="СМ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.023399999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.025,0.023399999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.049400002},
							1
						};
					};
					class PressureUnit3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.021600001,0.0184},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.044599999,0.0184},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.021600001,0.043400001},
							1
						};
					};
					class PressureUnit2_1
					{
						type="text";
						source="static";
						text="КГС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.025,0},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.026000001},
							1
						};
					};
					class PressureUnit2_2
					{
						type="text";
						source="static";
						text="СМ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.023399999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.025,0.023399999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.049400002},
							1
						};
					};
					class PressureUnit2_3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.021600001,0.0184},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.044599999,0.0184},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.021600001,0.043400001},
							1
						};
					};
					class PressureUnit3_1
					{
						type="text";
						source="static";
						text="кВ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.0049999999,0.0049999999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.039999999,0.0049999999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.0049999999,0.041000001},
							1
						};
					};
					class CondensatorIndicator1
					{
						type="text";
						source="static";
						text="110";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.153,-0.011},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(90)",
								0.014
							},
							1
						};
					};
					class CondensatorIndicator2
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(53)",
								-0.090322599
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.12682299,-0.090322599},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(53)",
								-0.0653226
							},
							1
						};
					};
					class CondensatorIndicator3
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(25)",
								-0.13831399
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.077940397,-0.13831399},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(25)",
								-0.113314
							},
							1
						};
					};
					class CondensatorIndicator4
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-14)",
								-0.148803
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.0084498497,-0.148803},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-14)",
								-0.123803
							},
							1
						};
					};
					class CondensatorIndicator5
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.095723003
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.076585799,-0.095723003},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.070722997
							},
							1
						};
					};
					class CondensatorIndicator6
					{
						type="text";
						source="static";
						text="40";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.066703402
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.09482,-0.066703402},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.041703399
							},
							1
						};
					};
					class CondensatorIndicator7
					{
						type="text";
						source="static";
						text="20";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.045113798
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.10257,-0.045113798},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.0201138
							},
							1
						};
					};
					class CondensatorIndicator8
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.117,-0.011},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								0.014
							},
							1
						};
					};
					class EngineIndicator1
					{
						type="text";
						source="static";
						text="110";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.153,-0.011},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(90)",
								0.014
							},
							1
						};
					};
					class EngineIndicator2
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(53)",
								-0.090322599
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.12682299,-0.090322599},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(53)",
								-0.0653226
							},
							1
						};
					};
					class EngineIndicator3
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(25)",
								-0.13831399
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.077940397,-0.13831399},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(25)",
								-0.113314
							},
							1
						};
					};
					class EngineIndicator4
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-10)",
								-0.14080299
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.00042573499,-0.14080299},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-10)",
								-0.115803
							},
							1
						};
					};
					class EngineIndicator5
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.095723003
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.076585799,-0.095723003},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.070722997
							},
							1
						};
					};
					class EngineIndicator6
					{
						type="text";
						source="static";
						text="40";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.066703402
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.09482,-0.066703402},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.041703399
							},
							1
						};
					};
					class EngineIndicator7
					{
						type="text";
						source="static";
						text="20";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.045113798
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.10257,-0.045113798},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.0201138
							},
							1
						};
					};
					class EngineIndicator8
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.117,-0.011},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								0.014
							},
							1
						};
					};
					class FuelTempIndicator1
					{
						type="text";
						source="static";
						text="9";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.148,-0.011},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(90)",
								0.014
							},
							1
						};
					};
					class FuelTempIndicator2
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(30)",
								-0.120757
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.085500002,-0.120757},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(30)",
								-0.095756702
							},
							1
						};
					};
					class FuelTempIndicator3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(-30)",
								-0.120757
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.039500002,-0.120757},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(-30)",
								-0.095756702
							},
							1
						};
					};
					class Temp1Indicator1
					{
						type="text";
						source="static";
						text="8";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(90)",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.118,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(90)",
								0.0099999998
							},
							1
						};
					};
					class Temp1Indicator2
					{
						type="text";
						source="static";
						text="7";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(60)",
								-0.063159697
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.105272,-0.063159697},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(60)",
								-0.038159698
							},
							1
						};
					};
					class Temp1Indicator3
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.070500001,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(30)",
								-0.073415101
							},
							1
						};
					};
					class Temp1Indicator4
					{
						type="text";
						source="static";
						text="5";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(0)",
								-0.111319
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.023,-0.111319},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(0)",
								-0.086319402
							},
							1
						};
					};
					class Temp1Indicator5
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.024499999,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.073415101
							},
							1
						};
					};
					class Temp1Indicator6
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.047943201
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.071270801,-0.047943201},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.022943201
							},
							1
						};
					};
					class Temp1Indicator7
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.077,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								0.0099999998
							},
							1
						};
					};
					class Temp2Indicator1
					{
						type="text";
						source="static";
						text="8";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(90)",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.118,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(90)",
								0.0099999998
							},
							1
						};
					};
					class Temp2Indicator2
					{
						type="text";
						source="static";
						text="7";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(60)",
								-0.063159697
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.105272,-0.063159697},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(60)",
								-0.038159698
							},
							1
						};
					};
					class Temp2Indicator3
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.070500001,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(30)",
								-0.073415101
							},
							1
						};
					};
					class Temp2Indicator4
					{
						type="text";
						source="static";
						text="5";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(0)",
								-0.111319
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.023,-0.111319},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(0)",
								-0.086319402
							},
							1
						};
					};
					class Temp2Indicator5
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.024499999,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.073415101
							},
							1
						};
					};
					class Temp2Indicator6
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.047943201
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.071270801,-0.047943201},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.022943201
							},
							1
						};
					};
					class Temp2Indicator7
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.077,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								0.0099999998
							},
							1
						};
					};
					class MessageBox1
					{
						type="text";
						source="static";
						text="ВАЖНОЕ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13,0.935},
							1
						};
						right[]=
						{
							{0.167,0.935},
							1
						};
						down[]=
						{
							{0.13,0.97399998},
							1
						};
					};
					class MessageBox2
					{
						type="text";
						source="static";
						text="12";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13500001,0.815},
							1
						};
						right[]=
						{
							{0.17200001,0.815},
							1
						};
						down[]=
						{
							{0.13500001,0.85399997},
							1
						};
					};
					class MessageBox3
					{
						type="text";
						source="static";
						text="КРИТИЧЕСКОЕ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.36",
								0.935
							},
							1
						};
						right[]=
						{
							{0.52700001,0.935},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.36",
								0.97399998
							},
							1
						};
					};
					class MessageBox4
					{
						type="text";
						source="static";
						text="63";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.37",
								0.815
							},
							1
						};
						right[]=
						{
							{0.537,0.815},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.37",
								0.85399997
							},
							1
						};
					};
					class MessageBox5
					{
						type="text";
						source="static";
						text="РЕЖИМ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.73",
								0.935
							},
							1
						};
						right[]=
						{
							{0.89700001,0.935},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.73",
								0.97399998
							},
							1
						};
					};
					class MessageBox6
					{
						type="text";
						source="static";
						text="АВТО";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.73",
								0.81099999
							},
							1
						};
						right[]=
						{
							{0.89700001,0.81099999},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.73",
								0.85000002
							},
							1
						};
					};
					class Group_White
					{
						color[]={1,1,1};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0,0.72100002},
										1
									},
									
									{
										{1,0.72100002},
										1
									},
									
									{
										{1,0.736},
										1
									},
									
									{
										{0,0.736},
										1
									}
								},
								
								{
									
									{
										{0.046999998,0.77999997},
										1
									},
									
									{
										{0.081,0.77999997},
										1
									},
									
									{
										{0.081,0.935},
										1
									},
									
									{
										{0.046999998,0.935},
										1
									}
								},
								
								{
									
									{
										{0.046999998,0.77999997},
										1
									},
									
									{
										{0.222,0.77999997},
										1
									},
									
									{
										{0.222,0.81400001},
										1
									},
									
									{
										{0.046999998,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.197,0.77999997},
										1
									},
									
									{
										{0.23100001,0.77999997},
										1
									},
									
									{
										{0.23100001,0.935},
										1
									},
									
									{
										{0.197,0.935},
										1
									}
								}
							};
						};
					};
					class Group_Blue
					{
						color[]={0.2,1,1};
						alpha=1;
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
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.075000003,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.094999999},
								1
							};
						};
						class Date: Time
						{
							text="%x";
							pos[]=
							{
								
								{
									0.029999999,
									"0.05+0.04"
								},
								1
							};
							right[]=
							{
								
								{
									0.075000003,
									"0.05+0.04"
								},
								1
							};
							down[]=
							{
								{0.029999999,0.13500001},
								1
							};
						};
						class PositionText
						{
							type="text";
							source="static";
							text="ПОЗИЦИЯ:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.050000001},
								1
							};
							right[]=
							{
								{0.245,0.050000001},
								1
							};
							down[]=
							{
								{0.2,0.094999999},
								1
							};
						};
						class CordX
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
								
								{
									"0.2+0.17",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.41499999,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.17",
									0.094999999
								},
								1
							};
						};
						class CordY: CordX
						{
							source="coordinateY";
							pos[]=
							{
								
								{
									"0.2+0.17+0.07",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.48500001,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.17+0.07",
									0.094999999
								},
								1
							};
						};
						class ATLText
						{
							type="text";
							source="static";
							text="ВЫСОТА:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.090000004},
								1
							};
							right[]=
							{
								{0.245,0.090000004},
								1
							};
							down[]=
							{
								{0.2,0.13500001},
								1
							};
						};
						class ATLValue
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							sourceLength=4;
							sourceOffset=-2.0999999;
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									"0.2+0.22",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.465,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.22",
									0.13500001
								},
								1
							};
						};
						class ATLText2
						{
							type="text";
							source="static";
							text="м";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.2+0.29",
									0.1
								},
								1
							};
							right[]=
							{
								{0.54000002,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.29",
									0.13500001
								},
								1
							};
						};
						class VersionText
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.050000001},
								1
							};
							right[]=
							{
								{0.685,0.050000001},
								1
							};
							down[]=
							{
								{0.63999999,0.094999999},
								1
							};
						};
						class VersionText2
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.090000004},
								1
							};
							right[]=
							{
								{0.685,0.090000004},
								1
							};
							down[]=
							{
								{0.63999999,0.13500001},
								1
							};
						};
					};
					class Group_Red
					{
						color[]={1,0,0};
						alpha=1;
						class Warning_Gun
						{
							blinkingPattern=0.15000001;
							condition="user5";
							class VersionText
							{
								type="text";
								source="static";
								text="ОТКАЗ ПУШКА";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.63999999,0.050000001},
									1
								};
								right[]=
								{
									{0.685,0.050000001},
									1
								};
								down[]=
								{
									{0.63999999,0.094999999},
									1
								};
							};
						};
						class Warning_Engine
						{
							blinkingPattern=0.15000001;
							condition="user4";
							class VersionText2
							{
								type="text";
								source="static";
								text="ОТКАЗ ДВИГ";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.63999999,0.090000004},
									1
								};
								right[]=
								{
									{0.685,0.090000004},
									1
								};
								down[]=
								{
									{0.63999999,0.13500001},
									1
								};
							};
						};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.271,0.65899998},
										1
									},
									
									{
										{0.28099999,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.28099999,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.271,0.65899998},
										1
									}
								},
								
								{
									
									{
										{0.32100001,0.65899998},
										1
									},
									
									{
										{0.331,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.331,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.32100001,0.65899998},
										1
									}
								},
								
								{
									
									{
										{0.40700001,0.77999997},
										1
									},
									
									{
										{0.44100001,0.77999997},
										1
									},
									
									{
										{0.44100001,0.935},
										1
									},
									
									{
										{0.40700001,0.935},
										1
									}
								},
								
								{
									
									{
										{0.40700001,0.77999997},
										1
									},
									
									{
										{0.58200002,0.77999997},
										1
									},
									
									{
										{0.58200002,0.81400001},
										1
									},
									
									{
										{0.40700001,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.55699998,0.77999997},
										1
									},
									
									{
										{0.59100002,0.77999997},
										1
									},
									
									{
										{0.59100002,0.935},
										1
									},
									
									{
										{0.55699998,0.935},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,-0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0041042399,-0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,-0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,-0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0077134501,-0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,-0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,-0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0103923,-0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,-0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,-0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0118177,-0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{0.012,5.3182198e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.012,5.3182198e-010},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0118177,0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,0.0041612498},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,0.0041612498},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0103923,0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0077134501,0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0041042399,0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{-1.0490701e-009,0.0121667},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0041042399,0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0077134501,0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0103923,0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0118177,0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.012,-1.45086e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.012,-1.45086e-010},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0118177,-0.0021127299},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,-0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,-0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0103923,-0.0060833399},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,-0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,-0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0077134501,-0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,-0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,-0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0041042399,-0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,-0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,-0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{2.0981501e-009,-0.0121667},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,-0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,-0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0128025,-0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{0.013,5.7614002e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.013,5.7614002e-010},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,0.0045080199},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,0.0045080199},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{-1.1365e-009,0.0131806},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.013,-1.5717699e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.013,-1.5717699e-010},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0128025,-0.00228879},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225742,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225742,-0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{2.27299e-009,-0.0131806},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,-0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0128025,-0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{0.013,5.7614002e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.013,5.7614002e-010},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,0.0045080199},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,0.0045080199},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{-1.1365e-009,0.0131806},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.013,-1.5717699e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.013,-1.5717699e-010},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0128025,-0.00228879},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225742,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225742,-0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{2.27299e-009,-0.0131806},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,-0.0129803},
										1
									}
								}
							};
						};
					};
					class Warning_Fuel
					{
						color[]={1,0.1,0};
						blinkingPattern=0.050000001;
						condition="fuel < 0.1";
						class Polygons
						{
							type="polygon";
							width=4;
							texture="a3\Armor_F_Decade\MBT_02\Data\UI\LowFuel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.85000002,0.54000002},
										1
									},
									
									{
										{0.94999999,0.54000002},
										1
									},
									
									{
										{0.94999999,0.63999999},
										1
									},
									
									{
										{0.85000002,0.63999999},
										1
									}
								}
							};
						};
					};
					class Warning_GunTemperature
					{
						color[]={1,0.1,0};
						blinkingPattern=0.050000001;
						condition="turretGunTemp > 0.8";
						class Polygons
						{
							type="polygon";
							width=4;
							texture="a3\Armor_F_Decade\MBT_02\Data\UI\HighTemperature_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.85000002,0.38},
										1
									},
									
									{
										{0.94999999,0.38},
										1
									},
									
									{
										{0.94999999,0.47999999},
										1
									},
									
									{
										{0.85000002,0.47999999},
										1
									}
								}
							};
						};
					};
					class Group_Yellow
					{
						color[]={1,0.98400003,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.76700002,0.77999997},
										1
									},
									
									{
										{0.801,0.77999997},
										1
									},
									
									{
										{0.801,0.935},
										1
									},
									
									{
										{0.76700002,0.935},
										1
									}
								},
								
								{
									
									{
										{0.76700002,0.77999997},
										1
									},
									
									{
										{0.94199997,0.77999997},
										1
									},
									
									{
										{0.94199997,0.81400001},
										1
									},
									
									{
										{0.76700002,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.917,0.77999997},
										1
									},
									
									{
										{0.95099998,0.77999997},
										1
									},
									
									{
										{0.95099998,0.935},
										1
									},
									
									{
										{0.917,0.935},
										1
									}
								}
							};
						};
						class Lines_Thick
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Circle2",
									{0,-0.0141944},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{0.014,0},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0,0.0141944},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.014,0},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0,-0.0141944},
									1
								},
								{},
								
								{
									"Offset_Circle3",
									{0,-0.0141944},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{0.014,0},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0,0.0141944},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.014,0},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0,-0.0141944},
									1
								},
								{}
							};
						};
						class Lines
						{
							type="line";
							width=5;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Condensator",
									{0.122567,-0.104274},
									1
								},
								
								{
									"Offset_Condensator",
									{0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Condensator",
									{0.102846,-0.124269},
									1
								},
								{},
								
								{
									"Offset_Condensator",
									{0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Condensator",
									{0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Condensator",
									{0,-0.162222},
									1
								},
								
								{
									"Offset_Condensator",
									{-0.0139449,-0.161605},
									1
								},
								{},
								
								{
									"Offset_Engine",
									{0.150351,-0.0554832},
									1
								},
								
								{
									"Offset_Engine",
									{0.145009,-0.068558097},
									1
								},
								
								{
									"Offset_Engine",
									{0.13856401,-0.081111103},
									1
								},
								
								{
									"Offset_Engine",
									{0.131064,-0.093046799},
									1
								},
								{},
								
								{
									"Offset_Temp1",
									{0.108065,-0.039878599},
									1
								},
								
								{
									"Offset_Temp1",
									{0.104225,-0.049276099},
									1
								},
								
								{
									"Offset_Temp1",
									{0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp1",
									{0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp1",
									{0.088095099,-0.074947298},
									1
								},
								{},
								
								{
									"Offset_Temp2",
									{0.108065,-0.039878599},
									1
								},
								
								{
									"Offset_Temp2",
									{0.104225,-0.049276099},
									1
								},
								
								{
									"Offset_Temp2",
									{0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp2",
									{0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp2",
									{0.088095099,-0.074947298},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.118777,-0.084323697},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.111076,-0.094498701},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.10253,-0.103955},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.0932042,-0.112619},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.083168603,-0.120427},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.072499998,-0.12731799},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.025179001,-0.14478},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.0126376,-0.14645401},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0,-0.14701401},
									1
								},
								
								{
									"Offset_FuelTemp",
									{-0.0126376,-0.14645401},
									1
								},
								{}
							};
						};
					};
					class Group_Green
					{
						color[]={0,1,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Lines
						{
							type="line";
							width=5;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Condensator",
									{0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Condensator",
									{0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Condensator",
									{0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Condensator",
									{0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Condensator",
									{0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Condensator",
									{0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Condensator",
									{0.027783699,-0.159758},
									1
								},
								{},
								
								{
									"Offset_Engine",
									{0.131064,-0.093046799},
									1
								},
								
								{
									"Offset_Engine",
									{0.122567,-0.104274},
									1
								},
								
								{
									"Offset_Engine",
									{0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Engine",
									{0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Engine",
									{0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Engine",
									{0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Engine",
									{0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Engine",
									{0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Engine",
									{0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Engine",
									{0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Engine",
									{0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Engine",
									{0,-0.162222},
									1
								},
								
								{
									"Offset_Engine",
									{-0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Engine",
									{-0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Engine",
									{-0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Engine",
									{-0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Engine",
									{-0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Engine",
									{-0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Engine",
									{-0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Engine",
									{-0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Engine",
									{-0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Engine",
									{-0.122567,-0.104274},
									1
								},
								{},
								
								{
									"Offset_Temp1",
									{0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp1",
									{0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp1",
									{0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp1",
									{0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp1",
									{0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp1",
									{0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp1",
									{0,-0.116597},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.104225,-0.049276099},
									1
								},
								{},
								
								{
									"Offset_Temp2",
									{0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp2",
									{0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp2",
									{0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp2",
									{0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp2",
									{0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp2",
									{0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp2",
									{0,-0.116597},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.104225,-0.049276099},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.072499998,-0.12731799},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.061279599,-0.13324},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.049592901,-0.13814799},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.037528802,-0.142005},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.025179001,-0.14478},
									1
								},
								{}
							};
						};
					};
				};
			};
			class MFD_APU_Commander
			{
				topLeft="MFD_10_TL";
				topRight="MFD_10_TR";
				bottomLeft="MFD_10_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="RobotoCondensed";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={55,55,55,1};
				};
				class Bones
				{
					class Offset_Condensator
					{
						type="fixed";
						pos[]={0.31,0.34};
					};
					class Offset_Engine: Offset_Condensator
					{
						pos[]={0.31,0.53799999};
					};
					class Offset_Temp1: Offset_Condensator
					{
						pos[]={0.148,0.68000001};
					};
					class Offset_Temp2: Offset_Condensator
					{
						pos[]={0.461,0.68000001};
					};
					class Offset_FuelTemp: Offset_Condensator
					{
						pos[]={0.76999998,0.315};
					};
					class Offset_PressureUnit1: Offset_Condensator
					{
						pos[]={0.1205,0.336};
					};
					class Offset_PressureUnit2: Offset_Condensator
					{
						pos[]={0.1205,0.43599999};
					};
					class Offset_PressureUnit3: Offset_Condensator
					{
						pos[]={0.2705,0.31600001};
					};
					class Offset_Circle1: Offset_Condensator
					{
						pos[]={0.74599999,0.37900001};
					};
					class Offset_Circle2: Offset_Condensator
					{
						pos[]={0.69199997,0.505};
					};
					class Offset_Circle3: Offset_Condensator
					{
						pos[]={0.69199997,0.64099997};
					};
					class CondensatorLevel1
					{
						type="linear";
						source="user";
						sourceIndex=0;
						sourceScale=1;
						refreshRate=0.1;
						min=0;
						max=1;
						minPos[]={0,-0.105};
						maxPos[]={0,0};
					};
					class FuelLevel1: CondensatorLevel1
					{
						source="fuel";
					};
					class DeltaNLevel1: CondensatorLevel1
					{
						sourceIndex=1;
						sourceOffset=0.1;
						minPos[]={0,-0.094999999};
					};
					class HPLevel1: DeltaNLevel1
					{
						sourceIndex=2;
						sourceOffset=0.30000001;
					};
					class Rotate_Condensator
					{
						type="rotational";
						source="user";
						sourceIndex=0;
						sourceScale=1;
						center[]={0.31,0.34};
						min=0;
						max=1;
						minAngle=0;
						maxAngle=180;
						aspectRatio=1.01389;
					};
					class Rotate_Engine: Rotate_Condensator
					{
						center[]={0.31,0.53799999};
						source="user";
						sourceIndex=1;
					};
					class Rotate_Temp1: Rotate_Condensator
					{
						center[]={0.148,0.68000001};
						source="user";
						sourceIndex=2;
					};
					class Rotate_Temp2: Rotate_Condensator
					{
						center[]={0.461,0.68000001};
						source="user";
						sourceIndex=3;
					};
					class Rotate_FuelTemp: Rotate_Condensator
					{
						center[]={0.76999998,0.315};
						source="turretGunTemp";
						sourceIndex=4;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={1,1,1};
					condition="1";
					class Group_FuelTank_Background_Blue
					{
						color[]={0,0.2,1};
						alpha=0.60000002;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.67000002,0.52200001},
										1
									},
									
									{
										{0.722,0.52200001},
										1
									},
									
									{
										{0.722,0.41499999},
										1
									},
									
									{
										{0.67000002,0.41499999},
										1
									}
								},
								
								{
									
									{
										{0.67000002,0.65899998},
										1
									},
									
									{
										{0.722,0.65899998},
										1
									},
									
									{
										{0.722,0.55199999},
										1
									},
									
									{
										{0.67000002,0.55199999},
										1
									}
								}
							};
						};
					};
					class Group_FuelTank_Red
					{
						color[]={1,0,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Low
						{
							condition="(user0<0.11)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Low
						{
							condition="fuel<0.11";
							blinkingPattern=0.30000001;
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_FuelTank_Background_Yellow
					{
						color[]={0.30000001,0.30000001,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Full_Blink
						{
							condition="user0>0.9";
							blinkingPattern=0.050000001;
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class Condensator_Medium
						{
							condition="(user0<0.301)*(user0>0.1)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Medium
						{
							condition="(fuel<0.501)*(fuel>0.1)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_FuelTank_Background_Green
					{
						color[]={0,0.60000002,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Condensator_Full
						{
							condition="(user0>0.3)*(user0<0.9)";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.52200001},
											1
										},
										
										{
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.72100002,0.52200001},
											1
										},
										
										{
											"CondensatorLevel1",
											1,
											{0.671,0.52200001},
											1
										}
									}
								};
							};
						};
						class FuelTank_Full
						{
							condition="fuel>0.5";
							class Polygons
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.671,0.65899998},
											1
										},
										
										{
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.72100002,0.65899998},
											1
										},
										
										{
											"FuelLevel1",
											1,
											{0.671,0.65899998},
											1
										}
									}
								};
							};
						};
					};
					class Group_Black_Background
					{
						color[]={0,0,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.67449999,0.42899999},
										1
									},
									
									{
										{0.71450001,0.42899999},
										1
									},
									
									{
										{0.71450001,0.449},
										1
									},
									
									{
										{0.67449999,0.449},
										1
									}
								},
								
								{
									
									{
										{0.67449999,0.56900001},
										1
									},
									
									{
										{0.71450001,0.56900001},
										1
									},
									
									{
										{0.71450001,0.58899999},
										1
									},
									
									{
										{0.67449999,0.58899999},
										1
									}
								}
							};
						};
					};
					class Lines
					{
						type="line";
						width=4;
						lineType=0;
						points[]=
						{
							
							{
								{0.31494099,0.57324201},
								1
							},
							
							{
								{0.32177699,0.57324201},
								1
							},
							{},
							
							{
								{0.307129,0.58642602},
								1
							},
							
							{
								{0.32177699,0.58642602},
								1
							},
							{},
							
							{
								{0.31494099,0.59765601},
								1
							},
							
							{
								{0.32177699,0.59765601},
								1
							},
							{},
							
							{
								{0.307129,0.61084002},
								1
							},
							
							{
								{0.32177699,0.61084002},
								1
							},
							{},
							
							{
								{0.31494099,0.62304699},
								1
							},
							
							{
								{0.32177699,0.62304699},
								1
							},
							{},
							
							{
								{0.307129,0.63622999},
								1
							},
							
							{
								{0.32177699,0.63622999},
								1
							},
							{},
							
							{
								{0.31494099,0.64990199},
								1
							},
							
							{
								{0.32177699,0.64990199},
								1
							},
							{},
							
							{
								{0.32177699,0.66113299},
								1
							},
							
							{
								{0.32177699,0.56152302},
								1
							},
							{},
							
							{
								{0.33300799,0.56152302},
								1
							},
							
							{
								{0.33300799,0.66113299},
								1
							},
							
							{
								{0.30859399,0.66113299},
								1
							},
							{},
							
							{
								{0.347168,0.56152302},
								1
							},
							
							{
								{0.307129,0.56152302},
								1
							},
							{},
							
							{
								{0.28906301,0.57324201},
								1
							},
							
							{
								{0.28222701,0.57324201},
								1
							},
							{},
							
							{
								{0.296875,0.58642602},
								1
							},
							
							{
								{0.28222701,0.58642602},
								1
							},
							{},
							
							{
								{0.28906301,0.59765601},
								1
							},
							
							{
								{0.28222701,0.59765601},
								1
							},
							{},
							
							{
								{0.296875,0.61084002},
								1
							},
							
							{
								{0.28222701,0.61084002},
								1
							},
							{},
							
							{
								{0.28906301,0.62304699},
								1
							},
							
							{
								{0.28222701,0.62304699},
								1
							},
							{},
							
							{
								{0.296875,0.63622999},
								1
							},
							
							{
								{0.28222701,0.63622999},
								1
							},
							{},
							
							{
								{0.28906301,0.64990199},
								1
							},
							
							{
								{0.28222701,0.64990199},
								1
							},
							{},
							
							{
								{0.28222701,0.66113299},
								1
							},
							
							{
								{0.28222701,0.56152302},
								1
							},
							{},
							
							{
								{0.270996,0.56152302},
								1
							},
							
							{
								{0.270996,0.66113299},
								1
							},
							
							{
								{0.29541001,0.66113299},
								1
							},
							{},
							
							{
								{0.256836,0.56152302},
								1
							},
							
							{
								{0.296875,0.56152302},
								1
							},
							{},
							
							{
								{0.70898402,0.64209002},
								1
							},
							
							{
								{0.74609399,0.64209002},
								1
							},
							{},
							
							{
								{0.67382801,0.50732398},
								1
							},
							
							{
								{0.640625,0.50732398},
								1
							},
							
							{
								{0.640625,0.37890601},
								1
							},
							
							{
								{0.74609399,0.37890601},
								1
							},
							
							{
								{0.74609399,0.67040998},
								1
							},
							
							{
								{0.81347698,0.67040998},
								1
							},
							
							{
								{0.81347698,0.68554699},
								1
							},
							
							{
								{0.84960902,0.68554699},
								1
							},
							
							{
								{0.84960902,0.65722698},
								1
							},
							
							{
								{0.81347698,0.65722698},
								1
							},
							
							{
								{0.81347698,0.67040998},
								1
							},
							{},
							
							{
								{0.59228498,0.162109},
								1
							},
							
							{
								{0.59228498,0.69287097},
								1
							},
							{},
							
							{
								{0.58642602,0.162109},
								1
							},
							
							{
								{0.58642602,0.69287097},
								1
							},
							{},
							
							{
								{0.029785199,0.16064499},
								1
							},
							
							{
								{0.96142602,0.16064499},
								1
							},
							
							{
								{0.96142602,0.207031},
								1
							},
							
							{
								{0.98632801,0.207031},
								1
							},
							
							{
								{0.98632801,0.32910201},
								1
							},
							
							{
								{0.961914,0.32910201},
								1
							},
							
							{
								{0.961914,0.69384801},
								1
							},
							
							{
								{0.029785199,0.69384801},
								1
							},
							
							{
								{0.029785199,0.16064499},
								1
							},
							{},
							
							{
								{0.51074201,0.89111298},
								1
							},
							
							{
								{0.53759801,0.91796899},
								1
							},
							{},
							
							{
								{0.48925799,0.89111298},
								1
							},
							
							{
								{0.46240199,0.91796899},
								1
							},
							{},
							
							{
								{0.53759801,0.86328101},
								1
							},
							
							{
								{0.50732398,0.89404303},
								1
							},
							
							{
								{0.50292999,0.897461},
								1
							},
							
							{
								{0.5,0.897461},
								1
							},
							
							{
								{0.49707001,0.897461},
								1
							},
							
							{
								{0.49267599,0.89404303},
								1
							},
							
							{
								{0.46240199,0.86328101},
								1
							},
							
							{
								{0.53759801,0.86328101},
								1
							},
							{},
							
							{
								{0.46240199,0.86328101},
								1
							},
							
							{
								{0.46240199,0.91796899},
								1
							},
							
							{
								{0.53759801,0.91796899},
								1
							},
							
							{
								{0.53759801,0.86328101},
								1
							},
							{},
							
							{
								{0.14501999,0.89111298},
								1
							},
							
							{
								{0.172363,0.91796899},
								1
							},
							{},
							
							{
								{0.124023,0.89111298},
								1
							},
							
							{
								{0.096679702,0.91796899},
								1
							},
							{},
							
							{
								{0.172363,0.86328101},
								1
							},
							
							{
								{0.14208999,0.89404303},
								1
							},
							
							{
								{0.137207,0.897461},
								1
							},
							
							{
								{0.134766,0.897461},
								1
							},
							
							{
								{0.131836,0.897461},
								1
							},
							
							{
								{0.12695301,0.89404303},
								1
							},
							
							{
								{0.096679702,0.86328101},
								1
							},
							
							{
								{0.172363,0.86328101},
								1
							},
							{},
							
							{
								{0.096679702,0.86328101},
								1
							},
							
							{
								{0.096679702,0.91796899},
								1
							},
							
							{
								{0.172363,0.91796899},
								1
							},
							
							{
								{0.172363,0.86328101},
								1
							},
							{},
							
							{
								{0.86279303,0.84716803},
								1
							},
							
							{
								{0.84228498,0.88818401},
								1
							},
							
							{
								{0.85644501,0.88818401},
								1
							},
							
							{
								{0.852539,0.91845697},
								1
							},
							
							{
								{0.87304699,0.87744099},
								1
							},
							
							{
								{0.85986298,0.87744099},
								1
							},
							
							{
								{0.86279303,0.84716803},
								1
							},
							{},
							
							{
								{0.79736298,0.631836},
								1
							},
							
							{
								{0.79736298,0.649414},
								1
							},
							{},
							
							{
								{0.74560499,0.37890601},
								1
							},
							
							{
								{0.76757801,0.37890601},
								1
							},
							
							{
								{0.76757801,0.649414},
								1
							},
							
							{
								{0.83544898,0.649414},
								1
							},
							
							{
								{0.83544898,0.631836},
								1
							},
							{},
							
							{
								{0.068000004,0.345},
								1
							},
							
							{
								{0.115,0.345},
								1
							},
							
							{
								{0.115,0.375},
								1
							},
							
							{
								{0.068000004,0.375},
								1
							},
							
							{
								{0.068000004,0.345},
								1
							},
							{},
							
							{
								{0.221,0.32499999},
								1
							},
							
							{
								{0.26800001,0.32499999},
								1
							},
							
							{
								{0.26800001,0.35499999},
								1
							},
							
							{
								{0.221,0.35499999},
								1
							},
							
							{
								{0.221,0.32499999},
								1
							},
							{},
							
							{
								{0.34099999,0.32499999},
								1
							},
							
							{
								{0.38800001,0.32499999},
								1
							},
							
							{
								{0.38800001,0.35499999},
								1
							},
							
							{
								{0.34099999,0.35499999},
								1
							},
							
							{
								{0.34099999,0.32499999},
								1
							},
							{},
							
							{
								{0.27500001,0.27599999},
								1
							},
							
							{
								{0.34200001,0.27599999},
								1
							},
							
							{
								{0.34200001,0.30599999},
								1
							},
							
							{
								{0.27500001,0.30599999},
								1
							},
							
							{
								{0.27500001,0.27599999},
								1
							},
							{},
							
							{
								{0.21699999,0.50599998},
								1
							},
							
							{
								{0.28400001,0.50599998},
								1
							},
							
							{
								{0.28400001,0.53600001},
								1
							},
							
							{
								{0.21699999,0.53600001},
								1
							},
							
							{
								{0.21699999,0.50599998},
								1
							},
							{},
							
							{
								{0.32699999,0.50599998},
								1
							},
							
							{
								{0.39399999,0.50599998},
								1
							},
							
							{
								{0.39399999,0.53600001},
								1
							},
							
							{
								{0.32699999,0.53600001},
								1
							},
							
							{
								{0.32699999,0.50599998},
								1
							},
							{},
							
							{
								{0.068000004,0.44499999},
								1
							},
							
							{
								{0.115,0.44499999},
								1
							},
							
							{
								{0.115,0.47499999},
								1
							},
							
							{
								{0.068000004,0.47499999},
								1
							},
							
							{
								{0.068000004,0.44499999},
								1
							},
							{},
							
							{
								{0.068000004,0.48100001},
								1
							},
							
							{
								{0.115,0.48100001},
								1
							},
							
							{
								{0.115,0.51099998},
								1
							},
							
							{
								{0.068000004,0.51099998},
								1
							},
							
							{
								{0.068000004,0.48100001},
								1
							},
							{},
							
							{
								{0.11,0.64899999},
								1
							},
							
							{
								{0.18700001,0.64899999},
								1
							},
							
							{
								{0.18700001,0.67900002},
								1
							},
							
							{
								{0.11,0.67900002},
								1
							},
							
							{
								{0.11,0.64899999},
								1
							},
							{},
							
							{
								{0.426,0.64899999},
								1
							},
							
							{
								{0.50300002,0.64899999},
								1
							},
							
							{
								{0.50300002,0.67900002},
								1
							},
							
							{
								{0.426,0.67900002},
								1
							},
							
							{
								{0.426,0.64899999},
								1
							},
							{},
							
							{
								{0.47499999,0.18099999},
								1
							},
							
							{
								{0.54500002,0.18099999},
								1
							},
							
							{
								{0.54500002,0.211},
								1
							},
							
							{
								{0.47499999,0.211},
								1
							},
							
							{
								{0.47499999,0.18099999},
								1
							},
							{},
							
							{
								{0.73500001,0.26199999},
								1
							},
							
							{
								{0.81,0.26199999},
								1
							},
							
							{
								{0.81,0.292},
								1
							},
							
							{
								{0.73500001,0.292},
								1
							},
							
							{
								{0.73500001,0.26199999},
								1
							},
							{},
							
							{
								{0.63800001,0.324},
								1
							},
							
							{
								{0.68900001,0.324},
								1
							},
							
							{
								{0.68900001,0.35800001},
								1
							},
							
							{
								{0.63800001,0.35800001},
								1
							},
							
							{
								{0.63800001,0.324},
								1
							},
							{},
							
							{
								{0.66799998,0.414},
								1
							},
							
							{
								{0.72000003,0.414},
								1
							},
							
							{
								{0.72000003,0.52399999},
								1
							},
							
							{
								{0.66799998,0.52399999},
								1
							},
							
							{
								{0.66799998,0.414},
								1
							},
							{},
							
							{
								{0.66799998,0.551},
								1
							},
							
							{
								{0.72000003,0.551},
								1
							},
							
							{
								{0.72000003,0.66100001},
								1
							},
							
							{
								{0.66799998,0.66100001},
								1
							},
							
							{
								{0.66799998,0.551},
								1
							},
							{},
							
							{
								{0.27000001,0.542431},
								1
							},
							
							{
								{0.27500001,0.55561101},
								1
							},
							
							{
								{0.26499999,0.55561101},
								1
							},
							
							{
								{0.27000001,0.542431},
								1
							},
							{},
							
							{
								"Offset_PressureUnit1",
								1,
								{0,0.023319401},
								1
							},
							
							{
								"Offset_PressureUnit1",
								1,
								{0.025,0.023319401},
								1
							},
							{},
							
							{
								"Offset_PressureUnit2",
								1,
								{0,0.023319401},
								1
							},
							
							{
								"Offset_PressureUnit2",
								1,
								{0.025,0.023319401},
								1
							},
							{},
							
							{
								"Offset_Circle1",
								{0,-0.0131806},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0022568,-0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0044459999,-0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0065000001,-0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0083563998,-0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0099579999,-0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{0.011258,-0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0122161,-0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0128024,-0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{0.013,0},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0128024,0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0122161,0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{0.011258,0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0099579999,0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0083563998,0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0065000001,0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0044459999,0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{0.0022568,0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0,0.0131806},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0022568,0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0044459999,0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0065000001,0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0083563998,0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0099579999,0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.011258,0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0122161,0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0128024,0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.013,0},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0128024,-0.0022881399},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0122161,-0.0045077498},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.011258,-0.0065902802},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0099579999,-0.0084724603},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0083563998,-0.0100963},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0065000001,-0.0114144},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0044459999,-0.0123858},
								1
							},
							
							{
								"Offset_Circle1",
								{-0.0022568,-0.0129802},
								1
							},
							
							{
								"Offset_Circle1",
								{0,-0.0131806},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Condensator",
								{0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Condensator",
								{0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Condensator",
								{0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Condensator",
								{0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Condensator",
								{0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Condensator",
								{0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Condensator",
								{0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Condensator",
								{0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Condensator",
								{0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Condensator",
								{0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Condensator",
								{0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Condensator",
								{0,-0.162222},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.151732,-0.00913978},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15971801,-0.0096208202},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.150931,-0.018247399},
								1
							},
							
							{
								"Offset_Condensator",
								{0.15887401,-0.0192078},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.149598,-0.0272907},
								1
							},
							
							{
								"Offset_Condensator",
								{0.157471,-0.028727099},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.14773799,-0.036238},
								1
							},
							
							{
								"Offset_Condensator",
								{0.155514,-0.0381453},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.145358,-0.045057699},
								1
							},
							
							{
								"Offset_Condensator",
								{0.153009,-0.0474292},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.14246701,-0.053718802},
								1
							},
							
							{
								"Offset_Condensator",
								{0.149965,-0.056546099},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.139074,-0.062190801},
								1
							},
							
							{
								"Offset_Condensator",
								{0.146394,-0.065463997},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.13519099,-0.070443898},
								1
							},
							
							{
								"Offset_Condensator",
								{0.142307,-0.074151397},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.130833,-0.078448899},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13771901,-0.082577802},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.12021,-0.082209103},
								1
							},
							
							{
								"Offset_Condensator",
								{0.13264599,-0.090713501},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.120751,-0.093603402},
								1
							},
							
							{
								"Offset_Condensator",
								{0.127106,-0.098529898},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.115063,-0.100699},
								1
							},
							
							{
								"Offset_Condensator",
								{0.121119,-0.105999},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.10897,-0.107441},
								1
							},
							
							{
								"Offset_Condensator",
								{0.114706,-0.113096},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.102494,-0.113804},
								1
							},
							
							{
								"Offset_Condensator",
								{0.107888,-0.119794},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0956567,-0.119767},
								1
							},
							
							{
								"Offset_Condensator",
								{0.100691,-0.12606999},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0884827,-0.12530801},
								1
							},
							
							{
								"Offset_Condensator",
								{0.093139701,-0.13190299},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.080997199,-0.130408},
								1
							},
							
							{
								"Offset_Condensator",
								{0.085260198,-0.137271},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.073226497,-0.135049},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0770806,-0.142156},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.065198101,-0.13921399},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0686296,-0.146541},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.054318,-0.136309},
								1
							},
							
							{
								"Offset_Condensator",
								{0.059937101,-0.15041},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0484818,-0.146062},
								1
							},
							
							{
								"Offset_Condensator",
								{0.051033501,-0.153749},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.039852701,-0.14872},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0419503,-0.156547},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.031083399,-0.15085401},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0327194,-0.158794},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0222046,-0.152458},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0233733,-0.160482},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0132477,-0.15352499},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0139449,-0.161605},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{0.0042440798,-0.15405101},
								1
							},
							
							{
								"Offset_Condensator",
								{0.0044674599,-0.162159},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0047744401,-0.154035},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.00502573,-0.16214199},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0137762,-0.153477},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0145012,-0.16155501},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.022729401,-0.15237799},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.023925699,-0.16039801},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0301472,-0.143801},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0332659,-0.158677},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0403645,-0.148578},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.042489,-0.156398},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.048984401,-0.145889},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.051562499,-0.153568},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.057431798,-0.14268699},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.060454499,-0.150197},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.065677002,-0.138982},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.069133699,-0.14629699},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.0736911,-0.134789},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.0775695,-0.141883},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.081445701,-0.13011999},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.085732304,-0.136969},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.088913597,-0.124994},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.093593203,-0.13157301},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.096068397,-0.119428},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.101125,-0.12571301},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.102885,-0.113441},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.1083,-0.119411},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.104304,-0.102124},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.115094,-0.112689},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.115497,-0.088884503},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.127445,-0.098079398},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.132873,-0.0588568},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.14661799,-0.064945497},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.14105199,-0.034070101},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.155644,-0.037594602},
								1
							},
							{},
							
							{
								"Offset_Condensator",
								{-0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Condensator",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Engine",
								{0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Engine",
								{0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Engine",
								{0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Engine",
								{0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Engine",
								{0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Engine",
								{0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Engine",
								{0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Engine",
								{0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Engine",
								{0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Engine",
								{0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Engine",
								{0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Engine",
								{0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Engine",
								{0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Engine",
								{0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Engine",
								{0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Engine",
								{0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Engine",
								{0,-0.162222},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0139449,-0.161605},
								1
							},
							
							{
								"Offset_Engine",
								{-0.027783699,-0.159758},
								1
							},
							
							{
								"Offset_Engine",
								{-0.041411001,-0.15669499},
								1
							},
							
							{
								"Offset_Engine",
								{-0.054723199,-0.152439},
								1
							},
							
							{
								"Offset_Engine",
								{-0.067618899,-0.14702301},
								1
							},
							
							{
								"Offset_Engine",
								{-0.079999998,-0.140489},
								1
							},
							
							{
								"Offset_Engine",
								{-0.091772199,-0.13288499},
								1
							},
							
							{
								"Offset_Engine",
								{-0.102846,-0.124269},
								1
							},
							
							{
								"Offset_Engine",
								{-0.113137,-0.114708},
								1
							},
							
							{
								"Offset_Engine",
								{-0.122567,-0.104274},
								1
							},
							
							{
								"Offset_Engine",
								{-0.131064,-0.093046799},
								1
							},
							
							{
								"Offset_Engine",
								{-0.13856401,-0.081111103},
								1
							},
							
							{
								"Offset_Engine",
								{-0.145009,-0.068558097},
								1
							},
							
							{
								"Offset_Engine",
								{-0.150351,-0.0554832},
								1
							},
							
							{
								"Offset_Engine",
								{-0.154548,-0.041986201},
								1
							},
							
							{
								"Offset_Engine",
								{-0.15756901,-0.0281696},
								1
							},
							
							{
								"Offset_Engine",
								{-0.159391,-0.0141386},
								1
							},
							
							{
								"Offset_Engine",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Engine",
								{0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.151732,-0.00913978},
								1
							},
							
							{
								"Offset_Engine",
								{0.15971801,-0.0096208202},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.150931,-0.018247399},
								1
							},
							
							{
								"Offset_Engine",
								{0.15887401,-0.0192078},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.149598,-0.0272907},
								1
							},
							
							{
								"Offset_Engine",
								{0.157471,-0.028727099},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.14773799,-0.036238},
								1
							},
							
							{
								"Offset_Engine",
								{0.155514,-0.0381453},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.145358,-0.045057699},
								1
							},
							
							{
								"Offset_Engine",
								{0.153009,-0.0474292},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.14246701,-0.053718802},
								1
							},
							
							{
								"Offset_Engine",
								{0.149965,-0.056546099},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.139074,-0.062190801},
								1
							},
							
							{
								"Offset_Engine",
								{0.146394,-0.065463997},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.13519099,-0.070443898},
								1
							},
							
							{
								"Offset_Engine",
								{0.142307,-0.074151397},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.130833,-0.078448899},
								1
							},
							
							{
								"Offset_Engine",
								{0.13771901,-0.082577802},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.12021,-0.082209103},
								1
							},
							
							{
								"Offset_Engine",
								{0.13264599,-0.090713501},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.120751,-0.093603402},
								1
							},
							
							{
								"Offset_Engine",
								{0.127106,-0.098529898},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.115063,-0.100699},
								1
							},
							
							{
								"Offset_Engine",
								{0.121119,-0.105999},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.10897,-0.107441},
								1
							},
							
							{
								"Offset_Engine",
								{0.114706,-0.113096},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.102494,-0.113804},
								1
							},
							
							{
								"Offset_Engine",
								{0.107888,-0.119794},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0956567,-0.119767},
								1
							},
							
							{
								"Offset_Engine",
								{0.100691,-0.12606999},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0884827,-0.12530801},
								1
							},
							
							{
								"Offset_Engine",
								{0.093139701,-0.13190299},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.080997199,-0.130408},
								1
							},
							
							{
								"Offset_Engine",
								{0.085260198,-0.137271},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.073226497,-0.135049},
								1
							},
							
							{
								"Offset_Engine",
								{0.0770806,-0.142156},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.065198101,-0.13921399},
								1
							},
							
							{
								"Offset_Engine",
								{0.0686296,-0.146541},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.054318,-0.136309},
								1
							},
							
							{
								"Offset_Engine",
								{0.059937101,-0.15041},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0484818,-0.146062},
								1
							},
							
							{
								"Offset_Engine",
								{0.051033501,-0.153749},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.039852701,-0.14872},
								1
							},
							
							{
								"Offset_Engine",
								{0.0419503,-0.156547},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.031083399,-0.15085401},
								1
							},
							
							{
								"Offset_Engine",
								{0.0327194,-0.158794},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0222046,-0.152458},
								1
							},
							
							{
								"Offset_Engine",
								{0.0233733,-0.160482},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0132477,-0.15352499},
								1
							},
							
							{
								"Offset_Engine",
								{0.0139449,-0.161605},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{0.0042440798,-0.15405101},
								1
							},
							
							{
								"Offset_Engine",
								{0.0044674599,-0.162159},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0047744401,-0.154035},
								1
							},
							
							{
								"Offset_Engine",
								{-0.00502573,-0.16214199},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0137762,-0.153477},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0145012,-0.16155501},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.022729401,-0.15237799},
								1
							},
							
							{
								"Offset_Engine",
								{-0.023925699,-0.16039801},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0301472,-0.143801},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0332659,-0.158677},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0403645,-0.148578},
								1
							},
							
							{
								"Offset_Engine",
								{-0.042489,-0.156398},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.048984401,-0.145889},
								1
							},
							
							{
								"Offset_Engine",
								{-0.051562499,-0.153568},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.057431798,-0.14268699},
								1
							},
							
							{
								"Offset_Engine",
								{-0.060454499,-0.150197},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.065677002,-0.138982},
								1
							},
							
							{
								"Offset_Engine",
								{-0.069133699,-0.14629699},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.0736911,-0.134789},
								1
							},
							
							{
								"Offset_Engine",
								{-0.0775695,-0.141883},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.081445701,-0.13011999},
								1
							},
							
							{
								"Offset_Engine",
								{-0.085732304,-0.136969},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.088913597,-0.124994},
								1
							},
							
							{
								"Offset_Engine",
								{-0.093593203,-0.13157301},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.096068397,-0.119428},
								1
							},
							
							{
								"Offset_Engine",
								{-0.101125,-0.12571301},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.102885,-0.113441},
								1
							},
							
							{
								"Offset_Engine",
								{-0.1083,-0.119411},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.104304,-0.102124},
								1
							},
							
							{
								"Offset_Engine",
								{-0.115094,-0.112689},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.115497,-0.088884503},
								1
							},
							
							{
								"Offset_Engine",
								{-0.127445,-0.098079398},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.132873,-0.0588568},
								1
							},
							
							{
								"Offset_Engine",
								{-0.14661799,-0.064945497},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.14105199,-0.034070101},
								1
							},
							
							{
								"Offset_Engine",
								{-0.155644,-0.037594602},
								1
							},
							{},
							
							{
								"Offset_Engine",
								{-0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_Engine",
								{-0.16,7.0909598e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp1",
								{0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp1",
								{0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp1",
								{0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp1",
								{0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp1",
								{0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp1",
								{0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp1",
								{0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp1",
								{0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp1",
								{0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp1",
								{0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp1",
								{0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp1",
								{0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp1",
								{0,-0.116597},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.090840898,-0.05339},
								1
							},
							
							{
								"Offset_Temp1",
								{0.099492401,-0.058474801},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.052182298,-0.092380904},
								1
							},
							
							{
								"Offset_Temp1",
								{0.057151999,-0.101179},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.00054978201,-0.106457},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.00060214201,-0.116596},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.053133599,-0.091821797},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0581939,-0.100567},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.091387302,-0.052422602},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.100091,-0.057415199},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0983698,-0.037230302},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.107738,-0.040775999},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.102914,-0.0211151},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.112715,-0.023126099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.109848,-0.0058563501},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114841,-0.00612255},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.109393,-0.0116965},
								1
							},
							
							{
								"Offset_Temp1",
								{0.114366,-0.0122282},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.108637,-0.0175044},
								1
							},
							
							{
								"Offset_Temp1",
								{0.113575,-0.018300099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.10758,-0.023264101},
								1
							},
							
							{
								"Offset_Temp1",
								{0.11247,-0.0243215},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.106227,-0.0289595},
								1
							},
							
							{
								"Offset_Temp1",
								{0.111055,-0.0302759},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.104581,-0.034575},
								1
							},
							
							{
								"Offset_Temp1",
								{0.109334,-0.0361466},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.102646,-0.040095199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.107311,-0.0419177},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.100427,-0.0455046},
								1
							},
							
							{
								"Offset_Temp1",
								{0.104992,-0.047573},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.097932197,-0.0507886},
								1
							},
							
							{
								"Offset_Temp1",
								{0.102384,-0.053097099},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.092138603,-0.060921799},
								1
							},
							
							{
								"Offset_Temp1",
								{0.096326701,-0.063690998},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.088856302,-0.0657432},
								1
							},
							
							{
								"Offset_Temp1",
								{0.092895202,-0.068731502},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.085328802,-0.070383199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.089207403,-0.073582403},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.081565797,-0.0748289},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0852734,-0.078230299},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.077577896,-0.079068199},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0811041,-0.082662202},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.073375799,-0.083089396},
								1
							},
							
							{
								"Offset_Temp1",
								{0.076711103,-0.086866103},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.068971299,-0.086881198},
								1
							},
							
							{
								"Offset_Temp1",
								{0.072106399,-0.090830401},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.064376503,-0.090433396},
								1
							},
							
							{
								"Offset_Temp1",
								{0.067302696,-0.094544001},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.059604,-0.093736},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0623133,-0.097996697},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.049579401,-0.099556901},
								1
							},
							
							{
								"Offset_Temp1",
								{0.051833,-0.104082},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0443548,-0.102059},
								1
							},
							
							{
								"Offset_Temp1",
								{0.046371002,-0.106698},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.039007898,-0.10428},
								1
							},
							
							{
								"Offset_Temp1",
								{0.040780999,-0.10902},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.033553399,-0.106213},
								1
							},
							
							{
								"Offset_Temp1",
								{0.035078499,-0.111041},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0280062,-0.107852},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0292792,-0.112755},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.022381799,-0.109195},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0233991,-0.114158},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0166956,-0.110236},
								1
							},
							
							{
								"Offset_Temp1",
								{0.017454499,-0.115246},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0109634,-0.110972},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0114617,-0.116017},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{0.0052008899,-0.111403},
								1
							},
							
							{
								"Offset_Temp1",
								{0.0054372898,-0.116467},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0063512102,-0.111342},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0066399002,-0.116403},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0121089,-0.11085},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0126593,-0.115889},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0178333,-0.110052},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.018643901,-0.115055},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0235084,-0.108951},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.024576901,-0.113903},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.029118599,-0.107549},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.030442201,-0.112438},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.0346485,-0.105851},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.036223501,-0.110662},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.040082801,-0.10386},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0419048,-0.108581},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.045406502,-0.101583},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.047470398,-0.1062},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.050604898,-0.099025004},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.052905198,-0.103526},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.060568899,-0.093098},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.063322,-0.097329699},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.065306999,-0.089744903},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.068275496,-0.0938242},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.069864802,-0.086144201},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0730405,-0.090059802},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.07423,-0.082305796},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0776041,-0.086046897},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.078390203,-0.078240298},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.081953399,-0.081796601},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.082334198,-0.073958799},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.086076699,-0.077320598},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.086051002,-0.069473401},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.0899624,-0.072631203},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.089530401,-0.064796202},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.093599997,-0.067741498},
								1
							},
							{},
							
							{
								"Offset_Temp1",
								{-0.092762701,-0.0599402},
								1
							},
							
							{
								"Offset_Temp1",
								{-0.096979201,-0.062664799},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp2",
								{0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp2",
								{0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp2",
								{0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp2",
								{0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp2",
								{0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp2",
								{0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp2",
								{0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp2",
								{0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp2",
								{0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp2",
								{0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp2",
								{0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp2",
								{0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp2",
								{0,-0.116597},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0100229,-0.116154},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.019969501,-0.114826},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0297642,-0.112624},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0393323,-0.109566},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.048601098,-0.105673},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.057500001,-0.100976},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.065961301,-0.095510803},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0739206,-0.0893187},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.081317298,-0.082446702},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.088095099,-0.074947298},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.094202504,-0.066877402},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.099592902,-0.058298599},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.104225,-0.049276099},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.108065,-0.039878599},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.111081,-0.030177601},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.113253,-0.020246901},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.114562,-0.0101621},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.090840898,-0.05339},
								1
							},
							
							{
								"Offset_Temp2",
								{0.099492401,-0.058474801},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.052182298,-0.092380904},
								1
							},
							
							{
								"Offset_Temp2",
								{0.057151999,-0.101179},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.00054978201,-0.106457},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.00060214201,-0.116596},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.053133599,-0.091821797},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0581939,-0.100567},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.091387302,-0.052422602},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.100091,-0.057415199},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0983698,-0.037230302},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.107738,-0.040775999},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.102914,-0.0211151},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.112715,-0.023126099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.105,4.6534399e-009},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.115,5.0966298e-009},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.109848,-0.0058563501},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114841,-0.00612255},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.109393,-0.0116965},
								1
							},
							
							{
								"Offset_Temp2",
								{0.114366,-0.0122282},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.108637,-0.0175044},
								1
							},
							
							{
								"Offset_Temp2",
								{0.113575,-0.018300099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.10758,-0.023264101},
								1
							},
							
							{
								"Offset_Temp2",
								{0.11247,-0.0243215},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.106227,-0.0289595},
								1
							},
							
							{
								"Offset_Temp2",
								{0.111055,-0.0302759},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.104581,-0.034575},
								1
							},
							
							{
								"Offset_Temp2",
								{0.109334,-0.0361466},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.102646,-0.040095199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.107311,-0.0419177},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.100427,-0.0455046},
								1
							},
							
							{
								"Offset_Temp2",
								{0.104992,-0.047573},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.097932197,-0.0507886},
								1
							},
							
							{
								"Offset_Temp2",
								{0.102384,-0.053097099},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.092138603,-0.060921799},
								1
							},
							
							{
								"Offset_Temp2",
								{0.096326701,-0.063690998},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.088856302,-0.0657432},
								1
							},
							
							{
								"Offset_Temp2",
								{0.092895202,-0.068731502},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.085328802,-0.070383199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.089207403,-0.073582403},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.081565797,-0.0748289},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0852734,-0.078230299},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.077577896,-0.079068199},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0811041,-0.082662202},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.073375799,-0.083089396},
								1
							},
							
							{
								"Offset_Temp2",
								{0.076711103,-0.086866103},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.068971299,-0.086881198},
								1
							},
							
							{
								"Offset_Temp2",
								{0.072106399,-0.090830401},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.064376503,-0.090433396},
								1
							},
							
							{
								"Offset_Temp2",
								{0.067302696,-0.094544001},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.059604,-0.093736},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0623133,-0.097996697},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.049579401,-0.099556901},
								1
							},
							
							{
								"Offset_Temp2",
								{0.051833,-0.104082},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0443548,-0.102059},
								1
							},
							
							{
								"Offset_Temp2",
								{0.046371002,-0.106698},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.039007898,-0.10428},
								1
							},
							
							{
								"Offset_Temp2",
								{0.040780999,-0.10902},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.033553399,-0.106213},
								1
							},
							
							{
								"Offset_Temp2",
								{0.035078499,-0.111041},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0280062,-0.107852},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0292792,-0.112755},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.022381799,-0.109195},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0233991,-0.114158},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0166956,-0.110236},
								1
							},
							
							{
								"Offset_Temp2",
								{0.017454499,-0.115246},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0109634,-0.110972},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0114617,-0.116017},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{0.0052008899,-0.111403},
								1
							},
							
							{
								"Offset_Temp2",
								{0.0054372898,-0.116467},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0063512102,-0.111342},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0066399002,-0.116403},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0121089,-0.11085},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0126593,-0.115889},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0178333,-0.110052},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.018643901,-0.115055},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0235084,-0.108951},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.024576901,-0.113903},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.029118599,-0.107549},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.030442201,-0.112438},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.0346485,-0.105851},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.036223501,-0.110662},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.040082801,-0.10386},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0419048,-0.108581},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.045406502,-0.101583},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.047470398,-0.1062},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.050604898,-0.099025004},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.052905198,-0.103526},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.060568899,-0.093098},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.063322,-0.097329699},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.065306999,-0.089744903},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.068275496,-0.0938242},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.069864802,-0.086144201},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0730405,-0.090059802},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.07423,-0.082305796},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0776041,-0.086046897},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.078390203,-0.078240298},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.081953399,-0.081796601},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.082334198,-0.073958799},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.086076699,-0.077320598},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.086051002,-0.069473401},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.0899624,-0.072631203},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.089530401,-0.064796202},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.093599997,-0.067741498},
								1
							},
							{},
							
							{
								"Offset_Temp2",
								{-0.092762701,-0.0599402},
								1
							},
							
							{
								"Offset_Temp2",
								{-0.096979201,-0.062664799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.144448,-0.0128131},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14279699,-0.025528699},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14005899,-0.03805},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.136255,-0.0502817},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.13141499,-0.062130701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.12557399,-0.073506899},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.118777,-0.084323697},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.111076,-0.094498701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.10253,-0.103955},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0932042,-0.112619},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.083168603,-0.120427},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.072499998,-0.12731799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.061279599,-0.13324},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.049592901,-0.13814799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.037528802,-0.142005},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.025179001,-0.14478},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0126376,-0.14645401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0,-0.14701401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0126376,-0.14645401},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.025179001,-0.14478},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.037528802,-0.142005},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.049592901,-0.13814799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.061279599,-0.13324},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.072499998,-0.12731799},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.083168603,-0.120427},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0932042,-0.112619},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.10253,-0.103955},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.111076,-0.094498701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.118777,-0.084323697},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.12557399,-0.073506899},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.13141499,-0.062130701},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.136255,-0.0502817},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14005899,-0.03805},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14279699,-0.025528699},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.144448,-0.0128131},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.145,6.42618e-009},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.132,5.85004e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.145,6.42618e-009},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.13393401,-0.0239441},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.14279699,-0.025528699},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.124039,-0.0457737},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.136255,-0.0502817},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.117779,-0.068944402},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.12557399,-0.073506899},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.101118,-0.0860264},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.111076,-0.094498701},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.0874191,-0.105629},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.0932042,-0.112619},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.066,-0.115903},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.072499998,-0.12731799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.046514701,-0.129573},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.049592901,-0.13814799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0.022921599,-0.1318},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0.025179001,-0.14478},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{0,-0.137889},
								1
							},
							
							{
								"Offset_FuelTemp",
								{0,-0.14701401},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.022921599,-0.1318},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.025179001,-0.14478},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.046514701,-0.129573},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.049592901,-0.13814799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.066,-0.115903},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.072499998,-0.12731799},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.0874191,-0.105629},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.0932042,-0.112619},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.101118,-0.0860264},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.111076,-0.094498701},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.117779,-0.068944402},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.12557399,-0.073506899},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.124039,-0.0457737},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.136255,-0.0502817},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.13393401,-0.0239441},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.14279699,-0.025528699},
								1
							},
							{},
							
							{
								"Offset_FuelTemp",
								{-0.132,5.85004e-009},
								1
							},
							
							{
								"Offset_FuelTemp",
								{-0.145,6.42618e-009},
								1
							},
							{}
						};
					};
					class Yellow
					{
						color[]={1,1,0};
						alpha=1;
						class Arrows
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"Rotate_Condensator",
									{-0.125,-0.0060000001},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.13500001,0},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.125,0.0060000001},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.125,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Engine",
									{-0.125,-0.0060000001},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.13500001,0},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.125,0.0060000001},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.125,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Temp1",
									{-0.079999998,-0.0060000001},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.090000004,0},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.079999998,0.0060000001},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.079999998,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_Temp2",
									{-0.079999998,-0.0060000001},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.090000004,0},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.079999998,0.0060000001},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.079999998,-0.0060000001},
									1
								},
								{},
								
								{
									"Rotate_FuelTemp",
									{-0.11,-0.0060000001},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.12,0},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.11,0.0060000001},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.11,-0.0060000001},
									1
								},
								{}
							};
						};
						class ArrowsBold
						{
							type="line";
							width=14;
							points[]=
							{
								
								{
									"Rotate_Condensator",
									{-0.12800001,0},
									1
								},
								
								{
									"Rotate_Condensator",
									{-0.108,0},
									1
								},
								{},
								
								{
									"Rotate_Engine",
									{-0.12800001,0},
									1
								},
								
								{
									"Rotate_Engine",
									{-0.108,0},
									1
								},
								{},
								
								{
									"Rotate_Temp1",
									{-0.082000002,0},
									1
								},
								
								{
									"Rotate_Temp1",
									{-0.071999997,0},
									1
								},
								{},
								
								{
									"Rotate_Temp2",
									{-0.082000002,0},
									1
								},
								
								{
									"Rotate_Temp2",
									{-0.071999997,0},
									1
								},
								{},
								
								{
									"Rotate_FuelTemp",
									{-0.108,0},
									1
								},
								
								{
									"Rotate_FuelTemp",
									{-0.092,0},
									1
								},
								{}
							};
						};
					};
					class LinesThin
					{
						type="line";
						width=1;
						lineType=0;
						points[]=
						{
							
							{
								{0.78564501,0.37890601},
								1
							},
							
							{
								{0.84619099,0.37890601},
								1
							},
							{},
							
							{
								{0.83740199,0.63622999},
								1
							},
							
							{
								{0.84619099,0.63622999},
								1
							},
							{},
							
							{
								{0.79980499,0.63622999},
								1
							},
							
							{
								{0.83300799,0.63622999},
								1
							},
							{},
							
							{
								{0.78564501,0.63622999},
								1
							},
							
							{
								{0.79443401,0.63622999},
								1
							},
							{},
							
							{
								{0.84814501,0.38085899},
								1
							},
							
							{
								{0.84814501,0.63427699},
								1
							},
							{},
							
							{
								{0.78320301,0.38085899},
								1
							},
							
							{
								{0.78320301,0.63427699},
								1
							},
							{},
							
							{
								{0.79736298,0.631836},
								1
							},
							
							{
								{0.79736298,0.649414},
								1
							},
							{},
							
							{
								{0.82665998,0.64111298},
								1
							},
							
							{
								{0.83007801,0.64111298},
								1
							},
							{},
							
							{
								{0.80419898,0.63867199},
								1
							},
							
							{
								{0.80419898,0.64404303},
								1
							},
							{},
							
							{
								{0.80175799,0.64160198},
								1
							},
							
							{
								{0.80761701,0.64160198},
								1
							},
							{}
						};
					};
					class Group_RG_Background_DarkYellow
					{
						color[]={0.95700002,0.78799999,0.078000002};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.80322301,0.631836},
										1
									},
									
									{
										{0.79052699,0.631836},
										1
									},
									
									{
										{0.79052699,0.38281301},
										1
									},
									
									{
										{0.80322301,0.38281301},
										1
									}
								},
								
								{
									
									{
										{0.84082001,0.631836},
										1
									},
									
									{
										{0.82861298,0.631836},
										1
									},
									
									{
										{0.82861298,0.38281301},
										1
									},
									
									{
										{0.84082001,0.38281301},
										1
									}
								}
							};
						};
					};
					class Red_RG_Lines
					{
						color[]={0.89999998,0.1,0.1};
						alpha=1;
						class Lines
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									{0.80322301,0.631836},
									1
								},
								
								{
									{0.79052699,0.631836},
									1
								},
								
								{
									{0.79052699,0.38281301},
									1
								},
								
								{
									{0.80322301,0.38281301},
									1
								},
								
								{
									{0.80322301,0.631836},
									1
								},
								{}
							};
						};
					};
					class Group_RG_Background_White
					{
						color[]={1,1,1};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.82031298,0.56542999},
										1
									},
									
									{
										{0.81152302,0.56542999},
										1
									},
									
									{
										{0.81445301,0.55859399},
										1
									},
									
									{
										{0.81738299,0.55859399},
										1
									}
								},
								
								{
									
									{
										{0.82177699,0.57177699},
										1
									},
									
									{
										{0.80957001,0.57177699},
										1
									},
									
									{
										{0.81152302,0.56542999},
										1
									},
									
									{
										{0.82031298,0.56542999},
										1
									}
								},
								
								{
									
									{
										{0.82177699,0.60693401},
										1
									},
									
									{
										{0.80957001,0.60693401},
										1
									},
									
									{
										{0.80957001,0.57177699},
										1
									},
									
									{
										{0.82177699,0.57177699},
										1
									}
								}
							};
						};
					};
					class Blue_RG_Lines
					{
						color[]={0.030999999,0.1,0.9497};
						alpha=1;
						class Lines
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									{0.81591803,0.55859399},
									1
								},
								
								{
									{0.81445301,0.55859399},
									1
								},
								
								{
									{0.81396502,0.55957001},
									1
								},
								
								{
									{0.8125,0.5625},
									1
								},
								
								{
									{0.81103498,0.56640601},
									1
								},
								
								{
									{0.80957001,0.57177699},
									1
								},
								
								{
									{0.80957001,0.60693401},
									1
								},
								
								{
									{0.81591803,0.60693401},
									1
								},
								
								{
									{0.82177699,0.60693401},
									1
								},
								
								{
									{0.82177699,0.57177699},
									1
								},
								
								{
									{0.82080102,0.56640601},
									1
								},
								
								{
									{0.819336,0.56298798},
									1
								},
								
								{
									{0.81787097,0.55957001},
									1
								},
								
								{
									{0.81689501,0.55859399},
									1
								},
								
								{
									{0.81591803,0.55859399},
									1
								},
								{},
								
								{
									{0.84082001,0.631836},
									1
								},
								
								{
									{0.82861298,0.631836},
									1
								},
								
								{
									{0.82861298,0.38281301},
									1
								},
								
								{
									{0.84082001,0.38281301},
									1
								},
								
								{
									{0.84082001,0.631836},
									1
								},
								{}
							};
						};
					};
					class Group_RG_Background_Blue
					{
						color[]={0.030999999,0.271,0.9497};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.834961,0.602539},
										1
									},
									
									{
										{0.81884801,0.602539},
										1
									},
									
									{
										{0.81884801,0.57714802},
										1
									},
									
									{
										{0.834961,0.57714802},
										1
									}
								},
								
								{
									
									{
										{0.81347698,0.602539},
										1
									},
									
									{
										{0.79736298,0.602539},
										1
									},
									
									{
										{0.79736298,0.57714802},
										1
									},
									
									{
										{0.81347698,0.57714802},
										1
									}
								}
							};
						};
					};
					class Green_RG_Lines
					{
						color[]={0.1,0.40000001,0.1};
						alpha=1;
						class Lines
						{
							type="line";
							width=2;
							lineType=0;
							points[]=
							{
								
								{
									{0.834961,0.602539},
									1
								},
								
								{
									{0.81884801,0.602539},
									1
								},
								
								{
									{0.81884801,0.57714802},
									1
								},
								
								{
									{0.834961,0.57714802},
									1
								},
								
								{
									{0.834961,0.602539},
									1
								},
								{},
								
								{
									{0.81347698,0.602539},
									1
								},
								
								{
									{0.79736298,0.602539},
									1
								},
								
								{
									{0.79736298,0.57714802},
									1
								},
								
								{
									{0.81347698,0.57714802},
									1
								},
								
								{
									{0.81347698,0.602539},
									1
								},
								{}
							};
						};
					};
					class TopText_1
					{
						type="text";
						source="static";
						text="ДПУ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*0",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.15099999,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*0",
								0.041999999
							},
							1
						};
					};
					class TopText_2
					{
						type="text";
						source="static";
						text="ОТБ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*1",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.271,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*1",
								0.041999999
							},
							1
						};
					};
					class TopText_3
					{
						type="text";
						source="static";
						text="ОВО";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*2",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.391,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*2",
								0.041999999
							},
							1
						};
					};
					class TopText_4
					{
						type="text";
						source="static";
						text="БКС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*3",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.51099998,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*3",
								0.041999999
							},
							1
						};
					};
					class TopText_5
					{
						type="text";
						source="static";
						text="БВ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*4",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.63099998,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*4",
								0.041999999
							},
							1
						};
					};
					class TopText_6
					{
						type="text";
						source="static";
						text="СН";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.121+0.12*5",
								0.0080000004
							},
							1
						};
						right[]=
						{
							{0.75099999,0.0080000004},
							1
						};
						down[]=
						{
							
							{
								"0.121+0.12*5",
								0.041999999
							},
							1
						};
					};
					class TextRight1
					{
						type="text";
						source="static";
						text="В";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.222},
							1
						};
						right[]=
						{
							{1.013,0.222},
							1
						};
						down[]=
						{
							{0.97299999,0.259},
							1
						};
					};
					class TextRight2
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.24699999},
							1
						};
						right[]=
						{
							{1.013,0.24699999},
							1
						};
						down[]=
						{
							{0.97299999,0.28400001},
							1
						};
					};
					class TextRight3
					{
						type="text";
						source="static";
						text="У";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.27200001},
							1
						};
						right[]=
						{
							{1.013,0.27200001},
							1
						};
						down[]=
						{
							{0.97299999,0.30899999},
							1
						};
					};
					class TextRight4
					{
						type="text";
						source="static";
						text="Г";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.34200001},
							1
						};
						right[]=
						{
							{1.013,0.34200001},
							1
						};
						down[]=
						{
							{0.97299999,0.37900001},
							1
						};
					};
					class TextRight5
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.36700001},
							1
						};
						right[]=
						{
							{1.013,0.36700001},
							1
						};
						down[]=
						{
							{0.97299999,0.40400001},
							1
						};
					};
					class TextRight6
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.42199999},
							1
						};
						right[]=
						{
							{1.013,0.42199999},
							1
						};
						down[]=
						{
							{0.97299999,0.45899999},
							1
						};
					};
					class TextRight7
					{
						type="text";
						source="static";
						text="О";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.447},
							1
						};
						right[]=
						{
							{1.013,0.447},
							1
						};
						down[]=
						{
							{0.97299999,0.484},
							1
						};
					};
					class TextRight8
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.472},
							1
						};
						right[]=
						{
							{1.013,0.472},
							1
						};
						down[]=
						{
							{0.97299999,0.509},
							1
						};
					};
					class TextRight9
					{
						type="text";
						source="static";
						text="Л";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.49700001},
							1
						};
						right[]=
						{
							{1.013,0.49700001},
							1
						};
						down[]=
						{
							{0.97299999,0.53399998},
							1
						};
					};
					class TextRight10
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.542},
							1
						};
						right[]=
						{
							{1.013,0.542},
							1
						};
						down[]=
						{
							{0.97299999,0.579},
							1
						};
					};
					class TextRight11
					{
						type="text";
						source="static";
						text="Э";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.56699997},
							1
						};
						right[]=
						{
							{1.013,0.56699997},
							1
						};
						down[]=
						{
							{0.97299999,0.60399997},
							1
						};
					};
					class TextRight12
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.59200001},
							1
						};
						right[]=
						{
							{1.013,0.59200001},
							1
						};
						down[]=
						{
							{0.97299999,0.62900001},
							1
						};
					};
					class TextRight13
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.63599998},
							1
						};
						right[]=
						{
							{1.013,0.63599998},
							1
						};
						down[]=
						{
							{0.97299999,0.67299998},
							1
						};
					};
					class TextRight14
					{
						type="text";
						source="static";
						text="О";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.66100001},
							1
						};
						right[]=
						{
							{1.013,0.66100001},
							1
						};
						down[]=
						{
							{0.97299999,0.69800001},
							1
						};
					};
					class TextRight15
					{
						type="text";
						source="static";
						text="С";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.97299999,0.68599999},
							1
						};
						right[]=
						{
							{1.013,0.68599999},
							1
						};
						down[]=
						{
							{0.97299999,0.72299999},
							1
						};
					};
					class MainCondensator1
					{
						type="text";
						source="static";
						text="ГЛАВ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.25999999},
							1
						};
						right[]=
						{
							{0.121,0.25999999},
							1
						};
						down[]=
						{
							{0.093000002,0.289},
							1
						};
					};
					class MainCondensator2
					{
						type="text";
						source="static";
						text="СК";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.28299999},
							1
						};
						right[]=
						{
							{0.121,0.28299999},
							1
						};
						down[]=
						{
							{0.093000002,0.31200001},
							1
						};
					};
					class MainEngine1
					{
						type="text";
						source="static";
						text="ГЛАВ ДВИГ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.093000002,0.41},
							1
						};
						right[]=
						{
							{0.121,0.41},
							1
						};
						down[]=
						{
							{0.093000002,0.43900001},
							1
						};
					};
					class RmCondensator1
					{
						type="text";
						source="static";
						text="Р";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.34},
							1
						};
						right[]=
						{
							{0.068000004,0.34},
							1
						};
						down[]=
						{
							{0.039999999,0.36899999},
							1
						};
					};
					class RmCondensator2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.345
							},
							1
						};
						right[]=
						{
							{0.082999997,0.345},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.37400001
							},
							1
						};
					};
					class RmCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user0 < 0.5";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class RmCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user0 > 0.49)*(user0<0.51)+user0>0.8";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class RmCondensatorValue_3
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user0 > 0.5)*(user0<0.81)";
						class RmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=3.05;
							refreshRate=0.87;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.04+0.068",
									"0.34+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.13699999,
									"0.34+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.04+0.068",
									0.37599999
								},
								1
							};
						};
					};
					class PnwCondensator1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.235,0.27200001},
							1
						};
						right[]=
						{
							{0.26300001,0.27200001},
							1
						};
						down[]=
						{
							{0.235,0.301},
							1
						};
					};
					class PnwCondensator2
					{
						type="text";
						source="static";
						text="нв";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.235+0.015",
								0.27700001
							},
							1
						};
						right[]=
						{
							{0.278,0.27700001},
							1
						};
						down[]=
						{
							
							{
								"0.235+0.015",
								0.30599999
							},
							1
						};
					};
					class PnwCondensator3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.335+0.015",
								0.27700001
							},
							1
						};
						right[]=
						{
							{0.37799999,0.27700001},
							1
						};
						down[]=
						{
							
							{
								"0.335+0.015",
								0.30599999
							},
							1
						};
					};
					class PnwCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user0 < 0.21";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class PnwCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user0 > 0.2)*(user0<0.67)+user0>0.8";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class PnwCondensatorValue_3
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user0 > 0.65)*(user0<0.81)";
						class PnwCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=1;
							sourceScale=110;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.235+0.098",
									"0.272+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.36199999,
									"0.272+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									"0.235+0.098",
									0.308
								},
								1
							};
						};
					};
					class MtCondensator1
					{
						type="text";
						source="static";
						text="М";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.44499999,0.182},
							1
						};
						right[]=
						{
							{0.47299999,0.182},
							1
						};
						down[]=
						{
							{0.44499999,0.211},
							1
						};
					};
					class MtCondensator2
					{
						type="text";
						source="static";
						text="т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.445+0.015",
								0.18700001
							},
							1
						};
						right[]=
						{
							{0.48800001,0.18700001},
							1
						};
						down[]=
						{
							
							{
								"0.445+0.015",
								0.21600001
							},
							1
						};
					};
					class MtCondensator3
					{
						type="text";
						source="static";
						text="кг";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.539+0.015",
								0.18700001
							},
							1
						};
						right[]=
						{
							{0.58200002,0.18700001},
							1
						};
						down[]=
						{
							
							{
								"0.539+0.015",
								0.21600001
							},
							1
						};
					};
					class MtCondensatorValue_1
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user0 < 0.11";
						class MtCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourceScale=67.050003;
							refreshRate=0.89999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.445+0.088",
									"0.182-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.56199998,
									"0.182-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.445+0.088",
									0.212
								},
								1
							};
						};
					};
					class MtCondensatorValue_2
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="user0>0.1";
						class MtCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourceScale=67.050003;
							refreshRate=0.89999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.445+0.088",
									"0.182-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.56199998,
									"0.182-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.445+0.088",
									0.212
								},
								1
							};
						};
					};
					class TmCondensator1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30899999,0.324},
							1
						};
						right[]=
						{
							{0.33700001,0.324},
							1
						};
						down[]=
						{
							{0.30899999,0.35299999},
							1
						};
					};
					class TmCondensator2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.309+0.015",
								0.329
							},
							1
						};
						right[]=
						{
							{0.352,0.329},
							1
						};
						down[]=
						{
							
							{
								"0.309+0.015",
								0.35800001
							},
							1
						};
					};
					class TmCondensator3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.39899999,0.324},
							1
						};
						right[]=
						{
							{0.42699999,0.324},
							1
						};
						down[]=
						{
							{0.39899999,0.35299999},
							1
						};
					};
					class TmCondensatorValue_1
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="user4 < 0.7";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class TmCondensatorValue_2
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="(user4 > 0.69)*(user4<0.91)";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class TmCondensatorValue_3
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user4 > 0.9";
						class TmCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=4;
							sourceLength=1;
							sourceOffset=25;
							sourceScale=65;
							refreshRate=0.44999999;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.309+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.40900001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.309+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_1
					{
						color[]={0.5,0,0};
						alpha=1;
						condition="user4 < 0.7";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_2
					{
						color[]={0,0.5,0};
						alpha=1;
						condition="(user4 > 0.69)*(user4<0.91)";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class PressureCondensatorValue_3
					{
						color[]={0.5,0.5,0};
						alpha=1;
						condition="user4 > 0.9";
						class PressureCondensatorValue
						{
							type="text";
							source="user";
							sourceIndex=0;
							sourceLength=1;
							sourcePrecision=2;
							sourceScale=3.5;
							refreshRate=0.64999998;
							text=0;
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									"0.186+0.071",
									"0.324-0.001"
								},
								1
							};
							right[]=
							{
								
								{
									0.28600001,
									"0.324-0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.186+0.071",
									0.354
								},
								1
							};
						};
					};
					class RmEngine1
					{
						type="text";
						source="static";
						text="Р";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.44600001},
							1
						};
						right[]=
						{
							{0.068000004,0.44600001},
							1
						};
						down[]=
						{
							{0.039999999,0.47499999},
							1
						};
					};
					class RmEngine2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.45100001
							},
							1
						};
						right[]=
						{
							{0.082999997,0.45100001},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.47999999
							},
							1
						};
					};
					class RmEngineValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=3.5;
						sourcePrecision=1;
						refreshRate=0.80000001;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.04+0.068",
								"0.446-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.13699999,
								"0.446-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.068",
								0.47600001
							},
							1
						};
					};
					class TmEngine1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.48100001},
							1
						};
						right[]=
						{
							{0.068000004,0.48100001},
							1
						};
						down[]=
						{
							{0.039999999,0.50999999},
							1
						};
					};
					class TmEngine2
					{
						type="text";
						source="static";
						text="м";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.04+0.015",
								0.486
							},
							1
						};
						right[]=
						{
							{0.082999997,0.486},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.015",
								0.51499999
							},
							1
						};
					};
					class TmEngine3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13,0.48100001},
							1
						};
						right[]=
						{
							{0.15800001,0.48100001},
							1
						};
						down[]=
						{
							{0.13,0.50999999},
							1
						};
					};
					class TmEngineValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=115;
						refreshRate=0.89999998;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.04+0.068",
								"0.481-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.13699999,
								"0.481-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.04+0.068",
								0.51099998
							},
							1
						};
					};
					class PtkEngine1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							{-0.018999999,-0.056000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.0089999996,-0.056000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							{-0.018999999,-0.027000001},
							1
						};
					};
					class PtkEngine2
					{
						type="text";
						source="static";
						text="тк";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"-0.019+0.015",
								-0.050999999
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.024,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"-0.019+0.015",
								-0.022
							},
							1
						};
					};
					class PtkEngine3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							{-0.003,-0.026000001},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.025,-0.026000001},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							{-0.003,0.003},
							1
						};
					};
					class PtkEngineValue1
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=110;
						refreshRate=0.5;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Engine",
							{-0.057,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							{-0.028000001,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							{-0.057,-0.001},
							1
						};
					};
					class PtkEngineValue2: PtkEngineValue1
					{
						sourceIndex=1;
						sourceScale=108;
						refreshRate=0.80000001;
						pos[]=
						{
							"Offset_Engine",
							{0.050999999,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Engine",
							{0.079999998,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Engine",
							{0.050999999,-0.001},
							1
						};
					};
					class PtkFuelTemp1
					{
						type="text";
						source="static";
						text="П";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.61000001,0.32600001},
							1
						};
						right[]=
						{
							{0.63800001,0.32600001},
							1
						};
						down[]=
						{
							{0.61000001,0.35499999},
							1
						};
					};
					class PtkFuelTemp2
					{
						type="text";
						source="static";
						text="тк";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.61+0.015",
								0.331
							},
							1
						};
						right[]=
						{
							{0.653,0.331},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.015",
								0.36000001
							},
							1
						};
					};
					class PtkFuelTemp3
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.61+0.09",
								0.32600001
							},
							1
						};
						right[]=
						{
							{0.72799999,0.32600001},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.09",
								0.35499999
							},
							1
						};
					};
					class PtkFuelTempValue
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceLength=1;
						sourceScale=78;
						refreshRate=0.2;
						text=0;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.61+0.068",
								"0.326-0.001"
							},
							1
						};
						right[]=
						{
							
							{
								0.70700002,
								"0.326-0.001"
							},
							1
						};
						down[]=
						{
							
							{
								"0.61+0.068",
								0.35600001
							},
							1
						};
					};
					class TempEng1Text1
					{
						type="text";
						source="static";
						text="Т1";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{-0.055,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.027000001,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{-0.055,-0.0040000002},
							1
						};
					};
					class TempEng1Text2
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{0.052999999,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.081,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{0.052999999,-0.0040000002},
							1
						};
					};
					class TempEng1Text3
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							{0,-0.059999999},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.028000001,-0.059999999},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							{0,-0.030999999},
							1
						};
					};
					class TempEng1Value
					{
						type="text";
						source="user";
						sourceIndex=2;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Temp1",
							{0.001,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							{0.029999999,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							{0.001,-0.001},
							1
						};
					};
					class TempEng2Text1
					{
						type="text";
						source="static";
						text="Т2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{-0.055,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.027000001,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{-0.055,-0.0040000002},
							1
						};
					};
					class TempEng2Text2
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{0.052999999,-0.033},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.081,-0.033},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{0.052999999,-0.0040000002},
							1
						};
					};
					class TempEng2Text3
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							{0,-0.059999999},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.028000001,-0.059999999},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							{0,-0.030999999},
							1
						};
					};
					class TempEng2Value
					{
						type="text";
						source="user";
						sourceIndex=3;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_Temp2",
							{0.001,-0.032000002},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							{0.029999999,-0.032000002},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							{0.001,-0.001},
							1
						};
					};
					class FuelTempText1
					{
						type="text";
						source="static";
						text="Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.055,-0.057},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.027000001,-0.057},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.055,-0.028000001},
							1
						};
					};
					class FuelTempText2
					{
						type="text";
						source="static";
						text="г";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.045000002,-0.050999999},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.017000001,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.045000002,-0.022},
							1
						};
					};
					class FuelTempText3
					{
						type="text";
						source="static";
						text="°C";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{0.052999999,-0.050999999},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.081,-0.050999999},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{0.052999999,-0.022},
							1
						};
					};
					class FuelTempText4
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							{0,-0.082999997},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.028000001,-0.082999997},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							{0,-0.054000001},
							1
						};
					};
					class FuelTempValue
					{
						type="text";
						source="turretGunTemp";
						sourceLength=1;
						sourceScale=900;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							"Offset_FuelTemp",
							{0.001,-0.055},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							{0.029999999,-0.055},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							{0.001,-0.024},
							1
						};
					};
					class FuelTempCondensator
					{
						type="text";
						source="static";
						text="СК";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.69099998,0.38999999},
							1
						};
						right[]=
						{
							{0.71399999,0.38999999},
							1
						};
						down[]=
						{
							{0.69099998,0.41499999},
							1
						};
					};
					class FuelTempTank
					{
						type="text";
						source="static";
						text="ТПЛБ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.69099998,0.52600002},
							1
						};
						right[]=
						{
							{0.71399999,0.52600002},
							1
						};
						down[]=
						{
							{0.69099998,0.551},
							1
						};
					};
					class CondensatorValue
					{
						type="text";
						source="user";
						sourceIndex=0;
						sourceLength=1;
						sourceScale=110;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								0.69099998,
								"0.39+0.034"
							},
							1
						};
						right[]=
						{
							
							{
								0.71799999,
								"0.39+0.034"
							},
							1
						};
						down[]=
						{
							{0.69099998,0.45199999},
							1
						};
					};
					class FuelValue
					{
						type="text";
						source="fuel";
						sourceIndex=0;
						sourceLength=1;
						sourceScale=100;
						text=0;
						align="center";
						scale=1;
						pos[]=
						{
							{0.69099998,0.56400001},
							1
						};
						right[]=
						{
							{0.71799999,0.56400001},
							1
						};
						down[]=
						{
							{0.69099998,0.59200001},
							1
						};
					};
					class TempStats1
					{
						type="text";
						source="static";
						text="x100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.301,0.66600001},
							1
						};
						right[]=
						{
							{0.324,0.66600001},
							1
						};
						down[]=
						{
							{0.301,0.69099998},
							1
						};
					};
					class TempStats2
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.64899999},
							1
						};
						right[]=
						{
							{0.32499999,0.64899999},
							1
						};
						down[]=
						{
							{0.30199999,0.67400002},
							1
						};
					};
					class TempStats3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.625},
							1
						};
						right[]=
						{
							{0.32499999,0.625},
							1
						};
						down[]=
						{
							{0.30199999,0.64999998},
							1
						};
					};
					class TempStats4
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.59500003},
							1
						};
						right[]=
						{
							{0.32499999,0.59500003},
							1
						};
						down[]=
						{
							{0.30199999,0.62},
							1
						};
					};
					class TempStats5
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.30199999,0.57099998},
							1
						};
						right[]=
						{
							{0.32499999,0.57099998},
							1
						};
						down[]=
						{
							{0.30199999,0.59600002},
							1
						};
					};
					class TempStats6
					{
						type="text";
						source="static";
						text="Л.С.  2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.34200001,0.53500003},
							1
						};
						right[]=
						{
							{0.36500001,0.53500003},
							1
						};
						down[]=
						{
							{0.34200001,0.56},
							1
						};
					};
					class TempStats7
					{
						type="text";
						source="static";
						text="1     N";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.252,0.53500003},
							1
						};
						right[]=
						{
							{0.27500001,0.53500003},
							1
						};
						down[]=
						{
							{0.252,0.56},
							1
						};
					};
					class PressureUnit1
					{
						type="text";
						source="static";
						text="КГС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.025,0},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.026000001},
							1
						};
					};
					class PressureUnit2
					{
						type="text";
						source="static";
						text="СМ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.023399999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.025,0.023399999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0,0.049400002},
							1
						};
					};
					class PressureUnit3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.021600001,0.0184},
							1
						};
						right[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.044599999,0.0184},
							1
						};
						down[]=
						{
							"Offset_PressureUnit1",
							1,
							{0.021600001,0.043400001},
							1
						};
					};
					class PressureUnit2_1
					{
						type="text";
						source="static";
						text="КГС";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.025,0},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.026000001},
							1
						};
					};
					class PressureUnit2_2
					{
						type="text";
						source="static";
						text="СМ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.023399999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.025,0.023399999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0,0.049400002},
							1
						};
					};
					class PressureUnit2_3
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.021600001,0.0184},
							1
						};
						right[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.044599999,0.0184},
							1
						};
						down[]=
						{
							"Offset_PressureUnit2",
							1,
							{0.021600001,0.043400001},
							1
						};
					};
					class PressureUnit3_1
					{
						type="text";
						source="static";
						text="кВ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.0049999999,0.0049999999},
							1
						};
						right[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.039999999,0.0049999999},
							1
						};
						down[]=
						{
							"Offset_PressureUnit3",
							1,
							{0.0049999999,0.041000001},
							1
						};
					};
					class CondensatorIndicator1
					{
						type="text";
						source="static";
						text="110";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.153,-0.011},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(90)",
								0.014
							},
							1
						};
					};
					class CondensatorIndicator2
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(53)",
								-0.090322599
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.12682299,-0.090322599},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(53)",
								-0.0653226
							},
							1
						};
					};
					class CondensatorIndicator3
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(25)",
								-0.13831399
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{0.077940397,-0.13831399},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(25)",
								-0.113314
							},
							1
						};
					};
					class CondensatorIndicator4
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-14)",
								-0.148803
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.0084498497,-0.148803},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-14)",
								-0.123803
							},
							1
						};
					};
					class CondensatorIndicator5
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.095723003
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.076585799,-0.095723003},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.070722997
							},
							1
						};
					};
					class CondensatorIndicator6
					{
						type="text";
						source="static";
						text="40";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.066703402
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.09482,-0.066703402},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.041703399
							},
							1
						};
					};
					class CondensatorIndicator7
					{
						type="text";
						source="static";
						text="20";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.045113798
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.10257,-0.045113798},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.0201138
							},
							1
						};
					};
					class CondensatorIndicator8
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Condensator",
							1,
							{-0.117,-0.011},
							1
						};
						down[]=
						{
							"Offset_Condensator",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								0.014
							},
							1
						};
					};
					class EngineIndicator1
					{
						type="text";
						source="static";
						text="110";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.153,-0.011},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(90)",
								0.014
							},
							1
						};
					};
					class EngineIndicator2
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(53)",
								-0.090322599
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.12682299,-0.090322599},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(53)",
								-0.0653226
							},
							1
						};
					};
					class EngineIndicator3
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(25)",
								-0.13831399
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.077940397,-0.13831399},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(25)",
								-0.113314
							},
							1
						};
					};
					class EngineIndicator4
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-10)",
								-0.14080299
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{0.00042573499,-0.14080299},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-10)",
								-0.115803
							},
							1
						};
					};
					class EngineIndicator5
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.095723003
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.076585799,-0.095723003},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-50)",
								-0.070722997
							},
							1
						};
					};
					class EngineIndicator6
					{
						type="text";
						source="static";
						text="40";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.066703402
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.09482,-0.066703402},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-65)",
								-0.041703399
							},
							1
						};
					};
					class EngineIndicator7
					{
						type="text";
						source="static";
						text="20";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.045113798
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.10257,-0.045113798},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-75)",
								-0.0201138
							},
							1
						};
					};
					class EngineIndicator8
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_Engine",
							1,
							{-0.117,-0.011},
							1
						};
						down[]=
						{
							"Offset_Engine",
							1,
							
							{
								"0.13 * sin(-90)-0.01",
								0.014
							},
							1
						};
					};
					class FuelTempIndicator1
					{
						type="text";
						source="static";
						text="9";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(90)",
								-0.011
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.148,-0.011},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(90)",
								0.014
							},
							1
						};
					};
					class FuelTempIndicator2
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(30)",
								-0.120757
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{0.085500002,-0.120757},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(30)",
								-0.095756702
							},
							1
						};
					};
					class FuelTempIndicator3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(-30)",
								-0.120757
							},
							1
						};
						right[]=
						{
							"Offset_FuelTemp",
							1,
							{-0.039500002,-0.120757},
							1
						};
						down[]=
						{
							"Offset_FuelTemp",
							1,
							
							{
								"0.125 * sin(-30)",
								-0.095756702
							},
							1
						};
					};
					class Temp1Indicator1
					{
						type="text";
						source="static";
						text="8";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(90)",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.118,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(90)",
								0.0099999998
							},
							1
						};
					};
					class Temp1Indicator2
					{
						type="text";
						source="static";
						text="7";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(60)",
								-0.063159697
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.105272,-0.063159697},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(60)",
								-0.038159698
							},
							1
						};
					};
					class Temp1Indicator3
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.070500001,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(30)",
								-0.073415101
							},
							1
						};
					};
					class Temp1Indicator4
					{
						type="text";
						source="static";
						text="5";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(0)",
								-0.111319
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{0.023,-0.111319},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(0)",
								-0.086319402
							},
							1
						};
					};
					class Temp1Indicator5
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.024499999,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.073415101
							},
							1
						};
					};
					class Temp1Indicator6
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.047943201
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.071270801,-0.047943201},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.022943201
							},
							1
						};
					};
					class Temp1Indicator7
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp1",
							1,
							{-0.077,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp1",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								0.0099999998
							},
							1
						};
					};
					class Temp2Indicator1
					{
						type="text";
						source="static";
						text="8";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(90)",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.118,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(90)",
								0.0099999998
							},
							1
						};
					};
					class Temp2Indicator2
					{
						type="text";
						source="static";
						text="7";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(60)",
								-0.063159697
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.105272,-0.063159697},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(60)",
								-0.038159698
							},
							1
						};
					};
					class Temp2Indicator3
					{
						type="text";
						source="static";
						text="6";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.070500001,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(30)",
								-0.073415101
							},
							1
						};
					};
					class Temp2Indicator4
					{
						type="text";
						source="static";
						text="5";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(0)",
								-0.111319
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{0.023,-0.111319},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(0)",
								-0.086319402
							},
							1
						};
					};
					class Temp2Indicator5
					{
						type="text";
						source="static";
						text="4";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.098415099
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.024499999,-0.098415099},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-30)",
								-0.073415101
							},
							1
						};
					};
					class Temp2Indicator6
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.047943201
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.071270801,-0.047943201},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-70)-0.005",
								-0.022943201
							},
							1
						};
					};
					class Temp2Indicator7
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								-0.015
							},
							1
						};
						right[]=
						{
							"Offset_Temp2",
							1,
							{-0.077,-0.015},
							1
						};
						down[]=
						{
							"Offset_Temp2",
							1,
							
							{
								"0.095 * sin(-90)-0.005",
								0.0099999998
							},
							1
						};
					};
					class MessageBox1
					{
						type="text";
						source="static";
						text="ВАЖНОЕ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13,0.935},
							1
						};
						right[]=
						{
							{0.167,0.935},
							1
						};
						down[]=
						{
							{0.13,0.97399998},
							1
						};
					};
					class MessageBox2
					{
						type="text";
						source="static";
						text="12";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.13500001,0.815},
							1
						};
						right[]=
						{
							{0.17200001,0.815},
							1
						};
						down[]=
						{
							{0.13500001,0.85399997},
							1
						};
					};
					class MessageBox3
					{
						type="text";
						source="static";
						text="КРИТИЧЕСКОЕ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.36",
								0.935
							},
							1
						};
						right[]=
						{
							{0.52700001,0.935},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.36",
								0.97399998
							},
							1
						};
					};
					class MessageBox4
					{
						type="text";
						source="static";
						text="63";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.37",
								0.815
							},
							1
						};
						right[]=
						{
							{0.537,0.815},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.37",
								0.85399997
							},
							1
						};
					};
					class MessageBox5
					{
						type="text";
						source="static";
						text="РЕЖИМ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.73",
								0.935
							},
							1
						};
						right[]=
						{
							{0.89700001,0.935},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.73",
								0.97399998
							},
							1
						};
					};
					class MessageBox6
					{
						type="text";
						source="static";
						text="АВТО";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.13+0.73",
								0.81099999
							},
							1
						};
						right[]=
						{
							{0.89700001,0.81099999},
							1
						};
						down[]=
						{
							
							{
								"0.13+0.73",
								0.85000002
							},
							1
						};
					};
					class Group_White
					{
						color[]={1,1,1};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0,0.72100002},
										1
									},
									
									{
										{1,0.72100002},
										1
									},
									
									{
										{1,0.736},
										1
									},
									
									{
										{0,0.736},
										1
									}
								},
								
								{
									
									{
										{0.046999998,0.77999997},
										1
									},
									
									{
										{0.081,0.77999997},
										1
									},
									
									{
										{0.081,0.935},
										1
									},
									
									{
										{0.046999998,0.935},
										1
									}
								},
								
								{
									
									{
										{0.046999998,0.77999997},
										1
									},
									
									{
										{0.222,0.77999997},
										1
									},
									
									{
										{0.222,0.81400001},
										1
									},
									
									{
										{0.046999998,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.197,0.77999997},
										1
									},
									
									{
										{0.23100001,0.77999997},
										1
									},
									
									{
										{0.23100001,0.935},
										1
									},
									
									{
										{0.197,0.935},
										1
									}
								}
							};
						};
					};
					class Group_Blue
					{
						color[]={0.2,1,1};
						alpha=1;
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
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.075000003,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.094999999},
								1
							};
						};
						class Date: Time
						{
							text="%x";
							pos[]=
							{
								
								{
									0.029999999,
									"0.05+0.04"
								},
								1
							};
							right[]=
							{
								
								{
									0.075000003,
									"0.05+0.04"
								},
								1
							};
							down[]=
							{
								{0.029999999,0.13500001},
								1
							};
						};
						class PositionText
						{
							type="text";
							source="static";
							text="ПОЗИЦИЯ:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.050000001},
								1
							};
							right[]=
							{
								{0.245,0.050000001},
								1
							};
							down[]=
							{
								{0.2,0.094999999},
								1
							};
						};
						class CordX
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
								
								{
									"0.2+0.17",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.41499999,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.17",
									0.094999999
								},
								1
							};
						};
						class CordY: CordX
						{
							source="coordinateY";
							pos[]=
							{
								
								{
									"0.2+0.17+0.07",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.48500001,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.17+0.07",
									0.094999999
								},
								1
							};
						};
						class ATLText
						{
							type="text";
							source="static";
							text="ВЫСОТА:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.090000004},
								1
							};
							right[]=
							{
								{0.245,0.090000004},
								1
							};
							down[]=
							{
								{0.2,0.13500001},
								1
							};
						};
						class ATLValue
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							sourceLength=4;
							sourceOffset=-2.0999999;
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									"0.2+0.22",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.465,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.22",
									0.13500001
								},
								1
							};
						};
						class ATLText2
						{
							type="text";
							source="static";
							text="м";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.2+0.29",
									0.1
								},
								1
							};
							right[]=
							{
								{0.54000002,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.2+0.29",
									0.13500001
								},
								1
							};
						};
						class VersionText
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.050000001},
								1
							};
							right[]=
							{
								{0.685,0.050000001},
								1
							};
							down[]=
							{
								{0.63999999,0.094999999},
								1
							};
						};
						class VersionText2
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.090000004},
								1
							};
							right[]=
							{
								{0.685,0.090000004},
								1
							};
							down[]=
							{
								{0.63999999,0.13500001},
								1
							};
						};
					};
					class Group_Red
					{
						color[]={1,0,0};
						alpha=1;
						class Warning_Gun
						{
							blinkingPattern=0.15000001;
							condition="user5";
							class VersionText
							{
								type="text";
								source="static";
								text="ОТКАЗ ПУШКА";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.63999999,0.050000001},
									1
								};
								right[]=
								{
									{0.685,0.050000001},
									1
								};
								down[]=
								{
									{0.63999999,0.094999999},
									1
								};
							};
						};
						class Warning_Engine
						{
							blinkingPattern=0.15000001;
							condition="user4";
							class VersionText2
							{
								type="text";
								source="static";
								text="ОТКАЗ ДВИГ";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.63999999,0.090000004},
									1
								};
								right[]=
								{
									{0.685,0.090000004},
									1
								};
								down[]=
								{
									{0.63999999,0.13500001},
									1
								};
							};
						};
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.271,0.65899998},
										1
									},
									
									{
										{0.28099999,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.28099999,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.271,0.65899998},
										1
									}
								},
								
								{
									
									{
										{0.32100001,0.65899998},
										1
									},
									
									{
										{0.331,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.331,0.65899998},
										1
									},
									
									{
										"DeltaNLevel1",
										1,
										{0.32100001,0.65899998},
										1
									}
								},
								
								{
									
									{
										{0.40700001,0.77999997},
										1
									},
									
									{
										{0.44100001,0.77999997},
										1
									},
									
									{
										{0.44100001,0.935},
										1
									},
									
									{
										{0.40700001,0.935},
										1
									}
								},
								
								{
									
									{
										{0.40700001,0.77999997},
										1
									},
									
									{
										{0.58200002,0.77999997},
										1
									},
									
									{
										{0.58200002,0.81400001},
										1
									},
									
									{
										{0.40700001,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.55699998,0.77999997},
										1
									},
									
									{
										{0.59100002,0.77999997},
										1
									},
									
									{
										{0.59100002,0.935},
										1
									},
									
									{
										{0.55699998,0.935},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,-0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0041042399,-0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,-0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,-0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0077134501,-0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,-0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,-0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0103923,-0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,-0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,-0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0118177,-0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{0.012,5.3182198e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.012,5.3182198e-010},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0118177,0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,0.0041612498},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0112763,0.0041612498},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0103923,0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0091925301,0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0077134501,0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0060000001,0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{0.0041042399,0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{-1.0490701e-009,0.0121667},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0041042399,0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0077134501,0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0103923,0.0060833301},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0118177,0.0021127199},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.012,-1.45086e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.012,-1.45086e-010},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0118177,-0.0021127299},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,-0.0041612401},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0112763,-0.0041612401},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0103923,-0.0060833399},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,-0.0078205802},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0091925301,-0.0078205802},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0077134501,-0.0093202097},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,-0.0105366},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0060000001,-0.0105366},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.0041042399,-0.0114329},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,-0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle1",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle1",
										{-0.00208378,-0.0119818},
										1
									},
									
									{
										"Offset_Circle1",
										{2.0981501e-009,-0.0121667},
										1
									},
									
									{
										"Offset_Circle1",
										{0.00208378,-0.0119818},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,-0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0128025,-0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{0.013,5.7614002e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.013,5.7614002e-010},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,0.0045080199},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.012216,0.0045080199},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{-1.1365e-009,0.0131806},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.013,-1.5717699e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.013,-1.5717699e-010},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0128025,-0.00228879},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225742,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle2",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle2",
										{-0.00225742,-0.0129803},
										1
									},
									
									{
										"Offset_Circle2",
										{2.27299e-009,-0.0131806},
										1
									},
									
									{
										"Offset_Circle2",
										{0.00225743,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,-0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0128025,-0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{0.013,5.7614002e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.013,5.7614002e-010},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,0.0045080199},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.012216,0.0045080199},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{-1.1365e-009,0.0131806},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225743,0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225743,0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0044462602,0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0083562396,0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0112583,0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0128025,0.0022887799},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.013,-1.5717699e-010},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.013,-1.5717699e-010},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0128025,-0.00228879},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,-0.0045080101},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.012216,-0.0045080101},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0112583,-0.0065902802},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,-0.0084723001},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0099585801,-0.0084723001},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0083562396,-0.0100969},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,-0.0114147},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0065000001,-0.0114147},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.0044462602,-0.0123857},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225742,-0.0129803},
										1
									}
								},
								
								{
									
									{
										"Offset_Circle3",
										1,
										{0,0},
										1
									},
									
									{
										"Offset_Circle3",
										{-0.00225742,-0.0129803},
										1
									},
									
									{
										"Offset_Circle3",
										{2.27299e-009,-0.0131806},
										1
									},
									
									{
										"Offset_Circle3",
										{0.00225743,-0.0129803},
										1
									}
								}
							};
						};
					};
					class Warning_Fuel
					{
						color[]={1,0.1,0};
						blinkingPattern=0.050000001;
						condition="fuel < 0.1";
						class Polygons
						{
							type="polygon";
							width=4;
							texture="a3\Armor_F_Decade\MBT_02\Data\UI\LowFuel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.85000002,0.54000002},
										1
									},
									
									{
										{0.94999999,0.54000002},
										1
									},
									
									{
										{0.94999999,0.63999999},
										1
									},
									
									{
										{0.85000002,0.63999999},
										1
									}
								}
							};
						};
					};
					class Warning_GunTemperature
					{
						color[]={1,0.1,0};
						blinkingPattern=0.050000001;
						condition="turretGunTemp > 0.8";
						class Polygons
						{
							type="polygon";
							width=4;
							texture="a3\Armor_F_Decade\MBT_02\Data\UI\HighTemperature_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.85000002,0.38},
										1
									},
									
									{
										{0.94999999,0.38},
										1
									},
									
									{
										{0.94999999,0.47999999},
										1
									},
									
									{
										{0.85000002,0.47999999},
										1
									}
								}
							};
						};
					};
					class Group_Yellow
					{
						color[]={1,0.98400003,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.76700002,0.77999997},
										1
									},
									
									{
										{0.801,0.77999997},
										1
									},
									
									{
										{0.801,0.935},
										1
									},
									
									{
										{0.76700002,0.935},
										1
									}
								},
								
								{
									
									{
										{0.76700002,0.77999997},
										1
									},
									
									{
										{0.94199997,0.77999997},
										1
									},
									
									{
										{0.94199997,0.81400001},
										1
									},
									
									{
										{0.76700002,0.81400001},
										1
									}
								},
								
								{
									
									{
										{0.917,0.77999997},
										1
									},
									
									{
										{0.95099998,0.77999997},
										1
									},
									
									{
										{0.95099998,0.935},
										1
									},
									
									{
										{0.917,0.935},
										1
									}
								}
							};
						};
						class Lines_Thick
						{
							type="line";
							width=3;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Circle2",
									{0,-0.0141944},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{0.014,0},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0,0.0141944},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.014,0},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle2",
									{-0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle2",
									{0,-0.0141944},
									1
								},
								{},
								
								{
									"Offset_Circle3",
									{0,-0.0141944},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{0.014,0},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0,0.0141944},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0024304001,0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0047880001,0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0070000002,0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0089991996,0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.010724,0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.012124,0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0131558,0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0137872,0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.014,0},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0137872,-0.0024641601},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0131558,-0.0048544998},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.012124,-0.00709722},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.010724,-0.0091241896},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0089991996,-0.0108729},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0070000002,-0.0122924},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0047880001,-0.0133385},
									1
								},
								
								{
									"Offset_Circle3",
									{-0.0024304001,-0.0139787},
									1
								},
								
								{
									"Offset_Circle3",
									{0,-0.0141944},
									1
								},
								{}
							};
						};
						class Lines
						{
							type="line";
							width=5;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Condensator",
									{0.122567,-0.104274},
									1
								},
								
								{
									"Offset_Condensator",
									{0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Condensator",
									{0.102846,-0.124269},
									1
								},
								{},
								
								{
									"Offset_Condensator",
									{0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Condensator",
									{0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Condensator",
									{0,-0.162222},
									1
								},
								
								{
									"Offset_Condensator",
									{-0.0139449,-0.161605},
									1
								},
								{},
								
								{
									"Offset_Engine",
									{0.150351,-0.0554832},
									1
								},
								
								{
									"Offset_Engine",
									{0.145009,-0.068558097},
									1
								},
								
								{
									"Offset_Engine",
									{0.13856401,-0.081111103},
									1
								},
								
								{
									"Offset_Engine",
									{0.131064,-0.093046799},
									1
								},
								{},
								
								{
									"Offset_Temp1",
									{0.108065,-0.039878599},
									1
								},
								
								{
									"Offset_Temp1",
									{0.104225,-0.049276099},
									1
								},
								
								{
									"Offset_Temp1",
									{0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp1",
									{0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp1",
									{0.088095099,-0.074947298},
									1
								},
								{},
								
								{
									"Offset_Temp2",
									{0.108065,-0.039878599},
									1
								},
								
								{
									"Offset_Temp2",
									{0.104225,-0.049276099},
									1
								},
								
								{
									"Offset_Temp2",
									{0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp2",
									{0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp2",
									{0.088095099,-0.074947298},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.118777,-0.084323697},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.111076,-0.094498701},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.10253,-0.103955},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.0932042,-0.112619},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.083168603,-0.120427},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.072499998,-0.12731799},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.025179001,-0.14478},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.0126376,-0.14645401},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0,-0.14701401},
									1
								},
								
								{
									"Offset_FuelTemp",
									{-0.0126376,-0.14645401},
									1
								},
								{}
							};
						};
					};
					class Group_Green
					{
						color[]={0,1,0};
						alpha=1;
						class Polygons
						{
							type="polygon";
							width=4;
							points[]={};
						};
						class Lines
						{
							type="line";
							width=5;
							lineType=0;
							points[]=
							{
								
								{
									"Offset_Condensator",
									{0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Condensator",
									{0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Condensator",
									{0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Condensator",
									{0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Condensator",
									{0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Condensator",
									{0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Condensator",
									{0.027783699,-0.159758},
									1
								},
								{},
								
								{
									"Offset_Engine",
									{0.131064,-0.093046799},
									1
								},
								
								{
									"Offset_Engine",
									{0.122567,-0.104274},
									1
								},
								
								{
									"Offset_Engine",
									{0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Engine",
									{0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Engine",
									{0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Engine",
									{0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Engine",
									{0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Engine",
									{0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Engine",
									{0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Engine",
									{0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Engine",
									{0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Engine",
									{0,-0.162222},
									1
								},
								
								{
									"Offset_Engine",
									{-0.0139449,-0.161605},
									1
								},
								
								{
									"Offset_Engine",
									{-0.027783699,-0.159758},
									1
								},
								
								{
									"Offset_Engine",
									{-0.041411001,-0.15669499},
									1
								},
								
								{
									"Offset_Engine",
									{-0.054723199,-0.152439},
									1
								},
								
								{
									"Offset_Engine",
									{-0.067618899,-0.14702301},
									1
								},
								
								{
									"Offset_Engine",
									{-0.079999998,-0.140489},
									1
								},
								
								{
									"Offset_Engine",
									{-0.091772199,-0.13288499},
									1
								},
								
								{
									"Offset_Engine",
									{-0.102846,-0.124269},
									1
								},
								
								{
									"Offset_Engine",
									{-0.113137,-0.114708},
									1
								},
								
								{
									"Offset_Engine",
									{-0.122567,-0.104274},
									1
								},
								{},
								
								{
									"Offset_Temp1",
									{0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp1",
									{0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp1",
									{0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp1",
									{0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp1",
									{0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp1",
									{0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp1",
									{0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp1",
									{0,-0.116597},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp1",
									{-0.104225,-0.049276099},
									1
								},
								{},
								
								{
									"Offset_Temp2",
									{0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp2",
									{0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp2",
									{0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp2",
									{0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp2",
									{0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp2",
									{0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp2",
									{0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp2",
									{0,-0.116597},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0100229,-0.116154},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.019969501,-0.114826},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0297642,-0.112624},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0393323,-0.109566},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.048601098,-0.105673},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.057500001,-0.100976},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.065961301,-0.095510803},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.0739206,-0.0893187},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.081317298,-0.082446702},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.088095099,-0.074947298},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.094202504,-0.066877402},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.099592902,-0.058298599},
									1
								},
								
								{
									"Offset_Temp2",
									{-0.104225,-0.049276099},
									1
								},
								{},
								
								{
									"Offset_FuelTemp",
									{0.072499998,-0.12731799},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.061279599,-0.13324},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.049592901,-0.13814799},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.037528802,-0.142005},
									1
								},
								
								{
									"Offset_FuelTemp",
									{0.025179001,-0.14478},
									1
								},
								{}
							};
						};
					};
				};
			};
			class MFD_Driver_Heading
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Fire
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.92000002,0.0099999998,0};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					blinkingPattern[]={1,1};
					blinkingStartsOn=1;
					class Driver_Fire
					{
						type="text";
						source="static";
						text="ПОЖАР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.85500002,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.70499998},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoType
			{
				topLeft="MFD_5_TL";
				topRight="MFD_5_TR";
				bottomLeft="MFD_5_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.050000001},
							1
						};
						right[]=
						{
							{1.355,0.050000001},
							1
						};
						down[]=
						{
							{0.45500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1.3,0},
							1
						};
						down[]=
						{
							{0.5,0.30000001},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.30000001},
							1
						};
						right[]=
						{
							{1.3,0.30000001},
							1
						};
						down[]=
						{
							{0.5,0.60000002},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.60000002},
							1
						};
						right[]=
						{
							{1.3,0.60000002},
							1
						};
						down[]=
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Ready_To_Fire
			{
				topLeft="mfd_gun_cli_TL";
				topRight="mfd_gun_cli_TR";
				bottomLeft="mfd_gun_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="К СТРЕЛЬБЕ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.050000001},
							1
						};
						right[]=
						{
							{0.67000002,0.050000001},
							1
						};
						down[]=
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="ГОТОВ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.465,0.44999999},
							1
						};
						right[]=
						{
							{0.685,0.44999999},
							1
						};
						down[]=
						{
							{0.465,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.072999999},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.31},
							1
						};
						right[]=
						{
							{0.075000003,0.31},
							1
						};
						down[]=
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54500002,-0.0049999999},
							1
						};
						right[]=
						{
							{0.60500002,-0.0049999999},
							1
						};
						down[]=
						{
							{0.54500002,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.075000003,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.56,0.064999998},
							1
						};
						right[]=
						{
							{0.68000001,0.064999998},
							1
						};
						down[]=
						{
							{0.56,0.185},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="static";
						text="---";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.31,0.31},
							1
						};
						right[]=
						{
							{0.37,0.31},
							1
						};
						down[]=
						{
							{0.31,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.064999998},
							1
						};
						right[]=
						{
							{0.23,0.064999998},
							1
						};
						down[]=
						{
							{0.17,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.075000003,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.125},
							1
						};
						right[]=
						{
							{0.23,0.125},
							1
						};
						down[]=
						{
							{0.17,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="К";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.185},
							1
						};
						right[]=
						{
							{0.075000003,0.185},
							1
						};
						down[]=
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.185},
							1
						};
						right[]=
						{
							{0.23,0.185},
							1
						};
						down[]=
						{
							{0.17,0.26300001},
							1
						};
					};
				};
			};
			class MFD_Gunner2nd_Display
			{
				topLeft="MFD_9_TL";
				topRight="MFD_9_TR";
				bottomLeft="MFD_9_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospacePro";
				turret[]={0,0};
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82999998,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.82999998,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
							1
						};
					};
				};
			};
			class MFD_Commander_Display
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.145},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.50999999,-0.0049999999},
							1
						};
						right[]=
						{
							{0.56999999,-0.0049999999},
							1
						};
						down[]=
						{
							{0.50999999,0.145},
							1
						};
					};
					class Commander_machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.72000003,0.19},
							1
						};
						right[]=
						{
							{0.77999997,0.19},
							1
						};
						down[]=
						{
							{0.72000003,0.34},
							1
						};
					};
					class Commander_armament
					{
						type="text";
						source="static";
						text="ОРУДИЕ КОМАНДИРА";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.79500002,0.0049999999},
							1
						};
						right[]=
						{
							{0.84500003,0.0049999999},
							1
						};
						down[]=
						{
							{0.79500002,0.125},
							1
						};
					};
					class Commander_armament_magazines
					{
						type="text";
						source="static";
						text="МАГ.";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.47,0.40000001},
							1
						};
						right[]=
						{
							{0.52999997,0.40000001},
							1
						};
						down[]=
						{
							{0.47,0.55000001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.61000001},
							1
						};
						right[]=
						{
							{0.075000003,0.61000001},
							1
						};
						down[]=
						{
							{0.015,0.75999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.73500001,0.61000001},
							1
						};
						right[]=
						{
							{0.79000002,0.61000001},
							1
						};
						down[]=
						{
							{0.73500001,0.75999999},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.70999998,0.80000001},
							1
						};
						right[]=
						{
							{0.76999998,0.80000001},
							1
						};
						down[]=
						{
							{0.70999998,0.94999999},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.81999999},
							1
						};
						right[]=
						{
							{0.075000003,0.81999999},
							1
						};
						down[]=
						{
							{0.015,0.97000003},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.92500001,0.80000001},
							1
						};
						right[]=
						{
							{0.98500001,0.80000001},
							1
						};
						down[]=
						{
							{0.92500001,0.94999999},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.92500001,0.61000001},
							1
						};
						right[]=
						{
							{0.98500001,0.61000001},
							1
						};
						down[]=
						{
							{0.92500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Commander_Intercom
			{
				topLeft="MFD_6_TL";
				topRight="MFD_6_TR";
				bottomLeft="MFD_6_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="on";
					class Com_Intercom
					{
						type="text";
						source="static";
						text="ВН КАНАЛ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.55500001,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.38499999},
							1
						};
					};
				};
			};
			class MFD_Commander_Ready_To_Fire
			{
				topLeft="mfd_com_cli_TL";
				topRight="mfd_com_cli_TR";
				bottomLeft="mfd_com_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="К СТРЕЛЬБЕ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.47999999,0.050000001},
							1
						};
						right[]=
						{
							{0.68000001,0.050000001},
							1
						};
						down[]=
						{
							{0.47999999,0.56},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="ГОТОВ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.41},
							1
						};
						right[]=
						{
							{0.69999999,0.41},
							1
						};
						down[]=
						{
							{0.5,0.92000002},
							1
						};
					};
				};
			};
			class MFD_Commander_Smoke_Indicator
			{
				topLeft="mfd_com_smoke_TL";
				topRight="mfd_com_smoke_TR";
				bottomLeft="mfd_com_smoke_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="ДЫМОВАЯ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.47,0},
							1
						};
						right[]=
						{
							{0.67000002,0},
							1
						};
						down[]=
						{
							{0.47,0.5},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="ЗАВЕСА";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.40000001},
							1
						};
						right[]=
						{
							{0.69999999,0.40000001},
							1
						};
						down[]=
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Commander_HMG
			{
				topLeft="MFD_7_TL";
				topRight="MFD_7_TR";
				bottomLeft="MFD_7_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospacePro";
				turret[]={0,0};
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82999998,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.82999998,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
							1
						};
					};
				};
			};
			class MFD_Commander_Main_Armament_Ammo_Type
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.36000001,0.58999997},
							1
						};
						right[]=
						{
							{0.44999999,0.58999997},
							1
						};
						down[]=
						{
							{0.36000001,0.77999997},
							1
						};
					};
				};
			};
			class MFD_Commander_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.13},
							1
						};
						right[]=
						{
							{0.075000003,0.13},
							1
						};
						down[]=
						{
							{0.015,0.28},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.13},
							1
						};
						right[]=
						{
							{0.23,0.13},
							1
						};
						down[]=
						{
							{0.17,0.28},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.23},
							1
						};
						right[]=
						{
							{0.075000003,0.23},
							1
						};
						down[]=
						{
							{0.015,0.38},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.23},
							1
						};
						right[]=
						{
							{0.23,0.23},
							1
						};
						down[]=
						{
							{0.17,0.38},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="К";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.33000001},
							1
						};
						right[]=
						{
							{0.075000003,0.33000001},
							1
						};
						down[]=
						{
							{0.015,0.47999999},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="static";
						text="--";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.33000001},
							1
						};
						right[]=
						{
							{0.23,0.33000001},
							1
						};
						down[]=
						{
							{0.17,0.47999999},
							1
						};
					};
				};
			};
			class MFD_Commander_Coax_Ammo
			{
				topLeft="mfd_com_ammo_count_TL";
				topRight="mfd_com_ammo_count_TR";
				bottomLeft="mfd_com_ammo_count_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{1.395,0.2},
							1
						};
						right[]=
						{
							{2.0450001,0.2},
							1
						};
						down[]=
						{
							{1.395,1},
							1
						};
					};
				};
			};
			class MFD_Commander_Coax_Magazines
			{
				topLeft="mfd_com_mag_count_TL";
				topRight="mfd_com_mag_count_TR";
				bottomLeft="mfd_com_mag_count_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{-1.15,0.11},
							1
						};
						right[]=
						{
							{-0.40000001,0.11},
							1
						};
						down[]=
						{
							{-1.15,0.81},
							1
						};
					};
				};
			};
			class MFD_Commander_Comm_Ammo_and_Mags
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=0;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.92000002,0.19},
							1
						};
						right[]=
						{
							{0.98000002,0.19},
							1
						};
						down[]=
						{
							{0.92000002,0.34},
							1
						};
					};
				};
			};
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=2302;
				dampingRateInAir=2302;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName="wheel_podkolol7";
				center="wheel_1_8_axis";
				boundary="wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName="wheel_podkolop7";
				center="wheel_2_8_axis";
				boundary="wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet"
		};
		explosionEffect="FuelCapacitorExplosion";
		damageTexDelay=0;
		secondaryExplosion=-1;
		transportAmmo=0;
		transportFuel=0;
		transportRepair=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_Decade\MBT_02\Data\MBT_02_railgun.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",
				"A3\Armor_F_Decade\MBT_02\Data\MBT_02_railgun_body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				"A3\Armor_F_Decade\MBT_02\Data\MBT_02_railgun_turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",
				"A3\Data_F\Vehicles\Turret.rvmat",
				"A3\Data_F\Vehicles\Turret_damage.rvmat",
				"A3\Data_F\Vehicles\Turret_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_MBT_02_Railgun_commander";
						magazines[]=
						{
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_railgun_fake",
					"cannon_railgun"
				};
				magazines[]=
				{
					"60Rnd_75mm_RailGun_APFSDS_mag",
					"RailGun_01_DummyMagazine"
				};
				turretInfoType="RscOptics_MBT_02_Railgun_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000,5100,5200,5300,5400,5500,5600,5700,5800,5900,6000,6100,6200,6300,6400,6500,6600,6700,6800,6900,7000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-5;
				maxElev=20;
				initElev=10;
				maxHorizontalRotSpeed=0.64999998;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
						class DestructionEffects
						{
							ammoExplosionEffect="";
							effectRadius=1;
							ignoreFuel=1;
							class Smoke1
							{
								simulation="particles";
								position="fx_barrel_exhaust_1_pos";
								type="Railgun_DestructSmokeEffect";
								lifeTime=0.1;
								interval=1;
								intensity=1;
							};
							class Smoke2: Smoke1
							{
								position="fx_barrel_exhaust_2_pos";
							};
							class Smoke3: Smoke1
							{
								position="fx_battery_exhaust_l_pos";
								lifeTime=0.5;
							};
							class Smoke4: Smoke3
							{
								position="fx_battery_exhaust_r_pos";
							};
							class Sparks1
							{
								simulation="particles";
								position="fx_barrel_exhaust_1_pos";
								type="Railgun_DestructSparksEffect";
								lifeTime=0.050000001;
								interval=1;
								intensity=1;
							};
							class Sparks2: Sparks1
							{
								position="fx_barrel_exhaust_2_pos";
							};
							class Sparks3: Sparks1
							{
								position="fx_battery_exhaust_l_pos";
							};
							class Sparks4: Sparks1
							{
								position="fx_battery_exhaust_r_pos";
							};
							class Sound1: Smoke1
							{
								simulation="sound";
								type="SparklesWreck2";
								lifeTime=1;
							};
							class Sound2: Sound1
							{
								type="ERA_Explosion";
							};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="cannon_railgun";
			};
			class muzzle_hide_cannon2
			{
				source="reload";
				weapon="cannon_railgun_fake";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_railgun";
			};
		};
		class Sounds
		{
			soundSetsExt[]=
			{
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet",
				"MBT_02_Engine_RPM0_EXT_SoundSet",
				"MBT_02_Engine_RPM1_EXT_SoundSet",
				"MBT_02_Engine_RPM2_EXT_SoundSet",
				"MBT_02_Engine_RPM3_EXT_SoundSet",
				"MBT_02_Tracks_01_EXT_SoundSet",
				"MBT_02_Tracks_02_EXT_SoundSet",
				"MBT_02_Tracks_03_EXT_SoundSet",
				"MBT_02_Tracks_04_EXT_SoundSet",
				"MBT_02_Tracks_05_EXT_SoundSet",
				"MBT_02_Tracks_06_EXT_SoundSet",
				"MBT_02_Rain_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_02_Drive_Water_EXT_SoundSet",
				"MBT_02_Drive_Dirt_EXT_SoundSet",
				"",
				"MBT_02_Turbine01_Ext_Front_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Noisy_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet",
				"MBT_02_Servo01_Ext_SoundSet",
				"MBT_02_Servo02_Ext_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader"
			};
			soundSetsInt[]=
			{
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet",
				"MBT_02_Engine_RPM0_INT_SoundSet",
				"MBT_02_Engine_RPM1_INT_SoundSet",
				"MBT_02_Engine_RPM2_INT_SoundSet",
				"MBT_02_Engine_RPM3_INT_SoundSet",
				"MBT_02_Tracks_01_INT_SoundSet",
				"MBT_02_Tracks_02_INT_SoundSet",
				"MBT_02_Tracks_03_INT_SoundSet",
				"MBT_02_Tracks_04_INT_SoundSet",
				"MBT_02_Tracks_05_INT_SoundSet",
				"MBT_02_Tracks_06_INT_SoundSet",
				"MBT_02_Interior_Tone_Engine_Off_SoundSet",
				"MBT_02_Interior_Tone_Engine_On_SoundSet",
				"MBT_02_Rattling_INT_SoundSet",
				"MBT_02_Rain_INT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_02_Drive_Water_INT_SoundSet",
				"MBT_02_Drive_Dirt_INT_SoundSet",
				"",
				"MBT_02_Turbine01_Int_Tonal_SoundSet",
				"MBT_02_Turbine01_Int_Noisy_SoundSet",
				"MBT_02_Servo01_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
		};
		class HitPoints: HitPoints
		{
			class HitERA_Top_Left_1: HitERA_Front
			{
				name="era_L_T_1_point";
				armorComponent="era_L_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Left_2: HitERA_Front
			{
				name="era_L_T_2_point";
				armorComponent="era_L_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_1: HitERA_Front
			{
				name="era_R_T_1_point";
				armorComponent="era_R_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_2: HitERA_Front
			{
				name="era_R_T_2_point";
				armorComponent="era_R_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
		};
	};
	class O_MBT_02_railgun_base_F: MBT_02_railgun_base_F
	{
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F",
			"O_Soldier_F"
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa",
					"a3\Armor_F_Decade\MBT_02\Data\MBT_02_turret_expo_CO.paa",
					"a3\Armor_F_Decade\MBT_02\Data\MBT_02_expo_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F",
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
	};
	class O_MBT_02_railgun_F: O_MBT_02_railgun_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\O_MBT_02_railgun_F.jpg";
		_generalMacro="O_MBT_02_railgun_F";
		scope=2;
		scopeCurator=2;
	};
	class O_T_MBT_02_railgun_ghex_F: O_MBT_02_railgun_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\O_T_MBT_02_railgun_ghex_F.jpg";
		_generalMacro="O_T_MBT_02_railgun_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Expansion";
		faction="OPF_T_F";
		crew="O_T_crew_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F",
			"O_T_Soldier_F",
			"O_T_Soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
			"a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",
			"a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
		};
	};
};
