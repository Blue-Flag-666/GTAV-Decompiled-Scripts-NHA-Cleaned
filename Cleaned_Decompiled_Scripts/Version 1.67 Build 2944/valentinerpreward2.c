//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
char* sLocal_0=NULL;
int iLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
var uLocal_8=0;
var uLocal_9=0;
var uLocal_10=0;
var uLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
var uLocal_14=0;
var uLocal_15=0;
struct<3> Local_16={
0, 0, 0 
};
int iLocal_17=0;
int iLocal_18=0;
int iLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
int iLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
int iLocal_25=0;
int iLocal_26=0;
int iLocal_27=0;
struct<13> Local_28={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35[3]={
0, 0, 0 
};
struct<2> Local_36={
0, 0 
};
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
#endregion

void __EntryFunction__(){
int iVar0;
sLocal_0="1.67.02";
iLocal_18=-1;
iLocal_19=-1;
iLocal_22=10000;
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(iScriptParam_43==iScriptParam_43){}
Global_1578010=MISC::GET_HASH_KEY(sLocal_0);
iVar0=MISC::GET_GAME_TIMER() + 10000;
while (MISC::GET_GAME_TIMER() < iVar0){
wait(0);
}
func_170();
while (true){
if(func_169()){
func_167();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3){
func_166();
func_165();
func_162();
func_160();
func_159();
func_156();
func_153();
func_145();
func_137();
func_134();
func_124();
func_116();
func_115();
func_110();
func_96();
func_91();
func_57();
func_46();
func_44();
func_36();
func_32();
func_27();
func_17();
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_16();
func_15();
func_4();
func_3();
func_1();
}
wait(0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_1(){
if(func_2(Global_4718592.f_117591)==10){
if(Global_262145.f_33950){
Global_262145.f_33950=0;
}}}

int func_2(int iParam0){
if(iParam0==Global_262145.f_31922[0]){
return 0;
}elseif(iParam0==Global_262145.f_31922[1]){
return 4;
}elseif(iParam0==Global_262145.f_31922[2]){
return 7;
}elseif(iParam0==Global_262145.f_31922[3]){
return 10;
}elseif(iParam0==Global_262145.f_31922[4]){
return 11;
}elseif(iParam0==Global_262145.f_31922[5]){
return 12;
}
return -1;
}


void func_3(){
if(Global_4718592.f_117591 !=Global_262145.f_33923[2]){
return;
}
if(Global_4718592.f_1816[0 /*24279*/].f_17130[4]==0){
return;
}
if(MISC::IS_BIT_SET(Global_2684820.f_3883, 0) && MISC::IS_BIT_SET(Global_1574942, 4)){
Global_4718592.f_1816[0 /*24279*/].f_17130[4]=0;
}}


void func_4(){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if((Global_262145.f_33952[10] !=Global_4718592.f_117591 || Global_1574964) || !Global_1574965){
func_14();
return;
}
MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
Global_4980736.f_110349[42 /*1098*/].f_944[0]=3;
Global_4980736.f_110349[58 /*1098*/].f_944[0]=3;
if(Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6){
func_13(&iLocal_35);
return;
}
uVar0=func_11(&iLocal_35);
iVar1=600;
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0)){
iVar1=900;
}}
func_10(uVar0);
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
iVar2=CUTSCENE::GET_CUTSCENE_END_TIME();
iVar3=CUTSCENE::GET_CUTSCENE_TIME();
if(iVar3 >=(iVar2 - 300) && !func_9(&Local_36)){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
func_8(&Local_36, 0, 0);
}}elseif(func_9(&Local_36) && func_7(Local_36, iVar1, 0)){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
func_6(&Local_36);
iLocal_34=1;
func_5(uVar0);
}}


void func_5(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return;
}
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0)){
return;
}
VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0, 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0);
VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(uParam0, 0);
VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(uParam0, 0);
VEHICLE::SET_VEHICLE_HANDBRAKE(uParam0, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0, 0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0, 30f);
}


void func_6(var uParam0){
uParam0->f_1=0;
}

int func_7(var uParam0, var uParam1, int iParam2, bool bParam3){
if(iParam2==-1){
return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >=iParam2){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >=iParam2){
return 1;
}
return 0;
}


void func_8(var uParam0, bool bParam1, bool bParam2){
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


bool func_9(var uParam0){
return uParam0->f_1;
}


void func_10(var uParam0){
if(iLocal_34){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return;
}
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0)){
return;
}
ENTITY::SET_ENTITY_VELOCITY(uParam0, 0f, 0f, 0f);
}

int func_11(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1058071.f_268 - 1)){
if(!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0])){
}elseif(ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) !=joaat("cargoplane2")){
}elseif(func_12(iParam0, Global_1058071.f_233[iVar0])){
}else{
return Global_1058071.f_233[iVar0];
}
iVar0++;
}
return 0;
}

int func_12(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(iParam1==(*uParam0)[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}


void func_13(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=(Global_1058071.f_268 - 1)){
if(!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0])){
}elseif(ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) !=joaat("cargoplane2")){
}elseif(func_12(iParam0, Global_1058071.f_233[iVar0])){
}else{
iVar1=0;
while (iVar1 <=2){
if(ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1])){
}else{
(*iParam0)[iVar1]=Global_1058071.f_233[iVar0];
}else{
iVar1++;
}}}
iVar0++;
}}


