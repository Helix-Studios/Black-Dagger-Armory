call{this addAction ["Deploy AV-14 Hornet", {          
_pos = [(getPosATL SGV_SPWNP_1) # 0, (getPosATL SGV_SPWNP_1) # 1, (getPosATL SGV_SPWNP_1) #2 + 0.5];          
_vehicle = createVehicle ["VES_AV14_AGM", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir SGV_SPWNP_1);          
}];   
this addAction ["Deploy AV-22C Sparrowhawk", {          
_pos = [(getPosATL SGV_SPWNP_1) # 0, (getPosATL SGV_SPWNP_1) # 1, (getPosATL SGV_SPWNP_1) #2 + 0.5];          
_vehicle = createVehicle ["VES_AV22C_Sparrowhawk", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir SGV_SPWNP_1);        
}];    
this addAction ["Deploy MH-144S Falcon", {          
_pos = [(getPosATL SGV_SPWNP_1) # 0, (getPosATL SGV_SPWNP_1) # 1, (getPosATL SGV_SPWNP_1) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_UNSC_MH_144S_Falcon", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir SGV_SPWNP_1);        
}];    
this addAction ["Deploy D77-TC Pelican", {          
_pos = [(getPosATL MGV_SPWNP_1) # 0, (getPosATL MGV_SPWNP_1) # 1, (getPosATL MGV_SPWNP_1) #2 + 0.5];          
_vehicle = createVehicle ["BDA_UNSC_D77_TC_Pelican", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MGV_SPWNP_1);        
}]; 
this addAction ["Deploy YSS-1000A (SABRE)", {          
_pos = [(getPosATL MGV_SPWNP_1) # 0, (getPosATL MGV_SPWNP_1) # 1, (getPosATL MGV_SPWNP_1) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_YSS_1000_A_VTOL", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;         
_vehicle setDir (getDir MGV_SPWNP_1);        
}];   
this addAction ["Deploy JT-RM2 Longsword", {          
_pos = [(getPosATL MGV_SPWNP_1) # 0, (getPosATL MGV_SPWNP_1) # 1, (getPosATL MGV_SPWNP_1) #2 + 2];          
_vehicle = createVehicle ["DMNS_JT_RM2_Longsword_dynamicLoadout_F", _pos,[],0,"NONE"]; 
}];}
