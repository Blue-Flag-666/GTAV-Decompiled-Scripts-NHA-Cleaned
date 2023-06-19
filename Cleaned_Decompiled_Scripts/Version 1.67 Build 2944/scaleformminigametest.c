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
var uLocal_18=0;
int iLocal_19=0;
int iLocal_20=0;
bool bLocal_21=0;
bool bLocal_22=0;
float fLocal_23=0f;
bool bLocal_24=0;
bool bLocal_25=0;
float fLocal_26=0f;
bool bLocal_27=0;
bool bLocal_28=0;
float fLocal_29=0f;
bool bLocal_30=0;
bool bLocal_31=0;
float fLocal_32=0f;
bool bLocal_33=0;
bool bLocal_34=0;
float fLocal_35=0f;
bool bLocal_36=0;
bool bLocal_37=0;
float fLocal_38=0f;
bool bLocal_39=0;
bool bLocal_40=0;
float fLocal_41=0f;
bool bLocal_42=0;
bool bLocal_43=0;
float fLocal_44=0f;
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
uLocal_18=HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
iLocal_20=1;
fLocal_23=0f;
fLocal_26=0f;
fLocal_29=0f;
fLocal_32=0f;
fLocal_35=0f;
fLocal_38=0f;
fLocal_41=0f;
fLocal_44=0f;
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_2();
}
uLocal_16=GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_16)){
wait(0);
}
while (true){
if(iLocal_19==1){
}
if(iLocal_20==1){
iLocal_20=0;
uLocal_17=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
if(CAM::DOES_CAM_EXIST(uLocal_17)){
CAM::SET_CAM_PARAMS(uLocal_17, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
CAM::SET_CAM_NEAR_CLIP(uLocal_17, 0.01f);
CAM::SET_CAM_FAR_CLIP(uLocal_17, 0.02f);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
HUD::SET_BLIP_SPRITE(uLocal_18, 66);
}
iLocal_19=1;
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
func_1(uLocal_16);
wait(0);
}}


void func_1(var uParam0){
if(Global_20479==0){
if(PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190)){
Global_20479=1;
settimera(0);
}}elseif(timera() > 50){
Global_20479=0;
}
if(Global_20479==0){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
bLocal_21=true;
fLocal_23=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 189)){
bLocal_21=true;
fLocal_23=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 189)){
bLocal_21=false;
fLocal_23=0f;
}
if(!bLocal_21==bLocal_22){
bLocal_22=bLocal_21;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_23);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
bLocal_24=true;
fLocal_26=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 190)){
bLocal_24=true;
fLocal_26=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 190)){
bLocal_24=false;
fLocal_26=0f;
}
if(!bLocal_24==bLocal_25){
bLocal_25=bLocal_24;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_26);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
bLocal_27=true;
fLocal_29=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 188)){
bLocal_27=true;
fLocal_29=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 188)){
bLocal_27=false;
fLocal_29=0f;
}
if(!bLocal_27==bLocal_28){
bLocal_28=bLocal_27;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_29);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
bLocal_30=true;
fLocal_32=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 187)){
bLocal_30=true;
fLocal_32=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 187)){
bLocal_30=false;
fLocal_32=0f;
}
if(!bLocal_30==bLocal_31){
bLocal_31=bLocal_30;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_32);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
bLocal_33=true;
fLocal_35=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 202)){
bLocal_33=true;
fLocal_35=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 202)){
bLocal_33=false;
fLocal_35=0f;
}
if(!bLocal_33==bLocal_34){
bLocal_34=bLocal_33;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_35);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 204)){
bLocal_36=true;
fLocal_38=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 204)){
bLocal_36=true;
fLocal_38=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 204)){
bLocal_36=false;
fLocal_38=0f;
}
if(!bLocal_36==bLocal_37){
bLocal_37=bLocal_36;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bLocal_39=true;
fLocal_41=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 201)){
bLocal_39=true;
fLocal_41=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
bLocal_39=false;
fLocal_41=0f;
}
if(!bLocal_39==bLocal_40){
bLocal_40=bLocal_39;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_41);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 203)){
bLocal_42=true;
fLocal_44=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 203)){
bLocal_42=true;
fLocal_44=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 203)){
bLocal_42=false;
fLocal_44=0f;
}
if(!bLocal_42==bLocal_43){
bLocal_43=bLocal_42;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_44);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_2(){
if(CAM::DOES_CAM_EXIST(uLocal_17)){
CAM::DESTROY_CAM(uLocal_17, 0);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_3(0);
MISC::SET_GAME_PAUSED(0);
HUD::CLEAR_HELP(1);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_16);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(bool bParam0){
if(bParam0){
func_10();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_9(0)){
func_4(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_4(int iParam0){
if(func_8()){
return;
}
if(Global_20704){
if(func_7()){
func_6(1, 1);
}else{
func_6(0, 0);
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
if(!func_5()){
Global_20500.f_1=3;
}}

int func_5(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_9(0)){
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


bool func_7(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_8(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_9(int iParam0){
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


void func_10(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}