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
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=NULL;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
int iLocal_46=0;
struct<3> Local_47={
0, 0, 0 
};
struct<3> Local_48={
0, 0, 0 
};
var uLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
var uLocal_53=0;
struct<2> Local_54={
0, 5 
};
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
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
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
Local_47={
ScriptParam_54.f_1[0 /*3*/] 
};
iLocal_44=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
func_28();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
func_28();
}
while (true){
wait(0);
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
if(func_8(3)){
switch (iLocal_43){
case 0:
if(iLocal_45==1){
iLocal_43=1;
}
else{
func_7();
}
break;
case 1:
if(!ENTITY::IS_ENTITY_DEAD(iLocal_50, 0)){
if(iLocal_46==0){
if(func_2(iLocal_50, 0, 1056964608, 0, 0, 0)){
iLocal_46=1;
}}
}
if(iLocal_52==0){
func_1();
}
break;
}}else{
func_28();
}}else{
func_28();
}}}


void func_1(){
if(timerb() > 10000){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 10f, 10f, 10f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
settimerb(0);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_50, 0)){
if(iLocal_44==0){
if(iLocal_46==0){
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_53);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_53);
TASK::TASK_PERFORM_SEQUENCE(iLocal_50, uLocal_53);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_53);
}elseif(!ENTITY::IS_ENTITY_DEAD(uLocal_51, 0)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_50, iLocal_51, 0);
if(iLocal_46==0){
}
TASK::TASK_WANDER_STANDARD(iLocal_51, 1193033728, 0);
iLocal_44=0;
}}}}}

int func_2(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5){
float fVar0;
if(iParam4==2){
fVar0=150f;
}elseif(iParam4==1){
fVar0=100f;
}elseif(iParam4==0){
fVar0=40f;
}
switch (iParam3){
case 2:
if(func_3(uParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
if(func_3(uParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
if(func_3(uParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
if(func_3(uParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
if(func_3(uParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
if(func_3(uParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
case 1:
if(func_3(uParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
case 0:
if(func_3(uParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5)){
return 1;
}
break;
}
return 0;
}

int func_3(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4){
float fVar0;
struct<3> Var1;
if(fParam3 < 1f){
fVar0=(1f + 0.5f);
}else{
fVar0=(fParam3 + 0.5f);
}
Var1={
(fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 
};
if(!PED::IS_PED_INJURED(uParam0)){
if((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Param1), Var1, 0, 1, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0, 1), fParam2)) && func_5(bParam4)) && !PED::IS_PED_RAGDOLL(uParam0)) && !TASK::IS_PED_GETTING_UP(uParam0)){
func_4(uParam0, 1);
return 1;
}else{
func_4(uParam0, 0);
}}
return 0;
}


void func_4(int iParam0, bool bParam1){
if(bParam1){}
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){}}

int func_5(bool bParam0){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(bParam0){
if(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID())==1f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID())==0f){
return 1;
}}elseif(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID())==1f){
return 1;
}}
return 0;
}


Vector3 func__6(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
switch (iParam1){
case 0:
if(iParam0==0){
Var0={
0f, fParam2, 0f 
};
}elseif(iParam0==1){
Var0={
fParam2, 0f, 0f 
};
}elseif(iParam0==3){
Var0={
0f, -fParam2, 0f 
};
}elseif(iParam0==2){
Var0={
-fParam2, 0f, 0f 
};
}
break;
case 1:
if(iParam0==3){
Var0={
0f, fParam2, 0f 
};
}elseif(iParam0==2){
Var0={
fParam2, 0f, 0f 
};
}elseif(iParam0==0){
Var0={
0f, -fParam2, 0f 
};
}elseif(iParam0==1){
Var0={
-fParam2, 0f, 0f 
};
}
break;
case 2:
if(iParam0==2){
Var0={
0f, fParam2, 0f 
};
}elseif(iParam0==3){
Var0={
fParam2, 0f, 0f 
};
}elseif(iParam0==1){
Var0={
0f, -fParam2, 0f 
};
}elseif(iParam0==0){
Var0={
-fParam2, 0f, 0f 
};
}
break;
case 3:
if(iParam0==1){
Var0={
0f, fParam2, 0f 
};
}elseif(iParam0==0){
Var0={
fParam2, 0f, 0f 
};
}elseif(iParam0==2){
Var0={
0f, -fParam2, 0f 
};
}elseif(iParam0==3){
Var0={
-fParam2, 0f, 0f 
};
}
break;
case 5:
if(iParam0==1){
Var0={
fParam2, fParam2, 0f 
};
}elseif(iParam0==0){
Var0={
-fParam2, fParam2, 0f 
};
}elseif(iParam0==3){
Var0={
fParam2, -fParam2, 0f 
};
}elseif(iParam0==2){
Var0={
-fParam2, -fParam2, 0f 
};
}
break;
case 6:
if(iParam0==0){
Var0={
fParam2, fParam2, 0f 
};
}elseif(iParam0==2){
Var0={
-fParam2, fParam2, 0f 
};
}elseif(iParam0==1){
Var0={
fParam2, -fParam2, 0f 
};
}elseif(iParam0==3){
Var0={
-fParam2, -fParam2, 0f 
};
}
break;
case 7:
if(iParam0==3){
Var0={
fParam2, fParam2, 0f 
};
}elseif(iParam0==1){
Var0={
-fParam2, fParam2, 0f 
};
}elseif(iParam0==2){
Var0={
fParam2, -fParam2, 0f 
};
}elseif(iParam0==0){
Var0={
-fParam2, -fParam2, 0f 
};
}
break;
case 8:
if(iParam0==2){
Var0={
fParam2, fParam2, 0f 
};
}elseif(iParam0==3){
Var0={
-fParam2, fParam2, 0f 
};
}elseif(iParam0==0){
Var0={
fParam2, -fParam2, 0f 
};
}elseif(iParam0==1){
Var0={
-fParam2, -fParam2, 0f 
};
}
break;
}
if(fParam2 < 0f){
fParam2=(fParam2 * -1f);
}
return Var0;
}


void func_7(){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 50f, 50f, 50f, 0, 1, 0)){
STREAMING::REQUEST_MODEL(joaat("a_m_o_tramp_01"));
STREAMING::REQUEST_MODEL(joaat("g_m_y_strpunk_01"));
STREAMING::REQUEST_ANIM_DICT("amb@drug_dealer");
while ((!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_tramp_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_strpunk_01"))) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@drug_dealer")){
wait(0);
}
PED::ADD_RELATIONSHIP_GROUP("homeless", &uLocal_49);
Local_48.f_2=(Local_47.f_2 - 1f);
iLocal_50=PED::CREATE_PED(19, joaat("a_m_o_tramp_01"), Local_47.f_0, Local_47.f_1, Local_48.f_2, 0f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, uLocal_49);
if(iLocal_44==1){
Local_48={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0.8f, 0.8f, -1f) 
};
iLocal_51=PED::CREATE_PED(5, joaat("g_m_y_strpunk_01"), Local_48, 0f, 1, 1);
PED::ADD_RELATIONSHIP_GROUP("homeless", &uLocal_49);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51, uLocal_49);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_50, 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_53);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_48, 0);
TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_53);
TASK::TASK_PERFORM_SEQUENCE(iLocal_50, uLocal_53);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_53);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_51, 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_53);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_47, 0);
TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_53);
TASK::TASK_PERFORM_SEQUENCE(iLocal_51, uLocal_53);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_53);
}}
iLocal_45=1;
}}

