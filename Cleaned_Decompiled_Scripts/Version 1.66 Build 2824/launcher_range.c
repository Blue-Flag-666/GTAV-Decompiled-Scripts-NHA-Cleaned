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
var uLocal_43=0;
var uLocal_44=0;
struct<3> Local_45={
0, 0, 0 
};
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
struct<16> Local_51={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_52={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_53=0;
var uLocal_54=0;
struct<3> Local_55={
0, 0, 0 
};
struct<3> Local_56={
0, 0, 0 
};
float fLocal_57=0f;
var uLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
char* sLocal_65=NULL;
float fLocal_66=0f;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
float fLocal_74=0f;
struct<3> Local_75={
0, 0, 0 
};
struct<3> Local_76={
0, 0, 0 
};
float fLocal_77=0f;
bool bLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
int iLocal_92=0;
bool bLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
int iLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
struct<6> Local_100[3];
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
struct<2> Local_105={
0, 5 
};
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
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=5;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
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
Local_45={
500f, 500f, 500f 
};
iLocal_60=-1;
iLocal_61=2050;
iLocal_62=-1;
iLocal_63=-1;
sLocal_65="CC_SUBSTR";
fLocal_66=125f;
iLocal_67=1;
iLocal_69=263;
fLocal_77=4f;
bLocal_78=true;
bLocal_93=true;
Local_56={
ScriptParam_105.f_1[0 /*3*/] 
};
Local_56={
Local_56 
};
uLocal_54=uLocal_54;
Local_52={
Local_52 
};
bVar0=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_106(1);
}
uLocal_53=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_59=0;
func_104(&Global_112299, 0);
func_101();
if(func_100(uLocal_58, 1)){
iLocal_64=10;
}else{
iLocal_64=9;
}
while (!Global_38596){
wait(0);
}
if(!func_100(uLocal_58, 8)){
if(!func_98(iLocal_64)){
if(func_97(0, iLocal_63)){
func_106(0);
}else{
func_106(1);
}}}
if(iLocal_63 !=-1){
if(!func_97(0, iLocal_63)){
bLocal_78=false;
}}
if(func_100(uLocal_58, 8388608)){
func_106(1);
}
if(func_100(uLocal_58, 524288) && (func_96() && !func_95())){
func_106(1);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_100(uLocal_58, 4194304)){
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
iLocal_69=263;
}
func_93(10);
}
while (true){
uLocal_53=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_100(uLocal_58, 1048576)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_53, 0)){
func_106(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0)){
Local_55={
ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) 
};
fLocal_57=vdist2(Local_55, ScriptParam_105.f_1[0 /*3*/]);
fLocal_57=fLocal_57;
Local_75={
Local_55 
};
Local_76={
ScriptParam_105.f_1[0 /*3*/] 
};
Local_75.f_2=0f;
Local_76.f_2=0f;
fLocal_74=vdist2(Local_75, Local_76);
switch (iLocal_59){
case 0:
if(func_98(iLocal_64) || (func_100(uLocal_58, 16) && !func_100(uLocal_58, 524288))){
iLocal_62=-1;
func_92();
func_93(1);
}else{
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
iLocal_69=263;
}
func_93(10);
}
if((Local_55.f_2 - ScriptParam_105.f_1[0 /*3*/].f_2) > 500f){
}}
break;
case 1:
if(func_90()){
iLocal_67=iLocal_67;
func_93(3);
}else{
func_92();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_106(1);
return;
}
if(!func_98(iLocal_64)){
if(!func_100(uLocal_58, 8)){
bVar1=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &Local_52)){
Local_52={
Local_51 
};
bVar1=false;
}
if(bVar1){
func_106(0);
break;
}
}}
if(!func_100(uLocal_58, 4)){
func_87();
func_86(&uLocal_58, 4);
}
if(fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100715){
if(iLocal_69 !=263){
if(func_85(6) && !func_84(iLocal_69)){
}else{
func_94(iLocal_69, 1, 0);
iLocal_69=263;
}
}
func_93(10);
}else{
Local_52={
Local_51 
};
bVar2=!func_100(uLocal_58, 64);
func_104(&uLocal_58, 128);
if(!func_83(3) && !Global_100715){
if(func_100(uLocal_58, 2097152)){
if((!func_100(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(func_82())) && !Global_100715){
func_93(10);
break;
}}
}
if(func_100(uLocal_58, 524288) && (func_96() && !func_95())){
func_106(1);
}
if(func_81()){
func_106(1);
}
if((!func_73(6) || Global_112695) || func_72()){
bVar2=false;
}
if(!bLocal_78){
func_70(&uLocal_58, 128);
bVar2=false;
}
if(func_100(uLocal_58, 1)){
if(!func_69()){
func_70(&uLocal_58, 128);
bVar2=false;
}
}
if(func_68(1)){
bVar2=false;
}
if(Global_78558){
bVar2=false;
}
if(func_67()){
bVar2=false;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
bVar2=false;
}
if(func_66() || func_65(8, -1)){
bVar2=false;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(func_64(0) || func_63()){
bVar2=false;
}
if(bVar2){
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_105.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, 0, 1, iLocal_67)){
bVar2=false;
}
if(bVar2 && func_56(func_57()) < iLocal_79){
func_70(&uLocal_58, 128);
bVar2=false;
if(!func_100(uLocal_58, 33554432)){
func_55("MG_YOU_IS_BROKE", iLocal_79, -1);
func_70(&uLocal_58, 33554432);
}}else{
func_104(&uLocal_58, 33554432);
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(bVar2){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_54(uLocal_54)){
if(iLocal_60==-1){
if(iLocal_79 > 0){
func_53(&iLocal_60, 4, "", 1, 0, 0, 0);
func_52(sLocal_65, iLocal_79);
func_70(&uLocal_58, 2048);
}
else{
func_53(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
func_70(&uLocal_58, 2048);
}
}
elseif(!func_100(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_51(&iLocal_60);
func_104(&uLocal_58, 2048);
}
if(func_49(iLocal_60, 1)){
sLocal_65=sLocal_65;
func_51(&iLocal_60);
func_104(&uLocal_58, 2048);
if(func_100(uLocal_58, 2048)){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_104(&uLocal_58, 2048);
HUD::CLEAR_HELP(0);
}
}
SCRIPT::REQUEST_SCRIPT(&Local_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_93(5);
}}else{
sLocal_65=sLocal_65;
func_51(&iLocal_60);
func_104(&uLocal_58, 2048);
if(func_100(uLocal_58, 2048)){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_104(&uLocal_58, 2048);
HUD::CLEAR_HELP(0);
}
}
SCRIPT::REQUEST_SCRIPT(&Local_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_93(5);
}}
}
if(!bVar2){
if(iLocal_60 !=-1){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_51(&iLocal_60);
func_104(&uLocal_58, 2048);
HUD::CLEAR_HELP(0);
}}
}}
func_40();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(SCRIPT::HAS_SCRIPT_LOADED(&Local_52)){
if(iLocal_60 !=-1){
func_51(&iLocal_60);
}
iVar3=2;
bVar0=false;
if(func_100(uLocal_58, 1)){
if(func_85(6) || func_85(7)){
iVar3=1;
bVar0=true;
}
}
if(iVar3 !=1){
iVar3=func_37(&iLocal_62, 6, iLocal_64, 0, 0);
}
if(iVar3==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
func_36();
if(Global_44446){
func_27(PLAYER::PLAYER_PED_ID());
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
uLocal_50=func_26();
func_104(&uLocal_58, 4);
func_25();
func_70(&uLocal_58, 2);
func_93(6);
func_21(&uLocal_71);
if(iLocal_63 !=-1){
func_20(iLocal_63);
func_17(func_19(iLocal_63), 0, 0);
}
}
elseif(iVar3==2){
func_16();
}
elseif(iVar3==0){
func_93(10);
}}else{
func_16();
}
break;
case 6:
if(!func_100(uLocal_58, 256)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
}
elseif(CAM::IS_SCREEN_FADED_OUT()){
func_70(&uLocal_58, 256);
}}
if(func_100(Global_112299, 262144)){
func_104(&Global_112299, 262144);
func_15();
}
if(func_100(uLocal_58, 2097152)){
if(!func_83(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
func_93(10);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
STATS::PLAYSTATS_ODDJOB_DONE(round((func_11(&uLocal_71) * 1000f)), iLocal_63, 0);
func_10(&uLocal_71);
func_104(&uLocal_58, 256);
func_7();
if(bVar0){
func_104(&uLocal_58, 2);
}
elseif(func_100(uLocal_58, 2)){
if(func_100(Global_112299, 0)){
func_6(&iLocal_62);
iLocal_62=-1;
func_104(&uLocal_58, 2);
}else{
func_6(&iLocal_62);
iLocal_62=-1;
func_104(&uLocal_58, 2);
}
}
func_93(0);
if(iLocal_63 !=-1){
if(func_100(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_100718, 0);
func_5(func_19(iLocal_63), 0, Global_100718, 1, 0);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_100718, 0);
func_5(func_19(iLocal_63), 0, Global_100718, 0, 0);
}
}
func_4();
func_104(&Global_112299, 0);
if(func_100(uLocal_58, 16777216)){
func_106(1);
}
if(iLocal_63 !=-1){
if(Global_113648.f_9087){
if(!func_97(0, iLocal_63)){
func_106(1);
}}
}}
func_3();
break;
case 8:
func_93(0);
break;
case 10:
func_106(1);
break;
case 9:
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
iLocal_69=263;
}
func_93(10);
}
break;
case 7:
func_2();
if(iLocal_69 !=263){
func_94(iLocal_69, 0, 0);
}
if(iLocal_60 !=-1){
func_51(&iLocal_60);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65)){
if(func_1(sLocal_65)){
HUD::CLEAR_HELP(1);
}}
func_93(4);
break;
case 4:
if((iLocal_68 % 150)==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_70==2){
if(iLocal_70==2){
if(func_98(iLocal_64) && func_97(0, iLocal_63)){
func_101();
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
}
func_93(0);
}}}elseif(iLocal_70==0){
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
iLocal_69=263;
}
func_93(10);
}}elseif(iLocal_70==1){
if(fLocal_74 > ((80f + 5f) * (80f + 5f))){
func_101();
if(iLocal_69 !=263){
func_94(iLocal_69, 1, 0);
}
func_93(0);
}}
}
else{
func_94(iLocal_69, 1, 0);
}}else{
iLocal_68++;
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
if(bLocal_93){
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
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
return;
}
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, 0, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94858);
StringCopy(&Global_97751, "", 64);
}


