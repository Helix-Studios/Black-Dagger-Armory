#include "\BDA_Core\BDA_Functions\define.hpp"

params [
    ["_vehicle",(objectParent ace_player),[ace_player]],
    ["_camotype","",["aString"]]
];

_config = configFile >> "CfgVehicles" >> (typeof _vehicle);
_camoTypeList = getArray (_config >> "textureList");

//no textures available
if(!(count _camoTypeList > 0)) exitWith {
    systemChat format ["%1 There wasn't any texture sources for %2,time,_vehicle"]
};

//no selected camo
if(_camoType isEqualTo "") then {
    _camoType = _camoTypeList select 0;
};

//camo type checking
if(!(_camoType in _camoTypeList)) exitWith {
    systemChat format ["%1, %2 not in %3,time,_camoType,_camoTypeList"]
};

_camos = getArray (_config >> "textureSources" >> _camoType >> "camos");
{
    _vehicle setObjectTextureGlobal[_forEachIndex,_x];
} forEach _camos;