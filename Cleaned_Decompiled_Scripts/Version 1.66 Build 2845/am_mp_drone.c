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
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
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
float fLocal_62=0f;
var uLocal_63=0;
var uLocal_64=0;
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
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
struct<3> Local_96[32];
var uLocal_97=0;
struct<349> Local_98={
4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
struct<12> Local_102={
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
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
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_526(ScriptParam_102);
}else{
func_495(0);
}
while (true){
func_494();
if(func_486()){
func_495(0);
}
if(func_480()){
func_495(0);
}
func_2();
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1();
}}}


void func_1(){
}


void func_2(){
if(!func_479(6)){
func_478();
func_477();
func_476();
func_472();
func_471();
}
func_468();
func_466();
func_462();
func_459();
if(func_479(0)){
func_410();
}elseif(func_479(1)){
if(!func_409()){
func_402();
func_385();
}else{
func_384(1);
func_383(7);
}}elseif(func_479(2)){
func_376();
}elseif(func_479(3)){
func_368();
}elseif(func_479(4)){
func_367();
func_366();
func_364();
func_363();
func_362();
func_361();
func_360();
func_352();
func_348();
func_332();
func_330();
func_287();
func_286();
func_270();
func_376();
func_267();
if(func_260(0)){
func_259();
return;
}
func_255();
func_249();
func_237(0);
func_221();
func_212();
func_204();
func_182();
func_175();
func_173();
func_99();
func_84();
func_82();
func_81();
}elseif(func_479(5)){
func_33();
}elseif(func_479(7)){
func_26();
}
if(!func_479(4) && !func_479(6)){
func_20();
}
func_5();
func_4();
func_3();
}


void func_3(){
Local_98.f_45++;
if(Local_98.f_45 >=32){
Local_98.f_45=0;
}}


void func_4(){
if(Local_98.f_45 !=-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96[Local_98.f_45 /*3*/].f_2)){
if(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_64[Local_98.f_45] !=NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2)){
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_64[Local_98.f_45]=NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2);
}}}}


void func_5(){
int iVar0;
iVar0=PLAYER::INT_TO_PLAYERINDEX(Local_98.f_45);
if(PLAYER::PLAYER_ID() !=iVar0){
if(func_19(iVar0, 1, 1)){
if(func_17(func_18())){
if(MISC::IS_BIT_SET(Local_98.f_7, Local_98.f_45)){
if(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar0, "AM_MP_DRONE", 0)){
MISC::CLEAR_BIT(&(Local_98.f_7), Local_98.f_45);
}}
if(func_14(iVar0, 0)){
if(!MISC::IS_BIT_SET(Local_98.f_7, Local_98.f_45) && func_9(iVar0)){
func_7(iVar0, 1);
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_98.f_159, iVar0, 1);
MISC::SET_BIT(&(Local_98.f_7), Local_98.f_45);
}}elseif((vdist2(func_6(iVar0), Local_98.f_150) > 504100f && !func_479(1)) && !func_479(3)){
if(MISC::IS_BIT_SET(Local_98.f_7, Local_98.f_45)){
func_7(iVar0, 0);
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_98.f_159, iVar0, 0);
MISC::CLEAR_BIT(&(Local_98.f_7), Local_98.f_45);
MISC::CLEAR_BIT(&(Local_98.f_8), Local_98.f_45);
}}}elseif(func_14(iVar0, 1) && func_9(iVar0)){
if(!MISC::IS_BIT_SET(Local_98.f_8, Local_98.f_45)){
func_7(iVar0, 1);
MISC::SET_BIT(&(Local_98.f_8), Local_98.f_45);
}}elseif(MISC::IS_BIT_SET(Local_98.f_8, Local_98.f_45)){
func_7(iVar0, 0);
MISC::CLEAR_BIT(&(Local_98.f_8), Local_98.f_45);
MISC::CLEAR_BIT(&(Local_98.f_7), Local_98.f_45);
}}}}


Vector3 func__6(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_7(int iParam0, int iParam1){
struct<3> Var0;
int iVar1;
Var0.f_0=1379503273;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
iVar1=func_8(iParam0);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}


var func__8(int iParam0){
var uVar0;
if(iParam0 !=-1){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_9(int iParam0){
if(func_13(iParam0, 1, 1)){
return 0;
}
if(func_11(iParam0)){
return 0;
}
if(func_10(iParam0)){
return 0;
}
return 1;
}

int func_10(int iParam0){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}

int func_11(int iParam0){
if(iParam0 !=func_12() && func_19(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_12(){
return -1;
}

int func_13(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_12()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}

int func_14(int iParam0, bool bParam1){
struct<3> Var0;
if(func_13(iParam0, 1, 1)){
return 0;
}
if(func_11(iParam0)){
return 0;
}
if(func_10(iParam0)){
return 0;
}
Var0={
func_6(iParam0) 
};
if(bParam1){
if(func_16()){
if(func_17(func_15())){
if(vdist2(Var0, ENTITY::GET_ENTITY_COORDS(func_15(), 1)) < 490000f){
return 1;
}}}}elseif(vdist2(Var0, Local_98.f_150) < 490000f){
return 1;
}
return 0;
}

int func_15(){
if(Global_1853756 !=func_12()){
if(ENTITY::DOES_ENTITY_EXIST(Global_1648776)){
return Global_1648776;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_1968178[Global_1853756])){
return Global_1968178[Global_1853756];
}}
return -1;
}


bool func_16(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 8);
}

int func_17(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_18(){
if(PLAYER::PLAYER_ID() !=-1){
return Global_1962996.f_20;
}
return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}


void func_20(){
int iVar0;
if(Local_98.f_156){
if(func_25(&(Local_98.f_249))){
if(func_24()){
iVar0=Global_262145.f_25311;
}else{
iVar0=Global_262145.f_24664;
}
if(func_22(&(Local_98.f_249), iVar0, 0)){
func_21(&(Local_98.f_249));
Local_98.f_18=100;
MISC::CLEAR_BIT(&(Local_98.f_5), 4);
MISC::CLEAR_BIT(&(Local_98.f_5), 3);
MISC::CLEAR_BIT(&(Local_98.f_5), 24);
Local_98.f_156=0;
}}}}


void func_21(var uParam0){
uParam0->f_1=0;
}

int func_22(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_23(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_23(var uParam0, bool bParam1, bool bParam2){
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


bool func_24(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 2);
}


bool func_25(var uParam0){
return uParam0->f_1;
}


void func_26(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if(!func_27()){
func_495(1);
}else{
func_495(0);
}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}elseif(!func_27()){
func_495(1);
}else{
func_495(0);
}}

int func_27(){
if(func_32()){
return 1;
}
if(func_31()){
return 1;
}
if(func_30() && func_28(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_28(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==17;
}}}
return 0;
}

int func_29(int iParam0){
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


bool func_30(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 5);
}


bool func_31(){
return MISC::IS_BIT_SET(Global_1962996, 24);
}


bool func_32(){
return MISC::IS_BIT_SET(Global_1962996, 16);
}


void func_33(){
int iVar0;
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
func_80();
func_78();
func_71(1);
if(!MISC::IS_BIT_SET(Local_98.f_5, 1)){
if(!func_41() && !func_40()){
if((func_39() || func_24()) || func_38()){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_98.f_159), 1);
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_34)){
Local_98.f_34=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_34, "HUD_Static_Loop", Local_98.f_157, 1);
}
if(!func_37()){
PAD::SET_CONTROL_SHAKE(0, 300, 100);
GRAPHICS::SET_TIMECYCLE_MODIFIER(func_36());
MISC::SET_BIT(&(Local_98.f_6), 0);
}
MISC::SET_BIT(&(Local_98.f_5), 1);
}elseif(!func_25(&(Local_98.f_245))){
func_23(&(Local_98.f_245), 0, 0);
}else{
iVar0=1000;
if(func_35()){
iVar0=500;
}elseif(func_16() && func_34()){
iVar0=150;
}
if(func_22(&(Local_98.f_245), iVar0, 0) || func_37()){
if(Local_98.f_38==-1){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_38)){
Local_98.f_38=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_38, "HUD_Disconnect", Local_98.f_157, 1);
}}
func_384(1);
func_383(7);
}}}


bool func_34(){
return Global_2793046.f_354;
}


bool func_35(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 4);
}


char* func_36(){
if(func_16()){
return "MissileOutOfRange";
}
return "RemixDrone";
}


bool func_37(){
return MISC::IS_BIT_SET(Global_1962996, 20);
}


bool func_38(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 3);
}


bool func_39(){
return MISC::IS_BIT_SET(Global_1962996, 11);
}


bool func_40(){
return Global_2764617;
}

int func_41(){
if((func_70(PLAYER::PLAYER_ID(), 0) && Global_1581961==1) && func_42()){
return 1;
}
return 0;
}

int func_42(){
char* sVar0;
if((Global_1581961 !=-1 || Global_1581967 !=-1) || Global_1581970 !=-1){
sVar0="anim@scripted@submarine@ig28_submarine_turret_control@male@";
if(func_62(PLAYER::PLAYER_PED_ID())){
sVar0="anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
}
if((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))){
return 0;
}
if(((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3)){
return 0;
}
if(func_43()){
return 0;
}}
return 1;
}

