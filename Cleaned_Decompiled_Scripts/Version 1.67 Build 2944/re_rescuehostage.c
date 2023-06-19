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
int iLocal_12=0;
float fLocal_13=0f;
var uLocal_14=0;
var uLocal_15=0;
int iLocal_16=0;
int iLocal_17=0;
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=NULL;
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
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
struct<3> Local_42={
0, 0, 0 
};
int iLocal_43=0;
struct<3> Local_44={
0, 0, 0 
};
float fLocal_45=0f;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
var uLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
int iLocal_63=0;
struct<3> Local_64={
0, 0, 0 
};
struct<3> Local_65={
0, 0, 0 
};
bool bLocal_66=0;
bool bLocal_67=0;
int iLocal_68=0;
var uLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
bool bLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
char* sLocal_80=NULL;
char* sLocal_81=NULL;
char* sLocal_82=NULL;
float fLocal_83=0f;
float fLocal_84=0f;
float fLocal_85=0f;
float fLocal_86=0f;
int iLocal_87=0;
bool bLocal_88=0;
int iLocal_89=0;
bool bLocal_90=0;
struct<10> Local_91[16];
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
int iLocal_96=0;
char* sLocal_97=NULL;
struct<18> Local_98={
0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 
};
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
#endregion

void __EntryFunction__(){
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_13=0.001f;
iLocal_16=-1;
iLocal_17=3;
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
iLocal_57=8000;
iLocal_62=-1;
bLocal_77=true;
sLocal_82="NULL";
fLocal_83=-120f;
fLocal_84=120f;
fLocal_85=40f;
fLocal_86=90f;
bLocal_88=true;
sLocal_97="RANDOM@RESCUE_HOSTAGE";
Local_44={
ScriptParam_98.f_1[0 /*3*/] 
};
fLocal_45=ScriptParam_98.f_17[0];
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
func_163();
}
if(Global_40315[0]==1){
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_121(Local_44, -1, 0, 0, 0)){
func_118(-1);
}else{
SCRIPT::TERMINATE_THIS_THREAD();
}
func_117();
func_116();
while (true){
wait(0);
func_115();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
}
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
switch (iLocal_43){
case 0:
if(func_112()){
iLocal_89=MISC::GET_GAME_TIMER();
iLocal_43=1;
}elseif(func_111()){
func_163();
}
break;
case 1:
if(iLocal_58==0){
iLocal_58=EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, -104.982f, 6408.737f, 30.4905f, 180000f);
}
func_110();
if(!PED::IS_PED_INJURED(iLocal_47)){
func_109();
}elseif(!PED::IS_PED_INJURED(iLocal_48)){
func_105();
func_104();
}else{
func_163();
}
if(bLocal_66){
func_102();
}
if(!PED::IS_PED_INJURED(iLocal_46)){
if(!func_101()){
if(func_89()){
func_163();
}
func_74();
}
elseif(!bLocal_66){
func_57();
}}else{
if(Local_91[1 /*10*/].f_7){
if(HUD::DOES_BLIP_EXIST(uLocal_51)){
HUD::REMOVE_BLIP(&uLocal_51);
}
if(HUD::DOES_BLIP_EXIST(uLocal_52)){
HUD::REMOVE_BLIP(&uLocal_52);
}
func_56(&Local_91, 1);
func_54();
}
if(!PED::IS_PED_INJURED(iLocal_47)){
if(bLocal_66){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_61)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_61)==1f){
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}
}}}else{
if(func_53()){
iLocal_43=3;
}
if(!PED::IS_PED_INJURED(iLocal_48)){
}}
}}
break;
case 2:
uLocal_50=VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 35f, 0, 101383);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_50, 0)){
if(!bLocal_90){
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
func_163();
}
if(!iLocal_76){
if(MISC::CREATE_INCIDENT(7, Local_44, 2, 0f, &uLocal_78, 0, 0)){
iLocal_76=1;
}}
break;
case 3:
if(iLocal_74){
if(timera() > 5000){
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
func_28();
}
func_163();
}}else{
if(func_53()){
if(!bLocal_67){
if(bLocal_77){
if(func_5(&Local_91, "RERHOAU", "RERHO_THANK", 4, iLocal_96, 0, 0)){
bLocal_67=true;
}}elseif(func_5(&Local_91, "RERHOAU", "RERHO_NOGUN", 4, iLocal_96, 0, 0)){
bLocal_67=true;
}}
}
func_3();
if(!PED::IS_PED_INJURED(iLocal_47)){
if(MISC::GET_GAME_TIMER() > iLocal_60 + 100){
func_1(iLocal_47, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
iLocal_60=MISC::GET_GAME_TIMER();
}
}
if(bLocal_67){
if(!iLocal_75){
if(!PED::IS_PED_INJURED(iLocal_48)){
if(func_5(&Local_91, "RERHOAU", "RERHO_CONS", 4, iLocal_96, 0, 0)){
iLocal_75=1;
}}}
}
uLocal_50=VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_44, 5f, joaat("ambulance"), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_50, 0)){
settimera(0);
iLocal_74=1;
}
iLocal_49=PED::GET_RANDOM_PED_AT_COORD(Local_44, 1.5f, 1.5f, 1.5f, -1);
if(!PED::IS_PED_INJURED(iLocal_49)){
settimera(5000);
iLocal_74=1;
}
if(!iLocal_76 && iLocal_75){
if(MISC::CREATE_INCIDENT(5, Local_44, 2, 0f, &uLocal_79, 0, 0)){
iLocal_76=1;
}
}
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) > 5625f && !CAM::IS_SPHERE_VISIBLE(Local_44, 10f)){
func_28();
}}
break;
}}elseif(iLocal_43==3){
func_28();
}else{
func_163();
}}}


void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return "SPEECH_PARAMS_STANDARD";
case 1:
return "SPEECH_PARAMS_ALLOW_REPEAT";
case 2:
return "SPEECH_PARAMS_BEAT";
case 3:
return "SPEECH_PARAMS_FORCE";
case 4:
return "SPEECH_PARAMS_FORCE_FRONTEND";
case 5:
return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
case 6:
return "SPEECH_PARAMS_FORCE_NORMAL";
case 7:
return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
case 8:
return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
case 9:
return "SPEECH_PARAMS_FORCE_SHOUTED";
case 10:
return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
case 11:
return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
case 12:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
case 13:
return "SPEECH_PARAMS_MEGAPHONE";
case 14:
return "SPEECH_PARAMS_HELI";
case 15:
return "SPEECH_PARAMS_FORCE_MEGAPHONE";
case 16:
return "SPEECH_PARAMS_FORCE_HELI";
case 17:
return "SPEECH_PARAMS_INTERRUPT";
case 18:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
case 19:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
case 20:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
case 21:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
case 22:
return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
case 23:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
case 24:
return "SPEECH_PARAMS_ADD_BLIP";
case 25:
return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
case 26:
return "SPEECH_PARAMS_ADD_BLIP_FORCE";
case 27:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
case 28:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
case 29:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
case 30:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
case 31:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
case 32:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
case 33:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
case 34:
return "SPEECH_PARAMS_SHOUTED";
case 35:
return "SPEECH_PARAMS_SHOUTED_CLEAR";
case 36:
return "SPEECH_PARAMS_SHOUTED_CRITICAL";
default:
}
iVar0=0;
return iVar0;
}


void func_3(){
if(func_4()){
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_47, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_47);
func_54();
}
if(!PED::IS_PED_INJURED(iLocal_48)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_48, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
func_54();
}}
if(!PED::IS_PED_INJURED(iLocal_47)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_47, PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_RAGDOLL(iLocal_47)){
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}}elseif(PED::IS_PED_RAGDOLL(iLocal_47)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_47, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_47);
func_54();
if(!PED::IS_PED_INJURED(iLocal_48)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_48, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
func_54();
}}}elseif(!PED::IS_PED_INJURED(iLocal_48)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_48, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
func_54();
}
if(!PED::IS_PED_INJURED(iLocal_48)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_RAGDOLL(iLocal_48)){
ENTITY::SET_ENTITY_HEALTH(iLocal_48, 0, 0);
}}elseif(PED::IS_PED_RAGDOLL(iLocal_48)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_48, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
func_54();
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_47, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_47);
func_54();
}}}elseif(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_47, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_47);
func_54();
}}


bool func_4(){
bool bVar0;
struct<3> Var1;
struct<3> Var2;
Var1={
15f, 15f, 10f 
};
Var2={
-15f, -15f, -10f 
};
if(!PED::IS_PED_INJURED(iLocal_47)){
if(MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, 0f), 15f, 1)){
bVar0=true;
}
Var1={
Var1 + PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, 0f) 
};
Var2={
Var2 + PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, 0f) 
};
if((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), 1)){
bLocal_88=true;
bVar0=true;
}
if(FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, 0f), 20f)){
bLocal_88=true;
bVar0=true;
}
if(GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, 0f), 6f)){
bVar0=true;
bLocal_88=true;
}}
if(!PED::IS_PED_INJURED(iLocal_48)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 1)){
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){}
return bVar0;
}


bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21852=0;
Global_21854=0;
Global_21859=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_2883585=0;
return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
Global_21856=0;
Global_21855=0;
Global_20499=0;
}else{
func_26();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_25(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_24();
Global_21134={
Global_21299 
};
Global_21851=Global_21852;
Global_21858=Global_21859;
Global_2883586=Global_2883585;
Global_21860={
Global_21876 
};
Global_21853=Global_21854;
Global_22835=Global_22836;
Global_22843={
Global_22849 
};
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_22841=Global_22842;
Global_21464.f_370=Global_22834;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21841=Global_21842;
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, 0);
if(bParam2){
func_16();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20500.f_1 > 3){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_15()){
return 0;
}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"))){
return 0;
}
if(!Global_78689){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 0;
}
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
return 0;
}}}
if(func_14()){
return 0;
}else{
switch (Global_20500.f_1){
case 7:
return 0;
break;
case 8:
return 0;
break;
case 9:
break;
case 10:
break;
default:
break;
}
if(MISC::IS_BIT_SET(Global_8370, 9)){
return 0;
}}
func_13();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_12();
func_7();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_26();
}
return 0;
}


void func_7(){
if(!func_8()){
return;
}
if(Global_21851){
MemCopy(&(Global_1978312.f_1),{
Global_21464
}
, 4);
Global_1978312=Global_7685;
Global_1978312.f_6=Global_21855;
}}

