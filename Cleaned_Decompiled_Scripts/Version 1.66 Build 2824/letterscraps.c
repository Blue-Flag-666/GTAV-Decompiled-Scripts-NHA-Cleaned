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
var uLocal_20=0;
char* sLocal_21=NULL;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
float fLocal_35=0f;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
bool bLocal_40=0;
bool bLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
struct<8> Local_44={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
struct<11> Local_50[50];
int iLocal_51=0;
char* sLocal_52=NULL;
int iLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
int iLocal_56=0;
char* sLocal_57[4]={
NULL, NULL, NULL, NULL 
};
int iLocal_58=0;
var uLocal_59=0;
int iLocal_60=0;
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
sLocal_21="NULL";
fLocal_24=0f;
fLocal_28=-0.0375f;
fLocal_29=0.17f;
fLocal_33=80f;
fLocal_34=140f;
fLocal_35=180f;
iLocal_38=3;
bLocal_40=true;
bLocal_41=true;
iLocal_51=4;
sLocal_52="id1_11_tunnel6_int";
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210)){
func_73();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("letterscraps")) > 1){
SCRIPT::TERMINATE_THIS_THREAD();
}
func_72(12);
if(func_71(106)==1){
func_70(12);
func_67(287, 0, 0);
func_66(106, 1);
func_65(168, 0);
func_73();
}
while (true){
wait(0);
func_64(PLAYER::PLAYER_PED_ID());
switch (iLocal_42){
case 0:
func_21();
break;
case 1:
func_1();
break;
}}}


void func_1(){
switch (iLocal_43){
case 0:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) > 0){
iLocal_43=2;
}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(CAM::IS_SCREEN_FADED_IN()){
if(!func_20()){
if(((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !func_14()) && !func_13()) && !func_12()){
iLocal_58=0;
iLocal_56=0;
sLocal_57[0]="LETTERS_PAGE_ONE";
sLocal_57[1]="LETTERS_PAGE_TWO";
sLocal_57[2]="LETTERS_PAGE_THREE";
sLocal_57[3]="LETTERS_PAGE_FOUR";
uLocal_55=GRAPHICS::REQUEST_SCALEFORM_MOVIE("LETTER_SCRAPS");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_55)){
wait(0);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_55, "SET_LETTER_TEXT");
func_11(sLocal_57[0]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
func_7(1);
func_6(1, 1, 1, 0);
HUD::DISPLAY_HELP_TEXT_THIS_FRAME("LETTERS_HELP2", 0);
MISC::SET_GAME_PAUSED(1);
HUD::DISPLAY_RADAR(0);
iLocal_43=1;
}}}}
break;
case 1:
func_3(0);
HUD::DISABLE_FRONTEND_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
if(iLocal_56 < 4){
if(!iLocal_58){
if(PAD::IS_CONTROL_PRESSED(2, 190)){
if(iLocal_56 >=0 && iLocal_56 < 3){
iLocal_56++;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_55, "SET_LETTER_TEXT");
func_11(sLocal_57[iLocal_56]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iLocal_58=1;
}elseif(PAD::IS_CONTROL_PRESSED(2, 189)){
if(iLocal_56 > 0 && iLocal_56 < 4){
iLocal_56=(iLocal_56 - 1);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_55, "SET_LETTER_TEXT");
func_11(sLocal_57[iLocal_56]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iLocal_58=1;
}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202)){
iLocal_43=2;
}}elseif(!func_2()){
iLocal_58=0;
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_55, 255, 255, 255, 255, 0);
}else{
iLocal_43=2;
}
break;
case 2:
HUD::DISPLAY_RADAR(1);
HUD::CLEAR_HELP(1);
func_6(0, 1, 1, 0);
func_70(12);
func_73();
break;
}}

int func_2(){
if((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 189)) || PAD::IS_CONTROL_PRESSED(2, 202)){
return 1;
}
return 0;
}


