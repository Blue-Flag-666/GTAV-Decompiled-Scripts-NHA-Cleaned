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
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
float fLocal_22=0f;
float fLocal_23=0f;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
int iLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
int iLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
struct<96> Local_63={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<62> Local_64={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 
};
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
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
sLocal_18="NULL";
fLocal_21=80f;
fLocal_22=140f;
fLocal_23=180f;
fLocal_26=0f;
fLocal_30=-0.0375f;
fLocal_31=0.17f;
iLocal_34=3;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_135(&uScriptParam_67);
}else{
func_126();
}
while (true){
func_125();
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(func_117()){
func_126();
}
if(func_116()){
func_126();
}
func_1();
}}


void func_1(){
func_110(0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
switch (Local_64.f_16){
case 0:
func_107();
break;
case 1:
func_2();
break;
}}


void func_2(){
if(MISC::IS_BIT_SET(Global_2764920, 1)){
MISC::CLEAR_BIT(&Global_2764920, true);
func_97(Global_2764919);
}
if(Local_64.f_61 !=Global_2765050){
Local_64.f_61={
Global_2765050 
};
}else{
Local_64.f_61.f_1=0;
Local_64.f_61.f_2=0;
}
if(!HUD::IS_PAUSE_MENU_ACTIVE() && !func_96()){
func_51();
func_42();
func_38();
func_35();
func_34();
func_13();
}
func_10(&(Local_63.f_67), MISC::IS_BIT_SET(Local_64.f_60, 3));
func_3(&(Local_64.f_38), &(Local_64.f_39));
MISC::CLEAR_BIT(&Global_2764920, 4);
MISC::CLEAR_BIT(&(Local_64.f_60), true);
MISC::CLEAR_BIT(&(Local_64.f_60), 2);
MISC::CLEAR_BIT(&(Local_64.f_60), 3);
MISC::CLEAR_BIT(&(Local_64.f_60), 6);
MISC::CLEAR_BIT(&(Local_64.f_60), 7);
}


void func_3(var uParam0, var uParam1){
struct<3> Var0;
var uVar1;
struct<3> Var2;
func_9();
Var0={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
if((((HUD::IS_PAUSE_MENU_ACTIVE() || func_8()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199)){
HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1, 0);
if(HUD::IS_PAUSE_MENU_ACTIVE() || func_8()){
if(HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID())){
HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
}}}elseif(HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID())){
HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
}
HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
uVar1=CAM::GET_RENDERING_CAM();
if(CAM::DOES_CAM_EXIST(uVar1)){
CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(uVar1, 1);
}
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(0) 
};
Var2={
func_7(Var2) 
};
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
*uParam1=func_5(Var0, 0);
HUD::SET_BLIP_SPRITE(*uParam1, 425);
HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, 0);
HUD::SET_BLIP_DISPLAY(*uParam1, 4);
HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
HUD::SET_BLIP_SHOW_CONE(*uParam1, 1, 11);
HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
*uParam0=func_5(Var0, 0);
HUD::SET_BLIP_SPRITE(*uParam0, 425);
HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, 0);
HUD::SET_BLIP_DISPLAY(*uParam0, 4);
HUD::SET_BLIP_COLOUR(*uParam0, func_4(18));
HUD::SET_BLIP_SHOW_CONE(*uParam0, 1, 11);
HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, 1);
HUD::SET_BLIP_ROTATION(*uParam0, round(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, 1);
HUD::SET_BLIP_ROTATION(*uParam1, round(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
}else{
HUD::SET_BLIP_COORDS(*uParam0, Var0);
HUD::SET_BLIP_ROTATION(*uParam0, round(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
HUD::SET_BLIP_DISPLAY(*uParam0, 5);
HUD::SET_BLIP_COORDS(*uParam1, Var0);
HUD::SET_BLIP_ROTATION(*uParam1, round(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
HUD::SET_BLIP_DISPLAY(*uParam1, 5);
}}

int func_4(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
switch (iParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
return 0;
}


var func__5(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


float func_6(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


Vector3 func__7(struct<3> Param0){
struct<3> Var0;
Var0.f_0=cos(Param0.f_0);
Var0.f_1=cos(Param0.f_2);
Var0.f_2=sin(Param0.f_0);
Var0.f_1=(Var0.f_1 * Var0.f_0);
Var0.f_0=(Var0.f_0 * -sin(Param0.f_2));
return Var0;
}


bool func_8(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_9(){
Global_1574839=1;
}


void func_10(var uParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return;
}
if(bParam1){
if(func_12(uParam0)){
HUD::CLEAR_HELP(1);
}
return;
}
if(!func_12(uParam0)){
HUD::CLEAR_HELP(1);
func_11(uParam0);
}}


void func_11(var uParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


bool func_12(var uParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_13(){
if(MISC::IS_BIT_SET(Global_2764920, 5)){
MISC::CLEAR_BIT(&Global_2764920, 5);
Local_64.f_35=0;
}
func_14(&(Local_63.f_24), &(Local_64.f_35));
}


void func_14(var uParam0, var uParam1){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
if(*uParam0 > 0){
bVar0=func_32(0, -1, 0);
if(bVar0){
if((!*uParam1 || PAD::HAVE_CONTROLS_CHANGED(2)) || PAD::HAVE_CONTROLS_CHANGED(0)){
func_31(-1);
iVar1=0;
while (iVar1 < *uParam0){
iVar2=uParam0->f_34[iVar1];
if(iVar2 < 32){
func_30(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
}else{
iVar3=(iVar2 - 32);
func_29(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
}
iVar1++;
}
*uParam1=1;
}
func_28(1);
func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
}}}


void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_27(&iVar0, 0, iParam1)){
return;
}
iParam0=iParam0;
if(iParam3 && !func_24(bParam4, bParam8)){
return;
}
if(func_22()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_18(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23390.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(Global_23390.f_5465[iVar1] !=363){
StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23390.f_5465[iVar1], 1), 64);
}elseif(Global_23390.f_5480[iVar1] !=32){
StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23390.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23390.f_5167=0;
}
if(!Global_23390.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23390.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_17(&(Global_23390.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_17(&(Global_23390.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23390.f_5450[iVar1]==-1){
func_16(&(Global_23390.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23390.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23390.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23390.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
func_17(&Global_4540958);
if(Global_4540958.f_20==-1){
func_16(&(Global_4540958.f_16));
}else{
iVar4=Global_23390.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23390.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23390.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(Global_23390.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar1++;
}
if(Global_4540958.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
if(bParam6){
if(!Global_23390.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23390.f_8892=1;
}}elseif(Global_23390.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23390.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23390.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23390.f_6103[iVar0 /*10*/], Global_23390.f_5496, Global_23390.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23390.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


void func_16(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_17(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


bool func_18(int iParam0, int iParam1){
bool bVar0;
if(!func_21(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_19(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_19(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_20();
}
if(Global_1575043[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_20(){
return Global_1574918;
}

int func_21(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 < 0){
return 0;
}
if(iVar0 >=32){
return 0;
}
return 1;
}

int func_22(){
struct<3> Var0;
if(Global_20500.f_1 > 3){
return 1;
}
if(func_23()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20445==0){
if(Var0.f_1 > -119f){
return 1;
}else{
return 0;
}}elseif(Var0.f_1 > -101f){
return 1;
}else{
return 0;
}}
return 0;
}

int func_23(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}

int func_24(bool bParam0, bool bParam1){
if(Global_2672524.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_26(8, -1) && func_25() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482){
return 0;
}
return 1;
}

int func_25(){
return Global_1574996;
}


var func__26(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

int func_27(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar1;
int iVar2;
int iVar3;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
iVar3=-1;
iVar2=0;
while (iVar2 < 6){
if(Global_23390.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23390.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23390.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


void func_28(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_29(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23390.f_5166 >=14){
StringCopy(&Global_4540958, sVar0, 64);
StringCopy(&(Global_4540958.f_16), sParam1, 16);
Global_4540958.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
}
StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
Global_23390.f_5450[Global_23390.f_5166]=iParam2;
Global_23390.f_5465[Global_23390.f_5166]=iParam0;
Global_23390.f_5480[Global_23390.f_5166]=32;
Global_23390.f_5166++;
}


void func_30(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23390.f_5166 >=14){
StringCopy(&Global_4540958, sVar0, 64);
StringCopy(&(Global_4540958.f_16), sParam1, 16);
Global_4540958.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
Global_23390.f_5450[Global_23390.f_5166]=iParam2;
Global_23390.f_5465[Global_23390.f_5166]=363;
Global_23390.f_5480[Global_23390.f_5166]=iParam0;
Global_23390.f_5166++;
}


void func_31(int iParam0){
int iVar0;
int iVar1;
Global_23390.f_5166=0;
Global_23390.f_5167=0;
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
Global_23390.f_5450[iVar0]=-1;
Global_23390.f_5465[iVar0]=363;
Global_23390.f_5480[iVar0]=32;
iVar0++;
}
Global_23390.f_5495=0;
StringCopy(&(Global_4540958.f_16), "", 16);
Global_4540958.f_20=-1;
if(MISC::IS_PC_VERSION()){
if(!func_27(&iVar1, 0, iParam0)){
return;
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23390.f_6103[iVar1 /*10*/])){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


bool func_32(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_27(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23390.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23390.f_6078[iVar0 /*4*/]), 9);
Global_23390.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23390.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23390.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23390.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23390.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_33(&(Global_23390.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_33(var uParam0){
switch (uParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
uParam0->f_9=1;
if(uParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}}}else{
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_9=0;
}
break;
}
return uParam0->f_9==2;
}


void func_34(){
int iVar0;
if(!MISC::IS_BIT_SET(Local_64.f_60, 7)){
iVar0=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
if(Local_64.f_56 !=iVar0){
GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
Local_64.f_56=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
}}}


void func_35(){
if(MISC::IS_BIT_SET(Local_64.f_60, 6)){
if(MISC::IS_BIT_SET(Local_64.f_60, 5)){
func_37();
}}elseif(!MISC::IS_BIT_SET(Local_64.f_60, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80))){
func_36(&(Local_63.f_80));
}}


void func_36(var uParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return;
}
if(MISC::IS_BIT_SET(Local_64.f_60, 5)){}else{
PAD::INIT_PC_SCRIPTED_CONTROLS(uParam0);
MISC::SET_BIT(&(Local_64.f_60), 5);
}}


void func_37(){
if(MISC::IS_BIT_SET(Local_64.f_60, 5)){
PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
MISC::CLEAR_BIT(&(Local_64.f_60), 5);
}}


void func_38(){
struct<3> Var0;
if(Local_63.f_17==4){
return;
}
if(MISC::IS_BIT_SET(Local_64.f_60, 1)){
return;
}
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_64.f_36)){
Local_64.f_36=GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_63.f_86.f_1);
return;
}
Var0={
CAM::GET_CAM_ROT(Local_64.f_0, 2) 
};
switch (Local_63.f_17){
case 1:
case 2:
case 3:
if(!Local_64.f_37){
Local_64.f_37=1;
func_41(Local_64.f_36, Local_63.f_20);
func_40(Local_64.f_36, Local_63.f_20.f_1, Local_63.f_20.f_2, Local_63.f_20.f_3);
}
case 0:
func_39(Local_64.f_36, 0f, CAM::GET_CAM_FOV(Local_64.f_0), Local_63.f_4, Local_63.f_5, Var0.f_2);
break;
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_64.f_36, 255, 255, 255, 0, 0);
}


void func_39(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
fParam2=((fParam2 - fParam3) / (fParam4 - fParam3));
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_40(var uParam0, int iParam1, int iParam2, int iParam3){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_41(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_42(){
struct<4> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
if(Local_63.f_94 !=0){
Local_64.f_4={
ENTITY::GET_ENTITY_COORDS(Local_63.f_95, 1) 
};
Local_64.f_4.f_3={
ENTITY::GET_ENTITY_ROTATION(Local_63.f_95, 2) 
};
}
if(!MISC::IS_BIT_SET(Local_64.f_60, 2)){
Var0={
func_47(Local_64.f_0, &(Local_64.f_1), Local_63, Local_63.f_6.f_1, Local_63.f_6) 
};
}
Var1={
Local_63.f_91 + Local_64.f_1 
};
Var2={
func_46(Local_63.f_71, Var1.f_2) 
};
Var3={
Local_63.f_88 + Var2 
};
switch (Local_63.f_94){
case 0:
func_45(Local_64.f_0, Var3, Var1);
break;
case 1:
func_44(Local_64.f_0, Var3, Var1, Local_63.f_95);
break;
}
func_43(Local_64.f_40, Local_64.f_40.f_2, Local_64.f_40.f_8, Local_64.f_40.f_3, Local_64.f_40.f_9, Local_64.f_40.f_4, Local_64.f_40.f_10, Local_64.f_40.f_5, Local_64.f_40.f_11, Local_64.f_40.f_6, Local_64.f_40.f_12, Local_64.f_40.f_7, Var0.f_0, Var0.f_1, Local_64.f_61.f_1, Local_64.f_61.f_2 > 0);
Local_64.f_4.f_6={
CAM::GET_CAM_COORD(Local_64.f_0) 
};
Local_64.f_4.f_9={
CAM::GET_CAM_ROT(Local_64.f_0, 2) 
};
}


void func_43(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam14, bool bParam15){
float fVar0;
var uVar1;
var uVar2;
bool bVar3;
float fVar4;
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0, 0, -1)){
if(fParam12 !=0f){
if(iParam4 !=-1){
if(AUDIO::HAS_SOUND_FINISHED(iParam4)){
AUDIO::PLAY_SOUND_FRONTEND(iParam4, uParam5, uParam1, 1);
}
AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
if(fParam12 < 0f){
AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
}else{
AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
}}}elseif(iParam4 !=-1){
if(!AUDIO::HAS_SOUND_FINISHED(iParam4)){
AUDIO::STOP_SOUND(iParam4);
}}
fVar0=vmag(Param13);
if(fVar0 > 0f){
if(iParam2 !=-1){
if(AUDIO::HAS_SOUND_FINISHED(iParam2)){
AUDIO::PLAY_SOUND_FRONTEND(iParam2, uParam3, sParam1, 1);
}
AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
}}elseif(iParam2 !=-1){
if(!AUDIO::HAS_SOUND_FINISHED(iParam2)){
AUDIO::STOP_SOUND(iParam2);
}}
if(iParam6 !=-1){
if(AUDIO::HAS_SOUND_FINISHED(iParam6)){
AUDIO::PLAY_SOUND_FRONTEND(iParam6, uParam7, sParam1, 1);
}}
uVar1=PLAYER::PLAYER_PED_ID();
if(PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0)){
uVar2=PED::GET_VEHICLE_PED_IS_IN(uVar1, 0);
}else{
uVar2=uVar1;
}
if(iParam8 !=-1){
bVar3=bParam15;
if(!bVar3){
fVar4=to_float(ENTITY::GET_ENTITY_MAX_HEALTH(uVar2));
bVar3=(IntToFloat(iParam14) / fVar4) > 0.1f;
}
if(bVar3){
if(AUDIO::HAS_SOUND_FINISHED(iParam8)){
AUDIO::PLAY_SOUND_FRONTEND(iParam8, uParam9, uParam9, 1);
}}}
if(iParam10 !=-1){
if((IntToFloat(ENTITY::GET_ENTITY_HEALTH(uVar1)) / to_float(ENTITY::GET_ENTITY_MAX_HEALTH(uVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(uVar2)) / to_float(ENTITY::GET_ENTITY_MAX_HEALTH(uVar2))) < 0.15f){
if(AUDIO::HAS_SOUND_FINISHED(iParam10)){
AUDIO::PLAY_SOUND_FRONTEND(iParam10, uParam11, sParam1, 1);
}}elseif(!AUDIO::HAS_SOUND_FINISHED(iParam10)){
AUDIO::STOP_SOUND(iParam10);
}}}}


void func_44(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3){
CAM::ATTACH_CAM_TO_ENTITY(uParam0, uParam3, Param1, 1);
CAM::SET_CAM_ROT(uParam0, Param2 + ENTITY::GET_ENTITY_ROTATION(uParam3, 2), 2);
}


void func_45(var uParam0, struct<3> Param1, struct<3> Param2){
CAM::SET_CAM_COORD(uParam0, Param1);
CAM::SET_CAM_ROT(uParam0, Param2, 2);
}


Vector3 func__46(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
float fVar2;
fVar1=sin(fParam1);
fVar2=cos(fParam1);
Var0.f_0=((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
Var0.f_1=((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
Var0.f_2=Param0.f_2;
return Var0;
}


struct<4> func_47(var uParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4){
float fVar0;
struct<4> Var1;
float fVar2;
struct<3> Var3;
float fVar4;
float fVar5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
float fVar9;
struct<3> Var10;
bool bVar11;
fVar0=CAM::GET_CAM_FOV(uParam0);
Var1.f_0=-fVar0;
Var1.f_1={
-*uParam1 
};
fVar2=PAD::GET_DISABLED_CONTROL_NORMAL(0, 39);
Var3={
-Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) 
};
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fParam3=(fParam3 * 8f);
}else{
if(MISC::ABSF(fVar2) < 0.06f){
fVar2=0f;
}
if(vmag(Var3) < 0.06f){
Var3={
0f, 0f, 0f 
};
}}
fVar4=MISC::GET_FRAME_TIME();
fVar5=func_50((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
CAM::SET_CAM_FOV(uParam0, fVar5);
CAM::SET_CAM_NEAR_CLIP(uParam0, 0.01f);
fVar6=((fVar5 - 5f) / 42f);
CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(1f);
GRAPHICS::SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(fVar6);
Var7.f_0=Param2.f_2;
Var7.f_1=0f;
Var7.f_2=Param2.f_0;
Var8.f_0=Param2.f_3;
Var8.f_1=0f;
Var8.f_2=Param2.f_1;
fVar9=(((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
Var10={
Var3 
};
Var10.f_2=(Var10.f_2 * fVar9);
Var10.f_0=(Var10.f_0 * fVar9);
*uParam1={
*uParam1 + Var10 
};
bVar11=Var7.f_2 > Var8.f_2;
if(bVar11){
*uParam1=func_50(*uParam1, Var7.f_0, Var8.f_0);
uParam1->f_1=func_50(uParam1->f_1, Var7.f_1, Var8.f_1);
uParam1->f_2=func_49(uParam1->f_2);
}else{
*uParam1={
func_48(*uParam1, Var7, Var8) 
};
}
Var1.f_0=(Var1.f_0 + fVar5);
Var1.f_1={
Var1.f_1 + *uParam1 
};
return Var1;
}


Vector3 func__48(struct<3> Param0, struct<3> Param1, struct<3> Param2){
Param0.f_0=func_50(Param0.f_0, Param1.f_0, Param2.f_0);
Param0.f_1=func_50(Param0.f_1, Param1.f_1, Param2.f_1);
Param0.f_2=func_50(Param0.f_2, Param1.f_2, Param2.f_2);
return Param0;
}


float func_49(float fParam0){
while (fParam0 > 180f){
fParam0=(fParam0 - 360f);
}
while (fParam0 < -180f){
fParam0=(fParam0 + 360f);
}
return fParam0;
}


float func_50(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_51(){
switch (Local_63.f_8.f_1){
case 1:
func_86();
break;
case 2:
func_71();
break;
case 3:
func_52();
break;
}}


void func_52(){
var uVar0;
var uVar1;
struct<3> Var2;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1){
if(!Local_64.f_29.f_5){
Local_64.f_29.f_5=1;
}
if(!func_66(4, 0f, 0f, 0f, Local_64.f_4.f_6, 0f, 0f, 0f)){
if(func_65()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
return;
}}
if(Local_64.f_29){
if(CAM::IS_SCREEN_FADED_OUT()){
if(Local_64.f_29.f_1){
if(func_63(PLAYER::PLAYER_ID())){
CAM::DO_SCREEN_FADE_IN(250);
AUDIO::PLAY_SOUND_FROM_COORD(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Local_64.f_29.f_2, Local_64.f_40.f_13, 1, 500, 0);
Local_64.f_29.f_1=0;
Local_64.f_29=0;
}}else{
Local_64.f_29.f_1=1;
func_62(&(Local_64.f_17), 0, 0);
MISC::SET_BIT(&Global_2764920, 0);
func_59(3f, 100f, &(Local_64.f_29.f_2), &uVar0, &uVar1, &Var2);
func_58(1);
func_56(Local_64.f_29.f_2, Var2);
}}}
if(func_55() || Local_64.f_29){
MISC::SET_BIT(&(Local_64.f_60), 1);
MISC::SET_BIT(&(Local_64.f_60), 2);
MISC::SET_BIT(&(Local_64.f_60), 3);
if(!Local_64.f_29){
MISC::SET_BIT(&(Local_64.f_60), 6);
MISC::SET_BIT(&(Local_64.f_60), 7);
}
return;
}
if(func_65()){
if(func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0)){
Local_64.f_29=1;
CAM::DO_SCREEN_FADE_OUT(250);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}}}

int func_53(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_54(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_54(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}


bool func_55(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


void func_56(struct<3> Param0, struct<3> Param1){
if(!func_57(Global_1963795.f_13, Param0, 0)){
Global_1963795.f_13={
Param0 
};
Param1={
Param1 + Vector(0f, -180f, 180f) 
};
Global_1963795.f_16={
Param1 
};
}}


bool func_57(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_58(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1963795.f_2, 4)){
Global_1963795.f_2=0;
MISC::SET_BIT(&(Global_1963795.f_2), 4);
}}elseif(MISC::IS_BIT_SET(Global_1963795.f_2, 4)){
MISC::CLEAR_BIT(&(Global_1963795.f_2), 4);
}}


void func_59(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
int iVar4;
float fVar5;
int iVar6;
float fVar7;
if(Local_63.f_74==0){
*uParam5={
CAM::GET_CAM_ROT(Local_64.f_0, 2) 
};
*uParam4={
func_7(*uParam5) 
};
*uParam2={
Local_64.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 
};
*uParam3={
func_61(*uParam2, fParam1) 
};
}else{
Var0={
func_7(CAM::GET_CAM_ROT(Local_64.f_0, 2)) 
};
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_95, Local_63.f_88) 
};
Var2={
ENTITY::GET_ENTITY_BONE_POSTION(Local_63.f_95, Local_63.f_74.f_1[0]) 
};
Var3={
Var2 - Var1 
};
*uParam2={
Var2 
};
iVar4=0;
fVar5=func_60(Var3, Var0);
iVar6=1;
while (iVar6 <=(Local_63.f_74 - 1)){
Var2={
ENTITY::GET_ENTITY_BONE_POSTION(Local_63.f_95, Local_63.f_74.f_1[iVar6]) 
};
Var3={
Var2 - Var1 
};
fVar7=func_60(Var3, Var0);
if(fVar7 > fVar5){
fVar5=fVar7;
iVar4=iVar6;
*uParam2={
Var2 
};
}
iVar6++;
}
*uParam5={
ENTITY::GET_ENTITY_BONE_ROTATION(Local_63.f_95, Local_63.f_74.f_1[iVar4]) 
};
*uParam4={
func_7(*uParam5) 
};
*uParam2={
*uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 
};
*uParam3={
*uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 
};
}}


float func_60(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__61(struct<3> Param0, float fParam1){
struct<3> Var0;
struct<3> Var1;
Var0={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
Var1={
func_7(Var0) 
};
return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}


void func_62(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}

int func_63(int iParam0){
if(iParam0 !=func_64()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_366, 26);
}
return 0;
}

int func_64(){
return -1;
}


bool func_65(){
return (MISC::IS_BIT_SET(Global_2764920, 4) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 229));
}

int func_66(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3){
struct<9> Var0;
if(func_70()){
if(!func_69(&uLocal_46)){
func_54(&uLocal_46, 0, 0);
}elseif(func_53(&uLocal_46, 8000, 0)){
func_68(&uLocal_46);
func_67(0);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_48) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone"))){
SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
}
if((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_48)) && !func_70()){
Var0.f_1=-1;
Var0.f_0=0;
Var0.f_2={
Param1 
};
Var0.f_5={
Param2 
};
Var0.f_8={
Param3 
};
Var0.f_1=iParam0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1){
if(!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0.f_0, 1, 0)){
iLocal_48=start_new_script_with_name_hash_and_args(joaat("am_mp_drone"), &Var0, 12, 1424);
SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
func_68(&uLocal_46);
}else{
return 1;
}}}elseif(SCRIPT::IS_THREAD_ACTIVE(iLocal_48) && !func_70()){
return 1;
}
return 0;
}


void func_67(bool bParam0){
if(bParam0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0){
if(!func_70()){
MISC::SET_BIT(&Global_1963795, 0);
}}}elseif(func_70()){
MISC::CLEAR_BIT(&Global_1963795, false);
}}


void func_68(var uParam0){
uParam0->f_1=0;
}


bool func_69(var uParam0){
return uParam0->f_1;
}


bool func_70(){
return MISC::IS_BIT_SET(Global_1963795, 0);
}


void func_71(){
bool bVar0;
int iVar1;
var uVar2;
var uVar3;
struct<3> Var4;
struct<3> Var5;
func_78();
if(Local_64.f_22 !=-1){
bVar0=func_53(&(Local_64.f_22.f_2), 2000, 0);
if(bVar0){
if(ENTITY::IS_ENTITY_A_VEHICLE(Local_64.f_22.f_4)){
uVar2=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_64.f_22.f_4);
VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(uVar2, 2);
}
func_77(&(Local_64.f_22.f_5));
func_76(&(Local_64.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
iVar1=6;
}else{
if(ENTITY::IS_ENTITY_A_VEHICLE(Local_64.f_22.f_4)){
uVar3=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_64.f_22.f_4);
VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(uVar3, 1);
}
func_76(&(Local_64.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
iVar1=9;
}
func_73(Local_64.f_22.f_4, !bVar0, iVar1);
if(func_65()){
if(Local_63.f_16 !=0 && !STREAMING::HAS_MODEL_LOADED(Local_63.f_16)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
return;
}
if(bVar0 && func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0)){
func_62(&(Local_64.f_17), 0, 0);
func_72(1f, &Var4, &Var5);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var5, Local_63.f_8.f_3, 1, Local_63.f_8, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, Local_63.f_95, 0, 0, Local_64.f_22, 1, 0, Local_63.f_94 !=0, 0);
AUDIO::PLAY_SOUND_FROM_COORD(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Var4, Local_64.f_40.f_13, 1, 500, 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}}}}


void func_72(float fParam0, var uParam1, var uParam2){
var uVar0;
func_59(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}


void func_73(var uParam0, bool bParam1, int iParam2){
float fVar0;
float fVar1;
struct<3> Var2;
var uVar3;
var uVar4;
var uVar5;
int iVar6;
var uVar7;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud")){
return;
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
Var2={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
GRAPHICS::SET_DRAW_ORIGIN(Var2, 0);
fVar0=func_75(uParam0, Local_64.f_0, 0.5f);
fVar0=func_50(fVar0, 0.015f, fVar0);
fVar1=(fVar0 * GRAPHICS::GET_ASPECT_RATIO(0));
HUD::GET_HUD_COLOUR(iParam2, &uVar3, &uVar4, &uVar5, &iVar6);
uVar7=func_74((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), ceil((to_float(iVar6) / 4f)), iVar6);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar3, uVar4, uVar5, uVar7, 0, 0);
GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_74(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}


float func_75(var uParam0, var uParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
Var0={
CAM::GET_CAM_COORD(uParam1) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, 1);
fVar3=CAM::GET_CAM_FOV(uParam1);
fVar4=1f;
fVar5=(fVar4 / MISC::TAN((fVar3 / 2f)));
fVar6=((fVar5 * fParam2) / fVar2);
return fVar6;
}


void func_76(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, iParam3);
}}


void func_77(var uParam0){
if(*uParam0 !=-1){
AUDIO::STOP_SOUND(*uParam0);
AUDIO::RELEASE_SOUND_ID(*uParam0);
*uParam0=-1;
}}


void func_78(){
bool bVar0;
var uVar1;
if(func_85(&(Local_64.f_22.f_1), Local_64.f_22.f_4, &bVar0)){
if(bVar0){
if(Local_64.f_22 !=Local_64.f_22.f_4){
func_62(&(Local_64.f_22.f_2), 0, 0);
func_77(&(Local_64.f_22.f_5));
func_77(&(Local_64.f_22.f_6));
}
Local_64.f_22=Local_64.f_22.f_4;
}else{
func_84();
uVar1=func_82(Local_63.f_8.f_4);
Local_64.f_22.f_4=uVar1;
}
if(Local_64.f_22.f_4 !=-1){
func_80(Local_64.f_22.f_4);
}}
if(Local_64.f_22 !=-1){
if(((Local_64.f_22.f_4 !=Local_64.f_22 || ENTITY::IS_ENTITY_DEAD(Local_64.f_22, 0)) || func_79(Local_64.f_22) > 0.04f) || vmag(ENTITY::GET_ENTITY_COORDS(Local_64.f_22, 1) - Local_64.f_4.f_6) > Local_63.f_8.f_4){
func_84();
}}}


float func_79(var uParam0){
struct<3> Var0;
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
if(!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Var0, &(Var0.f_1))){
return 1f;
}
Var0={
Var0 - Vector(0f, 0.5f, 0.5f) 
};
Var0.f_2=0f;
return vmag2(Var0);
}


void func_80(var uParam0){
struct<3> Var0;
struct<3> Var1;
Var0={
CAM::GET_CAM_COORD(Local_64.f_0) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
Var1={
Var1 + Vector(2f, 2f, 2f) * func_81(Var1 - Var0) 
};
Local_64.f_22.f_1=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 4);
if(Local_64.f_22.f_1==0){}}


Vector3 func__81(struct<3> Param0){
float fVar0;
float fVar1;
fVar0=vmag(Param0);
if(fVar0 !=0f){
fVar1=(1f / fVar0);
Param0={
Param0 * Vector(fVar1, fVar1, fVar1) 
};
}else{
Param0.f_0=0f;
Param0.f_1=0f;
Param0.f_2=0f;
}
return Param0;
}

int func_82(float fParam0){
int iVar0;
bool bVar1;
int iVar2;
float fVar3;
bool bVar4;
float fVar5;
int iVar6;
int iVar7;
var uVar8;
float fVar9;
var uVar10;
int iVar11;
iVar0=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
bVar1=iVar0 !=-1;
fVar3=0.005f;
bVar4=false;
fVar5=(fParam0 * fParam0);
iVar6=0;
while (iVar6 < 32){
iVar7=iVar6;
uVar8=PLAYER::GET_PLAYER_PED(iVar7);
if(((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_83(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7)==iVar0)) || vmag2(Local_64.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(uVar8, 1)) > fVar5){
}else{
fVar9=func_79(uVar8);
if(fVar9 < fVar3){
iVar2=iVar7;
fVar3=fVar9;
bVar4=true;
}}
iVar6++;
}
if(bVar4){
uVar10=PLAYER::GET_PLAYER_PED(iVar2);
if(PED::IS_PED_IN_ANY_VEHICLE(uVar10, 0)){
iVar11=PED::GET_VEHICLE_PED_IS_IN(uVar10, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar11, 0)){
return iVar11;
}}}
return -1;
}

int func_83(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672524.f_3){
return Global_2672524.f_2;
}elseif(Global_2657704[iVar0 /*463*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}


void func_84(){
Local_64.f_22=-1;
Local_64.f_22.f_4=-1;
func_77(&(Local_64.f_22.f_5));
func_77(&(Local_64.f_22.f_6));
}

int func_85(var uParam0, int iParam1, var uParam2){
int iVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
var uVar5;
*uParam2=0;
if(*uParam0==0 || iParam1==-1){
return 1;
}
iVar4=SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
if(!ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
if(ENTITY::IS_ENTITY_A_PED(iVar3)){
uVar5=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(uVar5, 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(uVar5, 0);
}}}
if(iVar4==2){
if(iVar0 !=0){
if(ENTITY::DOES_ENTITY_EXIST(iVar3)){
*uParam2=(iParam1==iVar3 && !ENTITY::IS_ENTITY_DEAD(iVar3, 0));
}}
return 1;
}elseif(iVar4==0){
return 1;
}
return 0;
}


void func_86(){
bool bVar0;
bool bVar1;
int iVar2;
char* sVar3;
int iVar4;
int iVar5;
struct<3> Var6;
struct<3> Var7;
var uVar8;
struct<3> Var9;
struct<3> Var10;
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, 1);
bVar0=Local_63.f_13.f_1 > 0;
bVar1=(bVar0 && !func_53(&(Local_64.f_19), Local_63.f_13.f_2, 0));
if(bVar0){
if(bVar1){
iVar2=6;
sVar3="TC_RELOAD";
iVar5=Local_63.f_13.f_2;
iVar4=func_95(&(Local_64.f_19), 0, 0);
}else{
iVar2=1;
sVar3="TC_AMMO";
iVar5=Local_63.f_13.f_1;
iVar4=(iVar5 - Local_64.f_19.f_2);
}
func_92(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}
if(bVar0 && !bVar1){
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225)){
func_91();
}}
if(!bVar1 && func_90()){
Local_64.f_19.f_2=(Local_64.f_19.f_2 + round((MISC::GET_FRAME_TIME() * 1000f)));
if(func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0)){
func_62(&(Local_64.f_17), 0, 0);
if(Local_63.f_13.f_1 > 0 && Local_64.f_19.f_2 >=Local_63.f_13.f_1){
func_62(&(Local_64.f_19), 0, 0);
Local_64.f_19.f_2=0;
}
func_59(0f, Local_63.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
Var10={
Vector(Local_63.f_13, Local_63.f_13, Local_63.f_13) * func_87(0f, 0f, 0f, 1f) 
};
Var10.f_1=0f;
Var9={
Var9 + Var10 
};
Var7={
Var6 + FtoV(vmag(Var7 - Var6)) * func_7(Var9) 
};
Var6.f_2=(Var6.f_2 - 1f);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var6, Var7, Local_63.f_8.f_3, 0, Local_63.f_8, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, Local_63.f_95, 0, 0, 0, 1, 0, Local_63.f_94 !=0, 0);
if(Local_64.f_40.f_13.f_2 !=-1 && AUDIO::HAS_SOUND_FINISHED(Local_64.f_40.f_13.f_2)){
AUDIO::PLAY_SOUND_FROM_COORD(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Var6, Local_64.f_40.f_13, 1, 500, 0);
}}}elseif(Local_64.f_40.f_13.f_2 !=-1 && !AUDIO::HAS_SOUND_FINISHED(Local_64.f_40.f_13.f_2)){
AUDIO::STOP_SOUND(Local_64.f_40.f_13.f_2);
}}


Vector3 func__87(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
int iVar2;
fVar1=(fParam1 * fParam1);
iVar2=0;
while (iVar2 < 20){
Var0={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1) 
};
if(vdist2(Var0, 0f, 0f, 0f) <=fVar1){
return Param0 + Var0;
}
iVar2++;
}
return func_88(Param0, fParam1);
}


Vector3 func__88(struct<3> Param0, float fParam1){
struct<3> Var0;
Var0={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) 
};
return Param0 + func_89(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam1));
}


Vector3 func__89(struct<3> Param0, float fParam1){
float fVar0;
if(fParam1==0f){
return 0f, 0f, 0f;
}
fVar0=vmag(Param0);
if(fVar0 !=0f){
return Param0 * FtoV((fParam1 / fVar0));
}
return 0f, 0f, 0f;
}


var func__90(){
return (MISC::IS_BIT_SET(Global_2764920, 4) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 229));
}


void func_91(){
func_62(&(Local_64.f_19), 0, 0);
Local_64.f_19.f_2=0;
}


void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_94(0, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655612.f_1=1;
func_93(0, iVar0);
Global_1655612.f_1177[iVar0]=iParam0;
Global_1655612.f_1177.f_11[iVar0]=iParam1;
StringCopy(&(Global_1655612.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
Global_1655612.f_1177.f_194[iVar0]=iParam3;
Global_1655612.f_1177.f_183[iVar0]=iParam4;
Global_1655612.f_1177.f_216[iVar0]=iParam5;
Global_1655612.f_1177.f_227[iVar0 /*3*/]=iParam6;
Global_1655612.f_1177.f_227[iVar0 /*3*/].f_1=iParam7;
Global_1655612.f_1177.f_258[iVar0]=iParam8;
Global_1655612.f_1177.f_269[iVar0]=iParam9;
Global_1655612.f_1177.f_312[iVar0]=iParam10;
Global_1655612.f_1177.f_323[iVar0]=iParam11;
Global_1655612.f_1177.f_334[iVar0]=iParam12;
Global_1655612.f_1177.f_345[iVar0]=iParam13;
Global_1655612.f_1172=1;
Global_1655612.f_1177.f_356[iVar0]=iParam14;
Global_1655612.f_1177.f_367[iVar0]=iParam15;
Global_1655612.f_1177.f_378[iVar0]=iParam16;
Global_1655612.f_1177.f_389[iVar0]=iParam17;
Global_1655612.f_1177.f_400[iVar0]=iParam18;
Global_1655612.f_1177.f_411[iVar0]=iParam19;
Global_1655612.f_1177.f_422[iVar0]=iParam20;
Global_1655612.f_1177.f_433[iVar0]=iParam21;
Global_1655612.f_1177.f_444[iVar0]=iParam22;
Global_1655612.f_1177.f_455[iVar0]=iParam23;
Global_1655612.f_1177.f_466[iVar0]=iParam24;
Global_1655612.f_1177.f_205[iVar0]=iParam25;
Global_1655612.f_1177.f_477[iVar0]=iParam26;
Global_1655612.f_1177.f_488[iVar0]=iParam27;
Global_1655612.f_1177.f_499[iVar0]=iParam28;
Global_1655612.f_1177.f_510[iVar0]=iParam29;
Global_1655612.f_1177.f_521[iVar0]=iParam30;
Global_1655612.f_1177.f_532[iVar0]=iParam31;
Global_1655612.f_1177.f_543[iVar0]=iParam32;
Global_1655612.f_1177.f_554[iVar0]=iParam33;
Global_1655612.f_1177.f_565[iVar0]=iParam34;
Global_1655612.f_1177.f_576[iVar0]=iParam35;
Global_1655612.f_1177.f_587[iVar0]=iParam36;
}}


void func_93(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_94(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}


var func__95(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


bool func_96(){
return Global_75816;
}


void func_97(int iParam0){
var uVar0;
uVar0=iParam0;
func_104(iParam0);
if(func_103(&uVar0, 2)){
func_62(&(Local_64.f_17), 0, 0);
Local_63.f_8={
Global_2764832.f_8 
};
}
if(func_103(&uVar0, 6)){
Local_63.f_19=Global_2764832.f_19;
}
if(func_103(&uVar0, 10)){
Local_63.f_74={
Global_2764832.f_74 
};
}
if(func_103(&uVar0, 8)){
Local_63.f_67={
Global_2764832.f_67 
};
}
if(func_103(&uVar0, 12)){
Local_63.f_20={
Global_2764832.f_20 
};
}
func_98(iParam0);
}


void func_98(int iParam0){
var uVar0;
uVar0=iParam0;
if(func_103(&uVar0, 0)){}
if(func_103(&uVar0, 1)){}
if(func_103(&uVar0, 2)){
Local_63.f_8={
Global_2764832.f_8 
};
switch (Local_63.f_8.f_1){
case 1:
GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
if(Local_64.f_19.f_2==0 && func_102()){
func_99(&(Local_64.f_19), Local_63.f_13.f_2, 0, 0);
}else{
func_91();
}
break;
case 2:
Local_63.f_86="helicopterhud";
Local_63.f_16=Global_2764832.f_16;
if(Local_63.f_16 !=0){
STREAMING::REQUEST_MODEL(Local_63.f_16);
}
break;
default:
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86)){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_63.f_86, 0);
}}
if(func_103(&uVar0, 4)){
switch (Local_63.f_17){
case 4:
Local_63.f_86.f_1="";
break;
case 0:
Local_63.f_86.f_1="turret_cam";
break;
case 1:
Local_63.f_86.f_1="ARENA_GUN_CAM_APOCALYPSE";
break;
case 2:
Local_63.f_86.f_1="ARENA_GUN_CAM_SCIFI";
break;
case 3:
Local_63.f_86.f_1="ARENA_GUN_CAM_CONSUMER";
break;
default:
Local_63.f_86.f_1="UNDEFINED";
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86.f_1)){
Local_64.f_36=GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_63.f_86.f_1);
}}
if(func_103(&uVar0, 6)){
Local_64.f_40.f_13.f_2=-1;
switch (Local_63.f_19){
case 0:
Local_64.f_40.f_13="dlc_aw_Arena_Spectator_Turret_turret_Sounds";
Local_64.f_40.f_13.f_1="Fire_MG_Loop";
Local_64.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 1:
Local_64.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
Local_64.f_40.f_13.f_1="Fire_MG_Loop";
Local_64.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 2:
Local_64.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
Local_64.f_40.f_13.f_1="Fire_Rockets_Oneshot";
Local_64.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
case 3:
Local_64.f_40.f_13="dlc_aw_Arena_Gun_Turret_Sounds";
Local_64.f_40.f_13.f_1="Launch_Piloted_Missile";
Local_64.f_40.f_13.f_2=AUDIO::GET_SOUND_ID();
break;
default:
Local_64.f_40.f_13=0;
Local_64.f_40.f_13.f_1=0;
Local_64.f_40.f_13.f_2=-1;
break;
}}
if(func_103(&uVar0, 5)){
Local_64.f_40.f_10=-1;
Local_64.f_40.f_8=-1;
Local_64.f_40.f_9=-1;
Local_64.f_40.f_11=-1;
Local_64.f_40.f_12=-1;
switch (Local_63.f_18){
case 0:
Local_64.f_40="SCRIPT\POLICE_CHOPPER_CAM";
Local_64.f_40.f_1="dlc_aw_arena_turret_scene";
Local_64.f_40.f_2="dlc_aw_Arena_Spectator_Turret_turret_Sounds";
Local_64.f_40.f_5="Turret_Camera_Hum_Loop";
Local_64.f_40.f_10=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_3="Pan";
Local_64.f_40.f_8=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_4="Zoom";
Local_64.f_40.f_9=AUDIO::GET_SOUND_ID();
break;
case 1:
Local_64.f_40="SCRIPT\POLICE_CHOPPER_CAM";
Local_64.f_40.f_1="dlc_aw_arena_turret_scene";
Local_64.f_40.f_2="dlc_aw_Arena_Gun_Turret_Sounds";
Local_64.f_40.f_5="Turret_Camera_Hum_Loop";
Local_64.f_40.f_10=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_3="Pan";
Local_64.f_40.f_8=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_4="Zoom";
Local_64.f_40.f_9=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_6="Take_Damage";
Local_64.f_40.f_11=AUDIO::GET_SOUND_ID();
Local_64.f_40.f_7="Low_Health_Warning";
Local_64.f_40.f_12=AUDIO::GET_SOUND_ID();
break;
default:
Local_64.f_40=0;
Local_64.f_40.f_2=0;
Local_64.f_40.f_5=0;
Local_64.f_40.f_10=-1;
Local_64.f_40.f_3=0;
Local_64.f_40.f_8=-1;
Local_64.f_40.f_4=0;
Local_64.f_40.f_9=-1;
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_40)){
AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_64.f_40, 0, -1);
}}
if(func_103(&uVar0, 3)){}
if(func_103(&uVar0, 7)){
if(Local_63.f_24 > 0){
func_32(0, -1, 0);
}}
if(func_103(&uVar0, 8)){}
if(func_103(&uVar0, 9)){}
if(func_103(&uVar0, 10)){}
if(func_103(&uVar0, 11)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80))){
func_36(&(Local_63.f_80));
}}
if(func_103(&uVar0, 12)){}}


void func_99(var uParam0, int iParam1, bool bParam2, bool bParam3){
if(uParam0->f_1==0){
*uParam0=NETWORK::GET_TIME_OFFSET(func_101(bParam2, bParam3), func_100(-iParam1, 0));
uParam0->f_1=1;
}}

int func_100(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam1;
}
return iParam0;
}

int func_101(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0){
if(!bParam1){
return NETWORK::GET_NETWORK_TIME();
}else{
return NETWORK::GET_NETWORK_TIME_ACCURATE();
}}
return MISC::GET_GAME_TIMER();
}


bool func_102(){
return (!func_69(&(Local_64.f_19)) || func_53(&(Local_64.f_19), Local_63.f_13.f_2, 0));
}

int func_103(var uParam0, bool bParam1){
if(MISC::IS_BIT_SET(*uParam0, bParam1)){
MISC::CLEAR_BIT(uParam0, bParam1);
return 1;
}
return 0;
}


void func_104(int iParam0){
if(func_103(&iParam0, 0)){}
if(func_103(&iParam0, 1)){}
if(func_103(&iParam0, 2)){
Local_64.f_37=0;
switch (Local_63.f_8.f_1){
case 1:
GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
break;
case 3:
if(Local_64.f_29){
CAM::DO_SCREEN_FADE_IN(250);
}
Local_64.f_29.f_1=0;
Local_64.f_29=0;
if(Local_64.f_29.f_5){
Local_64.f_29.f_5=0;
func_67(1);
}
break;
case 2:
func_84();
if(Local_63.f_16 !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_63.f_16);
Local_63.f_16=0;
}
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86)){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_63.f_86);
Local_63.f_86="";
}}
if(func_103(&iParam0, 3)){}
if(func_103(&iParam0, 4)){
Local_64.f_37=0;
Local_63.f_86.f_1="";
if(Local_64.f_36 !=-1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_64.f_36));
Local_64.f_36=-1;
}}
if(func_103(&iParam0, 6)){
func_77(&(Local_64.f_40.f_13.f_2));
}
if(func_103(&iParam0, 5)){
AUDIO::STOP_AUDIO_SCENES();
AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_40)){
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_64.f_40);
}
func_77(&(Local_64.f_40.f_8));
func_77(&(Local_64.f_40.f_9));
func_77(&(Local_64.f_40.f_10));
func_77(&(Local_64.f_40.f_11));
func_77(&(Local_64.f_40.f_12));
}
if(func_103(&iParam0, 7)){
if(Local_63.f_24 > 0){
func_105(1, -1);
}}
if(func_103(&iParam0, 8)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_67)) && func_12(&(Local_63.f_67))){
HUD::CLEAR_HELP(1);
}}
if(func_103(&iParam0, 9)){}
if(func_103(&iParam0, 10)){}
if(func_103(&iParam0, 11)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80))){
func_37();
StringCopy(&(Local_63.f_80), "", 16);
}}
if(func_103(&iParam0, 12)){
Local_64.f_37=0;
}}


void func_105(bool bParam0, int iParam1){
int iVar0;
if(!func_27(&iVar0, 0, iParam1)){
return;
}
if(Global_23390.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23390.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23390.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23390.f_6071[iVar0]=0;
}
if(Global_23390.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23390.f_6057[iVar0]=0;
}
if(Global_23390.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23390.f_6064[iVar0]=0;
}
if(bParam0){
func_106(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_106(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}


void func_107(){
if((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && MISC::IS_BIT_SET(Local_63.f_84.f_1, 1)){
CAM::DO_SCREEN_FADE_OUT(Local_63.f_84);
}
if(func_53(&(Local_64.f_58), Local_63.f_84, 0)){
if(!MISC::IS_BIT_SET(Local_63.f_84.f_1, 0) || func_109(Local_63.f_88, 0)){
if(!CAM::DOES_CAM_EXIST(Local_64.f_0)){
Local_64.f_0=CAM::CREATE_CAMERA(26379945, 1);
MISC::SET_BIT(&(Local_64.f_60), 2);
func_42();
MISC::CLEAR_BIT(&(Local_64.f_60), 2);
PLAYER::SET_SCRIPT_FIRE_POSITIO(Local_64.f_4.f_6);
}else{
if(MISC::IS_BIT_SET(Local_63.f_84.f_1, 0)){
STREAMING::NEW_LOAD_SCENE_STOP();
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
func_3(&(Local_64.f_38), &(Local_64.f_39));
func_38();
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_40.f_1)){
AUDIO::START_AUDIO_SCENE(Local_64.f_40.f_1);
}
func_62(&(Local_64.f_17), 0, 0);
MISC::SET_BIT(&Global_2764920, 3);
func_108(1);
if(GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >=0){
Local_64.f_57=1;
GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
}
GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
Local_64.f_56=GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
if(MISC::IS_BIT_SET(Local_63.f_84.f_1, 2)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(800);
}}}}}}


void func_108(int iParam0){
Local_64.f_16=iParam0;
}

int func_109(struct<3> Param0, int iParam1){
if(MISC::IS_BIT_SET(Local_64.f_60, 0)){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
return 1;
}}elseif(STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 100f, iParam1)){
MISC::SET_BIT(&(Local_64.f_60), 0);
}
return 0;
}


void func_110(int iParam0){
if(func_115()){
return;
}
if(!Global_20500.f_1==1){
if(func_114(0)){
func_111(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_111(int iParam0){
if(func_115()){
return;
}
if(Global_20704){
if(func_55()){
func_113(1, 1);
}else{
func_113(0, 0);
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
if(!func_112()){
Global_20500.f_1=3;
}}

int func_112(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_113(bool bParam0, bool bParam1){
if(bParam0){
if(func_114(0)){
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

int func_114(int iParam0){
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


bool func_115(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_116(){
if(Local_63.f_94 !=0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_63.f_95) || ENTITY::IS_ENTITY_DEAD(Local_63.f_95, 0)){
return 1;
}}
if(!func_83(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(Global_2764830){
return 1;
}
return 0;
}

int func_117(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_124()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_123()){
return 1;
}
if(func_122(159)){
if(!func_121()){
return 1;
}}
if(func_122(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_118() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_118())==0){
return 1;
}}
return 0;
}

int func_118(){
switch (func_120()){
case 0:
return func_119();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_119(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_120(){
return Global_32283;
}


bool func_121(){
return Global_2683883.f_698;
}

int func_122(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_123(){
return Global_2694576;
}


bool func_124(){
return Global_2683883.f_693;
}


void func_125(){
wait(0);
}


void func_126(){
var uVar0;
var uVar1;
if(Local_64.f_16==0 && MISC::IS_BIT_SET(Local_63.f_84.f_1, 1)){
CAM::DO_SCREEN_FADE_IN(250);
}
func_104(-1);
if(func_134()){
func_133(0);
}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
HUD::UNLOCK_MINIMAP_ANGLE();
HUD::UNLOCK_MINIMAP_POSITION();
uVar0=PLAYER::PLAYER_PED_ID();
if(func_132(uVar0) && PED::IS_PED_IN_ANY_VEHICLE(uVar0, 1)){
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1)){
AUDIO::SET_VEHICLE_RADIO_ENABLED(uVar1, 1);
func_130(1);
}}
if(MISC::IS_BIT_SET(Local_64.f_60, 4)){
func_129();
}
PLAYER::REMOVE_SCRIPT_FIRE_POSITION();
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
if(Local_64.f_57){
GRAPHICS::POP_TIMECYCLE_MODIFIER();
}
func_128(Local_64.f_38);
func_128(Local_64.f_39);
Global_2764819=0;
Global_2764920=0;
func_127();
}


void func_127(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_128(var uParam0){
if(HUD::DOES_BLIP_EXIST(uParam0)){
HUD::REMOVE_BLIP(&uParam0);
}}


void func_129(){
if(Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=0;
}}


void func_130(int iParam0){
var uVar0;
if(Global_2635560.f_2790==1){
Global_2635560.f_2790=0;
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!Global_2635560.f_2792.f_1){
if(!Global_2635560.f_2788==-1){
if(((Global_2635560.f_2788 < 255 && !func_131()) && !MISC::IS_BIT_SET(Global_4718592.f_171080, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2635560.f_2789==0 && iParam0==0))){
AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2635560.f_2788);
}elseif(Global_2635560.f_2788 >=255){
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
}}}}
Global_2635560.f_2788=-1;
Global_2635560.f_2792.f_1=1;
}}}


bool func_131(){
return Global_1889867;
}

int func_132(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_133(int iParam0){
Global_2697031=iParam0;
}


bool func_134(){
return Global_2697031;
}


void func_135(var uParam0){
MISC::SET_BIT(&Global_2764920, 2);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_153(0, -1, 0);
}else{
func_126();
}
func_136(uParam0);
}


void func_136(var uParam0){
var uVar0;
var uVar1;
Local_63.f_88={
*uParam0 
};
Local_63.f_91={
uParam0->f_3 
};
Local_63.f_94=uParam0->f_6;
Local_63.f_95=uParam0->f_7;
Local_64.f_22.f_4=-1;
uVar0=PLAYER::PLAYER_PED_ID();
if(func_132(uVar0) && PED::IS_PED_IN_ANY_VEHICLE(uVar0, 1)){
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1)){
func_152(1);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, 0);
}}
if(!func_151()){
MISC::SET_BIT(&(Local_64.f_60), 4);
func_150();
}
func_137();
}


void func_137(){
if(!MISC::IS_BIT_SET(Global_2764918, 0)){
func_149(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
}
if(!MISC::IS_BIT_SET(Global_2764918, 1)){
func_148(1058642330, 1101004800);
}
if(!MISC::IS_BIT_SET(Global_2764918, 2)){
func_147();
}
if(!MISC::IS_BIT_SET(Global_2764918, 3)){
func_145(1, 1, 0, 500);
}
if(!MISC::IS_BIT_SET(Global_2764918, 4)){
func_144(0);
}
if(!MISC::IS_BIT_SET(Global_2764918, 5)){
func_143(0);
}
if(!MISC::IS_BIT_SET(Global_2764918, 6)){
func_142(0);
}
if(!MISC::IS_BIT_SET(Global_2764918, 7)){
MISC::SET_BIT(&Global_2764918, 7);
Global_2764832.f_24=0;
}
if(!MISC::IS_BIT_SET(Global_2764918, 8)){
func_141(0);
}
if(!MISC::IS_BIT_SET(Global_2764918, 9)){
func_140(0f, 0f, 0f);
}
if(!MISC::IS_BIT_SET(Global_2764918, 10)){
MISC::SET_BIT(&Global_2764918, 10);
Global_2764832.f_74=0;
}
if(!MISC::IS_BIT_SET(Global_2764918, 11)){
func_139(0);
}
if(!MISC::IS_BIT_SET(Global_2764918, 12)){
func_138(1, 3, 3, 3);
}
Local_63={
Global_2764832 
};
func_98(Global_2764918);
func_108(0);
}


void func_138(int iParam0, int iParam1, int iParam2, int iParam3){
MISC::SET_BIT(&Global_2764918, 12);
Global_2764832.f_20=iParam0;
Global_2764832.f_20.f_1=iParam1;
Global_2764832.f_20.f_2=iParam2;
Global_2764832.f_20.f_3=iParam3;
}


void func_139(char* sParam0){
MISC::SET_BIT(&Global_2764918, 11);
StringCopy(&(Global_2764832.f_80), sParam0, 16);
}


void func_140(struct<3> Param0){
MISC::SET_BIT(&Global_2764918, 9);
Global_2764832.f_71={
Param0 
};
}


void func_141(char* sParam0){
MISC::SET_BIT(&Global_2764918, 8);
StringCopy(&(Global_2764832.f_67), sParam0, 16);
}


void func_142(int iParam0){
MISC::SET_BIT(&Global_2764918, 6);
Global_2764832.f_19=iParam0;
}


void func_143(int iParam0){
MISC::SET_BIT(&Global_2764918, 5);
Global_2764832.f_18=iParam0;
}


void func_144(int iParam0){
MISC::SET_BIT(&Global_2764918, 4);
Global_2764832.f_17=iParam0;
}


void func_145(bool bParam0, bool bParam1, bool bParam2, int iParam3){
MISC::SET_BIT(&Global_2764918, 3);
Global_2764832.f_84=iParam3;
func_146(&(Global_2764832.f_84.f_1), 1, bParam0);
func_146(&(Global_2764832.f_84.f_1), 2, bParam1);
func_146(&(Global_2764832.f_84.f_1), 0, bParam2);
}


void func_146(var uParam0, bool bParam1, bool bParam2){
if(bParam2){
MISC::SET_BIT(uParam0, bParam1);
}else{
MISC::CLEAR_BIT(uParam0, bParam1);
}}


void func_147(){
MISC::SET_BIT(&Global_2764918, 2);
Global_2764832.f_8.f_1=0;
}


void func_148(int iParam0, int iParam1){
MISC::SET_BIT(&Global_2764918, true);
Global_2764832.f_6.f_1=iParam0;
Global_2764832.f_6=iParam1;
}


void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
MISC::SET_BIT(&Global_2764918, false);
Global_2764832=iParam0;
Global_2764832.f_1=iParam1;
Global_2764832.f_2=iParam2;
Global_2764832.f_3=iParam3;
Global_2764832.f_4=iParam4;
Global_2764832.f_5=iParam5;
}


void func_150(){
if(!Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=1;
}}


bool func_151(){
return Global_2672524.f_947.f_10;
}


void func_152(int iParam0){
int iVar0;
iVar0=Global_2635560.f_2791;
if((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635560.f_2789==0) && iParam0==0){
iVar0=255;
}
if(!iVar0==Global_2635560.f_2788){
if(!AUDIO::IS_RADIO_RETUNING()){
Global_2635560.f_2788=iVar0;
}}}

int func_153(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_127();
}else{
return 0;
}}
if(!func_154(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_127();
}else{
return 0;
}}
if(func_124()){
if(!bParam2){
func_127();
}else{
return 0;
}}
if(func_122(157)){
if(!bParam2){
func_127();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_127();
}else{
return 0;
}}}
wait(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_127();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_127();
}else{
return 0;
}}
return 1;
}


bool func_154(bool bParam0){
if(bParam0){}
return Global_1575038;
}