int func_8(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_11()){
return 0;
}
if(func_9(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_9(int iParam0){
return func_10(iParam0, 20);
}


var func__10(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_11(){
return -1;
}


void func_12(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_13(){
Global_21898=Global_21897;
Global_21892=Global_21893;
Global_21939={
Global_21927 
};
Global_21945={
Global_21933 
};
Global_21900=Global_21899;
Global_21969={
Global_21951 
};
Global_21975={
Global_21957 
};
Global_21981={
Global_21963 
};
Global_21987={
Global_21993 
};
Global_7685=Global_7686;
Global_7687=Global_7688;
Global_21856=Global_21857;
Global_21858=Global_21859;
Global_21860={
Global_21876 
};
Global_21849=Global_21850;
Global_22861=0;
Global_21894=0;
Global_21895=0;
MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_14(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_15(){
int iVar0;
int iVar1;
if(Global_78689){
iVar0=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((iVar1==joaat("weapon_sniperrifle") || iVar1==joaat("weapon_heavysniper")) || iVar1==joaat("weapon_remotesniper")){
iVar0=1;
}}
if(CAM::IS_AIM_CAM_ACTIVE() && iVar0==1){
return 1;
}else{
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1)){
return 1;
}else{
return 0;
}}
return 1;
}


void func_16(){
if(func_23(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[0 /*29*/]){
Global_20500=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[1 /*29*/]){
Global_20500=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[2 /*29*/]){
Global_20500=2;
}else{
Global_20500=0;
}}}else{
Global_20500=func_17();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}

int func_17(){
func_18();
return Global_113810.f_2366.f_539.f_4321;
}


void func_18(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_21(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_20(PLAYER::PLAYER_PED_ID());
if(func_19(iVar0) && (!func_23(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_19(Global_113810.f_2366.f_539.f_4321)){
Global_113810.f_2366.f_539.f_4322=Global_113810.f_2366.f_539.f_4321;
}
Global_113810.f_2366.f_539.f_4323=iVar0;
Global_113810.f_2366.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113810.f_2366.f_539.f_4321 !=145){
Global_113810.f_2366.f_539.f_4323=Global_113810.f_2366.f_539.f_4321;
}
return;
}}
Global_113810.f_2366.f_539.f_4321=145;
}


bool func_19(int iParam0){
return iParam0 < 3;
}

int func_20(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_21(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_21(int iParam0){
if(func_19(iParam0)){
return func_22(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__22(int iParam0){
return Global_2058[iParam0 /*29*/];
}


bool func_23(int iParam0){
return Global_43377==iParam0;
}


void func_24(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21134[iVar0 /*10*/]=0;
StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
Global_21134[iVar0 /*10*/].f_7=0;
Global_21134[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
}


bool func_25(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_26(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}


void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=iParam5;
if(iParam3==0){
Global_22832=1;
Global_22830=0;
}else{
Global_22832=0;
Global_22830=1;
}
if(iParam4==0){
Global_22833=1;
Global_22831=0;
}else{
Global_22833=0;
Global_22831=1;
}}


void func_28(){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
func_52();
func_32(-1, 0);
func_29();
func_163();
}


void func_29(){
func_30();
}

int func_30(){
if(func_31(0)){
return 0;
}
if(Global_100872.f_8){
if(Global_100872.f_10 > 0){
return 0;
}}elseif(Global_100872.f_10 > 1){
return 0;
}
Global_100872.f_10++;
return 1;
}

int func_31(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_32(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_50();
}
if(iParam0==-1){
return;
}
if(iParam1 <=func_49(iParam0)){
func_48(iParam0, iParam1);
if(!func_47(51)){
func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
func_42(51);
}
if(func_41(iParam0)){
Global_113810.f_24998.f_2=3;
}
if(func_40(iParam0, iParam1) !=322){
func_34(func_40(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
}
Global_113798=iParam1;
if(Global_113796==0){
if(((Global_113799==1 || Global_113799==5) || Global_113799==11) || Global_113799==25){
func_33(2);
}elseif((Global_113799==26 || Global_113799==8) || Global_113799==17){
func_33(7);
}else{
func_33(1);
}}}}


void func_33(int iParam0){
Global_113796=iParam0;
}


void func_34(int iParam0, var uParam1, var uParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_38((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113810.f_10197[iParam0 /*12*/].f_5==1){
if(Global_113810.f_10197[iParam0 /*12*/].f_6==11 || Global_113810.f_10197[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113810.f_10197[iParam0 /*12*/].f_5=1;
Global_113810.f_10197[iParam0 /*12*/].f_10=uParam1;
Global_113810.f_10197[iParam0 /*12*/].f_11=uParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_35();
}}


void func_35(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113546=0;
Global_113547=0;
Global_113548=0;
Global_113549=0;
Global_113550=0;
Global_113551=0;
Global_113552=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113810.f_10197.f_3853;
Global_113810.f_10197.f_3853=0f;
while (iVar0 < 321){
if(Global_113810.f_10197[iVar0 /*12*/].f_5==1){
switch (Global_113810.f_10197[iVar0 /*12*/].f_6){
case 1:
Global_113546++;
fVar1=(fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 3:
Global_113547++;
fVar2=(fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 5:
Global_113548++;
fVar3=(fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 7:
Global_113549++;
fVar4=(fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 9:
Global_113550++;
fVar5=(fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113551++;
fVar6=(fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 13:
Global_113552++;
fVar7=(fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113529 > 0){
if(Global_113546==Global_113529){
fVar1=55f;
}}
if(Global_113530 > 0){
if(Global_113547==Global_113530){
fVar2=10f;
}}
if(Global_113531 > 0){
if(Global_113548==Global_113531){
fVar3=0f;
}}
if(Global_113532 > 0){
if(Global_113549==Global_113532){
fVar4=10f;
}}
if(Global_113533 > 0){
if(((Global_113550==Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550==Global_113536){
if(!MISC::IS_BIT_SET(Global_113810.f_10197.f_3856, 14)){
if(Global_113550==Global_113533){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113533, 0);
MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113534 > 0){
if(Global_113551==Global_113534){
fVar6=15f;
}}
if(Global_113535 > 0){
if(Global_113552==Global_113535){
fVar7=5f;
}}
Global_113810.f_10197.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113550 > Global_113536 || Global_113550==Global_113536){
iVar9=Global_113536;
}else{
iVar9=Global_113550;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113546, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113529, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113547, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113530, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113548, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113531, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113549, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113532, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113536, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113552 + Global_113551), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113535 + Global_113534), 1);
Global_113553=(Global_113546 * 100 / Global_113529);
Global_113555=((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
Global_113554=((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
Global_113556=((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113810.f_10197.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113553, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113554, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113555, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113810.f_10197.f_3853)){
func_37(13, floor(Global_113810.f_10197.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78689){
if(func_36()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113544=0;
}
if(!Global_63485){
func_30();
}}}}}

int func_36(){
return Global_32283;
}

int func_37(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}


void func_38(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_39();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_39(){
return Global_1574918;
}

int func_40(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 250;
break;
case 1:
return 226;
break;
case 2:
return 243;
break;
case 3:
return 256;
break;
case 4:
return 259;
break;
case 5:
if(iParam1==1){
return 281;
}
if(iParam1==2){
return 282;
}
break;
case 6:
return 265;
break;
case 7:
return 218;
break;
case 9:
if(iParam1==1){
return 271;
}
if(iParam1==2){
return 272;
}
if(iParam1==3){
return 273;
}
if(iParam1==4){
return 274;
}
if(iParam1==5){
return 275;
}
if(iParam1==6){
return 276;
}
if(iParam1==7){
return 277;
}
if(iParam1==8){
return 278;
}
if(iParam1==9){
return 279;
}
if(iParam1==10){
return 280;
}
break;
case 10:
return 219;
break;
case 11:
if(iParam1==1){
return 246;
}
if(iParam1==2){
return 247;
}
if(iParam1==3){
return 248;
}
if(iParam1==4){
return 249;
}
break;
case 12:
return 254;
break;
case 13:
if(iParam1==1){
return 260;
}
if(iParam1==2){
return 261;
}
if(iParam1==3){
return 262;
}
if(iParam1==4){
return 264;
}
break;
case 14:
return 283;
break;
case 15:
if(iParam1==1){
return 224;
}
if(iParam1==2){
return 225;
}
break;
case 16:
return 252;
break;
case 17:
if(iParam1==1){
return 244;
}
if(iParam1==2){
return 245;
}
break;
case 18:
return 253;
break;
case 19:
return 215;
break;
case 20:
return 216;
break;
case 21:
return 251;
break;
case 22:
if(iParam1==1){
return 221;
}
if(iParam1==2){
return 222;
}
break;
case 23:
if(iParam1==1){
return 213;
}
if(iParam1==2){
return 214;
}
break;
case 24:
return 242;
break;
case 25:
if(iParam1==1){
return 267;
}
if(iParam1==2){
return 268;
}
if(iParam1==3){
return 269;
}
break;
case 8:
return 255;
break;
case 26:
if(iParam1==1){
return 227;
}
if(iParam1==2){
return 228;
}
break;
case 27:
if(iParam1==1){
return 257;
}
if(iParam1==2){
return 258;
}
break;
case 28:
return 217;
break;
case 29:
if(iParam1==1){
return 229;
}
if(iParam1==2){
return 230;
}
if(iParam1==3){
return 231;
}
break;
case 30:
return 285;
break;
case 31:
return 318;
break;
case 32:
return 319;
break;
case 33:
return 320;
break;
}
return 322;
}

int func_41(int iParam0){
switch (iParam0){
case 29:
case 30:
case 2:
case 18:
return 0;
break;
}
return 1;
}


void func_42(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
}}


void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113810.f_20413.f_145 < 9){
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9=iParam5;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11=iParam6;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12=uParam2;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13=iParam7;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14=iParam8;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=-1;
}
Global_113810.f_20413.f_145++;
func_45();
}}


void func_45(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 0)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0]){
Global_113810.f_20413.f_146[0]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 1)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1]){
Global_113810.f_20413.f_146[1]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 2)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2]){
Global_113810.f_20413.f_146[2]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_46(){
func_18();
switch (Global_113810.f_2366.f_539.f_4321){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 4;
break;
}
return 0;
}

int func_47(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113810.f_20413.f_150[iVar1], iVar0);
}
return 0;
}


void func_48(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_49(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 1:
iVar0=5;
break;
case 5:
iVar0=2;
break;
case 9:
iVar0=10;
break;
case 11:
iVar0=4;
break;
case 13:
iVar0=4;
break;
case 15:
iVar0=2;
break;
case 17:
iVar0=2;
break;
case 22:
iVar0=2;
break;
case 23:
iVar0=2;
break;
case 25:
iVar0=3;
break;
case 26:
iVar0=2;
break;
case 27:
iVar0=2;
break;
case 29:
iVar0=3;
break;
}
return iVar0;
}

int func_50(){
struct<16> Var0;
var uVar1;
StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
uVar1=func_51(Var0);
return uVar1;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15){
switch (MISC::GET_HASH_KEY(&cParam0)){
case joaat("re_abandonedcar"):
return 23;
break;
case joaat("re_accident"):
return 0;
break;
case joaat("re_arrests"):
return 15;
break;
case joaat("re_atmrobbery"):
return 1;
break;
case joaat("re_bikethief"):
return 26;
break;
case joaat("re_border"):
return 29;
break;
case joaat("re_burials"):
return 24;
break;
case joaat("re_bus_tours"):
return 2;
break;
case joaat("re_cartheft"):
return 17;
break;
case joaat("re_chasethieves"):
return 11;
break;
case joaat("re_crashrescue"):
return 16;
break;
case joaat("re_cultshootout"):
return 18;
break;
case joaat("re_dealgonewrong"):
return 12;
break;
case joaat("re_domestic"):
return 3;
break;
case joaat("re_drunkdriver"):
return 27;
break;
case joaat("re_gang_intimidation"):
return 20;
break;
case joaat("re_gangfight"):
return 19;
break;
case joaat("re_getaway_driver"):
return 4;
break;
case joaat("re_hitch_lift"):
return 13;
break;
case joaat("re_homeland_security"):
return 28;
break;
case joaat("re_lured"):
return 7;
break;
case joaat("re_muggings"):
return 25;
break;
case joaat("re_paparazzi"):
return 10;
break;
case joaat("re_prisonerlift"):
return 22;
break;
case joaat("re_prisonvanbreak"):
return 21;
break;
case joaat("re_securityvan"):
return 9;
break;
case joaat("re_shoprobbery"):
return 5;
break;
case joaat("re_snatched"):
return 6;
break;
case joaat("re_stag_do"):
return 14;
break;
case joaat("re_yetarian"):
return 30;
break;
case joaat("re_duel"):
return 31;
break;
case joaat("re_seaplane"):
return 32;
break;
case joaat("re_monkey"):
return 33;
break;
}
return -1;
}

int func_52(){
return 1;
}

int func_53(){
if(!iLocal_71){
wait(0);
if(!PED::IS_PED_INJURED(iLocal_47)){
if(iLocal_62==-1){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 0);
MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(5, 0.5f);
MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(5, 1f);
PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iLocal_47, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_47, 1);
TASK::TASK_PLAY_ANIM(iLocal_47, sLocal_97, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
iLocal_62=PED::CREATE_SYNCHRONIZED_SCENE(Local_64, Local_65, 2);
if(!PED::IS_PED_INJURED(iLocal_48)){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, uLocal_53);
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0)){
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_62, sLocal_97, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
}else{
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
}}
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_47, iLocal_62, sLocal_97, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_62)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_62) > 0.1f){
func_3();
}
if(!iLocal_68){
if(bLocal_77){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_62) > 0.5f){
if(func_5(&Local_91, "RERHOAU", "RERHO_SAINT", 4, iLocal_96, 0, 0)){
iLocal_68=1;
}
}}elseif(func_5(&Local_91, "RERHOAU", "RERHO_THANK", 4, iLocal_96, 0, 0)){
iLocal_68=1;
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_62)==1f){
iLocal_62=PED::CREATE_SYNCHRONIZED_SCENE(Local_64, Local_65, 2);
func_1(iLocal_47, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_62, 1);
if(!PED::IS_PED_INJURED(iLocal_48)){
if(bLocal_77){
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_62, sLocal_97, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
}
else{
TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
TASK::TASK_LOOK_AT_ENTITY(0, iLocal_47, -1, 1024, 2);
TASK::TASK_GO_TO_ENTITY(0, iLocal_47, 20000, 3f, 1f, 1073741824, 0);
TASK::TASK_STAND_STILL(0, -1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
TASK::TASK_PERFORM_SEQUENCE(iLocal_48, uLocal_69);
}
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, uLocal_55);
}
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_47, iLocal_62, sLocal_97, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_47, uLocal_55);
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
iLocal_71=1;
}}}}
return iLocal_71;
}


void func_54(){
Global_20711=0;
func_55();
}


void func_55(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_56(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_57(){
if(((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_46, PLAYER::PLAYER_PED_ID())) || (func_67(iLocal_46, &uLocal_56, &iLocal_57, 0, 0, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_46, PLAYER::PLAYER_PED_ID()))) || (func_66(1) && PED::CAN_PED_SEE_HATED_PED(iLocal_46, PLAYER::PLAYER_PED_ID()))) || func_64()) || func_63()) || func_4()) || func_62()) || PED::IS_PED_RAGDOLL(iLocal_46)) || func_61()) || func_60()) || func_58(iLocal_46)){
if(!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
if(!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_46, joaat("weapon_stungun"), 0)){
if(!PED::IS_PED_INJURED(iLocal_47)){
if(!PED::IS_PED_RAGDOLL(iLocal_46)){
iLocal_61=PED::CREATE_SYNCHRONIZED_SCENE(Local_64, Local_65, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_61, 0);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_47, iLocal_61, sLocal_97, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_46, iLocal_61, sLocal_97, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
PED::SET_PED_KEEP_TASK(iLocal_47, 1);
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 0);
}}
if(!PED::IS_PED_INJURED(iLocal_48)){
PED::SET_PED_CAN_RAGDOLL(iLocal_48, 1);
}
bLocal_66=true;
}else{
ENTITY::SET_ENTITY_HEALTH(iLocal_46, 50, 0);
}}}elseif(timera() > 6000){
if((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_46) && PED::CAN_PED_SEE_HATED_PED(iLocal_46, PLAYER::PLAYER_PED_ID())) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_46) && PED::CAN_PED_SEE_HATED_PED(iLocal_46, PLAYER::PLAYER_PED_ID()))){
if(HUD::DOES_BLIP_EXIST(uLocal_51)){
HUD::SHOW_HEIGHT_ON_BLIP(uLocal_51, 1);
}
if(!iLocal_70){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0)){
if(func_5(&Local_91, "RERHOAU", sLocal_81, 4, 0, 0, 0)){
iLocal_57=24000;
}
settimera(0);
iLocal_70=1;
}}}elseif(MISC::ARE_STRINGS_EQUAL(sLocal_82, "NULL")){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10)){
case 6:
case 5:
case 4:
case 3:
case 0:
case 9:
case 8:
case 7:
case 1:
if(iLocal_87){
sLocal_82="RERHO_HELP";
iLocal_87=0;
}else{
sLocal_82="RERHO_RANT";
iLocal_87=1;
}
break;
case 2:
sLocal_82="RERHO_SCREAM";
break;
}}elseif(func_5(&Local_91, "RERHOAU", sLocal_82, 4, iLocal_96, 0, 0)){
settimera(0);
}}else{
sLocal_82="NULL";
}}