int func_43(){
int iVar0;
if(func_59(PLAYER::PLAYER_ID())){
iVar0=func_58(PLAYER::PLAYER_ID());
if(func_19(iVar0, 0, 1)){
if((((((func_11(iVar0) && func_29(func_57(iVar0))==4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_56(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))){
return 1;
}
if(!func_55(Global_4718592.f_113724)){
if(func_59(iVar0)){
if(func_54(iVar0)){
return 1;
}elseif(func_11(PLAYER::PLAYER_ID()) || func_53()){
return 1;
}}}}}
if(Global_1963025){
return 1;
}
if(func_52(PLAYER::PLAYER_ID())){
iVar0=func_51(PLAYER::PLAYER_ID());
if(func_19(iVar0, 0, 1)){
if((((((func_11(iVar0) && func_29(func_57(iVar0))==9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))==joaat("avenger")){
return 1;
}
if(func_50(iVar0)){
return 1;
}elseif(func_11(PLAYER::PLAYER_ID()) || func_53()){
return 1;
}}}
if(func_70(PLAYER::PLAYER_ID(), 0)){
iVar0=func_49(PLAYER::PLAYER_ID());
if(func_19(iVar0, 0, 1)){
if((((Global_1853755 !=func_12() && func_11(Global_1853755)) && func_29(func_57(Global_1853755))==11) && func_48(Global_1853755, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1853755), 0), joaat("terbyte"))){
return 1;
}elseif(func_47(iVar0)){
return 1;
}elseif(func_11(PLAYER::PLAYER_ID()) || func_53()){
return 1;
}}}
if(func_46(PLAYER::PLAYER_ID())){
if(PLAYER::PLAYER_ID() !=func_12()){
iVar0=Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10;
if(func_19(iVar0, 0, 1)){
if(func_11(PLAYER::PLAYER_ID()) || func_53()){
return 1;
}}}}
if(func_52(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID())){
switch (Global_1581967){
case 1:
if(Global_262145.f_23092){
return 1;
}
break;
case 2:
if(Global_262145.f_23093){
return 1;
}
break;
case 3:
if(Global_262145.f_23094){
return 1;
}
break;
}}
if(Global_1581965==1){
return 1;
}
if(func_44(3)){
if(Global_1835503==185){
if(Global_1836629 !=0){
return 1;
}}}
return 0;
}


bool func_44(int iParam0){
return Global_262145.f_5042[iParam0]==Global_4718592.f_113724;
}

int func_45(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_46(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_12()){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}}
return 0;
}

int func_47(int iParam0){
if(iParam0 !=func_12()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
}
return 0;
}

int func_48(int iParam0, int iParam1){
var uVar0;
if(func_19(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_49(int iParam0){
if(iParam0==func_12()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_50(int iParam0){
if(iParam0 !=func_12()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
}
return 0;
}

int func_51(int iParam0){
if(iParam0==func_12()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_52(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_12()){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}


var func__53(){
return MISC::IS_BIT_SET(Global_1950108, 6);
}

int func_54(int iParam0){
if(iParam0 !=func_12()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 6);
}
return 0;
}


bool func_55(int iParam0){
return Global_262145.f_5033[4]==iParam0;
}

int func_56(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(uParam0)==joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("phantom3")){
return 1;
}
return 0;
}

int func_57(int iParam0){
if(iParam0 !=func_12() && func_19(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_58(int iParam0){
if(iParam0==func_12()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_59(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_12()){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_60(int iParam0, int iParam1){
if(func_61(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_61(int iParam0){
if(func_17(uParam0)){
if(!PED::IS_PED_INJURED(uParam0)){
return 1;
}}
return 0;
}

int func_62(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar2=-1;
iVar3=-1;
if(iVar0==joaat("mp_f_freemode_01")){
iVar1=func_68(iParam0, 6);
if(iVar1 >=256){
iVar2=func_64(iVar0, iVar1, 6, 4);
iVar3=func_63(iVar2);
}
if(((((((((((((iVar1 >=0 && iVar1 <=15) || (iVar1 >=96 && iVar1 <=111)) || (iVar1 >=112 && iVar1 <=127)) || (iVar1 >=128 && iVar1 <=143)) || (iVar1 >=192 && iVar1 <=207)) || (iVar1 >=224 && iVar1 <=239)) || iVar3==0) || iVar3==6) || iVar3==7) || iVar3==8) || iVar3==12) || iVar3==14) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_heels"), 0))){
return 1;
}}
return 0;
}

int func_63(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==0){
return iVar0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0)){
iVar0=15;
}
return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_67(iParam0));
if(iVar1 < 0){
return -1;
}
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
if(iVar2 <=iVar1){
return -1;
}
FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
return Var0.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
iVar4=(iParam1 - func_65(iParam0, func_66(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_66(iParam2));
if(iVar5 <=iVar4){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
Global_78491.f_13[iParam2]=Var3.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=iParam0;
return Var3.f_1;
}
return -1;
}

int func_65(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_66(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}

int func_67(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_68(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(uParam0)){
return -99;
}
uVar0=func_66(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, uVar0);
return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
uVar0=func_66(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uParam0, uVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uParam0, uVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}

int func_70(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_12()){
return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}


void func_71(int iParam0){
if(func_77()){
return;
}
if(!Global_20383.f_1==1){
if(func_76(0)){
func_72(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_72(int iParam0){
if(func_77()){
return;
}
if(Global_20584){
if(func_75()){
func_74(1, 1);
}else{
func_74(0, 0);
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
if(!func_73()){
Global_20383.f_1=3;
}}

int func_73(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_74(bool bParam0, bool bParam1){
if(bParam0){
if(func_76(0)){
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


bool func_75(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_76(int iParam0){
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


bool func_77(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_78(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_79();
}


void func_79(){
Global_23131.f_134=1;
}


void func_80(){
Global_1574839=1;
}


void func_81(){
if(func_30()){
if(func_31()){
if(func_17(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, 1);
}}}}


void func_82(){
char* sVar0;
if(!func_83()){
return;
}
sVar0="scr_xs_props";
STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_174[PLAYER::PLAYER_ID()])){
GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
if(func_35()){
Local_98.f_174[PLAYER::PLAYER_ID()]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_98.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
}else{
Local_98.f_174[PLAYER::PLAYER_ID()]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_98.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
}}}}}

int func_83(){
if(func_35()){
return 1;
}
if(func_16()){
return 1;
}
return 0;
}


void func_84(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!ENTITY::DOES_ENTITY_EXIST(Local_98.f_161)){
STREAMING::REQUEST_MODEL(func_98());
if(STREAMING::HAS_MODEL_LOADED(func_98())){
if(!MISC::IS_BIT_SET(Local_98.f_5, 6)){
if(func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1)){
NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) + 1);
MISC::SET_BIT(&(Local_98.f_5), 6);
}}elseif(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
Local_98.f_161=PED::CREATE_PED(26, func_98(), Local_98.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_98.f_159)), 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98.f_161, 1);
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_161, false, 0);
ENTITY::SET_ENTITY_HAS_GRAVITY(Local_98.f_161, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_98.f_161, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_98());
PED::SET_PED_CONFIG_FLAG(Local_98.f_161, 118, 0);
PED::SET_PED_CONFIG_FLAG(Local_98.f_161, 108, 1);
PED::SET_PED_CONFIG_FLAG(Local_98.f_161, 208, 1);
ENTITY::SET_ENTITY_PROOFS(Local_98.f_161, 1, 1, 1, 1, 1, 0, 0, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98.f_161, NETWORK::NET_TO_OBJ(Local_98.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_98.f_161, 0, 0);
Global_1962996.f_23=Local_98.f_161;
}}}elseif(func_17(Local_98.f_161)){
if(ENTITY::IS_ENTITY_VISIBLE(Local_98.f_161)){
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_161, false, 0);
}
if(!func_90(PLAYER::PLAYER_ID()) && !func_87(PLAYER::PLAYER_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_86(Global_1837219);
}}elseif((Global_1962996.f_4==-1 || Global_1962996.f_4==0) || Global_1962996.f_4==Global_1837208){
func_86(Global_1837219);
}
if(PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_98.f_161) !=func_85()){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_98.f_161, func_85());
}
if(!ENTITY::IS_ENTITY_ATTACHED(Local_98.f_161)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98.f_161, NETWORK::NET_TO_OBJ(Local_98.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_98.f_161, 0, 0);
}}}}

int func_85(){
if(Global_1962996.f_4 !=-1 && Global_1962996.f_4 !=0){
return Global_1962996.f_4;
}
return Global_1837219;
}


void func_86(int iParam0){
if(Global_1962996.f_4 !=iParam0){
Global_1962996.f_4=iParam0;
}}

int func_87(int iParam0){
if(func_89(iParam0)==236 || func_89(iParam0)==150){
return func_88(iParam0);
}
return 0;
}

int func_88(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}

int func_89(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}


bool func_90(int iParam0){
return func_91(iParam0, 20);
}


var func__91(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_92(int iParam0, bool bParam1, bool bParam2){
return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666891, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_97(iParam0) - func_96(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_96(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_97(iParam0) - func_95(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_96(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_97(iParam0) - func_96(iParam0, 1));
}
if(!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=3){
iVar1=(iVar1 - func_94(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_94(int iParam0){
switch (iParam0){
case 0:
return 10;
break;
case 1:
return 10;
break;
case 2:
return 10;
break;
}
return 0;
}

int func_95(int iParam0){
switch (iParam0){
case 0:
return Global_1666891.f_1;
break;
case 1:
return Global_1666891.f_2;
break;
case 2:
return Global_1666891.f_3;
break;
}
return 0;
}

int func_96(int iParam0, bool bParam1){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_219;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
}
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_220;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
}
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_221;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
}
break;
}
return 0;
}

int func_97(int iParam0){
switch (iParam0){
case 0:
return Global_1666899;
break;
case 1:
return Global_1666900;
break;
case 2:
return Global_1666901;
break;
}
return 0;
}

int func_98(){
return joaat("g_m_m_chigoon_01");
}


void func_99(){
if(func_172()){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_RENDERING(Local_98.f_169)){
if(!func_83()){
func_163();
func_131();
}else{
func_112();
func_102();
}
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
func_101(1);
func_100(2);
}}}


void func_100(int iParam0){
Global_1577898=iParam0;
}


void func_101(int iParam0){
Global_1655472.f_1163=iParam0;
}


void func_102(){
int iVar0;
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_98.f_170)){
if(func_16()){
Local_98.f_170=func_111();
}else{
Local_98.f_170=func_110();
}
return;
}
iVar0=func_18();
if(iVar0 < 0 || !func_17(iVar0)){
return;
}
if(func_16()){
func_106();
}
func_105(Local_98.f_170, 0);
func_104(Local_98.f_170, 3, 3, 3);
func_103(Local_98.f_170, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_98.f_170, 255, 255, 255, 0, 0);
}


void func_103(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
fParam2=((fParam2 - fParam3) / (fParam4 - fParam3));
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_104(var uParam0, int iParam1, int iParam2, int iParam3){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_105(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_106(){
int iVar0;
float fVar1;
iVar0=1;
if(func_16()){
iVar0=10;
}
fVar1=Local_98.f_120;
if(fVar1 >=(func_109() - IntToFloat((50 * iVar0)))){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
Local_98.f_37=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_37, "Out_Of_Bounds_Alarm_Loop", Local_98.f_157, 1);
}
if(fVar1 >=(func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.1f);
}elseif(fVar1 >=(func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.2f);
}elseif(fVar1 >=(func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.3f);
}elseif(fVar1 >=(func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.4f);
}elseif(fVar1 >=(func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.5f);
}elseif(fVar1 >=(func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.6f);
}elseif(fVar1 >=(func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.7f);
}elseif(fVar1 >=(func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.8f);
}elseif(fVar1 >=(func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.9f);
}elseif(fVar1 >=(func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109()){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(1f);
}}else{
func_108("SET_WARNING_IS_VISIBLE", 0);
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
AUDIO::STOP_SOUND(Local_98.f_37);
AUDIO::RELEASE_SOUND_ID(Local_98.f_37);
Local_98.f_37=-1;
}}}


void func_107(float fParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_WARNING_FLASH_RATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_108(char* sParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, sParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


float func_109(){
if(Global_1962996.f_8==0f){
return Global_262145.f_24672;
}
return Global_1962996.f_8;
}


var func__110(){
char* sVar0;
sVar0="";
switch (Global_4718592.f_160097){
case 1:
sVar0="ARENA_GUN_CAM_APOCALYPSE";
break;
case 2:
sVar0="ARENA_GUN_CAM_SCIFI";
break;
case 3:
sVar0="ARENA_GUN_CAM_CONSUMER";
break;
default:
sVar0="INVALID_THEME";
break;
}
return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}


var func__111(){
char* sVar0;
sVar0="SUBMARINE_MISSILES";
return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}


void func_112(){
if(func_16()){
if(!func_130()){
return;
}}
if(!MISC::IS_BIT_SET(Local_98.f_5, 16)){
if(func_128(0, -1, 0)){
func_127(-1);
func_126(20, "DRONE_SPACE", -1);
func_126(21, "DRONE_POSITION", -1);
if(func_35()){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_125(208, "DRONE_SPEEDU", -1, 0);
func_125(207, "DRONE_SLOWD", -1, 0);
}else{
func_125(209, "DRONE_SPEEDU", -1, 0);
func_125(210, "DRONE_SLOWD", -1, 0);
}}
func_125(75, "MOVE_DRONE_RE", -1, 0);
MISC::SET_BIT(&(Local_98.f_5), 16);
}}else{
func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 17)){
MISC::SET_BIT(&(Local_98.f_5), 17);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 17)){
MISC::CLEAR_BIT(&(Local_98.f_5), 17);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
}}


void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_124(&iVar0, 0, iParam1)){
return;
}
iParam0=iParam0;
if(iParam3 && !func_121(bParam4, bParam8)){
return;
}
if(func_119()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_116(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5465[iVar1] !=363){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5465[iVar1], 1), 64);
}elseif(Global_23270.f_5480[iVar1] !=32){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23270.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_115(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_115(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_114(&(Global_23270.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23270.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_115(&Global_4540953);
if(Global_4540953.f_20==-1){
func_114(&(Global_4540953.f_16));
}else{
iVar4=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
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
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
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
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


void func_114(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_115(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


bool func_116(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_117(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_117(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_118();
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

int func_118(){
return Global_1574918;
}

int func_119(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_120()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20328==0){
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

int func_120(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}

int func_121(bool bParam0, bool bParam1){
if(Global_2672505.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_123(8, -1) && func_122() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_122(){
return Global_1574993;
}


var func__123(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_124(var uParam0, bool bParam1, int iParam2){
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
if(Global_23270.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23270.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23270.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_126(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=363;
Global_23270.f_5480[Global_23270.f_5166]=iParam0;
Global_23270.f_5166++;
}


void func_127(int iParam0){
int iVar0;
int iVar1;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
Global_23270.f_5450[iVar0]=-1;
Global_23270.f_5465[iVar0]=363;
Global_23270.f_5480[iVar0]=32;
iVar0++;
}
Global_23270.f_5495=0;
StringCopy(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
if(MISC::IS_PC_VERSION()){
if(!func_124(&iVar1, 0, iParam0)){
return;
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23270.f_6103[iVar1 /*10*/])){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


bool func_128(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_124(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_129(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_129(var uParam0){
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


bool func_130(){
return MISC::IS_BIT_SET(Local_98.f_6, 6);
}


void func_131(){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_98.f_170)){
Local_98.f_170=GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
return;
}
if((func_38() || func_77()) || func_162(0)){
func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
}else{
func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
}
if((func_38() || func_77()) || func_24()){
func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
}else{
func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
}
if(func_24()){
func_108("SET_EMP_METER_IS_VISIBLE", 1);
}else{
func_108("SET_EMP_METER_IS_VISIBLE", 0);
}
if(!func_38() && !func_77()){
func_108("SET_RETICLE_IS_VISIBLE", 1);
}else{
func_108("SET_RETICLE_IS_VISIBLE", 0);
}
func_108("SET_HEADING_METER_IS_VISIBLE", 1);
func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
if(((!func_38() && !func_77()) && !func_24()) && func_161()){
func_108("SET_BOOST_METER_IS_VISIBLE", 1);
}else{
func_108("SET_BOOST_METER_IS_VISIBLE", 0);
}
if(func_160()){
func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
}else{
func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
}
func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
if(func_158(PLAYER::PLAYER_ID())==240){
if(Local_98.f_120 >=(func_109() - 50f) || Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 50))){
func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
func_157();
if(MISC::IS_BIT_SET(Local_98.f_5, 13)){
MISC::CLEAR_BIT(&(Local_98.f_5), 13);
}}else{
func_153(func_154());
if(!MISC::IS_BIT_SET(Local_98.f_5, 13)){
func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
MISC::SET_BIT(&(Local_98.f_5), 13);
}}}else{
func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
func_157();
}
func_108("SET_INFO_LIST_IS_VISIBLE", 0);
if(!func_38() && !func_77()){
if(!func_24()){
func_152(Local_98.f_18);
}else{
func_151(Local_98.f_18);
}
if(!func_162(0)){
func_150(Local_98.f_19);
}}
if(func_160()){
func_149(Local_98.f_24);
}
if(func_161()){
func_148(Local_98.f_20);
}
func_147(0, "DRONE_ZOOM_1");
func_147(1, "");
func_147(2, "DRONE_ZOOM_2");
func_147(3, "");
func_147(4, "DRONE_ZOOM_3");
func_145();
func_143();
func_141();
func_140(round((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_98.f_159)) + 180f)));
if(func_158(PLAYER::PLAYER_ID())==240){
func_139(func_154());
}
if(func_138()){
func_133();
}elseif(func_24() || func_38()){
func_132();
}elseif(func_31()){
func_106();
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_98.f_170, 255, 255, 255, 0, 0);
}


void func_132(){
if(Local_98.f_150.f_2 >=(func_109() - 20f)){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
Local_98.f_37=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_37, "Out_Of_Bounds_Alarm_Loop", Local_98.f_157, 1);
}
if(Local_98.f_150.f_2 >=(func_109() - 20f) && Local_98.f_150.f_2 < (func_109() - 16f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.1f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 16f) && Local_98.f_150.f_2 < (func_109() - 13f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.2f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 13f) && Local_98.f_150.f_2 < (func_109() - 10f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.3f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 10f) && Local_98.f_150.f_2 < (func_109() - 8f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.4f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 8f) && Local_98.f_150.f_2 < (func_109() - 6f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.5f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 6f) && Local_98.f_150.f_2 < (func_109() - 4f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.6f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 4f) && Local_98.f_150.f_2 < (func_109() - 3f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.7f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 3f) && Local_98.f_150.f_2 < (func_109() - 2f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.8f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 2f) && Local_98.f_150.f_2 < (func_109() - 1f)){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.9f);
}elseif(Local_98.f_150.f_2 >=(func_109() - 1f) && Local_98.f_150.f_2 < func_109()){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(1f);
}}else{
func_108("SET_WARNING_IS_VISIBLE", 0);
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
AUDIO::STOP_SOUND(Local_98.f_37);
AUDIO::RELEASE_SOUND_ID(Local_98.f_37);
Local_98.f_37=-1;
}}}


void func_133(){
if(Local_98.f_120 >=(func_109() - 50f) || Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 50))){
func_134();
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
Local_98.f_37=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_37, "Out_Of_Bounds_Alarm_Loop", Local_98.f_157, 1);
}
if((Local_98.f_120 >=(func_109() - 50f) && Local_98.f_120 < (func_109() - 45f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 50)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 45)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.1f);
}elseif((Local_98.f_120 >=(func_109() - 45f) && Local_98.f_120 < (func_109() - 40f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 45)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 40)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.2f);
}elseif((Local_98.f_120 >=(func_109() - 40f) && Local_98.f_120 < (func_109() - 35f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 40)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 35)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.3f);
}elseif((Local_98.f_120 >=(func_109() - 35f) && Local_98.f_120 < (func_109() - 30f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 35)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 30)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.4f);
}elseif((Local_98.f_120 >=(func_109() - 30f) && Local_98.f_120 < (func_109() - 25f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 30)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 25)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.5f);
}elseif((Local_98.f_120 >=(func_109() - 25f) && Local_98.f_120 < (func_109() - 20f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 25)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 20)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.6f);
}elseif((Local_98.f_120 >=(func_109() - 20f) && Local_98.f_120 < (func_109() - 15f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 20)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 15)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.7f);
}elseif((Local_98.f_120 >=(func_109() - 15f) && Local_98.f_120 < (func_109() - 10f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 15)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 10)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.8f);
}elseif((Local_98.f_120 >=(func_109() - 10f) && Local_98.f_120 < (func_109() - 5f)) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 10)) && Local_98.f_121 < IntToFloat((Global_262145.f_24671 - 5)))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(0.9f);
}elseif((Local_98.f_120 >=(func_109() - 5f) && Local_98.f_120 < func_109()) || (Local_98.f_121 >=IntToFloat((Global_262145.f_24671 - 5)) && Local_98.f_121 < IntToFloat(Global_262145.f_24671))){
func_108("SET_WARNING_IS_VISIBLE", 1);
func_107(1f);
}}else{
func_108("SET_WARNING_IS_VISIBLE", 0);
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
AUDIO::STOP_SOUND(Local_98.f_37);
AUDIO::RELEASE_SOUND_ID(Local_98.f_37);
Local_98.f_37=-1;
}}}


void func_134(){
int iVar0;
if(CAM::IS_SCREEN_FADED_IN() && !MISC::IS_BIT_SET(Global_1950108.f_3, 15)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
iVar0=func_137(22045, -1);
if(iVar0 < 4){
func_136("HACK_DRONE_DIS", -1);
iVar0++;
func_135(22045, iVar0, -1);
MISC::SET_BIT(&(Global_1950108.f_3), 15);
}}}}


void func_135(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_118();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}


void func_136(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


var func__137(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_118();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}


bool func_138(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 1);
}


void func_139(float fParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "ATTENUATE_SOUND_WAVE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_140(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_HEADING");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_141(){
if(func_24()){
if(MISC::IS_BIT_SET(Local_98.f_5, 11) && !Local_98.f_156){
func_142(1);
}else{
func_142(0);
}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 11) || MISC::IS_BIT_SET(Local_98.f_5, 23)){
func_142(1);
}else{
func_142(0);
}}


void func_142(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_RETICLE_ON_TARGET");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_143(){
if(MISC::IS_BIT_SET(Local_98.f_5, 4) || (MISC::IS_BIT_SET(Local_98.f_5, 3) && func_24())){
if(Local_98.f_18==100){
func_144(1);
}elseif(Local_98.f_18 !=0 && Local_98.f_18 !=100){
func_144(2);
}}else{
func_144(0);
}}


void func_144(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_RETICLE_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_145(){
switch (Local_98.f_25){
case 0:
func_146(0);
break;
case 1:
func_146(2);
break;
case 2:
func_146(4);
break;
}}


void func_146(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_ZOOM");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_147(int iParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_ZOOM_LABEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
func_114(sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_148(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_BOOST_PERCENTAGE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_149(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_TRANQUILIZE_PERCENTAGE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_150(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_DETONATE_PERCENTAGE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_151(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_EMP_PERCENTAGE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_152(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_98.f_170, "SET_SHOCK_PERCENTAGE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_153(float fParam0){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_44)){
Local_98.f_44=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_44, "signalstrength", fParam0);
}else{
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_44, "signalstrength", fParam0);
}}


float func_154(){
float fVar0;
if(func_158(PLAYER::PLAYER_ID())==240){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
fVar0=func_155(NETWORK::NET_TO_OBJ(Local_98.f_159), func_156(), 1);
if(fVar0 >=200f){
return 0f;
}elseif(fVar0 >=180f && fVar0 < 200f){
return 0.1f;
}elseif(fVar0 >=160f && fVar0 < 180f){
return 0.2f;
}elseif(fVar0 >=140f && fVar0 < 160f){
return 0.3f;
}elseif(fVar0 >=120f && fVar0 < 140f){
return 0.4f;
}elseif(fVar0 >=100f && fVar0 < 120f){
return 0.5f;
}elseif(fVar0 >=80f && fVar0 < 100f){
return 0.6f;
}elseif(fVar0 >=60f && fVar0 < 80f){
return 0.7f;
}elseif(fVar0 >=40f && fVar0 < 60f){
return 0.8f;
}elseif(fVar0 >=20f && fVar0 < 40f){
return 0.9f;
}elseif(fVar0 <=20f){
return 1f;
}}}
return 0f;
}


float func_155(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}


Vector3 func__156(){
if(func_158(PLAYER::PLAYER_ID())==240){
return Global_1968334;
}
return 0f, 0f, 0f;
}


void func_157(){
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_44)){
AUDIO::STOP_SOUND(Local_98.f_44);
AUDIO::RELEASE_SOUND_ID(Local_98.f_44);
Local_98.f_44=-1;
}}

int func_158(int iParam0){
if(func_159(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_159(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


bool func_160(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 6);
}

int func_161(){
if(func_160()){
if(INTERIOR::IS_VALID_INTERIOR(Global_1962996.f_24)){
return 0;
}}
return 1;
}

int func_162(bool bParam0){
if(func_138()){
if(bParam0){
if(MISC::IS_BIT_SET(Local_98.f_5, 4)){
return 1;
}}}
if(func_160()){
return 1;
}
return 0;
}


void func_163(){
int iVar0;
int iVar1;
if(func_77()){
return;
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 16)){
if(func_128(0, -1, 0)){
func_127(-1);
func_126(21, "DRONE_MOVE", -1);
func_126(20, "DRONE_POSITION", -1);
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_125(210, "CELL_284", -1, 0);
if((!func_38() && !func_24()) && func_161()){
func_125(209, "BOOST_DRONE_E", -1, 0);
}
func_125(208, "MOVE_DRONE_UP", -1, 0);
func_125(207, "MOVE_DRONE_DO", -1, 0);
}else{
func_126(29, "CELL_284", -1);
if((!func_38() && !func_24()) && func_161()){
func_125(203, "BOOST_DRONE_E", -1, 0);
}
func_125(209, "MOVE_DRONE_UP", -1, 0);
func_125(210, "MOVE_DRONE_DO", -1, 0);
}
if(!func_38()){
iVar0=206;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar0=237;
}
if(func_24()){
func_125(iVar0, "MOVE_DRONE_EM", -1, 0);
}else{
func_125(iVar0, "MOVE_DRONE_ST", -1, 0);
}
iVar1=205;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar1=238;
}
if(!func_162(0)){
func_125(iVar1, "MOVE_DRONE_EX", -1, 0);
}elseif(func_170()){
func_125(iVar1, "MOVE_DRONE_TRG", -1, 0);
}}
if(!func_24()){
if((((func_169(0) || func_169(1)) || func_168()) || RECORDING::IS_REPLAY_RECORDING()) || func_164(PLAYER::PLAYER_ID())){
}else{
func_125(201, "DRONE_PHOTO", -1, 0);
}}
func_125(80, "MOVE_DRONE_RE", -1, 0);
MISC::SET_BIT(&(Local_98.f_5), 16);
}}else{
func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 17)){
MISC::SET_BIT(&(Local_98.f_5), 17);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 17)){
MISC::CLEAR_BIT(&(Local_98.f_5), 17);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
}}

int func_164(int iParam0){
if(func_167(func_158(iParam0))){
if(func_166() !=func_12()){
if(func_165()==func_166()){
return 1;
}}}
return 0;
}

int func_165(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}

int func_166(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_167(int iParam0){
switch (iParam0){
case 241:
case 248:
return 1;
default:
}
return 0;
}


var func__168(){
return Global_23131.f_135;
}


bool func_169(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_170(){
if(func_171() <=0){
return 0;
}
if(func_160()){
return 1;
}
return 0;
}

int func_171(){
return Global_1962996.f_6;
}


bool func_172(){
return MISC::IS_BIT_SET(Global_1962996, 7);
}


void func_173(){
int iVar0;
if(!func_174()){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if((CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_RENDERING(Local_98.f_169)) && !func_77()){
iVar0=80;
if(func_83()){
iVar0=75;
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 7)){
MISC::SET_BIT(&(Local_98.f_5), 7);
}}}}}}

int func_174(){
if(func_16()){
if(!func_130()){
return 0;
}}
return 1;
}


void func_175(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((func_181() || !func_164(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
iVar0=func_180(1);
func_179(iVar0);
iVar1=func_180(0);
iVar2=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_98.f_141, 2f, iVar1, 0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 !=Local_98.f_162){
if(WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2)==999){
if(!MISC::IS_BIT_SET(Local_98.f_5, 26)){
func_178(func_166(), 1, 1, 0);
MISC::SET_BIT(&(Local_98.f_5), 26);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_98.f_162)){
if(WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_98.f_162, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_98.f_162)==999){
if(!MISC::IS_BIT_SET(Local_98.f_5, 26)){
func_178(func_166(), 1, 1, 0);
MISC::SET_BIT(&(Local_98.f_5), 26);
}}}
if(MISC::IS_BIT_SET(Local_98.f_5, 26)){
iVar3=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_98.f_141, 2f, iVar0, 0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar3)){
if(ENTITY::DOES_ENTITY_EXIST(Local_98.f_162)){
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_162, false, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
ENTITY::SET_ENTITY_VISIBLE(iVar2, false, 0);
}
func_176(1);
}}}


void func_176(bool bParam0){
if(bParam0){
if(!func_177()){
MISC::SET_BIT(&Global_1962996, 1);
}}elseif(func_177()){
MISC::CLEAR_BIT(&Global_1962996, 1);
}}


bool func_177(){
return MISC::IS_BIT_SET(Global_1962996, 1);
}


void func_178(int iParam0, int iParam1, int iParam2, int iParam3){
struct<5> Var0;
int iVar1;
Var0.f_0=1926628133;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3=iParam2;
Var0.f_4=iParam3;
iVar1=0;
if(iParam0 !=func_12()){
MISC::SET_BIT(&iVar1, iParam0);
}
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, iVar1);
}}


bool func_179(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_180(bool bParam0){
if(!bParam0){
if(Global_1962996.f_19 !=0){
return Global_1962996.f_19;
}else{
return joaat("ba_prop_battle_secpanel");
}}else{
return joaat("ba_prop_battle_secpanel_dam");
}
return 0;
}


var func__181(){
return MISC::IS_BIT_SET(Global_1962996, 14);
}


void func_182(){
int iVar0;
int iVar1;
int iVar2;
if((MISC::IS_BIT_SET(Local_98.f_5, 1) || func_193()) || func_192()){
Local_98.f_18=0;
Local_98.f_19=0;
if(!MISC::IS_BIT_SET(Local_98.f_5, 10)){
MISC::SET_BIT(&(Local_98.f_5), 10);
}
return;
}
if(!func_192()){
if(MISC::IS_BIT_SET(Local_98.f_5, 10)){
Local_98.f_18=100;
MISC::CLEAR_BIT(&(Local_98.f_5), 10);
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if((CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_RENDERING(Local_98.f_169)) && !MISC::IS_BIT_SET(Local_98.f_5, 2)){
if((!MISC::IS_BIT_SET(Local_98.f_5, 4) && !MISC::IS_BIT_SET(Local_98.f_5, 3)) && !Local_98.f_156){
iVar0=206;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar0=237;
}
if((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !MISC::IS_BIT_SET(Local_98.f_5, 5)) && !MISC::IS_BIT_SET(Local_98.f_5, 24)) && !func_77()){
MISC::SET_BIT(&(Local_98.f_5), 24);
if(MISC::IS_BIT_SET(Local_98.f_5, 11) || MISC::IS_BIT_SET(Local_98.f_5, 23)){
Local_98.f_27++;
}}
if(func_24()){
func_189();
}else{
func_188();
}}elseif(func_25(&(Local_98.f_249))){
if(func_24()){
iVar1=Global_262145.f_25311;
}else{
iVar1=Global_262145.f_24664;
}
if(func_22(&(Local_98.f_249), iVar1, 0)){
func_21(&(Local_98.f_249));
Local_98.f_18=100;
if(Local_98.f_32 !=-1){
AUDIO::STOP_SOUND(Local_98.f_32);
AUDIO::RELEASE_SOUND_ID(Local_98.f_32);
Local_98.f_32=-1;
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_35)){
AUDIO::STOP_SOUND(Local_98.f_35);
AUDIO::RELEASE_SOUND_ID(Local_98.f_35);
Local_98.f_35=-1;
}
MISC::CLEAR_BIT(&(Local_98.f_5), 4);
MISC::CLEAR_BIT(&(Local_98.f_5), 3);
MISC::CLEAR_BIT(&(Local_98.f_5), 24);
Local_98.f_156=0;
}else{
iVar2=(100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_249)));
Local_98.f_18=(iVar2 / iVar1);
if(!func_24()){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_32)){
Local_98.f_32=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_32, "HUD_Shock_Recharge", Local_98.f_157, 1);
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_32, "Time", (IntToFloat(iVar1) / 1000f));
}
}}}
func_186();
func_183();
}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


void func_183(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
int iVar6;
if(func_170()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar0=238;
}else{
iVar0=205;
}
if(!MISC::IS_BIT_SET(Local_98.f_6, 5)){
if(!MISC::IS_BIT_SET(Local_98.f_6, 4)){
if(PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)){
MISC::SET_BIT(&(Local_98.f_6), 4);
}}elseif(Local_98.f_13==1){
if(Local_98.f_244==2){
Var1={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
Var3={
(-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) 
};
Var4={
10f, 10f, 10f 
};
Var5={
Var1 + Var3 * Var4 
};
iVar6=Global_262145.f_24665;
if(MISC::IS_BIT_SET(Local_98.f_5, 23)){
iVar6=Global_262145.f_24666;
}
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_98.f_150 + Vector(0f, 0f, 0f), Var5, iVar6, 1, joaat("WEAPON_TRANQUILIZER"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0, 0, 1, 0, 0, 0);
Local_98.f_24=100;
PAD::SET_CONTROL_SHAKE(0, 300, round((150f * Local_98.f_131)));
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_81)){
Local_98.f_81=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_81, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_98.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
if(MISC::IS_BIT_SET(Local_98.f_5, 11) || MISC::IS_BIT_SET(Local_98.f_5, 23)){
Local_98.f_29++;
}
func_185((func_171() - 1));
if(func_171() <=0){
Local_98.f_24=0;
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
}
MISC::SET_BIT(&(Local_98.f_6), 5);
func_23(&(Local_98.f_257), 0, 0);
}}}else{
func_184();
}}}


void func_184(){
int iVar0;
int iVar1;
if(func_171() > 0){
if(func_25(&(Local_98.f_257))){
iVar0=Global_262145.f_24664;
if(func_22(&(Local_98.f_257), iVar0, 0)){
MISC::CLEAR_BIT(&(Local_98.f_6), 5);
MISC::CLEAR_BIT(&(Local_98.f_6), 4);
func_21(&(Local_98.f_257));
Local_98.f_24=100;
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_35)){
AUDIO::STOP_SOUND(Local_98.f_35);
AUDIO::RELEASE_SOUND_ID(Local_98.f_35);
Local_98.f_35=-1;
}}else{
iVar1=(100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_257)));
Local_98.f_24=(iVar1 / iVar0);
}}}}


void func_185(int iParam0){
if(Global_1962996.f_6 !=iParam0){
Global_1962996.f_6=iParam0;
}}


void func_186(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
Local_98.f_348.f_2=2;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
Local_98.f_348.f_3=238;
}else{
Local_98.f_348.f_3=205;
}
iVar0=Global_262145.f_24667;
if(!MISC::IS_BIT_SET(Local_98.f_5, 31)){
Local_98.f_22=100;
}
if(func_24()){
iVar0=(iVar0 / 2);
if(MISC::IS_BIT_SET(Local_98.f_6, 1)){
Local_98.f_21=((Local_98.f_23 * (Global_262145.f_24667 / 2)) / 100);
Local_98.f_21=((Global_262145.f_24667 / 2) - Local_98.f_21);
MISC::CLEAR_BIT(&(Local_98.f_6), 1);
}
if(MISC::IS_BIT_SET(Local_98.f_5, 31)){
iVar0=Local_98.f_21;
}}else{
Local_98.f_22=100;
}
if(!func_162(1)){
if(!func_77() && func_187(&(Local_98.f_348), 1, iVar0)){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_36)){
Local_98.f_36=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_36, "Destroyed", NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_157, 1, 0);
}
HUD::THEFEED_SHOW();
iVar1=0;
if(func_24()){
iVar1=69;
}
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_98.f_150, iVar1, 0.5f, 1, 0, 1065353216);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
PAD::SET_CONTROL_SHAKE(0, 300, round((200f * Local_98.f_131)));
MISC::SET_BIT(&(Local_98.f_5), 2);
}}
if(func_25(&(Local_98.f_348))){
PAD::SET_CONTROL_SHAKE(0, 300, 20);
if(!MISC::IS_BIT_SET(Local_98.f_5, 5)){
MISC::SET_BIT(&(Local_98.f_5), 5);
}
func_21(&(Local_98.f_273));
if(!func_22(&(Local_98.f_348), iVar0, 0)){
iVar2=(Local_98.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_348)));
if(!func_24()){
Local_98.f_19=(iVar2 / iVar0);
}elseif(!MISC::IS_BIT_SET(Local_98.f_5, 31)){
Local_98.f_19=(iVar2 / iVar0);
}else{
Local_98.f_19=(Local_98.f_23 + (iVar2 / iVar0));
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_33)){
Local_98.f_33=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_33, "HUD_Detonate_Charge", Local_98.f_157, 1);
}}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 5)){
MISC::CLEAR_BIT(&(Local_98.f_5), 5);
if(!func_24()){
Local_98.f_19=0;
}else{
MISC::SET_BIT(&(Local_98.f_5), 31);
Local_98.f_22=(100 - Local_98.f_19);
Local_98.f_21=(iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_348)));
Local_98.f_23=Local_98.f_19;
func_21(&(Local_98.f_273));
}
if(Local_98.f_33 !=-1){
AUDIO::STOP_SOUND(Local_98.f_33);
AUDIO::RELEASE_SOUND_ID(Local_98.f_33);
Local_98.f_33=-1;
}}elseif(func_24()){
if(Local_98.f_19 > 0){
if(Local_98.f_19 <=2){
Local_98.f_19=0;
}
if(!func_25(&(Local_98.f_273))){
func_23(&(Local_98.f_273), 0, 0);
}else{
iVar3=Global_262145.f_24667;
if(!func_22(&(Local_98.f_273), iVar3, 0)){
fVar4=((100f - IntToFloat(Local_98.f_22)) / to_float((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_273)))));
Local_98.f_19=(Local_98.f_19 - round(fVar4));
Local_98.f_23=Local_98.f_19;
Local_98.f_22=(100 - Local_98.f_19);
MISC::SET_BIT(&(Local_98.f_6), 1);
}else{
Local_98.f_19=0;
}}}else{
func_21(&(Local_98.f_348));
MISC::CLEAR_BIT(&(Local_98.f_5), 31);
MISC::CLEAR_BIT(&(Local_98.f_6), 1);
}}}

int func_187(var uParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1)){
if(!func_25(uParam0)){
func_23(uParam0, 0, 0);
}elseif(func_22(uParam0, iParam2, 0)){
func_21(uParam0);
return 1;
}}else{
func_21(uParam0);
}
return 0;
}


void func_188(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
int iVar5;
if(MISC::IS_BIT_SET(Local_98.f_5, 24)){
if(Local_98.f_13==1){
if(Local_98.f_244==2){
Var0={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
Var1={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
Var2={
(-sin(Var1.f_2) * cos(Var1.f_0)), (cos(Var1.f_2) * cos(Var1.f_0)), sin(Var1.f_0) 
};
Var3={
10f, 10f, 10f 
};
Var4={
Var0 + Var2 * Var3 
};
iVar5=Global_262145.f_24665;
if(MISC::IS_BIT_SET(Local_98.f_5, 23)){
iVar5=Global_262145.f_24666;
}
if(func_160()){
iVar5=1;
}
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_98.f_150 + Vector(0f, 0f, 0f), Var4, iVar5, 1, joaat("weapon_stungun"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0, 0, 1, 0, 0, 0);
Local_98.f_18=100;
Local_98.f_19=0;
PAD::SET_CONTROL_SHAKE(0, 300, round((150f * Local_98.f_131)));
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_35)){
Local_98.f_35=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_157, 1, 0);
}
if(Local_98.f_33 !=-1){
AUDIO::STOP_SOUND(Local_98.f_33);
AUDIO::RELEASE_SOUND_ID(Local_98.f_33);
Local_98.f_33=-1;
}
MISC::SET_BIT(&(Local_98.f_5), 4);
func_23(&(Local_98.f_249), 0, 0);
}}}}


void func_189(){
if((MISC::IS_BIT_SET(Local_98.f_5, 24) && !MISC::IS_BIT_SET(Local_98.f_5, 3)) && !Local_98.f_156){
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr")){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_98.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
}}
Local_98.f_18=100;
PAD::SET_CONTROL_SHAKE(0, 300, round((150f * Local_98.f_131)));
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_35)){
Local_98.f_35=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_157, 1, 0);
}
if(Local_98.f_33 !=-1){
AUDIO::STOP_SOUND(Local_98.f_33);
AUDIO::RELEASE_SOUND_ID(Local_98.f_33);
Local_98.f_33=-1;
}
func_190(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_98.f_159), 1), 0);
MISC::SET_BIT(&(Local_98.f_5), 3);
Local_98.f_156=1;
func_23(&(Local_98.f_249), 0, 0);
}}


