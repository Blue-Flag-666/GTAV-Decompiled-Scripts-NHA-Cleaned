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
var uLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
bool bLocal_85=0;
bool bLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
struct<2> Local_93={
0, 5 
};
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=5;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
#endregion

void __EntryFunction__(){
bool bVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
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
iLocal_79=-1;
iLocal_80=6;
iLocal_81=18;
bLocal_85=true;
Local_56={
ScriptParam_93.f_1[0 /*3*/] 
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
func_95(1);
}
uLocal_53=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_59=0;
func_93(&Global_112299, 0);
func_90();
if(func_89(uLocal_58, 1)){
iLocal_64=10;
}else{
iLocal_64=9;
}
while (!Global_38596){
wait(0);
}
if(!func_89(uLocal_58, 8)){
if(!func_87(iLocal_64)){
if(func_86(0, iLocal_63)){
func_95(0);
}else{
func_95(1);
}}}
if(iLocal_63 !=-1){
if(!func_86(0, iLocal_63)){
bLocal_78=false;
}}
if(func_89(uLocal_58, 8388608)){
func_95(1);
}
if(func_89(uLocal_58, 524288) && (func_85() && !func_84())){
func_95(1);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_89(uLocal_58, 4194304)){
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
iLocal_69=263;
}
func_82(10);
}
while (true){
uLocal_53=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_89(uLocal_58, 1048576)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_53, 0)){
func_95(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0)){
Local_55={
ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) 
};
fLocal_57=vdist2(Local_55, ScriptParam_93.f_1[0 /*3*/]);
fLocal_57=fLocal_57;
Local_75={
Local_55 
};
Local_76={
ScriptParam_93.f_1[0 /*3*/] 
};
Local_75.f_2=0f;
Local_76.f_2=0f;
fLocal_74=vdist2(Local_75, Local_76);
switch (iLocal_59){
case 0:
if(func_87(iLocal_64) || (func_89(uLocal_58, 16) && !func_89(uLocal_58, 524288))){
iLocal_62=-1;
func_81();
func_82(1);
}else{
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
iLocal_69=263;
}
func_82(10);
}
if((Local_55.f_2 - ScriptParam_93.f_1[0 /*3*/].f_2) > 500f){
}}
break;
case 1:
if(func_80()){
iLocal_67=iLocal_67;
func_82(3);
}else{
func_81();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_95(1);
return;
}
if(!func_87(iLocal_64)){
if(!func_89(uLocal_58, 8)){
bVar1=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &Local_52)){
Local_52={
Local_51 
};
bVar1=false;
}
if(bVar1){
func_95(0);
break;
}
}}
if(!func_89(uLocal_58, 4)){
func_79();
func_78(&uLocal_58, 4);
}
if(fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100715){
if(iLocal_69 !=263){
if(func_77(6) && !func_76(iLocal_69)){
}else{
func_83(iLocal_69, 1, 0);
iLocal_69=263;
}
}
func_82(10);
}else{
Local_52={
Local_51 
};
bVar2=!func_89(uLocal_58, 64);
func_93(&uLocal_58, 128);
if(!func_75(3) && !Global_100715){
if(func_89(uLocal_58, 2097152)){
if((!func_89(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(func_74())) && !Global_100715){
func_82(10);
break;
}}
}
if(func_89(uLocal_58, 524288) && (func_85() && !func_84())){
func_95(1);
}
if(func_73()){
func_95(1);
}
if((!func_64(6) || Global_112695) || func_63()){
bVar2=false;
}
if(!bLocal_78){
func_61(&uLocal_58, 128);
bVar2=false;
}
if(func_89(uLocal_58, 1)){
if(!func_60()){
func_61(&uLocal_58, 128);
bVar2=false;
}
}
if(func_59(1)){
bVar2=false;
}
if(Global_78558){
bVar2=false;
}
if(func_58()){
bVar2=false;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
bVar2=false;
}
if(func_57() || func_56(8, -1)){
bVar2=false;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(func_55(0) || func_54()){
bVar2=false;
}
if(bVar2){
if(!func_48(iLocal_79)){
func_61(&uLocal_58, 128);
bVar2=false;
}
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_93.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, 0, 1, iLocal_67)){
bVar2=false;
}
iVar3=CLOCK::GET_CLOCK_HOURS();
if(iLocal_80 > iLocal_81){
if(iVar3 < iLocal_80 && iVar3 >=iLocal_81){
func_61(&uLocal_58, 128);
bVar2=false;
if(fLocal_57 < ((fLocal_77 * fLocal_77) + 4f)){
if(!func_89(uLocal_58, 134217728)){
func_47("MG_NA_TIME", iLocal_80, iLocal_81);
func_61(&uLocal_58, 134217728);
}
}
else{
func_93(&uLocal_58, 134217728);
}}}elseif(iVar3 < iLocal_80 || iVar3 >=iLocal_81){
func_61(&uLocal_58, 128);
bVar2=false;
if(fLocal_57 < ((fLocal_77 * fLocal_77) + 4f)){
if(!func_89(uLocal_58, 134217728)){
func_47("MG_NA_TIME", iLocal_80, iLocal_81);
func_61(&uLocal_58, 134217728);
}}else{
func_93(&uLocal_58, 134217728);
}}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar2=false;
}
if(bVar2){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_46(uLocal_54)){
if(iLocal_60==-1){
func_45(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
func_61(&uLocal_58, 2048);
}
elseif(!func_89(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_44(&iLocal_60);
func_93(&uLocal_58, 2048);
}
if(func_42(iLocal_60, 1)){
sLocal_65=sLocal_65;
func_44(&iLocal_60);
func_93(&uLocal_58, 2048);
SCRIPT::REQUEST_SCRIPT(&Local_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_82(5);
}}else{
sLocal_65=sLocal_65;
func_44(&iLocal_60);
func_93(&uLocal_58, 2048);
SCRIPT::REQUEST_SCRIPT(&Local_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_82(5);
}}
}
if(!bVar2){
if(iLocal_60 !=-1){
func_44(&iLocal_60);
func_93(&uLocal_58, 2048);
HUD::CLEAR_HELP(0);
}
}}
func_40();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(SCRIPT::HAS_SCRIPT_LOADED(&Local_52)){
if(iLocal_60 !=-1){
func_44(&iLocal_60);
}
iVar4=2;
bVar0=false;
if(func_89(uLocal_58, 1)){
if(func_77(6) || func_77(7)){
iVar4=1;
bVar0=true;
}
}
if(iVar4 !=1){
iVar4=func_37(&iLocal_62, 6, iLocal_64, 0, 0);
}
if(iVar4==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
func_36();
if(Global_44446){
func_27(PLAYER::PLAYER_PED_ID());
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
uLocal_50=func_26();
func_93(&uLocal_58, 4);
func_25();
func_61(&uLocal_58, 2);
func_82(6);
func_21(&uLocal_71);
if(iLocal_63 !=-1){
func_20(iLocal_63);
func_17(func_19(iLocal_63), 0, 0);
}
}
elseif(iVar4==2){
func_16();
}
elseif(iVar4==0){
func_82(10);
}}else{
func_16();
}
break;
case 6:
if(!func_89(uLocal_58, 256)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
}
elseif(CAM::IS_SCREEN_FADED_OUT()){
func_61(&uLocal_58, 256);
}}
if(func_89(Global_112299, 262144)){
func_93(&Global_112299, 262144);
func_15();
}
if(func_89(uLocal_58, 2097152)){
if(!func_75(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
func_82(10);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
STATS::PLAYSTATS_ODDJOB_DONE(round((func_11(&uLocal_71) * 1000f)), iLocal_63, 0);
func_10(&uLocal_71);
func_93(&uLocal_58, 256);
func_7();
if(bVar0){
func_93(&uLocal_58, 2);
}
elseif(func_89(uLocal_58, 2)){
if(func_89(Global_112299, 0)){
func_6(&iLocal_62);
iLocal_62=-1;
func_93(&uLocal_58, 2);
}else{
func_6(&iLocal_62);
iLocal_62=-1;
func_93(&uLocal_58, 2);
}
}
func_82(0);
if(iLocal_63 !=-1){
if(func_89(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_100718, 0);
func_5(func_19(iLocal_63), 0, Global_100718, 1, 0);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_100718, 0);
func_5(func_19(iLocal_63), 0, Global_100718, 0, 0);
}
}
func_4();
func_93(&Global_112299, 0);
if(func_89(uLocal_58, 16777216)){
func_95(1);
}
if(iLocal_63 !=-1){
if(Global_113648.f_9087){
if(!func_86(0, iLocal_63)){
func_95(1);
}}
}}
func_3();
break;
case 8:
func_82(0);
break;
case 10:
func_95(1);
break;
case 9:
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
iLocal_69=263;
}
func_82(10);
}
break;
case 7:
func_2();
if(iLocal_69 !=263){
func_83(iLocal_69, 0, 0);
}
if(iLocal_60 !=-1){
func_44(&iLocal_60);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65)){
if(func_1(sLocal_65)){
HUD::CLEAR_HELP(1);
}}
func_82(4);
break;
case 4:
if((iLocal_68 % 150)==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_70==2){
if(iLocal_70==2){
if(func_87(iLocal_64) && func_86(0, iLocal_63)){
func_90();
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
}
func_82(0);
}}}elseif(iLocal_70==0){
if(fLocal_74 > (fLocal_66 * fLocal_66)){
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
iLocal_69=263;
}
func_82(10);
}}elseif(iLocal_70==1){
if(fLocal_74 > ((80f + 5f) * (80f + 5f))){
func_90();
if(iLocal_69 !=263){
func_83(iLocal_69, 1, 0);
}
func_82(0);
}}
}
else{
func_83(iLocal_69, 1, 0);
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
if(bLocal_85){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("journey"));
}}


