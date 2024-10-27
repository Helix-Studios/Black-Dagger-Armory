class CfgPatches {
    class BDA_Props 
    {
        name="Project Archeron - Props";
		author="Project Archeron Team";
		requiredVersion=0.1;
		requiredAddons[]={"BDA_Core","B_BDCUNSC","OPTRE_Misc_Crates"};
		units[]={};
		weapons[]={};
        vehicles[]={"BDA_Ammo_SupplyPod","BDA_Medical_SupplyPod","PA_Can_B"};
    };
};

class CfgVehicles {
    class Thing;
    class OPTRE_Ammo_SupplyPod_Empty;
    class OPTRE_Ammo_SupplyPod_Medical;

    class PA_Can_B: Thing {
        displayName = "Can [Bepis]";
        scope = 2;
        model = "BDA_Ext\BDA_Props\can1.p3d";
        faction = "B_BDCUNSC";
        editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        armor = 20;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionstextures[] = {"BDA_Ext\BDA_Props\data\can_co.paa"};
        class DestructionEffects {};
    };

    class BDA_Ammo_SupplyPod: OPTRE_Ammo_SupplyPod_Empty {
        dlc = "BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        displayName = "[BDA] Supply Pod (Ammo)";
        vehicleClass = "BDA_UNSC_Ammo_Class";
        transportMaxWeapons = 100;
		transportMaxMagazines = 1000;
		maximumLoad = 20000;
		supplyRadius = 2.000000;
		armor = 15000;
        class TransportMagazines {
            //mags
            class xx_TCF_48Rnd_5x23mm_Mag_JHPT {
                name = "TCF_48Rnd_5x23mm_Mag_JHPT";
                count = 30;
            };
            class xx_TCF_48Rnd_5x23mm_Mag_HVT {
                name = "TCF_48Rnd_5x23mm_Mag_HVT";
                count = 30;
            };
            class xx_TCF_60Rnd_5x23mm_Mag_JHPT {
                name = "TCF_60Rnd_5x23mm_Mag_JHPT";
                count = 20;
            };
            class xx_TCF_60Rnd_5x23mm_Mag_HVT {
                name = "TCF_60Rnd_5x23mm_Mag_HVT";
                count = 20;
            };
            class xx_TCF_200Rnd_95x40_Box_JHPT {
                name = "TCF_200Rnd_95x40_Box_JHPT";
                count = 20;
            };
            class xx_OPTRE_200Rnd_95x40_Box_Tracer_Yellow {
                name = "OPTRE_200Rnd_95x40_Box_Tracer_Yellow";
                count = 20;
            };
            class xx_TCF_100Rnd_95x40_Box_JHPT {
                name = "TCF_100Rnd_95x40_Box_JHPT";
                count = 20;
            };
            class xx_TCF_100Rnd_95x40_Box_JHPT {
                name = "TCF_100Rnd_95x40_Box_JHPT";
                count = 20;
            };
            class xx_OPTRE_100Rnd_95x40_Box_Tracer_Yellow {
                name = "OPTRE_100Rnd_95x40_Box_Tracer_Yellow";
                count = 20;
            };
            class xx_TCF_60Rnd_762x51_Mag_JHPT {
                name = "OPTRE_12Rnd_127x40_Mag";
                count = 60;
            };
            class xx_TCF_60Rnd_762x51_Mag_JHPT {
                name = "OPTRE_12Rnd_127x40_Mag";
                count = 60;
            };
            class xx_OPTRE_12Rnd_8Gauge_Pellets {
                name = "OPTRE_12Rnd_127x40_Mag";
                count = 30;
            };
            class xx_OPTRE_12Rnd_127x40_Mag {
                name = "OPTRE_12Rnd_127x40_Mag";
                count = 20;
            };
            class xx_OPTRE_12Rnd_127x40_Mag {
                name = "OPTRE_12Rnd_127x40_Mag";
                count = 20;
            };
            class xx_OPTRE_100Rnd_762x51_Box_Tracer {
                name = "TCF_400Rnd_762x51_Box_APT";
                count = 40;
            };
            class xx_OPTRE_15Rnd_762x51_Mag_Tracer {
                name = "TCF_400Rnd_762x51_Box_APT";
                count = 60;
            };
            class xx_OPTRE_60Rnd_762x51_Mag_Tracer {
                name = "TCF_400Rnd_762x51_Box_APT";
                count = 60;
            };
            class xx_TCF_400Rnd_762x51_Box_APT {
                name = "TCF_400Rnd_762x51_Box_APT";
                count = 10;
            };
            class xx_36Rnd_95x40_ap_br_55_tracer {
                name = "36Rnd_95x40_ap_br_55_tracer";
                count = 60;
            };
            class xx_TCF_15Rnd_762x51_Mag_JHPT {
                name = "TCF_15Rnd_762x51_Mag_JHPT";
                count = 60;
            };
            class xx_TCF_36Rnd_95x40_Mag_JHPT {
                name = "TCF_36Rnd_95x40_Mag_JHPT";
                count = 60;
            };
            class xx_OPTRE_12Rnd_8Gauge_Slugs {
                name = "OPTRE_12Rnd_8Gauge_Slugs";
                count = 30;
            };
            class xx_OPTRE_4Rnd_145x114_APFSDS_Mag {
                name = "OPTRE_4Rnd_145x114_APFSDS_Mag";
                count = 40;
            };
            class xx_OPTRE_4Rnd_145x114_HVAP_Mag {
                name = "OPTRE_4Rnd_145x114_HVAP_Mag";
                count = 20;
            };
            class xx_OPTRE_4Rnd_145x114_APFSDS_Mag_D {
                name = "OPTRE_4Rnd_145x114_APFSDS_Mag_D";
                count = 40;
            };
            class xx_OPTRE_4Rnd_145x114_HVAP_Mag_D {
                name = "OPTRE_4Rnd_145x114_HVAP_Mag_D";
                count = 20;
            };