void func_190(struct<3> Param0, bool bParam1){
struct<6> Var0;
Var0.f_0=-1167165474;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=bParam1;
if(!bParam1){
if(!func_191(1, 1)==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, func_191(1, 1));
}}elseif(Global_1962996.f_21 !=func_12()){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, func_8(Global_1962996.f_21));
}}

int func_191(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_19(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_116(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}


bool func_192(){
return MISC::IS_BIT_SET(Global_1962996, 8);
}

int func_193(){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)) && !MISC::IS_BIT_SET(Local_98.f_5, 2)){
return 1;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(func_164(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2791785, 0)){
}elseif(func_203()){
if(ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_98.f_159)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_98.f_159)) !=0){
Local_98.f_26=1;
return 1;
}}}
if(MISC::IS_BIT_SET(Local_98.f_5, 2)){
Local_98.f_26=4;
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 9)){
Local_98.f_26=1;
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 7)){
Local_98.f_26=0;
return 1;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_98.f_159)) || func_202(NETWORK::NET_TO_ENT(Local_98.f_159), 0)){
if(MISC::IS_BIT_SET(Local_98.f_5, 29)){
Local_98.f_26=3;
return 1;
}}}
if(func_200(PLAYER::PLAYER_ID())){
Local_98.f_26=0;
return 1;
}
if(func_138()){
if(Global_1853755 !=func_12()){
if(func_47(Global_1853755)){
Local_98.f_26=0;
return 1;
}}}
if(func_199()){
Local_98.f_26=1;
return 1;
}
if(func_198(PLAYER::PLAYER_ID())){
Local_98.f_26=0;
return 1;
}
if(func_197()){
Local_98.f_26=0;
return 1;
}
if(func_196()){
Local_98.f_26=0;
return 1;
}
if(func_32()){
Local_98.f_26=0;
return 1;
}
if(func_37()){
Local_98.f_26=0;
return 1;
}
if(func_31()){
if(PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1)){
Local_98.f_26=6;
return 1;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID())){
Local_98.f_26=6;
return 1;
}
if(func_155(PLAYER::PLAYER_PED_ID(), Local_98.f_153, 1) > 2f){
Local_98.f_26=7;
return 1;
}}
if(func_195()){
return 1;
}
if(func_16()){
if(func_34()){
return 1;
}
if(func_194("AIRDEF_WARN")){
if(func_22(&(Local_98.f_346), 2000, 0)){
return 1;
}}else{
func_21(&(Local_98.f_346));
}}
return 0;
}


bool func_194(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_195(){
struct<3> Var0;
struct<3> Var1;
Var0={
-90000f, -90000f, -1600f 
};
Var1={
90000f, 90000f, 2600f 
};
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
return 0;
}
if(!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_98.f_159), Var0, Var1, 0, 1, 0)){
return 1;
}
return 0;
}


bool func_196(){
return Global_97990;
}


bool func_197(){
return MISC::IS_BIT_SET(Global_1962996, 9);
}

int func_198(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(Global_1894573[iVar0 /*608*/].f_8){
return 1;
}}
return 0;
}

int func_199(){
struct<3> Var0;
if(Local_98.f_17==joaat("v_faceoffice")){
if(func_17(NETWORK::NET_TO_OBJ(Local_98.f_159))){
if(INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_98.f_159))==joaat("GtaMloRoom001")){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_98.f_159), 1) 
};
if(Var0.f_2 >=47f){
return 1;
}}}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(func_17(NETWORK::NET_TO_OBJ(Local_98.f_159))){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_98.f_159), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0)){
return 1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_98.f_159), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, 1, 0)){
return 1;
}}}
return 0;
}

int func_200(int iParam0){
if(iParam0 !=func_12() && func_19(iParam0, 1, 1)){
if(func_11(iParam0) && !func_201(iParam0)){
return 1;
}}
return 0;
}

int func_201(int iParam0){
if(iParam0 !=func_12() && func_19(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_202(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1){
if(ENTITY::IS_ENTITY_IN_WATER(iParam0)){
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >=0.7f){
return 1;
}}}}
return 0;
}


bool func_203(){
return MISC::IS_BIT_SET(Global_1962996, 15);
}


void func_204(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
int iVar6;
var uVar7;
struct<3> Var8;
int iVar9;
bool bVar10;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
Var0={
Local_98.f_150 
};
switch (Local_98.f_13){
case 0:
Var1={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
Var3={
(-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) 
};
Var4={
10f, 10f, 10f 
};
if(func_24()){
Var4={
Global_262145.f_25312, Global_262145.f_25312, Global_262145.f_25312 
};
}
Var5={
Var1 + Var3 * Var4 
};
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_98.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_98.f_159)), 0f, -0.1f, 0f) 
};
Local_98.f_167=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var5, 123, NETWORK::NET_TO_OBJ(Local_98.f_159), 7);
if(Local_98.f_167 !=0){
Local_98.f_13=1;
}
break;
case 1:
Local_98.f_244=SHAPETEST::GET_SHAPE_TEST_RESULT(Local_98.f_167, &iVar6, &Var8, &uVar7, &iVar9);
if(Local_98.f_244==2){
if(iVar6==0){
Local_98.f_14=1;
Var8={
0f, 0f, 0f 
};
if(MISC::IS_BIT_SET(Local_98.f_5, 11) && !func_24()){
MISC::CLEAR_BIT(&(Local_98.f_5), 11);
}
if(MISC::IS_BIT_SET(Local_98.f_5, 23)){
MISC::CLEAR_BIT(&(Local_98.f_5), 23);
}
func_211();
}
else{
Local_98.f_14=2;
if(ENTITY::DOES_ENTITY_EXIST(iVar9)){
if(ENTITY::IS_ENTITY_A_PED(iVar9)){
if(!ENTITY::IS_ENTITY_DEAD(iVar9, 0)){
if(PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))){
if(func_209(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)))){
bVar10=true;
}
}
else{
if(!MISC::IS_BIT_SET(Local_98.f_5, 23)){
MISC::SET_BIT(&(Local_98.f_5), 23);
if(MISC::IS_BIT_SET(Local_98.f_5, 11) && !func_24()){
MISC::CLEAR_BIT(&(Local_98.f_5), 11);
}}
if(!func_90(PLAYER::PLAYER_ID()) && !func_87(PLAYER::PLAYER_ID())){
if((func_208(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)) || func_207(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))) || func_206(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))){
func_86(Global_1837219);
func_205(&(Local_98.f_259), 0, 0);
}else{
func_211();
}}
}
if((((!MISC::IS_BIT_SET(Local_98.f_5, 11) && !bVar10) && func_17(Global_1962996.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1962996.f_23, iVar9, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)) && PLAYER::PLAYER_PED_ID() !=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))){
MISC::SET_BIT(&(Local_98.f_5), 11);
if(MISC::IS_BIT_SET(Local_98.f_5, 23)){
MISC::CLEAR_BIT(&(Local_98.f_5), 23);
}
}
}}else{
if(!func_24()){
if(MISC::IS_BIT_SET(Local_98.f_5, 11)){
MISC::CLEAR_BIT(&(Local_98.f_5), 11);
}
}
if(MISC::IS_BIT_SET(Local_98.f_5, 23)){
MISC::CLEAR_BIT(&(Local_98.f_5), 23);
}
func_211();
}}else{
func_211();
}
Local_98.f_167=0;
Local_98.f_13=0;
}}elseif(Local_98.f_244==0){
Local_98.f_13=0;
}
break;
}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


void func_205(var uParam0, bool bParam1, bool bParam2){
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

int func_206(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0)==-183807561){
return 1;
}}
return 0;
}

int func_207(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if((((((((((((PED::GET_PED_TYPE(iParam0)==7 || PED::GET_PED_TYPE(iParam0)==8) || PED::GET_PED_TYPE(iParam0)==9) || PED::GET_PED_TYPE(iParam0)==10) || PED::GET_PED_TYPE(iParam0)==11) || PED::GET_PED_TYPE(iParam0)==12) || PED::GET_PED_TYPE(iParam0)==13) || PED::GET_PED_TYPE(iParam0)==14) || PED::GET_PED_TYPE(iParam0)==15) || PED::GET_PED_TYPE(iParam0)==16) || PED::GET_PED_TYPE(iParam0)==17) || PED::GET_PED_TYPE(iParam0)==18) || PED::GET_PED_TYPE(iParam0)==19){
return 1;
}}
return 0;
}

int func_208(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if((((PED::GET_PED_TYPE(iParam0)==6 || PED::GET_PED_TYPE(iParam0)==29) || PED::GET_PED_TYPE(iParam0)==27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0)==joaat("army")) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0)==joaat("COP")){
return 1;
}}
return 0;
}

int func_209(int iParam0, int iParam1){
int iVar0;
iVar0=func_210(iParam0);
if(!iVar0==func_12()){
if(iVar0==func_210(iParam1)){
return 1;
}}
return 0;
}

int func_210(int iParam0){
if(iParam0 !=func_12()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_12();
}


void func_211(){
if(func_25(&(Local_98.f_259))){
if(func_22(&(Local_98.f_259), 60000, 0)){
func_21(&(Local_98.f_259));
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <=0){
func_86(Global_1837208);
}}}}


void func_212(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
int iVar8;
var uVar9;
struct<3> Var10;
int iVar11;
int iVar12;
int iVar13;
if(((func_35() || func_24()) || func_38()) || func_16()){
if(!MISC::IS_BIT_SET(Local_98.f_5, 29)){
return;
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_98.f_159))){
return;
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
switch (Local_98.f_11){
case 0:
if((func_24() || func_38()) || func_35()){
fVar5=0.3f;
}elseif(func_16()){
fVar5=0.65f;
}else{
fVar5=(func_215(Local_98.f_240) * 1.5f);
}
if(func_83()){
Var6={
Local_98.f_150 
};
Var1={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
Var3={
(-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) 
};
Var4={
0.9f, 0.9f, 0.9f 
};
if(func_16()){
Var4={
1.9f, 1.9f, 1.9f 
};
}
Var7={
Var1 + Var3 * Var4 
};
}else{
Var6={
Local_98.f_150 
};
Var7={
Local_98.f_150 
};
}
Local_98.f_166=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var6, Var7, fVar5, 511, NETWORK::NET_TO_OBJ(Local_98.f_159), 4);
if(Local_98.f_166 !=0){
Local_98.f_11=1;
}
break;
case 1:
iVar12=SHAPETEST::GET_SHAPE_TEST_RESULT(Local_98.f_166, &iVar8, &Var10, &uVar9, &iVar11);
if(iVar12==2){
if(iVar8==0){
Local_98.f_12=1;
Var10={
0f, 0f, 0f 
};
}
else{
if(ENTITY::DOES_ENTITY_EXIST(iVar11)){
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar11)){
if(!ENTITY::IS_ENTITY_DEAD(iVar11, 0) && ENTITY::GET_ENTITY_MODEL(iVar11) !=Local_98.f_240){
if(ENTITY::GET_ENTITY_SPEED(iVar11) > 0.5f || func_213(ENTITY::GET_ENTITY_MODEL(iVar11))){
if(!MISC::IS_BIT_SET(Local_98.f_5, 9)){
MISC::SET_BIT(&(Local_98.f_5), 9);
}
}
}}elseif(ENTITY::IS_ENTITY_A_PED(iVar11)){
if(!ENTITY::IS_ENTITY_DEAD(iVar11, 0)){
if(!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar11))){
if(Local_98.f_28==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar0==0){
iVar13=85;
}elseif(iVar0==1){
iVar13=90;
}else{
iVar13=79;
}
Local_98.f_28=EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar13, Local_98.f_150, 5000f);
func_205(&(Local_98.f_265), 0, 0);
}
}
}}}
Local_98.f_12=2;
PAD::SET_CONTROL_SHAKE(0, 300, 50);
Local_98.f_166=0;
Local_98.f_11=0;
}}elseif(iVar12==0){
Local_98.f_11=0;
}
break;
}
if(Local_98.f_28 !=0){
if(func_25(&(Local_98.f_265))){
if(func_22(&(Local_98.f_265), 5000, 0)){
EVENT::REMOVE_SHOCKING_EVENT(Local_98.f_28);
func_21(&(Local_98.f_265));
Local_98.f_28=0;
}}}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}

int func_213(int iParam0){
switch (iParam0){
case joaat("chernobog"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("skylift"):
case joaat("taco"):
return 1;
break;
}
if(func_214(iParam0, 1)){
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)){
return 1;
}
return 0;
}

int func_214(int iParam0, int iParam1){
switch (iParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return 1;
break;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("sabregt2"):
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14736){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14737){
return 0;
}else{
return 1;
}
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return 1;
break;
}
return 0;
}


float func_215(int iParam0){
struct<3> Var0;
struct<3> Var1;
func_216(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_2 - Var1.f_2));
}


void func_216(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_219(iParam0);
if(iVar0 !=0){
func_217(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(vmag(*uParam1) <=0.01f || vmag(*uParam2) <=0.01f){
if(iParam0==joaat("kosatka")){
if(fParam4 < 20.7f){
fParam4=20.7f;
}
if(fParam3 < 137.2f){
fParam3=137.2f;
}
if(fParam5 < 21.1f){
fParam5=21.1f;
}}
*uParam1=(0f - (fParam4 * 0.5f));
*uParam2=(0f + (fParam4 * 0.5f));
uParam1->f_1=(0f - (fParam3 * 0.5f));
uParam2->f_1=(0f + (fParam3 * 0.5f));
uParam1->f_2=(0f - (fParam5 * 0.5f));
uParam2->f_2=(0f + (fParam5 * 0.5f));
}}


void func_217(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_218(iParam0, &Global_1577994);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1577994[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
}
if(vmag(Global_1577998[iVar0 /*3*/]) <=0.01f || vmag(Global_1578005[iVar0 /*3*/]) <=0.01f){
Global_1577998[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578005[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1577998[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578005[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1577998[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578005[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578012[iVar0]=(Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
Global_1578015[iVar0]=(Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
Global_1578018[iVar0]=(Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
if(Global_1578012[iVar0] > Global_1578021){
Global_1578021=Global_1578012[iVar0];
}
if(Global_1578018[iVar0] > Global_1578022){
Global_1578022=Global_1578018[iVar0];
}
iVar0++;
}
Global_1578023=(Global_1578021 * -0.5f);
Global_1578026=(Global_1578021 * 0.5f);
Global_1578023.f_1=((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
Global_1578026.f_1=(0.5f * Global_1578015[0]);
Global_1578023.f_2=(Global_1578018[0] * -0.5f);
Global_1578026.f_2=(Global_1578018[0] * 0.5f);
*uParam1={
Global_1578023 
};
*uParam2={
Global_1578026 
};
}


void func_218(int iParam0, var uParam1){
switch (iParam0){
case 1:
(*uParam1)[0]=joaat("hauler2");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
(*uParam1)[0]=joaat("phantom3");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
(*uParam1)[0]=joaat("nightshark");
(*uParam1)[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}}

int func_219(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_220(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_220(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_221(){
int iVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(func_17(NETWORK::NET_TO_OBJ(Local_98.f_159))){
iVar0=func_224(NETWORK::NET_TO_OBJ(Local_98.f_159));
if(iVar0 !=-1){
if(!func_223(&(Global_1835504.f_393), iVar0) && !func_223(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_535), iVar0)){
func_222(1);
}}}}}


void func_222(bool bParam0){
if(bParam0){
if(func_75()){
if(!MISC::IS_BIT_SET(Global_1962996, 9)){
MISC::SET_BIT(&Global_1962996, 9);
}}}elseif(MISC::IS_BIT_SET(Global_1962996, 9)){
MISC::CLEAR_BIT(&Global_1962996, 9);
}}


bool func_223(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_224(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=func_228(iParam0);
if(iVar0 !=-1){
return iVar0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
if(iVar1 !=0){
iVar2=0;
while (iVar2 < 43){
iVar3=iVar2;
func_225(iVar3);
if(Global_1955050[iVar2]==iVar1){
return iVar3;
}
iVar2++;
}}}
return -1;
}


void func_225(int iParam0){
int iVar0;
iVar0=iParam0;
if(Global_1955050[iVar0]==0){
Global_1955050[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_227(iParam0), func_226(iParam0));
}}


char* func_226(int iParam0){
switch (iParam0){
case 1:
return "bkr_biker_dlc_int_03";
case 0:
return "hei_heist_police_dlc";
case 2:
return "v_genbank";
case 3:
return "v_genbank";
case 4:
return "v_genbank";
case 5:
return "v_genbank";
case 6:
return "v_bank4";
case 7:
return "v_genbank";
case 8:
return "hei_generic_bank_dlc";
case 9:
return "v_rockclub";
case 10:
return "v_factory1";
case 11:
return "v_factory2";
case 12:
return "v_factory3";
case 13:
return "v_factory4";
case 14:
return "v_farmhouse";
case 15:
return "gr_gta_milo_bridge";
case 16:
return "v_recycle";
case 17:
return "v_lab";
case 18:
return "v_garagem";
case 19:
return "v_studio_lo";
case 20:
return "v_apart_midspaz";
case 21:
return "v_sheriff";
case 22:
return "v_sheriff2";
case 23:
return "dt1_03_carpark";
case 24:
return "v_carshowroom";
case 27:
return "v_faceoffice";
case 25:
return "v_abattoir";
case 26:
return "V_JEWEL2";
case 28:
return "smboat";
case 29:
return "vb_33_garage";
case 30:
return "v_chopshop";
case 31:
return "v_methlab";
case 32:
return "v_office_lobby";
case 33:
return "v_lab";
case 34:
return "v_foundry";
case 35:
return "v_refit";
case 36:
return "hei_int_mph_carrierhang3";
case 37:
return "hei_int_mph_carrierhang2";
case 38:
return "hei_int_mph_carrierhang1";
case 39:
return "hei_int_mph_carrierupper";
case 40:
return "hei_int_mph_carriercontrol1";
case 41:
return "hei_int_mph_carriercontrol2";
case 42:
return "ch3_01_trlr_int";
default:
}
return "";
}


Vector3 func__227(int iParam0){
switch (iParam0){
case 1:
return 983.2747f, -99.3188f, 73.8454f;
case 0:
return 443.2281f, -984.0744f, 29.6896f;
case 2:
return -1216.762f, -333.0008f, 36.8508f;
case 3:
return 145.4168f, -1039.277f, 28.4379f;
case 4:
return 309.7465f, -277.6442f, 53.2346f;
case 5:
return -355.4359f, -48.5326f, 48.1064f;
case 6:
return -109.4503f, 6467.768f, 30.4388f;
case 7:
return 1179.745f, 2706.985f, 37.1578f;
case 8:
return -2962.591f, 478.238f, 14.7669f;
case 9:
return -556.5089f, 286.3181f, 81.1763f;
case 10:
return -76.6618f, 6222.191f, 32.2412f;
case 11:
return -100.7106f, 6205.7f, 30.0499f;
case 12:
return -125.6972f, 6172.923f, 30.0499f;
case 13:
return -162.4785f, 6155.384f, 30.0499f;
case 14:
return 2449.785f, 4983.825f, 45.8106f;
case 15:
return -1426.362f, 6754.506f, 11.7821f;
case 16:
return -583.2097f, -1599.302f, 26.3052f;
case 17:
return 3522.845f, 3707.965f, 19.9918f;
case 18:
return 630f, 4750f, -60f;
case 19:
return 600f, 4750f, -60f;
case 20:
return 575f, 4750f, -60f;
case 21:
return 1853.625f, 3687.826f, 33.2671f;
case 22:
return -447.5651f, 6013.988f, 30.7164f;
case 23:
return -28.1023f, -688.8687f, 34.4437f;
case 24:
return -40.2938f, -1097.321f, 25.4223f;
case 27:
return -1074.853f, -250.3996f, 36.7388f;
case 25:
return 982.233f, -2160.382f, 28.4761f;
case 26:
return -630.4205f, -236.7843f, 37.057f;
case 28:
return -2032f, -1035f, 5f;
case 29:
return -1078.561f, -1678.615f, 3.5752f;
case 30:
return 479.88f, -1318.57f, 28.2f;
case 31:
return 1392.512f, 3603.185f, 38.5f;
case 32:
return 105.4557f, -745.4835f, 44.7548f;
case 33:
return 3522.845f, 3707.965f, 19.9918f;
case 34:
return 1087.195f, -1988.445f, 28.649f;
case 35:
return -583.1606f, -282.3967f, 35.394f;
case 36:
return 3053.565f, -4653.67f, 5.0773f;
case 37:
return 3058.002f, -4700.8f, 5.0773f;
case 38:
return 3080.619f, -4772.69f, 5.0773f;
case 39:
return 3088.469f, -4708.33f, 20.567f;
case 40:
return 3085.222f, -4690.66f, 26.2522f;
case 41:
return 3092.459f, -4711.389f, 26.2657f;
case 42:
return 2329.242f, 2571.494f, 45.6772f;
default:
}
return 0f, 0f, 0f;
}

int func_228(int iParam0){
if(func_235(iParam0)){
return 15;
}
if(func_233(iParam0)){
return 28;
}
if(func_231(iParam0)){
return 36;
}
if(func_230(iParam0)){
return 23;
}
if(func_229(iParam0)){
return 33;
}
return -1;
}

int func_229(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0)){
return 1;
}}
return 0;
}

int func_230(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <=80f){
if((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0)){
return 1;
}}}
return 0;
}


bool func_231(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_232());
}

int func_232(){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(vdist2(func_6(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f)){
return 1;
}}}
return 0;
}


bool func_233(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_234());
}

int func_234(){
struct<3> Var0;
if(!CAM::IS_SCREEN_FADED_OUT()){
Var0={
-2073.541f, -1021.104f, 14.99213f 
};
if(vdist2(func_6(PLAYER::PLAYER_ID()), Var0) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(Var0, 60f)){
return 1;
}}}
return 0;
}


bool func_235(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_236());
}

int func_236(){
struct<3> Var0;
if(!CAM::IS_SCREEN_FADED_OUT()){
Var0={
Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) 
};
if(vdist2(func_6(PLAYER::PLAYER_ID()), Var0) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(Var0, 50f)){
return 1;
}}}
return 0;
}


void func_237(int iParam0){
var uVar0;
int iVar1;
if(func_35()){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_ACTIVE(Local_98.f_169)){
if(CAM::IS_CAM_RENDERING(Local_98.f_169) || iParam0){
if(!func_77()){
func_71(0);
}
func_248(1);
if((!func_247() || MISC::IS_BIT_SET(Local_98.f_5, 1)) || func_193()){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}else{
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
func_80();
func_245(1);
uVar0=INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_98.f_159));
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
Global_1962996.f_24=uVar0;
if(!MISC::IS_BIT_SET(Local_98.f_5, 8)){
Local_98.f_123=func_244(INTERIOR::GET_INTERIOR_HEADING(uVar0));
INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(uVar0, &(Local_98.f_147), &(Local_98.f_17));
MISC::SET_BIT(&(Local_98.f_5), 8);
}
iVar1=0;
if(func_243(Local_98.f_150.f_2, 43f, 48.7f)){
iVar1=1;
}
if(Global_1962996.f_9==-1f){
HUD::SET_RADAR_ZOOM_PRECISE(1f);
}
else{
HUD::SET_RADAR_ZOOM_PRECISE(Global_1962996.f_9);
}
if((!func_164(PLAYER::PLAYER_ID()) && !func_240(PLAYER::PLAYER_ID())) && !func_16()){
if(!func_239()){
func_238(1);
}
}
if(!func_16()){
HUD::SET_BIGMAP_ACTIVE(0, 0);
}
HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_98.f_17, Local_98.f_147, Local_98.f_147.f_1, floor(Local_98.f_123), iVar1);
}else{
Local_98.f_17=-1;
if(Global_1962996.f_9==-1f){
HUD::SET_RADAR_ZOOM_PRECISE(0f);
}
else{
HUD::SET_RADAR_ZOOM_PRECISE(Global_1962996.f_9);
}
if(!func_239() && !func_16()){
func_238(1);
}
if(!func_16()){
HUD::SET_BIGMAP_ACTIVE(0, 0);
}
Global_1962996.f_24=-1;
if(MISC::IS_BIT_SET(Local_98.f_5, 8)){
MISC::CLEAR_BIT(&(Local_98.f_5), 8);
}}}}}}}


void func_238(int iParam0){
Global_2696954=iParam0;
}


bool func_239(){
return Global_2696954;
}

int func_240(int iParam0){
if(func_242(iParam0)){
return 1;
}
if(func_241(iParam0)){
return 1;
}
return 0;
}

int func_241(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_91(iParam0, 9);
}
return 0;
}

