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
char* sLocal_18=NULL;
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
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
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
func_43(&uScriptParam_44);
while (true){
func_42();
if(func_33()){
}else{
func_14();
}}
func_1();
}


void func_1(){
func_3(&uLocal_37);
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
func_13(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_12()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_11(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_13(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_11(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID(), 0)) && !func_5()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_5(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_6(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_7(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
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
if(Global_1575040[iVar1]==1){
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

int func_9(int iParam0){
if(func_6(iParam0, 0)){
return 1;
}
if(func_10()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_10(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_12(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_13(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_14(){
if(func_15(&uLocal_37)){
func_1();
}}

int func_15(var uParam0){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_30(1);
HUD::DISABLE_FRONTEND_THIS_FRAME();
func_24(0);
if(HUD::IS_PAUSE_MENU_ACTIVE()){
HUD::SET_PAUSE_MENU_ACTIVE(0);
}
switch (func_23(uParam0)){
case 0:
func_18(uParam0);
break;
case 1:
func_16(uParam0);
break;
case 2:
return 1;
}
return 0;
}


void func_16(var uParam0){
var uVar0;
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.9f){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
func_17(uParam0, 2);
}}


void func_17(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_18(var uParam0){
var uVar0;
uVar0=func_20();
STREAMING::REQUEST_ANIM_DICT(uVar0);
if(!STREAMING::HAS_ANIM_DICT_LOADED(uVar0)){
return;
}
CAM::DO_SCREEN_FADE_IN(800);
func_17(uParam0, 1);
func_19(uParam0);
}


void func_19(var uParam0){
var uVar0;
uVar0=func_20();
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


char* func_20(){
if(func_21()){
return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
}
return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}


bool func_21(){
return func_22(PLAYER::PLAYER_ID());
}

int func_22(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_23(var uParam0){
return *uParam0;
}


void func_24(int iParam0){
if(func_29()){
return;
}
if(!Global_20383.f_1==1){
if(func_28(0)){
func_25(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_25(int iParam0){
if(func_29()){
return;
}
if(Global_20584){
if(func_27()){
func_26(1, 1);
}else{
func_26(0, 0);
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
if(!func_12()){
Global_20383.f_1=3;
}}


void func_26(bool bParam0, bool bParam1){
if(bParam0){
if(func_28(0)){
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


bool func_27(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_28(int iParam0){
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


bool func_29(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_30(bool bParam0){
if(bParam0){
func_32();
}
func_31(4, -1);
func_31(6, -1);
func_31(7, -1);
func_31(3, -1);
func_31(1, -1);
func_31(2, -1);
func_31(11, -1);
func_31(13, -1);
func_31(14, -1);
func_31(16, -1);
}


void func_31(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1){
Global_1653913.f_170[iParam1]=1;
}
break;
}}


void func_32(){
Global_2793046.f_4629=0;
}

int func_33(){
if(func_34()){
return 1;
}
return 0;
}

int func_34(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_41()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_40()){
return 1;
}
if(func_39(159)){
if(!func_38()){
return 1;
}}
if(func_39(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_35() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_35())==0){
return 1;
}}
return 0;
}

int func_35(){
switch (func_37()){
case 0:
return func_36();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_36(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_37(){
return Global_32163;
}


bool func_38(){
return Global_2683864.f_698;
}

int func_39(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_40(){
return Global_2694526;
}


bool func_41(){
return Global_2683864.f_693;
}


void func_42(){
wait(0);
}


void func_43(var uParam0){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_44(&uLocal_37, *uParam0, uParam0->f_3);
}


void func_44(var uParam0, struct<3> Param1, var uParam2){
func_46(uParam0, Param1);
func_45(uParam0, uParam2);
func_4(1, 1, 1, 0, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, 1, 0, 0, 1);
if(CAM::IS_SCREEN_FADED_OUT()){
STREAMING::LOAD_ALL_OBJECTS_NOW();
}}


void func_45(var uParam0, var uParam1){
uParam0->f_4=uParam1;
}


void func_46(var uParam0, struct<3> Param1){
uParam0->f_1={
Param1 
};
}