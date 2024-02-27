_getIndex = lbCurSel 42001;
_getSel = lbData [42001, _getIndex]; 

diag_log "Wallace Loadout Scripts! Debug EF01951";

if(_getSel isEqualTo "BDA_Rifleman") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_MA5B";
	player addPrimaryWeaponItem "OPTRE_MA5_SmartLink";
	player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_RF";
	player addBackpack "BDA_Rucksack_B";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_IR_Strobe_Item";
	for "_i" from 1 to 2 do {player addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 9 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";

	comment "Set identity";
	[player,"WhiteHead_20","ace_novoice"] call BIS_fnc_setIdentity;
};
if(_getSel isEqualTo "BDA_AutoRifleman") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_M73";
	player addPrimaryWeaponItem "OPTRE_M73_SmartLink";
	player addPrimaryWeaponItem "OPTRE_200Rnd_95x40_Box";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_RF";
	player addBackpack "BDA_Rucksack_B";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_IR_Strobe_Item";
	for "_i" from 1 to 2 do {player addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 6 do {player addItemToBackpack "OPTRE_200Rnd_95x40_Box";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";

};
if(_getSel isEqualTo "BDA_Sniper") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_SRS99D";
	player addPrimaryWeaponItem "OPTRE_SRS99_Scope";
	player addPrimaryWeaponItem "OPTRE_4Rnd_145x114_APFSDS_Mag";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_SN";
	player addBackpack "BDA_Rucksack_B";

	comment "Add binoculars";
	player addMagazine "Laserbatteries";
	player addWeapon "OPTRE_Smartfinder";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	for "_i" from 1 to 2 do {player addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ACE_Tripod";
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 12 do {player addItemToBackpack "OPTRE_4Rnd_145x114_APFSDS_Mag";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG_MVI_UL";
};
if(_getSel isEqualTo "BDA_EOD") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_MA5B";
	player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_DM";
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "OPTRE_12Rnd_127x40_Mag";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_IR_Strobe_Item";
	for "_i" from 1 to 3 do {player addItemToVest "ACE_CableTie";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToVest "OPTRE_12Rnd_127x40_Mag";
	player addItemToBackpack "MineDetector";
	player addItemToBackpack "ItemcTabHCam";
	player addItemToBackpack "ACE_M26_Clacker";
	player addItemToBackpack "ACE_DefusalKit";
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_blue";};
	for "_i" from 1 to 20 do {player addItemToBackpack "ace_marker_flags_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_white";};
	for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};
	for "_i" from 1 to 3 do {player addItemToBackpack "APERSMineDispenser_Mag";};
	for "_i" from 1 to 2 do {player addItemToBackpack "ATMine_Range_Mag";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";

};
if(_getSel isEqualTo "BDA_Demolitions") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_MA5B";
	player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_DM";
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "OPTRE_12Rnd_127x40_Mag";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_IR_Strobe_Item";
	for "_i" from 1 to 3 do {player addItemToVest "ACE_CableTie";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToVest "OPTRE_12Rnd_127x40_Mag";
	player addItemToBackpack "MineDetector";
	player addItemToBackpack "ItemcTabHCam";
	player addItemToBackpack "ACE_M26_Clacker";
	player addItemToBackpack "ACE_DefusalKit";
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_white";};
	for "_i" from 1 to 20 do {player addItemToBackpack "ace_marker_flags_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_blue";};
	for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};
	for "_i" from 1 to 4 do {player addItemToBackpack "C7_Remote_Mag";};
	for "_i" from 1 to 2 do {player addItemToBackpack "C12_Remote_Mag";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152_1";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";

};
if(_getSel isEqualTo "BDA_Grenadier") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_MA5BGL";
	player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag";
	player addPrimaryWeaponItem "1Rnd_HE_Grenade_shell";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_RF";
	player addBackpack "BDA_Rucksack_B";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_IR_Strobe_Item";
	for "_i" from 1 to 2 do {player addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_HuntIR_monitor";
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};
	for "_i" from 1 to 25 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_HuntIR_M203";};
	for "_i" from 1 to 6 do {player addItemToBackpack "OPTRE_1Rnd_Smoke_Grenade_shell";};
	for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeBlue_Grenade_shell";};
	for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeRed_Grenade_shell";};
	for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_1Rnd_SmokePurple_Grenade_shell";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_white";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_green";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";
};
if(_getSel isEqualTo "BDA_RktJky") then 
{
	comment "Remove existing items";
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	comment "Add weapons";
	player addWeapon "OPTRE_MA5B";
	player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag";
	player addWeapon "OPTRE_M41_SSR";
	player addSecondaryWeaponItem "OPTRE_M41_Twin_AI";
	player addWeapon "OPTRE_M6C";
	player addHandgunItem "OPTRE_M6C_compensator";
	player addHandgunItem "OPTRE_M6C_Laser";
	player addHandgunItem "OPTRE_M6C_Scope";
	player addHandgunItem "OPTRE_12Rnd_127x40_Mag";

	comment "Add containers";
	player forceAddUniform "BDA_Uniform_B_SL";
	player addVest "BDA_Armor_RF";
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add binoculars";
	player addWeapon "OPTRE_Binoculars";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	for "_i" from 1 to 2 do {player addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};
	player addItemToBackpack "OPTRE_M41_Twin_HEAT";
	for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_M41_Twin_HEAT_G";};
	player addHeadgear "BDA_CH252D_Helmet";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "TFAR_anprc152";
	player linkItem "ItemGPS";
	player linkItem "OPTRE_NVG";
};