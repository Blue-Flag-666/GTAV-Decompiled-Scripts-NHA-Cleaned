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
int iLocal_50=0;
struct<16> Local_51={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
char cLocal_52[64]="";
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
int iLocal_61=0;
var uLocal_62=0;
struct<3> Local_63={
0, 0, 0 
};
struct<3> Local_64={
0, 0, 0 
};
float fLocal_65=0f;
var uLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
char* sLocal_73=NULL;
float fLocal_74=0f;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
float fLocal_82=0f;
struct<3> Local_83={
0, 0, 0 
};
struct<3> Local_84={
0, 0, 0 
};
float fLocal_85=0f;
int iLocal_86=0;
int iLocal_87=0;
struct<6> Local_88={
0, 0, 0, 0, 0, 0 
};
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
struct<2> Local_95={
0, 5 
};
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
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=5;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
#endregion

void __EntryFunction__(){
bool bVar0;
float fVar1;
bool bVar2;
bool bVar3;
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
iLocal_68=-1;
iLocal_69=2050;
iLocal_70=-1;
iLocal_71=-1;
sLocal_73="CC_SUBSTR";
fLocal_74=125f;
iLocal_75=1;
iLocal_77=263;
fLocal_85=4f;
iLocal_86=-1;
Local_64={
ScriptParam_95.f_1[0 /*3*/] 
};
Local_64={
Local_64 
};
uLocal_62=uLocal_62;
cLocal_52={
cLocal_52 
};
bVar0=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_91(1);
}
uLocal_61=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_67=0;
func_89(&Global_112299, 0);
func_87();
if(func_86(uLocal_66, 1)){
iLocal_72=10;
}else{
iLocal_72=9;
}
while (!Global_38596){
wait(0);
}
if(!func_86(uLocal_66, 8)){
if(!func_84(iLocal_72)){
if(func_83(0, iLocal_71)){
func_91(0);
}else{
func_91(1);
}}}
if(iLocal_71 !=-1){
if(!func_83(0, iLocal_71)){
func_91(1);
}}
if(func_86(uLocal_66, 8388608)){
func_91(1);
}
if(func_86(uLocal_66, 524288) && (func_82() && !func_81())){
func_91(1);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_86(uLocal_66, 4194304)){
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
iLocal_77=263;
}
func_79(10);
}
while (true){
if(!func_86(uLocal_66, 268435456)){
fVar1=0f;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_95.f_1[0 /*3*/], &fVar1, 0, 0)){
if(fVar1 !=0f){
ScriptParam_95.f_1[0 /*3*/].f_2=fVar1;
func_78(&uLocal_66, 268435456);
}}}
uLocal_61=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_86(uLocal_66, 1048576)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_61, 0)){
func_91(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_61) && !ENTITY::IS_ENTITY_DEAD(iLocal_61, 0)){
Local_63={
ENTITY::GET_ENTITY_COORDS(iLocal_61, 1) 
};
fLocal_65=vdist2(Local_63, ScriptParam_95.f_1[0 /*3*/]);
fLocal_65=fLocal_65;
Local_83={
Local_63 
};
Local_84={
ScriptParam_95.f_1[0 /*3*/] 
};
Local_83.f_2=0f;
Local_84.f_2=0f;
fLocal_82=vdist2(Local_83, Local_84);
switch (iLocal_67){
case 0:
if(func_84(iLocal_72) || (func_86(uLocal_66, 16) && !func_86(uLocal_66, 524288))){
iLocal_70=-1;
func_77();
func_79(1);
}else{
if(fLocal_82 > (fLocal_74 * fLocal_74)){
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
iLocal_77=263;
}
func_79(10);
}
if((Local_63.f_2 - ScriptParam_95.f_1[0 /*3*/].f_2) > 500f){
}}
break;
case 1:
if(func_76()){
iLocal_75=iLocal_75;
func_79(3);
}else{
func_77();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_91(1);
return;
}
if(!func_84(iLocal_72)){
if(!func_86(uLocal_66, 8)){
bVar2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &cLocal_52)){
cLocal_52={
Local_51 
};
bVar2=false;
}
if(bVar2){
func_91(0);
break;
}
}}
if(!func_86(uLocal_66, 4)){
func_75();
func_78(&uLocal_66, 4);
}
if(fLocal_82 > (fLocal_74 * fLocal_74) && !Global_100715){
if(iLocal_77 !=263){
if(func_74(6) && !func_73(iLocal_77)){
}else{
func_80(iLocal_77, 1, 0);
iLocal_77=263;
}
}
func_79(10);
}else{
cLocal_52={
Local_51 
};
bVar3=!func_86(uLocal_66, 64);
func_89(&uLocal_66, 128);
if(!func_72(3) && !Global_100715){
if(func_86(uLocal_66, 2097152)){
if((!func_86(uLocal_66, 1) || !ENTITY::DOES_ENTITY_EXIST(func_71())) && !Global_100715){
func_79(10);
break;
}}
}
if(func_86(uLocal_66, 524288) && (func_82() && !func_81())){
func_91(1);
}
if(func_70()){
func_91(1);
}
if((!func_61(6) || Global_112695) || func_60()){
bVar3=false;
}
if(func_86(uLocal_66, 1)){
if(!func_59()){
func_57(&uLocal_66, 128);
bVar3=false;
}
}
if(func_56(1)){
bVar3=false;
}
if(Global_78558){
bVar3=false;
}
if(func_55()){
bVar3=false;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
bVar3=false;
}
if(func_54() || func_53(8, -1)){
bVar3=false;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(func_52(0) || func_51()){
bVar3=false;
}
if(bVar3){
if(!func_45(iLocal_86)){
func_57(&uLocal_66, 128);
bVar3=false;
}
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_61, ScriptParam_95.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, 0, 1, iLocal_75)){
bVar3=false;
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(bVar3){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_44(uLocal_62)){
if(iLocal_68==-1){
func_43(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
func_57(&uLocal_66, 2048);
}
elseif(!func_86(uLocal_66, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_42(&iLocal_68);
func_89(&uLocal_66, 2048);
}
if(func_40(iLocal_68, 1)){
sLocal_73=sLocal_73;
func_42(&iLocal_68);
func_89(&uLocal_66, 2048);
SCRIPT::REQUEST_SCRIPT(&cLocal_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_79(5);
}}else{
sLocal_73=sLocal_73;
func_42(&iLocal_68);
func_89(&uLocal_66, 2048);
SCRIPT::REQUEST_SCRIPT(&cLocal_52);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_79(5);
}}
}
if(!bVar3){
if(iLocal_68 !=-1){
func_42(&iLocal_68);
func_89(&uLocal_66, 2048);
HUD::CLEAR_HELP(0);
}
}}
func_39();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(SCRIPT::HAS_SCRIPT_LOADED(&cLocal_52)){
if(iLocal_68 !=-1){
func_42(&iLocal_68);
}
iVar4=2;
bVar0=false;
if(func_86(uLocal_66, 1)){
if(func_74(6) || func_74(7)){
iVar4=1;
bVar0=true;
}
}
if(iVar4 !=1){
iVar4=func_36(&iLocal_70, 6, iLocal_72, 0, 0);
}
if(iVar4==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
func_35();
if(Global_44446){
func_26(PLAYER::PLAYER_PED_ID());
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
iLocal_50=start_new_script(&cLocal_52, iLocal_69);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
Local_51={
cLocal_52 
};
StringCopy(&cLocal_52, "", 64);
func_89(&uLocal_66, 4);
func_25();
func_57(&uLocal_66, 2);
func_79(6);
func_21(&uLocal_79);
if(iLocal_71 !=-1){
func_20(iLocal_71);
func_17(func_19(iLocal_71), 0, 0);
}
}
elseif(iVar4==2){
func_16();
}
elseif(iVar4==0){
func_79(10);
}}else{
func_16();
}
break;
case 6:
if(!func_86(uLocal_66, 256)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
}
elseif(CAM::IS_SCREEN_FADED_OUT()){
func_57(&uLocal_66, 256);
}}
if(func_86(Global_112299, 262144)){
func_89(&Global_112299, 262144);
func_15();
}
if(func_86(uLocal_66, 2097152)){
if(!func_72(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50)){
func_79(10);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_50)){
STATS::PLAYSTATS_ODDJOB_DONE(round((func_11(&uLocal_79) * 1000f)), iLocal_71, 0);
func_10(&uLocal_79);
func_89(&uLocal_66, 256);
func_7();
if(bVar0){
func_89(&uLocal_66, 2);
}
elseif(func_86(uLocal_66, 2)){
if(func_86(Global_112299, 0)){
func_6(&iLocal_70);
iLocal_70=-1;
func_89(&uLocal_66, 2);
}else{
func_6(&iLocal_70);
iLocal_70=-1;
func_89(&uLocal_66, 2);
}
}
func_79(0);
if(iLocal_71 !=-1){
if(func_86(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_71), 0, Global_100718, 0);
func_5(func_19(iLocal_71), 0, Global_100718, 1, 0);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_71), 0, Global_100718, 0);
func_5(func_19(iLocal_71), 0, Global_100718, 0, 0);
}
}
func_4();
func_89(&Global_112299, 0);
if(func_86(uLocal_66, 16777216)){
func_91(1);
}
if(iLocal_71 !=-1){
if(Global_113648.f_9087){
if(!func_83(0, iLocal_71)){
func_91(1);
}}
}}
func_3();
break;
case 8:
func_79(0);
break;
case 10:
func_91(1);
break;
case 9:
if(fLocal_82 > (fLocal_74 * fLocal_74)){
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
iLocal_77=263;
}
func_79(10);
}
break;
case 7:
func_2();
if(iLocal_77 !=263){
func_80(iLocal_77, 0, 0);
}
if(iLocal_68 !=-1){
func_42(&iLocal_68);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_73)){
if(func_1(sLocal_73)){
HUD::CLEAR_HELP(1);
}}
func_79(4);
break;
case 4:
if((iLocal_76 % 150)==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_78==2){
if(iLocal_78==2){
if(func_84(iLocal_72) && func_83(0, iLocal_71)){
func_87();
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
}
func_79(0);
}}}elseif(iLocal_78==0){
if(fLocal_82 > (fLocal_74 * fLocal_74)){
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
iLocal_77=263;
}
func_79(10);
}}elseif(iLocal_78==1){
if(fLocal_82 > ((80f + 5f) * (80f + 5f))){
func_87();
if(iLocal_77 !=263){
func_80(iLocal_77, 1, 0);
}
func_79(0);
}}
}
else{
func_80(iLocal_77, 1, 0);
}}else{
iLocal_76++;
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
}


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
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88.f_1);
if(ENTITY::DOES_ENTITY_EXIST(Local_88.f_0)){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_88);
}}


