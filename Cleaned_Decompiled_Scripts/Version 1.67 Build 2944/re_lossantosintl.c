//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
float fLocal_12=0f;
var uLocal_13=0;
var uLocal_14=0;
int iLocal_15=0;
var uLocal_16=0;
var uLocal_17=0;
char* sLocal_18=NULL;
float fLocal_19=0f;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
int iLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47[4]={
0, 0, 0, 0 
};
var uLocal_48=0;
var uLocal_49[4]={
0, 0, 0, 0 
};
var uLocal_50=0;
struct<3> Local_51[4];
struct<3> Local_52={
0, 0, 0 
};
int iLocal_53=0;
bool bLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
bool bLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
float fLocal_61=0f;
float fLocal_62=0f;
int iLocal_63=0;
int iLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
bool bLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
#endregion

void __EntryFunction__(){
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
iLocal_26=3;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
bLocal_54=true;
iLocal_60=joaat("s_m_m_pilot_01");
iLocal_75=500;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_12();
}
uLocal_73=PLAYER::PLAYER_PED_ID();
while (true){
if(ENTITY::IS_ENTITY_DEAD(uLocal_73, 0)){
iLocal_74=5;
}
switch (iLocal_74){
case 0:
iLocal_74=1;
break;
case 1:
func_11();
iLocal_74=2;
break;
case 2:
if(func_10()){
iLocal_74=3;
}
break;
case 3:
func_9();
iLocal_74=4;
break;
case 4:
if(Global_97741){
iLocal_74=5;
}
func_4();
break;
case 5:
func_1();
func_12();
break;
}
wait(iLocal_75);
}}


void func_1(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[iVar0])){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(uLocal_47[iVar0], 0) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_47[iVar0]))){
VEHICLE::DELETE_VEHICLE(&(uLocal_47[iVar0]));
PED::DELETE_PED(&(uLocal_49[iVar0]));
}else{
if(iVar0==0 || iVar0==2){
func_3(1);
}
func_2(&(uLocal_47[iVar0]), &(uLocal_49[iVar0]));
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_47[iVar0]));
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_49[iVar0]));
}}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_48)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_48)){
VEHICLE::DELETE_VEHICLE(&uLocal_48);
PED::DELETE_PED(&uLocal_50);
}else{
func_2(&uLocal_48, &uLocal_50);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_48);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_50);
}}
if(bLocal_58){
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
}}


void func_2(var uParam0, var uParam1){
if(((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
if(ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
}}}}}


void func_3(bool bParam0){
if(bLocal_54){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], 0)){
if(ENTITY::IS_ENTITY_IN_AIR(uLocal_47[0])){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[0])){
if((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], 0)){
TASK::TASK_PLANE_MISSION(uLocal_49[0], uLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
}}elseif(bParam0){
if((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], 0)){
TASK::TASK_PLANE_MISSION(uLocal_49[0], uLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
}}}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], 0)){
if(ENTITY::IS_ENTITY_IN_AIR(uLocal_47[2])){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2])){
if((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], 0)){
TASK::TASK_PLANE_MISSION(uLocal_49[2], uLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
}}elseif(bParam0){
if((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], 0)){
TASK::TASK_PLANE_MISSION(uLocal_49[2], uLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
}}}}}}


