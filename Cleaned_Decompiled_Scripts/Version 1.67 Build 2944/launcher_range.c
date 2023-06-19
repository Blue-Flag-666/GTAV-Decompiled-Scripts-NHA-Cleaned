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
struct<3> Local_43={
0, 0, 0 
};
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
struct<16> Local_49={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_50={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_51=0;
var uLocal_52=0;
struct<3> Local_53={
0, 0, 0 
};
struct<3> Local_54={
0, 0, 0 
};
float fLocal_55=0f;
var uLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
char* sLocal_63=NULL;
float fLocal_64=0f;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
float fLocal_72=0f;
struct<3> Local_73={
0, 0, 0 
};
struct<3> Local_74={
0, 0, 0 
};
float fLocal_75=0f;
bool bLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
int iLocal_90=0;
bool bLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
int iLocal_97=0;
struct<6> Local_98[3];
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
struct<2> Local_103={
0, 5 
};
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=5;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
#endregion

void __EntryFunction__(){
bool bVar0;
bool bVar1;
bool bVar2;
int iVar3;
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
500f, 500f, 500f 
};
iLocal_58=-1;
iLocal_59=2050;
iLocal_60=-1;
iLocal_61=-1;
sLocal_63="CC_SUBSTR";
fLocal_64=125f;
iLocal_65=1;
iLocal_67=263;
fLocal_75=4f;
bLocal_76=true;
bLocal_91=true;
Local_54={
ScriptParam_103.f_1[0 /*3*/] 
};
Local_54={
Local_54 
};
uLocal_52=uLocal_52;
Local_50={
Local_50 
};
bVar0=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_107(1);
}
uLocal_51=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_57=0;
func_105(&Global_112460, 0);
func_102();
if(func_101(uLocal_56, 1)){
iLocal_62=10;
}else{
iLocal_62=9;
}
while (!Global_38716){
wait(0);
}
if(!func_101(uLocal_56, 8)){
if(!func_99(iLocal_62)){
if(func_98(0, iLocal_61)){
func_107(0);
}else{
func_107(1);
}}}
if(iLocal_61 !=-1){
if(!func_98(0, iLocal_61)){
bLocal_76=false;
}}
if(func_101(uLocal_56, 8388608)){
func_107(1);
}
if(func_101(uLocal_56, 524288) && (func_97() && !func_96())){
func_107(1);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_101(uLocal_56, 4194304)){
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
iLocal_67=263;
}
func_94(10);
}
while (true){
uLocal_51=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_101(uLocal_56, 1048576)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_51, 0)){
func_107(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_51) && !ENTITY::IS_ENTITY_DEAD(iLocal_51, 0)){
Local_53={
ENTITY::GET_ENTITY_COORDS(iLocal_51, 1) 
};
fLocal_55=vdist2(Local_53, ScriptParam_103.f_1[0 /*3*/]);
fLocal_55=fLocal_55;
Local_73={
Local_53 
};
Local_74={
ScriptParam_103.f_1[0 /*3*/] 
};
Local_73.f_2=0f;
Local_74.f_2=0f;
fLocal_72=vdist2(Local_73, Local_74);
switch (iLocal_57){
case 0:
if(func_99(iLocal_62) || (func_101(uLocal_56, 16) && !func_101(uLocal_56, 524288))){
iLocal_60=-1;
func_93();
func_94(1);
}else{
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
iLocal_67=263;
}
func_94(10);
}
if((Local_53.f_2 - ScriptParam_103.f_1[0 /*3*/].f_2) > 500f){
}}
break;
case 1:
if(func_91()){
iLocal_65=iLocal_65;
func_94(3);
}else{
func_93();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_107(1);
return;
}
if(!func_99(iLocal_62)){
if(!func_101(uLocal_56, 8)){
bVar1=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100833.f_3), &Local_50)){
Local_50={
Local_49 
};
bVar1=false;
}
if(bVar1){
func_107(0);
break;
}
}}
if(!func_101(uLocal_56, 4)){
func_88();
func_87(&uLocal_56, 4);
}
if(fLocal_72 > (fLocal_64 * fLocal_64) && !Global_100867){
if(iLocal_67 !=263){
if(func_86(6) && !func_85(iLocal_67)){
}else{
func_95(iLocal_67, 1, 0);
iLocal_67=263;
}
}
func_94(10);
}else{
Local_50={
Local_49 
};
bVar2=!func_101(uLocal_56, 64);
func_105(&uLocal_56, 128);
if(!func_84(3) && !Global_100867){
if(func_101(uLocal_56, 2097152)){
if((!func_101(uLocal_56, 1) || !ENTITY::DOES_ENTITY_EXIST(func_83())) && !Global_100867){
func_94(10);
break;
}}
}
if(func_101(uLocal_56, 524288) && (func_97() && !func_96())){
func_107(1);
}
if(func_82()){
func_107(1);
}
if((!func_74(6) || Global_112857) || func_73()){
bVar2=false;
}
if(!bLocal_76){
func_71(&uLocal_56, 128);
bVar2=false;
}
if(func_101(uLocal_56, 1)){
if(!func_70()){
func_71(&uLocal_56, 128);
bVar2=false;
}
}
if(func_69(1)){
bVar2=false;
}
if(Global_78689){
bVar2=false;
}
if(func_68()){
bVar2=false;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
bVar2=false;
}
if(func_67() || func_66(8, -1)){
bVar2=false;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(func_65(0) || func_64()){
bVar2=false;
}
if(bVar2){
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_51, ScriptParam_103.f_1[0 /*3*/], fLocal_75, fLocal_75, 2f, 0, 1, iLocal_65)){
bVar2=false;
}
if(bVar2 && func_57(func_58()) < iLocal_77){
func_71(&uLocal_56, 128);
bVar2=false;
if(!func_101(uLocal_56, 33554432)){
func_56("MG_YOU_IS_BROKE", iLocal_77, -1);
func_71(&uLocal_56, 33554432);
}}else{
func_105(&uLocal_56, 33554432);
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(bVar2){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_55(uLocal_52)){
if(iLocal_58==-1){
if(iLocal_77 > 0){
func_54(&iLocal_58, 4, "", 1, 0, 0, 0);
func_53(sLocal_63, iLocal_77);
func_71(&uLocal_56, 2048);
}
else{
func_54(&iLocal_58, 4, sLocal_63, 0, 0, 0, 0);
func_71(&uLocal_56, 2048);
}
}
elseif(!func_101(uLocal_56, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_52(&iLocal_58);
func_105(&uLocal_56, 2048);
}
if(func_50(iLocal_58, 1)){
sLocal_63=sLocal_63;
func_52(&iLocal_58);
func_105(&uLocal_56, 2048);
if(func_101(uLocal_56, 2048)){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_105(&uLocal_56, 2048);
HUD::CLEAR_HELP(0);
}
}
SCRIPT::REQUEST_SCRIPT(&Local_50);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_94(5);
}}else{
sLocal_63=sLocal_63;
func_52(&iLocal_58);
func_105(&uLocal_56, 2048);
if(func_101(uLocal_56, 2048)){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_105(&uLocal_56, 2048);
HUD::CLEAR_HELP(0);
}
}
SCRIPT::REQUEST_SCRIPT(&Local_50);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_94(5);
}}
}
if(!bVar2){
if(iLocal_58 !=-1){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_52(&iLocal_58);
func_105(&uLocal_56, 2048);
HUD::CLEAR_HELP(0);
}}
}}
func_40();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(SCRIPT::HAS_SCRIPT_LOADED(&Local_50)){
if(iLocal_58 !=-1){
func_52(&iLocal_58);
}
iVar3=2;
bVar0=false;
if(func_101(uLocal_56, 1)){
if(func_86(6) || func_86(7)){
iVar3=1;
bVar0=true;
}
}
if(iVar3 !=1){
iVar3=func_37(&iLocal_60, 6, iLocal_62, 0, 0);
}
if(iVar3==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
func_36();
if(Global_44569){
func_27(PLAYER::PLAYER_PED_ID());
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
uLocal_48=func_26();
func_105(&uLocal_56, 4);
func_25();
func_71(&uLocal_56, 2);
func_94(6);
func_21(&uLocal_69);
if(iLocal_61 !=-1){
func_20(iLocal_61);
func_17(func_19(iLocal_61), 0, 0);
}
}
elseif(iVar3==2){
func_16();
}
elseif(iVar3==0){
func_94(10);
}}else{
func_16();
}
break;
case 6:
if(!func_101(uLocal_56, 256)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
}
elseif(CAM::IS_SCREEN_FADED_OUT()){
func_71(&uLocal_56, 256);
}}
if(func_101(Global_112460, 262144)){
func_105(&Global_112460, 262144);
func_15();
}
if(func_101(uLocal_56, 2097152)){
if(!func_84(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
func_94(10);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
STATS::PLAYSTATS_ODDJOB_DONE(round((func_11(&uLocal_69) * 1000f)), iLocal_61, 0);
func_10(&uLocal_69);
func_105(&uLocal_56, 256);
func_7();
if(bVar0){
func_105(&uLocal_56, 2);
}
elseif(func_101(uLocal_56, 2)){
if(func_101(Global_112460, 0)){
func_6(&iLocal_60);
iLocal_60=-1;
func_105(&uLocal_56, 2);
}else{
func_6(&iLocal_60);
iLocal_60=-1;
func_105(&uLocal_56, 2);
}
}
func_94(0);
if(iLocal_61 !=-1){
if(func_101(Global_112460, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_61), 0, Global_100870, 0);
func_5(func_19(iLocal_61), 0, Global_100870, 1, 0);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_61), 0, Global_100870, 0);
func_5(func_19(iLocal_61), 0, Global_100870, 0, 0);
}
}
func_4();
func_105(&Global_112460, 0);
if(func_101(uLocal_56, 16777216)){
func_107(1);
}
if(iLocal_61 !=-1){
if(Global_113810.f_9088){
if(!func_98(0, iLocal_61)){
func_107(1);
}}
}}
func_3();
break;
case 8:
func_94(0);
break;
case 10:
func_107(1);
break;
case 9:
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
iLocal_67=263;
}
func_94(10);
}
break;
case 7:
func_2();
if(iLocal_67 !=263){
func_95(iLocal_67, 0, 0);
}
if(iLocal_58 !=-1){
func_52(&iLocal_58);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_63)){
if(func_1(sLocal_63)){
HUD::CLEAR_HELP(1);
}}
func_94(4);
break;
case 4:
if((iLocal_66 % 150)==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_68==2){
if(iLocal_68==2){
if(func_99(iLocal_62) && func_98(0, iLocal_61)){
func_102();
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
}
func_94(0);
}}}elseif(iLocal_68==0){
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
iLocal_67=263;
}
func_94(10);
}}elseif(iLocal_68==1){
if(fLocal_72 > ((80f + 5f) * (80f + 5f))){
func_102();
if(iLocal_67 !=263){
func_95(iLocal_67, 1, 0);
}
func_94(0);
}}
}
else{
func_95(iLocal_67, 1, 0);
}}else{
iLocal_66++;
}
break;
}}
wait(0);
}}