int func_242(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_243(float fParam0, float fParam1, float fParam2){
if(fParam0 >=fParam1 && fParam0 < fParam2){
return 1;
}
return 0;
}


float func_244(float fParam0){
return (fParam0 * 57.29578f);
}


void func_245(bool bParam0){
int iVar0;
if(bParam0){
Global_100733.f_8=1;
}else{
Global_100733.f_8=0;
}
iVar0=0;
while (iVar0 < 60){
func_246(iVar0);
iVar0++;
}}


void func_246(int iParam0){
Global_100733.f_202[iParam0]=1;
Global_100733.f_201=1;
}


bool func_247(){
return MISC::IS_BIT_SET(Global_1962996, 4);
}


void func_248(int iParam0){
if(Global_2793046.f_4653 !=iParam0){
Global_2793046.f_4653=iParam0;
}}


void func_249(){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
bool bVar7;
bool bVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
struct<3> Var14;
struct<3> Var15;
float fVar16;
struct<3> Var17;
float fVar18;
float fVar19;
float fVar20;
float fVar21;
struct<3> Var22;
struct<3> Var23;
float fVar24;
float fVar25;
var uVar26;
var uVar27;
struct<3> Var28;
if((MISC::IS_BIT_SET(Local_98.f_5, 1) || func_193()) || func_83()){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
fVar0=40f;
fVar1=19f;
fVar2=14f;
iVar3=1;
fVar4=ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_98.f_159));
fVar5=ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_98.f_159));
if(func_30()){
fVar1=10f;
}
fVar6=(30f * timestep());
func_254();
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
func_253(&(Local_98[0]), &(Local_98[1]), &(Local_98[2]), &(Local_98[3]), 0, 0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar3=5;
Local_98[2]=(Local_98[2] * iVar3);
Local_98[3]=(Local_98[3] * iVar3);
}
if(PAD::IS_LOOK_INVERTED()){
Local_98[3]=(Local_98[3] * -1);
}
if(func_22(&(Local_98.f_277), 750, 0)){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
bVar7=PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
}else{
bVar7=(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241)){
bVar8=true;
}}
if(bVar7){
func_205(&(Local_98.f_277), 0, 0);
}}
if(bVar7 && !func_252()){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
Local_98.f_25++;
}elseif(bVar8){
Local_98.f_25=(Local_98.f_25 - 1);
}else{
Local_98.f_25++;
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_39)){
Local_98.f_39=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_39, "HUD_Zoom_Change", Local_98.f_157, 1);
}
if(Local_98.f_25 > 2){
Local_98.f_25=0;
}elseif(Local_98.f_25 < 0){
Local_98.f_25=2;
}}elseif(AUDIO::HAS_SOUND_FINISHED(Local_98.f_39)){
AUDIO::STOP_SOUND(Local_98.f_39);
AUDIO::RELEASE_SOUND_ID(Local_98.f_39);
Local_98.f_39=-1;
}
Local_98.f_128=(Local_98.f_128 + (((Local_98.f_126 - Local_98.f_128) * 0.06f) * fVar6));
CAM::SET_CAM_FOV(Local_98.f_169, Local_98.f_128);
if(Local_98[2] !=0 || Local_98[3] !=0){
if(Local_98[2] !=0){
fVar9=(1f / (127f / IntToFloat(Local_98[2])));
}else{
fVar9=0f;
}
if(Local_98[3] !=0){
fVar10=(1f / (127f / IntToFloat(Local_98[3])));
}else{
fVar10=0f;
}
Var14={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
fVar11=(((fVar10 * 0.05f) * fVar6) * Local_98.f_130);
fVar12=-(((fVar9 * 0.05f) * fVar6) * Local_98.f_130);
if((fVar4 !=0f || Local_98[0] !=0) && !func_77()){
if(Local_98[0] !=0){
fVar16=(1f / (127f / IntToFloat(Local_98[0])));
fVar13=-(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
}else{
if(fVar4 > 0.1f || fVar4 < -0.1f){
if(fVar4 > 0f){
fVar16=-1f;
}else{
fVar16=1f;
}
}
if(Var14.f_1 !=0f){
if(Var14.f_1 < 1.5f && Var14.f_1 > 0f){
fVar16=0.001f;
}elseif(Var14.f_1 > -1.5f && Var14.f_1 < 0f){
fVar16=-0.001f;
}
}
else{
fVar16=0f;
}
fVar13=-(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
}}else{
fVar13=0f;
}
Var15={
Vector(fVar12, fVar13, fVar11) + Var14 
};
if(fVar4 !=0f){
if(Local_98[0]==0){
if(Var15.f_1 > fVar1){
Var15.f_1=fVar1;
}
elseif(Var15.f_1 < -fVar1){
Var15.f_1=-fVar1;
}}elseif(Var15.f_1 > fVar1){
Var15.f_1=fVar1;
}elseif(Var15.f_1 < -fVar1){
Var15.f_1=-fVar1;
}}
if(Var15.f_0 > fVar2){
Var15.f_0=fVar2;
}elseif(Var15.f_0 < -fVar2){
Var15.f_0=-fVar2;
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 12)){
MISC::SET_BIT(&(Local_98.f_5), 12);
}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(Var15.f_2, Var15.f_1, Var15.f_0), 2, 1);
}elseif(((Local_98[0] !=0 || Local_98[1] !=0) && !func_252()) && !func_77()){
Var17={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
if(func_252()){
if(func_251()){
fVar19=-1f;
Local_98.f_129=fVar19;
}}else{
if(Local_98[0] !=0){
fVar18=(1f / (127f / IntToFloat(Local_98[0])));
Local_98.f_129=fVar18;
}else{
fVar18=0f;
}
if(Local_98[1] !=0){
fVar19=(1f / (127f / IntToFloat(Local_98[1])));
Local_98.f_129=fVar18;
}else{
fVar19=0f;
}}
fVar20=-(((fVar19 * 0.05f) * fVar6) * fVar0);
fVar21=-(((fVar18 * 0.05f) * fVar6) * fVar0);
if(fVar4 !=0f){
if((Local_98[0]==0 && !func_77()) || func_252()){
if(fVar4 > 1f || fVar4 < -1f){
if(fVar4 > 0f){
fVar18=-1f;
}else{
fVar18=1f;
}
}
if(Var17.f_1 < 1.5f && Var17.f_1 > 0f){
fVar18=0.001f;
}
elseif(Var17.f_1 > -1.5f && Var17.f_1 < 0f){
fVar18=-0.001f;
}
fVar21=-(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
}}
Var22={
Vector(0f, fVar21, fVar20) + Var17 
};
if(Var22.f_1 > fVar1){
Var22.f_1=fVar1;
}elseif(Var22.f_1 < -fVar1){
Var22.f_1=-fVar1;
}
if(Var22.f_0 > fVar2){
Var22.f_0=fVar2;
}elseif(Var22.f_0 < -fVar2){
Var22.f_0=-fVar2;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 12)){
MISC::CLEAR_BIT(&(Local_98.f_5), 12);
}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var22.f_1, Var22.f_0), 2, 1);
}elseif(!func_251() && !func_252()){
Local_98.f_129=0f;
Var23={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
if(fVar4 !=0f || fVar5 !=0f){
if(Var23.f_1 !=0f){
if(Var23.f_1 < 0f){
fVar24=-1f;
}
else{
fVar24=1f;
}}else{
fVar24=0f;
}
if(fVar5 !=0f){
if(Var23.f_0 < 0f){
fVar25=-1f;
}
else{
fVar25=1f;
}}else{
fVar25=0f;
}
if(Var23.f_1 !=0f){
if(Var23.f_1 < 1.5f && Var23.f_1 > 0f){
fVar24=0.001f;
}
elseif(Var23.f_1 > -1.5f && Var23.f_1 < 0f){
fVar24=-0.001f;
}}else{
fVar24=0f;
}
if(Var23.f_0 !=0f){
if(Var23.f_0 < 1.5f && Var23.f_0 > 0f){
fVar25=0.001f;
}
elseif(Var23.f_0 > -1.5f && Var23.f_0 < 0f){
fVar25=-0.001f;
}}else{
fVar25=0f;
}
uVar26=func_250(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
uVar27=func_250(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
Var28={
Vector(0f, uVar27, uVar26) + Var23 
};
if(MISC::IS_BIT_SET(Local_98.f_5, 12)){
Var28.f_0=Var23.f_0;
}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(Var23.f_2, Var28.f_1, Var28.f_0), 2, 1);
}}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


float func_250(float fParam0){
while (fParam0 > 180f){
fParam0=(fParam0 - 360f);
}
while (fParam0 < -180f){
fParam0=(fParam0 + 360f);
}
return fParam0;
}


bool func_251(){
return MISC::IS_BIT_SET(Local_98.f_5, 22);
}


bool func_252(){
return MISC::IS_BIT_SET(Local_98.f_5, 21);
}


void func_253(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
*uParam0=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
*uParam2=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
if(bParam4){
if(!PAD::IS_CONTROL_ENABLED(2, 218)){
*uParam0=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 219)){
*uParam1=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 220)){
*uParam2=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 221)){
*uParam3=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(bParam5){
if(PAD::IS_LOOK_INVERTED()){
*uParam3=(*uParam3 * -1);
}
if(PAD::IS_MOUSE_LOOK_INVERTED()){
*uParam3=(*uParam3 * -1);
}}}}


void func_254(){
if(func_138()){
switch (Local_98.f_25){
case 0:
Local_98.f_127=90f;
Local_98.f_126=90f;
break;
case 1:
Local_98.f_127=75f;
Local_98.f_126=75f;
break;
case 2:
Local_98.f_127=45f;
Local_98.f_126=45f;
break;
}}else{
switch (Local_98.f_25){
case 0:
Local_98.f_127=90f;
Local_98.f_126=90f;
break;
case 1:
Local_98.f_127=80f;
Local_98.f_126=80f;
break;
case 2:
Local_98.f_127=70f;
Local_98.f_126=70f;
break;
}}}


void func_255(){
int iVar0;
int iVar1;
if(func_70(PLAYER::PLAYER_ID(), 0)){
iVar0=func_180(0);
Local_98.f_141={
func_258(&Local_98) 
};
if(!ENTITY::DOES_ENTITY_EXIST(Local_98.f_162)){
if(!func_257(Local_98.f_141)){
if(func_179(iVar0)){
Local_98.f_162=OBJECT::CREATE_OBJECT(iVar0, Local_98.f_141, 0, 0, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_98.f_162, Local_98.f_141, 0, 0, 1);
ENTITY::SET_ENTITY_COLLISION(Local_98.f_162, true, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_98.f_162, 1, 1);
ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_98.f_162, 1);
ENTITY::SET_ENTITY_HEADING(Local_98.f_162, func_256());
ENTITY::FREEZE_ENTITY_POSITION(Local_98.f_162, true);
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_162, false, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}else{
iVar1=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_98.f_141, 2f, iVar0, 0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 !=Local_98.f_162){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)){
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
ENTITY::SET_ENTITY_VISIBLE(iVar1, true, 0);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
}}}}else{
Local_98.f_141={
func_258(&Local_98) 
};
}}


float func_256(){
if(Global_1962996.f_7 !=0f){
return Global_1962996.f_7;
}
return 0f;
}

int func_257(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__258(var uParam0){
if(!func_257(Global_1962996.f_10)){
return Global_1962996.f_10;
}else{
return uParam0->f_141;
}
return 0f, 0f, 0f;
}


void func_259(){
if(Local_98.f_33 !=-1){
AUDIO::STOP_SOUND(Local_98.f_33);
AUDIO::RELEASE_SOUND_ID(Local_98.f_33);
Local_98.f_33=-1;
}}

int func_260(bool bParam0){
if(HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN()){
return 1;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}
if(func_172()){
return 1;
}
if(func_265(PLAYER::PLAYER_ID()) && !func_264()){
return 1;
}
if(func_164(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_2791785, 0)){
return 1;
}}
if(Global_1935176 || Global_1574964){
func_263(1);
return 1;
}
if(((func_261(0) || func_169(1)) || func_168()) && !bParam0){
func_71(0);
func_80();
func_99();
return 1;
}
return 0;
}

int func_261(bool bParam0){
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_262(PLAYER::PLAYER_PED_ID())){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
return 0;
}}}}
if(Global_23131.f_130){
return 0;
}
if(PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19))){
return 1;
}
if(MISC::IS_PC_VERSION()){
if(((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169)){
return 1;
}
if(!bParam0){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169)){
return 1;
}}}
return 0;
}

int func_262(int iParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}


void func_263(bool bParam0){
if(bParam0){
if(!func_37()){
MISC::SET_BIT(&Global_1962996, 20);
}}elseif(func_37()){
MISC::CLEAR_BIT(&Global_1962996, 20);
}}


bool func_264(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 0));
}

int func_265(int iParam0){
if(func_116(iParam0, 0)){
return 1;
}
if(func_266()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_266(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


void func_267(){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
float fVar4;
float fVar5;
int iVar6;
float fVar7;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
struct<3> Var15;
struct<3> Var16;
float fVar17;
struct<3> Var18;
float fVar19;
float fVar20;
float fVar21;
float fVar22;
struct<3> Var23;
struct<3> Var24;
float fVar25;
float fVar26;
var uVar27;
var uVar28;
struct<3> Var29;
var uVar30;
if(!func_83() || func_193()){
return;
}
if(func_35() && func_260(0)){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
fVar0=40f;
fVar1=30f;
fVar2=30f;
iVar3=1;
fVar4=ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_98.f_159));
fVar5=ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_98.f_159));
iVar6=1;
if(func_16()){
if(func_260(1)){
iVar6=0;
}}elseif(func_260(0)){
iVar6=0;
}
if(func_16()){
if(!func_130()){
iVar6=0;
}
fVar2=80f;
}
fVar7=(30f * MISC::GET_FRAME_TIME());
func_254();
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
func_253(&(Local_98[0]), &(Local_98[1]), &(Local_98[2]), &(Local_98[3]), 0, 0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar3=2;
if(func_16()){
iVar3=3;
}
Local_98[2]=(Local_98[2] * iVar3);
Local_98[3]=(Local_98[3] * iVar3);
}
if(PAD::IS_LOOK_INVERTED()){
Local_98[3]=(Local_98[3] * -1);
Local_98[1]=(Local_98[1] * -1);
}
if(Local_98[3] !=0 && Local_98[2] !=0){
iVar8=func_269(MISC::ABSI(Local_98[3]), MISC::ABSI(Local_98[2]));
Local_98.f_129=(1f / (127f / IntToFloat(iVar8)));
}elseif(Local_98[1] !=0 && Local_98[0] !=0){
iVar9=func_269(MISC::ABSI(Local_98[1]), MISC::ABSI(Local_98[0]));
Local_98.f_129=(1f / (127f / IntToFloat(iVar9)));
}elseif(Local_98[3] !=0){
Local_98.f_129=(1f / (127f / IntToFloat(Local_98[3])));
}elseif(Local_98[2] !=0){
Local_98.f_129=(1f / (127f / IntToFloat(Local_98[2])));
}elseif(Local_98[1] !=0){
Local_98.f_129=(1f / (127f / IntToFloat(Local_98[1])));
}elseif(Local_98[0] !=0){
Local_98.f_129=(1f / (127f / IntToFloat(Local_98[0])));
}else{
Local_98.f_129=0f;
}
if(iVar6 && ((Local_98[2] !=0 || Local_98[3] !=0) || (Local_98[0] !=0 || Local_98[1] !=0))){
if(Local_98[2] !=0){
fVar10=(1f / (127f / IntToFloat(Local_98[2])));
}elseif(Local_98[0] !=0){
fVar10=(1f / (127f / IntToFloat(Local_98[0])));
}else{
fVar10=0f;
}
if(Local_98[3] !=0){
fVar11=(1f / (127f / IntToFloat(Local_98[3])));
}elseif(Local_98[1] !=0){
fVar11=(1f / (127f / IntToFloat(Local_98[1])));
}else{
fVar11=0f;
}
Var15={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
fVar12=(((fVar11 * 0.05f) * fVar7) * Local_98.f_130);
fVar13=-(((fVar10 * 0.05f) * fVar7) * Local_98.f_130);
if((fVar4 !=0f || Local_98[2] !=0) || Local_98[0] !=0){
if(Local_98[2] !=0){
fVar17=(1f / (127f / IntToFloat(Local_98[2])));
fVar14=-(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
}elseif(Local_98[0] !=0){
fVar17=(1f / (127f / IntToFloat(Local_98[0])));
fVar14=-(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
}else{
if(fVar4 > 0.1f || fVar4 < -0.1f){
if(fVar4 > 0f){
fVar17=-1f;
}else{
fVar17=1f;
}
}
if(Var15.f_1 !=0f){
if(Var15.f_1 < 2f && Var15.f_1 > 0f){
fVar17=0.0001f;
}elseif(Var15.f_1 > -2f && Var15.f_1 < 0f){
fVar17=-0.0001f;
}
}
else{
fVar17=0f;
}
fVar14=-(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
}}else{
fVar14=0f;
}
Var16={
Vector(fVar13, fVar14, fVar12) + Var15 
};
if(fVar4 !=0f){
if(Local_98[2]==0 && Local_98[0]==0){
if(Var16.f_1 > fVar1){
Var16.f_1=fVar1;
}
elseif(Var16.f_1 < -fVar1){
Var16.f_1=-fVar1;
}}elseif(Var16.f_1 > fVar1){
Var16.f_1=fVar1;
}elseif(Var16.f_1 < -fVar1){
Var16.f_1=-fVar1;
}}
if(Var16.f_0 > fVar2){
Var16.f_0=fVar2;
}elseif(Var16.f_0 < -fVar2){
Var16.f_0=-fVar2;
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 12)){
MISC::SET_BIT(&(Local_98.f_5), 12);
}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.f_0), 2, 1);
}elseif(iVar6 && (((Local_98[2] !=0 || Local_98[3] !=0) || Local_98[0] !=0) || Local_98[1] !=0)){
Var18={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
if(func_252()){
if(func_251()){
fVar20=-1f;
}}else{
if(Local_98[2] !=0){
fVar19=(1f / (127f / IntToFloat(Local_98[2])));
}elseif(Local_98[0] !=0){
fVar19=(1f / (127f / IntToFloat(Local_98[0])));
}else{
fVar19=0f;
}
if(Local_98[3] !=0){
fVar20=(1f / (127f / IntToFloat(Local_98[3])));
}elseif(Local_98[1] !=0){
fVar20=(1f / (127f / IntToFloat(Local_98[1])));
}else{
fVar20=0f;
}}
fVar21=-(((fVar20 * 0.05f) * fVar7) * fVar0);
fVar22=-(((fVar19 * 0.05f) * fVar7) * fVar0);
if(fVar4 !=0f){
if(Local_98[2]==0 && Local_98[0]==0){
if(fVar4 > 1f || fVar4 < -1f){
if(fVar4 > 0f){
fVar19=-1f;
}else{
fVar19=1f;
}
}
if(Var18.f_1 < 2f && Var18.f_1 > 0f){
fVar19=0.0001f;
}
elseif(Var18.f_1 > -2f && Var18.f_1 < 0f){
fVar19=-0.0001f;
}
fVar22=-(((fVar19 * 0.05f) * fVar7) * (fVar0 - 25f));
}}
Var23={
Vector(0f, fVar22, fVar21) + Var18 
};
if(Var23.f_1 > fVar1){
Var23.f_1=fVar1;
}elseif(Var23.f_1 < -fVar1){
Var23.f_1=-fVar1;
}
if(Var23.f_0 > fVar2){
Var23.f_0=fVar2;
}elseif(Var23.f_0 < -fVar2){
Var23.f_0=-fVar2;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 12)){
MISC::CLEAR_BIT(&(Local_98.f_5), 12);
}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var23.f_1, Var23.f_0), 2, 1);
}else{
Var24={
ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), 2) 
};
if(fVar4 !=0f || fVar5 !=0f){
if(Var24.f_1 !=0f){
if(Var24.f_1 < 0f){
fVar25=-1f;
}
else{
fVar25=1f;
}}else{
fVar25=0f;
}
if(fVar5 !=0f){
if(Var24.f_0 < 0f){
fVar26=-1f;
}
else{
fVar26=1f;
}}else{
fVar26=0f;
}
if(Var24.f_1 !=0f){
if(Var24.f_1 < 2f && Var24.f_1 > 0f){
fVar25=0.0001f;
}
elseif(Var24.f_1 > -2f && Var24.f_1 < 0f){
fVar25=-0.0001f;
}}else{
fVar25=0f;
}
if(Var24.f_0 !=0f){
if(Var24.f_0 < 2f && Var24.f_0 > 0f){
fVar26=0.0001f;
}
elseif(Var24.f_0 > -2f && Var24.f_0 < 0f){
fVar26=-0.0001f;
}}else{
fVar26=0f;
}
uVar27=func_250(-(((fVar26 * 0.05f) * fVar7) * (fVar0 - 25f)));
uVar28=func_250(-(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f)));
Var29={
Vector(0f, uVar28, uVar27) + Var24 
};
if(MISC::IS_BIT_SET(Local_98.f_5, 12)){
Var29.f_0=Var24.f_0;
}
uVar30=Var24.f_2;
if(func_16()){
if(!func_130()){
uVar30=Local_98.f_116;
Var29.f_1=0f;
}}
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), Vector(0f, 0f, 0f) + Vector(uVar30, Var29.f_1, Var29.f_0), 2, 1);
if(func_16()){
if(MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f){
func_268(1);
}}}elseif(func_16()){
func_268(1);
}}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


void func_268(bool bParam0){
if(!bParam0){
if(MISC::IS_BIT_SET(Local_98.f_6, 6)){
MISC::CLEAR_BIT(&(Local_98.f_6), 6);
}}elseif(!MISC::IS_BIT_SET(Local_98.f_6, 6)){
MISC::SET_BIT(&(Local_98.f_6), 6);
}}

int func_269(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam0;
}
return iParam1;
}


void func_270(){
float fVar0;
float fVar1;
float fVar2;
if(func_35()){
return;
}
if(func_247()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!HUD::DOES_BLIP_EXIST(Local_98.f_171)){
Local_98.f_171=func_285(Local_98.f_150, 0);
HUD::SET_BLIP_SPRITE(Local_98.f_171, func_284());
if(func_30() && !HUD::DOES_BLIP_EXIST(Local_98.f_172)){
Local_98.f_172=func_281(PLAYER::PLAYER_PED_ID(), 0, 0);
HUD::SET_BLIP_SPRITE(Local_98.f_172, 6);
HUD::SHOW_HEIGHT_ON_BLIP(Local_98.f_172, 0);
HUD::SET_BLIP_SCALE(Local_98.f_172, 0.7f);
HUD::SET_BLIP_PRIORITY(Local_98.f_172, (13 - 1));
if(func_278(PLAYER::PLAYER_ID()) !=-1){
func_274(&(Local_98.f_172), func_276(func_278(PLAYER::PLAYER_ID())));
}else{
func_274(&(Local_98.f_172), func_273());
}
HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_98.f_172, 1);
}}else{
fVar0=func_272(Local_98.f_124);
fVar1=Local_98.f_150;
fVar2=Local_98.f_150.f_1;
HUD::SET_BLIP_DISPLAY(Local_98.f_171, 2);
HUD::SET_BLIP_COORDS(Local_98.f_171, Local_98.f_150);
if(((func_24() || func_38()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE()){
fVar1=-323.1f;
fVar2=-1970.9f;
HUD::SET_BLIP_COORDS(Local_98.f_171, fVar1, fVar2, 0f);
HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
}}
HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
HUD::SET_BLIP_ROTATION(Local_98.f_171, round(fVar0));
HUD::SET_BLIP_SCALE(Local_98.f_171, 1f);
HUD::SET_BLIP_PRIORITY(Local_98.f_171, 9);
HUD::LOCK_MINIMAP_ANGLE(round(fVar0));
if(HUD::DOES_BLIP_EXIST(Local_98.f_172)){
HUD::SET_BLIP_ROTATION(Local_98.f_172, func_271(PLAYER::PLAYER_PED_ID()));
}}}}}

int func_271(int iParam0){
float fVar0;
fVar0=ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
return round(fVar0);
}


float func_272(float fParam0){
if(fParam0 > 180f){
return (fParam0 - 180f);
}
return (fParam0 + 180f);
}

int func_273(){
return 10;
}


void func_274(var uParam0, int iParam1){
int iVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
iVar0=func_275(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
}}

int func_275(int iParam0){
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

int func_276(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_277(iParam0);
switch (iVar0){
case 0:
return 192;
case 1:
return 193;
case 2:
return 194;
case 3:
return 195;
case 4:
return 196;
case 5:
return 197;
case 6:
return 198;
case 7:
return 199;
case 8:
return 200;
case 9:
return 201;
case 10:
return 202;
case 11:
return 203;
case 12:
return 204;
case 13:
return 205;
case 14:
return 206;
}
default:
}
return 1;
}