void func_3(int iParam0){
if(func_5()){
return;
}
if(!Global_20383.f_1==1){
if(func_4(0)){
func_7(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}

int func_4(int iParam0){
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


bool func_5(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_7(int iParam0){
if(func_5()){
return;
}
if(Global_20584){
if(func_10()){
func_9(1, 1);
}else{
func_9(0, 0);
}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21725=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 30);
}else{
MISC::CLEAR_BIT(&Global_8253, 30);
}
if(!func_8()){
Global_20383.f_1=3;
}}

int func_8(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_9(bool bParam0, bool bParam1){
if(bParam0){
if(func_4(0)){
Global_20584=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
}
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==1){
Global_20584=0;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}}


bool func_10(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


void func_11(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


bool func_12(){
return Global_1577844;
}

int func_13(){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
while (iVar1 <=9){
if(Global_2694420[iVar1] !=0){
Global_1577845=iVar1;
iVar0=1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_14(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_112300){
if(func_15(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_15(int iParam0){
int iVar0;
iVar0=iParam0;
if(!MISC::ARE_STRINGS_EQUAL(&(Global_112300[iParam0 /*28*/]), "") && !MISC::IS_STRING_NULL(&(Global_112300[iParam0 /*28*/]))){
if(MISC::IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 1)){
if(MISC::IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 2)){
return func_19(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4), Global_112300[iParam0 /*28*/].f_20);
}else{
return func_18(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4));
}}elseif(MISC::IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 2)){
return func_17(iVar0, &(Global_112300[iParam0 /*28*/]), Global_112300[iParam0 /*28*/].f_20);
}else{
return func_16(iVar0, &(Global_112300[iParam0 /*28*/]));
}}
return 0;
}


var func__16(int iParam0, var uParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}


var func__17(int iParam0, var uParam1, var uParam2){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}


var func__18(int iParam0, var uParam1, var uParam2){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}


var func__19(int iParam0, var uParam1, var uParam2, var uParam3){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_20(){
if(Global_43257==15){
return 0;
}
return 1;
}


void func_21(){
switch (iLocal_43){
case 0:
func_62();
func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
iLocal_43=1;
iLocal_60=1;
break;
case 1:
if(!func_58(14) && !CAM::IS_SCREEN_FADED_OUT()){
if(func_23(&Local_44, &Local_50) || uLocal_59){
iLocal_43=2;
}
if(Local_44.f_1.f_4==Local_44.f_1.f_3){
if(func_71(106)==0){
func_66(106, 1);
func_65(168, 0);
}}}
break;
case 2:
func_66(106, 1);
func_65(168, 0);
func_22(1);
break;
}}


void func_22(int iParam0){
iLocal_42=iParam0;
iLocal_43=0;
}

int func_23(var uParam0, int iParam1){
int iVar0;
bool bVar1;
struct<3> Var2;
bool bVar3;
bVar3=(!func_20() && !func_20());
PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
iVar0=0;
while (iVar0 < 1){
bVar1=func_57(&(uParam0->f_1), uParam0->f_10);
if(!(iParam1[uParam0->f_10 /*11*/])->f_10){
if(!bVar1){
if(((((((uParam0->f_10==1 || uParam0->f_10==5) || uParam0->f_10==7) || uParam0->f_10==13) || uParam0->f_10==18) || uParam0->f_10==20) || uParam0->f_10==37) || uParam0->f_10==42){
func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
}elseif(uParam0->f_10==iLocal_51){
func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
if(OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1)){
INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_52);
}}else{
func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
}}}elseif(!bVar1){
if(func_38(uParam0, iParam1, Var2)){
if(bVar3){
if(!func_37(33)){
func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
func_33(33);
}}}}
uParam0->f_10++;
if(uParam0->f_10 >=*iParam1){
uParam0->f_10=0;
}
iVar0++;
}
if(uParam0->f_11){
if(!Global_78819){
func_24(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_53, &uLocal_54, "LETTERS_TITLE", "LETTERS_COLLECT");
}}
if(!uParam0->f_12 && !uParam0->f_11){
return uParam0->f_1.f_4 >=uParam0->f_1.f_3;
}
return 0;
}


void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7){
var uVar0;
func_32(0);
if(*uParam0){
switch (*iParam4){
case 0:
*uParam5=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
uVar0=AUDIO::GET_SOUND_ID();
if(iParam3==6){
AUDIO::PLAY_SOUND_FRONTEND(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(uVar0, "COLLECTED", "HUD_AWARDS", 1);
}
*iParam4++;
}
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
HUD::ADD_TEXT_COMPONENT_INTEGER(func_26(iParam3));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=MISC::GET_GAME_TIMER();
*iParam4++;
break;
case 2:
if((MISC::GET_GAME_TIMER() - *uParam2) > 7000){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam4++;
}elseif(!func_25()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
func_32(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - *uParam2) > 7500){
*iParam4++;
}elseif(!func_25()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
func_32(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
}}
break;
case 4:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
}
func_32(0);
*uParam1=0;
*uParam0=0;
*iParam4=0;
break;
}}}

int func_25(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}

int func_26(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=0;
if(iParam0==2){
iVar1=0;
while (iVar1 < func_31(iParam0)){
if(MISC::IS_BIT_SET(Global_113648.f_10051.f_108, func_30(func_31(iParam0), iVar1))){
iVar0++;
}
iVar1++;
}}elseif(iParam0==6){
STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iVar0, -1);
}elseif(iParam0==7){
STATS::STAT_GET_INT(joaat("num_hidden_packages_7"), &iVar0, -1);
}elseif(iParam0==8){
STATS::STAT_GET_INT(joaat("num_hidden_packages_6"), &iVar0, -1);
}else{
iVar1=0;
while (iVar1 < func_31(iParam0)){
iVar2=(func_29(iParam0) + iVar1);
if(func_27(iVar2, -1)){
iVar0++;
}
iVar1++;
}}
return iVar0;
}


bool func_27(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_28();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_28(){
return Global_1574918;
}

int func_29(int iParam0){
if(iParam0==3){
return 815;
}
if(iParam0==5){
return 845;
}
if(iParam0==1){
return 705;
}
if(iParam0==0){
return 755;
}
return 805;
}

int func_30(int iParam0, int iParam1){
if(iParam1 < 32){
return iParam1;
}
return (iParam0 - iParam1);
}

int func_31(int iParam0){
if(iParam0==3){
return 30;
}
if(iParam0==1){
return 50;
}
if(iParam0==0){
return 50;
}
if(iParam0==4){
return 10;
}
if(iParam0==5){
return 30;
}
return 15;
}


void func_32(int iParam0){
if(Global_78826 !=iParam0){
Global_78826=iParam0;
}}


void func_33(int iParam0){
bool bVar0;
int iVar1;
bVar0=iParam0;
iVar1=0;
while (bVar0 > 31){
bVar0=(bVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
}}


void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113648.f_20412.f_145 < 9){
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=uParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
}
Global_113648.f_20412.f_145++;
func_36();
}}


void func_36(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113648.f_20412.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 0)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0]){
Global_113648.f_20412.f_146[0]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 1)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1]){
Global_113648.f_20412.f_146[1]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 2)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2]){
Global_113648.f_20412.f_146[2]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_37(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113648.f_20412.f_150[iVar1], iVar0);
}
return 0;
}