bool func_1(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2(){
if(bLocal_91){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ear_defenders_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_safety_glasses"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_arm_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_backboard_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_bull_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner1"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner2_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner3_b"));
}}


void func_3(){
}


void func_4(){
}


void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883)){
return;
}
if(MISC::COMPARE_STRINGS(sParam0, &Global_97883, 0, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94990);
StringCopy(&Global_97883, "", 64);
}


void func_6(int iParam0){
if(*iParam0==-1){
return;
}
if(!*iParam0==Global_43339){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


void func_7(){
char cVar0[24];
if(MISC::IS_XBOX360_VERSION() || func_9()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_8()){
StringCopy(&cVar0, "PRESENCE_0_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
}}


var func__8(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__9(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_10(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}


float func_11(var uParam0){
if(func_14(uParam0)){
if(func_13(uParam0)){
return uParam0->f_2;
}else{
return (func_12(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_12(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=to_float(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=to_float(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (to_float(MISC::GET_GAME_TIMER()) / 1000f);
}


bool func_13(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


bool func_14(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_15(){
return 1;
}


void func_16(){
}


void func_17(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97883, 0, 0, 0, 1, 0);
StringCopy(&Global_97883, "", 64);
}
StringCopy(&Global_97883, sParam0, 64);
STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


char* func_19(int iParam0){
switch (iParam0){
case 0:
return "OJBJ";
break;
case 1:
return "MGDT";
break;
case 2:
return "MGGF";
break;
case 3:
return "OJHU";
break;
case 4:
return "MGOR";
break;
case 5:
return "MGPS";
break;
case 6:
return "MGRP";
break;
case 7:
return "MGSEA";
break;
case 8:
return "MGSTR";
break;
case 9:
return "MGSC";
break;
case 10:
return "MGSP";
break;
case 11:
return "MGSRm";
break;
case 12:
return "OJTX";
break;
case 13:
return "MGTN";
break;
case 14:
return "OJTW";
break;
case 15:
return "OJDA";
break;
case 16:
return "OJDG";
break;
case 17:
return "MGTR";
break;
case 18:
return "MGYG";
break;
case 19:
return "MGCR";
break;
}
return "INVALID!";
}


void func_20(int iParam0){
var uVar0;
char cVar1[24];
if(MISC::IS_XBOX360_VERSION() || func_9()){
uVar0=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_8()){
StringCopy(&cVar1, "SPMG_", 24);
StringIntConCat(&cVar1, iParam0, 24);
StringConCat(&cVar1, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
}}


void func_21(var uParam0){
if(!func_14(uParam0)){
func_24(uParam0);
}else{
func_22(uParam0);
}}


void func_22(var uParam0){
func_23(uParam0, 0f);
}


void func_23(var uParam0, float fParam1){
uParam0->f_1=(func_12(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


void func_24(var uParam0){
if(!func_14(uParam0)){
func_22(uParam0);
}}


void func_25(){
int iVar0;
if(iLocal_90){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_84);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_85);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_86);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_87);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_88);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_89);
iVar0=0;
iVar0=0;
while (iVar0 <=2){
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/].f_1));
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/].f_4));
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/].f_3));
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/].f_2));
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/]));
OBJECT::DELETE_OBJECT(&(Local_98[iVar0 /*6*/].f_5));
iVar0++;
}
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_97);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ear_defenders_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_safety_glasses"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_arm_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_backboard_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_bull_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner1"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner2_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner3_b"));
}
iLocal_90=0;
}