int func_58(int iParam0){
var uVar0;
bool bVar1;
bVar1=false;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_ar_flsh"))){
if(WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_ar_flsh"))){
bVar1=true;
}}elseif(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_pi_flsh"))){
if(WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_pi_flsh"))){
bVar1=true;
}}
if(bVar1){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), func_59(PLAYER::PLAYER_ID())) < 8f){
return 1;
}}}
return 0;
}


Vector3 func__59(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_60(){
if(func_101()){
if(MISC::GET_GAME_TIMER() > (iLocal_89 + 60000)){
bLocal_90=true;
return 1;
}}elseif(MISC::GET_GAME_TIMER() > (iLocal_89 + 120000)){
bLocal_90=true;
return 1;
}
return 0;
}

int func_61(){
float fVar0;
var uVar1[32];
int iVar2;
int iVar3;
int iVar4;
var uVar5;
fVar0=75f;
iVar4=PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_46, 0), fVar0, fVar0, fVar0, -1);
if(!PED::IS_PED_INJURED(iVar4)){
if(ENTITY::GET_ENTITY_MODEL(iVar4)==joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar4)==joaat("s_m_y_cop_01")){
return 1;
}}
uVar5=VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_46, 0), fVar0, 0, 66561);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar5, 0)){
return 1;
}
iVar3=PED::GET_PED_NEARBY_VEHICLES(iLocal_46, &uVar1);
if(iVar3 > 0){
iVar2=0;
while (iVar2 < iVar3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1[iVar2], 0)){
if(((ENTITY::GET_ENTITY_MODEL(uVar1[iVar2])==joaat("police") || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2])==joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2])==joaat("sheriff")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2])==joaat("sheriff2")){
return 1;
}}
iVar2++;
}}
return 0;
}

int func_62(){
if(ENTITY::IS_ENTITY_AT_ENTITY(iLocal_46, PLAYER::PLAYER_PED_ID(), 2f, 2f, 1.5f, 0, 1, 0)){
if(PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_46)){
return 1;
}}
return 0;
}


bool func_63(){
bool bVar0;
bVar0=false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))==joaat("bulldozer")){
if(!PED::IS_PED_INJURED(iLocal_48)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_48)){
bVar0=true;
}}
if(!PED::IS_PED_INJURED(iLocal_47)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_47)){
bVar0=true;
}}
if(!PED::IS_PED_INJURED(iLocal_46)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_46)){
bVar0=true;
}}}}
if(bVar0){}
return bVar0;
}


bool func_64(){
bool bVar0;
bool bVar1;
struct<3> Var2;
var uVar3;
struct<2> Var4;
float fVar5;
float fVar6;
var uVar7;
var uVar8;
bVar0=false;
bVar1=false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), &uVar3, &Var4);
fVar6=Var4.f_1;
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &uVar8)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uVar8), &uVar3, &Var4);
fVar6=(fVar6 + Var4.f_1);
fVar6=(fVar6 + 3f);
}}
if(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_46, (fVar6 + 17f), (fVar6 + 17f), 6f, 0, 1, 0)){
bVar1=true;
}}elseif(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_46, (fVar6 + 12f), (fVar6 + 12f), 6f, 0, 1, 0)){
bVar1=true;
}}elseif(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_46, (fVar6 + 8f), (fVar6 + 8f), 6f, 0, 1, 0)){
bVar1=true;
}}}
if(bVar1){
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_44 
};
fVar5=MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
if(func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar5, 15f)){
bVar0=true;
}
Var2={
Local_44 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar5=MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
if(func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar5, 15f)){
bVar0=true;
}}
uVar7=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(uVar7)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar7, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, 1, 0)){
bVar0=true;
}}
if(bVar0){}
return bVar0;
}

int func_65(var uParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
fVar0=ENTITY::GET_ENTITY_HEADING(uParam0);
fVar2=(fParam1 - fParam2);
if(fVar2 < 0f){
fVar2=(fVar2 + 360f);
}
fVar1=(fParam1 + fParam2);
if(fVar1 >=360f){
fVar1=(fVar1 - 360f);
}
if(fVar1 > fVar2){
if(fVar0 < fVar1 && fVar0 > fVar2){
return 1;
}}elseif(fVar0 < fVar1 || fVar0 > fVar2){
return 1;
}}
return 0;
}

int func_66(int iParam0){
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

int func_67(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6){
float fVar0;
float fVar1;
bool bVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
bVar2=false;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && !bParam4){
if(PED::IS_PED_ON_FOOT(uParam0)){
fVar1=fParam5;
}else{
fVar1=(fParam5 + 3f);
}}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && !bParam4){
Var3={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var4={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
fVar5=vdist(Var3, Var4);
if(!MISC::IS_BIT_SET(iParam3, 3)){
if(func_73(iParam0, iParam6)){
func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
func_72(" aggroReason=EAggro_Attacked\n");
*uParam1=3;
func_71(iParam0);
return 1;
}}
if(!MISC::IS_BIT_SET(iParam3, 1)){
if(fVar1 < 20f){
}
if(MISC::IS_BULLET_IN_AREA(Var4, fParam5, 1)){
func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
func_72(" aggroReason=EAggro_ShotNear\n");
*uParam1=1;
func_71(iParam0);
return 1;
}
if(MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0)){
func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
func_72(" aggroReason=EAggro_ShotNear\n");
*uParam1=1;
func_71(iParam0);
return 1;
}}
if(!MISC::IS_BIT_SET(iParam3, 2)){
fVar0=WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
if(fVar0 < 0f){
fVar0=25f;
}elseif(fVar0 > 25f){
fVar0=25f;
}
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(fVar5 < fVar0){
if(ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17)){
func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
func_72(" aggro Ped knows player is pointing gun\n");
func_68(" lockOnTimer=", *iParam2);
func_72("\n");
func_68(" time since not LockedOn=", (MISC::GET_GAME_TIMER() - iLocal_2));
func_72("\n");
bVar2=true;
if(MISC::GET_GAME_TIMER() > (iLocal_2 + *iParam2)){
func_72(" aggroReason=EAggro_HostileOrEnemy\n");
*uParam1=2;
func_71(iParam0);
return 1;
}}
}
else{
bVar2=false;
}}else{
bVar2=false;
}}}
if(!MISC::IS_BIT_SET(iParam3, 0)){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
func_72(" aggroReason=EAggro_Danger\n");
*uParam1=0;
func_71(iParam0);
return 1;
}}}}
if(!bVar2){
iLocal_2=MISC::GET_GAME_TIMER();
}
return 0;
}


void func_68(char* sParam0, int iParam1){
func_70(sParam0);
func_69(iParam1);
}


void func_69(int iParam0){
if(iParam0 > 0){}}


void func_70(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(uParam0, uParam0)){}}


void func_71(var uParam0){
AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0);
}


void func_72(char* sParam0){
func_70(sParam0);
}