int func_38(var uParam0, var uParam1, struct<3> Param2){
bool bVar0;
bVar0=uParam0->f_10;
if((uParam1[bVar0 /*11*/])->f_10){
if((uParam1[bVar0 /*11*/])->f_1 !=0){
if(OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[bVar0 /*11*/])->f_1) || func_53((uParam1[bVar0 /*11*/])->f_1)){
func_40(uParam0, uParam1, bVar0);
return 1;
}}}
if(OBJECT::DOES_PICKUP_EXIST((uParam1[bVar0 /*11*/])->f_1)){
if((vdist2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_58(13)) || func_58(14)){
func_39(&((uParam1[bVar0 /*11*/])->f_1));
(uParam1[bVar0 /*11*/])->f_1=0;
(uParam1[bVar0 /*11*/])->f_10=0;
}}
return 0;
}


void func_39(var uParam0){
if(OBJECT::DOES_PICKUP_EXIST(*uParam0)){
OBJECT::REMOVE_PICKUP(*uParam0);
}}


void func_40(var uParam0, var uParam1, bool bParam2){
int iVar0;
iVar0=(func_29(*uParam0) + bParam2);
func_39(&((uParam1[bParam2 /*11*/])->f_1));
func_52(&((uParam1[bParam2 /*11*/])->f_2));
(uParam1[bParam2 /*11*/])->f_1=0;
(uParam1[bParam2 /*11*/])->f_10=0;
func_51(&(uParam0->f_1), bParam2, 1);
if(*uParam0==1 || *uParam0==0){
func_50(*uParam0, bParam2, 1);
}
PAD::SET_CONTROL_SHAKE(0, 200, 250);
STATS::STAT_INCREMENT(uParam0->f_6, 1f);
if(bLocal_41){
func_49(&(uParam0->f_1), bParam2);
}else{
func_47(&(uParam0->f_1));
}
func_44();
STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
func_43(1, 0);
func_41();
uParam0->f_11=1;
}

