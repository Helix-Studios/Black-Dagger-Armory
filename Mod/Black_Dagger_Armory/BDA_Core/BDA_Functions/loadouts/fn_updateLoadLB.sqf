_getIndex = lbCurSel 42001;
_getSel = lbData [42001, _getIndex];

if(_getSel isEqualTo "BDA_Rifleman") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\rifle.paa"];
};
if(_getSel isEqualTo "BDA_AutoRifleman") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\auto.paa"];
};
if(_getSel isEqualTo "BDA_Sniper") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\sniper.paa"];
};
if(_getSel isEqualTo "BDA_EOD") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"];
};
if(_getSel isEqualTo "BDA_Demolitions") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"];
};
if(_getSel isEqualTo "BDA_Grenadier") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\gren.paa"];
};
if(_getSel isEqualTo "BDA_RktJky") then 
{
	ctrlSetText [42002, "BDA_Core\BDA_Functions\loadouts\data\RkyJky.paa"];
};