int func_73(int iParam0, int iParam1){
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
if((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1){
return 1;
}}
return 0;
}


void func_74(){
if(((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, 1, 0) || CAM::IS_SPHERE_VISIBLE(Local_44, 15f)) || bLocal_66) || func_4()){
uLocal_51=func_85(iLocal_46, 1, 0);
if(HUD::DOES_BLIP_EXIST(uLocal_51)){
HUD::SHOW_HEIGHT_ON_BLIP(uLocal_51, 0);
}
func_75(1);
iLocal_89=MISC::GET_GAME_TIMER();
PED::SET_CREATE_RANDOM_COPS(0);
}else{
func_57();
}}

int func_75(int iParam0){
if(func_79()){
Global_113800=1;
Global_113797=MISC::GET_GAME_TIMER();
if(func_41(Global_113799)){
func_76(0);
}
HUD::SET_MISSION_NAME(1, "RE_TITLE");
if(iParam0 && func_41(Global_113799)){
HUD::FLASH_MINIMAP_DISPLAY();
}
return 1;
}
return 0;
}


void func_76(int iParam0){
switch (iParam0){
case 0:
if(Global_113810.f_24998.f_2 < 3){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_77(func_78(iParam0), -1);
Global_113810.f_24998.f_2++;
MISC::SET_BIT(&Global_113806, 0);
}}
break;
case 1:
if(!MISC::IS_BIT_SET(Global_113806, 1)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_77(func_78(iParam0), -1);
Global_113810.f_24998.f_3++;
MISC::SET_BIT(&Global_113806, 1);
}}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_113806, 2)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_77(func_78(iParam0), -1);
Global_113810.f_24998.f_4++;
MISC::SET_BIT(&Global_113806, 2);
}}
break;
}}


void func_77(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


char* func_78(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="AM_H_REFS";
break;
case 1:
sVar0="RE_FLASHBLIP";
break;
case 2:
sVar0="RE_HANDOVER";
break;
}
return sVar0;
}

int func_79(){
switch (func_80(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD())){
case 1:
return 1;
break;
case 0:
return 1;
break;
}
return 0;
}

int func_80(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_84(0)){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*uParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_82(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_81(uParam0, iParam4);
}}
return 2;
}


