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
int iLocal_18=0;
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
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(iLocal_18==0){
func_11();
func_10();
iLocal_18=1;
settimera(0);
}
while (true){
wait(0);
if(Global_20500.f_1 !=9){
switch (Global_20500.f_1){
case 7:
if(iLocal_18==1 && timera() > 1500){
func_6();
settimera(0);
}
break;
case 8:
if(func_5(2, Global_20468, 0)){
func_4();
Global_20478=1;
if(Global_20500.f_1 > 3){
Global_20500.f_1=7;
}}
break;
default:
break;
}
if(func_3()){
func_2();
}}else{
Global_20502=6;
func_2();
}
if(func_1()){
func_2();
}}}

int func_1(){
if(((Global_20500.f_1==1 || Global_20500.f_1==3) || Global_20500.f_1==0) || Global_20444==1){
Global_20487=1;
return 1;
}
return 0;
}


void func_2(){
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3(){
if(Global_8976==1 || Global_20500.f_1 < 7){
Global_20487=1;
return 1;
}
return 0;
}


void func_4(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20489, 1);
}}

int func_5(int iParam0, var uParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1))){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}


void func_6(){
func_7();
}


void func_7(){
func_9(Global_20481, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(MISC::IS_BIT_SET(Global_4542302, 23)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_8("CELL_EXTBYOU");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542303);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542304);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542305);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583.f_2));
func_8("CELL_BODYG");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542306);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542307);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542308);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586.f_2));
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_8("CELL_EXTBYOU");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542306);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542307);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542308);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542586.f_2));
func_8("CELL_EXTBTARG");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542303);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542304);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583.f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542305);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(Global_4542583.f_2));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20481, "DISPLAY_VIEW", 24f, to_float(1), -1082130432, -1082130432, -1082130432);
}


void func_8(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_10(){
func_7();
}


void func_11(){
if(Global_20488){
func_12(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
func_12(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_12(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_12(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_12(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}


void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_8(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_8(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_8(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_8(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_8(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}