void func_6(int iParam0){
if(*iParam0==-1){
return;
}
if(!*iParam0==Global_43219){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, 0, 1, 0);
StringCopy(&Global_97751, "", 64);
}
StringCopy(&Global_97751, sParam0, 64);
STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
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
if(iLocal_92){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_86);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_87);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_88);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_89);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_90);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_91);
iVar0=0;
iVar0=0;
while (iVar0 <=2){
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/].f_1));
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/].f_4));
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/].f_3));
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/].f_2));
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/]));
OBJECT::DELETE_OBJECT(&(Local_100[iVar0 /*6*/].f_5));
iVar0++;
}
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_99);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_81);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ear_defenders_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_safety_glasses"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_arm_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_backboard_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_bull_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner1"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner2_b"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_target_inner3_b"));
}
iLocal_92=0;
}

int func_26(){
struct<10> Var0;
int iVar1;
Var0.f_1=iLocal_83;
Var0.f_2=iLocal_84;
Var0.f_3=iLocal_85;
Var0.f_4=uLocal_86;
Var0.f_5=uLocal_87;
Var0.f_6=uLocal_88;
Var0.f_7=uLocal_89;
Var0.f_8=uLocal_90;
Var0.f_9=uLocal_91;
Var0.f_0=iLocal_98;
iVar1=start_new_script_with_args(&Local_51, &Var0, 10, iLocal_61);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
PED::SET_PED_KEEP_TASK(iLocal_83, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_83);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84, 0)){
PED::SET_PED_KEEP_TASK(iLocal_84, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, 0)){
PED::SET_PED_KEEP_TASK(iLocal_85, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_85);
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
iVar1=Global_44232[iVar0 /*5*/];
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
if(!Global_44206[iParam0 /*5*/].f_1==0){
if(Global_44206[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()){
Global_44444=0;
}}
Global_44206[iParam0 /*5*/]=13;
Global_44206[iParam0 /*5*/].f_1=0;
Global_44206[iParam0 /*5*/].f_2=0;
Global_44206[iParam0 /*5*/].f_3=0;
Global_44206[iParam0 /*5*/].f_4=0;
Global_44204=(Global_44204 - 1);
if(Global_44204 < 0){
Global_44204=0;
}}

int func_29(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_44206[iVar0 /*5*/].f_1==iParam0){
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
Global_44313[iVar0 /*6*/]=iParam0;
Global_44313[iVar0 /*6*/].f_1=iParam1;
Global_44313[iVar0 /*6*/].f_2=iParam2;
Global_44313[iVar0 /*6*/].f_3=iParam3;
Global_44313[iVar0 /*6*/].f_4=iParam4;
Global_44313[iVar0 /*6*/].f_5=iParam5;
}

int func_32(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44313[iVar0 /*6*/].f_2==6){
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
if(iParam2==Global_44313[iVar0 /*6*/].f_2){
if(iParam0==Global_44313[iVar0 /*6*/]){
if(iParam1==Global_44313[iVar0 /*6*/].f_1){
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
if(!Global_44232[iVar0 /*5*/]==-1){
if(iParam0==Global_44232[iVar0 /*5*/].f_1){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_36(){
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2){
Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2){
Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2){
Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
}
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
}

int func_37(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_39(0)){
return 0;
}
Global_43221++;
*iParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23131.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43257=iParam2;
Global_43219=*iParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43218 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*iParam0){
return 2;
}
iVar0++;
}}elseif(Global_43219==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!func_98(iParam2)){
return 0;
}
if(Global_43218==8){
return 0;
}
Global_43221++;
*iParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218++;
if(iParam4 !=0){
func_38(iParam0, iParam4);
}}
return 2;
}


void func_38(var uParam0, int iParam1){
int iVar0;
if(Global_43218==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
Global_43224[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}

int func_39(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_98(iParam0)){
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
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !PED::IS_PED_INJURED(iLocal_83)){
PED::SET_PED_RESET_FLAG(iLocal_83, 71, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !PED::IS_PED_INJURED(iLocal_84)){
PED::SET_PED_RESET_FLAG(iLocal_84, 71, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !PED::IS_PED_INJURED(iLocal_85)){
PED::SET_PED_RESET_FLAG(iLocal_85, 71, 1);
}
if(bLocal_93){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 0);
PED::SET_PED_RESET_FLAG(iLocal_83, 62, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_84, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, 0);
PED::SET_PED_RESET_FLAG(iLocal_84, 62, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_85, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_85, 0);
PED::SET_PED_RESET_FLAG(iLocal_85, 62, 1);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
fVar1=vdist2(Var0, Local_56);
if(fVar1 < 400f){
if(!iLocal_94){
if((ENTITY::DOES_ENTITY_EXIST(Local_100[0 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_83)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_83, 1)){
PED::SET_PED_ACCURACY(iLocal_83, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_83, "move_ped_strafing");
if(iLocal_98==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[0 /*6*/].f_1, 1) - Vector(0.75f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[0 /*6*/].f_1, 1) - Vector(0.77f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 3000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 2000, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_83, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_94=1;
}}
if(!iLocal_95){
if((ENTITY::DOES_ENTITY_EXIST(Local_100[1 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_84)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_84, 1)){
PED::SET_PED_ACCURACY(iLocal_84, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_84, "move_ped_strafing");
if(iLocal_98==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[1 /*6*/].f_1, 1) - Vector(0.7f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[1 /*6*/].f_1, 1) - Vector(0.7f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 4000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 1000, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_95=1;
}}
if(!iLocal_96){
if((ENTITY::DOES_ENTITY_EXIST(Local_100[2 /*6*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_85)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_85, 1)){
PED::SET_PED_ACCURACY(iLocal_85, 20);
PED::SET_PED_STRAFE_CLIPSET(iLocal_85, "move_ped_strafing");
if(iLocal_98==0){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[2 /*6*/].f_1, 1) - Vector(0.8f, 0f, 0f) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(Local_100[2 /*6*/].f_1, 1) - Vector(0.68f, 0f, 0f) 
};
}
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_AIM_GUN_AT_COORD(0, Var3, 2000, 0, 0);
TASK::TASK_SHOOT_AT_COORD(0, Var3, 1500, joaat("FIRING_PATTERN_BURST_FIRE"));
TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
iLocal_96=1;
}}}else{
if(iLocal_94){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
TASK::TASK_STAND_STILL(iLocal_83, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 1);
}
iLocal_94=0;
}
if(iLocal_95){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_84, 0)){
TASK::TASK_STAND_STILL(iLocal_84, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, 1);
}
iLocal_95=0;
}
if(iLocal_96){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_85, 0)){
TASK::TASK_STAND_STILL(iLocal_85, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_85, 1);
}
iLocal_96=0;
}}}
if(iLocal_98==0){
iVar4=INTERIOR::GET_INTERIOR_AT_COORDS(13f, -1098f, 30f);
if(func_100(uLocal_58, 128)){
if(func_84(91)){
func_94(91, 0, 0);
}}elseif(!func_84(91)){
func_94(91, 1, 0);
}}else{
iVar4=INTERIOR::GET_INTERIOR_AT_COORDS(821f, -2162f, 30f);
if(func_100(uLocal_58, 128)){
if(func_84(92)){
func_94(92, 0, 0);
}}elseif(!func_84(92)){
func_94(92, 1, 0);
}}
iVar5=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(iVar5 !=iVar4){
func_70(&uLocal_58, 128);
}
if(func_42(28) || func_42(38)){
func_41();
func_70(&uLocal_58, 64);
func_70(&uLocal_58, 128);
}}


void func_41(){
if(iLocal_97){
return;
}
iLocal_97=1;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !PED::IS_PED_DEAD_OR_DYING(iLocal_83, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, 0);
TASK::TASK_COMBAT_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 0, 16);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !PED::IS_PED_DEAD_OR_DYING(iLocal_84, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, 0);
TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !PED::IS_PED_DEAD_OR_DYING(iLocal_85, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 0);
TASK::TASK_COMBAT_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 0, 16);
}}

