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
int iLocal_43=0;
int iLocal_44=0;
#endregion

void __EntryFunction__(){
var uVar0;
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
uVar0=func_13();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar0)){
switch (iLocal_43){
case 0:
func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
func_10(&uVar0);
iLocal_44=MISC::GET_GAME_TIMER();
iLocal_43=1;
break;
case 1:
if((MISC::GET_GAME_TIMER() - iLocal_44) > 3000){
func_9(&uVar0);
iLocal_43=2;
}
break;
}
if(func_1(&uVar0, 0)){
}}
wait(0);
}}

int func_1(var uParam0, bool bParam1){
if(!func_8(&(uParam0->f_2))){
func_6(&(uParam0->f_2));
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
if(bParam1){
if(PAD::IS_CONTROL_PRESSED(2, 201)){
return 0;
}}
if(uParam0->f_1==-1){
return 1;
}
if(func_3(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1){
func_2(&(uParam0->f_2));
return 0;
}
return 1;
}


void func_2(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}


float func_3(var uParam0){
if(func_8(uParam0)){
if(func_5(uParam0)){
return uParam0->f_2;
}else{
return (func_4(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_4(bool bParam0){
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


bool func_5(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


void func_6(var uParam0){
func_7(uParam0, 0f);
}


void func_7(var uParam0, float fParam1){
uParam0->f_1=(func_4(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


bool func_8(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_9(var uParam0){
uParam0->f_1=300;
func_6(&(uParam0->f_2));
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_10(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6){
uParam0->f_1=-1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
func_12(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_12(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


var func__13(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}