void func_14(){
int iVar0;
func_6(&Local_36);
iLocal_34=0;
iVar0=0;
while (iVar0 <=2){
iLocal_35[iVar0]=0;
iVar0++;
}}


void func_15(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) >=1){
return;
}
if(Global_2635560.f_2978){}
Global_2635560.f_2978=0;
}


void func_16(){
if((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) !=0 && Global_262145.f_33952[8] !=Global_4718592.f_117591) && !(Global_1574964 || Global_1574965)){
MISC::SET_BIT(&Global_1574994, 29);
}}


void func_17(){
if(!func_25()){
return;
}
if(!func_23()){
return;
}
if(!func_18()){
return;
}
if((Global_1945123[158] - 1) !=158){
Global_1945123[158]=159;
}}


bool func_18(){
return func_19(5396, -1) !=0;
}

int func_19(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_20(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__20(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_21(uParam1));
}

int func_21(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_22();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_22(){
return Global_1574918;
}

int func_23(){
if(func_24()==0){
return 1;
}
return 0;
}

int func_24(){
return Global_1574632.f_18;
}

int func_25(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_26()) > 0 && Global_1574666==2){
return 1;
}
return 0;
}

int func_26(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


void func_27(){
if(func_31()){
return;
}
if(!func_25()){
return;
}
if(!func_23()){
return;
}
if(!func_28(PLAYER::PLAYER_ID())){
return;
}
if((Global_1945123[190] - 1) !=190){
Global_1945123[190]=191;
}}


bool func_28(int iParam0){
return func_29(iParam0);
}

int func_29(int iParam0){
if(iParam0 !=func_30()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
}
return 0;
}

int func_30(){
return -1;
}

int func_31(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_32(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return;
}
if(((!iLocal_42 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, 0, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01")==0){
if((!func_35(PLAYER::PLAYER_ID(), 1, 1) && !func_34()) && !func_33(PLAYER::PLAYER_ID())){
iLocal_42=1;
MISC::SET_BIT(&(Global_1950844.f_4601), 3);
}}elseif(((iLocal_42 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, 0, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") !=0){
iLocal_42=0;
MISC::CLEAR_BIT(&(Global_1950844.f_4601), 3);
}}

int func_33(int iParam0){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 11)){
return 1;
}
return 0;
}


bool func_34(){
return Global_1950844.f_529;
}

int func_35(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_30()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}


void func_36(){
int iVar0;
int iVar1;
int iVar2;
if(func_39(PLAYER::PLAYER_ID()) !=2){
return;
}
if(!func_38(PLAYER::PLAYER_PED_ID())){
return;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!func_38(iVar0)){
return;
}
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(((iVar1 !=joaat("cargobob") && iVar1 !=joaat("cargobob2")) && iVar1 !=joaat("cargobob3")) && iVar1 !=joaat("cargobob4")){
return;
}
if(func_37(PLAYER::PLAYER_PED_ID(), 1) !=-1){
return;
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
return;
}
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 103) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 103)){
iVar2=VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
if(func_38(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)){
VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, 0);
VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
}}}

int func_37(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}