int func_42(int iParam0){
return func_43(iParam0, 1, 1);
}

int func_43(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_48()==0){
return MISC::IS_BIT_SET(func_44(func_47(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_44(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_45(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_45(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_46();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


var func__46(){
return Global_1574918;
}

int func_47(int iParam0){
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
return 12385;
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
default:
break;
}
return 14192;
}

int func_48(){
return Global_32163;
}

int func_49(int iParam0, bool bParam1){
int iVar0;
iVar0=func_50(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_64(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]==1 && Global_44000[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44000[iVar0 /*32*/].f_29){
return 0;
}}
Global_44000[iVar0 /*32*/].f_5=1;
Global_44000[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44000[iVar0 /*32*/]==0){
}
if(Global_44000[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_50(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44000[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_51(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_50(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}


void func_52(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_53(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_51(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/]=1;
Global_44000[iVar0 /*32*/].f_1=Global_44201;
Global_44201++;
Global_44000[iVar0 /*32*/].f_4=0;
Global_44000[iVar0 /*32*/].f_29=0;
Global_44000[iVar0 /*32*/].f_5=0;
Global_44000[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
Global_44000[iVar0 /*32*/].f_6=iParam3;
Global_44000[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[iVar0 /*32*/].f_7=0;
Global_44000[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
Global_44000[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44000[iVar0 /*32*/].f_12=0;
Global_44000[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44000[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_54(var uParam0){
return 1;
}


void func_55(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

int func_56(int iParam0){
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

int func_57(){
func_58();
return Global_113648.f_2365.f_539.f_4321;
}


void func_58(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_61(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_60(PLAYER::PLAYER_PED_ID());
if(func_59(iVar0) && (!func_85(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_59(Global_113648.f_2365.f_539.f_4321)){
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


bool func_59(int iParam0){
return iParam0 < 3;
}

int func_60(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_61(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_61(int iParam0){
if(func_59(iParam0)){
return func_62(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__62(int iParam0){
return Global_2028[iParam0 /*29*/];
}


var func__63(){
return Global_75693;
}

int func_64(int iParam0){
if(iParam0==1){
if(Global_20383.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8253, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20383.f_1 > 3){
return 1;
}
return 0;
}


var func__65(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


bool func_66(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_67(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_68(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_69(){
return 1;
}


void func_70(var uParam0, int iParam1){
func_71(uParam0, iParam1);
}


void func_71(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_72(){
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

int func_73(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_57();
if(!func_59(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_80()) || Global_112695) || Global_32166) || func_79()) || func_65(8, -1)) || func_78()) || func_77()) || func_76()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_80()) || Global_32166) || func_79()) || func_65(8, -1)) || func_76()) || func_78()) || func_77()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_80()) || Global_112695) || Global_32166) || func_79()) || func_65(8, -1)) || func_76()) || func_78()) || func_77()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_80()) || Global_112695) || Global_32166) || func_79()) || func_65(8, -1)) || func_78()) || func_77()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_80() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_65(8, -1)) || func_67()) || func_75()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_65(8, -1) || func_78()) || func_77()) || func_75()) || func_74()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_80()) || Global_32166) || func_79()) || func_65(8, -1)) || func_77()) || func_76()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_80()) || func_77()) || Global_112695) || Global_32166) || func_79()) || Global_44446) || func_65(8, -1)) || func_76()) || func_75()) || func_67()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_80()) || Global_112695) || Global_32166) || func_79()) || func_65(8, -1)) || func_76()) || func_75()) || func_78()) || func_77()) || func_67()){
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


var func__74(){
return Global_100720.f_1;
}

int func_75(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_76(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_77(){
return Global_100733.f_388 > 0;
}


bool func_78(){
return Global_100733.f_387 > 0;
}


var func__79(){
return Global_1575060;
}

int func_80(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}

int func_81(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0){
return 1;
}
return 0;
}


var func__82(){
return Global_96513;
}

int func_83(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_85(6) || func_85(7)){
return 1;
}else{
return func_83(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_98(5)){
if(func_73(4)){
return 1;
}}
break;
}
return 0;
}


bool func_84(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19);
}


