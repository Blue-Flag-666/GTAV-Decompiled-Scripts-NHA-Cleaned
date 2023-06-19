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
struct<26> Local_18={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
int iLocal_24=0;
char cLocal_25[32]="";
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
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
iLocal_24=-99;
StringCopy(&cLocal_25, "TRACKID", 32);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_25, 1);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1)){
wait(0);
}
func_15();
func_14();
func_11();
settimera(0);
while (true){
wait(0);
if(iLocal_31){
if(iLocal_33 < 101){
if(timera() > 30){
iLocal_33++;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10("CELL_4005");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_33);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20481, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
settimera(0);
}}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10("CELL_4006");
func_10("CELL_4007");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20481, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
iLocal_32=1;
iLocal_31=0;
}}
if(Global_20500.f_1 !=9){
switch (Global_20500.f_1){
case 7:
func_8();
if(iLocal_30==0){
func_6();
}
break;
case 8:
if(func_5(2, Global_20468, 0)){
func_4();
iLocal_31=0;
iLocal_32=0;
Global_20478=1;
func_14();
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
iLocal_31=0;
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
if(timera() > 2200){
if(Global_20488){
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}else{
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
}
iLocal_30=1;
}}


void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
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
func_10(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_10(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_10(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_10(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_10(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_8(){
if(Global_20478==0){
if(func_5(2, Global_20469, 0)){
if((iLocal_30 && iLocal_32==0) && iLocal_31==0){
iLocal_33=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10("CELL_4005");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_33);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20481, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
if(Global_20488){
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
iLocal_31=1;
settimera(0);
}}}}


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


void func_10(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_11(){
int iVar0;
func_13(134, 1);
iVar0=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
switch (func_12(iVar0)){
case 1:
func_13(82, 1);
break;
case 2:
func_13(81, 1);
break;
default:
func_13(83, 1);
break;
}}

int func_12(int iParam0){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
return 3;
break;
case 5:
case 6:
case 7:
case 8:
return 4;
break;
case 9:
case 10:
case 11:
case 12:
return 1;
break;
case 13:
case 14:
case 15:
case 16:
return 2;
break;
}
return 0;
}


void func_13(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59227[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59227[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_14(){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10("CELL_4001");
func_10(&Local_18);
func_10(&(Local_18.f_16));
func_10("CELL_4002");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_18.f_24);
func_10("CELL_4003");
func_10(&(Local_18.f_25));
func_10("CELL_4004");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_9(Global_20481, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
if(Global_20488){
if(iLocal_30){
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}else{
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}
func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
if(iLocal_30){
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}


void func_15(){
iLocal_24=AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
StringCopy(&Local_18, "", 64);
StringIntConCat(&Local_18, iLocal_24, 64);
StringConCat(&Local_18, "S", 64);
StringCopy(&(Local_18.f_16), "", 32);
StringIntConCat(&(Local_18.f_16), iLocal_24, 32);
StringConCat(&(Local_18.f_16), "A", 32);
StringCopy(&(Local_18.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);
if(!HUD::DOES_TEXT_LABEL_EXIST(&Local_18)){
StringCopy(&Local_18, "CELL_195", 64);
}
if(!HUD::DOES_TEXT_LABEL_EXIST(&(Local_18.f_16))){
StringCopy(&(Local_18.f_16), "CELL_195", 32);
StringCopy(&(Local_18.f_25), "CELL_195", 24);
}}