int func_38(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_39(int iParam0){
if(func_43(iParam0)==317){
return func_40(iParam0, 317);
}
return -1;
}

int func_40(int iParam0, int iParam1){
if(func_43(iParam0)==iParam1){
return func_41(iParam0);
}
return -1;
}

int func_41(int iParam0){
if(func_42(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_42(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_43(int iParam0){
if(func_42(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}
return -1;
}


void func_44(){
bool bVar0;
var uVar1;
bVar0=true;
if(func_39(PLAYER::PLAYER_ID()) !=0){
bVar0=false;
}
if(Global_2794162.f_6788 !=9){
bVar0=false;
}
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar0=false;
}
if(!func_38(PLAYER::PLAYER_PED_ID())){
bVar0=false;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
bVar0=false;
}
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!func_38(uVar1)){
bVar0=false;
}
if(ENTITY::GET_ENTITY_MODEL(uVar1) !=joaat("toreador")){
bVar0=false;
}
if(func_37(PLAYER::PLAYER_PED_ID(), 1)==-1){
bVar0=false;
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
bVar0=false;
}
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.89841f, 1115.247f, -2278.109f, 30.92747f, 3f, 0, 1, 0)){
bVar0=false;
}
if(bVar0){
if(!func_9(&uLocal_40)){
func_8(&uLocal_40, 0, 0);
}elseif(func_45(&uLocal_40, 10000, 0)){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
}}elseif(func_9(&uLocal_40)){
func_6(&uLocal_40);
}}

int func_45(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_8(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_46(){
if(!iLocal_39){
if((func_56(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_1950844.f_8, 25)) && func_48() !=PLAYER::PLAYER_ID()){
iLocal_39=1;
}}else{
if(!func_56(PLAYER::PLAYER_ID())){
iLocal_39=0;
MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
return;
}
if(((func_47() && Global_1950837 !=3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432){
if(MISC::IS_BIT_SET(Global_1950844.f_8, 25)){
MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
}}elseif(!MISC::IS_BIT_SET(Global_1950844.f_8, 25)){
MISC::SET_BIT(&(Global_1950844.f_8), 25);
}}}


var func__47(){
return MISC::IS_BIT_SET(Global_78938, 8);
}

int func_48(){
return func_49(PLAYER::PLAYER_ID());
}

int func_49(int iParam0){
int iVar0;
if(iParam0==func_30()){
return iParam0;
}
if(func_54(iParam0) !=-1){
iVar0=func_53(func_54(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_51(iParam0, 0)){
return func_50(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_30();
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}
return func_30();
}

int func_50(int iParam0){
if(iParam0 !=func_30()){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_30();
}


bool func_51(int iParam0, bool bParam1){
if(!bParam1){
if(func_52(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_30();
}

int func_52(int iParam0){
if(iParam0 !=func_30()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_30()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_53(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
break;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
break;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
break;
case 101:
return 10;
break;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}

int func_54(int iParam0){
if(iParam0 !=func_30()){
if(func_55(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}elseif(((Global_1575063 || Global_2635560.f_2780) && iParam0==PLAYER::PLAYER_ID()) && func_55(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}}
return -1;
}

int func_55(int iParam0, bool bParam1, bool bParam2){
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

int func_56(int iParam0){
if(iParam0 !=func_30()){
if(func_55(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_53(Global_2657704[iParam0 /*463*/].f_321.f_7)==22;
}}}
return 0;
}


void func_57(){
struct<4> Var0;
struct<4> Var1;
struct<16> Var2;
if(((Global_2766625 || ((func_55(PLAYER::PLAYER_ID(), 1, 1) && func_23()) && !iLocal_37)) || func_90(17)) || iLocal_38){
if(!iLocal_37){
}
iLocal_37=1;
StringCopy(&Var0, "&#166;
", 16);
StringCopy(&Var1, "&#8249;
", 16);
if(Global_2766625){
}elseif(func_90(17)){
iLocal_38=1;
}
if(func_52(PLAYER::PLAYER_ID())){
iLocal_38=0;
Var2={
func_86() 
};
if(func_85(&Var2, Var0) || func_85(&Var2, Var1)){
if(func_84(PLAYER::PLAYER_ID())){
func_70(&Var2, 0, 1);
}else{
func_70(&Var2, 1, 1);
}
func_68();
}}
if(func_67(PLAYER::PLAYER_ID())){
StringCopy(&Var2, func_61(PLAYER::PLAYER_ID()), 64);
if(func_85(&Var2, Var0) || func_85(&Var2, Var1)){
func_58(Var2);
}}}}


void func_58(char[64] cParam0){
func_59(55, 56, &cParam0, -1, 1);
Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283={
cParam0 
};
}


void func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
char cVar2[32];
char cVar3[32];
int iVar4;
int iVar5;
iVar0=func_60(iParam0, iParam3);
iVar1=func_60(iParam1, iParam3);
if(iVar0 !=0 && iVar1 !=0){
StringCopy(&cVar2, "", 32);
StringCopy(&cVar3, "", 32);
iVar4=HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
if(iVar4 > 0){
iVar5=10;
if(iVar4 < 10){
iVar5=iVar4;
}
StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar5, 31), 32);
if(iVar4 > 10){
StringCopy(&cVar3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar4, 31), 32);
}}
STATS::STAT_SET_STRING(iVar0, &cVar2, iParam4);
STATS::STAT_SET_STRING(iVar1, &cVar3, iParam4);
}}


var func__60(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(3, uParam0, func_21(uParam1));
}


char* func_61(int iParam0){
char* sVar0;
int iVar1;
sVar0=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
if(iParam0==func_30()){
return sVar0;
}
if(iParam0==PLAYER::PLAYER_ID()){
sVar0=func_66(&(Global_1914706[iParam0 /*299*/].f_283));
return sVar0;
}
if(Global_1895156[iParam0 /*609*/].f_10.f_121 !=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121){
return sVar0;
}
if(func_65(iParam0, 28) || (func_65(PLAYER::PLAYER_ID(), 28) && !func_63(iParam0))){
return sVar0;
}
iVar1=func_50(iParam0);
if(iVar1 !=func_30()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return sVar0;
}}}
if(iVar1 !=func_30()){
sVar0=func_66(&(Global_1914706[iVar1 /*299*/].f_283));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
return sVar0;
}else{
return sVar0;
}}
return sVar0;
}


bool func_62(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_63(int iParam0){
struct<13> Var0;
Var0={
func_64(iParam0) 
};
if(func_62()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_64(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


var func__65(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


var func__66(var uParam0){
return uParam0;
}

int func_67(int iParam0){
if(iParam0==func_30()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}


void func_68(){
int iVar0;
struct<2> Var1;
Var1.f_0=2103624094;
Var1.f_1=PLAYER::PLAYER_ID();
iVar0=0;
while (iVar0 < 7){
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] !=func_30()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0])){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var1, 2, func_69(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
}}
iVar0++;
}}


var func__69(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_70(char* sParam0, int iParam1, bool bParam2){
if(bParam2){
if(func_80(1) || iParam1==0){
func_59(47, 48, sParam0, -1, 1);
if(func_79() && iParam1==0){
func_78(sParam0, bParam2);
}}else{
func_59(119, 121, sParam0, -1, 1);
if(func_77() && iParam1==1){
func_75(sParam0, bParam2);
}}}
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121=LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
if((!func_62() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_73()){
func_72(28);
}else{
func_71(28);
}}


void func_71(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}


void func_72(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_73(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_74()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_62()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_74(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_75(char* sParam0, bool bParam1){
struct<16> Var0;
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_59(45, 46, sParam0, -1, 1);
Var0={
func_76(119, 121, -1) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_59(119, 121, sParam0, -1, 1);
}}}
if((!func_62() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_73()){
func_72(28);
}else{
func_71(28);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
}}
struct<16> func_76(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
struct<16> Var2;
char cVar3[32];
uVar0=func_60(iParam0, iParam2);
uVar1=func_60(iParam1, iParam2);
StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
StringConCat(&Var2, &cVar3, 64);
return Var2;
}

int func_77(){
return func_52(PLAYER::PLAYER_ID());
}


void func_78(char* sParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_59(49, 50, sParam0, -1, 1);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
}
if((!func_62() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_73()){
func_72(28);
}else{
func_71(28);
}}


bool func_79(){
return func_84(PLAYER::PLAYER_ID());
}


bool func_80(bool bParam0){
return func_81(PLAYER::PLAYER_ID(), bParam0);
}


bool func_81(int iParam0, bool bParam1){
return func_82(iParam0, bParam1, 1);
}

int func_82(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_30()){
return 0;
}
if(!bParam1){
if(func_83(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_30() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_83(int iParam0, int iParam1){
if(iParam0 !=func_30()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_30()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}


bool func_84(int iParam0){
return func_83(iParam0, 1);
}

int func_85(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<16> Var7;
iVar0=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(cParam0)){
iVar3=MISC::GET_HASH_KEY(&cParam1);
iVar4=HUD::GET_LENGTH_OF_LITERAL_STRING(cParam0);
iVar5=HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam1);
iVar6=0;
while (iVar6 <=(iVar4 - 1)){
if((iVar6 + iVar5) > iVar4){
return 0;
}elseif(MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(cParam0, iVar6, (iVar6 + iVar5)))==iVar3){
iVar1=iVar6;
iVar2=(iVar6 + iVar5);
iVar0=1;
}else{
iVar6++;
}}
if(iVar6 !=0){
StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(cParam0, 0, iVar1), 64);
}
if(iVar6 !=(iVar4 - iVar5)){
StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(cParam0, iVar2, HUD::GET_LENGTH_OF_LITERAL_STRING(cParam0)), 64);
}
*cParam0={
Var7 
};
}
return iVar0;
}
struct<16> func_86(){
int iVar0;
struct<16> Var1;
iVar0=func_50(PLAYER::PLAYER_ID());
if(iVar0 !=func_30()){
if(iVar0 !=PLAYER::PLAYER_ID()){
if(((func_65(iVar0, 28) || func_65(PLAYER::PLAYER_ID(), 28)) || func_89(iVar0)) && !func_63(iVar0)){
StringCopy(&Var1, func_87(iVar0, 0), 64);
return Var1;
}
if(!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
StringCopy(&Var1, func_87(iVar0, 0), 64);
return Var1;
}}
return Global_1895156[iVar0 /*609*/].f_10.f_105;
}
StringCopy(&Var1, "", 64);
return Var1;
}


var func__87(int iParam0, bool bParam1){
if(!bParam1){
if(func_81(iParam0, 1)){
return func_88();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


var func__88(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_89(int iParam0){
struct<13> Var0;
if(iParam0 !=func_30()){
Var0={
func_64(iParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_62() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}


bool func_90(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_7[iVar0], iVar1);
}


void func_91(){
if(((func_95()==3 && func_94()) && func_93()) && func_92(Global_4718592.f_117591)){
NETWORK::NETWORK_BAIL(51, 0, 0);
}}

int func_92(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31258[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_93(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


var func__94(){
return MISC::IS_BIT_SET(Global_2684820.f_1.f_2809, 5);
}

int func_95(){
return Global_1057409;
}


void func_96(){
int iVar0;
int iVar1;
struct<2> Var2;
float fVar3;
float fVar4;
struct<3> Var5;
if(func_9(&uLocal_14)){
MISC::SET_BIT(&Global_8371, 2);
if(func_45(&uLocal_14, 60000, 0)){
func_109(&uLocal_14, 0, 0);
func_6(&uLocal_14);
}}
if(func_9(&uLocal_12) && func_45(&uLocal_12, 1000, 0)){
if(iLocal_19==-1){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_19=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_19, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", 0, 0);
}}elseif(func_45(&uLocal_12, 4000, 0)){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_19)){
AUDIO::STOP_SOUND(iLocal_19);
}
AUDIO::RELEASE_SOUND_ID(iLocal_19);
iLocal_19=-1;
AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
func_109(&uLocal_12, 0, 0);
func_6(&uLocal_12);
}}
if(!iLocal_6 && !func_104()){
return;
}
iLocal_6=1;
MISC::SET_BIT(&Global_8371, 2);
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_5)){
iVar0=joaat("imp_prop_ship_01a");
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
iLocal_5=OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, 1);
ENTITY::SET_ENTITY_LOD_DIST(iLocal_5, 8000);
iVar1=func_19(7869, -1);
func_103(7869, iVar1 + 1, -1, 1);
Var2.f_1=1;
Var2.f_0=24;
STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
Local_16={
ENTITY::GET_ENTITY_COORDS(iLocal_5, 0) 
};
iLocal_17=0;
}}else{
func_102();
if(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()){
if(iLocal_18==-1){
AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
iLocal_18=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_18, "07", iLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
}
if(!iLocal_7){
if(func_45(&uLocal_8, 4500, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, 0);
func_109(&uLocal_8, 0, 0);
func_6(&uLocal_8);
func_8(&uLocal_10, 0, 0);
iLocal_7=1;
}}else{
fVar3=(to_float(func_101(&uLocal_10, 0, 0)) / to_float(func_100()));
fVar4=(to_float(func_101(&uLocal_8, 0, 0)) / to_float(func_99()));
fVar4=(fVar4 * fVar3);
Var5={
func_97(Local_16, func_98(), fVar4) 
};
ENTITY::SET_ENTITY_COORDS(iLocal_5, Var5, 1, 0, 0, 1);
if(fVar4 >=1f){
iLocal_17++;
Local_16={
ENTITY::GET_ENTITY_COORDS(iLocal_5, 0) 
};
func_109(&uLocal_8, 0, 0);
func_6(&uLocal_8);
if(func_99()==-1){
OBJECT::DELETE_OBJECT(&iLocal_5);
MISC::FORCE_LIGHTNING_FLASH();
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_18)){
AUDIO::STOP_SOUND(iLocal_18);
}
AUDIO::RELEASE_SOUND_ID(iLocal_18);
iLocal_18=-1;
func_8(&uLocal_12, 0, 0);
func_8(&uLocal_14, 0, 0);
func_109(&uLocal_10, 0, 0);
func_6(&uLocal_10);
Local_16={
0f, 0f, 0f 
};
iLocal_17=0;
iLocal_6=0;
iLocal_7=0;
}}}}}}


Vector3 func__97(struct<3> Param0, struct<3> Param1, float fParam2){
return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}


Vector3 func__98(){
switch (iLocal_17){
case 0:
return 306.567f, 5652.283f, 785.594f;
case 1:
return -1082.865f, 6390.52f, 924.2493f;
case 2:
return -2542.874f, 7217.514f, 1051.333f;
case 3:
return -4139.106f, 8143.302f, 1412.694f;
default:
}
return 0f, 0f, 0f;
}

int func_99(){
switch (iLocal_17){
case 0:
return 2000;
case 1:
return 1000;
case 2:
return 100;
case 3:
return 50;
default:
}
return -1;
}

int func_100(){
return 3150;
}


var func__101(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_102(){
struct<3> Var0;
Var0={
ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) 
};
Var0.f_0=0f;
Var0.f_1=0f;
Var0.f_2=(Var0.f_2 + 1f);
ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, 1);
}


void func_103(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_20(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}

int func_104(){
if(((((((func_108(22107, -1) && Global_2639889==7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && func_107(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >=1) && Global_2684820.f_3076.f_178 < 4) && func_106()) && func_105()){
return 1;
}
return 0;
}

int func_105(){
if(func_108(15476, -1) && func_19(5453, func_22()) > 577){
return 1;
}
return 0;
}

int func_106(){
int iVar0;
int iVar1;
float fVar2;
MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
if(fVar2 < 0.5f){
if((iVar0==joaat("rain") || iVar0==joaat("THUNDER")) || iVar1==-1429616491){
return 1;
}}elseif((iVar1==joaat("rain") || iVar1==joaat("THUNDER")) || iVar1==-1429616491){
return 1;
}
return 0;
}


bool func_107(int iParam0, struct<3> Param1, float fParam2){
return vdist2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), Param1) <=(fParam2 * fParam2);
}


var func__108(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_22();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}


void func_109(var uParam0, bool bParam1, bool bParam2){
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


void func_110(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0){
func_113();
}else{
func_111();
}}


void func_111(){
bool bVar0;
if(iLocal_32==0){
return;
}
bVar0=false;
while (bVar0 < 26){
if(MISC::IS_BIT_SET(iLocal_32, bVar0)){
AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_112(bVar0), 0);
MISC::CLEAR_BIT(&iLocal_32, bVar0);
}
bVar0++;
}
iLocal_33=0;
Global_2766715=0;
}


char* func_112(bool bParam0){
switch (bParam0){
case 9:
return "RADIO_01_CLASS_ROCK";
case 10:
return "RADIO_02_POP";
case 12:
return "RADIO_03_HIPHOP_NEW";
case 18:
return "RADIO_04_PUNK";
case 17:
return "RADIO_06_COUNTRY";
case 15:
return "RADIO_07_DANCE_01";
case 16:
return "RADIO_08_MEXICAN";
case 11:
return "RADIO_09_HIPHOP_OLD";
case 23:
return "RADIO_11_TALK_02";
case 22:
return "RADIO_12_REGGAE";
case 5:
return "RADIO_13_JAZZ";
case 6:
return "RADIO_14_DANCE_02";
case 21:
return "RADIO_15_MOTOWN";
case 13:
return "RADIO_20_THELAB";
case 14:
return "RADIO_16_SILVERLAKE";
case 20:
return "RADIO_17_FUNK";
case 19:
return "RADIO_18_90S_ROCK";
case 8:
return "RADIO_21_DLC_XM17";
case 24:
return "RADIO_05_TALK_01";
case 2:
return "RADIO_27_DLC_PRHEI4";
case 4:
return "RADIO_23_DLC_XM19_RADIO";
case 7:
return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
case 0:
return "RADIO_36_AUDIOPLAYER";
case 1:
return "RADIO_35_DLC_HEI4_MLR";
case 3:
return "RADIO_34_DLC_HEI4_KULT";
case 25:
return "RADIO_37_MOTOMAMI";
default:
}
return "OFF";
}


void func_113(){
int iVar0;
bool bVar1;
if(!func_114(Global_4718592.f_117591)){
return;
}
iVar0=func_19(9877, -1);
if(iVar0==0){
return;
}
bVar1=false;
while (bVar1 < 26){
if(!MISC::IS_BIT_SET(iLocal_33, bVar1)){
if(MISC::IS_BIT_SET(iVar0, bVar1)){
}
MISC::SET_BIT(&iLocal_33, bVar1);
AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_112(bVar1), 1);
}
if(MISC::IS_BIT_SET(iVar0, bVar1) && !MISC::IS_BIT_SET(iLocal_32, bVar1)){
MISC::SET_BIT(&iLocal_32, bVar1);
Global_2766715=1;
}
bVar1++;
}}

int func_114(int iParam0){
if((iParam0==Global_262145.f_31929[0] || iParam0==Global_262145.f_31929[1]) || iParam0==Global_262145.f_31929[2]){
return 1;
}
return 0;
}


void func_115(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0){
if(!iLocal_31){
iLocal_31=1;
}}elseif(iLocal_31){
MISC::CLEAR_OVERRIDE_WEATHER();
iLocal_31=0;
}}


void func_116(){
int iVar0;
if(func_93() && func_123(Global_4718592.f_171044)){
if(func_122()==26){
iVar0=func_117();
if(iVar0 !=-1){
if(func_9(&(Global_1890739[iVar0 /*138*/].f_31))){
if(func_45(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0)){
iLocal_30=1;
Global_2684820.f_6341=-1;
}}}}elseif(func_122()==41){
if(iLocal_30){
iLocal_30=0;
Global_2684820.f_6341=-1;
}}}}

int func_117(){
return func_118();
}

int func_118(){
struct<13> Var0;
Var0={
func_120() 
};
if(func_119(Var0)){
return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
}
return func_30();
}


bool func_119(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
struct<13> func_120(){
int iVar0;
struct<13> Var1;
iVar0=0;
while (iVar0 < 32){
if(func_121(iVar0)){
return Global_2684820.f_1.f_845[iVar0 /*57*/];
}
iVar0++;
}
return Var1;
}


bool func_121(int iParam0){
return MISC::IS_BIT_SET(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_122(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}


bool func_123(int iParam0){
return iParam0==88;
}


void func_124(){
struct<3> Var0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0]==Global_4718592.f_117591) && (Global_1058071.f_14[0] >=4 || Global_1058071.f_14[0] <=6)){
Var0={
func_127(101) 
};
bVar1=OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, 0, 1);
if(!func_126()){
if(bVar1 || Global_1058071.f_14[0]==5){
iVar3=func_125(&iVar2);
if(((iVar2 >=0 && iVar2 < 4) && iVar3 >=0) || iVar3 < 17){
MISC::SET_BIT(&(Global_4718592.f_1816[iVar2 /*24279*/].f_8212[iVar3]), 12);
}}}elseif((!bVar1 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5){
iVar5=func_125(&iVar4);
if(((iVar4 >=0 && iVar4 < 4) && iVar5 >=0) || iVar5 < 17){
MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
}}}}


var func__125(var uParam0){
*uParam0=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(*uParam0 < 4 && *uParam0 > -1){}else{
*uParam0=0;
}
return Global_1058071.f_14[*uParam0];
}

int func_126(){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
iVar1=func_125(&iVar0);
if(iVar0 < 0 || iVar0 >=4){
return 0;
}
if(iVar1 < 0 || iVar1 >=17){
return 0;
}
return MISC::IS_BIT_SET(Global_4718592.f_1816[iVar0 /*24279*/].f_8212[iVar1], 12);
}


Vector3 func__127(int iParam0){
switch (iParam0){
case 101:
return func_128();
default:
}
return 0f, 0f, 0f;
}


Vector3 func__128(){
struct<3> Var0;
var uVar1;
var uVar2;
Var0={
0f, 0f, 0f 
};
uVar1=func_129();
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8f, -0.6f) 
};
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar2, 0, 0) && !ENTITY::IS_ENTITY_IN_AIR(iVar1)){
Var0={
Var0.f_0, Var0.f_1, uVar2 
};
}else{
Var0={
Var0.f_0, Var0.f_1, (Var0.f_2 - 1.5f) 
};
}}
return Var0;
}


var func__129(){
int iVar0;
var uVar1[25];
int iVar2;
int iVar3;
var uVar4[25];
int iVar5;
if(func_51(PLAYER::PLAYER_ID(), 0)){
if(PLAYER::PLAYER_ID() !=func_133()){
if(!ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310)){
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar0=0;
while (iVar0 < iVar2){
if(ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3)){
if(VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_132(1))){
if(func_130(uVar1[iVar0])==func_133()){
Global_2794162.f_310=uVar1[iVar0];
return uVar1[iVar0];
}}}
}}
iVar0++;
}}else{
return Global_2794162.f_310;
}}}elseif(PLAYER::PLAYER_ID()==func_133() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310)){
iVar5=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar4);
iVar3=0;
while (iVar3 < iVar5){
if(ENTITY::DOES_ENTITY_EXIST(uVar4[iVar3]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar4[iVar3])){
if(!ENTITY::IS_ENTITY_DEAD(uVar4[iVar3], 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3)){
if(VEHICLE::IS_VEHICLE_MODEL(uVar4[iVar3], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar4[iVar3], func_132(1))){
if(func_130(uVar4[iVar3])==PLAYER::PLAYER_ID()){
Global_2794162.f_310=uVar4[iVar3];
return uVar4[iVar3];
}
}}}}
iVar3++;
}}
return Global_2794162.f_310;
}

int func_130(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_132(1))){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
return func_131(iVar0, 0, 1, 0);
}}}}
return func_30();
}