int func_26(){
struct<10> Var0;
int iVar1;
Var0.f_1=iLocal_81;
Var0.f_2=iLocal_82;
Var0.f_3=iLocal_83;
Var0.f_4=uLocal_84;
Var0.f_5=uLocal_85;
Var0.f_6=uLocal_86;
Var0.f_7=uLocal_87;
Var0.f_8=uLocal_88;
Var0.f_9=uLocal_89;
Var0.f_0=iLocal_96;
iVar1=start_new_script_with_args(&Local_49, &Var0, 10, iLocal_59);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_49);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_81) && !ENTITY::IS_ENTITY_DEAD(iLocal_81, 0)){
PED::SET_PED_KEEP_TASK(iLocal_81, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_81);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_82) && !ENTITY::IS_ENTITY_DEAD(iLocal_82, 0)){
PED::SET_PED_KEEP_TASK(iLocal_82, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_82);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
PED::SET_PED_KEEP_TASK(iLocal_83, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_83);
}
return iVar1;
}


void func_27(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_35(iParam0);
if(!iVar0==-1){
iVar1=Global_44355[iVar0 /*5*/];
func_30(1, iVar1, 1);
return;
}
iVar2=func_29(iParam0);
if(iVar2==-1){
return;
}
func_28(iVar2);
}