int func_41(){
if(func_42(0)){
return 0;
}
if(Global_100720.f_8){
if(Global_100720.f_10 > 0){
return 0;
}}elseif(Global_100720.f_10 > 1){
return 0;
}
Global_100720.f_10++;
return 1;
}

int func_42(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_43(int iParam0, int iParam1){
Global_100720.f_7=iParam0;
Global_100720.f_8=iParam1;
}


void func_44(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar3=0;
STATS::STAT_GET_INT(func_46(0), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_45(18, iVar0);
}
STATS::STAT_GET_INT(func_46(1), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_45(19, iVar0);
}
STATS::STAT_GET_INT(func_46(3), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_45(20, iVar0);
}
iVar2=((func_31(0) + func_31(1)) + func_31(3));
if(iVar2 > 0){
iVar3=(iVar1 * 100 / iVar2);
}
STATS::STAT_SET_INT(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_45(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}

int func_46(int iParam0){
if(iParam0==3){
return joaat("num_hidden_packages_3");
}
if(iParam0==1){
return joaat("num_hidden_packages_0");
}
if(iParam0==0){
return joaat("num_hidden_packages_1");
}
if(iParam0==5){
return joaat("num_hidden_packages_4");
}
return joaat("num_hidden_packages_2");
}


void func_47(var uParam0){
int iVar0;
int iVar1;
iVar1=0;
if(uParam0->f_3 <=0){}
if(uParam0->f_2 <=0){}
if(bLocal_40){}
iVar0=0;
while (iVar0 < uParam0->f_3){
if(func_57(uParam0, iVar0)){
iVar1++;
func_48((uParam0->f_2 + iVar0), 1, -1);
if(bLocal_40){
}}
iVar0++;
}
uParam0->f_4=iVar1;
if(bLocal_40){}
if(iVar1==uParam0->f_3 && uParam0->f_2==705){
func_65(168, 0);
}}


void func_48(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_28();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_49(var uParam0, bool bParam1){
if(uParam0->f_3 <=0){}
if(uParam0->f_2 <=0){}
if(bLocal_40){}
if(bParam1 >=uParam0->f_3){}
if(func_57(uParam0, bParam1)){
uParam0->f_4++;
func_48((uParam0->f_2 + bParam1), 1, -1);
if(bLocal_40){
}}
if(bLocal_40){}
if(uParam0->f_4==uParam0->f_3 && uParam0->f_2==705){
func_65(168, 0);
}}


void func_50(int iParam0, bool bParam1, bool bParam2){
if(bParam1 < 0 || bParam1 >=64){
return;
}
if(iParam0==1){
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_10051.f_122), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_10051.f_122), bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
}}elseif(iParam0==0){
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_10051.f_125), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_10051.f_125), bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
}}}


void func_51(var uParam0, bool bParam1, bool bParam2){
if(bParam1 < 0 || bParam1 >=64){
return;
}
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(uParam0, bParam1);
}else{
MISC::CLEAR_BIT(uParam0, bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(uParam0->f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(uParam0->f_1), (bParam1 - 32));
}}