void func_4(){
int iVar0;
switch (iLocal_64){
case 0:
Local_51[0 /*3*/]={
-1542.113f, -3023.802f, 23.2538f 
};
Local_51[1 /*3*/]={
-3089.888f, -1960.075f, 313.559f 
};
Local_51[2 /*3*/]={
-1037.638f, -3316.12f, 23.2475f 
};
Local_51[3 /*3*/]={
451.174f, -4009.46f, 135.1171f 
};
Local_52={
-1612.174f, -2688.442f, 12.9444f 
};
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_54=false;
}else{
bLocal_54=true;
}}
iLocal_64=1;
break;
case 1:
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(iLocal_60);
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
iLocal_64=2;
break;
case 2:
if(!bLocal_58){
if((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_60)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight")){
bLocal_58=true;
}else{
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(iLocal_60);
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
}}
if(bLocal_58){
if(!CAM::IS_SPHERE_VISIBLE(Local_51[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_52, 50f)){
iLocal_64=3;
}else{
if(CAM::IS_SPHERE_VISIBLE(Local_51[0 /*3*/], 50f)){
}
if(CAM::IS_SPHERE_VISIBLE(Local_52, 50f)){
}}}
break;
case 3:
uLocal_47[0]=VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_51[0 /*3*/], 0, 1, 1, 0);
ENTITY::SET_ENTITY_HEADING(uLocal_47[0], 240.3179f);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[0], 0);
uLocal_47[1]=VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_51[1 /*3*/], 0, 1, 1, 0);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[1], 0);
uLocal_47[2]=VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_51[2 /*3*/], 0, 1, 1, 0);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[2], 0);
uLocal_47[3]=VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_51[3 /*3*/], 0, 1, 1, 0);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_47[3], 0);
iVar0=0;
while (iVar0 < 4){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[iVar0])){
uLocal_49[iVar0]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_47[iVar0], 4, iLocal_60, -1, 1, 1);
ENTITY::SET_ENTITY_LOD_DIST(uLocal_47[iVar0], 1000);
VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_47[iVar0], 1, 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_49[iVar0], 1);
}
iVar0++;
}
func_8(&(uLocal_47[1]), &(uLocal_49[1]));
func_8(&(uLocal_47[2]), &(uLocal_49[2]));
func_8(&(uLocal_47[3]), &(uLocal_49[3]));
if(bLocal_54){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[0])){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
iLocal_53=1;
}else{
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
}}}
iLocal_64=4;
break;
case 4:
if(iLocal_57){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], 0)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[3])){
if(!iLocal_55){
func_8(&(uLocal_47[3]), &(uLocal_49[3]));
iLocal_55=1;
}}}}
func_3(0);
func_7();
switch (iLocal_63){
case 0:
if(!iLocal_53){
if(bLocal_54){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], 0)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[0]) && !CAM::IS_SPHERE_VISIBLE(Local_51[0 /*3*/], 50f)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
iLocal_53=1;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
}}}
}}
if(iLocal_53){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[0])){
fLocal_61=VEHICLE::GET_POSITION_IN_RECORDING(uLocal_47[0]);
}
}
if(fLocal_61 > 1100f){
iLocal_63=1;
}}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], 0)){
if(bLocal_54){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[1])){
if(iLocal_57){
if(iLocal_55){
func_6(&(uLocal_47[1]), &(uLocal_49[1]));
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
iLocal_56=0;
iLocal_63=2;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
}
}}else{
func_6(&(uLocal_47[1]), &(uLocal_49[1]));
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
iLocal_56=0;
iLocal_63=2;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
}}}
}}
break;
case 2:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[1])){
iLocal_63=3;
}}
break;
case 3:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], 0)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")){
if(!CAM::IS_SPHERE_VISIBLE(Local_51[2 /*3*/], 50f)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2])){
func_6(&(uLocal_47[2]), &(uLocal_49[2]));
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_47[2], 101, "AirportNew", 1);
iLocal_63=4;
}}
}}
break;
case 4:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[2], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[2])){
fLocal_62=VEHICLE::GET_POSITION_IN_RECORDING(uLocal_47[2]);
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[1], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[1])){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_47[1])){
func_8(&(uLocal_47[1]), &(uLocal_49[1]));
iLocal_56=1;
}
}}
if(fLocal_62 > 1100f){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], 0)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")){
if(!CAM::IS_SPHERE_VISIBLE(Local_51[3 /*3*/], 50f)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[3]) && iLocal_56){
func_6(&(uLocal_47[3]), &(uLocal_49[3]));
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_47[3], 104, "AirplaneLandingRedux", 1);
iLocal_63=5;
}}}
}}
break;
case 5:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_47[3], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_47[3])){
func_5();
iLocal_63=0;
}}
break;
}
break;
}}


void func_5(){
fLocal_61=0f;
iLocal_53=0;
iLocal_57=1;
iLocal_55=0;
}


void func_6(var uParam0, var uParam1){
ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1, 0);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, 1, 0);
ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}


void func_7(){
struct<3> Var0;
switch (iLocal_59){
case 0:
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_48)){
uLocal_48=VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
ENTITY::SET_ENTITY_LOD_DIST(uLocal_48, 1000);
VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_48, 1, 1, 0);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_48, 0);
uLocal_50=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_48, 4, iLocal_60, -1, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_50, 1);
iLocal_59=1;
}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_48) && !ENTITY::IS_ENTITY_DEAD(uLocal_48, 0)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight")){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_48, 101, "EastWestFlight", 2, 5, 786603);
iLocal_59=2;
}}}
break;
case 2:
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_48) && !ENTITY::IS_ENTITY_DEAD(uLocal_48, 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48)){
if((ENTITY::IS_ENTITY_OCCLUDED(uLocal_48) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && vdist2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_48, 1)) > 62500f){
iLocal_59=1;
}}}
break;
}}


void func_8(var uParam0, var uParam1){
ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0, 0);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0, 0);
ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
}


void func_9(){
}

int func_10(){
return 1;
}


void func_11(){
}


void func_12(){
func_1();
func_13();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_13(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
var uVar3;
if(ENTITY::DOES_ENTITY_EXIST(uLocal_65)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_65)){
VEHICLE::DELETE_VEHICLE(&uLocal_65);
}elseif(!ENTITY::IS_ENTITY_DEAD(uLocal_65, 0) && !PED::IS_PED_INJURED(uLocal_66)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_65);
PED::SET_PED_KEEP_TASK(uLocal_66, 1);
Var0={
ENTITY::GET_ENTITY_COORDS(uLocal_65, 1) 
};
uVar3=ENTITY::GET_ENTITY_HEADING(uLocal_65);
Var1={
0f, 500f, 50f 
};
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, uVar3, Var1) 
};
TASK::TASK_HELI_MISSION(uLocal_66, uLocal_65, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
}}
if(bLocal_71){
VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
}}