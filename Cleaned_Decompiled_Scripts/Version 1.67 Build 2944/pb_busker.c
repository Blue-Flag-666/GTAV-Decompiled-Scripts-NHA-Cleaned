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
int iLocal_41=0;
int iLocal_42=0;
struct<3> Local_43={
0, 0, 0 
};
struct<3> Local_44={
0, 0, 0 
};
int iLocal_45=0;
var uLocal_46=0;
int iLocal_47=0;
var uLocal_48=0;
struct<2> Local_49={
0, 5 
};
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=5;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=0;
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
Local_43={
ScriptParam_49.f_1[0 /*3*/] 
};
func_23();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){}
while (true){
wait(0);
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
if(func_3(3)){
switch (iLocal_41){
case 0:
if(iLocal_42==1){
iLocal_41=1;
}
else{
func_2();
}
break;
case 1:
if(iLocal_45==0){
func_1();
}
break;
}}else{
func_23();
}}else{
func_23();
}}}


void func_1(){
if(timerb() > 7000){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_43, 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_43, 3f, 3f, 3f, 0, 1, 0)){
settimerb(0);
Local_44={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
TASK::OPEN_SEQUENCE_TASK(&uLocal_48);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_44, 0);
TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_48);
if(!ENTITY::IS_ENTITY_DEAD(uLocal_46, 0)){
TASK::TASK_PERFORM_SEQUENCE(uLocal_46, uLocal_48);
}
TASK::CLEAR_SEQUENCE_TASK(&uLocal_48);
}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_43, 3f, 3f, 3f, 0, 1, 0)){
Local_44={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
settimerb(0);
TASK::OPEN_SEQUENCE_TASK(&uLocal_48);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_44, 0);
TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_48);
if(!ENTITY::IS_ENTITY_DEAD(uLocal_46, 0)){
TASK::TASK_PERFORM_SEQUENCE(uLocal_46, uLocal_48);
}
TASK::CLEAR_SEQUENCE_TASK(&uLocal_48);
}}}


void func_2(){
iLocal_45=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_43, 50f, 50f, 50f, 0, 1, 0)){
STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
while (!STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02"))){
wait(0);
}
STREAMING::REQUEST_ANIM_DICT("amb@BUSKER");
while (!STREAMING::HAS_ANIM_DICT_LOADED("amb@BUSKER")){
wait(0);
}
Local_44.f_2=(Local_43.f_2 - 1f);
uLocal_46=PED::CREATE_PED(19, joaat("g_m_y_mexgoon_02"), Local_43.f_0, Local_43.f_1, Local_44.f_2, 0f, 1, 1);
if(!ENTITY::IS_ENTITY_DEAD(uLocal_46, 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_48);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_44, 0);
TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_48);
TASK::TASK_PERFORM_SEQUENCE(uLocal_46, uLocal_48);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_48);
}
if(iLocal_45==1){
Local_44={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_46, 3.8f, 0.8f, 0f) 
};
iLocal_47=PED::CREATE_PED(5, joaat("a_f_m_bevhills_02"), Local_44, 0f, 1, 1);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_47, 0)){
TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_47, Local_43, 0);
}}
iLocal_42=1;
}}

int func_3(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_22(6) || func_22(7)){
return 1;
}else{
return func_3(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_20(5)){
if(func_4(4)){
return 1;
}}
break;
}
return 0;
}

int func_4(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_15();
if(!func_14(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_13()) || Global_112857) || Global_32286) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_8()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_13()) || Global_32286) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_13()) || Global_112857) || Global_32286) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_13()) || Global_112857) || Global_32286) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_13() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_11(8, -1)) || func_7()) || func_6()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_11(8, -1) || func_10()) || func_9()) || func_6()) || func_5()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_13()) || Global_32286) || func_12()) || func_11(8, -1)) || func_9()) || func_8()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_13()) || func_9()) || Global_112857) || Global_32286) || func_12()) || Global_44569) || func_11(8, -1)) || func_8()) || func_6()) || func_7()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_13()) || Global_112857) || Global_32286) || func_12()) || func_11(8, -1)) || func_8()) || func_6()) || func_10()) || func_9()) || func_7()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__5(){
return Global_100872.f_1;
}

int func_6(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_7(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_8(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_9(){
return Global_100885.f_394 > 0;
}


bool func_10(){
return Global_100885.f_393 > 0;
}


var func__11(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


var func__12(){
return Global_1575063;
}

int func_13(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}


bool func_14(int iParam0){
return iParam0 < 3;
}


var func__15(){
func_16();
return Global_113810.f_2366.f_539.f_4321;
}


void func_16(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_18(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_17(PLAYER::PLAYER_PED_ID());
if(func_14(iVar0) && (!func_22(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_14(Global_113810.f_2366.f_539.f_4321)){
Global_113810.f_2366.f_539.f_4322=Global_113810.f_2366.f_539.f_4321;
}
Global_113810.f_2366.f_539.f_4323=iVar0;
Global_113810.f_2366.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113810.f_2366.f_539.f_4321 !=145){
Global_113810.f_2366.f_539.f_4323=Global_113810.f_2366.f_539.f_4321;
}
return;
}}
Global_113810.f_2366.f_539.f_4321=145;
}

int func_17(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_18(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_18(int iParam0){
if(func_14(iParam0)){
return func_19(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__19(int iParam0){
return Global_2058[iParam0 /*29*/];
}


bool func_20(int iParam0){
return func_21(iParam0, Global_43377);
}

int func_21(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}


bool func_22(int iParam0){
return Global_43377==iParam0;
}


void func_23(){
SCRIPT::TERMINATE_THIS_THREAD();
}