void func_28(int iParam0){
if(iParam0 < 0 || iParam0 >=5){
return;
}
if(!Global_44329[iParam0 /*5*/].f_1==0){
if(Global_44329[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()){
Global_44567=0;
}}
Global_44329[iParam0 /*5*/]=13;
Global_44329[iParam0 /*5*/].f_1=0;
Global_44329[iParam0 /*5*/].f_2=0;
Global_44329[iParam0 /*5*/].f_3=0;
Global_44329[iParam0 /*5*/].f_4=0;
Global_44327=(Global_44327 - 1);
if(Global_44327 < 0){
Global_44327=0;
}}

int func_29(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_44329[iVar0 /*5*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_30(int iParam0, int iParam1, int iParam2){
func_31(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam0==-1){
return;
}
if(iParam1==-1){
return;
}
if(iParam2==6){
return;
}
if(func_33(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_32();
if(iVar0==-1){
return;
}
Global_44436[iVar0 /*6*/]=iParam0;
Global_44436[iVar0 /*6*/].f_1=iParam1;
Global_44436[iVar0 /*6*/].f_2=iParam2;
Global_44436[iVar0 /*6*/].f_3=iParam3;
Global_44436[iVar0 /*6*/].f_4=iParam4;
Global_44436[iVar0 /*6*/].f_5=iParam5;
}

int func_32(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44436[iVar0 /*6*/].f_2==6){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_33(int iParam0, int iParam1, int iParam2){
if(func_34(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_34(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam2==Global_44436[iVar0 /*6*/].f_2){
if(iParam0==Global_44436[iVar0 /*6*/]){
if(iParam1==Global_44436[iVar0 /*6*/].f_1){
return iVar0;
}}}
iVar0++;
}
return -1;
}

int func_35(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(!Global_44355[iVar0 /*5*/]==-1){
if(iParam0==Global_44355[iVar0 /*5*/].f_1){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_36(){
if(Global_9175[0 /*2811*/][0 /*281*/].f_259==2){
Global_9175[0 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9175[1 /*2811*/][0 /*281*/].f_259==2){
Global_9175[1 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9175[2 /*2811*/][0 /*281*/].f_259==2){
Global_9175[2 /*2811*/][0 /*281*/].f_259=0;
}
MISC::CLEAR_BIT(&Global_8370, 25);
MISC::SET_BIT(&Global_8371, 11);
}

int func_37(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_39(0)){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*iParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*iParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!func_99(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_38(iParam0, iParam4);
}}
return 2;
}


void func_38(var uParam0, int iParam1){
int iVar0;
if(Global_43338==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
Global_43344[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}

int func_39(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_99(iParam0)){
return 0;
}
return 1;
}


void func_40(){
struct<3> Var0;
float fVar1;
var uVar2;
struct<3> Var3;
int iVar4;
int iVar5;
GRAPHICS::DRAW_DEBUG_SPHERE(17.325f, -1094.09f, 31.58f, 0.2f, 255, 0, 0, 255);
GRAPHICS::DRAW_DEBUG_SPHERE(12.617f, -1092.35f, 31.58f, 0.2f, 0, 255, 0, 255);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_81) && !PED::IS_PED_INJURED(iLocal_81)){
PED::SET_PED_RESET_FLAG(iLocal_81, 71, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_82) && !PED::IS_PED_INJURED(iLocal_82)){
PED::SET_PED_RESET_FLAG(iLocal_82, 71, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !PED::IS_PED_INJURED(iLocal_83)){
PED::SET_PED_RESET_FLAG(iLocal_83, 71, 1);
}
if(bLocal_91){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_81, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, 0);
PED::SET_PED_RESET_FLAG(iLocal_81, 62, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_82, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_82, 0);
PED::SET_PED_RESET_FLAG(iLocal_82, 62, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 0);
PED::SET_PED_RESET_FLAG(iLocal_83, 62, 1);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
fVar1=vdist2(Var0, Local_54);
if(fVar1 < 400f){
if(!iLocal_92){
if((ENTITY::DOES_ENTITY_EXIST(Local_98[0 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_81)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_81, 1)){
PED::SET_PED_ACCURACY(iLocal_81, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_81, "move_ped_strafing");
if(iLocal_96==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[0 /*6*/].f_1, 1) - Vector(0.75f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[0 /*6*/].f_1, 1) - Vector(0.77f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 3000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 2000, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_81, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_92=1;
}}
if(!iLocal_93){
if((ENTITY::DOES_ENTITY_EXIST(Local_98[1 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_82)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_82, 1)){
PED::SET_PED_ACCURACY(iLocal_82, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_82, "move_ped_strafing");
if(iLocal_96==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[1 /*6*/].f_1, 1) - Vector(0.7f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[1 /*6*/].f_1, 1) - Vector(0.7f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 4000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 1000, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_82, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_93=1;
}}
if(!iLocal_94){
if((ENTITY::DOES_ENTITY_EXIST(Local_98[2 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_83)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_83, 1)){
PED::SET_PED_ACCURACY(iLocal_83, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_83, "move_ped_strafing");
if(iLocal_96==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[2 /*6*/].f_1, 1) - Vector(0.8f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_98[2 /*6*/].f_1, 1) - Vector(0.68f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 2000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 1500, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_83, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_94=1;
}}}else{
if(iLocal_92){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_81, 0)){
TASK::TASK_STAND_STILL(iLocal_81, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, 1);
}
iLocal_92=0;
}
if(iLocal_93){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_82, 0)){
TASK::TASK_STAND_STILL(iLocal_82, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_82, 1);
}
iLocal_93=0;
}
if(iLocal_94){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
TASK::TASK_STAND_STILL(iLocal_83, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 1);
}
iLocal_94=0;
}}}
if(iLocal_96==0){
iVar4=INTERIOR::GET_INTERIOR_AT_COORDS(13f, -1098f, 30f);
if(func_101(uLocal_56, 128)){
if(func_85(91)){
func_95(91, 0, 0);
}}elseif(!func_85(91)){
func_95(91, 1, 0);
}}else{
iVar4=INTERIOR::GET_INTERIOR_AT_COORDS(821f, -2162f, 30f);
if(func_101(uLocal_56, 128)){
if(func_85(92)){
func_95(92, 0, 0);
}}elseif(!func_85(92)){
func_95(92, 1, 0);
}}
iVar5=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(iVar5 !=iVar4){
func_71(&uLocal_56, 128);
}
if(func_42(28) || func_42(38)){
func_41();
func_71(&uLocal_56, 64);
func_71(&uLocal_56, 128);
}}


void func_41(){
if(iLocal_95){
return;
}
iLocal_95=1;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_81) && !PED::IS_PED_DEAD_OR_DYING(iLocal_81, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_81, 0);
TASK::TASK_COMBAT_PED(iLocal_81, PLAYER::PLAYER_PED_ID(), 0, 16);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_82) && !PED::IS_PED_DEAD_OR_DYING(iLocal_82, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82, 0);
TASK::TASK_COMBAT_PED(iLocal_82, PLAYER::PLAYER_PED_ID(), 0, 16);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !PED::IS_PED_DEAD_OR_DYING(iLocal_83, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, 0);
TASK::TASK_COMBAT_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 0, 16);
}}

int func_42(int iParam0){
return func_43(iParam0, 1, 1);
}

int func_43(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_49()==0){
return MISC::IS_BIT_SET(func_44(func_48(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_44(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_45(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__45(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_46(uParam1));
}

int func_46(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_47();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


var func__47(){
return Global_1574918;
}

int func_48(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 12514;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
case 58:
return 11433;
break;
case 59:
return 11844;
break;
case 60:
return 11901;
break;
default:
break;
}
return 14385;
}

int func_49(){
return Global_32283;
}

int func_50(int iParam0, bool bParam1){
int iVar0;
iVar0=func_51(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_65(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_51(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44123[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_52(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_51(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}


void func_53(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_54(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_52(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_55(var uParam0){
return 1;
}


void func_56(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

int func_57(int iParam0){
var uVar0;
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
return uVar0;
case 1:
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
return uVar0;
case 2:
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
return uVar0;
default:
}
return 0;
}

int func_58(){
func_59();
return Global_113810.f_2366.f_539.f_4321;
}


void func_59(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_62(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_61(PLAYER::PLAYER_PED_ID());
if(func_60(iVar0) && (!func_86(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_60(Global_113810.f_2366.f_539.f_4321)){
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


bool func_60(int iParam0){
return iParam0 < 3;
}

int func_61(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_62(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_62(int iParam0){
if(func_60(iParam0)){
return func_63(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__63(int iParam0){
return Global_2058[iParam0 /*29*/];
}


var func__64(){
return Global_75816;
}

int func_65(int iParam0){
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


var func__66(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


bool func_67(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_68(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_69(bool bParam0){
if(bParam0){
return (Global_23251.f_4 && Global_23251.f_104==4);
}
return Global_23251.f_4;
}

int func_70(){
return 1;
}


void func_71(var uParam0, int iParam1){
func_72(uParam0, iParam1);
}


void func_72(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_73(){
int iVar0;
bool bVar1;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(((iVar0==0 || iVar0==joaat("weapon_unarmed")) || iVar0==joaat("weapon_electric_fence")) || iVar0==joaat("gadget_parachute")){
bVar1=false;
}else{
bVar1=true;
}
if(bVar1){}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}
return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_74(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_58();
if(!func_60(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_112857) || Global_32286) || func_80()) || func_66(8, -1)) || func_79()) || func_78()) || func_77()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_81()) || Global_32286) || func_80()) || func_66(8, -1)) || func_77()) || func_79()) || func_78()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_112857) || Global_32286) || func_80()) || func_66(8, -1)) || func_77()) || func_79()) || func_78()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_112857) || Global_32286) || func_80()) || func_66(8, -1)) || func_79()) || func_78()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_81() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_66(8, -1)) || func_68()) || func_76()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_66(8, -1) || func_79()) || func_78()) || func_76()) || func_75()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_81()) || Global_32286) || func_80()) || func_66(8, -1)) || func_78()) || func_77()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_81()) || func_78()) || Global_112857) || Global_32286) || func_80()) || Global_44569) || func_66(8, -1)) || func_77()) || func_76()) || func_68()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_81()) || Global_112857) || Global_32286) || func_80()) || func_66(8, -1)) || func_77()) || func_76()) || func_79()) || func_78()) || func_68()){
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


var func__75(){
return Global_100872.f_1;
}

int func_76(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_77(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_78(){
return Global_100885.f_394 > 0;
}


bool func_79(){
return Global_100885.f_393 > 0;
}


var func__80(){
return Global_1575063;
}

int func_81(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_82(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0){
return 1;
}
return 0;
}


var func__83(){
return Global_96645;
}

int func_84(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_86(6) || func_86(7)){
return 1;
}else{
return func_84(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_99(5)){
if(func_74(4)){
return 1;
}}
break;
}
return 0;
}


bool func_85(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19);
}


bool func_86(int iParam0){
return Global_43377==iParam0;
}


void func_87(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_88(){
struct<3> Var0;
float fVar1;
var uVar2;
if(bLocal_91){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar1=vdist2(Var0, Local_54);
if(fVar1 > 225f){
if(iLocal_96==0){
uVar2=INTERIOR::GET_INTERIOR_AT_COORDS(8.4083f, -1095.428f, 28.8554f);
}else{
uVar2=INTERIOR::GET_INTERIOR_AT_COORDS(824.3015f, -2162.983f, 30.906f);
}
if(INTERIOR::IS_VALID_INTERIOR(uVar2)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(uVar2);
while (!INTERIOR::IS_INTERIOR_READY(uVar2)){
wait(0);
}
INTERIOR::UNPIN_INTERIOR(uVar2);
}
if(iLocal_96==0){
iLocal_81=PED::CREATE_PED(26, iLocal_78, 8.4083f, -1095.428f, 28.8554f, 336.03f, 1, 1);
iLocal_82=PED::CREATE_PED(26, iLocal_79, 10.1096f, -1096.135f, 28.8554f, 336.03f, 1, 1);
iLocal_83=PED::CREATE_PED(26, iLocal_80, 13.7f, -1097.7f, 28.9f, 336.03f, 1, 1);
}else{
iLocal_81=PED::CREATE_PED(26, iLocal_78, 817.0285f, -2163.657f, 28.6569f, 178.1556f, 1, 1);
iLocal_82=PED::CREATE_PED(26, iLocal_79, 819.0791f, -2163.743f, 28.6568f, 187.0609f, 1, 1);
iLocal_83=PED::CREATE_PED(26, iLocal_80, 821.4587f, -2163.616f, 28.6567f, 179.3586f, 1, 1);
}
func_90(iLocal_81, &uLocal_84, &uLocal_87);
func_90(iLocal_82, &uLocal_85, &uLocal_88);
func_90(iLocal_83, &uLocal_86, &uLocal_89);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("weapon_pistol"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_82, joaat("weapon_combatpistol"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_83, joaat("weapon_pistol"), -1, 1, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_81, 1, 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_82, 1, 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_83, 1, 0);
PED::ADD_RELATIONSHIP_GROUP("range_IGNORE", &iLocal_97);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_81, iLocal_97);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_82, iLocal_97);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_83, iLocal_97);
PED::SET_PED_ACCURACY(iLocal_81, 20);
PED::SET_PED_ACCURACY(iLocal_82, 10);
PED::SET_PED_ACCURACY(iLocal_83, 15);
PED::SET_PED_STRAFE_CLIPSET(iLocal_81, "move_ped_strafing");
PED::SET_PED_STRAFE_CLIPSET(iLocal_82, "move_ped_strafing");
PED::SET_PED_STRAFE_CLIPSET(iLocal_83, "move_ped_strafing");
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), iLocal_97);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), iLocal_97);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("COP"), iLocal_97);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_97, joaat("CIVMALE"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_97, joaat("CIVFEMALE"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_97, joaat("COP"));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_81, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, 1);
func_89(0);
func_89(1);
func_89(2);
TASK::TASK_STAND_STILL(iLocal_81, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_81, 1);
iLocal_92=0;
TASK::TASK_STAND_STILL(iLocal_82, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_82, 1);
iLocal_93=0;
TASK::TASK_STAND_STILL(iLocal_83, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 1);
iLocal_94=0;
PED::SET_PED_RESET_FLAG(iLocal_81, 71, 1);
PED::SET_PED_RESET_FLAG(iLocal_82, 71, 1);
PED::SET_PED_RESET_FLAG(iLocal_83, 71, 1);
iLocal_90=1;
}else{
iLocal_90=0;
}}else{
iLocal_90=0;
}}