var func__277(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_278(int iParam0){
if(!iParam0==func_12()){
if(func_279(iParam0, 1)){
return Global_2648605.f_818.f_11[func_210(iParam0)];
}}
return -1;
}


bool func_279(int iParam0, bool bParam1){
if(!bParam1){
if(func_280(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_12();
}

int func_280(int iParam0){
if(iParam0 !=func_12()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_12()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_281(int iParam0, bool bParam1, bool bParam2){
return func_282(iParam0, !bParam1, bParam2);
}

int func_282(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_283(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_283(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_283(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_283(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_284(){
if(func_16()){
return 548;
}
return 627;
}


var func__285(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_283(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


void func_286(){
if(func_35()){
if(Local_98.f_150.f_2 >=(func_109() - 20f)){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
Local_98.f_37=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_37, "Out_Of_Bounds_Alarm_Loop", Local_98.f_157, 1);
}}elseif(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
AUDIO::STOP_SOUND(Local_98.f_37);
AUDIO::RELEASE_SOUND_ID(Local_98.f_37);
Local_98.f_37=-1;
}}}


void func_287(){
if(((func_38() || func_138()) || func_30()) || func_160()){
switch (Local_98.f_242){
case 0:
func_310();
break;
case 1:
func_297();
break;
case 2:
func_295();
break;
case 3:
func_288();
break;
}}}


void func_288(){
func_72(1);
if(!func_294()){
CAM::DO_SCREEN_FADE_IN(500);
}
func_292(0);
func_290(0);
func_289(0);
}


void func_289(int iParam0){
if(Local_98.f_242 !=iParam0){
Local_98.f_242=iParam0;
}}


void func_290(bool bParam0){
if(bParam0){
if(!func_291()){
MISC::SET_BIT(&Global_1962996, 17);
}}elseif(func_291()){
MISC::CLEAR_BIT(&Global_1962996, 17);
}}


bool func_291(){
return MISC::IS_BIT_SET(Global_1962996, 17);
}


void func_292(bool bParam0){
if(bParam0){
if(!func_293()){
MISC::SET_BIT(&Global_1962996, 18);
}}elseif(func_293()){
MISC::CLEAR_BIT(&Global_1962996, 18);
}}


bool func_293(){
return MISC::IS_BIT_SET(Global_1962996, 18);
}


bool func_294(){
return Global_1950108.f_528;
}


void func_295(){
if(func_293() || HUD::IS_PAUSE_MENU_ACTIVE()){
func_72(1);
func_296(0);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
func_289(3);
}}


void func_296(bool bParam0){
if(bParam0){
if(!func_77()){
MISC::SET_BIT(&Global_1962996, 19);
}}elseif(func_77()){
MISC::CLEAR_BIT(&Global_1962996, 19);
}}


void func_297(){
if(CAM::IS_SCREEN_FADED_OUT()){
if(func_22(&(Local_98.f_267), 3000, 0)){
if(func_309()){
if(MISC::IS_BIT_SET(Global_4542297, 2) || func_22(&(Local_98.f_271), 8000, 0)){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
}
CAM::DO_SCREEN_FADE_IN(500);
func_298(PLAYER::PLAYER_ID(), 1, 0, 0);
func_21(&(Local_98.f_267));
func_21(&(Local_98.f_271));
func_289(2);
}}elseif(func_22(&(Local_98.f_271), 15000, 0)){
func_21(&(Local_98.f_267));
func_21(&(Local_98.f_271));
func_72(1);
func_296(0);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
func_289(3);
}}}}


void func_298(int iParam0, bool bParam1, int iParam2, int iParam3){
var uVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
bool bVar11;
bool bVar12;
bool bVar13;
bool bVar14;
bool bVar15;
bool bVar16;
bool bVar17;
bool bVar18;
bool bVar19;
bool bVar20;
bool bVar21;
bool bVar22;
bool bVar23;
bool bVar24;
bool bVar25;
bool bVar26;
var uVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}}
if(func_308()){
if(bParam1){
return;
}else{
iParam3=1;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=iParam2;
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
}else{
bVar1=true;
bVar2=iParam2 & 2 !=false;
bVar3=iParam2 & 4 !=false;
bVar4=iParam2 & 8 !=false;
bVar5=iParam2 & 16 !=false;
bVar6=iParam2 & 32 !=false;
bVar7=iParam2 & 64 !=false;
bVar8=iParam2 & 128 !=false;
bVar9=iParam2 & 256 !=false;
bVar10=iParam2 & 512 !=false;
bVar11=iParam2 & 1024 !=false;
bVar12=iParam2 & 2048 !=false;
bVar13=iParam2 & 4096 !=false;
bVar14=iParam2 & 8192 !=false;
bVar15=iParam2 & 16384 !=false;
bVar16=iParam2 & 32768 !=false;
bVar17=iParam2 & 65536 !=false;
bVar18=iParam2 & 131072 !=false;
bVar19=iParam2 & 262144 !=false;
bVar20=iParam2 & 524288 !=false;
bVar21=iParam2 & 1048576 !=false;
bVar22=iParam2 & 2097152 !=false;
bVar23=iParam2 & 4194304 !=false;
bVar24=iParam2 & 8388608 !=false;
bVar25=iParam2 & 16777216 !=false;
if(iParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
bVar1=false;
}
if(!func_306()){
bVar26=false;
if(bParam1==1){
bVar26=true;
}
if(bVar16==0 && !bVar21){
bVar26=true;
}
if(bVar10==1){
bVar26=true;
}
if(bVar26){
return;
}}
if(bVar18){
}
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3==1)){
if(iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0)){
return;
}
uVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || (!func_116(PLAYER::PLAYER_ID(), 0) && !func_266())){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657589[iParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_303(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_302(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(iVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(iVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27)){
PED::FINALIZE_HEAD_BLEND(iVar27);
}
PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_301();
func_300();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657589[iParam0 /*466*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635559.f_2681){
Global_2635559.f_2681=0;
}}else{
if(!func_302(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(iVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, 1);
}}
if(func_299(Global_4718592.f_166301)){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
}}
if(Global_1575035){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
}}}
iVar28=0;
if(bVar2){
iVar28 |=2;
}
if(bVar3){
iVar28 |=4;
}
if(bVar4){
iVar28 |=8;
}
if(bVar5){
iVar28 |=16;
}
if(bVar6){
iVar28 |=32;
}
if(bVar7){
iVar28 |=64;
}
if(bVar8){
iVar28 |=128;
}
if(bVar9){
iVar28 |=256;
}
if(bVar10){
iVar28 |=512;
}
if(bVar11){
iVar28 |=1024;
}
if(bVar12){
iVar28 |=2048;
}
if(bVar13){
iVar28 |=4096;
}
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
}}}


bool func_299(int iParam0){
return iParam0==17;
}


void func_300(){
struct<3> Var0;
Global_2672505.f_1024=0;
Global_2672505.f_1025=0;
Global_2672505.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1031=-1;
Global_2672505.f_1032=0;
Global_2635559.f_2692={
Var0 
};
}


void func_301(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_302(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_303(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){}
if(iParam0==1){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(PED::IS_PED_A_PLAYER(iParam1)){
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1))){
iVar0=1;
}}}}
if(iVar0==0){
if(iParam2==1){
if(iParam0==1){
func_305();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(func_116(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_304(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_304(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_305(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}}

int func_306(){
if(func_307()==0){
return 1;
}
return 0;
}

int func_307(){
return Global_1574632.f_18;
}

int func_308(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}

int func_309(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0){
return 1;
}
return 0;
}


void func_310(){
if(func_329()){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201)){
if(!func_309()){
if(CAM::IS_SCREEN_FADED_IN()){
func_296(1);
func_127(-1);
func_298(PLAYER::PLAYER_ID(), 0, 512, 0);
CAM::DO_SCREEN_FADE_OUT(500);
func_327(1, -1);
func_311(3, 1, 1, 0);
func_23(&(Local_98.f_267), 0, 0);
func_23(&(Local_98.f_271), 0, 0);
func_289(1);
}}}}}

int func_311(int iParam0, int iParam1, int iParam2, bool bParam3){
if(Global_78558){
if(((iParam0 !=17 && iParam0 !=3) && iParam0 !=23) && iParam0 !=1){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4542297, 14)){
if(iParam0==17){
MISC::SET_BIT(&Global_4542297, 14);
MISC::SET_BIT(&Global_4542297, 16);
}
if(iParam0==3){
MISC::SET_BIT(&Global_4542297, 14);
MISC::SET_BIT(&Global_4542297, 15);
}
if(iParam0==23){
MISC::SET_BIT(&Global_4542297, 14);
MISC::SET_BIT(&Global_4542297, 27);
}
if(iParam0==1){
MISC::SET_BIT(&Global_4542297, 14);
MISC::SET_BIT(&Global_4542297, 29);
}}
if(Global_8260[iParam0 /*15*/].f_9==0){
func_323();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) > 0){
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 16);
MISC::CLEAR_BIT(&Global_4542297, 15);
MISC::CLEAR_BIT(&Global_4542297, 27);
MISC::CLEAR_BIT(&Global_4542297, 29);
return 1;
}else{
return 0;
}}
func_316();
if(Global_20383.f_1==9){
return 0;
}
if(iParam2==0){
if(func_76(0)==1){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(Global_20383.f_1==7){
return 0;
}
if(iParam1==1){}
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(Global_20383.f_1 < 4){
func_315("cellphone_flashhand");
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20380=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}}
while (!Global_20365){
wait(0);
}
func_323();
func_312();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_8859=0;
Global_20383.f_1=7;
func_315(&(Global_8260[iParam0 /*15*/].f_5));
if(bParam3){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 4000);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 2552);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[iParam0 /*15*/].f_5));
return 1;
}
return 1;
}


void func_312(){
if(Global_78558==0){
Global_8260[14 /*15*/].f_4=-99;
Global_8260[4 /*15*/].f_4=-99;
if(Global_2694521){
if(func_314(14)){
func_313(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
func_313(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
}else{
func_313(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
}}else{
func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
}}}


void func_313(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
StringCopy(&(Global_8260[iParam0 /*15*/]), sParam1, 16);
Global_8260[iParam0 /*15*/].f_4=iParam2;
StringCopy(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
Global_8260[iParam0 /*15*/].f_9=MISC::GET_HASH_KEY(sParam3);
Global_8260[iParam0 /*15*/].f_10=iParam4;
Global_8260[iParam0 /*15*/].f_11=iParam5;
Global_8260[iParam0 /*15*/].f_12=iParam6;
Global_8260[iParam0 /*15*/].f_13=iParam7;
Global_8260[iParam0 /*15*/].f_14=iParam8;
if(Global_8260[iParam0 /*15*/].f_12==0){
Global_8260[iParam0 /*15*/].f_12=0;
}
if(Global_8260[iParam0 /*15*/].f_13==0){
Global_8260[iParam0 /*15*/].f_13=0;
}
if(Global_8260[iParam0 /*15*/].f_14==0){
Global_8260[iParam0 /*15*/].f_14=0;
}}


bool func_314(int iParam0){
return Global_43257==iParam0;
}


void func_315(char* sParam0){
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
wait(0);
}}


void func_316(){
if(func_314(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]){
Global_20383=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]){
Global_20383=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
Global_20383=2;
}else{
Global_20383=0;
}}}else{
Global_20383=func_317();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__317(){
func_318();
return Global_113648.f_2365.f_539.f_4321;
}


void func_318(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_321(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_320(PLAYER::PLAYER_PED_ID());
if(func_319(iVar0) && (!func_314(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_319(Global_113648.f_2365.f_539.f_4321)){
Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
}
Global_113648.f_2365.f_539.f_4323=iVar0;
Global_113648.f_2365.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=145){
Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
}
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
}


bool func_319(int iParam0){
return iParam0 < 3;
}

int func_320(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_321(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_321(int iParam0){
if(func_319(iParam0)){
return func_322(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__322(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_323(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 34){
Global_8260[iVar0 /*15*/].f_4=-99;
iVar0++;
}
if(Global_78558==0){
iVar1=0;
while (iVar2 < 161){
if(func_326(iVar2, Global_20383)==1){
iVar1=1;
}
iVar2++;
}
func_313(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
if((Global_43257==15 && func_325(0)==0) && Global_8258==0){
func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=0;
Global_8259=255;
}else{
func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=1;
Global_8259=42;
}
if(iVar1==1){
func_313(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
}else{
func_313(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
}
func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
if(Global_113648.f_14053.f_89==1){
func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
if(Global_113648.f_14053.f_88==1){
func_313(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
}
func_313(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_313(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
func_313(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_313(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_313(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
func_313(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_313(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_313(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
}else{
func_313(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
func_313(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
func_313(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
func_313(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
if(MISC::IS_BIT_SET(Global_4542297, 4)==1){
func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
func_313(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
func_313(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
func_313(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_313(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
func_313(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
func_313(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
func_313(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
func_313(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
func_313(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
func_313(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
func_313(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
func_313(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
func_313(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
func_313(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
func_313(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
if(!MISC::IS_BIT_SET(Global_4542297, 4)==1){
if(Global_1836102){
func_313(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 20)==1){
func_313(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 22)==1){
func_313(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 26)==1){
if(func_324()){
func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_313(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
}}}
if((((MISC::IS_BIT_SET(Global_4542297, 4)==0 && Global_1836102==0) && MISC::IS_BIT_SET(Global_4542297, 20)==0) && MISC::IS_BIT_SET(Global_4542297, 22)==0) && MISC::IS_BIT_SET(Global_4542297, 26)==0){
if(func_324()){
func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_313(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
}}}}

int func_324(){
if(Global_78558){
if(Global_1836499 || Global_1836500==1){
return 1;
}}
return 0;
}

int func_325(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_326(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_327(bool bParam0, int iParam1){
int iVar0;
if(!func_124(&iVar0, 0, iParam1)){
return;
}
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23270.f_6071[iVar0]=0;
}
if(Global_23270.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[iVar0]=0;
}
if(Global_23270.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[iVar0]=0;
}
if(bParam0){
func_328(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_328(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_329(){
if(func_77()){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if((func_169(0) || func_168()) || RECORDING::IS_REPLAY_RECORDING()){
func_21(&(Local_98.f_275));
func_23(&(Local_98.f_275), 0, 0);
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
func_99();
return 0;
}elseif(func_25(&(Local_98.f_275))){
if(!func_22(&(Local_98.f_275), 2000, 0)){
return 0;
}else{
MISC::CLEAR_BIT(&(Local_98.f_5), 16);
func_21(&(Local_98.f_275));
}}
if(func_164(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}


void func_330(){
if(func_331()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 25)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_98.f_159), true);
MISC::SET_BIT(&(Local_98.f_5), 25);
}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 25)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_98.f_159), false);
MISC::CLEAR_BIT(&(Local_98.f_5), 25);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}}

int func_331(){
if(func_164(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_2791785, 0)){
return 1;
}}
return 0;
}


void func_332(){
int iVar0;
if(func_83()){
Global_1962996.f_1=0;
}
if(func_339() || func_193()){
if(!func_25(&(Local_98.f_247))){
func_23(&(Local_98.f_247), 0, 0);
}elseif(func_22(&(Local_98.f_247), Global_1962996.f_1, 0) || func_193()){
func_21(&(Local_98.f_245));
if(func_83()){
if(func_17(PLAYER::PLAYER_PED_ID())){
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
}else{
FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
}
PAD::SET_CONTROL_SHAKE(0, 300, round((200f * Local_98.f_131)));
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_98.f_159, 1);
STREAMING::CLEAR_FOCUS();
iVar0=NETWORK::NET_TO_OBJ(Local_98.f_159);
OBJECT::DELETE_OBJECT(&iVar0);
MISC::SET_BIT(&(Local_98.f_6), 2);
}
if(func_31()){
func_335(1);
if(Local_98.f_26==0){
func_333(6, 0, 0);
}else{
func_333(5, 0, 0);
}}
func_384(1);
func_383(5);
}}elseif(func_25(&(Local_98.f_247))){
func_205(&(Local_98.f_247), 0, 0);
}}


void func_333(int iParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar1;
float fVar2;
float fVar3;
StringCopy(&cVar0, func_334(iParam0), 64);
iVar1=5;
if(bParam1){
iVar1=69;
}
fVar2=8f;
fVar3=-8f;
Local_98.f_79=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_98.f_153, 0f, 0f, Local_98.f_118, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_98.f_79, Local_98.f_158, &cVar0, fVar2, fVar3, iVar1, 0, 1148846080, 0);
if(iParam0==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
StringConCat(&cVar0, "_DRONE", 64);
NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_98.f_159), Local_98.f_79, Local_98.f_158, &cVar0, fVar2, fVar3, 8);
}}
StringCopy(&cVar0, func_334(iParam0), 64);
StringConCat(&cVar0, "_PHONE", 64);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_160)){
ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_98.f_160), &cVar0, Local_98.f_158, fVar2, bParam1, iParam2, 0, 0f, 0);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_98.f_160));
}
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_98.f_79);
}


char* func_334(int iParam0){
switch (iParam0){
case 0:
return "ENTER";
case 1:
return "BASE";
case 2:
return "USE_01";
case 3:
return "USE_02";
case 4:
return "USE_03";
case 5:
return "FAIL";
case 6:
return "EXIT";
default:
}
return "";
}


void func_335(bool bParam0){
int iVar0;
iVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iVar0);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0)){
PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
iVar0=-1;
}elseif(bParam0){
if(func_17(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}}}


float func_336(){
if(func_16()){
return 1f;
}
return 0.5f;
}

int func_337(){
if(func_16()){
return 81;
}
return 72;
}


Vector3 func__338(){
if(func_16()){
return CAM::GET_CAM_COORD(Local_98.f_169);
}
return Local_98.f_150;
}

int func_339(){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)) && !MISC::IS_BIT_SET(Local_98.f_5, 2)){
return 1;
}
if(Local_98.f_12==2){
Local_98.f_26=1;
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 1)){
return 1;
}
if(func_347()){
Local_98.f_26=5;
return 1;
}
if(func_138() && func_341()){
Local_98.f_26=5;
return 1;
}
if(func_31() || func_16()){
if(func_341()){
Local_98.f_26=5;
return 1;
}}
if(MISC::IS_BIT_SET(Local_98.f_5, 2)){
Local_98.f_26=4;
return 1;
}
if(func_177()){
if(!func_25(&(Local_98.f_255))){
func_23(&(Local_98.f_255), 0, 0);
}elseif(func_22(&(Local_98.f_255), 3000, 0)){
Local_98.f_26=0;
return 1;
}}
if(MISC::IS_BIT_SET(Local_98.f_5, 7)){
Local_98.f_26=0;
return 1;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_98.f_159)) || func_202(NETWORK::NET_TO_ENT(Local_98.f_159), 0)){
if(MISC::IS_BIT_SET(Local_98.f_5, 29)){
Local_98.f_26=3;
return 1;
}}}
if(!func_138() && !func_340()){
if(Local_98.f_150.f_2 >=func_109()){
Local_98.f_26=5;
return 1;
}}
return 0;
}


bool func_340(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 0);
}

int func_341(){
struct<3> Var0;
int iVar1;
if(func_346()){
return 0;
}
if(func_19(PLAYER::PLAYER_ID(), 1, 1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
if(func_138()){
if(ENTITY::DOES_ENTITY_EXIST(func_345()) && !ENTITY::IS_ENTITY_DEAD(func_345(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(func_345(), 1) 
};
}}elseif(func_30()){
if(!func_31()){
iVar1=func_342(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10);
switch (iVar1){
case 128:
Var0={
-245.64f, 6210.96f, 35.94f 
};
break;
case 129:
Var0={
1695.88f, 4783.87f, 47.02f 
};
break;
case 130:
Var0={
-115.15f, -1771.65f, 38.86f 
};
break;
case 131:
Var0={
-600.96f, 280.47f, 87.04f 
};
break;
case 132:
Var0={
-1269.72f, -304.09f, 40f 
};
break;
case 133:
Var0={
758.46f, -814.57f, 30.3f 
};
break;
}}else{
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}}elseif(func_16()){
if(func_17(func_15())){
Var0={
ENTITY::GET_ENTITY_COORDS(func_15(), 1) 
};
}}else{
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(func_17(NETWORK::NET_TO_OBJ(Local_98.f_159))){
Local_98.f_120=func_155(NETWORK::NET_TO_OBJ(Local_98.f_159), Var0, 1);
if(Local_98.f_120 > func_109()){
return 1;
}}}}
return 0;
}

int func_342(int iParam0){
int iVar0;
if(iParam0 !=func_12()){
iVar0=func_344(iParam0);
if(iVar0 !=0){
return func_343(iVar0);
}}
return -1;
}

int func_343(int iParam0){
switch (iParam0){
case 1:
return 128;
case 2:
return 129;
case 3:
return 130;
case 4:
return 131;
case 5:
return 132;
case 6:
return 133;
default:
}
return -1;
}

int func_344(int iParam0){
if(iParam0 !=func_12()){
return Global_1853910[iParam0 /*862*/].f_267.f_428;
}
return 0;
}

int func_345(){
if(Global_1853755 !=func_12()){
if(!func_47(Global_1853755)){
if(ENTITY::DOES_ENTITY_EXIST(Global_1648768)){
return Global_1648768;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_1968112[Global_1853755])){
return Global_1968112[Global_1853755];
}}}
return -1;
}


bool func_346(){
return MISC::IS_BIT_SET(Global_1962996, 6);
}

int func_347(){
float fVar0;
int iVar1;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)){
iVar1=Global_262145.f_24671;
if(func_16()){
iVar1 *=10;
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Local_98.f_150, &fVar0, 1, 0)){
Local_98.f_121=(Local_98.f_150.f_2 - fVar0);
if(Local_98.f_121 > IntToFloat(iVar1)){
return 1;
}}}
return 0;
}


void func_348(){
struct<3> Var0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
if(!func_83()){
return;
}
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)) && CAM::DOES_CAM_EXIST(Local_98.f_169)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if(MISC::IS_BIT_SET(Local_98.f_5, 1) || func_193()){
return;
}
Var0={
func_349(func_350()) 
};
bVar3=false;
iVar4=1;
iVar5=0;
if(func_16()){
bVar3=true;
iVar4=0;
iVar5=0;
}
if(func_35()){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) !=0f){
iVar1=1;
}
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) !=0f){
iVar2=1;
}}else{
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) !=0f){
iVar1=1;
}
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) !=0f){
iVar2=1;
}}}
if(iVar1 && !func_260(bVar3)){
Local_98.f_119=140f;
}elseif(iVar2 && !func_260(bVar3)){
Local_98.f_119=60f;
}elseif(!func_16()){
Local_98.f_119=100f;
}
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), iVar5, Var0 * Vector(-Local_98.f_119, -Local_98.f_119, -Local_98.f_119), 0, 1, iVar4, 0);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


Vector3 func__349(struct<3> Param0){
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


Vector3 func__350(){
struct<3> Var0;
Var0={
0f, 1f, 0f 
};
func_351(&Var0);
return Var0;
}


void func_351(var uParam0){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=cos(0f);
fVar1=sin(0f);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=cos(0f);
fVar1=sin(0f);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=cos(0f);
fVar1=sin(0f);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


void func_352(){
float fVar0;
int iVar1;
int iVar2;
bool bVar3;
float fVar4;
struct<3> Var5;
struct<3> Var6;
struct<3> Var7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
float fVar12;
float fVar13;
float fVar14;
struct<3> Var15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
float fVar20;
float fVar21;
float fVar22;
float fVar23;
struct<3> Var24;
float fVar25;
float fVar26;
float fVar27;
float fVar28;
if(func_83()){
return;
}
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_98.f_159), 0)) && CAM::DOES_CAM_EXIST(Local_98.f_169)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
fVar0=0f;
if(!func_38() && !func_24()){
if(!func_252()){
if(func_25(&(Local_98.f_253))){
iVar1=Global_262145.f_24669;
if(func_24()){
iVar1=(iVar1 / 3);
}
if(!func_22(&(Local_98.f_253), iVar1, 0)){
iVar2=(100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_253)));
Local_98.f_20=(iVar2 / iVar1);
}
else{
if(func_17(Local_98.f_161)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98.f_161, NETWORK::NET_TO_OBJ(Local_98.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}
Local_98.f_20=100;
func_21(&(Local_98.f_253));
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_43)){
AUDIO::STOP_SOUND(Local_98.f_43);
AUDIO::RELEASE_SOUND_ID(Local_98.f_43);
Local_98.f_43=-1;
}
}}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
bVar3=PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
}else{
bVar3=PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
}
if((((bVar3 && Local_98.f_20==100) && !func_260(0)) && !func_77()) && func_161()){
fVar0=120f;
if(func_24()){
fVar0=110f;
}
elseif(func_30()){
fVar0=49f;
}
if(IntToFloat(Local_98[1]) !=0f){
func_359(1);
}
else{
func_359(0);
}
GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
func_23(&(Local_98.f_251), 0, 0);
func_358(1);
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_42)){
Local_98.f_42=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_42, "HUD_Boost_Loop", Local_98.f_157, 1);
}}}else{
fVar0=120f;
if(func_24()){
fVar0=115f;
}elseif(func_30()){
fVar0=49f;
}
if(CAM::DOES_CAM_EXIST(Local_98.f_169)){
if(!CAM::IS_CAM_SHAKING(Local_98.f_169)){
CAM::SHAKE_CAM(Local_98.f_169, "DRONE_BOOST_SHAKE", 1065353216);
CAM::SET_CAM_SHAKE_AMPLITUDE(Local_98.f_169, 0.15f);
}}
if(func_25(&(Local_98.f_251))){
if(func_22(&(Local_98.f_251), Global_262145.f_24668, 0)){
Local_98.f_20=0;
func_359(0);
func_358(0);
func_21(&(Local_98.f_253));
func_23(&(Local_98.f_253), 0, 0);
CAM::STOP_CAM_SHAKING(Local_98.f_169, 1);
PAD::STOP_CONTROL_SHAKE(0);
GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
func_21(&(Local_98.f_251));
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_42)){
AUDIO::STOP_SOUND(Local_98.f_42);
AUDIO::RELEASE_SOUND_ID(Local_98.f_42);
Local_98.f_42=-1;
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_43)){
Local_98.f_43=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_43, "HUD_Boost_Recharge_Loop", Local_98.f_157, 1);
}
}
else{
fVar4=(100f / (to_float(Global_262145.f_24668) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_251))));
Local_98.f_20=(100 - round(fVar4));
PAD::SET_CONTROL_SHAKE(0, Global_262145.f_24668, round((255f * Local_98.f_131)));
}}}}
Var5={
Local_98.f_150 
};
if(MISC::IS_BIT_SET(Local_98.f_5, 1) || func_193()){
return;
}
Var6={
func_349(func_350()) 
};
Var7={
func_349(func_357(func_350())) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar8, 1, 0);
if(!func_356()){
if(Local_98.f_10==2 || (Var5.f_2 - fVar8) < 2f){
fVar9=24f;
if(Local_98[1] !=0){
PAD::DISABLE_CONTROL_ACTION(2, 207, 1);
}
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) !=0f || Local_98[1] !=0){
if((Var5.f_2 - fVar8) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) !=0f){
fVar9=24f;
}
else{
fVar9=10f;
}}else{
fVar9=3f;
}
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, fVar9, 0, 1, 1, 0);
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(Local_98[2] >=127){
Local_98[2]=127;
}elseif(Local_98[2] <=-127){
Local_98[2]=-127;
}
if(Local_98[0] >=127){
Local_98[0]=127;
}elseif(Local_98[0] <=-127){
Local_98[0]=-127;
}}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) !=0f){
iVar10=1;
}
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) !=0f){
iVar11=1;
}}else{
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) !=0f){
iVar10=1;
}
if(PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) !=0f){
iVar11=1;
}}
if(((iVar10 && func_355()) && !func_77()) || (func_252() && !func_251())){
fVar14=Local_98.f_119;
if(func_160()){
fVar14=5f;
}
if(func_38() || func_24()){
fVar13=10f;
}
if(func_252() && !func_251()){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
fVar12=((fVar14 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
}else{
fVar12=((fVar14 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
}}elseif(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
fVar12=((fVar14 + fVar13) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
}else{
fVar12=((fVar14 + fVar13) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
}
Var15={
Var7 * Vector(fVar12, fVar12, fVar12) 
};
if(Var15.f_2 > 149f){
Var15.f_2=149f;
}
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var15, 0, 1, 1, 0);
}elseif(((iVar11 && !func_77()) && func_355()) && !func_260(0)){
if(func_38() || func_24()){
fVar17=10f;
}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
fVar16=((Local_98.f_119 + fVar17) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
}else{
fVar16=((Local_98.f_119 + fVar17) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
}
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var7 * Vector(-fVar16, -fVar16, -fVar16), 0, 1, 1, 0);
}
if(((Local_98[1] > 0 && !func_252()) && !func_260(0)) && !func_77()){
fVar20=func_354();
fVar18=(Local_98.f_119 / (127f / IntToFloat(Local_98[1])));
fVar19=(fVar20 / (127f / IntToFloat(Local_98[1])));
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var6 * Vector(fVar18, fVar18, fVar18), 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, fVar19, 0, 1, 1, 0);
}elseif((((Local_98[1] < 0 && !func_252()) && !func_260(0)) && !func_77()) || (func_252() && func_251())){
if(func_252() && func_251()){
fVar23=50f;
if(func_24()){
fVar21=(Local_98.f_119 / -1f);
}else{
fVar21=((Local_98.f_119 + fVar0) / -1f);
}
fVar22=(fVar23 / -1f);
}else{
fVar23=func_354();
if(func_24()){
fVar21=(Local_98.f_119 / (127f / IntToFloat(Local_98[1])));
}else{
fVar21=((Local_98.f_119 + fVar0) / (127f / IntToFloat(Local_98[1])));
}
fVar22=(fVar23 / (127f / IntToFloat(Local_98[1])));
}
if(func_24()){
if(!func_251()){
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
}else{
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, 41f, 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, -149f, 0f, 0, 1, 1, 0);
}}else{
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
}}
Var24={
func_353(Var6, Var7) 
};
if((!func_252() && !func_260(0)) && !func_77()){
if(Local_98[0] > 0){
fVar25=-(Local_98.f_119 / (127f / IntToFloat(Local_98[0])));
fVar26=(8f / (127f / IntToFloat(Local_98[0])));
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var24 * Vector(fVar25, fVar25, fVar25), 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, fVar26, 0, 1, 1, 0);
}elseif(Local_98[0] < 0){
fVar27=-(Local_98.f_119 / (127f / IntToFloat(Local_98[0])));
fVar28=(8f / (127f / IntToFloat(Local_98[0])));
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, Var24 * Vector(fVar27, fVar27, fVar27), 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_98.f_159), 0, 0f, 0f, -fVar28, 0, 1, 1, 0);
}}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


