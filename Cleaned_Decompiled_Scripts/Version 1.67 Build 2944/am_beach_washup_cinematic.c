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
char* sLocal_16=NULL;
var uLocal_17=0;
var uLocal_18=0;
float fLocal_19=0f;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
var uLocal_31=0;
var uLocal_32=0;
int iLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=1176255488;
var uScriptParam_4=1;
var uScriptParam_5=-1;
var uScriptParam_6=-1;
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
sLocal_16="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
func_44(&uScriptParam_42);
while (true){
func_43();
if(func_34()){
}else{
func_15();
}}
func_1();
}


void func_1(){
func_3(&uLocal_35);
func_2();
}


void func_2(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(var uParam0){
struct<7> Var0;
func_4(0, 1, 1, 0, 0, 0, 0);
if(CAM::DOES_CAM_EXIST(uParam0->f_6)){
CAM::DESTROY_CAM(uParam0->f_6, 0);
}
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
*uParam0={
Var0 
};
}


void func_4(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_14(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_13()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_12(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_14(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_12(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID(), 0)) && !func_5()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_5(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_6(int iParam0, int iParam1){
bool bVar0;
if(!func_9(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_7(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_7(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_8();
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

int func_8(){
return Global_1574918;
}

int func_9(var uParam0){
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

int func_10(int iParam0){
if(func_6(iParam0, 0)){
return 1;
}
if(func_11()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_11(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_13(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_14(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}


void func_15(){
if(func_16(&uLocal_35)){
func_1();
}}

int func_16(var uParam0){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_31(1);
HUD::DISABLE_FRONTEND_THIS_FRAME();
func_25(0);
if(HUD::IS_PAUSE_MENU_ACTIVE()){
HUD::SET_PAUSE_MENU_ACTIVE(0);
}
switch (func_24(uParam0)){
case 0:
func_19(uParam0);
break;
case 1:
func_17(uParam0);
break;
case 2:
return 1;
}
return 0;
}


void func_17(var uParam0){
var uVar0;
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.9f){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0, 0);
func_18(uParam0, 2);
}}


void func_18(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_19(var uParam0){
var uVar0;
uVar0=func_21();
STREAMING::REQUEST_ANIM_DICT(uVar0);
if(!STREAMING::HAS_ANIM_DICT_LOADED(uVar0)){
return;
}
CAM::DO_SCREEN_FADE_IN(800);
func_18(uParam0, 1);
func_20(uParam0);
}


void func_20(var uParam0){
var uVar0;
uVar0=func_21();
uParam0->f_5=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, uVar0, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
uParam0->f_6=CAM::CREATE_CAMERA(964613260, 1);
CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", uVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
STREAMING::REMOVE_ANIM_DICT(uVar0);
}


char* func_21(){
if(func_22()){
return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
}
return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}


bool func_22(){
return func_23(PLAYER::PLAYER_ID());
}

int func_23(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_24(var uParam0){
return *uParam0;
}


void func_25(int iParam0){
if(func_30()){
return;
}
if(!Global_20500.f_1==1){
if(func_29(0)){
func_26(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_26(int iParam0){
if(func_30()){
return;
}
if(Global_20704){
if(func_28()){
func_27(1, 1);
}else{
func_27(0, 0);
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
if(!func_13()){
Global_20500.f_1=3;
}}


void func_27(bool bParam0, bool bParam1){
if(bParam0){
if(func_29(0)){
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


bool func_28(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_29(int iParam0){
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


bool func_30(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_31(bool bParam0){
if(bParam0){
func_33();
}
func_32(4, -1);
func_32(6, -1);
func_32(7, -1);
func_32(3, -1);
func_32(1, -1);
func_32(2, -1);
func_32(11, -1);
func_32(13, -1);
func_32(14, -1);
func_32(16, -1);
}


void func_32(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1){
Global_1654054.f_170[iParam1]=1;
}
break;
}}


void func_33(){
Global_2794162.f_4636=0;
}

int func_34(){
if(func_35()){
return 1;
}
return 0;
}

int func_35(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_42()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_41()){
return 1;
}
if(func_40(159)){
if(!func_39()){
return 1;
}}
if(func_40(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_36() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_36())==0){
return 1;
}}
return 0;
}

int func_36(){
switch (func_38()){
case 0:
return func_37();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_37(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_38(){
return Global_32283;
}


bool func_39(){
return Global_2683883.f_698;
}

int func_40(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_41(){
return Global_2694576;
}


bool func_42(){
return Global_2683883.f_693;
}


void func_43(){
wait(0);
}


void func_44(var uParam0){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_45(&uLocal_35, *uParam0, uParam0->f_3);
}


void func_45(var uParam0, struct<3> Param1, var uParam2){
func_47(uParam0, Param1);
func_46(uParam0, uParam2);
func_4(1, 1, 1, 0, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, 1, 0, 0, 1);
if(CAM::IS_SCREEN_FADED_OUT()){
STREAMING::LOAD_ALL_OBJECTS_NOW();
}}


void func_46(var uParam0, var uParam1){
uParam0->f_4=uParam1;
}


void func_47(var uParam0, struct<3> Param1){
uParam0->f_1={
Param1 
};
}