void func_89(int iParam0){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
struct<3> Var12;
fVar0=0.4f;
fVar1=0.2f;
fVar2=0.5f;
if(iLocal_96==0){
fVar3=-0.5f;
fVar4=-0.2f;
fVar5=0.5f;
Var8={
Vector(31.58f, -1081.513f, 16.475f) - Vector(31.58f, -1092.35f, 12.617f) 
};
Var9={
Vector(31.58f, -1094.09f, 17.325f) - Vector(31.58f, -1092.35f, 12.617f) 
};
Var10={
Vector(31.58f, -1092.35f, 12.617f) + Var9 * Vector(fVar3, fVar3, fVar3) 
};
Var11={
Vector(31.58f, -1092.35f, 12.617f) + Var9 * Vector(fVar4, fVar4, fVar4) 
};
Var12={
Vector(31.58f, -1092.35f, 12.617f) + Var9 * Vector(fVar5, fVar5, fVar5) 
};
}else{
fVar3=1.35f;
fVar4=1.05f;
fVar5=0.5f;
Var8={
Vector(31.347f, -2179.773f, 824.3217f) - Vector(31.347f, -2168.039f, 824.2375f) 
};
Var9={
Vector(32.3f, -2168.008f, 819.2051f) - Vector(32.3f, -2168.039f, 824.2375f) 
};
Var10={
Vector(31.347f, -2168.039f, 824.2375f) + Var9 * Vector(fVar3, fVar3, fVar3) 
};
Var11={
Vector(31.347f, -2168.039f, 824.2375f) + Var9 * Vector(fVar4, fVar4, fVar4) 
};
Var12={
Vector(31.347f, -2168.039f, 824.2375f) + Var9 * Vector(fVar5, fVar5, fVar5) 
};
}
if(iParam0==0){
Var6={
Var8 * Vector(fVar0, fVar0, fVar0) 
};
Var7={
Var10 + Var6 
};
}elseif(iParam0==1){
Var6={
Var8 * Vector(fVar1, fVar1, fVar1) 
};
Var7={
Var11 + Var6 
};
}else{
Var6={
Var8 * Vector(fVar2, fVar2, fVar2) 
};
Var7={
Var12 + Var6 
};
}
Local_98[iParam0 /*6*/]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_backboard_b"), Var7, 1, 1, 0);
Local_98[iParam0 /*6*/].f_1=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_bull_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98[iParam0 /*6*/].f_1, Local_98[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_98[iParam0 /*6*/].f_2=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner1"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98[iParam0 /*6*/].f_2, Local_98[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_98[iParam0 /*6*/].f_3=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner2_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98[iParam0 /*6*/].f_3, Local_98[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_98[iParam0 /*6*/].f_4=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner3_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98[iParam0 /*6*/].f_4, Local_98[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_98[iParam0 /*6*/].f_5=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_arm_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98[iParam0 /*6*/], Local_98[iParam0 /*6*/].f_5, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1, 0);
if(iLocal_96==0){
ENTITY::SET_ENTITY_ROTATION(Local_98[iParam0 /*6*/].f_5, 0f, 0f, 160f, 2, 1);
}else{
ENTITY::SET_ENTITY_ROTATION(Local_98[iParam0 /*6*/].f_5, 0f, 0f, 359f, 2, 1);
}
ENTITY::FREEZE_ENTITY_POSITION(Local_98[iParam0 /*6*/].f_5, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/], 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/].f_1, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/].f_2, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/].f_3, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/].f_4, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98[iParam0 /*6*/].f_5, 1);
}