void func_3(){
}


void func_4(){
if(bLocal_85){
iLocal_84=uLocal_82;
}}


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
if(bLocal_85){
if(bLocal_86){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_83);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_84)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_84);
}}}}

int func_26(){
struct<3> Var0;
int iVar1;
Var0=-1;
Var0.f_1=iLocal_84;
Var0.f_2=iLocal_83;
iVar1=start_new_script_with_args(&Local_51, &Var0, 3, iLocal_61);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
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
if(!func_87(iParam2)){
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
if(func_87(iParam0)){
return 0;
}
return 1;
}


void func_40(){
bool bVar0;
struct<3> Var1;
if((ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84, 0)) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_84)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_84, 2);
VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_84, 1);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_84, 0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_84, 1);
uLocal_82=iLocal_84;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)){
VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_83, 1);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_83, 1);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_83, 0, 0);
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_83, 1);
}}else{
if((ENTITY::DOES_ENTITY_EXIST(iLocal_84) && ENTITY::IS_ENTITY_DEAD(iLocal_84, 0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_84)){
func_41(0);
}
if((ENTITY::DOES_ENTITY_EXIST(iLocal_83) && ENTITY::IS_ENTITY_DEAD(iLocal_83, 0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_83)){
func_41(0);
}
if((iLocal_88 && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterIntro")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterOutro")){
STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterIntro");
STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterOutro");
iLocal_88=0;
}
return;
}
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return;
}
if(FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())){
return;
}
bVar0=false;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(vdist(-1702.695f, 4666.941f, 22.7091f, Var1) < 8f){
bVar0=true;
}}
if(bVar0){
STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterIntro");
STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterOutro");
iLocal_88=1;
}elseif((iLocal_88 && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterIntro")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterOutro")){
STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterIntro");
STREAMING::REMOVE_ANIM_DICT("oddjobs@hunterOutro");
iLocal_88=0;
}}


