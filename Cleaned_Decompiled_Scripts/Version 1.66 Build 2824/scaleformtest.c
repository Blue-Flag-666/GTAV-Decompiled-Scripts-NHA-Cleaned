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
int iLocal_18=0;
var uLocal_19=0;
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
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_5();
}
uLocal_19=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_19)){
wait(0);
}
while (true){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_19, 255, 255, 255, 0, 0);
func_4();
func_1(iLocal_18, uLocal_19);
wait(0);
}}


void func_1(int iParam0, var uParam1){
switch (iParam0){
case 0:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 191, 1));
func_2("PRESS A");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 194, 1));
func_2("PRESS B");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 193, 1));
func_2("PRESS X");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 192, 1));
func_2("PRESS Y");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_18=-1;
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 187, 1));
func_2("DOWN");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 188, 1));
func_2("UP");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 190, 1));
func_2("LEFT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 189, 1));
func_2("RIGHT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_18=-1;
break;
case 2:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_3(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 202, 1));
func_2("BACK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_18=-1;
break;
default:
break;
}}


void func_2(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_3(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


void func_4(){
if(Global_20362==0){
if(((((((((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 205)) || PAD::IS_CONTROL_PRESSED(2, 206)) || PAD::IS_CONTROL_PRESSED(2, 207)) || PAD::IS_CONTROL_PRESSED(2, 208)) || PAD::IS_CONTROL_PRESSED(2, 201)) || PAD::IS_CONTROL_PRESSED(2, 202)){
Global_20362=1;
settimera(0);
}}elseif(timera() > 50){
Global_20362=0;
}
if(Global_20362==0){
if(PAD::IS_CONTROL_PRESSED(2, 217)){
iLocal_18=1;
}
if(PAD::IS_CONTROL_PRESSED(2, 189)){
iLocal_18=2;
}
if(PAD::IS_CONTROL_PRESSED(2, 190)){
iLocal_18=2;
}
if(PAD::IS_CONTROL_PRESSED(2, 205)){
}
if(PAD::IS_CONTROL_PRESSED(2, 206)){
}
if(PAD::IS_CONTROL_PRESSED(2, 207)){
}
if(PAD::IS_CONTROL_PRESSED(2, 208)){
}
if(PAD::IS_CONTROL_PRESSED(2, 188)){
iLocal_18=2;
}
if(PAD::IS_CONTROL_PRESSED(2, 187)){
iLocal_18=2;
}
if(PAD::IS_CONTROL_PRESSED(2, 201)){
iLocal_18=1;
}
if(PAD::IS_CONTROL_PRESSED(2, 202)){
iLocal_18=0;
}
if(PAD::IS_CONTROL_PRESSED(2, 203)){
iLocal_18=1;
}
if(PAD::IS_CONTROL_PRESSED(2, 204)){
iLocal_18=1;
}}}


void func_5(){
func_6(0);
MISC::SET_GAME_PAUSED(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_19);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_6(bool bParam0){
if(bParam0){
func_13();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_12(0)){
func_7(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_7(int iParam0){
if(func_11()){
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
if(func_12(0)){
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


bool func_11(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_12(int iParam0){
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


void func_13(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}