void func_52(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}

int func_53(var uParam0){
var uVar0;
int iVar1;
if(!OBJECT::DOES_PICKUP_EXIST(uParam0)){
return 0;
}
if(func_54(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=ENTITY::GET_ENTITY_MODEL(uVar0);
if(iVar1==joaat("submersible") || iVar1==joaat("submersible2")){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(uParam0))){
return 1;
}}}}
return 0;
}

int func_54(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_55(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5){
var uVar0;
if(!uParam0->f_10){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_58(13) && !func_58(14)){
if(!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_3) <=(50f * 50f)){
STREAMING::REQUEST_MODEL(uParam1);
while (!STREAMING::HAS_MODEL_LOADED(uParam1)){
STREAMING::REQUEST_MODEL(uParam1);
wait(0);
}
if(bParam3){
func_56(uParam0->f_3);
}
MISC::CLEAR_AREA(uParam0->f_3, 2.5f, 0, 0, 0, 0);
if(bParam4){
MISC::SET_BIT(&uVar0, true);
uParam0->f_1=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
}
else{
MISC::SET_BIT(&uVar0, 3);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 8);
MISC::SET_BIT(&uVar0, true);
uParam0->f_1=OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1);
}}}
if(OBJECT::DOES_PICKUP_EXIST(uParam0->f_1)){
uParam0->f_10=1;
}}}}


void func_56(struct<3> Param0){
var uVar0;
uVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(uVar0);
while (!INTERIOR::IS_INTERIOR_READY(uVar0)){
wait(0);
}
wait(0);
INTERIOR::UNPIN_INTERIOR(uVar0);
}}

int func_57(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=64){
return 0;
}
if(iParam1 <=31){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}
return MISC::IS_BIT_SET(uParam0->f_1, (iParam1 - 32));
}


bool func_58(int iParam0){
return Global_43257==iParam0;
}


void func_59(var uParam0, int iParam1, int iParam2, int iParam3){
uParam0->f_6=iParam1;
func_60(&(uParam0->f_1), iParam2, iParam3);
}


void func_60(var uParam0, var uParam1, var uParam2){
bool bVar0;
int iVar1;
iVar1=0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=uParam1;
uParam0->f_3=uParam2;
if(bLocal_40){}
bVar0=false;
while (bVar0 < uParam0->f_3){
if(func_27((uParam0->f_2 + bVar0), -1)){
iVar1++;
func_51(uParam0, bVar0, 1);
if(bLocal_40){
}}
bVar0++;
}
uParam0->f_4=iVar1;
if(bLocal_40){}}


void func_61(var uParam0, int iParam1, int iParam2, char* sParam3){
*uParam0=iParam1;
uParam0->f_7=iParam2;
uParam0->f_8=sParam3;
uParam0->f_10=0;
}


