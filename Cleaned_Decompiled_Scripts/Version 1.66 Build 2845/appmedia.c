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
int iLocal_21=0;
int iLocal_22=0;
int iLocal_23=0;
int iLocal_24=0;
int iLocal_25=0;
int iLocal_26[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<6> Local_27[25];
int iLocal_28=0;
struct<3> Local_29={
0, 0, 0 
};
struct<3> Local_30={
0, 0, 0 
};
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
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
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_28();
func_26();
while (true){
wait(0);
if(iLocal_24==0){
if(Global_20383.f_1 !=9){
switch (Global_20383.f_1){
case 7:
if((iLocal_31==0 && iLocal_32==0) && Global_22760==0){
func_22();
func_16();
}
break;
case 8:
if((func_15(2, Global_20351, 0) && iLocal_31==0) && iLocal_32==0){
func_14();
Global_20361=1;
if(Global_20383.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8254, 15)){
}
func_13();
}
}
break;
default:
break;
}
if(func_12()){
func_11();
}
if(iLocal_31){
func_9();
}
if(iLocal_32){
func_8();
}}else{
Global_20385=6;
func_11();
}}else{
func_2();
}
if(func_1()){
func_11();
}}}

int func_1(){
if(((Global_20383.f_1==1 || Global_20383.f_1==3) || Global_20383.f_1==0) || Global_20327==1){
Global_20370=1;
return 1;
}
return 0;
}


void func_2(){
iLocal_25=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
switch (iLocal_25){
case 0:
iLocal_24=0;
func_3();
break;
case 1:
break;
case 2:
Global_20383.f_1=3;
func_11();
break;
}}


void func_3(){
int iVar0;
func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
iLocal_21=GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
iLocal_22=0;
iVar0=0;
while (iLocal_22 < iLocal_21){
if(GRAPHICS::DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(iLocal_22)){
func_6(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
iLocal_26[iVar0]=iLocal_22;
iVar0++;
}
iLocal_22++;
}
func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_4(Global_20364, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
if(Global_20371){
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}


void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
func_5(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam3)){
func_5(iParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam4)){
func_5(iParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam5)){
func_5(iParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam6)){
func_5(iParam6);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_5(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
func_5(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_5(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_5(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_5(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_5(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_8(){
if(iLocal_31==0 && iLocal_32==1){
if(iLocal_36){
Local_30.f_0=(Local_30.f_0 + 1f);
}
if(Local_30.f_0 > Local_29.f_0 || Local_30.f_0==Local_29.f_0){
Local_30.f_0=Local_29.f_0;
iLocal_36=0;
}
if(iLocal_37){
Local_30.f_1=(Local_30.f_1 - 2f);
}
if(Local_30.f_1 < Local_29.f_1 || Local_30.f_1==Local_29.f_1){
Local_30.f_1=Local_29.f_1;
iLocal_37=0;
}
if(iLocal_38){
Local_30.f_2=(Local_30.f_2 - 7f);
}
if(Local_30.f_2 < Local_29.f_2 || Local_30.f_2==Local_29.f_2){
Local_30.f_2=Local_29.f_2;
iLocal_38=0;
}
if((iLocal_36==0 && iLocal_37==0) && iLocal_38==0){
iLocal_32=0;
if(Global_20383.f_1 > 3){
Global_20383.f_1=7;
HUD::CLEAR_HELP(1);
Global_22762=1;
func_26();
}}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
}}


void func_9(){
if((iLocal_31==1 && iLocal_32==0) && Global_22760==6){
if(iLocal_33){
Local_30.f_0=(Local_30.f_0 - 1f);
}
if(Local_30.f_0 < Local_29.f_0 || Local_30.f_0==Local_29.f_0){
Local_30.f_0=Local_29.f_0;
iLocal_33=0;
}
if(iLocal_34){
Local_30.f_1=(Local_30.f_1 - 0.5f);
}
if(Local_30.f_1 < Local_29.f_1 || Local_30.f_1==Local_29.f_1){
Local_30.f_1=Local_29.f_1;
iLocal_34=0;
}
if(iLocal_35){
Local_30.f_2=(Local_30.f_2 + 7f);
}
if(Local_30.f_2 > Local_29.f_2 || Local_30.f_2==Local_29.f_2){
Local_30.f_2=Local_29.f_2;
iLocal_35=0;
}
if((iLocal_33==0 && iLocal_34==0) && iLocal_35==0){
iLocal_31=0;
func_10("CELL_MSHELP_2");
}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
}
if(MISC::IS_BIT_SET(Global_8254, 15)){
iLocal_31=0;
iLocal_32=0;
func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_6(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
if(Global_20371){
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_4(Global_20364, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
}}


void func_10(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_11(){
Global_22762=1;
HUD::CLEAR_HELP(1);
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_12(){
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return 1;
}
return 0;
}


void func_13(){
if(iLocal_31==0){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
Local_29={
Global_20343 
};
iLocal_32=1;
iLocal_36=1;
iLocal_37=1;
iLocal_38=1;
}}


void func_14(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, 1);
}}

int func_15(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
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


void func_16(){
if(iLocal_28){
if(timera() > 50){
iLocal_28=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(func_15(2, 181, 0)){
func_20();
}
if(func_15(2, 180, 0)){
func_17();
}}
if(iLocal_28==0){
if(func_15(2, Global_20359, 0)){
func_20();
iLocal_28=1;
settimera(0);
}
if(func_15(2, Global_20360, 0)){
func_17();
iLocal_28=1;
settimera(0);
}}}


void func_17(){
func_7(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_18();
}


void func_18(){
if(func_19()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(2);
}else{
MOBILE::CELL_SET_INPUT(1);
}}}

int func_19(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78558){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542575 || iVar2){
return 1;
}
return 1;
}


void func_20(){
func_7(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_21();
}


void func_21(){
if(func_19()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(1);
}else{
MOBILE::CELL_SET_INPUT(2);
}}}


void func_22(){
int iVar0;
if(Global_20361==0){
if(func_15(2, Global_20352, 0)){
MISC::CLEAR_BIT(&Global_8254, 15);
func_24();
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_20=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_20)){
wait(0);
}
iVar0=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_20);
if(iVar0 > -1){
iLocal_23=iLocal_26[iVar0];
if(Global_20383.f_1 > 3){
if(Global_22760==0){
func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_6(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_4(Global_20364, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
if(Global_20371){
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}
else{
func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_6(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
Global_22764=iLocal_23;
Global_22760=12;
Global_20383.f_1=8;
func_23();
}}}}}}


void func_23(){
if(iLocal_32==0){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
Local_29={
-90.3f, -0.8f, 90f 
};
iLocal_31=1;
iLocal_33=1;
iLocal_34=1;
iLocal_35=1;
}}


void func_24(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, 1);
func_25();
}}


void func_25(){
if(func_19()){
MOBILE::CELL_SET_INPUT(5);
}}


void func_26(){
if((MISC::IS_XBOX360_VERSION() || func_27()) || MISC::IS_PC_VERSION()){
GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
if(GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0)){
iLocal_24=1;
}else{
Global_22762=1;
Global_20383.f_1=3;
func_11();
}}else{
func_3();
}}


var func__27(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_28(){
StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}