int func_8(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_27(6) || func_27(7)){
return 1;
}else{
return func_8(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_25(5)){
if(func_9(4)){
return 1;
}}
break;
}
return 0;
}

int func_9(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_20();
if(!func_19(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_112695) || Global_32166) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_18()) || Global_32166) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_112695) || Global_32166) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_112695) || Global_32166) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_18() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_18()) || Global_32166) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_18()) || func_14()) || Global_112695) || Global_32166) || func_17()) || Global_44446) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_18()) || Global_112695) || Global_32166) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12()){
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


var func__10(){
return Global_100720.f_1;
}

int func_11(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_12(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_13(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_14(){
return Global_100733.f_388 > 0;
}


bool func_15(){
return Global_100733.f_387 > 0;
}


var func__16(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


var func__17(){
return Global_1575060;
}

int func_18(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


bool func_19(int iParam0){
return iParam0 < 3;
}


var func__20(){
func_21();
return Global_113648.f_2365.f_539.f_4321;
}


void func_21(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_23(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_22(PLAYER::PLAYER_PED_ID());
if(func_19(iVar0) && (!func_27(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_19(Global_113648.f_2365.f_539.f_4321)){
Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
}
Global_113648.f_2365.f_539.f_4323=iVar0;
Global_113648.f_2365.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=145){
Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
}
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
}

int func_22(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_23(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_23(int iParam0){
if(func_19(iParam0)){
return func_24(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__24(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_25(int iParam0){
return func_26(iParam0, Global_43257);
}

int func_26(int iParam0, int iParam1){
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


bool func_27(int iParam0){
return Global_43257==iParam0;
}


void func_28(){
SCRIPT::TERMINATE_THIS_THREAD();
}