Vector3 func__353(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


float func_354(){
if(func_24() || func_38()){
return 40f;
}elseif(func_30()){
return 30f;
}elseif(func_160()){
return 2.5f;
}
return 6.4f;
}

int func_355(){
if(func_260(0)){
return 0;
}
if(func_252() && !func_251()){
return 0;
}
return 1;
}


bool func_356(){
return MISC::IS_BIT_SET(Global_1962996, 2);
}


Vector3 func__357(struct<2> Param0, var uParam1){
struct<3> Var0;
Var0={
sin(Param0.f_1), (-sin(Param0.f_0) * cos(Param0.f_1)), (cos(Param0.f_0) * cos(Param0.f_1)) 
};
return Var0;
}


void func_358(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Local_98.f_5, 21)){
MISC::SET_BIT(&(Local_98.f_5), 21);
}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 21)){
MISC::CLEAR_BIT(&(Local_98.f_5), 21);
}}


void func_359(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Local_98.f_5, 22)){
MISC::SET_BIT(&(Local_98.f_5), 22);
}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 22)){
MISC::CLEAR_BIT(&(Local_98.f_5), 22);
}}


void func_360(){
float fVar0;
float fVar1;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_159), 0)){
if((func_24() || func_38()) || func_35()){
fVar0=-323.1f;
fVar1=-1970.9f;
}else{
fVar0=Local_98.f_150;
fVar1=Local_98.f_150.f_1;
}
HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1);
HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1, 0);
if(!INTERIOR::IS_VALID_INTERIOR(Global_1962996.f_24) && !func_35()){
if(!MISC::IS_BIT_SET(Local_98.f_5, 8)){
HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
}
HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
}}}}


void func_361(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_41) && Local_98.f_41==-1){
Local_98.f_41=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_41, "HUD_Loop", Local_98.f_157, 1);
}}}


void func_362(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_31)){
Local_98.f_31=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_31, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_157, 0, 0);
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_31, "DroneRotationalSpeed", Local_98.f_129);
}else{
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_31, "DroneRotationalSpeed", Local_98.f_129);
}
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_40)){
AUDIO::RELEASE_SOUND_ID(Local_98.f_40);
Local_98.f_40=-1;
}}}


void func_363(){
if(func_19(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, 1);
}}


void func_364(){
int iVar0;
if(func_24()){
iVar0=PLAYER::INT_TO_PLAYERINDEX(Local_98.f_45);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159) && func_19(iVar0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)){
if(func_365(NETWORK::NET_TO_OBJ(Local_98.f_159), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_25312, 1)){
if(!func_209(PLAYER::PLAYER_ID(), iVar0)){
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
MISC::SET_BIT(&(Local_98.f_5), 11);
return;
}}}}}
MISC::CLEAR_BIT(&(Local_98.f_5), 11);
}}


bool func_365(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}


void func_366(){
int iVar0;
if(((func_35() || func_24()) || func_38()) || func_16()){
iVar0=1000;
if(func_24() || func_38()){
iVar0=7000;
}elseif(func_16()){
iVar0=1100;
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 29)){
if(CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_RENDERING(Local_98.f_169)){
if(func_17(func_18())){
if(func_22(&(Local_98.f_269), iVar0, 0)){
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_18(), 1, 0);
ENTITY::SET_ENTITY_COLLISION(func_18(), true, 0);
MISC::SET_BIT(&(Local_98.f_5), 29);
}}}}}}


void func_367(){
if(!func_16() || PLAYER::PLAYER_ID()==func_12()){
return;
}
if(func_22(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]), 2500, 0)){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_207[PLAYER::PLAYER_ID()])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_98.f_207[PLAYER::PLAYER_ID()], 0);
}
func_21(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]));
}}


void func_368(){
char* sVar0;
var uVar1;
var uVar2;
sVar0="scr_ih_sub";
STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0)){
if(func_17(func_15()) && PLAYER::PLAYER_ID() !=func_12()){
if(!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_207[PLAYER::PLAYER_ID()])){
GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
uVar1=func_375(PLAYER::PLAYER_ID());
uVar2=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), uVar1);
Local_98.f_207[PLAYER::PLAYER_ID()]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", func_15(), func_374(PLAYER::PLAYER_ID()), 0f, 0f, 0f, uVar2, 5f, 0, 0, 0);
}else{
func_23(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
}
if(func_25(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]))){
if(func_22(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]), 1000, 0)){
GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_98.f_207[PLAYER::PLAYER_ID()], "flame", 0.15f, 0);
func_370();
func_267();
func_348();
if(!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159))){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159), true, 0);
}
func_369();
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_40)){
Local_98.f_40=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_40, "HUD_Startup", Local_98.f_157, 1);
}
func_270();
func_102();
func_237(1);
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
Local_98.f_173=NETWORK::GET_NETWORK_TIME();
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159), 0);
func_383(4);
}}}else{
func_384(1);
func_383(7);
}}}


void func_369(){
if(func_138() || func_31()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene")){
AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
}}elseif(func_24()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene")){
AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
}}elseif(func_38()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene")){
AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
}}elseif(func_35()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene")){
AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
}}elseif(func_16()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene")){
AUDIO::START_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
}}}


void func_370(){
var uVar0;
var uVar1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
uVar1=func_375(PLAYER::PLAYER_ID());
if(Global_1581970==1){
uVar0=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), uVar1);
Var2={
ENTITY::GET_ENTITY_BONE_POSTION(func_15(), uVar0) 
};
Local_98.f_144={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) 
};
}elseif(Global_1581970==2){
uVar0=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), uVar1);
Var2={
ENTITY::GET_ENTITY_BONE_POSTION(func_15(), uVar0) 
};
Local_98.f_144={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) 
};
}
Var3={
ENTITY::GET_ENTITY_ROTATION(func_15(), 2) 
};
ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_144, 1, 0, 0, 1);
func_372(Local_98.f_144, (Var3.f_0 + 90f), 180f, 0f);
Var4={
ENTITY::GET_ENTITY_COORDS(func_15(), 1) 
};
Var5={
0f, 0f, 0f 
};
Local_98.f_116=func_371(Var5, Var4);
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_116);
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_98.f_159), (Var3.f_0 - 90f), 0f, Local_98.f_116, 2, 1);
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_115)){
Local_98.f_115=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_115, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_98.f_159), Local_98.f_157, 1, 0);
}}


var func__371(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}


void func_372(struct<3> Param0, struct<3> Param1){
if(!func_373(Global_1962996.f_13, Param0, 0)){
Global_1962996.f_13={
Param0 
};
Param1={
Param1 + Vector(0f, -180f, 180f) 
};
Global_1962996.f_16={
Param1 
};
}}


bool func_373(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


Vector3 func__374(int iParam0){
if(Local_98.f_82[iParam0] > 4){
return 0f, 0f, 1.5f;
}
return 0f, 0f, 1.5f;
}


char* func_375(int iParam0){
if(iParam0==func_12()){
return "";
}
switch (Local_98.f_82[iParam0]){
case 1:
return "sub_hatch1";
case 2:
return "sub_hatch2";
case 3:
return "sub_hatch3";
case 4:
return "sub_hatch4";
case 5:
return "sub_hatch5";
case 6:
return "sub_hatch6";
case 7:
return "sub_hatch7";
case 8:
return "sub_hatch8";
default:
}
return "sub_hatch4";
}


void func_376(){
int iVar0;
int iVar1;
int iVar2;
if(func_382() || !func_31()){
return;
}
switch (Local_98.f_80){
case 0:
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_160)){
iVar0=joaat("ch_prop_ch_phone_ing_01a");
if(func_179(iVar0)){
if(func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1)){
if(!MISC::IS_BIT_SET(Local_98.f_6, 3)){
NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
MISC::SET_BIT(&(Local_98.f_6), 3);
}
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
if(func_381(&(Local_98.f_160), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 1, 1, 0, 0, 0, 1)){
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_98.f_160, PLAYER::PLAYER_ID(), 1);
iVar1=PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_98.f_160), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}
}}}}else{
Local_98.f_80=1;
}
break;
case 1:
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) !=0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) !=1){
func_333(0, 0, 0);
Local_98.f_80=2;
}
break;
case 2:
if(func_380(0, "CREATE")){
func_362();
if(func_379(Local_98.f_160)){
if(!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_160))){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_160), true, 0);
}}
if(func_379(Local_98.f_159)){
if(!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159))){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159), true, 0);
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_163, false, 0);
}}}
if(func_377(1)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98.f_163, NETWORK::NET_TO_OBJ(Local_98.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_163, false, 0);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_98.f_159));
OBJECT::PLAY_OBJECT_AUTO_START_ANIM(NETWORK::NET_TO_OBJ(Local_98.f_159));
func_270();
func_131();
func_237(1);
func_249();
func_352();
func_369();
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_40)){
Local_98.f_40=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_40, "HUD_Startup", Local_98.f_157, 1);
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
Local_98.f_173=NETWORK::GET_NETWORK_TIME();
func_383(4);
func_333(1, 1, 0);
Local_98.f_80=3;
}
break;
case 3:
if(func_377(0)){
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
switch (iVar2){
case 0:
func_333(2, 0, 0);
Local_98.f_243=2;
break;
case 1:
func_333(3, 0, 0);
Local_98.f_243=3;
break;
case 2:
func_333(4, 0, 0);
Local_98.f_243=4;
break;
}
Local_98.f_80=4;
}
break;
case 4:
if(func_377(0)){
func_333(1, 1, 0);
Local_98.f_80=3;
}
break;
}}

int func_377(bool bParam0){
int iVar0;
float fVar1;
int iVar2;
iVar0=PLAYER::PLAYER_PED_ID();
if(func_17(iVar0)){
fVar1=func_378();
iVar2=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_98.f_79);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >=fVar1){
if(bParam0){
func_335(0);
}
return 1;
}}
return 0;
}


float func_378(){
return 0.95f;
}

int func_379(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}

int func_380(int iParam0, char* sParam1){
int iVar0;
iVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_98.f_79);
if(iVar0 !=-1){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0)){
if((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_98.f_160), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_98.f_159), MISC::GET_HASH_KEY(sParam1))){
return 1;
}}}
return 0;
}

int func_381(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9){
if(!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
return 0;
}
if(bParam7){
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam4, bParam3, iParam5));
}else{
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam4, bParam3, iParam5));
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), iParam6);
if(bParam8){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), 1);
}
if(bParam9){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
}
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0))){
if(bParam3){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}


bool func_382(){
return MISC::IS_BIT_SET(Global_1962996, 13);
}


void func_383(int iParam0){
if(Local_98.f_241 !=iParam0){
Local_98.f_241=iParam0;
}}


void func_384(bool bParam0){
if(bParam0){
if(!func_382()){
MISC::SET_BIT(&Global_1962996, 13);
}}elseif(func_382()){
MISC::CLEAR_BIT(&Global_1962996, 13);
}}


void func_385(){
struct<3> Var0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if(!CAM::DOES_CAM_EXIST(Local_98.f_169) && MISC::IS_BIT_SET(Local_98.f_5, 0)){
if(func_396()){
if(func_340()){
func_298(PLAYER::PLAYER_ID(), 0, 33280, 0);
}elseif(!func_35()){
func_298(PLAYER::PLAYER_ID(), 0, 512, 0);
}
if(!func_395()){
HUD::THEFEED_HIDE();
}else{
HUD::THEFEED_SHOW();
}
Local_98.f_169=CAM::CREATE_CAMERA(26379945, 1);
CAM::SET_CAM_FOV(Local_98.f_169, Local_98.f_125);
CAM::SET_CAM_NEAR_CLIP(Local_98.f_169, 0.01f);
CAM::SET_CAM_NEAR_DOF(Local_98.f_169, 0.01f);
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
if(func_35()){
GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
}
Var0={
func_394() 
};
CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_98.f_169, NETWORK::NET_TO_OBJ(Local_98.f_159), 0f, 0f, 180f, Var0, 1);
if(func_35()){
CAM::SET_CAM_ROT(Local_98.f_169, func_393() - Vector(0f, -180f, 180f), 2);
}
PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_98.f_150, 75f, 75f);
STREAMING::SET_FOCUS_POS_AND_VEL(Local_98.f_150, CAM::GET_CAM_ROT(Local_98.f_169, 2));
if(!func_16()){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159), 0);
}
if(!func_340()){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
STREAMING::NEW_LOAD_SCENE_STOP();
}}
if(!func_31() && !func_16()){
func_369();
if(AUDIO::HAS_SOUND_FINISHED(Local_98.f_40)){
Local_98.f_40=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Local_98.f_40, "HUD_Startup", Local_98.f_157, 1);
}
func_270();
if(func_83()){
func_102();
}
else{
func_131();
}
func_237(1);
func_249();
func_352();
CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
Local_98.f_173=NETWORK::GET_NETWORK_TIME();
}
func_390(1);
func_389(1);
func_387(158);
MISC::SET_BIT(&(Local_96[PLAYER::PLAYER_ID() /*3*/]), 0);
if(!func_31() && !func_16()){
func_383(4);
}elseif(func_16()){
func_383(3);
}else{
Local_98.f_153={
func_6(PLAYER::PLAYER_ID()) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_98.f_153, &(Local_98.f_153.f_2), 0, 0);
Local_98.f_118=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
func_386();
Local_98.f_153={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_98.f_153, Local_98.f_118, -0.0695723f, 0.177497f, 0f) 
};
func_383(2);
}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}else{
if(CAM::DOES_CAM_EXIST(Local_98.f_169)){
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 0)){
}}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
}}}


void func_386(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(!(iVar0==joaat("weapon_unarmed") || iVar0==joaat("object"))){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}}}


void func_387(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_388() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_388(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_389(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365, 26)){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365), 26);
}}elseif(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365, 26)){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365), 26);
}}


void func_390(bool bParam0){
if(bParam0){
if(!func_75()){
MISC::SET_BIT(&Global_1962996, 5);
}}else{
if(func_75()){
MISC::CLEAR_BIT(&Global_1962996, 5);
}
func_391(0);
}}


void func_391(bool bParam0){
if(bParam0){
if(!func_392()){
MISC::SET_BIT(&Global_1962996, 12);
}}elseif(func_392()){
MISC::CLEAR_BIT(&Global_1962996, 12);
}}


bool func_392(){
return MISC::IS_BIT_SET(Global_1962996, 12);
}


Vector3 func__393(){
return Global_1962996.f_16;
}


Vector3 func__394(){
if(func_24() || func_38()){
return 0f, -0.099f, -0.02f;
}elseif(func_35()){
return 0f, -0.9f, 0f;
}elseif(func_30() || func_160()){
return 0f, -0.038f, -0.006f;
}elseif(func_16()){
return 0f, -5.48f, 0f;
}
return 0f, -0.038f, -0.004f;
}


bool func_395(){
return MISC::IS_BIT_SET(Global_1962996, 10);
}

int func_396(){
if(func_39() && !func_41()){
return 1;
}
if(func_400()){
return 1;
}
if(func_399()){
return 1;
}
if(func_41() && func_398()){
return 1;
}
if(func_397() && func_398()){
return 1;
}
if(!func_70(PLAYER::PLAYER_ID(), 0) && !func_294()){
return 1;
}
return 0;
}

int func_397(){
if(func_46(PLAYER::PLAYER_ID()) && func_42()){
if(Global_1581970==2 || Global_1581970==1){
return 1;
}}
return 0;
}

int func_398(){
if(Global_1581961 !=-1 || Global_1581967 !=-1){
if(((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3)){
return 1;
}
if(func_43()){
return 0;
}}
return 0;
}

int func_399(){
return 0;
}

int func_400(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
if(func_41() || func_401()){
return 0;
}
if(func_399()){
return 0;
}
return 1;
}

int func_401(){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0)){
return 1;
}
return 0;
}


void func_402(){
int iVar0;
struct<3> Var1;
bool bVar2;
float fVar3;
iVar0=joaat("blazer5");
if(func_179(Local_98.f_240) && func_179(iVar0)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 0)){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!func_340()){
if(func_138()){
if(func_17(func_345())){
Var1={
ENTITY::GET_ENTITY_COORDS(func_345(), 1) 
};
}}else{
Var1={
Local_98.f_138 
};
}
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
func_298(PLAYER::PLAYER_ID(), 0, 512, 0);
}
if(!MISC::IS_BIT_SET(Local_98.f_5, 18)){
if(STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1)){
MISC::SET_BIT(&(Local_98.f_5), 18);
}}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
if(!MISC::IS_BIT_SET(Local_98.f_5, 19)){
if(func_408()){
if(func_405()){
MISC::SET_BIT(&(Local_98.f_5), 19);
}}else{
if(!func_257(func_404())){
Local_98.f_138={
func_404() 
};
}
MISC::SET_BIT(&(Local_98.f_5), 19);
if(func_16()){
Local_98.f_138.f_2=(Local_98.f_138.f_2 + 1000f);
}}
}}}
if(MISC::IS_BIT_SET(Local_98.f_5, 19) || func_340()){
if(!MISC::IS_BIT_SET(Local_98.f_5, 20)){
Local_98.f_163=VEHICLE::CREATE_VEHICLE(iVar0, Local_98.f_138, 0f, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Local_98.f_163, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_98.f_163, Local_98.f_138, 0, 0, 1);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_98.f_163, 0, 0);
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_163, false, 0);
MISC::SET_BIT(&(Local_98.f_5), 20);
}elseif(func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1)){
if(!MISC::IS_BIT_SET(Local_98.f_5, 30)){
NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
MISC::SET_BIT(&(Local_98.f_5), 30);
}
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
bVar2=func_403();
if(func_31()){
Local_98.f_153={
func_6(PLAYER::PLAYER_ID()) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_98.f_153, &(Local_98.f_153.f_2), 0, 0);
Local_98.f_138={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_98.f_158, "ENTER", Local_98.f_153, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0, 2) 
};
}
if(func_381(&(Local_98.f_159), Local_98.f_240, Local_98.f_138, 0, 1, 1, 1, 1, 0, bVar2)){
Global_1962996.f_20=NETWORK::NET_TO_OBJ(Local_98.f_159);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_98.f_159), 1);
if(func_138()){
if(func_17(func_345())){
ENTITY::SET_ENTITY_ROTATION(func_18(), ENTITY::GET_ENTITY_ROTATION(func_345(), 2), 2, 1);
fVar3=(ENTITY::GET_ENTITY_HEADING(func_345()) + 180f);
}}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_432={
Local_98.f_138 
};
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_435=fVar3;
Local_96[PLAYER::PLAYER_ID() /*3*/].f_2=Local_98.f_159;
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_98.f_159, PLAYER::PLAYER_ID(), 1);
INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_98.f_159), 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_98.f_159), 1, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_18(), Local_98.f_138, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(func_18(), fVar3);
NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_18(), 1);
if(!func_257(func_393())){
ENTITY::SET_ENTITY_ROTATION(func_18(), func_393(), 2, 1);
}
if(func_35() || func_16()){
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_18(), 0, 0);
}
NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_98.f_159, 1);
if(func_164(PLAYER::PLAYER_ID())){
ENTITY::SET_ENTITY_HEALTH(func_18(), Global_262145.f_24670 * 5, 0);
}elseif(func_16()){
ENTITY::SET_ENTITY_HEALTH(func_18(), 1, 0);
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_98.f_159, 1);
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_98.f_159), 700);
}else{
ENTITY::SET_ENTITY_HEALTH(func_18(), Global_262145.f_24670, 0);
}
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_98.f_159, 0);
ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_98.f_159), 1);
PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_98.f_138, 100f, 200f);
STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_98.f_159), 1), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_98.f_159), 2));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_98.f_240);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}
}}}}else{
ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_98.f_159), 0);
if(func_17(Local_98.f_163)){
if(func_17(NETWORK::NET_TO_ENT(Local_98.f_159))){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_98.f_163, NETWORK::NET_TO_OBJ(Local_98.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
MISC::SET_BIT(&(Local_98.f_5), 0);
}}}}}}

int func_403(){
if(func_31()){
return 1;
}
if(func_16()){
return 1;
}
return 0;
}


Vector3 func__404(){
return Global_1962996.f_13;
}

