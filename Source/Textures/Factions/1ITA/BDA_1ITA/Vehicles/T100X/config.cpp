class CfgPatches {
	class BDA_1ITA_T100X {
		requiredAddons[]= {
			"A3_Armor_F_Decade",
            "A3_Armor_F_Decade_MBT_02",
            "BDA_1ITA"
		};
		requiredVersion=0.1;
		units[]= {
			"O_MBT_02_railgun_F",
			"O_T_MBT_02_railgun_ghex_F"
		};
		weapons[]={};
	};
};

class CfgVehicles {
    class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class HitPoints;
	};
	class MBT_02_base_F: Tank_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
		class AnimationSources;
		class RenderTargets {
			class commander_display {
				class CameraView1;
			};
			class driver_display {
				class CameraView1;
			};
		};
		class MFD;
		class HitPoints: HitPoints {
			class HitERA_Front {
				class DestructionEffects {
					class Explo;
				};
			};
		};
		class DestructionEffects;
		class Wheels {
			class L2;
		};
	};
    class O_MBT_02_railgun_F; 

    class BDA_1ITA_T1000X: O_MBT_02_railgun_F {
        scope = 2;
        scopeAuthor = 2;
        author = "Rib";
        displayName = "T1000X Cosmos MBT";
        faction = "";
        crew = "";
        typicalCargo[] = {
		};
        hiddenSelectionsTextures[] = {
			"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
    };
};