void func_62(){
int iVar0;
Global_113648.f_10051.f_122.f_2=1;
iVar0=0;
while (iVar0 < 50){
Local_50[iVar0 /*11*/].f_3={
func_63(iVar0, 0) 
};
Local_50[iVar0 /*11*/].f_10=0;
iVar0++;
}
iLocal_53=0;
Local_50[0 /*11*/].f_9=179.4746f;
Local_50[1 /*11*/].f_6={
0f, 0f, 198f 
};
Local_50[2 /*11*/].f_9=104f;
Local_50[3 /*11*/].f_9=321.5f;
Local_50[4 /*11*/].f_6={
0f, 0f, 49f 
};
Local_50[5 /*11*/].f_6={
0f, 0f, 286.5f 
};
Local_50[6 /*11*/].f_9=278.0092f;
Local_50[7 /*11*/].f_6={
5.3f, -1801.4f, 15.57f 
};
Local_50[8 /*11*/].f_9=80.5f;
Local_50[9 /*11*/].f_9=116f;
Local_50[10 /*11*/].f_9=15f;
Local_50[11 /*11*/].f_9=305.5f;
Local_50[12 /*11*/].f_9=0f;
Local_50[13 /*11*/].f_9=95f;
Local_50[13 /*11*/].f_6={
-0.91f, -0.03f, -0.81f 
};
Local_50[14 /*11*/].f_9=40f;
Local_50[15 /*11*/].f_9=40f;
Local_50[16 /*11*/].f_9=40f;
Local_50[17 /*11*/].f_9=90f;
Local_50[17 /*11*/].f_6={
-0.55f, 0f, 0.78f 
};
Local_50[18 /*11*/].f_6={
0f, 0f, 0f 
};
Local_50[19 /*11*/].f_9=40f;
Local_50[20 /*11*/].f_6={
0f, 2f, 15f 
};
Local_50[21 /*11*/].f_9=40f;
Local_50[22 /*11*/].f_9=40f;
Local_50[23 /*11*/].f_9=40f;
Local_50[24 /*11*/].f_9=40f;
Local_50[25 /*11*/].f_9=40f;
Local_50[26 /*11*/].f_9=40f;
Local_50[26 /*11*/].f_6={
-6f, 10f, 0f 
};
Local_50[27 /*11*/].f_9=40f;
Local_50[27 /*11*/].f_6={
-4.66f, 8.7f, 67.03f 
};
Local_50[28 /*11*/].f_9=40f;
Local_50[28 /*11*/].f_6={
1.54f, -8.31f, -19.94f 
};
Local_50[29 /*11*/].f_9=40f;
Local_50[30 /*11*/].f_9=40f;
Local_50[30 /*11*/].f_6={
27.21f, -3.11f, -2.09f 
};
Local_50[31 /*11*/].f_9=40f;
Local_50[32 /*11*/].f_9=40f;
Local_50[33 /*11*/].f_9=40f;
Local_50[33 /*11*/].f_6={
-9.89f, 0.3f, -0.01f 
};
Local_50[34 /*11*/].f_9=40f;
Local_50[35 /*11*/].f_9=40f;
Local_50[36 /*11*/].f_9=40f;
Local_50[36 /*11*/].f_6={
6.5f, -4.41f, -0.62f 
};
Local_50[37 /*11*/].f_6={
-9f, 5.3f, -2f 
};
Local_50[38 /*11*/].f_9=40f;
Local_50[38 /*11*/].f_6={
-13.32f, -0.57f, -0.15f 
};
Local_50[39 /*11*/].f_9=40f;
Local_50[39 /*11*/].f_6={
4.71f, -21.26f, -0.06f 
};
Local_50[40 /*11*/].f_9=40f;
Local_50[41 /*11*/].f_9=80f;
Local_50[42 /*11*/].f_6={
-2f, 9f, 1f 
};
Local_50[43 /*11*/].f_9=198f;
Local_50[44 /*11*/].f_9=198f;
Local_50[44 /*11*/].f_6={
0f, -20f, 0f 
};
Local_50[45 /*11*/].f_9=198f;
Local_50[46 /*11*/].f_9=198f;
Local_50[47 /*11*/].f_9=198f;
Local_50[48 /*11*/].f_9=198f;
Local_50[49 /*11*/].f_9=198f;
}