void func_26(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_34(iParam0);
if(!iVar0==-1){
iVar1=Global_44232[iVar0 /*5*/];
func_29(1, iVar1, 1);
return;
}
iVar2=func_28(iParam0);
if(iVar2==-1){
return;
}
func_27(iVar2);
}


void func_27(int iParam0){
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

int func_28(int iParam0){
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


void func_29(int iParam0, int iParam1, int iParam2){
func_30(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
if(func_32(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_31();
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

int func_31(){
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

int func_32(int iParam0, int iParam1, int iParam2){
if(func_33(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_33(int iParam0, int iParam1, int iParam2){
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

int func_34(int iParam0){
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


void func_35(){
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

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_38(0)){
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
if(!func_84(iParam2)){
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
func_37(iParam0, iParam4);
}}
return 2;
}


void func_37(var uParam0, int iParam1){
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

int func_38(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_84(iParam0)){
return 0;
}
return 1;
}


void func_39(){
if(iLocal_87==1){
if(TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER")){
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), 1);
}}}

int func_40(int iParam0, bool bParam1){
int iVar0;
iVar0=func_41(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_52(0)){
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

int func_41(int iParam0){
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


void func_42(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_41(*iParam0);
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


void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_42(iParam0);
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

int func_44(var uParam0){
return 1;
}


bool func_45(int iParam0){
func_46();
return iParam0==Global_113648.f_2365.f_539.f_4321;
}


void func_46(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_49(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_48(PLAYER::PLAYER_PED_ID());
if(func_47(iVar0) && (!func_74(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_47(Global_113648.f_2365.f_539.f_4321)){
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


bool func_47(int iParam0){
return iParam0 < 3;
}

int func_48(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_49(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_49(int iParam0){
if(func_47(iParam0)){
return func_50(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__50(int iParam0){
return Global_2028[iParam0 /*29*/];
}


var func__51(){
return Global_75693;
}

int func_52(int iParam0){
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


var func__53(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


bool func_54(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_55(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_56(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}


void func_57(var uParam0, int iParam1){
func_58(uParam0, iParam1);
}


void func_58(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}

int func_59(){
return 1;
}


bool func_60(){
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

int func_61(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_69();
if(!func_47(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_68()) || Global_112695) || Global_32166) || func_67()) || func_53(8, -1)) || func_66()) || func_65()) || func_64()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_68()) || Global_32166) || func_67()) || func_53(8, -1)) || func_64()) || func_66()) || func_65()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_68()) || Global_112695) || Global_32166) || func_67()) || func_53(8, -1)) || func_64()) || func_66()) || func_65()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_68()) || Global_112695) || Global_32166) || func_67()) || func_53(8, -1)) || func_66()) || func_65()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_68() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_53(8, -1)) || func_55()) || func_63()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_53(8, -1) || func_66()) || func_65()) || func_63()) || func_62()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_68()) || Global_32166) || func_67()) || func_53(8, -1)) || func_65()) || func_64()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_68()) || func_65()) || Global_112695) || Global_32166) || func_67()) || Global_44446) || func_53(8, -1)) || func_64()) || func_63()) || func_55()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_68()) || Global_112695) || Global_32166) || func_67()) || func_53(8, -1)) || func_64()) || func_63()) || func_66()) || func_65()) || func_55()){
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


var func__62(){
return Global_100720.f_1;
}

int func_63(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_64(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_65(){
return Global_100733.f_388 > 0;
}


bool func_66(){
return Global_100733.f_387 > 0;
}


var func__67(){
return Global_1575060;
}

int func_68(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


var func__69(){
func_46();
return Global_113648.f_2365.f_539.f_4321;
}

int func_70(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0){
return 1;
}
return 0;
}


var func__71(){
return Global_96513;
}

int func_72(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_74(6) || func_74(7)){
return 1;
}else{
return func_72(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_84(5)){
if(func_61(4)){
return 1;
}}
break;
}
return 0;
}


bool func_73(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19);
}


bool func_74(int iParam0){
return Global_43257==iParam0;
}


void func_75(){
if(!ENTITY::DOES_ENTITY_EXIST(Local_88.f_0)){
Local_88.f_0=OBJECT::CREATE_OBJECT(Local_88.f_1, Local_88.f_2, 1, 1, 0);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_88.f_0, Local_88.f_2, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(Local_88.f_0, Local_88.f_5, 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(Local_88.f_0, 1);
}}

int func_76(){
if(!STREAMING::IS_MODEL_VALID(Local_88.f_1)){
return 0;
}
return STREAMING::HAS_MODEL_LOADED(Local_88.f_1);
}


void func_77(){
if(!STREAMING::IS_MODEL_VALID(Local_88.f_1)){
return;
}
STREAMING::REQUEST_MODEL(Local_88.f_1);
}


void func_78(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_79(int iParam0){
iLocal_67=iParam0;
}


void func_80(int iParam0, bool bParam1, bool bParam2){
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

int func_81(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_82(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
}
return 0;
}

int func_83(int iParam0, int iParam1){
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


bool func_84(int iParam0){
return func_85(iParam0, Global_43257);
}

int func_85(int iParam0, int iParam1){
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


bool func_86(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_87(){
StringCopy(&Local_51, "Yoga", 64);
sLocal_73="PLAY_YOGA";
iLocal_71=18;
fLocal_85=2.5f;
fLocal_74=20f;
iLocal_69=54000;
iLocal_87=func_88();
if(iLocal_87==0){
iLocal_77=110;
Local_88.f_2={
-791.0036f, 186.3552f, 71.8295f 
};
Local_88.f_5={
0f, 0f, -87.1403f 
};
Local_88.f_1=joaat("prop_yoga_mat_03");
}elseif(iLocal_87==1){
iLocal_77=111;
Local_88.f_2={
2861.47f, 5945.9f, 357.06f 
};
Local_88.f_5={
0f, -0.5f, 70f 
};
Local_88.f_1=joaat("prop_yoga_mat_03");
}
iLocal_86=0;
}

int func_88(){
struct<3> Var0;
struct<3> Var1[2];
float fVar2[2];
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1) 
};
Var1[0 /*3*/]={
-790.906f, 186.293f, 71.835f 
};
Var1[1 /*3*/]={
2862.15f, 5945.49f, 357.11f 
};
fVar2[0]=vdist2(Var0, Var1[0 /*3*/]);
fVar2[1]=vdist2(Var0, Var1[1 /*3*/]);
if(fVar2[0] < fVar2[1]){
return 0;
}else{
return 1;
}}
return 2;
}


void func_89(var uParam0, int iParam1){
func_90(uParam0, iParam1);
}


void func_90(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_91(bool bParam0){
if(bParam0){
if(iLocal_77 !=263){
func_80(iLocal_77, 0, 0);
}}
func_42(&iLocal_68);
if(func_86(uLocal_66, 2)){
func_4();
func_89(&uLocal_66, 2);
func_6(&iLocal_70);
}
iLocal_70=-1;
func_92();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_92(){
func_89(&uLocal_66, 4);
func_93();
if(SCRIPT::IS_THREAD_ACTIVE(iLocal_50)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
}
if(!MISC::IS_STRING_NULL(&cLocal_52)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_52) !=0){
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
}}}


void func_93(){
if(!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER")){
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), 0);
}}