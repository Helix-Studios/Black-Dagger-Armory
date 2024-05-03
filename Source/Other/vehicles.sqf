call{ 
this addAction ["Deploy M12 APC", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M12_FAV_APC", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];  
this addAction ["Deploy M12 APC Medical", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M12_FAV_APC_MED", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];  
this addAction ["Deploy M813 Troop Transport", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M813_TT", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}]; 
this addAction ["Deploy M914 Repair Hog", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M914_RV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);  
}]; 
this addAction ["Deploy M12G1S Shottie Hog", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPAEX_M12G1S_LRV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);  
}]; 
this addAction ["Deploy M12 LRV MG", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M12_LRV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];   
this addAction ["Deploy M12A1 Rocket", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_M12A1_LRV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];   
this addAction ["Deploy M1808-BM Scorpion", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["DMNS_M808B_F", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];   
this addAction ["Deploy M511 Springbok IFV", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["DMNS_M511_Springbok_IFV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];   
this addAction ["Deploy M1087 Stallion Transport", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_m1087_stallion_unsc", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M1087 Stallion Ammo", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_m1087_stallion_unsc_resupply", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M1087 Stallion Fuel", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_m1087_stallion_unsc_fuel", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M1087 Stallion Repair", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["OPTRE_m1087_stallion_unsc_repair", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M9240 Bulldog FAV", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["DMNS_Bulldog_FAV", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M9241 Bulldog MG", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["DMNS_Bulldog_LRV_MG", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];
this addAction ["Deploy M9242 Bulldog AGL", {          
_pos = [(getPosATL MAGV_SPWNP) # 0, (getPosATL MAGV_SPWNP) # 1, (getPosATL MAGV_SPWNP) #2 + 0.5];          
_vehicle = createVehicle ["DMNS_Bulldog_LRV_AGL", _pos,[],0,"NONE"];          
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators;          
_vehicle setDir (getDir MAGV_SPWNP);          
}];

};
