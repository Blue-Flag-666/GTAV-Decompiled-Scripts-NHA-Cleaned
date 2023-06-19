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
var uLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
var uLocal_21=0;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
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
struct<3> Local_63={
0, 0, 0 
};
float fLocal_64=0f;
struct<3> Local_65={
0, 0, 0 
};
struct<3> Local_66={
0, 0, 0 
};
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
struct<3> Local_71[2];
bool bLocal_72=0;
float fLocal_73=0f;
float fLocal_74=0f;
float fLocal_75=0f;
float fLocal_76=0f;
float fLocal_77=0f;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
bool bLocal_90=0;
bool bLocal_91=0;
#endregion

void __EntryFunction__(){
int iVar0;
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
sLocal_19="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_36=3;
iLocal_41=1;
iLocal_42=65;
iLocal_43=49;
iLocal_44=64;
Local_63={
-1124.392f, -514.7001f, 33.21493f 
};
fLocal_64=200f;
Local_65={
2490f, 3777f, 2402.879f 
};
Local_66={
-2052f, 3237f, 1450.078f 
};
iLocal_67=-1;
iLocal_69=-1;
bLocal_72=true;
fLocal_73=10f;
fLocal_74=90f;
fLocal_75=35f;
fLocal_76=60f;
fLocal_77=275f;
iLocal_78=1500;
iLocal_79=-1;
iLocal_81=3000;
iLocal_82=708;
iLocal_83=377;
iLocal_84=1000;
iLocal_85=2093;
iLocal_88=-1;
iLocal_89=-1;
bLocal_90=true;
bLocal_91=true;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_12();
}
while (CAM::IS_SCREEN_FADED_OUT()){
wait(0);
}
if(!STREAMING::IS_IPL_ACTIVE("ufo")){
STREAMING::REQUEST_IPL("ufo");
}
Local_71[0 /*3*/]={
Local_65 
};
Local_71[1 /*3*/]={
Local_66 
};
while (true){
func_11(PLAYER::PLAYER_PED_ID());
if(Global_32288==1){
func_12();
}
if(bLocal_72){
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[0 /*3*/], (290f + 50f), 1)){
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[1 /*3*/], (290f + 50f), 1)){
func_12();
}}
if(iLocal_70 !=0){
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[0 /*3*/], (fLocal_77 + 50f), 1)){
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[1 /*3*/], (fLocal_77 + 50f), 1)){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
iLocal_70=0;
iLocal_69=-1;
}}}}
func_8();
switch (iLocal_70){
case 0:
iVar0=0;
iVar0=0;
while (iVar0 < Local_71.f_0){
if(func_10(PLAYER::PLAYER_PED_ID(), Local_71[iVar0 /*3*/], fLocal_77, 1)){
iLocal_69=iVar0;
iLocal_70=1;
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
}
iVar0++;
}
break;
case 1:
iVar0=0;
iVar0=0;
while (iVar0 < Local_71.f_0){
if(func_10(PLAYER::PLAYER_PED_ID(), Local_71[iVar0 /*3*/], fLocal_74, 1)){
iLocal_69=iVar0;
iLocal_70=2;
}
iVar0++;
}
break;
case 2:
if(iLocal_69==-1){
iLocal_70=1;
}else{
iLocal_67=MISC::GET_GAME_TIMER();
iLocal_68=0;
iLocal_70=3;
}
break;
case 3:
if(func_10(PLAYER::PLAYER_PED_ID(), Local_71[iLocal_69 /*3*/], fLocal_74, 1)){
iLocal_68=(MISC::GET_GAME_TIMER() - iLocal_67);
if(iLocal_68 >=iLocal_78){
iLocal_70=4;
iLocal_79=AUDIO::GET_SOUND_ID();
iLocal_80=MISC::GET_GAME_TIMER();
if(iLocal_69==0){
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_79, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_71[iLocal_69 /*3*/], 0, 0, 0, 0);
}
else{
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_79, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_71[iLocal_69 /*3*/], 0, 0, 0, 0);
}
func_7();
func_6();
}}else{
iLocal_70=1;
}
break;
case 4:
func_5();
func_7();
func_6();
if(MISC::GET_GAME_TIMER() > (iLocal_80 + iLocal_81)){
func_4(&iLocal_79);
}
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[iLocal_69 /*3*/], fLocal_77, 1)){
func_1();
iLocal_69=-1;
iLocal_70=0;
func_4(&iLocal_89);
func_4(&iLocal_88);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
}
break;
}
wait(0);
}}


void func_1(){
var uVar0;
if(func_11(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_2(uVar0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 1, 0, 0);
}}}}

int func_2(var uParam0){
if(func_3(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(uParam0)){
return 1;
}}}
return 0;
}

int func_3(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_4(int iParam0){
if(*iParam0 !=-1){
AUDIO::STOP_SOUND(*iParam0);
AUDIO::RELEASE_SOUND_ID(*iParam0);
*iParam0=-1;
}}


void func_5(){
var uVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_2(uVar0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 0, 0);
ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 2, 0f, 0f, -fLocal_73, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
}}}


void func_6(){
if(bLocal_91){
if(MISC::GET_GAME_TIMER() > iLocal_86){
if(iLocal_88 !=-1){
func_4(&iLocal_88);
iLocal_86=(MISC::GET_GAME_TIMER() + iLocal_85);
}else{
iLocal_88=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND(iLocal_88, "ent_amb_elec_crackle", 0, 0, 0, 1);
iLocal_86=(MISC::GET_GAME_TIMER() + iLocal_83);
}}}}


void func_7(){
if(bLocal_90){
if(MISC::GET_GAME_TIMER() > iLocal_87){
if(iLocal_89 !=-1){
func_4(&iLocal_89);
iLocal_87=(MISC::GET_GAME_TIMER() + iLocal_84);
}else{
iLocal_89=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND(iLocal_89, "spl_stun_npc_master", 0, 0, 0, 1);
iLocal_87=(MISC::GET_GAME_TIMER() + iLocal_82);
}}}}


void func_8(){
struct<3> Var0;
if(iLocal_69==-1){
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return;
}
if(!func_10(PLAYER::PLAYER_PED_ID(), Local_71[iLocal_69 /*3*/], fLocal_75, 1)){
return;
}
Var0={
func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_71[iLocal_69 /*3*/]) * Vector(fLocal_76, fLocal_76, fLocal_76) 
};
ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, Var0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}


Vector3 func__9(struct<3> Param0){
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


bool func_10(var uParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam3), Param1) <=(fParam2 * fParam2);
}


bool func_11(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}


void func_12(){
if(STREAMING::IS_IPL_ACTIVE("ufo")){
STREAMING::REMOVE_IPL("ufo");
}
func_4(&iLocal_89);
func_4(&iLocal_88);
func_4(&iLocal_79);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
func_1();
SCRIPT::TERMINATE_THIS_THREAD();
}