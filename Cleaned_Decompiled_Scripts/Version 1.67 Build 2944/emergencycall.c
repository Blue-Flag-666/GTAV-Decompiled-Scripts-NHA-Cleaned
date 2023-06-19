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
int iLocal_44=0;
var uLocal_45=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
iLocal_41=5;
}
while (true){
wait(0);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
switch (iLocal_41){
case 0:
func_10();
break;
case 1:
break;
case 2:
func_9();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_45, 0, 0)){
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}}elseif(MISC::CREATE_INCIDENT(7, Local_43, 2, 3f, &uLocal_45, 0, 0)){
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}
break;
case 3:
func_9();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_8(PLAYER::PLAYER_ID(), 0) && func_4(PLAYER::PLAYER_ID())==5) && Global_1969076){
if(Global_1969077==0){
Global_1969077=1;
}
iLocal_41=5;
}
elseif(MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_45, 0, 0)){
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}}elseif(MISC::CREATE_INCIDENT(5, Local_43, 2, 3f, &uLocal_45, 0, 0)){
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}
break;
case 4:
func_9();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &uLocal_45, 0, 0)){
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}}elseif(MISC::CREATE_INCIDENT(3, Local_43, 4, 3f, &uLocal_45, 0, 0)){
if(Global_97310.f_358==MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0))){
Global_97310.f_358=MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
}
elseif(func_2(67) && !func_2(68)){
Global_97240=1;
}
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_41=5;
}
break;
case 5:
if(MISC::GET_GAME_TIMER() > (iLocal_44 + 60000) || !MISC::IS_INCIDENT_VALID(uLocal_45)){
func_1();
}elseif(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(MISC::IS_INCIDENT_VALID(uLocal_45)){
MISC::DELETE_INCIDENT(uLocal_45);
}
}}
break;
}}}}


void func_1(){
iLocal_41=0;
iLocal_42=0;
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_4(int iParam0){
if(func_6(iParam0)==233){
return func_5(iParam0);
}
return -1;
}

int func_5(int iParam0){
if(func_8(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_6(int iParam0){
if(func_7(iParam0)){
if(func_8(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_7(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 < 0){
return 0;
}
if(iVar0 >=32){
return 0;
}
return 1;
}

int func_8(int iParam0, int iParam1){
if(func_7(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}


void func_9(){
if(MISC::GET_GAME_TIMER() > iLocal_44 + 30000){
iLocal_41=5;
}}


void func_10(){
var uVar0;
switch (iLocal_42){
case 0:
iLocal_42=1;
iLocal_44=MISC::GET_GAME_TIMER();
break;
case 1:
while (!func_20()){
wait(0);
if(func_19()==3){
iLocal_41=3;
}
if(func_19()==4){
iLocal_41=4;
}
if(func_19()==5){
iLocal_41=2;
}
if(MISC::GET_GAME_TIMER() > iLocal_44 + 30000){
iLocal_44=MISC::GET_GAME_TIMER();
func_13(0);
}}
if(iLocal_41==0){
iLocal_41=5;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_11(PLAYER::PLAYER_PED_ID(), &Local_43, &uVar0);
}
iLocal_44=MISC::GET_GAME_TIMER();
break;
}}


void func_11(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
struct<3> Var6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
int iVar13;
var uVar14;
int iVar15;
var uVar16;
struct<3> Var17;
var uVar18;
fVar12=5f;
iVar0=1;
iVar13=0;
while (iVar13 < 2){
switch (iVar13){
case 0:
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar10, &iVar1, 5, 1077936128, 0);
PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f){
*uParam1={
-3031.38f, 605.32f, 6.86f 
};
}
Var6={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
fVar8=MISC::GET_HEADING_FROM_VECTOR_2D(Var6.f_0, Var6.f_1);
fVar9=(fVar10 + 180f);
if(fVar9 > 360f){
fVar9=(fVar9 - 360f);
}
if(func_12(fVar8, fVar10, 90f)){
*uParam2=fVar10;
}else{
*uParam2=fVar9;
}
if(fVar7 < 0f){
fVar11=0f;
}elseif(PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0))){
fVar11=0f;
}else{
fVar11=(fVar12 * to_float((iVar1 / 2)));
if(fVar11==0f){
fVar11=(fVar11 + fVar12);
}
if(iVar1==5){
fVar11=(fVar11 + fVar12);
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f){
fVar11=(fVar11 + 5f);
}else{
fVar11=(fVar11 + 3.75f);
}
fVar11=(fVar11 + (fVar7 / 2f));
}
if(vdist(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > vdist(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))){
fVar11=-fVar11;
}
*uParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f) 
};
uVar14=SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
iVar13++;
break;
case 1:
if(iVar0 <=2){
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar14, &iVar15, &Var17, &uVar16, &uVar18)==2){
if(iVar15 !=0){
if(Var17.f_2 > (uParam1->f_2 + 8.5f)){
iVar13++;
}else{
iVar0++;
iVar13=0;
}
}
else{
iVar13++;
}}}else{
iVar13++;
}
break;
case 2:
break;
}}}

int func_12(float fParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar1=(fParam1 - fParam2);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
fVar0=(fParam1 + fParam2);
if(fVar0 >=360f){
fVar0=(fVar0 - 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}


void func_13(int iParam0){
if(func_18()){
return;
}
if(Global_20704){
if(func_17()){
func_15(1, 1);
}else{
func_15(0, 0);
}}
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21845=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 30);
}else{
MISC::CLEAR_BIT(&Global_8370, 30);
}
if(!func_14()){
Global_20500.f_1=3;
}}

int func_14(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_15(bool bParam0, bool bParam1){
if(bParam0){
if(func_16(0)){
Global_20704=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
}
Global_20428={
Global_20446[Global_20445 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
}}elseif(Global_20704==1){
Global_20704=0;
Global_20428={
Global_20453[Global_20445 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
}}}

int func_16(int iParam0){
if(iParam0==1){
if(Global_20500.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8370, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20500.f_1 > 3){
return 1;
}
return 0;
}


bool func_17(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_18(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_19(){
return Global_22862;
}

int func_20(){
if(Global_21845==0){
return 1;
}
return 0;
}