Vector3 func__63(int iParam0, int iParam1){
switch (iParam0){
case 0:
if(iParam1==1){
return 1034.274f, -3026.275f, 4.90197f;
}else{
return 1026.705f, -3026.052f, 13.3323f;
}
break;
case 1:
if(iParam1==1){
return -1040.979f, -2743.509f, 12.94983f;
}else{
return -1048.604f, -2734.218f, 12.8895f;
}
break;
case 2:
if(iParam1==1){
return -93.9012f, -2711.314f, 5.01752f;
}else{
return -81.1199f, -2726.511f, 7.74f;
}
break;
case 3:
return -917.6909f, -2527.384f, 22.3218f;
break;
case 4:
if(iParam1==1){
return 746.45f, -2310.32f, 26.03f;
}else{
return 748.922f, -2298.114f, 19.624f;
}
break;
case 5:
if(iParam1==1){
return 1509.742f, -2126.038f, 75.21973f;
}else{
return 1509.099f, -2120.551f, 75.61f;
}
break;
case 6:
return 76.0032f, -1970.475f, 20.1302f;
break;
case 7:
if(iParam1==1){
return -1.82327f, -1732.614f, 28.29367f;
}else{
return 0.067f, -1734.027f, 30.606f;
}
break;
case 8:
if(iParam1==1){
return -1377.766f, -1409.837f, 4.63205f;
}else{
return -1380.491f, -1404.374f, 1.7273f;
}
break;
case 9:
return 2864.808f, -1372.84f, 1.3151f;
break;
case 10:
return -1035.812f, -1273.077f, 0.8919f;
break;
case 11:
return -1821.136f, -1201.36f, 18.1698f;
break;
case 12:
return 643.0116f, -1035.65f, 35.8891f;
break;
case 13:
return -119.0616f, -977.2228f, 303.23f;
break;
case 14:
if(iParam1==1){
return -1243.104f, -507.8057f, 30.10775f;
}else{
return -1238.766f, -506.7138f, 37.6019f;
}
break;
case 15:
if(iParam1==1){
return 83.79993f, -431.9302f, 36.55315f;
}else{
return 86.4f, -433.9f, 36f;
}
break;
case 16:
return 1095.953f, -210.4642f, 54.9477f;
break;
case 17:
return -1724.522f, -196f, 57.2387f;
break;
case 18:
return 265.374f, -199.546f, 60.795f;
break;
case 19:
if(iParam1==1){
return -3020.475f, 36.55431f, 9.11777f;
}else{
return -3021.4f, 38f, 10.2945f;
}
break;
case 20:
if(iParam1==1){
return -347.5277f, 53.37161f, 52.97814f;
}else{
return -347.3f, 54.865f, 53.921f;
}
break;
case 21:
return 1052.248f, 167.611f, 87.7406f;
break;
case 22:
return -2303.798f, 217.4301f, 166.6017f;
break;
case 23:
return -138.9423f, 868.3885f, 231.6956f;
break;
case 24:
if(iParam1==1){
return 688.1073f, 1204.671f, 323.3438f;
}else{
return 682.4505f, 1204.928f, 344.3322f;
}
break;
case 25:
return -1548.763f, 1380.173f, 125.3728f;
break;
case 26:
if(iParam1==1){
return -432.14f, 1598.46f, 355.73f;
}else{
return -432.0034f, 1597.129f, 356.613f;
}
break;
case 27:
return 3081.93f, 1648.29f, 2.42f;
break;
case 28:
return -594.38f, 2092f, 130.57f;
break;
case 29:
if(iParam1==1){
return 3069.213f, 2160.988f, 1.1327f;
}else{
return 3063.583f, 2212.63f, 2.5863f;
}
break;
case 30:
return 180.21f, 2263.83f, 91.87f;
break;
case 31:
if(iParam1==1){
return 926.96f, 2445.36f, 49.09f;
}else{
return 929.6946f, 2444.115f, 48.43f;
}
break;
case 32:
if(iParam1==1){
return -2380.212f, 2655.176f, 0.832f;
}else{
return -2379.948f, 2656.953f, 1.4906f;
}
break;
case 33:
return -861.38f, 2753.3f, 12.867f;
break;
case 34:
return -289.0195f, 2848.853f, 53.331f;
break;
case 35:
if(iParam1==1){
return 288.8409f, 2871.912f, 42.6422f;
}else{
return 265.7415f, 2866.416f, 73.19f;
}
break;
case 36:
if(iParam1==1){
return 1297.378f, 2988.71f, 40.11787f;
}else{
return 1294.2f, 3001.9f, 57.7f;
}
break;
case 37:
return 1568.65f, 3572.8f, 32.294f;
break;
case 38:
return -1608.62f, 4274.25f, 102.95f;
break;
case 39:
if(iParam1==1){
return -3.51812f, 4332.451f, 31.21602f;
}else{
return -1.9585f, 4334.787f, 32.3702f;
}
break;
case 40:
return 1336.737f, 4307.2f, 37.1325f;
break;
case 41:
if(iParam1==1){
return -1007.103f, 4836.936f, 268.5488f;
}else{
return -1001.48f, 4851.322f, 273.6112f;
}
break;
case 42:
return 1877.09f, 5078.98f, 50.49f;
break;
case 43:
if(iParam1==1){
return 3366.099f, 5182.461f, 0.68317f;
}else{
return 3436.453f, 5176.911f, 6.386f;
}
break;
case 44:
if(iParam1==1){
return -576.12f, 5472.24f, 59.28f;
}else{
return -578.8057f, 5470.164f, 59.0295f;
}
break;
case 45:
return 444.6518f, 5571.781f, 780.1888f;
break;
case 46:
return -402.9948f, 6319.279f, 31.2256f;
break;
case 47:
return 1439.599f, 6335.208f, 22.9485f;
break;
case 48:
if(iParam1==1){
return 1466.109f, 6552.266f, 12.95773f;
}else{
return 1469.632f, 6552.174f, 13.6854f;
}
break;
case 49:
if(iParam1==1){
return 66.19278f, 6668.888f, 30.80633f;
}else{
return 66.7136f, 6663.198f, 30.7821f;
}
break;
}
return 0f, 0f, 0f;
}