int func_405(){
if(Local_98.f_16==0){
if(!MISC::IS_BIT_SET(Local_98.f_5, 14)){
if((!func_164(PLAYER::PLAYER_ID()) && func_138()) && func_17(func_345())){
Local_98.f_138={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_345(), 1), ENTITY::GET_ENTITY_HEADING(func_345()), -0.7f, 1.6f, 4f) 
};
MISC::SET_BIT(&(Local_98.f_5), 14);
}else{
if(func_138() && func_17(func_345())){
Local_98.f_138={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_345(), 1), ENTITY::GET_ENTITY_HEADING(func_345()), -0.7f, 1.6f, 4f) 
};
}
Local_98.f_138=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138 - 1.5f), (Local_98.f_138 + 1.5f));
Local_98.f_138.f_1=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138.f_1 - 1.5f), (Local_98.f_138.f_1 + 1.5f));
Local_98.f_138.f_2=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138.f_2 + 0.5f), (Local_98.f_138.f_2 + 1.5f));
if(!func_407(Local_98.f_138)){
MISC::SET_BIT(&(Local_98.f_5), 14);
}}}elseif(MISC::IS_BIT_SET(Local_98.f_5, 15)){
Local_98.f_138=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138 - 1.5f), (Local_98.f_138 + 1.5f));
Local_98.f_138.f_1=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138.f_1 - 1.5f), (Local_98.f_138.f_1 + 1.5f));
Local_98.f_138.f_2=MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_98.f_138.f_2 + 0.5f), (Local_98.f_138.f_2 + 1.5f));
if(!func_407(Local_98.f_138)){
MISC::CLEAR_BIT(&(Local_98.f_5), 15);
}}
func_406(Local_98.f_138);
}elseif(Local_98.f_16==1 && !func_407(Local_98.f_138)){
return 1;
}else{
Local_98.f_16=0;
MISC::SET_BIT(&(Local_98.f_5), 15);
}
return 0;
}


void func_406(struct<3> Param0){
var uVar0;
float fVar1;
int iVar2;
var uVar3;
struct<3> Var4;
var uVar5;
int iVar6;
switch (Local_98.f_15){
case 0:
if(func_138()){
if(func_17(func_345())){
uVar0=func_345();
}}
if(func_24() || func_38()){
fVar1=func_215(Local_98.f_240);
}else{
fVar1=(func_215(Local_98.f_240) * 11f);
}
Local_98.f_168=SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, uVar0, 4);
if(Local_98.f_168 !=0){
Local_98.f_15=1;
}
break;
case 1:
iVar6=SHAPETEST::GET_SHAPE_TEST_RESULT(Local_98.f_168, &iVar2, &Var4, &uVar3, &uVar5);
if(iVar6==2){
if(iVar2==0){
Local_98.f_16=1;
Var4={
0f, 0f, 0f 
};
}else{
Local_98.f_16=2;
Local_98.f_168=0;
Local_98.f_15=0;
}}elseif(iVar6==0){
Local_98.f_15=0;
}
break;
}}

int func_407(struct<3> Param0){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1)){
return 1;
}
return 0;
}

int func_408(){
if(func_138()){
return 1;
}
if(func_30() && !func_31()){
return 1;
}
return 0;
}

int func_409(){
if(func_294()){
return Global_1950108.f_529==0;
}
return 0;
}


void func_410(){
if(func_19(PLAYER::PLAYER_ID(), 1, 1)){
Local_98.f_141={
func_258(&Local_98) 
};
if(!func_257(func_404())){
Local_98.f_138={
func_404() 
};
}else{
Local_98.f_138={
func_6(PLAYER::PLAYER_ID()) 
};
Local_98.f_138={
Local_98.f_138, Local_98.f_138.f_1, (Local_98.f_138.f_2 + 1.5f) 
};
}
if(func_70(PLAYER::PLAYER_ID(), 0)){
func_458(1);
}
if(func_70(PLAYER::PLAYER_ID(), 0)){
func_455();
}elseif(((func_453(PLAYER::PLAYER_ID())==2 || func_453(PLAYER::PLAYER_ID())==1) && !MISC::IS_BIT_SET(Global_1969892, 6)) && !MISC::IS_BIT_SET(Global_1969893, 0)){
if(MISC::IS_BIT_SET(Global_2764744, 0)){
func_452(1);
func_444(0, 0);
func_443();
func_391(1);
func_383(1);
}}elseif((func_40() && func_439()) && !MISC::IS_BIT_SET(Global_1969892, 6)){
func_426();
}elseif(MISC::IS_BIT_SET(Global_1969892, 6) && MISC::IS_BIT_SET(Global_1969893, 0)){
func_444(0, 0);
func_391(1);
func_383(1);
}elseif(func_16()){
func_412();
}elseif(func_31() && !func_411()){
HUD::CLEAR_HELP(1);
func_136("PIM_DRONAMOS", -1);
func_298(PLAYER::PLAYER_ID(), 1, 0, 0);
func_383(7);
}elseif(func_257(Local_98.f_135)){
Local_98.f_156=0;
func_391(1);
func_383(1);
}}}


bool func_411(){
return MISC::IS_BIT_SET(Global_1962996, 23);
}


void func_412(){
var uVar0;
struct<3> Var1;
struct<3> Var2;
if((func_397() && !func_425()) && !func_416()){
if(PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 201)){
if(Global_1581970==1){
Local_98.f_82[PLAYER::PLAYER_ID()]=MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
}else{
Local_98.f_82[PLAYER::PLAYER_ID()]=MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
}
if(Global_1581970==1){
uVar0=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), func_375(PLAYER::PLAYER_ID()));
Var1={
ENTITY::GET_ENTITY_BONE_POSTION(func_15(), uVar0) 
};
Local_98.f_144={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) 
};
}elseif(Global_1581970==2){
uVar0=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), func_375(PLAYER::PLAYER_ID()));
Var1={
ENTITY::GET_ENTITY_BONE_POSTION(func_15(), uVar0) 
};
Local_98.f_144={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) 
};
}
Var2={
ENTITY::GET_ENTITY_ROTATION(func_15(), 2) 
};
func_372(Local_98.f_144, (Var2.f_0 + 90f), 180f, Var2.f_2);
func_391(1);
func_415(Local_98.f_82[PLAYER::PLAYER_ID()]);
func_383(1);
func_414();
func_413();
HUD::CLEAR_HELP(1);
}}elseif(!func_17(func_15())){}
if(func_425()){
if(func_194("MP_SUBSEAT_2")){
HUD::CLEAR_HELP(1);
}}}


void func_413(){
Global_2793046.f_349++;
}


void func_414(){
Global_2793046.f_349=0;
Global_2793046.f_349.f_1=0;
}


void func_415(var uParam0){
struct<3> Var0;
int iVar1;
Var0.f_0=-1083616419;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=uParam0;
iVar1=func_191(0, 1);
if(iVar1 !=0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}

int func_416(){
struct<3> Var0;
var uVar1;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0)){
return 1;
}
if(func_424()){
return 1;
}
if(func_423()){
return 1;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 1;
}
if(func_294()){
return 1;
}
if(func_70(PLAYER::PLAYER_ID(), 0)){
if(func_47(Global_1853755)){
return 1;
}}
if(func_138()){
if(func_422()){
if(func_421()){
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 28)){
return 1;
}}}
if(func_16()){
if((func_420() && Global_1581970==1) || (func_419() && Global_1581970==2)){
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 28)){
return 1;
}
if(!func_17(func_15())){
return 1;
}
Var0={
ENTITY::GET_ENTITY_COORDS(func_15(), 1) 
};
if(Var0.f_2 <=-3f){
return 1;
}
uVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_15(), -1, 0);
if(func_17(uVar1)){
if(PED::IS_PED_A_PLAYER(uVar1)){
if(func_198(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1))){
return 1;
}}}}
if(func_198(PLAYER::PLAYER_ID())){
return 1;
}
if(func_76(0)){
return 1;
}
if(func_309()){
return 1;
}
if(func_138()){
if(func_39()){
if(func_19(PLAYER::PLAYER_ID(), 1, 1)){
if(func_155(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f){
return 1;
}
if(func_418()){
return 1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_417(PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}}
if(func_196()){
return 1;
}
if(Global_262145.f_24680){
return 1;
}
if(MISC::IS_BIT_SET(Local_98.f_5, 27)){
return 1;
}
if(func_70(PLAYER::PLAYER_ID(), 0)){
if(func_17(func_345())){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_345(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_345(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_345(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0)){
return 1;
}}else{
return 1;
}}
if(Global_1581965){
return 1;
}
if(Global_2766483){
return 1;
}
if(Global_2766480){
return 1;
}
return 0;
}

int func_417(int iParam0, int iParam1){
if(iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))){
return 0;
}
if(TASK::GET_IS_TASK_ACTIVE(iParam0, 2)){
return 1;
}
if(PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) !=0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) !=0){
return 1;
}
return 0;
}

int func_418(){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0)){
return 1;
}
return 0;
}

int func_419(){
if(PLAYER::PLAYER_ID()==func_12()){
return 0;
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=func_12() && PLAYER::PLAYER_ID() !=func_12()){
return MISC::IS_BIT_SET(Global_1853910[Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 /*862*/].f_267.f_479, 2);
}
return 0;
}

int func_420(){
if(PLAYER::PLAYER_ID()==func_12()){
return 0;
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=func_12() && PLAYER::PLAYER_ID() !=func_12()){
return MISC::IS_BIT_SET(Global_1853910[Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 /*862*/].f_267.f_479, 1);
}
return 0;
}

int func_421(){
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=func_12() && PLAYER::PLAYER_ID() !=func_12()){
return MISC::IS_BIT_SET(Global_1853910[Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 /*862*/].f_267.f_365, 20);
}
return 0;
}

int func_422(){
if(func_164(PLAYER::PLAYER_ID()) && Global_1962996.f_5==-1){
return 0;
}
return 1;
}

int func_423(){
if(Global_2672505.f_947.f_5==-1){
return 0;
}
return 1;
}


bool func_424(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_425(){
char* sVar0;
sVar0="anim@scripted@submarine@ig28_submarine_turret_control@male@";
if(func_62(PLAYER::PLAYER_PED_ID())){
sVar0="anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
}
if((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))){
return 1;
}
return 0;
}


void func_426(){
struct<3> Var0;
var uVar1;
if(!func_416()){
if((((((func_438() || func_437()) && !Global_1935176) && func_439()) && !MISC::IS_BIT_SET(Global_2764622, 6)) && Global_1574965) && !(func_438() && Global_262145.f_26644)){
if((((((PAD::IS_CONTROL_JUST_PRESSED(2, 224) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 19)){
if(MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26646, 0, 0, 1, -1, 0) || MISC::IS_BIT_SET(Global_2764622, 2)){
MISC::SET_BIT(&Global_2764622, 0);
func_444(0, 0);
func_391(1);
func_383(1);
func_433();
func_431(73, -1);
func_428();
Var0={
func_427() 
};
func_372(Var0, 0f, 0f, 0f);
if(func_438()){
AUDIO::PLAY_SOUND_FROM_ENTITY(uVar1, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
}}elseif(!MISC::IS_BIT_SET(Global_2764622, 4)){
MISC::SET_BIT(&Global_2764622, 4);
}}}}}


Vector3 func__427(){
float fVar0;
float fVar1;
float fVar2;
struct<3> Var3;
fVar0=0f;
fVar1=6f;
fVar2=6f;
Var3={
2800f, -3800.2f, 170f 
};
if((Global_4718592.f_160097.f_1==3 || Global_4718592.f_160097.f_1==3) || Global_4718592.f_160097.f_1==3){
Var3.f_1=-3860f;
}
fVar1=(fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
fVar2=(fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
fVar1=(fVar1 - (8f * fVar2));
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}


void func_428(){
int iVar0;
iVar0=func_429(73, -1);
if(iVar0 >=50){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_372.f_3), 13);
}else{
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_372.f_3), 13);
}}

int func_429(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850194[iParam0 /*3*/][func_430(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_430(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_118();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


void func_431(int iParam0, int iParam1){
int iVar0;
iVar0=func_429(iParam0, func_430(iParam1));
iVar0++;
func_432(iParam0, iVar0, iParam1);
}


void func_432(int iParam0, int iParam1, var uParam2){
int iVar0;
iVar0=Global_2850194[iParam0 /*3*/][func_430(uParam2)];
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}


void func_433(){
func_434(1, 7985);
}


void func_434(int iParam0, int iParam1){
int iVar0;
if(iParam0 <=0){
return;
}
iVar0=func_436(iParam1, -1, 0);
func_435(iParam1, (iVar0 + iParam0), -1, 1, 0);
}


void func_435(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_430(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_436(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_430(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__437(){
return Global_2694554;
}

int func_438(){
if(Global_2694553 >=0 && Global_2694553 < 10){
return 1;
}
return 0;
}

int func_439(){
int iVar0;
int iVar1;
if(func_442() && !func_441()){
return 1;
}
iVar0=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(iVar0 >=4 || iVar0 < 0){
iVar0=0;
}
iVar1=Global_1058070.f_14[iVar0];
if(iVar1 < 17){
if((((MISC::IS_BIT_SET(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 23) && MISC::IS_BIT_SET(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 24)) && MISC::IS_BIT_SET(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 25)) && MISC::IS_BIT_SET(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 26)) && MISC::IS_BIT_SET(Global_4718592.f_32, 16)){
return 1;
}}
if(!MISC::IS_BIT_SET(Global_4718592.f_32, 16)){
return 1;
}elseif(func_437() || func_440(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}


var func__440(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_441(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}


var func__442(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


void func_443(){
MISC::CLEAR_BIT(&Global_2764744, 0);
}


void func_444(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
Local_98.f_119=Global_262145.f_24673;
Local_98.f_130=40f;
if(func_38() || func_24()){
Local_98.f_119=(Local_98.f_119 * 4.5f);
}elseif(func_35()){
Local_98.f_119=100f;
Local_98.f_130=26f;
}elseif(func_30()){
Local_98.f_119=100f;
Local_98.f_130=70f;
}elseif(func_160()){
Local_98.f_119=10f;
Local_98.f_130=35f;
}elseif(func_16()){
Local_98.f_119=149f;
Local_98.f_130=16f;
}
if(func_38()){
Local_98.f_240=joaat("xs_prop_arena_drone_01");
}elseif(func_24()){
Local_98.f_240=joaat("xs_prop_arena_drone_02");
}elseif(func_35()){
Local_98.f_240=joaat("xs_prop_arena_airmissile_01a");
func_451(1);
}elseif(func_30()){
if(!func_31()){
iVar0=func_450(PLAYER::PLAYER_ID());
switch (iVar0){
case 37:
Local_98.f_240=joaat("ch_prop_arcade_drone_01d");
break;
case 38:
Local_98.f_240=joaat("ch_prop_arcade_drone_01a");
break;
case 39:
Local_98.f_240=joaat("ch_prop_arcade_drone_01c");
break;
case 40:
Local_98.f_240=joaat("ch_prop_arcade_drone_01b");
break;
}}else{
Local_98.f_240=joaat("ch_prop_casino_drone_01a");
}}elseif(func_160()){
Local_98.f_240=joaat("ch_prop_casino_drone_01a");
}elseif(func_16()){
Local_98.f_240=joaat("h4_prop_h4_airmissile_01a");
func_451(1);
}else{
Local_98.f_240=joaat("ba_prop_battle_drone_quad");
}
if(bParam1){
Local_98.f_138={
Local_98.f_144 
};
}
Global_1962996.f_1=1500;
func_449();
func_448(1);
func_447(1);
if(func_38() || func_83()){
func_446(1);
}elseif(func_24()){
func_446(0);
}
if(func_31()){
Local_98.f_158="ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
STREAMING::REQUEST_ANIM_DICT(Local_98.f_158);
}
if(func_24()){
STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
}
if(func_31()){
func_445(Global_262145.f_28792);
}elseif(func_30() && !func_31()){
func_445(Global_262145.f_28793);
}elseif(func_16()){
func_445(to_float(Global_262145.f_30188));
iVar1=0;
while (iVar1 <=31){
Local_98.f_46[iVar1]=-1;
iVar1++;
}}elseif(!func_138() && !func_340()){
func_445(200f);
}
func_86(Global_1837208);
if(bParam0){}}


void func_445(float fParam0){
if(Global_1962996.f_8 !=fParam0){
Global_1962996.f_8=fParam0;
}}


void func_446(bool bParam0){
if(bParam0){
if(!func_192()){
MISC::SET_BIT(&Global_1962996, 8);
}}elseif(func_192()){
MISC::CLEAR_BIT(&Global_1962996, 8);
}}


void func_447(bool bParam0){
if(bParam0){
if(!func_356()){
MISC::SET_BIT(&Global_1962996, 2);
}}elseif(func_356()){
MISC::CLEAR_BIT(&Global_1962996, 2);
}}


void func_448(bool bParam0){
if(bParam0){
if(!func_247()){
MISC::SET_BIT(&Global_1962996, 4);
}}elseif(func_247()){
MISC::CLEAR_BIT(&Global_1962996, 4);
}}


void func_449(){
if(!Local_98.f_156){
Local_98.f_18=100;
}
if(func_160()){
Local_98.f_24=100;
}
Local_98.f_19=0;
Local_98.f_20=100;
Local_98.f_125=90f;
Local_98.f_128=90f;
if(!func_83()){
Local_98.f_170=GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
}elseif(func_16()){
Local_98.f_170=func_111();
}else{
Local_98.f_170=func_110();
}
if(func_38()){
Local_98.f_157="DLC_Arena_Drone_Sounds";
}elseif(func_24()){
Local_98.f_157="DLC_Arena_Battle_Drone_Sounds";
}elseif(func_35()){
Local_98.f_157="DLC_Arena_Piloted_Missile_Sounds";
}elseif(func_16()){
Local_98.f_157="DLC_H4_Piloted_Missile_Sounds";
}else{
Local_98.f_157="DLC_BTL_Drone_Sounds";
}}

int func_450(int iParam0){
if(iParam0 !=func_12()){
return Global_2657589[iParam0 /*466*/].f_439.f_1;
}
return -1;
}


void func_451(bool bParam0){
if(bParam0){
if(!func_203()){
MISC::SET_BIT(&Global_1962996, 15);
}}elseif(func_203()){
MISC::CLEAR_BIT(&Global_1962996, 15);
}}


void func_452(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 4)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 4);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 4)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 4);
}}

int func_453(int iParam0){
if(iParam0==PLAYER::PLAYER_ID() && !func_454()){
return Global_2764649.f_1;
}
return Global_2648605.f_1399[iParam0 /*3*/].f_1;
}

int func_454(){
if(((Global_2764652 !=0 && Global_2764652==Global_2764653) && Global_2764641 !=3) && Global_2764641 !=1){
return 0;
}
return 1;
}


void func_455(){
if(!func_416()){
if(func_41()){
if(func_400()){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_457("DRONE_TRIG");
}}elseif(func_194("DRONE_TRIG")){
HUD::CLEAR_HELP(1);
}
if(func_41() || func_399()){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176)){
func_391(1);
func_383(1);
HUD::CLEAR_HELP(1);
}}elseif(func_194("DRONE_TRIG")){
if((PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Local_98.f_156=0;
func_391(1);
func_383(1);
HUD::CLEAR_HELP(1);
}}}elseif((func_39() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_400()){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_457("DRONE_TRIG");
}
if(func_194("DRONE_TRIG")){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)){
Local_98.f_156=0;
func_391(1);
func_383(1);
HUD::CLEAR_HELP(1);
}}}elseif(func_194("DRONE_TRIG")){
HUD::CLEAR_HELP(1);
}
if(func_456() || func_41()){
if(func_194("DRONE_TRIG")){
HUD::CLEAR_HELP(1);
}}}elseif(func_194("DRONE_TRIG")){
HUD::CLEAR_HELP(1);
}}

int func_456(){
if((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))){
return 1;
}
if((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)){
return 1;
}
return 0;
}


void func_457(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_458(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 1)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 1);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 1)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 1);
}}


void func_459(){
char* sVar0;
if(Local_98.f_45==-1){
return;
}
if(!func_461(Local_98.f_45) && !func_460(Local_98.f_45)){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96[Local_98.f_45 /*3*/].f_2)){
sVar0="scr_xs_props";
STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0)){
if(!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_174[Local_98.f_45])){
GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
if(func_461(Local_98.f_45)){
Local_98.f_174[Local_98.f_45]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
}else{
Local_98.f_174[Local_98.f_45]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
}}}}elseif(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_174[Local_98.f_45])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_98.f_174[Local_98.f_45], 0);
}}

int func_460(int iParam0){
if(iParam0 !=func_12()){
if(Local_96[iParam0 /*3*/].f_1==8){
return 1;
}}
return 0;
}

int func_461(int iParam0){
if(iParam0 !=func_12()){
if(Local_96[iParam0 /*3*/].f_1==4){
return 1;
}}
return 0;
}


void func_462(){
if(!func_479(6) && !func_465()){
return;
}
if(Local_98.f_45 !=-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96[Local_98.f_45 /*3*/].f_2) && func_17(NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2))){
if(func_464(Local_98.f_45)){
Local_98.f_157="DLC_Arena_Drone_Sounds";
}elseif(func_463(Local_98.f_45)){
Local_98.f_157="DLC_Arena_Battle_Drone_Sounds";
}elseif(func_461(Local_98.f_45)){
Local_98.f_157="DLC_Arena_Piloted_Missile_Sounds";
}elseif(func_460(Local_98.f_45)){
Local_98.f_157="DLC_H4_Piloted_Missile_Sounds";
}else{
Local_98.f_157="DLC_BTL_Drone_Sounds";
}
if(Local_98.f_46[Local_98.f_45]==-1){
Local_98.f_46[Local_98.f_45]=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_98.f_46[Local_98.f_45], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_96[Local_98.f_45 /*3*/].f_2), Local_98.f_157, 0, 0);
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_46[Local_98.f_45], "DroneRotationalSpeed", 1f);
}else{
AUDIO::SET_VARIABLE_ON_SOUND(Local_98.f_46[Local_98.f_45], "DroneRotationalSpeed", 1f);
}}elseif(Local_98.f_46[Local_98.f_45] !=-1){
AUDIO::STOP_SOUND(Local_98.f_46[Local_98.f_45]);
AUDIO::RELEASE_SOUND_ID(Local_98.f_46[Local_98.f_45]);
Local_98.f_46[Local_98.f_45]=-1;
}}}

int func_463(int iParam0){
if(iParam0 !=func_12()){
if(Local_96[iParam0 /*3*/].f_1==2){
return 1;
}}
return 0;
}

int func_464(int iParam0){
if(iParam0 !=func_12()){
if(Local_96[iParam0 /*3*/].f_1==3){
return 1;
}}
return 0;
}


bool func_465(){
return MISC::IS_BIT_SET(Global_1950108.f_7, 14);
}


void func_466(){
int iVar0;
var uVar1;
char* sVar2;
var uVar3;
var uVar4;
if(Local_98.f_45==-1){
return;
}
iVar0=Local_98.f_45;
if(!func_19(iVar0, 1, 1)){
return;
}
if(!func_479(6) && !func_465()){
return;
}
if(MISC::IS_BIT_SET(Local_98.f_117, Local_98.f_45)){
uVar1=func_467(Global_2657589[Local_98.f_45 /*466*/].f_321.f_10);
if(!func_17(uVar1)){
return;
}
sVar2="scr_ih_sub";
STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2)){
if(!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_207[iVar0])){
GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
uVar3=func_375(iVar0);
uVar4=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar1, uVar3);
Local_98.f_207[iVar0]=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_374(iVar0), 0f, 0f, 0f, uVar4, 5f, 0, 0, 0);
}elseif(!func_25(&(Local_98.f_281[iVar0 /*2*/]))){
func_23(&(Local_98.f_281[iVar0 /*2*/]), 0, 0);
GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_98.f_207[iVar0], "flame", 0.15f, 0);
}
if(func_25(&(Local_98.f_281[iVar0 /*2*/]))){
if(func_22(&(Local_98.f_281[iVar0 /*2*/]), 3000, 0)){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_207[iVar0])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_98.f_207[iVar0], 0);
}
func_21(&(Local_98.f_281[iVar0 /*2*/]));
MISC::CLEAR_BIT(&(Local_98.f_117), Local_98.f_45);
}elseif(func_22(&(Local_98.f_281[iVar0 /*2*/]), 2000, 0)){
GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_98.f_207[iVar0], "flame", 0f, 0);
}}}}}

int func_467(int iParam0){
if(iParam0 !=func_12()){
if(ENTITY::DOES_ENTITY_EXIST(Global_1968178[iParam0])){
return Global_1968178[iParam0];
}}
return -1;
}


void func_468(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar1=SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
switch (iVar1){
case 186:
if(!func_479(6)){
func_470(iVar0);
}
break;
case 174:
SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
switch (iVar2){
case -1083616419:
if(Global_1669394.f_832){
return;
}
func_469(iVar0);
break;
}
break;
}
iVar0++;
}}


void func_469(int iParam0){
struct<3> Var0;
if(!func_479(6) && !func_465()){
return;
}
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3)){
if(Var0.f_1 !=func_12()){
Local_98.f_82[Var0.f_1]=Var0.f_2;
MISC::SET_BIT(&(Local_98.f_117), Var0.f_1);
}}}


void func_470(int iParam0){
struct<2> Var0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_98.f_159)==Var0.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
if(PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() !=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)){
Local_98.f_26=2;
}}}}}}}


void func_471(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_159), 0)){
Local_98.f_150={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_159), 1) 
};
Local_98.f_124=ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_98.f_159));
if(!func_25(&(Local_98.f_261))){
func_23(&(Local_98.f_261), 0, 0);
}elseif(func_22(&(Local_98.f_261), 1000, 0)){
if(!func_373(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_432, Local_98.f_150, 0)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_432={
Local_98.f_150 
};
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_435 !=ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_98.f_159))){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_435=ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_98.f_159));
}
func_21(&(Local_98.f_261));
}}}
if(func_17(Local_98.f_163)){
if(ENTITY::IS_ENTITY_VISIBLE(Local_98.f_163)){
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_163, false, 0);
}}
if(func_17(Local_98.f_161)){
if(ENTITY::IS_ENTITY_VISIBLE(Local_98.f_161)){
ENTITY::SET_ENTITY_VISIBLE(Local_98.f_161, false, 0);
}}}