bool func_85(int iParam0){
return Global_43257==iParam0;
}


void func_86(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_87(){
struct<3> Var0;
float fVar1;
var uVar2;
if(bLocal_93){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar1=vdist2(Var0, Local_56);
if(fVar1 > 225f){
if(iLocal_98==0){
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
if(iLocal_98==0){
iLocal_83=PED::CREATE_PED(26, iLocal_80, 8.4083f, -1095.428f, 28.8554f, 336.03f, 1, 1);
iLocal_84=PED::CREATE_PED(26, iLocal_81, 10.1096f, -1096.135f, 28.8554f, 336.03f, 1, 1);
iLocal_85=PED::CREATE_PED(26, iLocal_82, 13.7f, -1097.7f, 28.9f, 336.03f, 1, 1);
}else{
iLocal_83=PED::CREATE_PED(26, iLocal_80, 817.0285f, -2163.657f, 28.6569f, 178.1556f, 1, 1);
iLocal_84=PED::CREATE_PED(26, iLocal_81, 819.0791f, -2163.743f, 28.6568f, 187.0609f, 1, 1);
iLocal_85=PED::CREATE_PED(26, iLocal_82, 821.4587f, -2163.616f, 28.6567f, 179.3586f, 1, 1);
}
func_89(iLocal_83, &uLocal_86, &uLocal_89);
func_89(iLocal_84, &uLocal_87, &uLocal_90);
func_89(iLocal_85, &uLocal_88, &uLocal_91);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_83, joaat("weapon_pistol"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_84, joaat("weapon_combatpistol"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_85, joaat("weapon_pistol"), -1, 1, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_83, 1, 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_84, 1, 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_85, 1, 0);
PED::ADD_RELATIONSHIP_GROUP("range_IGNORE", &iLocal_99);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_83, iLocal_99);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84, iLocal_99);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_85, iLocal_99);
PED::SET_PED_ACCURACY(iLocal_83, 20);
PED::SET_PED_ACCURACY(iLocal_84, 10);
PED::SET_PED_ACCURACY(iLocal_85, 15);
PED::SET_PED_STRAFE_CLIPSET(iLocal_83, "move_ped_strafing");
PED::SET_PED_STRAFE_CLIPSET(iLocal_84, "move_ped_strafing");
PED::SET_PED_STRAFE_CLIPSET(iLocal_85, "move_ped_strafing");
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), iLocal_99);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), iLocal_99);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("COP"), iLocal_99);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_99, joaat("CIVMALE"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_99, joaat("CIVFEMALE"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_99, joaat("COP"));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 1);
func_88(0);
func_88(1);
func_88(2);
TASK::TASK_STAND_STILL(iLocal_83, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_83, 1);
iLocal_94=0;
TASK::TASK_STAND_STILL(iLocal_84, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, 1);
iLocal_95=0;
TASK::TASK_STAND_STILL(iLocal_85, -1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_85, 1);
iLocal_96=0;
PED::SET_PED_RESET_FLAG(iLocal_83, 71, 1);
PED::SET_PED_RESET_FLAG(iLocal_84, 71, 1);
PED::SET_PED_RESET_FLAG(iLocal_85, 71, 1);
iLocal_92=1;
}else{
iLocal_92=0;
}}else{
iLocal_92=0;
}}