void func_81(var uParam0, int iParam1){
int iVar0;
if(Global_43338==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
Global_43344[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_82(int iParam0){
return func_83(iParam0, Global_43377);
}

int func_83(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}

int func_84(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_82(iParam0)){
return 0;
}
return 1;
}


var func__85(var uParam0, bool bParam1, int iParam2){
iParam2=iParam2;
return func_86(uParam0, bParam1, 145);
}


var func__86(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_87(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2058[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_87(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_88(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_89(){
if(!func_82(5)){
return 1;
}
if(func_97()){
return 1;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96()){
return 0;
}}
if(func_90(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_90(float fParam0, bool bParam1){
struct<27> Var0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
iVar2=-1;
fVar3=fParam0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_19(func_17())){
iVar5=func_46();
iVar6=0;
iVar6=0;
while (iVar6 < 63){
iVar1=iVar6;
if(MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 3)){
func_91(iVar1, &Var0);
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
if(fVar4 < fVar3){
bVar7=true;
if(bParam1){
if(iVar5 !=Var0.f_26){
bVar7=false;
}
}
if(bVar7){
iVar2=iVar1;
fVar3=fVar4;
}}}
iVar6++;
}}}
return iVar2;
}


void func_91(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_92(uParam1, "Abigail1", func_94(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 1:
func_92(uParam1, "Abigail2", func_94(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 2:
func_92(uParam1, "Barry1", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 3:
func_92(uParam1, "Barry2", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 4:
func_92(uParam1, "Barry3", func_94(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 5:
func_92(uParam1, "Barry3A", func_94(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 6:
func_92(uParam1, "Barry3C", func_94(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 7:
func_92(uParam1, "Barry4", func_94(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_93(iParam0), 0, 0);
break;
case 8:
func_92(uParam1, "Dreyfuss1", func_94(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 9:
func_92(uParam1, "Epsilon1", func_94(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
break;
case 10:
func_92(uParam1, "Epsilon2", func_94(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 11:
func_92(uParam1, "Epsilon3", func_94(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
break;
case 12:
func_92(uParam1, "Epsilon4", func_94(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
break;
case 13:
func_92(uParam1, "Epsilon5", func_94(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 14:
func_92(uParam1, "Epsilon6", func_94(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_93(iParam0), 0, 1);
break;
case 15:
func_92(uParam1, "Epsilon7", func_94(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
break;
case 16:
func_92(uParam1, "Epsilon8", func_94(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
break;
case 17:
func_92(uParam1, "Extreme1", func_94(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 18:
func_92(uParam1, "Extreme2", func_94(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 19:
func_92(uParam1, "Extreme3", func_94(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 20:
func_92(uParam1, "Extreme4", func_94(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 21:
func_92(uParam1, "Fanatic1", func_94(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_93(iParam0), 1, 0);
break;
case 22:
func_92(uParam1, "Fanatic2", func_94(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_93(iParam0), 1, 0);
break;
case 23:
func_92(uParam1, "Fanatic3", func_94(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_93(iParam0), 0, 1);
break;
case 24:
func_92(uParam1, "Hao1", func_94(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_93(iParam0), 0, 1);
break;
case 25:
func_92(uParam1, "Hunting1", func_94(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 26:
func_92(uParam1, "Hunting2", func_94(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 27:
func_92(uParam1, "Josh1", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 28:
func_92(uParam1, "Josh2", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 29:
func_92(uParam1, "Josh3", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 30:
func_92(uParam1, "Josh4", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 31:
func_92(uParam1, "Maude1", func_94(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 32:
func_92(uParam1, "Minute1", func_94(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 33:
func_92(uParam1, "Minute2", func_94(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 34:
func_92(uParam1, "Minute3", func_94(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
break;
case 35:
func_92(uParam1, "MrsPhilips1", func_94(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
break;
case 36:
func_92(uParam1, "MrsPhilips2", func_94(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
break;
case 37:
func_92(uParam1, "Nigel1", func_94(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 38:
func_92(uParam1, "Nigel1A", func_94(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 39:
func_92(uParam1, "Nigel1B", func_94(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
break;
case 40:
func_92(uParam1, "Nigel1C", func_94(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
break;
case 41:
func_92(uParam1, "Nigel1D", func_94(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
break;
case 42:
func_92(uParam1, "Nigel2", func_94(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 43:
func_92(uParam1, "Nigel3", func_94(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
break;
case 44:
func_92(uParam1, "Omega1", func_94(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 45:
func_92(uParam1, "Omega2", func_94(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 46:
func_92(uParam1, "Paparazzo1", func_94(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 47:
func_92(uParam1, "Paparazzo2", func_94(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 48:
func_92(uParam1, "Paparazzo3", func_94(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 49:
func_92(uParam1, "Paparazzo3A", func_94(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 50:
func_92(uParam1, "Paparazzo3B", func_94(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 51:
func_92(uParam1, "Paparazzo4", func_94(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
break;
case 52:
func_92(uParam1, "Rampage1", func_94(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
break;
case 54:
func_92(uParam1, "Rampage3", func_94(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 55:
func_92(uParam1, "Rampage4", func_94(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 56:
func_92(uParam1, "Rampage5", func_94(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
break;
case 53:
func_92(uParam1, "Rampage2", func_94(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
break;
case 57:
func_92(uParam1, "TheLastOne", func_94(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 58:
func_92(uParam1, "Tonya1", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 59:
func_92(uParam1, "Tonya2", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 60:
func_92(uParam1, "Tonya3", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 61:
func_92(uParam1, "Tonya4", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
case 62:
func_92(uParam1, "Tonya5", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
break;
default:
break;
}}


void func_92(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
uParam0->f_4=iParam4;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam3;
uParam0->f_5=iParam5;
uParam0->f_6={
Param6 
};
uParam0->f_9=iParam7;
StringCopy(&(uParam0->f_10), sParam8, 16);
uParam0->f_14=iParam9;
uParam0->f_15=iParam10;
StringCopy(&(uParam0->f_16), sParam11, 24);
uParam0->f_22=iParam12;
uParam0->f_23=iParam13;
uParam0->f_24=iParam14;
uParam0->f_25=iParam15;
uParam0->f_26=iParam16;
uParam0->f_27=iParam17;
uParam0->f_28=iParam18;
uParam0->f_29=uParam19;
uParam0->f_30=iParam20;
uParam0->f_31=iParam21;
}

int func_93(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}


struct<2> func_94(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_95(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_95(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}

int func_96(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_97(){
if(func_100() && !func_96()){
return 1;
}
if(func_99() && func_98()){
return 1;
}
return 0;
}


bool func_98(){
return Global_113528 > 0;
}

int func_99(){
if(Global_97735 !=-1){
return 1;
}
return 0;
}

int func_100(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}

int func_101(){
if((Global_113799==func_50() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800){
return 1;
}
return 0;
}


void func_102(){
if(HUD::DOES_BLIP_EXIST(uLocal_51)){
HUD::SHOW_HEIGHT_ON_BLIP(uLocal_51, 1);
}
if(!PED::IS_PED_INJURED(iLocal_46)){
PED::SET_PED_RESET_FLAG(iLocal_46, 156, 1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_61)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_61) > 0.1f){
if(!iLocal_72){
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_SHOOTS_AT_COORD(iLocal_46, PED::GET_PED_BONE_COORDS(iLocal_47, 31086, 0f, 0f, -0.1f), 0);
}
iLocal_72=1;
iLocal_70=1;
func_103();
}}}elseif(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_61)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_61) > 0.6f){
func_103();
}}elseif(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_61)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_61)==1f){
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}}}else{
if(!PED::IS_PED_INJURED(iLocal_47)){
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
}
func_103();
}}}


void func_103(){
if(!iLocal_73){
if(!PED::IS_PED_INJURED(iLocal_46)){
TASK::CLEAR_PED_TASKS(iLocal_46);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_54, uLocal_53);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_53, uLocal_54);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, uLocal_55, uLocal_53);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_55, uLocal_54);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_54, uLocal_55);
if(ENTITY::IS_ENTITY_AT_ENTITY(iLocal_46, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, 0, 1, 0)){
TASK::TASK_COMBAT_PED(iLocal_46, PLAYER::PLAYER_PED_ID(), 0, 16);
PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_46, 1);
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_46, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
}
PED::SET_PED_KEEP_TASK(iLocal_46, 1);
func_5(&Local_91, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
iLocal_73=1;
}}}


void func_104(){
if(bLocal_88){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 0);
TASK::TASK_SMART_FLEE_COORD(iLocal_48, Local_44, 50f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
func_54();
}}


void func_105(){
if(Local_91[2 /*10*/].f_7){
func_56(&Local_91, 2);
}
func_108();
PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_44, 1, 1077936128, 0);
MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(1, 0.5f);
MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, 1f);
if(Local_91[1 /*10*/].f_7){
if(HUD::DOES_BLIP_EXIST(uLocal_51)){
HUD::REMOVE_BLIP(&uLocal_51);
}
func_56(&Local_91, 1);
}
if(iLocal_70){
if(!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_48, joaat("weapon_pistol"), 0) && PED::IS_PED_INJURED(iLocal_46)){
if(!bLocal_90){
iLocal_43=2;
}elseif(func_107(&Local_91, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_96, 0)){
iLocal_43=2;
}}else{
if(!PED::IS_PED_INJURED(iLocal_48)){
if(!PED::IS_PED_INJURED(iLocal_46)){
TASK::TASK_SMART_FLEE_PED(iLocal_48, iLocal_46, 100f, -1, 0, 0);
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
}
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
if(!bLocal_90){
if(func_107(&Local_91, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_96, 0)){
}else{
func_106(iLocal_48, "GENERIC_SHOCKED_HIGH", 24);
}}else{
func_106(iLocal_48, "GENERIC_SHOCKED_HIGH", 24);
}
wait(0);
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PED::SET_CREATE_RANDOM_COPS(1);
iLocal_43=2;
}}else{
func_163();
}}


void func_106(int iParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_2(iParam2), 1);
}


bool func_107(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=1;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=0;
return func_6(sParam2, iParam4, 0);
}


void func_108(){
if(func_4()){
bLocal_88=true;
}
if(bLocal_88==0){
if(!PED::IS_PED_INJURED(iLocal_48) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_70){
TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 5f, 1073741824, 1073741824, 0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
TASK::TASK_PLAY_ANIM(0, sLocal_97, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
TASK::TASK_PERFORM_SEQUENCE(iLocal_48, uLocal_69);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
}else{
TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_44, 1f, 20000, 1193033728, 1056964608);
TASK::TASK_LOOK_AT_COORD(0, Local_44, -1, 2048, 2);
TASK::TASK_PLAY_ANIM(0, sLocal_97, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
TASK::TASK_PERFORM_SEQUENCE(iLocal_48, uLocal_69);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
PED::SET_PED_KEEP_TASK(iLocal_48, 1);
}}}}


void func_109(){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_47, PLAYER::PLAYER_PED_ID(), 1)){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2)){
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
PED::SET_PED_CAN_RAGDOLL(iLocal_47, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_47, 0, 0);
bLocal_66=true;
iLocal_70=1;
func_103();
}elseif(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_47)){
AUDIO::PLAY_PAIN(iLocal_47, 4, 0, 0);
}}


void func_110(){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_44, 50f, 50f, 25f, 0, 1, 0)){
iLocal_96=0;
}else{
iLocal_96=1;
}}

int func_111(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f)){
return 1;
}
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96()){
return 0;
}}
if(func_97()){
return 1;
}
if(func_90(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_112(){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
Local_44={
-96.4f, 6398.201f, 30.4542f 
};
fLocal_45=0f;
iVar0=joaat("a_m_m_hillbilly_02");
iVar1=joaat("a_m_m_business_01");
iVar2=joaat("a_f_m_tourist_01");
sVar3="A_F_M_BEVHILLS_02_WHITE_FULL_02";
STREAMING::REQUEST_MODEL(iVar0);
STREAMING::REQUEST_MODEL(iVar2);
STREAMING::REQUEST_MODEL(iVar1);
STREAMING::REQUEST_ANIM_DICT(sLocal_97);
if(((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_97)){
MISC::CLEAR_AREA(Local_44, 5f, 1, 1, 0, 0);
iLocal_47=PED::CREATE_PED(5, iVar2, Local_44, fLocal_45, 1, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_47, 1);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_47, sVar3);
PED::SET_PED_CONFIG_FLAG(iLocal_47, 20, 1);
iLocal_46=PED::CREATE_PED(22, iVar0, Local_44, fLocal_45, 1, 1);
ENTITY::SET_ENTITY_HEALTH(iLocal_46, 125, 0);
PED::SET_PED_MAX_HEALTH(iLocal_46, 125);
PED::SET_PED_FLEE_ATTRIBUTES(iLocal_46, 128, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_46, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_46, 42, 1);
PED::SET_PED_HEARING_RANGE(iLocal_46, 1.5f);
AUDIO::STOP_PED_SPEAKING(iLocal_46, 1);
PED::SET_PED_SEEING_RANGE(iLocal_46, 40f);
PED::SET_PED_CONFIG_FLAG(iLocal_46, 20, 1);
PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iLocal_46, fLocal_83);
PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iLocal_46, fLocal_84);
PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iLocal_46, fLocal_85);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iLocal_46, fLocal_86);
iLocal_48=PED::CREATE_PED(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_45, 1, 1);
TASK::ADD_COVER_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
uLocal_59=PED::ADD_SCENARIO_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_48, 0);
AUDIO::STOP_PED_SPEAKING(iLocal_48, 1);
Local_44.f_2=(Local_44.f_2 + 1f);
Local_64={
Local_44 
};
Local_65={
0f, 0f, fLocal_45 
};
iLocal_61=PED::CREATE_SYNCHRONIZED_SCENE(Local_64, Local_65, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_61, 1);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_46, iLocal_61, sLocal_97, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_47, iLocal_61, sLocal_97, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
uLocal_63=PED::CREATE_SYNCHRONIZED_SCENE(Local_64, Local_65, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_63, 1);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_63, sLocal_97, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_48, 185, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_46, joaat("weapon_pistol"), -1, 1, 1);
PED::SET_PED_AS_ENEMY(iLocal_46, 1);
PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relManager", &uLocal_55);
PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relBadGuy", &uLocal_54);
uLocal_53=PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_54, uLocal_53);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_53, uLocal_54);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, uLocal_55);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46, uLocal_54);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_48, 11, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_48, 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_48, 13, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_48, 5, 0);
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_48, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_47, 11, 1);
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_47, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_47, 13, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_47, 5, 0);
func_114(&Local_91, 0, PLAYER::PLAYER_PED_ID(), sLocal_80, 0, 1);
func_114(&Local_91, 1, iLocal_46, "RHCriminal", 0, 1);
func_114(&Local_91, 2, iLocal_47, "RHHostage", 0, 1);
func_114(&Local_91, 3, iLocal_48, "RHBystander", 0, 1);
PED::SET_CREATE_RANDOM_COPS(0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
func_113(1);
MISC::CLEAR_AREA_OF_OBJECTS(-89f, 6392f, 32f, 3f, 2);
settimera(8000);
return 1;
}
return 0;
}


void func_113(bool bParam0){
if(bParam0){
Global_32518=1;
}else{
Global_32518=0;
}}


void func_114(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
if(!PED::IS_PED_INJURED(uParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
}}
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
}}}}


void func_115(){
}


void func_116(){
}


void func_117(){
switch (func_17()){
case 0:
sLocal_80="MICHAEL";
sLocal_81="RERHO_MDOWN";
break;
case 1:
sLocal_80="FRANKLIN";
sLocal_81="RERHO_FDOWN";
break;
case 2:
sLocal_80="TREVOR";
sLocal_81="RERHO_TDOWN";
break;
}}


void func_118(int iParam0){
if(iParam0==-1){
iParam0=func_50();
}
if(iParam0==-1){
return;
}
func_120(iParam0);
MISC::SET_SCRIPT_HIGH_PRIO(0);
MISC::SET_RANDOM_EVENT_FLAG(1);
Global_113796=0;
func_119();
}


void func_119(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}}


void func_120(int iParam0){
Global_113799=iParam0;
}

int func_121(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
bool bVar0;
struct<3> Var1;
int iVar2;
struct<3> Var3;
int iVar4;
if(!Global_152397){
return 0;
}
if(iParam1==-1){
iParam1=func_50();
}
if(iParam1==-1){
return 0;
}
if(iParam1==31 || iParam1==32){
if(!func_162()){
return 0;
}}
Local_42={
Param0 
};
bVar0=false;
if(!bVar0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96()){
return 0;
}}
if(!Global_113810.f_9088){
return 0;
}
if(func_31(0)){
return 0;
}
if(func_97()){
return 0;
}
if(func_161()){
return 0;
}
if(Global_113799 !=-1){
return 0;
}
if(func_19(func_17())){
if(func_90(100f, 1) !=-1){
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4){
if((Var1.f_2 - Local_42.f_2) > 50f){
return 0;
}}
if(!func_160(iParam1)){
return 0;
}
if(func_19(func_17())){
if(func_159(func_17())==4 || func_159(func_17())==5){
return 0;
}}
if(func_19(func_17())){
if(!func_158(iParam1, bParam2, 145)){
return 0;
}}
if(!func_157(Global_113810.f_24998.f_43[iParam1])){
return 0;
}
if((MISC::GET_GAME_TIMER() - Global_113801) < 150000){
if(iParam1 !=30){
return 0;
}}
if(func_156()){
return 0;
}
if(MISC::GET_MISSION_FLAG()){
return 0;
}
if(MISC::GET_RANDOM_EVENT_FLAG()){
return 0;
}
if(!func_147(4)){
return 0;
}
if(!func_82(5)){
return 0;
}
if(func_146(iParam1, bParam2) && !bParam3){
return 0;
}
if(Global_3 && iParam1 !=10){
return 0;
}
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))){
if((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f)){
return 0;
}}
if((iParam1==9 && (bParam2==2 || bParam2==5)) && !func_146(0, 0)){
return 0;
}
if(Global_32430){
return 0;
}
if(func_160(30) && !func_146(30, 0)){
if(iParam1 !=30){
if(vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f){
return 0;
}}}
if(func_19(func_17())){
iVar2=0;
while (iVar2 < 3){
Var3={
Global_113810.f_2366.f_539.f_2300[iVar2 /*3*/] 
};
iVar4=Global_113810.f_2366.f_539.f_2296[iVar2];
if(func_145(iVar4)){
if(func_123(iVar2)){
if(!func_122(Var3, 0f, 0f, 0f, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f)){
if(func_17() !=iVar2){
return 0;
}}
}}}
iVar2++;
}}}
return 1;
}


bool func_122(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


bool func_123(int iParam0){
int iVar0;
iVar0=Global_113810.f_2366.f_539.f_2296[iParam0];
return func_124(iVar0);
}

int func_124(int iParam0){
return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!func_145(iParam0)){
return 0;
}
func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
if(((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >=iParam1){
return 1;
}
return 0;
}


void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}


void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_137(iParam0, iParam1)){
iVar0=func_136(iParam1);
iVar1=func_134(iParam0);
iVar2=(func_134(iParam0) - func_134(iParam1));
iVar3=(func_136(iParam0) - func_136(iParam1));
iVar4=(func_133(iParam0) - func_133(iParam1));
iVar5=(func_132(iParam0) - func_132(iParam1));
iVar6=(func_131(iParam0) - func_131(iParam1));
iVar7=(func_130(iParam0) - func_130(iParam1));
}else{
iVar0=func_136(iParam0);
iVar1=func_134(iParam1);
iVar2=(func_134(iParam1) - func_134(iParam0));
iVar3=(func_136(iParam1) - func_136(iParam0));
iVar4=(func_133(iParam1) - func_133(iParam0));
iVar5=(func_132(iParam1) - func_132(iParam0));
iVar6=(func_131(iParam1) - func_131(iParam0));
iVar7=(func_130(iParam1) - func_130(iParam0));
}
while (iVar7 < 0){
iVar7 +=60;
iVar6=(iVar6 - 1);
}
while (iVar7 > 59){
iVar7=(iVar7 - 60);
iVar6++;
}
while (iVar6 < 0){
iVar6 +=60;
iVar5=(iVar5 - 1);
}
while (iVar6 > 59){
iVar6=(iVar6 - 60);
iVar5++;
}
while (iVar5 < 0){
iVar5 +=24;
iVar4=(iVar4 - 1);
}
while (iVar5 > 23){
iVar5=(iVar5 - 24);
iVar4++;
}
while (iVar4 < 0){
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
iVar4=(iVar4 + func_129(iVar0, iVar1));
iVar3=(iVar3 - 1);
iVar0=round(func_128(to_float(iVar0 + 1), 0f, 12f));
}
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
while (iVar3 > 12){
iVar3=(iVar3 - 12);
iVar2++;
}
*uParam2=iVar7;
*uParam3=iVar6;
*uParam4=iVar5;
*uParam5=iVar4;
*uParam6=iVar3;
*uParam7=iVar2;
}


float func_128(float fParam0, float fParam1, float fParam2){
float fVar0;
if(fParam1==fParam2){
return fParam1;
}
fVar0=(fParam2 - fParam1);
fParam0=(fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
if(fParam0 < fParam1){
fParam0=(fParam0 + fVar0);
}
return fParam0;
}

int func_129(int iParam0, int iParam1){
if(iParam1 < 0){
iParam1=0;
}
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
break;
case 3:
case 5:
case 8:
case 10:
return 30;
break;
case 1:
if((iParam1 % 4)==0){
if((iParam1 % 100) !=0){
return 29;
}elseif((iParam1 % 400)==0){
return 29;
}}
return 28;
break;
}
return 30;
}

int func_130(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_131(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_132(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_133(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_134(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_135(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_136(int iParam0){
return iParam0 & 15;
}

int func_137(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_145(iParam1) || !func_145(iParam0)){
return 1;
}
iVar0=func_134(iParam0);
iVar1=func_134(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_136(iParam0);
iVar1=func_136(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_133(iParam0);
iVar1=func_133(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_132(iParam0);
iVar1=func_132(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_131(iParam0);
iVar1=func_131(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_130(iParam0);
iVar1=func_130(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_138(){
var uVar0;
func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_143(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_141(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_140(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_139(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_139(var uParam0, int iParam1){
if(iParam1 <=0){
return;
}
if(iParam1 > 2043 || iParam1 < 1979){
return;
}
*uParam0=(*uParam0 - *uParam0 & 2080374784);
if(iParam1 < 2011){
*uParam0=(*uParam0 || shift_left((2011 - iParam1), 26));
*uParam0 |=-2147483648;
}else{
*uParam0=(*uParam0 || shift_left((iParam1 - 2011), 26));
*uParam0=(*uParam0 - *uParam0 & -2147483648);
}}


void func_140(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_141(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_136(*uParam0);
iVar1=func_134(*uParam0);
if(iParam1 < 1 || iParam1 > func_129(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_142(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_143(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_144(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_145(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_130(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_131(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_132(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_134(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_136(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_133(iParam0);
if(iVar5 < 1 || iVar5 > func_129(iVar4, iVar3)){
return 0;
}
return 1;
}

int func_146(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_113810.f_24998.f_8[iParam0], bParam1)){
return 1;
}
return 0;
}

int func_147(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_17();
if(!func_19(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112857) || Global_32286) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_155()) || Global_32286) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112857) || Global_32286) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112857) || Global_32286) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_155() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_25(8, -1)) || func_150()) || func_149()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_25(8, -1) || func_153()) || func_152()) || func_149()) || func_148()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_155()) || Global_32286) || func_154()) || func_25(8, -1)) || func_152()) || func_151()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_155()) || func_152()) || Global_112857) || Global_32286) || func_154()) || Global_44569) || func_25(8, -1)) || func_151()) || func_149()) || func_150()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_155()) || Global_112857) || Global_32286) || func_154()) || func_25(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__148(){
return Global_100872.f_1;
}

int func_149(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_150(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_151(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_152(){
return Global_100885.f_394 > 0;
}


bool func_153(){
return Global_100885.f_393 > 0;
}


var func__154(){
return Global_1575063;
}

int func_155(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_156(){
func_16();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
return 1;
}
return 0;
}


bool func_157(int iParam0){
return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_17();
if(iParam2 !=145 && ((iParam2==0 || iParam2==1) || iParam2==2)){
iVar1=iParam2;
}
switch (iParam0){
case 18:
if(iVar1==2){
iVar0=1;
}
break;
case 19:
if(iVar1 !=2){
iVar0=1;
}
break;
case 20:
if(iVar1 !=1){
iVar0=1;
}
break;
case 28:
if(iVar1 !=2){
iVar0=1;
}
break;
case 13:
if(iVar1==0){
if(iParam1==2){
iVar0=0;
}else{
iVar0=1;
}}else{
iVar0=1;
}
break;
case 22:
if(iParam1==2 || iVar1 !=2){
iVar0=1;
}
break;
case 30:
if(iVar1 !=2){
iVar0=1;
}
break;
default:
iVar0=1;
break;
}
return iVar0;
}

int func_159(int iParam0){
if(!func_19(iParam0)){
return 7;
}
return Global_113810.f_7691.f_919[iParam0];
}

int func_160(int iParam0){
int iVar0;
int iVar1;
if(iParam0==31 || iParam0==32){
if(!func_162()){
return 0;
}}
iVar0=iParam0;
if(iVar0 < 31){
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998, iVar0);
}else{
iVar0=(iVar0 - 31);
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998.f_1, iVar0);
}
return iVar1;
}

int func_161(){
var uVar0;
if(Global_32435){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0))){
return 1;
}}}}
return 0;
}

int func_162(){
var uVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
MISC::SET_BIT(&uVar0, 2);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}


void func_163(){
if(func_101()){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PED::SET_CREATE_RANDOM_COPS(1);
}
if(iLocal_43 !=0){
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_54);
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_55);
AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(20000);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_59, 0);
EVENT::REMOVE_SHOCKING_EVENT(iLocal_58);
func_113(0);
}
if(!PED::IS_PED_INJURED(iLocal_46) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::TASK_SMART_FLEE_PED(iLocal_46, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_46, 1);
wait(0);
}
func_164(-1);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_164(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=func_50();
}
if(iParam0==-1){
return;
}
if(func_101()){
func_168(iParam0);
HUD::SET_MISSION_NAME(0, 0);
Global_113801=MISC::GET_GAME_TIMER();
func_167(30000);
StringCopy(&cVar0, func_166(Global_113799, 1), 64);
if(func_49(Global_113799) > 0){
StringConCat(&cVar0, " Variation ", 64);
StringIntConCat(&cVar0, Global_113798, 64);
}
STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
}elseif(MISC::IS_BIT_SET(Global_113806, 0) && Global_113810.f_24998.f_2 < 3){
MISC::CLEAR_BIT(&Global_113806, 0);
}
func_165(&Global_32343);
Global_113800=0;
func_120(-1);
}


void func_165(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43339){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


char* func_166(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return "RE_ACCIDENT";
break;
case 1:
return "RE_ATMROBBERY";
break;
case 2:
return "RE_BUSTOUR";
break;
case 3:
return "RE_DOMESTIC";
break;
case 4:
return "RE_GETAWAYDRIVER";
break;
case 5:
return "RE_SHOPROBBERY";
break;
case 6:
return "RE_SNATCHED";
break;
case 7:
return "RE_LURED";
break;
case 8:
return "RE_BIKETHIEFSTAMP";
break;
case 9:
return "RE_SECURITYVAN";
break;
case 10:
return "RE_PAPARAZZI";
break;
case 11:
return "RE_CHASETHIEVES";
break;
case 12:
return "RE_DEALGONEWRONG";
break;
case 13:
return "RE_HITCHLIFT";
break;
case 14:
return "RE_STAG";
break;
case 15:
return "RE_ARREST";
break;
case 16:
return "RE_CRASHRESCUE";
break;
case 17:
return "RE_CARTHEFT";
break;
case 18:
return "RE_CULTSHOOTOUT";
break;
case 19:
return "RE_GANGFIGHT";
break;
case 20:
return "RE_GANGINTIMIDATION";
break;
case 21:
return "RE_PRISONVANBREAK";
break;
case 22:
return "RE_PRISONERLIFT";
break;
case 23:
return "RE_ABANDONEDCAR";
break;
case 24:
return "RE_BURIAL";
break;
case 25:
return "RE_MUGGING";
break;
case 26:
return "RE_BIKETHIEF";
break;
case 27:
return "RE_DRUNKDRIVER";
break;
case 28:
return "RE_HOMELANDSECURITY";
break;
case 29:
return "RE_BORDERPATROL";
break;
case 30:
return "RE_SIMEONYETARIAN";
break;
case 31:
return "RE_DUEL";
break;
case 32:
return "RE_SEAPLANE";
break;
case 33:
return "RE_MONKEYPHOTO";
break;
case -1:
return "RE_NONE";
break;
}
if(!bParam1){}
return "UNKNOWN";
}


void func_167(int iParam0){
Global_43928=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_168(int iParam0){
func_169(iParam0, 0, func_174(iParam0));
}


void func_169(int iParam0, int iParam1, int iParam2){
var uVar0;
struct<16> Var1;
uVar0=func_138();
func_172(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
func_171(iParam0, &uVar0);
Var1={
func_170(&uVar0) 
};
}
struct<16> func_170(var uParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=func_132(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_131(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_130(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, " ", 64);
iVar1=func_133(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, "/", 64);
iVar1=func_136(*uParam0);
if(iVar1 < 9){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1 + 1, 64);
StringConCat(&Var0, "/", 64);
StringIntConCat(&Var0, func_134(*uParam0), 64);
return Var0;
}


void func_171(int iParam0, var uParam1){
Global_113810.f_24998.f_43[iParam0]=*uParam1;
}


void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_134(*uParam0);
iVar1=func_136(*uParam0);
iVar2=func_133(*uParam0);
iVar3=func_132(*uParam0);
iVar4=func_131(*uParam0);
iVar5=func_130(*uParam0);
if(((((iParam6==0 && iParam5==0) && iParam4==0) && iParam3==0) && iParam2==0) && iParam1==0){
return;
}
if(iParam1 < 0){
return;
}
if(iParam2 < 0){
return;
}
if(iParam3 < 0){
return;
}
if(iParam4 < 0){
return;
}
if(iParam5 < 0){
return;
}
if(iParam6 < 0){
return;
}
iVar5=(iVar5 + iParam1);
while (iVar5 >=60){
iParam2++;
iVar5=(iVar5 - 60);
}
iVar4=(iVar4 + iParam2);
while (iVar4 >=60){
iParam3++;
iVar4=(iVar4 - 60);
}
iVar3=(iVar3 + iParam3);
while (iVar3 >=24){
iParam4++;
iVar3=(iVar3 - 24);
}
iVar2=(iVar2 + iParam4);
iVar6=func_129(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_129(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_173(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_144(uParam0, iParam1);
func_143(uParam0, iParam2);
func_142(uParam0, iParam3);
func_140(uParam0, iParam5);
func_141(uParam0, iParam4);
func_139(uParam0, iParam6);
}

int func_174(int iParam0){
int iVar0;
switch (iParam0){
case 23:
iVar0=30;
break;
case 0:
iVar0=30;
break;
case 15:
iVar0=30;
break;
case 1:
iVar0=200;
break;
case 26:
iVar0=30;
break;
case 8:
iVar0=30;
break;
case 29:
iVar0=30;
break;
case 24:
iVar0=30;
break;
case 2:
iVar0=0;
break;
case 17:
iVar0=30;
break;
case 11:
iVar0=30;
break;
case 16:
iVar0=30;
break;
case 18:
iVar0=30;
break;
case 12:
iVar0=120;
break;
case 3:
iVar0=60;
break;
case 27:
iVar0=60;
break;
case 19:
iVar0=30;
break;
case 20:
iVar0=30;
break;
case 4:
iVar0=60;
break;
case 28:
iVar0=30;
break;
case 13:
iVar0=35;
break;
case 7:
iVar0=30;
break;
case 25:
iVar0=40;
break;
case 10:
iVar0=30;
break;
case 22:
iVar0=30;
break;
case 21:
iVar0=30;
break;
case 5:
iVar0=30;
break;
case 30:
iVar0=60;
break;
case 9:
iVar0=60;
break;
case 6:
iVar0=40;
break;
case 14:
iVar0=40;
break;
}
return iVar0;
}