            //explosives
            class xx_OPTRE_M41_Twin_HEAT_G {
                name = "OPTRE_M41_Twin_HEAT_G";
                count = 10;
            };
            class xx_OPTRE_M41_Twin_HEAT_SACLOS {
                name = "OPTRE_M41_Twin_HEAT_SACLOS";
                count = 8;
            };
            class xx_OPTRE_SpLaser_Battery_Launcher {
                name = "OPTRE_SpLaser_Battery_Launcher";
                count = 6;
            };
            class xx_C12_Remote_Mag {
                name = "C12_Remote_Mag";
                count = 3;
            };
            class xx_C7_Remote_Mag {
                name = "C7_Remote_Mag";
                count = 6;
            };
            class xx_ATMine_Range_Mag {
                name = "ATMine_Range_Mag";
                count = 10;
            };

            //nades
            class xx_OPTRE_M9_Frag {
                name = "OPTRE_M9_Frag";
                count = 20;
            };
            class xx_OPTRE_M2_Smoke {
                name = "OPTRE_M2_Smoke";
                count = 25;
            };
            class xx_OPTRE_M2_Smoke_Blue {
                name = "OPTRE_M2_Smoke_Blue";
                count = 20;
            };
            class xx_OPTRE_M2_Smoke_Red {
                name = "OPTRE_M2_Smoke_Red";
                count = 20;
            };
            class xx_1Rnd_HE_Grenade_shell {
                name = "1Rnd_HE_Grenade_shell";
                count = 40;
            };
            class xx_3Rnd_HE_Grenade_shell {
                name = "3Rnd_HE_Grenade_shell";
                count = 30;
            };
            class xx_OPTRE_1Rnd_Smoke_Grenade_shell {
                name = "OPTRE_1Rnd_Smoke_Grenade_shell";
                count = 20;
            };
            class xx_OPTRE_1Rnd_SmokeRed_Grenade_shell {
                name = "OPTRE_1Rnd_SmokeRed_Grenade_shell";
                count = 20;
            };
            class xx_OPTRE_1Rnd_SmokeBlue_Grenade_shell {
                name = "OPTRE_1Rnd_SmokeBlue_Grenade_shell";
                count = 20;
            };
            class xx_ACE_HuntIR_M203 {
                name = "ACE_HuntIR_M203";
                count = 20;
            };
            class xx_ACE_40mm_Flare_white {
                name = "ACE_40mm_Flare_white";
                count = 20;
            };
            class xx_OPTRE_3Rnd_Smoke_Grenade_shell {
                name = "OPTRE_3Rnd_Smoke_Grenade_shell";
                count = 10;
            };
            class xx_OPTRE_3Rnd_SmokeRed_Grenade_shell {
                name = "OPTRE_3Rnd_SmokeRed_Grenade_shell";
                count = 10;
            };
            class xx_OPTRE_3Rnd_SmokeBlue_Grenade_shell {
                name = "OPTRE_3Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
            class xx_ACE_40mm_Flare_green {
                name = "ACE_40mm_Flare_green";
                count = 10;
            };
            class xx_ACE_40mm_Flare_red {
                name = "ACE_40mm_Flare_red";
                count = 10;
            };
            class xx_3Rnd_Smoke_Grenade_shell {
                name = "3Rnd_Smoke_Grenade_shell";
                count = 10;
            };
            class xx_3Rnd_SmokeBlue_Grenade_shell {
                name = "3Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
            class xx_UGL_FlareYellow_F {
                name = "UGL_FlareYellow_F";
                count = 10;
            };
            class xx_UGL_FlareRed_F {
                name = "UGL_FlareRed_F";
                count = 10;
            };
            class xx_UGL_FlareGreen_F {
                name = "UGL_FlareGreen_F";
                count = 20;
            };
            class xx_SmokeShellPurple {
                name = "SmokeShellPurple";
                count = 20;
            };
            class xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 20;
            };
            class xx_1Rnd_Smoke_Grenade_shell {
                name = "1Rnd_Smoke_Grenade_shell";
                count = 10;
            };
            class xx_1Rnd_SmokeBlue_Grenade_shell {
                name = "1Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
		};
        class TransportWeapons {
            class xx_OPTRE_M7 {
                name = "OPTRE_M7";
                count = 2;
            };
            class xx_TCF_M73H {
                name = "TCF_M73H";
                count = 1;
            };
            class xx_DMNS_M96_LAW {
                name = "DMNS_M96_LAW";
                count = 4;
            };
            class xx_BDA_RifleBaseAR {
                name = "BDA_RifleBaseAR";
                count = 4;
            };
		};
		class TransportItems {
            class xx_ACE_M26_Clacker {
                name = "ACE_M26_Clacker";
                count = 4;
            };
		};
    };