void func_88(int iParam0){
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
if(iLocal_98==0){
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
Local_100[iParam0 /*6*/]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_backboard_b"), Var7, 1, 1, 0);
Local_100[iParam0 /*6*/].f_1=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_bull_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_100[iParam0 /*6*/].f_1, Local_100[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_100[iParam0 /*6*/].f_2=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner1"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_100[iParam0 /*6*/].f_2, Local_100[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_100[iParam0 /*6*/].f_3=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner2_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_100[iParam0 /*6*/].f_3, Local_100[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_100[iParam0 /*6*/].f_4=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_inner3_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_100[iParam0 /*6*/].f_4, Local_100[iParam0 /*6*/], 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
Local_100[iParam0 /*6*/].f_5=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_target_arm_b"), Var7, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_100[iParam0 /*6*/], Local_100[iParam0 /*6*/].f_5, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1, 0);
if(iLocal_98==0){
ENTITY::SET_ENTITY_ROTATION(Local_100[iParam0 /*6*/].f_5, 0f, 0f, 160f, 2, 1);
}else{
ENTITY::SET_ENTITY_ROTATION(Local_100[iParam0 /*6*/].f_5, 0f, 0f, 359f, 2, 1);
}
ENTITY::FREEZE_ENTITY_POSITION(Local_100[iParam0 /*6*/].f_5, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/], 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/].f_1, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/].f_2, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/].f_3, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/].f_4, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_100[iParam0 /*6*/].f_5, 1);
}