void func_472(){
if(func_479(4)){
if((((func_138() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16()){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
func_298(PLAYER::PLAYER_ID(), 1, 0, 0);
}}
PAD::DISABLE_CONTROL_ACTION(0, 37, 0);
if(func_16()){
func_475();
}
if(!func_35()){
func_473();
PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
PAD::ENABLE_CONTROL_ACTION(0, 166, 1);
PAD::ENABLE_CONTROL_ACTION(0, 167, 1);
PAD::ENABLE_CONTROL_ACTION(0, 168, 1);
PAD::ENABLE_CONTROL_ACTION(0, 169, 1);
PAD::ENABLE_CONTROL_ACTION(2, 218, 1);
PAD::ENABLE_CONTROL_ACTION(2, 219, 1);
PAD::ENABLE_CONTROL_ACTION(2, 220, 1);
PAD::ENABLE_CONTROL_ACTION(2, 221, 1);
PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
PAD::ENABLE_CONTROL_ACTION(2, 209, 1);
PAD::ENABLE_CONTROL_ACTION(2, 210, 1);
PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
if(func_16()){
PAD::ENABLE_CONTROL_ACTION(2, 20, 1);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(2, 235, 1);
PAD::ENABLE_CONTROL_ACTION(2, 234, 1);
PAD::ENABLE_CONTROL_ACTION(2, 1, 1);
PAD::ENABLE_CONTROL_ACTION(2, 174, 1);
PAD::ENABLE_CONTROL_ACTION(2, 175, 1);
PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
PAD::ENABLE_CONTROL_ACTION(0, 245, 1);
PAD::ENABLE_CONTROL_ACTION(0, 246, 1);
PAD::ENABLE_CONTROL_ACTION(0, 247, 1);
PAD::ENABLE_CONTROL_ACTION(0, 248, 1);
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
PAD::ENABLE_CONTROL_ACTION(0, 189, 1);
PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
PAD::ENABLE_CONTROL_ACTION(2, 217, 1);
}}}}


void func_473(){
func_474();
}


void func_474(){
int iVar0;
iVar0=0;
while (iVar0 < 363){
PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
iVar0++;
}}


void func_475(){
Global_23131.f_6=1;
}


void func_476(){
if(MISC::IS_BIT_SET(Local_98.f_5, 28)){
if(!func_25(&(Local_98.f_263))){
func_23(&(Local_98.f_263), 0, 0);
}elseif(func_22(&(Local_98.f_263), 5000, 0)){
MISC::CLEAR_BIT(&(Local_98.f_5), 28);
func_21(&(Local_98.f_263));
}}}


void func_477(){
int iVar0;
if(MISC::IS_BIT_SET(Local_98.f_5, 27)){
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=func_12()){
iVar0=Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10;
}elseif(Global_1853755 !=func_12()){
iVar0=Global_1853755;
}elseif(func_279(PLAYER::PLAYER_ID(), 0)){
if(func_166() !=func_12()){
iVar0=func_166();
}}
if(iVar0 !=func_12()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_178(iVar0, 0, 1, 0);
MISC::CLEAR_BIT(&(Local_98.f_5), 27);
}}}}}


void func_478(){
struct<3> Var0;
if(func_138()){
if(func_479(1)){
if(func_17(func_345())){
Var0={
ENTITY::GET_ENTITY_COORDS(func_345(), 1) 
};
PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_98.f_150, 60f, 30);
}}}
if(func_479(1) || func_479(4)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
if(CAM::DOES_CAM_EXIST(Local_98.f_169) && CAM::IS_CAM_RENDERING(Local_98.f_169)){
if(func_479(4)){
if(!func_257(Local_98.f_150)){
PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_98.f_150, 60f, 200f);
INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
STREAMING::SET_FOCUS_POS_AND_VEL(Local_98.f_150, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_98.f_159)));
if((MISC::GET_FRAME_COUNT() % 120)==0){
PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_98.f_150, 60f, 30);
}}}}}}}


bool func_479(int iParam0){
return Local_98.f_241==iParam0;
}

int func_480(){
if(func_485()){
return 1;
}
if(!func_306()){
return 1;
}
if(PLAYER::PLAYER_ID() !=func_12()){
if(!func_484()){
if(func_265(PLAYER::PLAYER_ID()) && !func_264()){
return 1;
}}}
if(func_200(PLAYER::PLAYER_ID())){
return 1;
}
if(func_10(PLAYER::PLAYER_ID())){
return 1;
}
if(func_484()){
if(func_483()){
return 1;
}
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(func_40()){
return 1;
}
if(!func_482() && !func_481()){
if(func_22(&(Local_98.f_279), 10000, 0)){
return 1;
}}else{
func_21(&(Local_98.f_279));
}}
return 0;
}

int func_481(){
if(Global_1962996.f_22 !=func_12()){
if(Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10 !=func_12()){
if(func_17(Global_1968178[Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10])){
if(func_19(PLAYER::PLAYER_ID(), 1, 1)){
if(vdist2(func_6(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1968178[Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10], 1)) < 490000f){
return 1;
}}}}}
return 0;
}

int func_482(){
int iVar0;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(MISC::IS_BIT_SET(Local_96[iVar0 /*3*/], 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_483(){
return MISC::IS_BIT_SET(Global_1962996, 22);
}


bool func_484(){
return MISC::IS_BIT_SET(Global_1962996.f_2, 9);
}


bool func_485(){
return MISC::IS_BIT_SET(Global_1962996, 0);
}

int func_486(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_493()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_492()){
return 1;
}
if(func_491(159)){
if(!func_490()){
return 1;
}}
if(func_491(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_487() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_487())==0){
return 1;
}}
return 0;
}

int func_487(){
switch (func_489()){
case 0:
return func_488();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_488(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_489(){
return Global_32163;
}


bool func_490(){
return Global_2683864.f_698;
}

int func_491(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_492(){
return Global_2694526;
}


bool func_493(){
return Global_2683864.f_693;
}


void func_494(){
wait(0);
}


void func_495(bool bParam0){
if(!func_484()){
func_502(bParam0);
}else{
func_496();
}}


void func_496(){
Global_1962996.f_22=func_12();
func_21(&(Local_98.f_279));
func_501(0);
func_500(0);
func_499(0);
func_498(0);
func_497();
}


void func_497(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_498(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 9)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 9);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 9)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 9);
}}


void func_499(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996, 21)){
MISC::SET_BIT(&Global_1962996, 21);
}}elseif(MISC::IS_BIT_SET(Global_1962996, 21)){
MISC::CLEAR_BIT(&Global_1962996, 21);
}}


void func_500(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996, 22)){
MISC::SET_BIT(&Global_1962996, 22);
}}elseif(MISC::IS_BIT_SET(Global_1962996, 22)){
MISC::CLEAR_BIT(&Global_1962996, 22);
}}


void func_501(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_307, 31)){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_307), 31);
}}elseif(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_307, 31)){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_307), 31);
}}


void func_502(bool bParam0){
var uVar0;
struct<8> Var1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
struct<8> Var6;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_159)){
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_98.f_159, 1);
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_159)){
if(!MISC::IS_BIT_SET(Local_98.f_6, 2)){
if(func_83()){
if(func_17(PLAYER::PLAYER_PED_ID())){
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
}else{
FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
}
PAD::SET_CONTROL_SHAKE(0, 300, round((200f * Local_98.f_131)));
MISC::SET_BIT(&(Local_98.f_6), 2);
}}
STREAMING::CLEAR_FOCUS();
uVar0=NETWORK::NET_TO_OBJ(Local_98.f_159);
NETWORK::NETWORK_FADE_OUT_ENTITY(uVar0, 0, 1);
OBJECT::DELETE_OBJECT(&uVar0);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_98.f_159);
return;
}}
if(func_30() && !func_31()){
Var1=-1;
Var1.f_6=1073741824;
Var1.f_7=-1073741824;
Var1.f_3=0;
Var1.f_4=0;
func_525(&Var1, 11);
}
if(func_194("DRONE_TRIG")){
HUD::CLEAR_HELP(1);
}
if(func_17(Local_98.f_161)){
uVar2=Local_98.f_161;
PED::DELETE_PED(&uVar2);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_98.f_162)){
OBJECT::DELETE_OBJECT(&(Local_98.f_162));
}
if(HUD::DOES_BLIP_EXIST(Local_98.f_171)){
HUD::REMOVE_BLIP(&(Local_98.f_171));
}
if(HUD::DOES_BLIP_EXIST(Local_98.f_172)){
HUD::REMOVE_BLIP(&(Local_98.f_172));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_98.f_163)){
VEHICLE::DELETE_VEHICLE(&(Local_98.f_163));
}
HUD::THEFEED_SHOW();
HUD::UNLOCK_MINIMAP_ANGLE();
HUD::UNLOCK_MINIMAP_POSITION();
HUD::SET_RADAR_ZOOM_PRECISE(0f);
if(func_239()){
func_238(0);
}
func_522();
func_327(1, -1);
func_521();
if(func_31()){
func_335(0);
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_160)){
uVar3=NETWORK::NET_TO_OBJ(Local_98.f_160);
OBJECT::DELETE_OBJECT(&uVar3);
}
if(!bParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_98.f_158)){
STREAMING::REMOVE_ANIM_DICT(Local_98.f_158);
}
func_520(0);
}
func_248(0);
if(func_519() && (!func_265(PLAYER::PLAYER_ID()) || func_264())){
func_298(PLAYER::PLAYER_ID(), 1, 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
}
Local_98.f_120=0f;
Local_98.f_121=0f;
Local_98.f_12=0;
Local_98.f_14=0;
Local_98.f_10=0;
Local_98.f_16=0;
func_21(&(Local_98.f_245));
func_21(&(Local_98.f_247));
if(!Local_98.f_156){
func_21(&(Local_98.f_249));
}
func_21(&(Local_98.f_253));
func_21(&(Local_98.f_251));
func_21(&(Local_98.f_255));
func_21(&(Local_98.f_259));
func_21(&(Local_98.f_265));
func_21(&(Local_98.f_263));
func_21(&(Local_98.f_261));
func_21(&(Local_98.f_267));
func_21(&(Local_98.f_269));
func_21(&(Local_98.f_271));
func_21(&(Local_98.f_275));
func_21(&(Local_98.f_277));
func_21(&(Local_98.f_257));
func_21(&(Local_98.f_346));
if(PLAYER::PLAYER_ID() !=func_12()){
func_21(&(Local_98.f_281[PLAYER::PLAYER_ID() /*2*/]));
}
Local_98.f_28=0;
Local_98.f_5=0;
Local_98.f_6=0;
Global_1962996.f_4=-1;
func_518(-1f);
func_445(0f);
func_245(0);
func_448(0);
func_517(0);
func_446(0);
func_222(0);
func_516(0);
func_176(0);
func_515(0);
func_514(0);
func_513(0);
func_72(1);
func_292(0);
func_290(0);
func_296(0);
func_451(0);
func_372(0f, 0f, 0f, 0f, 0f, 0f);
func_512();
Global_1962996.f_24=-1;
MISC::CLEAR_BIT(&Global_2764622, 0);
MISC::CLEAR_BIT(&Global_1969893, 0);
func_383(0);
if(!func_511(0)){
func_288();
}
if(func_75()){
func_108("SET_WARNING_IS_VISIBLE", 0);
if(func_138() || func_16()){
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=func_12() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10)){
iVar4=Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10;
}elseif((func_138() && Global_1853755 !=func_12()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1853755)){
iVar4=Global_1853755;
}elseif((func_16() && Global_1853756 !=func_12()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1853756)){
iVar4=Global_1853756;
}elseif(func_279(PLAYER::PLAYER_ID(), 0)){
if(func_166() !=func_12() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_166())){
iVar4=func_166();
}}
if(iVar4 !=func_12()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_138()){
func_178(iVar4, 0, 1, 0);
}elseif(func_16()){
func_178(iVar4, 0, 8, Global_1581970);
}
MISC::SET_BIT(&(Local_98.f_5), 28);
}else{
MISC::SET_BIT(&(Local_98.f_5), 27);
}}else{
MISC::SET_BIT(&(Local_98.f_5), 27);
}}elseif(func_30() || func_160()){
func_21(&Global_1962942);
func_510(300000);
func_509(1);
MISC::SET_BIT(&(Local_98.f_5), 28);
}
func_390(0);
func_389(0);
MISC::CLEAR_BIT(&(Local_96[PLAYER::PLAYER_ID() /*3*/]), 0);
iVar5=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_98.f_173));
if(func_30() || func_160()){
Var6.f_7=Global_786547;
Var6.f_1=Global_786547.f_1;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
Var6.f_0=Global_4718592.f_113724;
}else{
Var6.f_0=func_507(PLAYER::PLAYER_ID());
}
Var6.f_6=1;
Var6.f_4=Local_98.f_27;
Var6.f_5=Local_98.f_29;
Var6.f_3=iVar5;
Var6.f_2=Local_98.f_26;
STATS::PLAYSTATS_HEIST3_DRONE(&Var6);
}else{
STATS::PLAYSTATS_DRONE_USAGE(iVar5, Local_98.f_26, Local_98.f_27);
}
if(func_16()){
func_505(2, func_506());
}}
func_504();
func_391(0);
func_263(0);
func_185(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_98.f_170));
if(func_180(1) !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_180(1));
}
if(func_180(0) !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_180(0));
}
func_384(0);
func_327(1, -1);
Local_98.f_26=0;
Local_98.f_27=0;
Local_98.f_29=0;
EVENT::REMOVE_SHOCKING_EVENT(Local_98.f_28);
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_174[PLAYER::PLAYER_ID()])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_98.f_174[PLAYER::PLAYER_ID()], 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_98.f_207[PLAYER::PLAYER_ID()])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_98.f_207[PLAYER::PLAYER_ID()], 0);
}
if(!bParam0){
if(!func_164(PLAYER::PLAYER_ID())){
func_503(0f, 0f, 0f, 0f);
}
Global_1962996.f_2=0;
func_497();
}else{
func_444(0, 1);
}}


void func_503(struct<3> Param0, float fParam1){
if(!func_373(Global_1962996.f_10, Param0, 0)){
Global_1962996.f_10={
Param0 
};
Global_1962996.f_7=fParam1;
}}


void func_504(){
int iVar0;
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_41)){
AUDIO::STOP_SOUND(Local_98.f_41);
AUDIO::RELEASE_SOUND_ID(Local_98.f_41);
Local_98.f_41=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_30)){
AUDIO::STOP_SOUND(Local_98.f_30);
AUDIO::RELEASE_SOUND_ID(Local_98.f_30);
Local_98.f_30=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_31)){
AUDIO::STOP_SOUND(Local_98.f_31);
AUDIO::RELEASE_SOUND_ID(Local_98.f_31);
Local_98.f_31=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_32)){
AUDIO::STOP_SOUND(Local_98.f_32);
AUDIO::RELEASE_SOUND_ID(Local_98.f_32);
Local_98.f_32=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_33)){
AUDIO::STOP_SOUND(Local_98.f_33);
AUDIO::RELEASE_SOUND_ID(Local_98.f_33);
Local_98.f_33=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_34)){
AUDIO::STOP_SOUND(Local_98.f_34);
AUDIO::RELEASE_SOUND_ID(Local_98.f_34);
Local_98.f_34=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_40)){
AUDIO::STOP_SOUND(Local_98.f_40);
AUDIO::RELEASE_SOUND_ID(Local_98.f_40);
Local_98.f_40=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_39)){
AUDIO::STOP_SOUND(Local_98.f_39);
AUDIO::RELEASE_SOUND_ID(Local_98.f_39);
Local_98.f_39=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_38)){
AUDIO::STOP_SOUND(Local_98.f_38);
AUDIO::RELEASE_SOUND_ID(Local_98.f_38);
Local_98.f_38=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_37)){
AUDIO::STOP_SOUND(Local_98.f_37);
AUDIO::RELEASE_SOUND_ID(Local_98.f_37);
Local_98.f_37=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_36)){
AUDIO::STOP_SOUND(Local_98.f_36);
AUDIO::RELEASE_SOUND_ID(Local_98.f_36);
Local_98.f_36=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_35)){
AUDIO::STOP_SOUND(Local_98.f_35);
AUDIO::RELEASE_SOUND_ID(Local_98.f_35);
Local_98.f_35=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_42)){
AUDIO::STOP_SOUND(Local_98.f_42);
AUDIO::RELEASE_SOUND_ID(Local_98.f_42);
Local_98.f_42=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_43)){
AUDIO::STOP_SOUND(Local_98.f_43);
AUDIO::RELEASE_SOUND_ID(Local_98.f_43);
Local_98.f_43=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_81)){
AUDIO::STOP_SOUND(Local_98.f_81);
AUDIO::RELEASE_SOUND_ID(Local_98.f_81);
Local_98.f_81=-1;
}
if(!AUDIO::HAS_SOUND_FINISHED(Local_98.f_115)){
AUDIO::STOP_SOUND(Local_98.f_115);
AUDIO::RELEASE_SOUND_ID(Local_98.f_115);
Local_98.f_115=-1;
}
if(func_484()){
iVar0=0;
while (iVar0 <=31){
if(Local_98.f_46[iVar0] !=-1){
AUDIO::STOP_SOUND(Local_98.f_46[iVar0]);
AUDIO::RELEASE_SOUND_ID(Local_98.f_46[iVar0]);
Local_98.f_46[iVar0]=-1;
}
iVar0++;
}}
func_157();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene")){
AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene")){
AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene")){
AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene")){
AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene")){
AUDIO::STOP_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
}}


void func_505(int iParam0, var uParam1){
if(Global_2793046.f_349 > 0 || Global_2793046.f_349.f_1 > 0){
STATS::PLAYSTATS_SUB_WEAP(iParam0, uParam1, Global_2793046.f_349, Global_2793046.f_349.f_1);
}
func_414();
}


bool func_506(){
return Global_1853756==PLAYER::PLAYER_ID();
}

int func_507(int iParam0){
if(func_158(iParam0)==243){
return func_508(iParam0);
}
return -1;
}

int func_508(int iParam0){
if(func_159(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}


void func_509(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365, 20)){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365), 20);
}}elseif(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365, 20)){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_365), 20);
}}


void func_510(int iParam0){
if(Global_1962996.f_5 !=iParam0){
Global_1962996.f_5=iParam0;
}}


bool func_511(int iParam0){
return Local_98.f_242==iParam0;
}


void func_512(){
if(func_172()){
MISC::CLEAR_BIT(&Global_1962996, 7);
}}


void func_513(bool bParam0){
if(bParam0){
if(func_75()){
if(!MISC::IS_BIT_SET(Global_1962996, 16)){
MISC::SET_BIT(&Global_1962996, 16);
}}}elseif(MISC::IS_BIT_SET(Global_1962996, 16)){
MISC::CLEAR_BIT(&Global_1962996, 16);
}}


void func_514(bool bParam0){
if(bParam0){
if(!func_485()){
MISC::SET_BIT(&Global_1962996, 6);
}}elseif(func_485()){
MISC::CLEAR_BIT(&Global_1962996, 6);
}}


void func_515(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996, 3)){
MISC::SET_BIT(&Global_1962996, 3);
}}elseif(MISC::IS_BIT_SET(Global_1962996, 3)){
MISC::CLEAR_BIT(&Global_1962996, 3);
}}


void func_516(bool bParam0){
if(bParam0){
if(!func_395()){
MISC::SET_BIT(&Global_1962996, 10);
}}elseif(func_395()){
MISC::CLEAR_BIT(&Global_1962996, 10);
}}


void func_517(bool bParam0){
if(bParam0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0){
if(!func_485()){
MISC::SET_BIT(&Global_1962996, 0);
}}}elseif(func_485()){
MISC::CLEAR_BIT(&Global_1962996, 0);
}}


void func_518(float fParam0){
if(Global_1962996.f_9 !=fParam0){
Global_1962996.f_9=fParam0;
}}

int func_519(){
if(!func_306()){
return 0;
}
if(func_11(PLAYER::PLAYER_ID())){
return 0;
}
if(!func_75()){
return 0;
}
if(func_83()){
return 0;
}
return 1;
}


void func_520(bool bParam0){
if(bParam0){
if(!func_31()){
MISC::SET_BIT(&Global_1962996, 24);
}}elseif(func_31()){
MISC::CLEAR_BIT(&Global_1962996, 24);
}}


void func_521(){
if(CAM::DOES_CAM_EXIST(Local_98.f_169)){
CAM::DESTROY_CAM(Local_98.f_169, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(!func_37() || MISC::IS_BIT_SET(Local_98.f_6, 0)){
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}}}


void func_522(){
if(CAM::DOES_CAM_EXIST(Local_98.f_169)){
if(func_524(PLAYER::PLAYER_ID())){
func_523(0);
}}}


void func_523(bool bParam0){
if(bParam0){
Global_1950108.f_3654=bParam0;
}
if(!Global_1950108.f_3653){
Global_1950108.f_3653=1;
}}

int func_524(int iParam0){
if(iParam0 !=func_12()){
if(func_19(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_19(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}


void func_525(var uParam0, int iParam1){
struct<8> Var0;
bool bVar1;
bool bVar2;
int iVar3;
Var0.f_5=1073741824;
Var0.f_6=-1073741824;
Var0.f_0=-1254288422;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3=uParam0->f_3;
Var0.f_4=uParam0->f_4;
Var0.f_5=uParam0->f_6;
Var0.f_6=uParam0->f_7;
Var0.f_7=uParam0->f_8;
bVar1=false;
if(iParam1==11){
if(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_439, 1)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_439), 1);
bVar1=true;
}}
uParam0->f_5=0;
if(!func_25(&(uParam0->f_1))){
func_23(&(uParam0->f_1), 0, 0);
}
bVar2=true;
if(*uParam0==iParam1 && !bVar1){
if(func_25(&(uParam0->f_1)) && !func_22(&(uParam0->f_1), 1000, 0)){
bVar2=false;
}else{
func_21(&(uParam0->f_1));
}}else{
*uParam0=iParam1;
func_21(&(uParam0->f_1));
}
if(bVar2){
iVar3=func_8(PLAYER::PLAYER_ID());
if(iVar3 !=-1){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, iVar3);
uParam0->f_5=1;
}}}


void func_526(struct<9> Param0, var uParam1, var uParam2, var uParam3){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0.f_0);
func_535(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_97, 1, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_96, 97, 0);
if(!func_534()){
func_495(0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_484()){
Local_98.f_135={
Param0.f_2 
};
switch (Param0.f_1){
case 1:
if(ENTITY::DOES_ENTITY_EXIST(func_345()) && !ENTITY::IS_ENTITY_DEAD(func_345(), 0)){
Local_98.f_144={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_345(), 1), ENTITY::GET_ENTITY_HEADING(func_345()), 0f, 1.6f, 2.9f) 
};
Local_98.f_138={
Local_98.f_144 
};
}
func_458(1);
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=1;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=1;
break;
case 2:
func_533(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=2;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=2;
break;
case 3:
func_532(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=3;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=3;
break;
case 4:
func_452(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=4;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=4;
break;
case 5:
func_531(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=5;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=5;
break;
case 6:
func_530(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=6;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=6;
break;
case 8:
func_529(1);
Local_98.f_144={
Param0.f_5 
};
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=8;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=8;
break;
case 9:
func_498(1);
Local_96[PLAYER::PLAYER_ID() /*3*/].f_1=9;
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97=9;
break;
default:
func_528(1);
Local_98.f_144={
Param0.f_5 
};
break;
}
Local_98.f_141={
Param0.f_8 
};
if(func_257(func_404())){
func_372(Local_98.f_144, 0f, 0f, 0f);
}}}else{
func_495(0);
}
if(!func_484()){
func_444(1, 1);
}else{
func_527();
}}


void func_527(){
int iVar0;
iVar0=0;
while (iVar0 <=31){
Local_98.f_46[iVar0]=-1;
iVar0++;
}
func_383(6);
}


void func_528(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 0)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 0);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 0)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 0);
}}


void func_529(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 8)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 8);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 8)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 8);
}}


void func_530(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 6)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 6);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 6)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 6);
}}


void func_531(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 5)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 5);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 5)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 5);
}}


void func_532(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 3)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 3);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 3)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 3);
}}


void func_533(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1962996.f_2, 2)){
Global_1962996.f_2=0;
MISC::SET_BIT(&(Global_1962996.f_2), 2);
}}elseif(MISC::IS_BIT_SET(Global_1962996.f_2, 2)){
MISC::CLEAR_BIT(&(Global_1962996.f_2), 2);
}}

int func_534(){
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
if(func_493()){
return 0;
}
if(func_491(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_535(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_497();
}else{
return 0;
}}
if(!func_536(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_497();
}else{
return 0;
}}
if(func_493()){
if(!bParam2){
func_497();
}else{
return 0;
}}
if(func_491(157)){
if(!bParam2){
func_497();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_497();
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
func_497();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_497();
}else{
return 0;
}}
return 1;
}


bool func_536(bool bParam0){
if(bParam0){}
return Global_1575035;
}