int func_131(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
if(bParam2){
iVar1=0;
while (iVar1 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_55(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0)){
return iVar0;
}}
iVar1++;
}}elseif(func_55(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3)){
return iParam3;
}}
return func_30();
}

int func_132(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}

int func_133(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


void func_134(){
var uVar0;
iLocal_29++;
if(iLocal_29==30){
iLocal_29=0;
}else{
return;
}
if(((((((((!func_38(PLAYER::PLAYER_PED_ID()) || !func_55(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_23()) || func_136(PLAYER::PLAYER_ID())) || func_33(PLAYER::PLAYER_ID())) || func_135(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return;
}
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_38(uVar0)){
if(!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0)){
if(ENTITY::GET_ENTITY_CAN_BE_DAMAGED(uVar0)){
}else{
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar0, 0f);
ENTITY::SET_ENTITY_INVINCIBLE(uVar0, 0);
ENTITY::SET_ENTITY_PROOFS(uVar0, 0, 0, 0, 0, 0, 0, 1, 0);
}}}}}

int func_135(int iParam0){
if(iParam0 !=func_30()){
if(func_55(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_55(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_136(int iParam0){
if(iParam0 !=func_30() && func_55(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 3);
}
return 0;
}


void func_137(){
var uVar0;
if(iLocal_27){
if((((((func_144()==-1 && func_143()==999) && func_23()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT()){
iLocal_27=0;
func_142(0);
STATS::STAT_SET_BLOCK_SAVES(0);
func_139();
}}
if(!iLocal_26){
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_28, 13);
if(func_119(Local_28)){
iLocal_26=1;
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3){
NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
if(!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &Local_28)){
NETWORK::NETWORK_BAIL(0, 0, 0);
STATS::STAT_SET_BLOCK_SAVES(1);
if(!func_138()){
func_142(1);
iLocal_27=1;
}
iLocal_26=0;
}}}


bool func_138(){
return Global_32561;
}


void func_139(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
func_140(0, iVar0);
STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
iVar0++;
}
STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}


void func_140(int iParam0, int iParam1){
if(iParam0==0){
func_141();
}
Global_1574538[iParam1]=iParam0;
}


void func_141(){
Global_2694561=0;
}


void func_142(int iParam0){
Global_32561=iParam0;
}

int func_143(){
return Global_32284;
}

int func_144(){
return Global_32283;
}


void func_145(){
if(Global_2672524.f_62.f_57){
if(ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2794162.f_299, 0)){
if(!Global_2672524.f_62.f_21){
if(iLocal_25==-1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3)){
if(DECORATOR::DECOR_EXIST_ON(Global_2794162.f_299, "PV_Slot")){
iLocal_25=DECORATOR::DECOR_GET_INT(Global_2794162.f_299, "PV_Slot");
}}}elseif(Global_2359296[func_152() /*5568*/].f_681.f_2 !=iLocal_25){
if(!func_9(&uLocal_23)){
func_8(&uLocal_23, 1, 0);
}elseif(func_45(&uLocal_23, 10000, 1)){
func_146(1, 0, 1, 0, 0, 0, 0);
}}}else{
func_6(&uLocal_23);
iLocal_25=-1;
}}else{
func_6(&uLocal_23);
iLocal_25=-1;
}}else{
func_6(&uLocal_23);
iLocal_25=-1;
}}


void func_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
if(func_151() < 0 && Global_1963618){
return;
}
if(func_150(35)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672524.f_62.f_60, 3)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672524.f_62.f_64, 3)){
bParam0=true;
bParam1=false;
}
if(MISC::IS_BIT_SET(Global_2672524.f_62.f_68, 3)){
bParam0=true;
bParam1=false;
}
if(bParam0){
func_149(2);
}else{
func_149(1);
}
if(bParam1){
func_149(11);
}
if(bParam2){
func_149(32);
if(bParam3){
if(func_151() >=0 && MISC::IS_BIT_SET(Global_1586488[func_151() /*142*/].f_103, 0)){
func_149(33);
}}else{
func_148(33);
}
if(func_151() >=0){
if(func_147(Global_1586488[func_151() /*142*/].f_66)){
func_149(40);
}}}elseif(bParam5){
func_149(37);
}
if(bParam4){
func_149(36);
}
if(func_150(36)){
if(func_150(2)){
func_148(36);
}}
if(bParam6){
func_149(38);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2794162.f_440=NETWORK::GET_NETWORK_TIME();
}}

int func_147(int iParam0){
if(iParam0==joaat("trailersmall2")){
return 1;
}
return 0;
}


void func_148(bool bParam0){
if(bParam0 < 32){
if(MISC::IS_BIT_SET(Global_2672524.f_62.f_1, bParam0)){
MISC::CLEAR_BIT(&(Global_2672524.f_62.f_1), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2672524.f_62.f_2, (bParam0 - 32))){
MISC::CLEAR_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
}}


void func_149(bool bParam0){
if(bParam0 < 32){
if(!MISC::IS_BIT_SET(Global_2672524.f_62.f_1, bParam0)){
MISC::SET_BIT(&(Global_2672524.f_62.f_1), bParam0);
}}elseif(!MISC::IS_BIT_SET(Global_2672524.f_62.f_2, (bParam0 - 32))){
MISC::SET_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
}}


bool func_150(int iParam0){
if(iParam0 < 32){
return MISC::IS_BIT_SET(Global_2672524.f_62.f_1, iParam0);
}
return MISC::IS_BIT_SET(Global_2672524.f_62.f_2, (iParam0 - 32));
}

int func_151(){
if(Global_2359296[func_152() /*5568*/].f_681.f_2 >=415){
Global_2359296[func_152() /*5568*/].f_681.f_2=-1;
return -1;
}
return Global_2359296[func_152() /*5568*/].f_681.f_2;
}

int func_152(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_153(){
if(func_155(PLAYER::PLAYER_ID()) && func_48()==PLAYER::PLAYER_ID()){
if((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_154()){
func_109(&uLocal_20, 1, 0);
Global_1950697=1;
if(PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
iLocal_22=30000;
}}}
if(func_9(&uLocal_20)){
if(func_45(&uLocal_20, iLocal_22, 1)){
func_6(&uLocal_20);
Global_1950697=0;
iLocal_22=10000;
}}}


bool func_154(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}

int func_155(int iParam0){
if(iParam0 !=func_30()){
if(func_55(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_53(Global_2657704[iParam0 /*463*/].f_321.f_7)==9;
}}}
return 0;
}


void func_156(){
if(!func_158() && !func_157()){
if(!STATS::STAT_IS_STATS_TRACKING_ENABLED()){
if(((func_23() && func_55(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
STATS::STAT_ENABLE_STATS_TRACKING();
}}}}


bool func_157(){
return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}


bool func_158(){
return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}


void func_159(){
if((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <=0) && func_23()){
NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
}}


void func_160(){
int iVar0;
if(!iLocal_4){
if(Global_1836398){
iVar0=func_161(joaat("mpply_char_exploit_level"));
if(iVar0 >=4){
Global_262145.f_10765=1;
}
iLocal_4=1;
}}elseif(!Global_1836398){
iLocal_4=0;
}}

int func_161(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_162(){
if(!iLocal_3){
if(Global_1836398){
if(func_164() || func_163()){
Global_262145.f_20349=1;
}else{
Global_262145.f_20349=0;
}
iLocal_3=1;
}}elseif(!Global_1836398){
iLocal_3=0;
}}

int func_163(){
int iVar0;
var uVar1[4];
int iVar2;
iVar0=func_161(joaat("mpply_char_peak_exploit_level"));
if(iVar0 < Global_262145.f_10874){
return 0;
}
uVar1[0]=func_161(joaat("mpply_prevseasonexploitlevel"));
uVar1[1]=func_161(joaat("mpply_prevseason2exploitlevel"));
uVar1[2]=func_161(joaat("mpply_prevseason3exploitlevel"));
uVar1[3]=func_161(joaat("mpply_prevseason4exploitlevel"));
iVar2=0;
while (iVar2 < (Global_262145.f_10870 - 1)){
if(uVar1[iVar2] < Global_262145.f_10874){
return 0;
}
iVar2++;
}
return 1;
}

int func_164(){
int iVar0;
var uVar1[4];
int iVar2;
iVar0=func_161(joaat("mpply_char_peak_exploit_level"));
if(iVar0 < Global_262145.f_10873){
return 0;
}
uVar1[0]=func_161(joaat("mpply_prevseasonexploitlevel"));
uVar1[1]=func_161(joaat("mpply_prevseason2exploitlevel"));
uVar1[2]=func_161(joaat("mpply_prevseason3exploitlevel"));
uVar1[3]=func_161(joaat("mpply_prevseason4exploitlevel"));
iVar2=0;
while (iVar2 < (Global_262145.f_10869 - 1)){
if(uVar1[iVar2] < Global_262145.f_10873){
return 0;
}
iVar2++;
}
return 1;
}


void func_165(){
int iVar0;
if(MISC::IS_PC_VERSION()){
iVar0=0;
while (iVar0 < 32){
MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_801), true);
iVar0++;
}}}


void func_166(){
if(Global_262145.f_10849 !=120){
Global_262145.f_10849=120;
}}


void func_167(){
if(iLocal_1){
HUD::SET_TEXT_SCALE(0f, 0.23f);
HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
func_168(0.69f, 0.06f, "STRING", sLocal_0);
}
if(!iLocal_1){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
switch (iLocal_2){
case 0:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}
break;
case 1:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 2:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 3:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 4:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
iLocal_1=1;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
}}}elseif(HUD::IS_PAUSE_MENU_ACTIVE()){
switch (iLocal_2){
case 0:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
iLocal_2++;
settimera(0);
}
break;
case 1:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 2:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 3:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 4:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_1=0;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
}}}


void func_168(float fParam0, float fParam1, char* sParam2, char* sParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


bool func_169(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_170(){
Global_112837=1;
}