    class BDA_Medical_SupplyPod: OPTRE_Ammo_SupplyPod_Medical {
        dlc = "BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        displayName = "[BDA] Supply Pod (Medical)";
		maximumLoad = 10000;
		class TransportMagazines {
		};
		class TransportWeapons {
		};
		class TransportItems {
			class xx_ACE_fieldDressing {
                name = "ACE_fieldDressing";
                count = 50;
            };
            class xx_ACE_ElasticBandage {
                name = "ACE_elasticBandage";
                count = 200;
            };
            class xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 200;
            };
            class xx_ACE_quikclot {
                name = "ACE_Quikclot";
                count = 50;
            };
            class xx_ACE_Epinephrine {
                name = "ACE_Epinephrine";
                count = 12;
            };
            class xx_ACE_Morphine {
                name = "ACE_Morphine";
                count = 12;
            };
            class xx_ACE_Painkillers {
                name = "ACE_Painkiller";
                count = 5;
            };
            class xx_ACE_SalineIV {
                name = "ACE_SalineIV";
                count = 20;
            };
            class xx_ACE_SalineIV_500 {
                name = "ACE_SalineIV_500";
                count = 25;
            };
            class xx_ACE_SalineIV_250 {
                name = "ACE_SalineIV_250";
                count = 25;
            };
            class xx_ACE_Splint {
                name = "ACE_Splint";
                count = 20;
            };
            class xx_ACE_Tourniquet {
                name = "ACE_tourniquet";
                count = 15;
            };
            class xx_ACE_SurgicalKit {
                name = "ACE_surgicalKit";
                count = 1;
            };
		};
    };
//end
};

class cfgMods {
	author="Rib";
	timepacked="271020241430";
};