void func_89(int iParam0, var uParam1, var uParam2){
*uParam1=OBJECT::CREATE_OBJECT(joaat("prop_ear_defenders_01"), ENTITY::GET_ENTITY_COORDS(uParam0, 1), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.111f, 0f, 0f, 0f, 90f, 0f, 0, 0, 0, 0, 2, 1, 0);
*uParam2=OBJECT::CREATE_OBJECT(joaat("prop_safety_glasses"), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam2, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.059f, 0.067f, 0f, 180f, 90f, 0f, 0, 0, 0, 0, 2, 1, 0);
}

int func_90(){
if(bLocal_93){
return func_91();
}
return 1;
}

int func_91(){
iLocal_80=joaat("g_m_m_chigoon_02");
iLocal_81=joaat("g_m_m_chigoon_02");
iLocal_82=joaat("g_m_m_chigoon_02");
STREAMING::REQUEST_MODEL(iLocal_80);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_80)){
return 0;
}
STREAMING::REQUEST_MODEL(iLocal_81);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_81)){
return 0;
}
STREAMING::REQUEST_MODEL(iLocal_82);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_82)){
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


void func_92(){
if(bLocal_93){
func_91();
}}


void func_93(int iParam0){
iLocal_59=iParam0;
}


void func_94(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32543[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}

int func_95(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_96(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
}
return 0;
}

int func_97(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return iVar0;
}


bool func_98(int iParam0){
return func_99(iParam0, Global_43257);
}

int func_99(int iParam0, int iParam1){
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


bool func_100(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_101(){
StringCopy(&Local_51, "range_modern", 64);
sLocal_65="PLAY_RANGE";
fLocal_77=2f;
fLocal_66=(to_float(func_103(91)) + 5f);
iLocal_63=11;
if(func_97(0, iLocal_63)){
func_94(91, 1, 0);
func_94(92, 1, 0);
bLocal_93=true;
}else{
bLocal_93=false;
}
if(vdist(6.594f, -1100.162f, 28.797f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 50f){
iLocal_98=0;
if(!func_102(28)){
bLocal_93=false;
}}else{
iLocal_98=1;
if(!func_102(38)){
bLocal_93=false;
}}
iLocal_79=14;
iLocal_61=54000;
}


bool func_102(int iParam0){
return func_43(iParam0, 0, 1);
}

int func_103(int iParam0){
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


void func_104(var uParam0, int iParam1){
func_105(uParam0, iParam1);
}


void func_105(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_106(bool bParam0){
if(bParam0){
if(iLocal_69 !=263){
func_94(iLocal_69, 0, 0);
}}
func_51(&iLocal_60);
if(func_100(uLocal_58, 2048)){
if(func_109(sLocal_65, iLocal_79)){
func_104(&uLocal_58, 2048);
HUD::CLEAR_HELP(0);
}}
if(func_100(uLocal_58, 2)){
func_4();
func_104(&uLocal_58, 2);
func_6(&iLocal_62);
}
iLocal_62=-1;
func_107();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_107(){
func_104(&uLocal_58, 4);
func_108();
if(SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_50, 3);
}
if(!MISC::IS_STRING_NULL(&Local_52)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) !=0){
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
}}}


void func_108(){
}


bool func_109(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}