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
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
int iLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
bool bLocal_39=0;
int iLocal_40=0;
bool bLocal_41=0;
var uLocal_42=0;
float fLocal_43=0f;
var uLocal_44=0;
struct<3> Local_45={
0, 0, 0 
};
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
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
iLocal_28=3;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
fLocal_43=277.7314f;
Local_45={
-196.045f, -580.13f, 135.0004f 
};
CAM::DO_SCREEN_FADE_OUT(800);
func_16();
while (true){
GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
func_15();
if(func_7() || uLocal_42){
func_3();
}
if(!iLocal_38){
if(!iLocal_37 && CAM::IS_SCREEN_FADED_OUT()){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_45, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_43);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_45, 2500f, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
iLocal_37=1;
}elseif(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!bLocal_41){
bLocal_41=func_2();
}elseif(!bLocal_39){
bLocal_39=func_1();
}else{
CAM::DO_SCREEN_FADE_IN(800);
iLocal_38=1;
}}}}}

int func_1(){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uLocal_44, "garage_decor_01")){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uLocal_44, "garage_decor_01");
}else{
INTERIOR::REFRESH_INTERIOR(uLocal_44);
return 1;
}
return 0;
}

int func_2(){
uLocal_44=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(INTERIOR::IS_VALID_INTERIOR(uLocal_44)){
if(!iLocal_40){
INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_44);
iLocal_40=1;
}elseif(INTERIOR::IS_INTERIOR_READY(uLocal_44)){
INTERIOR::UNPIN_INTERIOR(uLocal_44);
return 1;
}}
return 0;
}


void func_3(){
int iVar0;
iVar0=0;
while (iVar0 < iLocal_36){
func_5(iVar0);
iVar0++;
}
func_4();
}


void func_4(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_5(int iParam0){
func_6(&(uLocal_35[iParam0]));
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0, 0) - 1));
}


void func_6(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}

int func_7(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_14()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_13()){
return 1;
}
if(func_12(159)){
if(!func_11()){
return 1;
}}
if(func_12(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_8() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_8())==0){
return 1;
}}
return 0;
}

int func_8(){
switch (func_10()){
case 0:
return func_9();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_9(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_10(){
return Global_32163;
}


bool func_11(){
return Global_2683864.f_698;
}

int func_12(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_13(){
return Global_2694526;
}


bool func_14(){
return Global_2683864.f_693;
}


void func_15(){
wait(0);
}


void func_16(){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_18(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_35, 21, 0);
if(!func_17()){
func_3();
}
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a")){
STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
}}

int func_17(){
int iVar0;
iVar0=0;
while (true){
iVar0++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()){
return 1;
}
if(func_14()){
return 0;
}
if(func_12(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_18(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_4();
}else{
return 0;
}}
if(!func_19(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_4();
}else{
return 0;
}}
if(func_14()){
if(!bParam2){
func_4();
}else{
return 0;
}}
if(func_12(157)){
if(!bParam2){
func_4();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_4();
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
func_4();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_4();
}else{
return 0;
}}
return 1;
}


bool func_19(bool bParam0){
if(bParam0){}
return Global_1575035;
}