void func_41(int iParam0){
if(iParam0==2){}elseif(iParam0==0){}
iLocal_70=iParam0;
iLocal_68=0;
iLocal_59=7;
}

int func_42(int iParam0, bool bParam1){
int iVar0;
iVar0=func_43(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_55(0)){
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

int func_43(int iParam0){
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


void func_44(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_43(*iParam0);
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


void func_45(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_44(iParam0);
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

int func_46(var uParam0){
return 1;
}


void func_47(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, -1);
}


bool func_48(int iParam0){
func_49();
return iParam0==Global_113648.f_2365.f_539.f_4321;
}


void func_49(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_52(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_51(PLAYER::PLAYER_PED_ID());
if(func_50(iVar0) && (!func_77(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_50(Global_113648.f_2365.f_539.f_4321)){
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


bool func_50(int iParam0){
return iParam0 < 3;
}

int func_51(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_52(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_52(int iParam0){
if(func_50(iParam0)){
return func_53(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__53(int iParam0){
return Global_2028[iParam0 /*29*/];
}


var func__54(){
return Global_75693;
}

int func_55(int iParam0){
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


var func__56(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


bool func_57(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_58(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_59(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_60(){
return 1;
}


void func_61(var uParam0, int iParam1){
func_62(uParam0, iParam1);
}


void func_62(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_63(){
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

int func_64(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_72();
if(!func_50(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_112695) || Global_32166) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_67()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_71()) || Global_32166) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_112695) || Global_32166) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_71()) || Global_112695) || Global_32166) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_71() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_56(8, -1)) || func_58()) || func_66()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_56(8, -1) || func_69()) || func_68()) || func_66()) || func_65()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_71()) || Global_32166) || func_70()) || func_56(8, -1)) || func_68()) || func_67()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_71()) || func_68()) || Global_112695) || Global_32166) || func_70()) || Global_44446) || func_56(8, -1)) || func_67()) || func_66()) || func_58()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_71()) || Global_112695) || Global_32166) || func_70()) || func_56(8, -1)) || func_67()) || func_66()) || func_69()) || func_68()) || func_58()){
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


var func__65(){
return Global_100720.f_1;
}

int func_66(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_67(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_68(){
return Global_100733.f_388 > 0;
}


bool func_69(){
return Global_100733.f_387 > 0;
}


var func__70(){
return Global_1575060;
}

int func_71(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


var func__72(){
func_49();
return Global_113648.f_2365.f_539.f_4321;
}

int func_73(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0){
return 1;
}
return 0;
}


var func__74(){
return Global_96513;
}

int func_75(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_77(6) || func_77(7)){
return 1;
}else{
return func_75(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_87(5)){
if(func_64(4)){
return 1;
}}
break;
}
return 0;
}


bool func_76(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19);
}


bool func_77(int iParam0){
return Global_43257==iParam0;
}


void func_78(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_79(){
if(bLocal_85){
bLocal_86=true;
if(!iLocal_87){
MISC::CLEAR_AREA_OF_VEHICLES(-1702.46f, 4666.36f, 22.1255f, 10f, 0, 0, 0, 0, 0, 0, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_83)){
iLocal_83=VEHICLE::CREATE_VEHICLE(joaat("blazer"), -1707.434f, 4666.563f, 22.1095f, 323.2491f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_84)){
iLocal_84=VEHICLE::CREATE_VEHICLE(joaat("journey"), -1702.695f, 4666.941f, 22.7091f, 80.03f, 1, 1, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_84, 1);
}
iLocal_87=1;
}}}

int func_80(){
if(bLocal_85){
return (STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && STREAMING::HAS_MODEL_LOADED(joaat("journey")));
}
return 1;
}


void func_81(){
if(bLocal_85){
STREAMING::REQUEST_MODEL(joaat("blazer"));
STREAMING::REQUEST_MODEL(joaat("journey"));
}}


void func_82(int iParam0){
iLocal_59=iParam0;
}


void func_83(int iParam0, bool bParam1, bool bParam2){
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

int func_84(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_85(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
}
return 0;
}

int func_86(int iParam0, int iParam1){
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


bool func_87(int iParam0){
return func_88(iParam0, Global_43257);
}

int func_88(int iParam0, int iParam1){
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


bool func_89(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_90(){
StringCopy(&Local_51, "hunting_ambient", 64);
iLocal_63=3;
iLocal_79=2;
sLocal_65="PLAY_HUNT";
iLocal_80=5;
iLocal_81=19;
fLocal_77=2f;
iLocal_69=69;
fLocal_66=(to_float(func_92(iLocal_69)) + 5f);
if(!func_86(0, 3)){
func_91(iLocal_69);
bLocal_85=false;
}
iLocal_61=54000;
}


void func_91(int iParam0){
if(iLocal_59 < 5){
if(iParam0 !=263){
if(iParam0 < 0 || iParam0 >=263){
}
func_83(iParam0, 0, 0);
}
iLocal_69=263;
func_44(&iLocal_60);
iLocal_59=9;
}}

int func_92(int iParam0){
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


void func_93(var uParam0, int iParam1){
func_94(uParam0, iParam1);
}


void func_94(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_95(bool bParam0){
if(bParam0){
if(iLocal_69 !=263){
func_83(iLocal_69, 0, 0);
}}
func_44(&iLocal_60);
if(func_89(uLocal_58, 2)){
func_4();
func_93(&uLocal_58, 2);
func_6(&iLocal_62);
}
iLocal_62=-1;
func_96();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_96(){
func_93(&uLocal_58, 4);
func_97();
if(SCRIPT::IS_THREAD_ACTIVE(uLocal_50)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_50, 3);
}
if(!MISC::IS_STRING_NULL(&Local_52)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) !=0){
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
}}}


void func_97(){
}