//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
int iLocal_0=0;
int iLocal_1=0;
int iLocal_2=0;
#endregion

void __EntryFunction__(){
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)){
func_10();
}
STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
MISC::CLEAR_BIT(&(Global_113648.f_10018.f_25), 1);
func_7();
SCRIPT::SET_NO_LOADING_SCREEN(1);
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
iLocal_0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0)){
func_7();
wait(0);
}
while (!CAM::IS_SCREEN_FADED_OUT()){
func_7();
wait(0);
}
func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
iLocal_1=(MISC::GET_GAME_TIMER() + 8000 + round((2f * 1000f)));
while (!CUTSCENE::IS_CUTSCENE_PLAYING()){
func_7();
if(!MISC::IS_BIT_SET(Global_113648.f_10018.f_25, 1)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
if(!iLocal_2){
if(MISC::GET_GAME_TIMER() > iLocal_1){
func_5("TITLE");
iLocal_2=1;
iLocal_1=(MISC::GET_GAME_TIMER() + round((2f * 1000f)));
}}elseif(MISC::GET_GAME_TIMER() > iLocal_1){
MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);
if(MISC::HAS_GAME_INSTALLED_THIS_SESSION() || MISC::IS_PC_VERSION()){
func_4(1, 1);
func_2();
}else{
func_1();
}}}
wait(0);
}
func_10();
}


void func_1(){
Global_100720=1;
}

int func_2(){
if(func_3(0)){
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

int func_3(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_4(int iParam0, int iParam1){
Global_100720.f_7=iParam0;
Global_100720.f_8=iParam1;
}


void func_5(char* sParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_7(){
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
func_8();
}


void func_8(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_9();
}


void func_9(){
Global_23131.f_134=1;
}


void func_10(){
MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);
if(iLocal_0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
SCRIPT::SET_NO_LOADING_SCREEN(0);
STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
SCRIPT::TERMINATE_THIS_THREAD();
}