void func_90(int iParam0, var uParam1, var uParam2){
*uParam1=OBJECT::CREATE_OBJECT(joaat("prop_ear_defenders_01"), ENTITY::GET_ENTITY_COORDS(uParam0, 1), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.111f, 0f, 0f, 0f, 90f, 0f, 0, 0, 0, 0, 2, 1, 0);
*uParam2=OBJECT::CREATE_OBJECT(joaat("prop_safety_glasses"), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam2, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.059f, 0.067f, 0f, 180f, 90f, 0f, 0, 0, 0, 0, 2, 1, 0);
}

int func_91(){
if(bLocal_91){
return func_92();
}
return 1;
}

int func_92(){
iLocal_78=joaat("g_m_m_chigoon_02");
iLocal_79=joaat("g_m_m_chigoon_02");
iLocal_80=joaat("g_m_m_chigoon_02");
STREAMING::REQUEST_MODEL(iLocal_78);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_78)){
return 0;
}
STREAMING::REQUEST_MODEL(iLocal_79);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_79)){
return 0;
}
STREAMING::REQUEST_MODEL(iLocal_80);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_80)){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_ear_defenders_01"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_ear_defenders_01"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_safety_glasses"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_safety_glasses"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_arm_b"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm_b"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_backboard_b"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_backboard_b"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_bull_b"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_bull_b"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_inner1"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_inner1"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_inner2_b"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_inner2_b"))){
return 0;
}
STREAMING::REQUEST_MODEL(joaat("prop_target_inner3_b"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_inner3_b"))){
return 0;
}
return 1;
}