bool func_64(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}


void func_65(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}


void func_66(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
}


void func_67(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_48((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_68();
}}


void func_68(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (iVar0 < 321){
if(Global_113648.f_10196[iVar0 /*12*/].f_5==1){
switch (Global_113648.f_10196[iVar0 /*12*/].f_6){
case 1:
Global_113384++;
fVar1=(fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 3:
Global_113385++;
fVar2=(fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 5:
Global_113386++;
fVar3=(fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 7:
Global_113387++;
fVar4=(fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 9:
Global_113388++;
fVar5=(fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113389++;
fVar6=(fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 13:
Global_113390++;
fVar7=(fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113367 > 0){
if(Global_113384==Global_113367){
fVar1=55f;
}}
if(Global_113368 > 0){
if(Global_113385==Global_113368){
fVar2=10f;
}}
if(Global_113369 > 0){
if(Global_113386==Global_113369){
fVar3=0f;
}}
if(Global_113370 > 0){
if(Global_113387==Global_113370){
fVar4=10f;
}}
if(Global_113371 > 0){
if(((Global_113388==Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388==Global_113374){
if(!MISC::IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113372 > 0){
if(Global_113389==Global_113372){
fVar6=15f;
}}
if(Global_113373 > 0){
if(Global_113390==Global_113373){
fVar7=5f;
}}
Global_113648.f_10196.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113388 > Global_113374 || Global_113388==Global_113374){
iVar9=Global_113374;
}else{
iVar9=Global_113388;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113384, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113367, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113385, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113368, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113386, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113369, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113387, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113370, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113374, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
Global_113391=(Global_113384 * 100 / Global_113367);
Global_113393=((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
Global_113392=((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
Global_113394=((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113391, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113392, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113393, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113648.f_10196.f_3853)){
func_45(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_69()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_41();
}}}}}

int func_69(){
return Global_32163;
}

int func_70(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}

int func_71(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_72(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}


void func_73(){
int iVar0;
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_55);
MISC::SET_GAME_PAUSED(0);
Global_113648.f_10051.f_122.f_2=0;
iVar0=0;
while (iVar0 < Local_50.f_0){
func_52(&(Local_50[iVar0 /*11*/].f_2));
func_39(&(Local_50[iVar0 /*11*/].f_1));
Local_50[iVar0 /*11*/].f_1=0;
iVar0++;
}
if(func_71(106)==1){
func_66(106, 1);
func_75();
func_70(12);
}elseif(func_74(&(Local_44.f_1))){
func_66(106, 1);
func_75();
func_70(12);
}else{
func_72(12);
}
if(iLocal_60){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_44.f_7);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


bool func_74(var uParam0){
if(uParam0->f_3 <=0){}
return uParam0->f_4 >=uParam0->f_3;
}


void func_75(){
int iVar0;
iVar0=func_76(64);
Global_2645068[iVar0 /*83*/]=64;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_76(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645068[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645068[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}