void func_93(){
if(bLocal_91){
func_92();
}}


void func_94(int iParam0){
iLocal_57=iParam0;
}


void func_95(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}

int func_96(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_97(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}

int func_98(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
return iVar0;
}


bool func_99(int iParam0){
return func_100(iParam0, Global_43377);
}

int func_100(int iParam0, int iParam1){
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


bool func_101(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_102(){
StringCopy(&Local_49, "range_modern", 64);
sLocal_63="PLAY_RANGE";
fLocal_75=2f;
fLocal_64=(to_float(func_104(91)) + 5f);
iLocal_61=11;
if(func_98(0, iLocal_61)){
func_95(91, 1, 0);
func_95(92, 1, 0);
bLocal_91=true;
}else{
bLocal_91=false;
}
if(vdist(6.594f, -1100.162f, 28.797f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 50f){
iLocal_96=0;
if(!func_103(28)){
bLocal_91=false;
}}else{
iLocal_96=1;
if(!func_103(38)){
bLocal_91=false;
}}
iLocal_77=14;
iLocal_59=57500;
}


bool func_103(int iParam0){
return func_43(iParam0, 0, 1);
}

int func_104(int iParam0){
switch (iParam0){
case 91:
case 92:
case 110:
case 111:
return 20;
break;
case 66:
case 67:
case 76:
case 107:
case 108:
case 109:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
case 103:
case 129:
case 130:
case 131:
case 133:
case 137:
return 100;
break;
case 125:
case 126:
case 127:
case 128:
case 132:
case 134:
case 135:
case 136:
case 68:
case 69:
case 95:
case 70:
case 71:
case 73:
case 74:
case 75:
case 72:
return 209;
break;
}
return -1;
}


void func_105(var uParam0, int iParam1){
func_106(uParam0, iParam1);
}


void func_106(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_107(bool bParam0){
if(bParam0){
if(iLocal_67 !=263){
func_95(iLocal_67, 0, 0);
}}
func_52(&iLocal_58);
if(func_101(uLocal_56, 2048)){
if(func_110(sLocal_63, iLocal_77)){
func_105(&uLocal_56, 2048);
HUD::CLEAR_HELP(0);
}}
if(func_101(uLocal_56, 2)){
func_4();
func_105(&uLocal_56, 2);
func_6(&iLocal_60);
}
iLocal_60=-1;
func_108();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_108(){
func_105(&uLocal_56, 4);
func_109();
if(SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_48, 3);
}
if(!MISC::IS_STRING_NULL(&Local_50)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_50) !=0){
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_50);
}}}


void func_109(){
}


bool func_110(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}