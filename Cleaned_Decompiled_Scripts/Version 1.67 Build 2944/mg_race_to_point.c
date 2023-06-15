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
float fLocal_59=0f;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
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
int iLocal_88=0;
int iLocal_89=0;
struct<24> Local_90={
0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
struct<4> Local_94[32];
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
bool bLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
int iLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
int iLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
struct<4> Local_114={
0, 0, 0, 0 
};
struct<3> Local_115={
0, 0, 0 
};
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=-1134206910;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
struct<21> Local_141={
5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_142=0;
var uLocal_143=0;
int iLocal_144=0;
struct<3> Local_145={
0, 0, 0 
};
var uLocal_146=0;
var uLocal_147=0;
int iLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
int iLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
struct<21> Local_160={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
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
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_16="NULL";
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
fLocal_59=((0.05f + 0.275f) - 0.01f);
iLocal_88=10;
iLocal_89=1;
iLocal_100=1;
iLocal_108=-1;
iLocal_111=-1;
iLocal_144=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_584(ScriptParam_160)){
func_577();
}
if(!MISC::IS_PC_VERSION()){
if(func_576()){
func_577();
}}
if(Global_60666 || Global_75816){
func_577();
}}
while (true){
func_575();
iLocal_104=0;
iLocal_105=0;
if(func_568()){
func_577();
}
if(!func_533(0, 0, 0)){
func_577();
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() !=iLocal_149){
func_577();
}
if(func_522(0)){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=2;
}
switch (func_521(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
func_515(0);
func_513(0, -1, 0);
if(!func_576()){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=1;
}elseif(func_512(&uLocal_112, 5000, 0)){
func_577();
}
if(func_511()==4){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=3;
}
break;
case 1:
if(func_511()==1){
func_33();
}elseif(func_511()==0){
if(func_576()){
func_577();
}}elseif(func_511()==4){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=3;
}
if(func_28()){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
}
break;
case 3:
func_26(&(Local_90.f_23));
if(func_25(&(Local_90.f_23))){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
}
break;
case 2:
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
case 4:
func_577();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_511()){
case 0:
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
Local_90.f_0=1;
break;
case 1:
func_23();
func_3();
if(func_1()){
Local_90.f_0=4;
}
break;
case 4:
break;
}}}}

int func_1(){
if(func_2()){
return 1;
}
return 0;
}

int func_2(){
if(Local_90.f_22==0){
if(MISC::IS_BIT_SET(Local_90.f_1, 3)){
return 1;
}}
return 0;
}


void func_3(){
switch (Local_90.f_22){
case 0:
if(func_14()){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
func_4(Local_90.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
Local_90.f_22=1;
}
break;
case 1:
Local_90.f_13=NETWORK::GET_NETWORK_TIME();
Local_90.f_22=2;
break;
case 2:
if(Local_90.f_2 !=-1){
Local_90.f_22=3;
}
break;
case 3:
Local_90.f_22=4;
break;
case 4:
break;
}}


void func_4(struct<3> Param0, int iParam1, int iParam2){
struct<4> Var0;
Var0.f_0=-221407512;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3={
Param0 
};
if(!iParam2==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 13, iParam2);
}}

int func_5(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_13(iVar2, 1, 1) && func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar2)==iParam0 || (Global_1853988[PLAYER::PLAYER_ID() /*867*/]==0 && func_6(iParam0, PLAYER::GET_PLAYER_TEAM(bVar2), 0, -1))){
if(bVar2 !=PLAYER::PLAYER_ID()){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar2), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1), 1) <=IntToFloat(iParam1)){
MISC::SET_BIT(&uVar0, iVar1);
}}}}
bVar1++;
}
return uVar0;
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
if(iParam2==1){
if(iParam0==iParam1){
return 1;
}
return 0;
}
if((iParam0 > -1 && iParam1 > -1) && iParam0==iParam1){
return 1;
}
if(((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4){
bVar0=Global_1058071.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0)){
bVar1=Global_1058071.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 15);
default:
}
break;
}
return 0;
}

int func_7(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3)){
return 0;
}
iVar0=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}
iVar5=0;
iVar5=0;
while (iVar5 <=31){
iVar1=iVar5;
if(((!func_13(iVar1, 1, 1) || func_9(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_8(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(PED::IS_PED_INJURED(uVar2)){
}else{
iVar3=ENTITY::GET_ENTITY_MODEL(iVar2);
if(iVar4==joaat("mp_f_freemode_01") || iVar4==joaat("mp_m_freemode_01")){
if(iVar3==joaat("mp_f_freemode_01") || iVar3==joaat("mp_m_freemode_01")){
return 1;
}else{
return 0;
}}elseif(iVar4 !=iVar3){
return 0;
}}}
iVar5++;
}
return iVar0;
}


var func__8(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}


bool func_9(bool bParam0, int iParam1){
bool bVar0;
if(!func_12(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_10(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_10(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_11();
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

int func_11(){
return Global_1574918;
}

int func_12(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 < 0){
return 0;
}
if(iVar0 >=32){
return 0;
}
return 1;
}

int func_13(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
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

int func_14(){
if(func_20()){
return 0;
}
if(Local_141.f_14 !=4){
return 0;
}
if(MISC::IS_BIT_SET(Local_90.f_1, 7) && !MISC::IS_BIT_SET(Local_90.f_1, 9)){
return 0;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f){
return 0;
}
if(func_16(func_17(), 0f, 0f, 0f, 0) || func_16(func_17(), 0f, 0f, -2000f, 0)){
return 0;
}
if(func_15() || iLocal_104){
if(Local_90.f_14 >=2){
if(((Local_90.f_15[2] <=0 || Local_90.f_15[2] > iLocal_88) && !HUD::IS_WAYPOINT_ACTIVE()) && !MISC::IS_BIT_SET(Local_90.f_1, 10)){
return 0;
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
return 1;
}}}
return 0;
}

int func_15(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176)){
return 1;
}
return 0;
}


bool func_16(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


Vector3 func__17(){
struct<3> Var0;
switch (Local_90.f_15[2]){
case 0:
if(HUD::IS_WAYPOINT_ACTIVE()){
Var0={
HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) 
};
Var0.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((Var0.f_0 - 5f), (Var0.f_1 - 5f), (Var0.f_0 + 5f), (Var0.f_1 + 5f));
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, Var0, 1) > 1000f){
if(!MISC::IS_BIT_SET(Local_90.f_1, 7)){
func_19();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(1);
MISC::SET_BIT(&(Local_90.f_1), 7);
}
return Var0;
}}
return Local_90.f_10;
break;
case 1:
func_19();
return 15.072f, -1121.513f, 27.8034f;
break;
case 2:
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0 && !MISC::IS_BIT_SET(Global_2794162.f_1831, 24)){
func_19();
return func_18(11, 0);
}else{
func_19();
return Global_2794162.f_261;
}
break;
case 3:
func_19();
return -1151.037f, -1620.84f, (3.2754f + 3f);
break;
case 4:
func_19();
return 132.931f, -1305.746f, 28.1664f;
break;
case 5:
func_19();
return 2054.093f, 3935.84f, 32.1771f;
break;
case 6:
func_19();
return 514.7371f, 5532.385f, 774.9705f;
break;
case 7:
func_19();
return -1340.363f, -3041.919f, 12.9444f;
break;
case 8:
func_19();
return -2352.071f, 3423.654f, 27.8667f;
break;
case 9:
func_19();
return 54.7835f, 7243.388f, 1.5166f;
break;
case 10:
func_19();
return 675.3948f, 1203.25f, 322.2605f;
break;
}
func_19();
return 0f, 0f, -2000f;
}


Vector3 func__18(int iParam0, int iParam1){
switch (iParam0){
case 11:
return -1370.398f, 56.4489f, 52.5023f;
break;
case 122:
return -1154.816f, -2716.453f, 18.8923f;
break;
case 13:
switch (iParam1){
case 0:
return 16.3823f, -1099.956f, 28.797f;
case 1:
return 817.6979f, -2161.982f, 28.619f;
default:
}
break;
case 12:
switch (iParam1){
case 0:
return -1162.552f, -1628.393f, 3.3739f;
case 1:
return 479.8226f, -234.8953f, 52.7934f;
case 2:
return -1237.39f, 333.6207f, 78.9863f;
case 3:
return -2870.161f, 9.0811f, 10.6081f;
case 4:
return -939.5128f, -1255.697f, 6.9671f;
case 5:
return -1618.915f, 249.326f, 58.5552f;
case 6:
return -1369.999f, -117.22f, 49.7046f;
default:
}
break;
case 15:
switch (iParam1){
case 0:
return 904.329f, -173.7431f, 73.0754f;
case 1:
return 1440.432f, -2215.596f, 60.133f;
case 2:
return -83.8271f, -1330.888f, 28.2913f;
case 3:
return 366.4715f, -2446.227f, 5.1129f;
case 4:
return 1222.72f, 2721.2f, 37.0042f;
case 5:
return 1051.479f, 2667.29f, 38.5509f;
case 6:
return 273.371f, 2607.768f, 43.7028f;
case 7:
return -193.7423f, 6277.675f, 30.4892f;
case 8:
return 1687.137f, 4966.838f, 42.0569f;
case 9:
return 2343.971f, 3134.054f, 47.2088f;
default:
}
break;
case 14:
switch (iParam1){
case 0:
return 1994.783f, 3049.323f, 46.1123f;
default:
}
break;
}
return 0f, 0f, 0f;
}


void func_19(){
if(MISC::IS_BIT_SET(Local_90.f_1, 7)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
MISC::CLEAR_BIT(&(Local_90.f_1), 7);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
}
if(MISC::IS_BIT_SET(Local_90.f_1, 8)){
PED::SPAWNPOINTS_CANCEL_SEARCH();
MISC::CLEAR_BIT(&(Local_90.f_1), 8);
}
if(MISC::IS_BIT_SET(Local_90.f_1, 9)){
MISC::CLEAR_BIT(&(Local_90.f_1), 9);
}}

int func_20(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 1;
}
if(func_22(8, -1)){
return 1;
}
if(func_21(0)){
return 1;
}
return 0;
}

int func_21(int iParam0){
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


bool func_22(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_23(){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
int iVar4;
bool bVar5;
bool bVar6;
int iVar7;
fVar2=999999f;
MISC::SET_BIT(&(Local_90.f_1), 2);
MISC::SET_BIT(&(Local_90.f_1), true);
MISC::CLEAR_BIT(&(Local_90.f_1), false);
MISC::SET_BIT(&(Local_90.f_1), 3);
MISC::SET_BIT(&(Local_90.f_1), 6);
Local_90.f_14=0;
if(Local_90.f_22==0){
iLocal_92=0;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
bVar6=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
iVar7=PLAYER::GET_PLAYER_PED(bVar6);
Local_90.f_14++;
if(MISC::IS_BIT_SET(Local_90.f_1, 3)){
if(ENTITY::IS_ENTITY_AT_COORD(iVar7, Local_90.f_4, 350f, 350f, 350f, 0, 1, 0)){
MISC::CLEAR_BIT(&(Local_90.f_1), 3);
}}
if(func_13(bVar6, 1, 1)){
MISC::CLEAR_BIT(&(Local_90.f_1), 2);
MISC::SET_BIT(&(Local_90.f_1), false);
if(Global_2794162.f_28.f_81==1 && Global_2794162.f_28.f_46==0){
fVar3=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar7, 1), Local_90.f_7, 1);
if(fVar3 < fVar2){
if(func_24(iVar7)){
fVar2=fVar3;
Local_90.f_2=iVar0;
}}}
if(Local_90.f_22==0){
iLocal_92=(iLocal_92 + Local_94[iVar0 /*4*/].f_2);
}elseif(Local_90.f_22==2){
bVar5=bVar6;
iVar4=Global_2794162.f_28.f_47[bVar5];
if(Global_2794162.f_28.f_46==1){
if(func_512(&uLocal_158, 750, 0)){
if(iVar4 !=0){
if(iVar4 < iVar1 || iVar1==0){
iVar1=iVar4;
Local_90.f_2=iVar0;
}}
}}}}else{
MISC::CLEAR_BIT(&(Local_90.f_1), true);
}}
iVar0++;
}
if(Local_90.f_22==0){
if(iLocal_92 > Global_262145.f_176){
iLocal_92=Global_262145.f_176;
}
if(Local_90.f_3 !=iLocal_92){
iLocal_99=1;
Local_90.f_3=iLocal_92;
}
if(Local_90.f_3 < round((50f * Global_262145.f_178))){
Local_90.f_3=round((50f * Global_262145.f_178));
}}}

int func_24(int iParam0){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
iVar2=0;
while (iVar2 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uVar0) + 1){
uVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, (iVar2 - 1), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(!PED::IS_PED_INJURED(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(iVar3 !=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3))){
return 0;
}}}else{
return 1;
}
}}}
iVar2++;
}}}
return 1;
}

int func_25(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_26(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_27(uParam0, 0, 0);
}}}


void func_27(var uParam0, bool bParam1, bool bParam2){
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

int func_28(){
if(Local_90.f_22==0){
if(!func_13(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(func_32() !=0){
return 1;
}
if(func_31()){
return 1;
}
if(Global_1574964==1){
return 1;
}
if(Global_1836377==1){
return 1;
}
if(Global_60666){
return 1;
}
if(Global_75816){
return 1;
}
if(HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 1;
}
if(MISC::IS_BIT_SET(Global_2794162.f_4697, 16)){
MISC::CLEAR_BIT(&(Global_2794162.f_4697), 16);
return 1;
}
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90.f_4, 350f, 350f, 350f, 0, 1, 0)){
if(!func_16(func_17(), 0f, 0f, 0f, 0) && !func_16(func_17(), 0f, 0f, -2000f, 0)){
return 1;
}}elseif(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90.f_4, 300f, 300f, 300f, 0, 1, 0)){
if(!func_30(&uLocal_153)){
func_27(&uLocal_153, 0, 0);
}}elseif(func_30(&uLocal_153)){
func_29(&uLocal_153);
HUD::CLEAR_HELP(1);
}}
return 0;
}


void func_29(var uParam0){
uParam0->f_1=0;
}


bool func_30(var uParam0){
return uParam0->f_1;
}


bool func_31(){
return Global_100885.f_394 > 0;
}

int func_32(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}


void func_33(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
switch (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3){
case 0:
func_515(0);
func_510();
func_509();
func_508(&Local_145);
func_505();
NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(!MISC::IS_BIT_SET(uLocal_95, 4)){
if(HUD::DOES_BLIP_EXIST(uLocal_96)){
iVar0=func_503(PLAYER::PLAYER_ID());
iVar1=func_501(Local_90.f_4, Local_90.f_7);
if(MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, 0, 0, 0, -1, 0)){
if(iVar0 < iVar1){
if(iVar0 > 0){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=iVar0;
}else{
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=0;
}}else{
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=iVar1;
}
}
else{
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=0;
}
iLocal_99=1;
MISC::SET_BIT(&uLocal_95, 4);
}else{
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=round((50f * Global_262145.f_178));
}}
func_239();
iVar2=PLAYER::PLAYER_ID();
if(MISC::IS_BIT_SET(Global_1890739[iVar2 /*138*/].f_14, 0)){
func_577();
}}
if(Local_90.f_22 > 0){
if(func_238()){
func_237();
}
func_236();
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
func_233(1, -1);
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=1;
}
break;
case 1:
func_515(0);
func_508(&Local_145);
if(!MISC::IS_BIT_SET(uLocal_95, 3)){
if(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0){
if(func_232()){
func_221(1564537328, Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, &uVar3, 0, 0, 0);
}else{
func_218(-Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 0);
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, "RaceToPoint", 0, 0);
}}
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
func_217(1);
func_216(1);
Local_115={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Global_2794162.f_28.f_80=1;
func_215(2, 1);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0){
Global_1853988[PLAYER::PLAYER_ID() /*867*/]=32;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2=32;
}
func_206(2, 0, 1);
MISC::SET_BIT(&uLocal_95, 3);
}
if(Local_90.f_22 > 1 && func_205(&Local_145)){
if(func_194(&Local_145, 1, 0, 1, 3, 1, 1, 0)){
Local_145.f_1=0;
func_193(&(Local_145.f_2));
func_192(&Local_145);
Global_2794162.f_28.f_80=0;
HUD::SET_MISSION_NAME(1, "R2P_MENU");
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=2;
}elseif(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, 7.5f, 7.5f, 7.5f, 0, 1, 0)){
Local_145.f_1=0;
func_193(&(Local_145.f_2));
func_192(&Local_145);
MISC::SET_BIT(&uLocal_95, 7);
func_191(27, "R2P_DQBIG", "R2P_DQSTR", 1, -1, 2, 1, 0);
func_577();
}}
break;
case 2:
func_509();
func_189();
if(Local_90.f_2 > -1){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}
break;
case 3:
func_34();
break;
case 4:
func_577();
break;
}}


void func_34(){
struct<8> Var0;
var uVar1;
int iVar2;
int iVar3;
if(!MISC::IS_BIT_SET(uLocal_95, 1)){
Var0.f_0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_4={
Local_90.f_4 
};
Var0.f_7={
Local_90.f_7 
};
if(Local_90.f_2==NETWORK::PARTICIPANT_ID_TO_INT()){
uVar1=func_188(12028, -1) + 1;
func_187(12028, uVar1, -1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
if(iLocal_92 > Global_262145.f_176){
iLocal_92=Global_262145.f_176;
}
if(Local_90.f_3 < round((50f * Global_262145.f_178))){
Local_90.f_3=round((50f * Global_262145.f_178));
}
iVar2=Local_90.f_3;
func_170(&iVar2, 1);
if(iVar2 > 0){
if(func_232()){
func_221(-1027218631, iVar2, &iVar3, 0, 0, 0);
StringCopy(&(Global_4535172[iVar3 /*85*/].f_14.f_26), "mg_race_to_point", 32);
}else{
func_218(iVar2, 0);
MONEY::NETWORK_EARN_FROM_JOB(iVar2, "mg_race_to_point");
}}
func_120(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", -1636175450, 883210409, round((150f * Global_262145.f_4249)), 1, -1, 0, 0, 0);
func_119(25, Local_90.f_3, "R2P_IWSTR", 0, 1, -1, -1082130432, 2, 0);
Var0.f_3=1;
STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 150, Local_90.f_3, &Var0);
func_116(joaat("mpply_race_2_point_wins"), 1);
func_111(54, 1, -1);
}else{
func_92(26, "R2P_ILSTR", PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_2))), 1, -1, 0, 2);
Var0.f_3=0;
STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 0, 0, &Var0);
if(Local_90.f_2 !=-1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_2))){
func_41("R2P_PWTIC", NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_2)), 0, 0, 0, 1, 0);
}}
func_116(joaat("mpply_race_2_point_lost"), 1);
}
if(HUD::DOES_BLIP_EXIST(uLocal_96)){
HUD::REMOVE_BLIP(&uLocal_96);
}
GRAPHICS::DELETE_CHECKPOINT(uLocal_97);
func_39(42023, 1);
func_37(21);
func_35();
MISC::SET_BIT(&uLocal_95, true);
}elseif(func_512(&uLocal_151, 7500, 0)){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=4;
}}


void func_35(){
int iVar0;
iVar0=func_36(50);
Global_2645174[iVar0 /*83*/]=50;
StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_36(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645174[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645174[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}


void func_37(int iParam0){
int iVar0;
if(Global_262145.f_9208){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_38() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_38(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_39(int iParam0, int iParam1){
func_40(iParam0, iParam1, -1);
}


void func_40(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_11();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_41(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
struct<16> Var2;
int iVar3;
int iVar4;
iVar0=-1;
iVar1=PLAYER::GET_PLAYER_TEAM(bParam1);
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam3){
if(func_12(bParam1)){
if(!bParam2){
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if((iVar1 !=-1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4){
if(Global_4718592.f_112316[iVar1] !=-1){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_90(iVar1, bParam1, 0));
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_50(bParam1, -2, 1, 0, 0));
}}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_50(bParam1, -2, 1, 0, 0));
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_48(&Var2));
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764376={
func_47(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376)){
iVar3=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764306.f_22), "Leader") && Global_2764306.f_30==0){
iVar3=1;
}
if(Global_2764306.f_21 > 0){
iVar4=0;
}else{
iVar4=1;
}
if(bParam5){
if(bParam6){
Var2={
func_46(&Var2) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar3, 0, Global_2764306, &Var2, Global_1576220, Global_1576221, Global_1576222);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar3, 0, Global_2764306, Global_1576220, Global_1576221, Global_1576222);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_42(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
}}
return iVar0;
}


void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_45() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_9(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_43(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944768.f_5[iVar0 /*53*/]=iParam0;
Global_1944768.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944768.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944768.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944768.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944768.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944768.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_43(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_44(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944768++;
if(Global_1944768 > 5){
Global_1944768=5;
return Global_1944768;
}
return (Global_1944768 - 1);
}


void func_44(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_45(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_46(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}
struct<13> func_47(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


var func__48(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_49(&cVar0);
}


var func__49(char[4] cParam0){
return cParam0;
}

int func_50(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(!func_12(iParam0)){
return 1;
}
if(func_88(iParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_112316[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_88(PLAYER::PLAYER_ID()) || (func_87() && func_86())) && !MISC::IS_BIT_SET(Global_2794162.f_4697, 31)) && !bParam4){
uVar1=func_85();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(uVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_13(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_90(iParam1, bParam0, 0);
}else{
return func_62(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_62(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_90(iParam1, bParam0, 0);
}else{
return func_51(0, -1, 0);
}}else{
return func_51(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_90(iParam1, bParam0, 0);
}else{
return func_62(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_62(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_51(bool bParam0, int iParam1, bool bParam2){
return func_52(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_52(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_61() || (func_60() && func_58())) && Global_1665516.f_1){
if(bParam1){
return func_57(iParam2, iVar0);
}else{
return func_57(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_6(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_56(1);
}else{
return func_56(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_53(iVar0, iParam2, 1, 4);
}else{
return func_53(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_56(1);
}
return func_56(0);
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_55(iParam0, iParam1, iParam3);
if(func_54(Global_4718592.f_117591, 1)){
if(iVar0==1){
iVar0=0;
}}
if(bParam2){
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
case 3:
return 31;
case 4:
return 32;
case 5:
return 33;
case 6:
return 34;
case 7:
return 35;
case 8:
return 36;
case 9:
return 37;
case 10:
return 38;
case 11:
return 39;
case 12:
return 40;
case 13:
return 41;
case 14:
return 42;
case 15:
return 43;
default:}}else{
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
}
default:
}
return 28;
}

int func_54(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(Global_4718592.f_171044==65){
return 1;
}}
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(iParam0==Global_262145.f_9658[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_55(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_6(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_56(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_57(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_55(iParam1, iParam0, 4);
}
switch (iParam0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
default:
}
return 28;
}

int func_58(){
if(func_59()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_175236, 4);
}


bool func_59(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_60(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_175236, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_61(){
if(func_59() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_62(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
}else{
iVar0=iParam2;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148){
bVar1=true;
}
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853988[iVar2 /*867*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_72()){
iVar3=func_67(bParam0);
if(!iVar3==-1){
return func_65(iVar3);
}}
if((func_64(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_6(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_56(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_63(1);
}else{
return func_52(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836600 || Global_1836590) || Global_1853988[bParam0 /*867*/]==0){
if(bParam0==bParam1 || (Global_1836600==1 && Global_1836610==0)){
return func_56(1);
}else{
return func_52(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836594 && Global_1836080.f_14==bParam0){
return 28;
}}
iVar4=func_67(bParam0);
if(!iVar4==-1){
return func_65(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_63(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_64(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(bParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}

int func_65(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_66(iParam0);
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


var func__66(int iParam0){
return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_67(int iParam0){
if(func_12(iParam0)){
if(func_70(iParam0, 1)){
return Global_2648711.f_818.f_11[func_68(iParam0)];
}}
return -1;
}

int func_68(int iParam0){
if(func_12(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_69();
}

int func_69(){
return -1;
}


bool func_70(int iParam0, bool bParam1){
if(!func_12(iParam0)){
return 0;
}
if(!bParam1){
if(func_71(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_69();
}

int func_71(int iParam0){
if(func_12(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_69()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_72(){
if(((((((func_84() || func_83()) || func_82()) || func_81()) || func_80()) || func_78()) || func_76()) || func_73()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_73(){
return func_74(Global_4718592.f_117591);
}

int func_74(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_75(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_75(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_76(){
return func_77(Global_4718592.f_117591);
}

int func_77(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31922[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_78(){
return func_79(Global_4718592.f_117591);
}

int func_79(int iParam0){
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


var func__80(){
return Global_2683883.f_24;
}


var func__81(){
return Global_2683883.f_21;
}


bool func_82(){
return Global_2683883.f_19;
}


var func__83(){
return Global_2683883.f_18;
}


var func__84(){
return Global_2683883.f_17;
}


var func__85(){
return Global_2621446.f_2;
}


var func__86(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__87(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_88(int iParam0){
if(func_9(iParam0, 0)){
return 1;
}
if(func_89()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_89(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_90(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058071.f_14[iParam0];
if(func_72()){
iVar2=func_67(iParam1);
if(!iVar2==-1){
return func_65(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_69()){
if(Global_4718592.f_112316[iParam0] !=-1 && Global_4718592.f_112316[iParam0] <=4){
if(Global_4718592.f_112316[iParam0]==0){
iVar0=15;
}elseif(Global_4718592.f_112316[iParam0]==1){
iVar0=18;
}elseif(Global_4718592.f_112316[iParam0]==2){
iVar0=24;
}elseif(Global_4718592.f_112316[iParam0]==4){
if(MISC::IS_BIT_SET(Global_4718592.f_15, 29)){
iVar0=21;
}else{
iVar0=6;
}}else{
iVar0=Global_4718592.f_112316[iParam0];
}}else{
iVar0=func_52(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_91(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_6(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_63(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_91(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_4718592.f_171203;
break;
case 1:
iVar0=Global_4718592.f_171204;
break;
case 2:
iVar0=Global_4718592.f_171205;
break;
case 3:
iVar0=Global_4718592.f_171206;
break;
}
switch (iVar0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
case 4:
return 6;
case 5:
return 9;
case 6:
return 3;
case 7:
return 1;
case 8:
return 12;
case 9:
return 2;
default:
}
return 2;
}

int func_92(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_110(iParam0, &Var0, -1, sParam1, sParam5);
StringCopy(&(Var0.f_25), sParam2, 64);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam6;
return func_93(&Var0);
}

int func_93(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672524.f_2836){
return 0;
}}
func_109(uParam0, uParam0->f_17);
func_106(uParam0);
if(func_82()){
func_106(uParam0);
}
if(func_105(uParam0->f_1)){
func_98();
if(Global_2672524.f_2514[0 /*80*/].f_2==0){
Global_2672524.f_2514[0 /*80*/]={
*uParam0 
};
if(func_97(uParam0->f_69, 8192)){
Global_1935885=1;
}
return 1;
}
if(((Global_2672524.f_2514[0 /*80*/].f_1==13 || Global_2672524.f_2514[0 /*80*/].f_1==53) || Global_2672524.f_2514[0 /*80*/].f_1==54) || Global_2672524.f_2514[0 /*80*/].f_1==58){
Global_2672524.f_2514[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672524.f_2514[iVar0 + 1 /*80*/]={
Global_2672524.f_2514[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672524.f_2514[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2==0){
Global_2672524.f_2514[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_98();
}
return 1;
}else{
if(uParam0->f_1==1){
func_95(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_97(uParam0->f_69, 128)){
if(func_94(Global_2672524.f_2514[iVar0 /*80*/].f_1)){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_95(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_94(int iParam0){
switch (iParam0){
case 88:
case 87:
case 91:
case 92:
case 86:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}


void func_95(var uParam0, int iParam1){
func_96(uParam0, iParam1);
}


void func_96(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_97(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_98(){
bool bVar0;
if(Global_2672524.f_2837){
return;
}
if(!Global_78958){
Global_78958=1;
bVar0=true;
}elseif(Global_78959){
Global_78959=0;
bVar0=true;
}
func_99();
if(bVar0){
Global_78958=0;
}}


void func_99(){
Global_2672524.f_2838=0;
Global_2672524.f_2838.f_582=0;
func_103(&(Global_2672524.f_2838.f_1));
Global_2672524.f_2838.f_1.f_1=0;
func_100(&(Global_2672524.f_2838.f_1), 1);
}


void func_100(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78958){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78960){
if(CAM::IS_SCREEN_FADED_OUT() && !func_102(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_101(0);
}


void func_101(int iParam0){
Global_78950=iParam0;
Global_78951=iParam0;
}

int func_102(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_103(var uParam0){
func_104(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_104(var uParam0){
uParam0->f_547=1f;
uParam0->f_546=0;
uParam0->f_572=0f;
uParam0->f_562=0;
uParam0->f_30=0f;
uParam0->f_548=0f;
uParam0->f_563=0f;
uParam0->f_564=0f;
uParam0->f_545=0;
uParam0->f_567=0;
uParam0->f_576=0;
uParam0->f_568=0;
uParam0->f_569=0;
uParam0->f_570=0;
*uParam0=0.1125f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_578=0;
uParam0->f_579=0;
uParam0->f_577=1f;
}

int func_105(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_106(var uParam0){
if(func_108(uParam0->f_1)){
uParam0->f_72=func_107();
}}

int func_107(){
return 21;
}

int func_108(int iParam0){
switch (iParam0){
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
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
case 81:
case 82:
case 83:
return 1;
default:
}
return 0;
}


void func_109(var uParam0, int iParam1){
if(func_108(uParam0->f_1)){
uParam0->f_73=1;
}
if(iParam1==func_69() || !func_13(iParam1, 0, 1)){
return;
}
if(func_94(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_50(iParam1, -2, 0, 0, 0);
}}}


void func_110(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_69();
uParam1->f_18=func_69();
uParam1->f_19=func_69();
uParam1->f_20=func_69();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=iParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}


void func_111(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_114(iParam0, func_115(iParam2));
iVar0=(iVar0 + iParam1);
func_112(iParam0, iVar0, iParam2);
}


void func_112(var uParam0, int iParam1, var uParam2){
int iVar0;
iVar0=func_113(uParam0, uParam2);
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}


var func__113(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(8, uParam0, func_115(uParam1));
}

int func_114(var uParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_113(uParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_115(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_11();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


void func_116(int iParam0, int iParam1){
int iVar0;
iVar0=func_118(iParam0);
iVar0=(iVar0 + iParam1);
func_117(iParam0, iVar0);
}


void func_117(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_118(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_119(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_110(iParam0, &Var0, iParam1, sParam2, sParam3);
Var0.f_71=iParam4;
Var0.f_6=iParam5;
Var0.f_7=iParam6;
Var0.f_72=iParam7;
if(iParam8 !=0){
func_95(&(Var0.f_69), iParam8);
}
return func_93(&Var0);
}

int func_120(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_121(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10){
int iVar0;
var uVar1;
iVar0=func_131(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_127(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
}}}else{
func_122(iParam1, iVar0, sParam8, uParam10);
}
return iVar0;
}


void func_122(int iParam0, int iParam1, char* sParam2, var uParam3){
struct<3> Var0;
Var0={
func_125(iParam0, 1) 
};
if(iParam0==func_124(PLAYER::PLAYER_PED_ID())){
func_123(1);
}
func_127(Var0, iParam1, 0, sParam2, uParam3);
}


void func_123(int iParam0){
Global_2672524.f_1682=iParam0;
}

int func_124(var uParam0){
return uParam0;
}


Vector3 func__125(int iParam0, bool bParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(CAM::IS_GAMEPLAY_CAM_RENDERING()){
Var1={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
}
if(iParam0==func_126(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
fVar2=0f;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar2=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar2=Var1.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
if(bParam1){
fVar5=(Var4.f_2 + 0.18f);
}else{
fVar5=(Var3.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) 
};
return Var0;
}

int func_126(var uParam0){
return uParam0;
}


void func_127(struct<3> Param0, int iParam1, int iParam2, char* sParam3, var uParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672524.f_1081[iVar0 /*30*/].f_6==0 || Global_2672524.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672524.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672524.f_1081[iVar1 /*30*/].f_6=1;
Global_2672524.f_1081[iVar1 /*30*/].f_4=func_130(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672524.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672524.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672524.f_1081[iVar1 /*30*/].f_9=func_129();
Global_2672524.f_1081[iVar1 /*30*/].f_10=func_128();
StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672524.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam4);
}}}

int func_128(){
if(Global_2672524.f_1682){
Global_2672524.f_1682=0;
return 1;
}
Global_2672524.f_1682=0;
return 0;
}


var func__129(){
var uVar0;
uVar0=Global_2672524.f_1684;
Global_2672524.f_1684=1;
return uVar0;
}


float func_130(struct<3> Param0, var uParam1, var uParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam1=0.402f;
*uParam2=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam1=0.212f;
*uParam2=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam1=(fVar2 + 0.212f);
*uParam2=(fVar3 + 0.286f);
return fVar1;
}


var func__131(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_132(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_132(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_161();
if(func_160(uParam2)){}
if(func_159()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_157(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_156(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_153(0, &iVar1);
break;
case 3:
func_153(1, &iVar1);
break;
case 1:
func_150(&iVar1);
break;
}}
if(iVar1 > Global_1962798){
return 0;
}
if(iParam1==0){
if(iVar1 > iVar2){
if(iParam0==1){
iVar1=iVar2;
}
if(iParam0==2 || iParam0==3){
iVar1=iVar2;
}}}
if(bParam7){
func_149(1165, iVar1, -1);
if(iParam1==0){
func_138((func_148(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 !=-1){
func_149(1166, iVar1, -1);
}
func_135(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_133((func_134(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_133((func_134(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_133(int iParam0){
if(func_159()){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5=iParam0;
func_117(joaat("mpply_globalxp"), iParam0);
}}

int func_134(bool bParam0){
if(bParam0 > -1){
if(func_13(bParam0, 0, 1)){
if(bParam0==PLAYER::PLAYER_ID()){
return func_118(joaat("mpply_globalxp"));
}else{
return Global_1853988[bParam0 /*867*/].f_205.f_5;
}}else{
return func_118(joaat("mpply_globalxp"));
}}
return 0;
}


void func_135(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_47(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_136(func_137(&Var0));
if(iVar1==0){
func_117(joaat("mpply_crew_local_xp_0"), (func_118(joaat("mpply_crew_local_xp_0")) + iParam0));
}elseif(iVar1==1){
func_117(joaat("mpply_crew_local_xp_1"), (func_118(joaat("mpply_crew_local_xp_1")) + iParam0));
}elseif(iVar1==2){
func_117(joaat("mpply_crew_local_xp_2"), (func_118(joaat("mpply_crew_local_xp_2")) + iParam0));
}elseif(iVar1==3){
func_117(joaat("mpply_crew_local_xp_3"), (func_118(joaat("mpply_crew_local_xp_3")) + iParam0));
}elseif(iVar1==4){
func_117(joaat("mpply_crew_local_xp_4"), (func_118(joaat("mpply_crew_local_xp_4")) + iParam0));
}}}}

int func_136(int iParam0){
if(iParam0==func_118(joaat("mpply_crew_0_id"))){
return 0;
}elseif(iParam0==func_118(joaat("mpply_crew_1_id"))){
return 1;
}elseif(iParam0==func_118(joaat("mpply_crew_2_id"))){
return 2;
}elseif(iParam0==func_118(joaat("mpply_crew_3_id"))){
return 3;
}elseif(iParam0==func_118(joaat("mpply_crew_4_id"))){
return 4;
}else{
return -1;
}
return -1;
}

int func_137(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694518;
}}
return Global_2694518;
}


void func_138(int iParam0, int iParam1, int iParam2){
if(func_159()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10242==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < func_188(640, -1)){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==func_188(640, -1)){
return;
}}}
if(Global_262145.f_10241==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10241==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_147(PLAYER::PLAYER_ID())){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1=iParam0;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6=func_144(iParam0, 1);
}
func_142(640, iParam0, -1, 1);
func_142(641, func_144(iParam0, 1), -1, 1);
func_139(-1109644434, 7, 0);
}}


void func_139(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_141(iParam1, iParam2)){
iVar0=func_140();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_140(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694470[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_141(int iParam0, var uParam1){
if(Global_1575051){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575063) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_142(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_143(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__143(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_115(uParam1));
}

int func_144(int iParam0, bool bParam1){
if(bParam1){}
return func_145(iParam0, 0);
}

int func_145(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
if(iParam1==0){}
iVar1=8000;
iVar2=0;
iVar3=((iVar1 - iVar2) / 2);
iVar0=0;
while (iVar0 <=100){
if(iVar1==iVar2){
iVar0=8000;
if(iVar3==0){
iVar3=1;
}
return iVar3;
}
if(func_146(iVar3)==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(func_146(iVar3) < iParam0){
if(iVar2==iVar3){
iVar2++;
}else{
iVar2=iVar3;
}}elseif(iVar1==iVar3){
iVar1=(iVar1 - 1);
}else{
iVar1=iVar3;
}
fVar4=(((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
iVar3=round(fVar4);
iVar0++;
}
return 8000;
}

int func_146(int iParam0){
int iVar0;
int iVar1;
if(iParam0 < 100){
switch (iParam0){
case 1:
return 0;
case 2:
return 800;
case 3:
return 2100;
case 4:
return 3800;
case 5:
return 6100;
case 6:
return 9500;
case 7:
return 12500;
case 8:
return 16000;
case 9:
return 19800;
case 10:
return 24000;
case 11:
return 28500;
case 12:
return 33400;
case 13:
return 38700;
case 14:
return 44200;
case 15:
return 50200;
case 16:
return 56400;
case 17:
return 63000;
case 18:
return 69900;
case 19:
return 77100;
case 20:
return 84700;
case 21:
return 92500;
case 22:
return 100700;
case 23:
return 109200;
case 24:
return 118000;
case 25:
return 127100;
case 26:
return 136500;
case 27:
return 146200;
case 28:
return 156200;
case 29:
return 166500;
case 30:
return 177100;
case 31:
return 188000;
case 32:
return 199200;
case 33:
return 210700;
case 34:
return 222400;
case 35:
return 234500;
case 36:
return 246800;
case 37:
return 259400;
case 38:
return 272300;
case 39:
return 285500;
case 40:
return 299000;
case 41:
return 312700;
case 42:
return 326800;
case 43:
return 341000;
case 44:
return 355600;
case 45:
return 370500;
case 46:
return 385600;
case 47:
return 401000;
case 48:
return 416600;
case 49:
return 432600;
case 50:
return 448800;
case 51:
return 465200;
case 52:
return 482000;
case 53:
return 499000;
case 54:
return 516300;
case 55:
return 533800;
case 56:
return 551600;
case 57:
return 569600;
case 58:
return 588000;
case 59:
return 606500;
case 60:
return 625400;
case 61:
return 644500;
case 62:
return joaat("pyro_sub_bass_synth");
case 63:
return 683400;
case 64:
return 703300;
case 65:
return 723400;
case 66:
return 743800;
case 67:
return 764500;
case 68:
return 785400;
case 69:
return 806500;
case 70:
return 827900;
case 71:
return 849600;
case 72:
return 871500;
case 73:
return 893600;
case 74:
return 916000;
case 75:
return 938700;
case 76:
return 961600;
case 77:
return 984700;
case 78:
return 1008100;
case 79:
return 1031800;
case 80:
return 1055700;
case 81:
return 1079800;
case 82:
return 1104200;
case 83:
return 1128800;
case 84:
return 1153700;
case 85:
return 1178800;
case 86:
return 1204200;
case 87:
return 1229800;
case 88:
return 1255600;
case 89:
return 1281700;
case 90:
return 1308100;
case 91:
return 1334600;
case 92:
return 1361400;
case 93:
return 1388500;
case 94:
return 1415800;
case 95:
return 1443300;
case 96:
return 1471100;
case 97:
return 1499100;
case 98:
return 1527300;
case 99:
return 1555800;
default:}}else{
iVar0=(iParam0 - 99);
iVar1=((iVar0 * iVar0 + 1) / 2);
return ((1555800 + iVar0 * 28500) + iVar1 * 50);
}
return 1555800;
}

int func_147(int iParam0){
if(!func_12(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}

int func_148(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return func_188(640, -1);
}elseif(func_147(iParam0)){
return Global_1853988[iParam0 /*867*/].f_205.f_1;
}}}else{
return func_188(640, -1);
}
return 0;
}


void func_149(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_188(iParam0, func_115(iParam2));
iVar0=(iVar0 + iParam1);
func_142(iParam0, iVar0, iParam2, 1);
}


void func_150(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
bVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(bVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_6(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_152(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_151(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_151(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_151(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_152(int iParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_47(iParam0) 
};
Global_2764389={
func_47(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
if(Global_2764306==Global_2764341){
return 1;
}}}}
return 0;
}


void func_153(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_13(bVar4, 0, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_152(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
bVar4=iVar0;
if(func_13(bVar4, 1, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
if(func_154(PLAYER::PLAYER_ID(), bVar4) <=20f){
iVar1++;
if(func_152(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_151(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_151(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_154(int iParam0, bool bParam1){
return vdist(func_155(iParam0), func_155(bParam1));
return 0f;
}


Vector3 func__155(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_156(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_151(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_157(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_148(PLAYER::PLAYER_ID())){
iParam0=-func_148(PLAYER::PLAYER_ID());
}}
if(func_158(8000, 0, 0) > 0){
if(func_158(8000, 0, 0) < (iParam0 + func_148(PLAYER::PLAYER_ID()))){
iParam0=(func_158(8000, 0, 0) - func_148(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_158(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return func_146(iParam0);
}

int func_159(){
return 1;
}

int func_160(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_161(){
int iVar0;
if(func_169(PLAYER::PLAYER_ID()) || func_168(PLAYER::PLAYER_ID())){
if(Global_262145.f_10274 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10274;
}}elseif(func_166() || func_162(PLAYER::PLAYER_ID())){
if(Global_262145.f_23463 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23463;
}}elseif(Global_262145.f_7178 > 36000){
iVar0=36000;
}else{
iVar0=Global_262145.f_7178;
}
return iVar0;
}

int func_162(int iParam0){
return func_163(func_164(iParam0));
}

int func_163(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_164(int iParam0){
if(func_12(iParam0)){
if(func_165(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_165(int iParam0, int iParam1){
if(func_12(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}


bool func_166(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_82();
}
return func_167(Global_4718592.f_117591);
}

int func_167(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5043[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_168(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==2;
}


bool func_169(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==7;
}


void func_170(var uParam0, int iParam1){
int iVar0;
if(*uParam0 > 0){
if(!func_186()){
if(func_185(0)){
if(!func_181(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_180())){
if(func_179()==100){
iVar0=*uParam0;
*uParam0=0;
}
else{
iVar0=((*uParam0 / 100) * func_179());
*uParam0=(*uParam0 - iVar0);
}
func_177(&iVar0, 0);
if(iParam1==1){
func_176("GB_BCUT_TICK1", func_180(), iVar0, 0, 0, 1);
}
func_175(20);
func_171(func_180(), iVar0, 1);
}}}}}}


void func_171(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_13(bParam0, 0, 1)){
Var0.f_0=-1141119736;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_174(bParam0);
func_173(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_172(bParam0));
}}

int func_172(bool bParam0){
var uVar0;
if(func_12(bParam0)){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_173(var uParam0, var uParam1){
*uParam0=Global_1924276.f_9;
*uParam1=Global_1924276.f_10;
}


var func__174(int iParam0){
return Global_1895156[iParam0 /*609*/].f_511;
}


void func_175(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}

int func_176(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_50(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_48(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_42(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_177(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_178(1);
}else{
iVar1=func_178(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_178(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_13038;
}

int func_179(){
return Global_262145.f_13037;
}


bool func_180(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


bool func_181(bool bParam0){
return func_182(PLAYER::PLAYER_ID(), bParam0);
}

int func_182(int iParam0, bool bParam1){
return func_183(iParam0, bParam1, 1);
}

int func_183(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_12(iParam0)){
return 0;
}
if(!bParam1){
if(func_184(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_69() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_184(int iParam0, int iParam1){
if(func_12(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_69()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}


bool func_185(bool bParam0){
return func_70(PLAYER::PLAYER_ID(), bParam0);
}


bool func_186(){
return func_71(PLAYER::PLAYER_ID());
}


void func_187(int iParam0, var uParam1, int iParam2){
func_142(iParam0, uParam1, iParam2, 1);
}

int func_188(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_143(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_189(){
if(!MISC::IS_BIT_SET(uLocal_95, 5)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90.f_7 + Vector(((20f / 2f) + 4f), 0f, 0f), 7f, 7f, 20f, 0, 1, 0)){
if(func_24(PLAYER::PLAYER_PED_ID())){
iLocal_155=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_90.f_13);
func_190(iLocal_155, func_172(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
MISC::SET_BIT(&uLocal_95, 5);
}}}elseif(func_512(&uLocal_156, 250, 0)){
func_190(iLocal_155, func_172(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
func_29(&uLocal_156);
}}


void func_190(int iParam0, int iParam1){
struct<3> Var0;
Var0.f_0=-852946413;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam1);
}}

int func_191(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_110(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_95(&(Var0.f_69), iParam7);
}
return func_93(&Var0);
}


void func_192(var uParam0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}


void func_193(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}

int func_194(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7){
char* sVar0;
char* sVar1;
char* sVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
int iVar9;
bool bVar10;
int iVar11;
int iVar12;
int iVar13;
var uVar14;
if(bParam7){
func_204(&(uParam0->f_2), 1);
}
if(!func_203(&(uParam0->f_2))){
func_201(&(uParam0->f_2));
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
if(iParam4 > 3){
iParam4=3;
}elseif(iParam4 < 0){
iParam4=0;
}
if(bParam5){
sVar0="3_2_1";
sVar1="GO";
sVar2="HUD_MINI_GAME_SOUNDSET";
}else{
sVar0="3_2_1";
sVar1="GO";
sVar2="321_GO_LOW_VOL_SOUNDSET";
}
if(bParam7){
if(func_203(&(uParam0->f_2))){
if(func_200(&(uParam0->f_2))){
fVar3=uParam0->f_2.f_2;
}else{
fVar3=(func_199(1) - uParam0->f_2.f_1);
if(fVar3 < 0f){
fVar3=0f;
func_193(&(uParam0->f_2));
if(func_97(uParam0->f_1, 1)){
func_95(&(uParam0->f_1), 8);
HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
func_198("CNTDWN_GO");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return 1;
}
func_201(&(uParam0->f_2));
}}}else{
fVar3=uParam0->f_2.f_1;
}
iVar4=floor(fVar3);
}else{
iVar4=floor(func_197(&(uParam0->f_2)));
}
iVar9=(iVar4 - iParam4);
bVar10=false;
if(!func_97(uParam0->f_1, 8)){
if(iVar9 >=-3 && !func_97(uParam0->f_1, 1)){
func_95(&(uParam0->f_1), 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_196(uParam0, iVar9);
}elseif(iVar9 >=-2 && !func_97(uParam0->f_1, 2)){
func_95(&(uParam0->f_1), 2);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_196(uParam0, iVar9);
}elseif(iVar9 >=-1 && !func_97(uParam0->f_1, 4)){
func_95(&(uParam0->f_1), 4);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_196(uParam0, iVar9);
}elseif(iVar9 >=-1 && !func_97(uParam0->f_1, 16)){
if(MISC::ABSF((func_197(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f){
if(bParam5 || bParam6){
func_95(&(uParam0->f_1), 16);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
}}}elseif(iVar9 >=0 && !func_97(uParam0->f_1, 8)){
if(!bParam5 && !bParam6){
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
}
func_95(&(uParam0->f_1), 8);
HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
func_198("CNTDWN_GO");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(!bParam1){
bVar10=true;
}}}elseif(iVar9==1){
bVar10=true;
}
if((iParam2 && func_195()) || iVar4 > 5){
bVar10=true;
}
if(bVar10){
if(bParam3){
uParam0->f_1=0;
func_193(&(uParam0->f_2));
}
return 1;
}
return 0;
}

int func_195(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18)){
return 1;
}
return 0;
}


void func_196(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


float func_197(var uParam0){
if(func_203(uParam0)){
if(func_200(uParam0)){
return uParam0->f_2;
}else{
return (func_199(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


void func_198(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


float func_199(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=to_float(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=to_float(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (to_float(MISC::GET_GAME_TIMER()) / 1000f);
}


bool func_200(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


void func_201(var uParam0){
func_202(uParam0, 0f);
}


void func_202(var uParam0, float fParam1){
uParam0->f_1=(func_199(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, true);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


bool func_203(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_204(var uParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(uParam0, 4);
}else{
MISC::CLEAR_BIT(uParam0, 4);
}
if(MISC::IS_BIT_SET(*uParam0, 4)){}}


bool func_205(var uParam0){
return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1));
}


void func_206(int iParam0, int iParam1, bool bParam2){
if(func_214()){
if(iParam1==1){
if(Global_2794162.f_4499==-1){
Global_2794162.f_4499=Global_262145.f_27370;
}
func_213(&(Global_2794162.f_4497), 0, 0);
if(bParam2){
if(Global_2794162.f_4502==-1){
Global_2794162.f_4502=Global_262145.f_27371;
}
func_213(&(Global_2794162.f_4500), 0, 0);
}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_212(1);
}}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_212(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_211()) && !func_207(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_207(int iParam0){
if(func_208(iParam0, 1, 0)){
if(Global_1853988[iParam0 /*867*/] !=6){
return 1;
}}
return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_209(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_209(int iParam0){
return func_210(iParam0);
}


var func__210(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}


bool func_211(){
return Global_2683883.f_841;
}


void func_212(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_214()){
if(func_13(PLAYER::PLAYER_ID(), 1, 0)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
}
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
Global_1574582.f_2=0;
if(bParam0){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
}}}else{
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(1, 0);
}}
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
}}}


void func_213(var uParam0, bool bParam1, bool bParam2){
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


bool func_214(){
return Global_1574582;
}


void func_215(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}


void func_216(bool bParam0){
if(Global_2646835.f_1544){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2646835.f_1545)){
if(!Global_2646835.f_1545==SCRIPT::GET_ID_OF_THIS_THREAD()){
return;
}}else{
Global_2646835.f_1544=0;
}}
if(bParam0){
if(!Global_2646835.f_1544){
Global_2646835.f_1544=1;
Global_2646835.f_1545=SCRIPT::GET_ID_OF_THIS_THREAD();
StringCopy(&(Global_2646835.f_1546), SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(Global_2646835.f_1545), 64);
Global_2646835.f_1562=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}elseif(Global_2646835.f_1544){
Global_2646835.f_1544=0;
Global_2646835.f_1545=-1;
}}


void func_217(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(func_13(iVar1, 0, 1) && iVar1 !=PLAYER::PLAYER_ID()){
NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, iParam0);
}}
iVar0++;
}}


void func_218(int iParam0, int iParam1){
func_220(iParam0, 1, 1, 0);
if(iParam1==1){
func_219(iParam0, 0);
}}


void func_219(int iParam0, bool bParam1){
if(bParam1){}
iParam0=iParam0;
}


void func_220(int iParam0, int iParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
if(iParam1 < 1){
iParam1=1;
}
iVar0=(iParam0 * iParam1);
fParam3=0f;
if(iVar0 > 0){
fVar2=(100f - fParam3);
iVar1=floor((IntToFloat(iVar0) * (fVar2 / 100f)));
}else{
iVar1=iVar0;
}
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_4=iVar1;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3=(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3 + iVar1);
if(iParam2==1){
func_219(iVar1, 0);
}}


void func_221(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_232()){
return;
}
iVar0=1;
if(bParam4){
iVar0=4;
}elseif(bParam3){
iVar0=2;
}elseif(bParam5){
iVar0=8;
}
switch (iParam0){
case -1645229221:
case -585718395:
case -1359375127:
case 454359403:
case -982394051:
case 1643659499:
case -2072289654:
case 650665123:
case 1654961868:
case -876847842:
case 68030260:
case -2122299283:
case 366672791:
case 283351220:
case 291576838:
case 1182673174:
case -516219046:
case 1036455748:
case 277665518:
case 2043854386:
case 1839532116:
case 1022400740:
case 1940862352:
case -1389227906:
case 711665950:
case 1704445500:
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 1612072658:
case -517447402:
case 1948102096:
case 1108628223:
case -1834046564:
case -1239008812:
case -222363842:
case -1276678868:
case 1564537328:
case -96593501:
case 742499889:
case 2050093329:
case -1752488069:
case 634375935:
case 2115896461:
case 797947947:
case 1941570214:
case 665109499:
case -1330755006:
case 1976384368:
case 268924934:
case 1869490922:
case -336803850:
case -1412692765:
case 618167454:
case 980623936:
case 437291904:
case -135813048:
case -930104477:
case -1420909320:
case -1733398043:
case -1892760262:
case -1545737048:
case 2039302543:
case 402505853:
case -1143510182:
case 1678112166:
case 837955913:
case -1532467144:
case 1815541181:
if(iParam1 > 0 || Global_262145.f_28582){
func_222(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case -31156877:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 1982688246:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -101307780:
case -664597565:
case 599804707:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
func_222(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}
switch (iParam0){
case -1342064661:
case -1693570755:
case 1868043300:
case -697248883:
case -1295545795:
case 914079366:
case 395122350:
case -331981076:
case 1671535231:
case -1896606724:
case -1291433573:
case 538631715:
case 133782822:
case 2081885153:
case -1314365345:
case 1322977732:
case 396623013:
case 1981664462:
case -1921250821:
case -1370731547:
case 1683798242:
case -910968288:
case -168319378:
case 1637817605:
case 830018386:
case 1051883823:
case -2013760296:
case -1033889004:
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28582){
func_222(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case 1240683675:
case 1241904665:
case -1100963799:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case -2017925037:
case 1668610896:
case -2032529561:
case -1224479447:
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case 1220095570:
case 2050320631:
case 592672421:
case 1775876058:
case -842062976:
case -518651910:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1633116913:
case 668586600:
case 15168061:
case 590289134:
case 99792878:
case 1866258778:
case -178394060:
case 409592287:
case 593836803:
case 1973036520:
case 2063456538:
case -728008329:
case 119239868:
case -456458353:
case 1900048468:
case 333526332:
case -2091351051:
case -373571001:
case -367430800:
case 1823444356:
func_222(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_232()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536678=1;
return 0;
}
if(Global_2695872){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536679=1;
return 0;
}}}
bVar3=false;
iVar2=0;
while (iVar2 < 15){
if(Global_4535172[iVar2 /*85*/].f_66.f_2==0){
bVar3=true;
}
iVar2++;
}
if(!bVar3){
return 0;
}
*uParam0=15;
iVar4=2147483647;
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6)){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4)){
*uParam0=func_229(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
if(iVar1 && !bVar0){
}
if(bVar0){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536677=1;
Global_4536680=iParam4;
Global_4536682=iParam3;
Global_4536683=1;
Global_4536681=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536680=iParam4;
Global_4536682=iParam3;
Global_4536683=1;
Global_4536681=iParam5;
}
bVar5=false;
if(bVar5){
func_228(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_223(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_223(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_224(iParam0);
}}


void func_224(int iParam0){
bool bVar0;
bVar0=false;
if(!func_232()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_227(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_225(&(Global_4535172[iParam0 /*85*/]));
}}


void func_225(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_226(&(uParam0->f_14));
func_226(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
}


void func_226(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
}

int func_227(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_228(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_229(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_232()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=uParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=uParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=iParam0;
Global_4535172[iVar0 /*85*/].f_66.f_6=iParam4;
Global_4535172[iVar0 /*85*/].f_66.f_11=uParam8;
Global_4535172[iVar0 /*85*/].f_66.f_10=uParam7;
Global_4535172[iVar0 /*85*/].f_66.f_13=iParam9;
Global_4535172[iVar0 /*85*/].f_66.f_12=0;
Global_4535172[iVar0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[iVar0 /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6){
Global_4535172[iVar0 /*85*/].f_66.f_5=1;
}
if(iParam1==-1135378931 && iParam10){
func_230(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_230(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-710178565;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_172(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_231();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_231(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_232(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_233(bool bParam0, int iParam1){
int iVar0;
if(!func_235(&iVar0, 0, iParam1)){
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
func_234(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_234(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_235(var uParam0, bool bParam1, int iParam2){
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


void func_236(){
if(HUD::DOES_BLIP_EXIST(uLocal_98)){
HUD::REMOVE_BLIP(&uLocal_98);
}}


void func_237(){
Global_2683883.f_756=1;
}


bool func_238(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}


void func_239(){
bool bVar0;
int iVar1;
if(func_513(0, -1, 0)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=true;
}elseif(Local_90.f_3 !=iLocal_93){
iLocal_93=Local_90.f_3;
iLocal_99=1;
}
if(bVar0){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::SET_INPUT_EXCLUSIVE(2, 237);
PAD::SET_INPUT_EXCLUSIVE(2, 238);
PAD::SET_INPUT_EXCLUSIVE(2, 241);
PAD::SET_INPUT_EXCLUSIVE(2, 242);
PAD::SET_INPUT_EXCLUSIVE(2, 239);
PAD::SET_INPUT_EXCLUSIVE(2, 240);
func_500(0, -1, 1);
func_497(0, 0, 0, 1);
if(Global_4541034 > -1){
if(Local_141.f_14==Global_4541034){
if(Global_4541034==2 && PAD::IS_CONTROL_PRESSED(2, 237)){
iLocal_105=func_496(0);
}
elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
iLocal_104=1;
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 237)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_141.f_14=Global_4541034;
func_495(Local_141.f_14, 1, 1);
iLocal_99=1;
}}}}
func_492();
func_487();
if(bVar0){
if(!MISC::IS_BIT_SET(Local_141.f_15, 0)){
MISC::SET_BIT(&(Local_141.f_15), false);
iLocal_99=1;
iLocal_100=1;
MISC::CLEAR_BIT(&(Local_90.f_1), 7);
MISC::CLEAR_BIT(&(Local_90.f_1), 8);
MISC::CLEAR_BIT(&(Local_90.f_1), 9);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
}}elseif(MISC::IS_BIT_SET(Local_141.f_15, 0)){
MISC::CLEAR_BIT(&(Local_141.f_15), false);
iLocal_99=1;
iLocal_100=1;
}
if(Local_90.f_14 !=iLocal_148){
iLocal_148=Local_90.f_14;
iLocal_99=1;
}
if((func_483(bVar0) || !MISC::IS_BIT_SET(Local_141.f_15, 1)) || PAD::HAVE_CONTROLS_CHANGED(2)){
if(!MISC::IS_BIT_SET(Local_141.f_15, 1)){
if(bVar0==1){
func_482();
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0 && !MISC::IS_BIT_SET(Global_2794162.f_1831, 24)){
Local_90.f_15[2]=Global_2794162.f_28.f_39;
}else{
Local_90.f_15[2]=2;
}}}
if(((iLocal_99==1 || !MISC::IS_BIT_SET(Local_141.f_15, 1)) || PAD::HAVE_CONTROLS_CHANGED(2)) || Local_141.f_20 !=Local_90.f_15.f_6){
Local_141.f_20=Local_90.f_15.f_6;
if(bVar0){
iVar1=0;
while (iVar1 < iLocal_88){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f && Local_90.f_15[2] !=0){
Local_90.f_15[2]++;
if(Local_90.f_15[2] > func_481(2)){
Local_90.f_15[2]=0;
}
}
else{
iVar1=99;
}
iVar1++;
}
if(iLocal_100==1){
Local_90.f_7={
func_17() 
};
iLocal_100=0;
}}
if(iLocal_101==1 && bVar0==1){
func_471();
}else{
func_457(bVar0);
}
iLocal_99=0;
}
if(!MISC::IS_BIT_SET(Local_141.f_15, 1)){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
MISC::SET_BIT(&(Local_141.f_15), true);
}}
if(func_30(&uLocal_153)){
func_456("R2P_WARNH", 0, 0);
}elseif(bVar0){
if(iLocal_101==1){
if(bLocal_103==1){
func_456("R2P_MENU_IVP", 0, 0);
}}elseif((Local_90.f_15[2] <=0 || Local_90.f_15[2] > iLocal_88) && iLocal_150==1){
func_456("R2P_MENU_WAY", 0, 0);
}elseif(Local_90.f_14 < 2){
func_456("R2P_MENU_MPL", 0, 0);
}else{
func_456("R2P_MENU_DSQ", 0, 0);
}}else{
func_456("R2P_MENU_WAI", 0, 0);
func_455(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
}
if(bVar0==1){
if(Local_90.f_15[2] <=0 || Local_90.f_15[2] > iLocal_88){
func_294();
}}
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_293();
func_273(&uLocal_116);
func_242(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
func_240(&uLocal_139);
}}


void func_240(var uParam0){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=0f;
fVar1=0.5f;
Var2={
0f, 0f, 0f 
};
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
}else{
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
fVar0=func_241(Var2.f_2, 0f, 360f);
if((uParam0->f_1==0f || (uParam0->f_1 - fVar0) > fVar1) || (uParam0->f_1 - fVar0) < -fVar1){
uParam0->f_1=fVar0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}}


float func_241(float fParam0, float fParam1, float fParam2){
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


void func_242(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
bool bVar33;
float fVar34;
float fVar35;
float fVar36;
float fVar37;
struct<3> Var38;
bool bVar39;
float fVar40;
float fVar41;
float fVar42;
float fVar43;
float fVar44;
int iVar45;
int iVar46;
int iVar47;
int iVar48;
float fVar49;
bool bVar50;
bool bVar51;
bool bVar52;
bool bVar53;
float fVar54;
float fVar55;
float fVar56;
float fVar57;
var uVar58;
var uVar59;
float fVar60;
char cVar61[64];
char cVar62[64];
float fVar63;
int iVar64;
float fVar65;
float fVar66;
int iVar67;
int iVar68;
int iVar69;
int iVar70;
int iVar71;
int iVar72;
char cVar73[16];
float fVar74;
float fVar75;
float fVar76;
float fVar77;
float fVar78;
if(!func_235(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_271(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23390){
if(func_269(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar56=(fVar37 / fVar36);
}else{
Global_23390=0;
}}
if(fParam5==-1f){
fParam5=Global_23389;
}
fVar55=(fParam5 * fVar56);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar57=Global_23388;
}else{
fVar57=(((Global_23388 + fVar55) + 0.034722f) + 0f);
}
fVar60=1f;
func_267(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23390.f_5661 <=1){
func_263(Global_23390.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23390.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23390.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23388;
}else{
if(Global_23390){
StringCopy(&cVar61, func_262(29), 64);
StringCopy(&cVar62, func_260(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_259(Global_23387, Global_23388, fParam5, fVar55, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23390.f_8862){
iVar1=Global_23390.f_8858;
iVar2=Global_23390.f_8859;
iVar3=Global_23390.f_8860;
iVar4=Global_23390.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_259(Global_23387, (Global_23388 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23388 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1)) !=0){
func_258();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23390.f_74){
if(Global_23390.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_10[iVar15]);
iVar15++;
}
elseif(Global_23390.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_14[iVar16], Global_23390.f_18[iVar16]);
iVar16++;
}
elseif(Global_23390.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23390.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23390.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23387 + 0.00390625f), ((Global_23388 + fVar55) + 0.00416664f), 0);
}
if(Global_23390.f_6178){
func_258();
func_256((((Global_23387 + fParam5) - 0.00390625f) - func_257("CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180);
}elseif(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_6177 !=0){
func_258();
func_256((((Global_23387 + fParam5) - 0.00390625f) - func_257("CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176);
}}}
iVar6=Global_23390.f_6181;
iVar9=0;
fVar63=fVar49;
if(Global_23390.f_8872){
iVar1=Global_23390.f_8868;
iVar2=Global_23390.f_8869;
iVar3=Global_23390.f_8870;
iVar4=Global_23390.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23390.f_5668 && iVar6 <=Global_23390.f_5661){
if(iVar6 >=0){
if(Global_23390.f_5928[iVar6]){
if(Global_23390.f_5799[iVar6] && iVar6 !=Global_23390.f_6181){
fVar49=(fVar49 + 0.00277776f);
}
fVar54=0.034722f;
if(Global_23390.f_6188[iVar6] !=0f){
fVar54=Global_23390.f_6188[iVar6];
}
fVar49=(fVar49 + fVar54);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_8877){
iVar1=Global_23390.f_8873;
iVar2=Global_23390.f_8874;
iVar3=Global_23390.f_8875;
iVar4=Global_23390.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_259(Global_23387, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar60));
Var38.f_1=(Var38.f_1 * (0.5f / fVar60));
if(Global_23390.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar49=(fVar49 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_5081)) !=0 && Global_23390.f_5163 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_23390.f_5165 !=0){
func_269(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_259(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_23390.f_5165 !=0){
func_269(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_254(Global_23390.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_5165), func_260(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_259(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23390.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23390.f_5164) > Global_23390.f_5163){
StringCopy(&(Global_23390.f_5081), "", 24);
Global_23390.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_259(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_21)) !=0 && Global_4540958.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_4540958.f_67 !=0){
func_269(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540958.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540958.f_61){
if(Global_4540958.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
iVar15++;
}elseif(Global_4540958.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
iVar16++;
}elseif(Global_4540958.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_259(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_255(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540958.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540958.f_61){
if(Global_4540958.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
iVar15++;
}elseif(Global_4540958.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
iVar16++;
}elseif(Global_4540958.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_4540958.f_67 !=0){
func_269(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_254(Global_4540958.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_262(Global_4540958.f_67), func_260(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540958.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65){
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_65=-1;
}}}
func_250(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23390.f_6171){
iVar19=0;
iVar23=0;
iVar20=0;
iVar21=0;
iVar22=0;
iVar9=0;
iVar10=0;
iVar11=0;
iVar12=0;
iVar13=0;
iVar64=Global_23390.f_5661;
if(Global_23390.f_6172){
iVar64=(Global_23390.f_6175 - 1);
}
fVar65=0f;
fVar66=0f;
iVar7=0;
while (iVar7 <=iVar64){
fVar54=0.034722f;
if(Global_23390.f_6188[iVar6] !=0f){
fVar54=Global_23390.f_6188[iVar6];
}
if(Global_23390.f_6172){
iVar6=Global_23390.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23390.f_6181 && iVar9 < Global_23390.f_5668){
bVar33=true;
if(Global_23390.f_6182==iVar6){
fVar66=fVar65;
}
if(Global_23390.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23390.f_6322[iVar6]=fVar35;
fVar34=(Global_23387 + 0.0046875f);
bVar39=false;
bVar32=Global_23390.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar68=255;
iVar69=255;
iVar70=255;
iVar71=255;
if(Global_23390.f_8884){
HUD::GET_HUD_COLOUR(Global_23390.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
}else{
HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23387 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
Global_23390.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23390.f_5669){
if(MISC::IS_BIT_SET(Global_23390.f_5532[iVar6], iVar8) || Global_23390.f_5499[iVar8]==5){
if(Global_23390.f_6172){
iVar19=Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar20=Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar21=Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar22=Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar23=Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)];
}
else{
Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar19;
Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar20;
Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar21;
Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar22;
Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar23;
}
iVar72=0;
bVar53=false;
if(Global_23390.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23390.f_6451[0]){
bVar53=true;
iVar72=0;
}
}
if(Global_23390.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23390.f_6451[1]){
bVar53=true;
iVar72=1;
}
}
if(Global_23390.f_5505[iVar8] !=-1f){
fVar34=((Global_23387 + 0.0046875f) + Global_23390.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23390.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23390.f_5505[iVar8 + 1]){
fVar44=(Global_23390.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar44=(((Global_23387 + Global_23389) - 0.0046875f) - fVar34);
}
if((Global_23390.f_5518[iVar8] && Global_23390.f_6317) && bVar32){
bVar52=true;
}
else{
bVar52=false;
}
switch (Global_23390.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23390.f_6172){
fVar41=0f;
fVar42=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_269(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
if(iVar14 > 0){
fVar42=(fVar42 - (0.00078125f * 4f));
}
if((Global_23390.f_4824[(iVar22 + iVar14)]==2 || Global_23390.f_4824[(iVar22 + iVar14)]==52) || Global_23390.f_4824[(iVar22 + iVar14)]==62){
fVar42=(fVar42 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar42;
if(Global_23390.f_5526[iVar8]==2){
iVar67=(iVar8 - 1);
while (iVar67 >=0){
if(Global_23390.f_5526[iVar67]==2){
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar67)]=(Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar67)] - Global_23390.f_5511[iVar8]);
}
iVar67=(iVar67 + -1);
}
}
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar42=Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_269(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_269(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(26), func_260(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_269(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_269(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(27), func_260(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_247(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23390.f_4824[(iVar22 + iVar28)]==2 || Global_23390.f_4824[(iVar22 + iVar28)]==52) || Global_23390.f_4824[(iVar22 + iVar28)]==62){
if(func_269(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_269(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_254(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[(iVar22 + iVar28)]), func_260(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[(iVar22 + iVar28)]), func_260(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
fVar40=(fVar40 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23390.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
if(func_45() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_248(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
StringCopy(&cVar73, "TEST_LABEL", 16);
fVar74=0f;
fVar75=55f;
fVar76=0.0185f;
fVar77=0.004f;
fVar78=0.02f;
HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, floor(fVar74), floor(fVar74), floor(fVar74), floor(fVar75), 0);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23390.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar40=(fVar40 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23390.f_4824[(iVar22 + iVar14)] !=2 && Global_23390.f_4824[(iVar22 + iVar14)] !=52) && Global_23390.f_4824[(iVar22 + iVar14)] !=62){
if(func_269(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_269(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_254(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23390.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[(iVar22 + iVar14)]), func_260(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[(iVar22 + iVar14)]), func_260(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[(iVar22 + iVar14)]), func_260(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
}
fVar40=(fVar40 + (12f * 0.00078125f));
}}
iVar14++;
}
}}
bVar39=true;
iVar19++;
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23390.f_6172){
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_247(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[iVar20]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_269(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_269(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(26), func_260(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_269(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_269(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(27), func_260(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_246((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23390.f_6172){
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_247(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_269(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_269(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(26), func_260(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_269(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_269(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(27), func_260(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_248(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_245((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_269(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23390.f_6172){
fVar42=fVar36;
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
}elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar42;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar42=Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_269(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_269(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(26), func_260(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_269(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_269(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_254(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_262(27), func_260(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_269(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_254(Global_23390.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_262(Global_23390.f_4824[iVar22]), func_260(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_244(Global_23390.f_4824[iVar22])), (fVar37 * func_244(Global_23390.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
}}
bVar39=true;
iVar22++;
break;
case 5:
bVar39=true;
break;
}
if(Global_23390.f_5499[iVar8]==5){
if(Global_23390.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
if(Global_23390.f_5518[iVar8]){
if(func_269(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
}
iVar8++;
}
if(bVar39){
if(bVar33){
Global_23390.f_8513[iVar9]=iVar6;
Global_23390.f_6183=iVar6;
iVar9++;
if(Global_23390.f_5799[iVar6]){
iVar13++;
}
if(Global_23390.f_6188[iVar6] !=0f){
fVar65=(fVar65 + Global_23390.f_6188[iVar6]);
}
else{
fVar65=(fVar65 + 0.034722f);
}}
if(!Global_23390.f_6171){
Global_23390.f_5928[iVar6]=1;
if(Global_23390.f_5670[iVar6]){
if(bVar32){
Global_23390.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23390.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23390.f_6171){
Global_23390.f_6173=((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
Global_23390.f_6176=iVar11;
Global_23390.f_6174=iVar10;
Global_23390.f_6171=1;
}}
if(!Global_23390.f_6172){
Global_23390.f_6175=iVar9;
Global_23390.f_6172=1;
}
iVar5++;
}
Global_23390.f_6319=fVar49;
Global_23390.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23390.f_6319);
if(!Global_23390.f_8857){
func_515(0);
}
Global_23390.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_243(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_243(int iParam0){
Global_1655612.f_1163=iParam0;
}


float func_244(int iParam0){
switch (iParam0){
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 39:
case 40:
case 38:
case 54:
case 45:
case 46:
case 47:
return 0.85f;
break;
}
return 1f;
}


void func_245(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_246(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


void func_247(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23390.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23390.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_248(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_249(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
if((iVar0 < 20 && iVar1 < 20) && iVar2 < 20){
if(bParam0==0){
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
}}elseif((iVar0 > 230 && iVar1 > 230) && iVar2 > 230){
if(bParam0){
iVar0=0;
iVar1=0;
iVar2=0;
}}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}elseif(bParam1){
if(bParam0){
HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}else{
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}}elseif(bParam1){
if(bParam0){
HUD::SET_TEXT_COLOUR(0, 0, 0, floor((255f * 0.8f)));
}else{
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_JUSTIFICATION(1);
if(bParam5){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(4);
}elseif(bParam6){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(6);
}else{
HUD::SET_TEXT_FONT(0);
}
HUD::SET_TEXT_WRAP(0f, 1f);
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_249(int iParam0, var uParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
*uParam1=8;
*uParam2=8;
*uParam3=8;
break;
case 1:
*uParam1=37;
*uParam2=37;
*uParam3=39;
break;
case 22:
*uParam1=140;
*uParam2=146;
*uParam3=154;
break;
case 23:
*uParam1=91;
*uParam2=93;
*uParam3=94;
break;
case 6:
*uParam1=81;
*uParam2=84;
*uParam3=89;
break;
case 111:
*uParam1=240;
*uParam2=240;
*uParam3=240;
break;
case 28:
*uParam1=150;
*uParam2=8;
*uParam3=0;
break;
case 34:
*uParam1=38;
*uParam2=3;
*uParam3=6;
break;
case 88:
*uParam1=245;
*uParam2=137;
*uParam3=15;
break;
case 45:
*uParam1=74;
*uParam2=22;
*uParam3=7;
break;
case 56:
*uParam1=45;
*uParam2=58;
*uParam3=53;
break;
case 58:
*uParam1=71;
*uParam2=120;
*uParam3=60;
break;
case 54:
*uParam1=77;
*uParam2=98;
*uParam3=104;
break;
case 73:
*uParam1=14;
*uParam2=49;
*uParam3=109;
break;
case 68:
*uParam1=22;
*uParam2=34;
*uParam3=72;
break;
case 140:
*uParam1=0;
*uParam2=174;
*uParam3=239;
break;
case 131:
*uParam1=255;
*uParam2=183;
*uParam3=0;
break;
case 90:
*uParam1=142;
*uParam2=140;
*uParam3=70;
break;
case 97:
*uParam1=156;
*uParam2=141;
*uParam3=113;
break;
case 89:
*uParam1=145;
*uParam2=115;
*uParam3=71;
break;
case 105:
*uParam1=98;
*uParam2=68;
*uParam3=40;
break;
case 100:
*uParam1=124;
*uParam2=27;
*uParam3=68;
break;
case 99:
*uParam1=114;
*uParam2=42;
*uParam3=63;
break;
case 136:
*uParam1=246;
*uParam2=151;
*uParam3=153;
break;
case 49:
*uParam1=32;
*uParam2=32;
*uParam3=44;
break;
case 146:
*uParam1=26;
*uParam2=1;
*uParam3=23;
break;
default:
*uParam1=255;
*uParam2=255;
*uParam3=255;
break;
}}


void func_250(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_235(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_271(bParam4, bParam8)){
return;
}
if(func_252()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_9(PLAYER::PLAYER_ID(), 0)){
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
func_251(&(Global_23390.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_251(&(Global_23390.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23390.f_5450[iVar1]==-1){
func_198(&(Global_23390.f_5393[iVar1 /*4*/]));
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
func_251(&Global_4540958);
if(Global_4540958.f_20==-1){
func_198(&(Global_4540958.f_16));
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


void func_251(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_252(){
struct<3> Var0;
if(Global_20500.f_1 > 3){
return 1;
}
if(func_253()){
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

int func_253(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_254(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
switch (iParam0){
case 28:
*iParam2=194;
*iParam3=80;
*iParam4=80;
break;
case 15:
case 4:
case 16:
case 26:
case 27:
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 54:
case 39:
case 40:
case 38:
case 44:
case 43:
case 45:
case 46:
case 47:
case 53:
case 57:
case 58:
case 59:
case 60:
if(bParam1){
*iParam2=0;
*iParam3=0;
*iParam4=0;
}
break;
case 55:
*iParam5=100;
break;
case 63:
*iParam5=100;
break;
case 56:
HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
break;
}}


void func_255(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23387 + Global_23389) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_256(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_257(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_258();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_258(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23390.f_8867){
iVar0=Global_23390.f_8863;
iVar1=Global_23390.f_8864;
iVar2=Global_23390.f_8865;
iVar3=Global_23390.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23387 + 0.0046875f), ((Global_23387 + Global_23389) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_259(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__260(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_47(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_261(&uVar1);
}}else{
return func_261(&(Global_23390.f_7488[iParam0 /*16*/]));
}}
switch (iParam0){
case 3:
sVar0[0]="MP_hostCrown";
sVar0[1]="MP_hostCrown";
break;
case 21:
sVar0[0]="MP_SpecItem_Coke";
sVar0[1]="MP_SpecItem_Coke";
break;
case 22:
sVar0[0]="MP_SpecItem_Heroin";
sVar0[1]="MP_SpecItem_Heroin";
break;
case 23:
sVar0[0]="MP_SpecItem_Weed";
sVar0[1]="MP_SpecItem_Weed";
break;
case 24:
sVar0[0]="MP_SpecItem_Meth";
sVar0[1]="MP_SpecItem_Meth";
break;
case 25:
sVar0[0]="MP_SpecItem_Cash";
sVar0[1]="MP_SpecItem_Cash";
break;
case 1:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 2:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 4:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 6:
sVar0[0]="Shop_Box_CrossB";
sVar0[1]="Shop_Box_Cross";
break;
case 7:
sVar0[0]="Shop_Box_BlankB";
sVar0[1]="Shop_Box_Blank";
break;
case 5:
sVar0[0]="Shop_Box_TickB";
sVar0[1]="Shop_Box_Tick";
break;
case 8:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 9:
sVar0[0]="Shop_Clothing_Icon_B";
sVar0[1]="Shop_Clothing_Icon_A";
break;
case 10:
sVar0[0]="Shop_GunClub_Icon_B";
sVar0[1]="Shop_GunClub_Icon_A";
break;
case 17:
sVar0[0]="Shop_Ammo_Icon_B";
sVar0[1]="Shop_Ammo_Icon_A";
break;
case 18:
sVar0[0]="Shop_Armour_Icon_B";
sVar0[1]="Shop_Armour_Icon_A";
break;
case 19:
sVar0[0]="Shop_Health_Icon_B";
sVar0[1]="Shop_Health_Icon_A";
break;
case 20:
sVar0[0]="Shop_MakeUp_Icon_B";
sVar0[1]="Shop_MakeUp_Icon_A";
break;
case 11:
sVar0[0]="Shop_Tattoos_Icon_B";
sVar0[1]="Shop_Tattoos_Icon_A";
break;
case 12:
sVar0[0]="Shop_Garage_Icon_B";
sVar0[1]="Shop_Garage_Icon_A";
break;
case 13:
sVar0[0]="Shop_Garage_Bike_Icon_B";
sVar0[1]="Shop_Garage_Bike_Icon_A";
break;
case 14:
sVar0[0]="Shop_Barber_Icon_B";
sVar0[1]="Shop_Barber_Icon_A";
break;
case 15:
sVar0[0]="shop_Lock";
sVar0[1]="shop_Lock";
break;
case 16:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 26:
sVar0[0]="arrowleft";
sVar0[1]="arrowleft";
break;
case 27:
sVar0[0]="arrowright";
sVar0[1]="arrowright";
break;
case 28:
sVar0[0]="MP_AlertTriangle";
sVar0[1]="MP_AlertTriangle";
break;
case 29:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 31:
sVar0[0]="Shop_Michael_Icon_B";
sVar0[1]="Shop_Michael_Icon_A";
break;
case 32:
sVar0[0]="Shop_Franklin_Icon_B";
sVar0[1]="Shop_Franklin_Icon_A";
break;
case 33:
sVar0[0]="Shop_Trevor_Icon_B";
sVar0[1]="Shop_Trevor_Icon_A";
break;
case 52:
sVar0[0]="SaleIcon";
sVar0[1]="SaleIcon";
break;
case 53:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 55:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 56:
sVar0[0]="Shop_Lock_Arena";
sVar0[1]="Shop_Lock_Arena";
break;
case 57:
sVar0[0]="Card_Suit_Clubs";
sVar0[1]="Card_Suit_Clubs";
break;
case 58:
sVar0[0]="Card_Suit_Hearts";
sVar0[1]="Card_Suit_Hearts";
break;
case 59:
sVar0[0]="Card_Suit_Spades";
sVar0[1]="Card_Suit_Spades";
break;
case 60:
sVar0[0]="Card_Suit_Diamonds";
sVar0[1]="Card_Suit_Diamonds";
break;
case 61:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 63:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 62:
sVar0[0]="Shop_Chips_A";
sVar0[1]="Shop_Chips_B";
break;
case 0:
sVar0[0]="";
sVar0[1]="";
break;
}
if(bParam1){
return sVar0[0];
}
return sVar0[1];
}


var func__261(var uParam0){
return uParam0;
}


char* func_262(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_47(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_261(&uVar0);
}else{
return func_261(&(Global_23390.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_263(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23390.f_5661 > iParam0){
return;
}
if(Global_23390.f_5661 >=128){
return;
}
if(Global_23390.f_5663 >=256){
return;
}
if(Global_23390.f_6186 < Global_23390.f_6184){
return;
}
if(Global_23390.f_5661 !=iParam0){
Global_23390.f_5661=iParam0;
Global_23390.f_5662=0;
}
iVar0=Global_23390.f_5499[Global_23390.f_5662];
if(iVar0 !=1){
while (Global_23390.f_5662 < 4 && iVar0 !=1){
Global_23390.f_5662++;
iVar0=Global_23390.f_5499[Global_23390.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23390.f_1616[Global_23390.f_5663]=bParam3;
Global_23390.f_1873[Global_23390.f_5663]=iParam4;
Global_23390.f_2130[Global_23390.f_5663]=iParam6;
Global_23390.f_5663++;
if(!bParam3){
func_266(Global_23390.f_5661, 1);
}else{
func_266(Global_23390.f_5661, 0);
}
if(iParam2==0){
fVar1=func_265(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(Global_23390.f_5518[Global_23390.f_5662]){
func_269(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23390.f_5511[Global_23390.f_5662]){
Global_23390.f_5511[Global_23390.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_264(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(fVar4 > Global_23390.f_6188[iParam0]){
Global_23390.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
Global_23390.f_5662++;
Global_23390.f_6187=1;
Global_23390.f_6185=(Global_23390.f_5663 - 1);
Global_23390.f_6186=0;
Global_23390.f_6184=iParam2;
}


float func_264(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_265(char* sParam0){
if(!MISC::IS_STRING_NULL(uParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_248(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_266(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_267(bool bParam0, var uParam1, var uParam2, float fParam3){
float fVar0;
float fVar1;
float fVar2;
if(!bParam0){
GRAPHICS::GET_SCREEN_RESOLUTION(uParam1, uParam2);
return;
}
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(uParam1, uParam2);
fVar0=to_float(*uParam1);
fVar1=to_float(*uParam2);
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(func_268(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_268(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

int func_269(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_262(iParam0), 64);
StringCopy(&cVar1, func_260(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_267(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_270(iParam0) / fVar4);
Var5={
Var5 * Vector(fVar6, fVar6, fVar6) 
};
if(!bParam2){
Var5.f_0=(Var5.f_0 - 2f);
Var5.f_1=(Var5.f_1 - 2f);
}
if(iParam0==30){
Var5.f_0=288f;
Var5.f_1=106f;
}
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
Var5.f_0=106f;
Var5.f_1=106f;
}
*fParam3=((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
*fParam4=(((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
if(!bParam5){
if(!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 !=30){
*fParam3=(*fParam3 * 1.33f);
}}
if(iParam0==29){
if(*fParam3 > Global_23389){
*fParam4=(*fParam4 * (Global_23389 / *fParam3));
*fParam3=Global_23389;
}}
return 1;
}
return 0;
}


float func_270(int iParam0){
switch (iParam0){
case 33:
case 4:
case 11:
case 31:
case 20:
case 15:
case 10:
case 12:
case 13:
case 32:
case 9:
case 5:
case 6:
case 7:
case 14:
case 18:
case 19:
case 17:
case 28:
case 26:
case 27:
case 53:
case 57:
case 58:
case 59:
case 60:
case 61:
case 63:
return 0.5f;
break;
case 62:
return 0.8f;
break;
}
return 1f;
}

int func_271(bool bParam0, bool bParam1){
if(Global_2672524.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_22(8, -1) && func_272() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482){
return 0;
}
return 1;
}

int func_272(){
return Global_1574996;
}


void func_273(var uParam0){
if(func_291() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_289(uParam0);
}else{
func_274(uParam0);
}}


void func_274(var uParam0){
Global_23388=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_281("CommonMenu", "Interaction_bgd", &(uParam0->f_14), 1, 0, 4, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_275(&(uParam0->f_11), uParam0, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 1, 1);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_275(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5){
char* sVar0;
if(!func_160(sParam2)){
if(func_279()){
func_278(uParam1, 0);
HUD::SET_TEXT_JUSTIFICATION(iParam5);
if(func_160(sParam3)){
sVar0="STRING";
}else{
sVar0=sParam3;
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_277(*uParam0), func_276(uParam0->f_1), 0);
}}}


var func__276(var uParam0){
return uParam0;
}


var func__277(var uParam0){
return uParam0;
}


void func_278(var uParam0, bool bParam1){
HUD::SET_TEXT_FONT(*uParam0);
if(!uParam0->f_8==0f || !uParam0->f_9==0f){
HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
}
HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
switch (uParam0->f_7){
case 0:
break;
case 1:
HUD::SET_TEXT_OUTLINE();
HUD::SET_TEXT_DROP_SHADOW();
break;
case 3:
HUD::SET_TEXT_DROP_SHADOW();
break;
case 2:
HUD::SET_TEXT_OUTLINE();
break;
}
if(bParam1){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}

int func_279(){
if(func_280()){
return 1;
}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()){
return 0;
}
if(MISC::IS_FRONTEND_FADING()){
return 0;
}
return 1;
}


bool func_280(){
return Global_1574604;
}


void func_281(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0={
*uParam2 
};
switch (iParam4){
case 0:
func_288(&Var0);
break;
case 1:
func_287(&Var0);
break;
case 5:
func_286(&Var0);
break;
case 6:
func_285(&Var0);
break;
case 7:
func_284(&Var0);
break;
case 8:
func_283(&Var0);
break;
case 9:
func_282(&Var0);
break;
}
if(func_279()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
if(iParam3==1){
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_277(Var0.f_0), func_276(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}else{
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_277(Var0.f_0), func_276(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}


void func_282(var uParam0){
uParam0->f_4=128;
uParam0->f_5=128;
uParam0->f_6=128;
}


void func_283(var uParam0){
uParam0->f_7=2;
}


void func_284(var uParam0){
uParam0->f_7=5;
}


void func_285(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=70;
}


void func_286(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=100;
}


void func_287(var uParam0){
uParam0->f_4=(uParam0->f_4 - 50);
uParam0->f_5=(uParam0->f_5 - 50);
uParam0->f_6=(uParam0->f_6 - 50);
}


void func_288(var uParam0){
uParam0->f_4=uParam0->f_4;
uParam0->f_5=uParam0->f_5;
uParam0->f_6=uParam0->f_6;
uParam0->f_7=uParam0->f_7;
}


void func_289(var uParam0){
char* sVar0;
char* sVar1;
Global_23388=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
sVar0="FIXER_MENU_BANNERS";
sVar1="SHOP_BANNER_SHORT_TRIPS_FRANKLIN";
if(func_290(PLAYER::PLAYER_ID())==joaat("ig_lamardavis_02")){
sVar1="SHOP_BANNER_SHORT_TRIPS_LAMAR";
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0)){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_281(sVar0, sVar1, &(uParam0->f_14), 1, 0, 4, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_290(bool bParam0){
return ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
}

int func_291(){
return func_292(Global_4718592.f_117591);
}

int func_292(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(Global_262145.f_31929[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_293(){
Global_2794162.f_4636=0;
}


void func_294(){
var uVar0;
struct<3> Var1;
struct<35> Var2;
struct<3> Var3;
if(!MISC::IS_BIT_SET(Local_90.f_1, 9)){
if(MISC::IS_BIT_SET(Local_90.f_1, 8)){
Local_90.f_7.f_2=(PATHFIND::GET_APPROX_FLOOR_FOR_AREA((Local_90.f_7 - 7f), (Local_90.f_7.f_1 - 7f), (Local_90.f_7 + 7f), (Local_90.f_7.f_1 + 7f)) + 5f);
Var1={
Local_90.f_7 
};
Var2.f_5=1115815936;
Var2.f_13=2;
Var2.f_20=2;
Var2.f_32=-1082130432;
Var2.f_34=1;
Var2.f_4=1;
Var2.f_5=0f;
Var2.f_6=1;
if(((WATER::GET_WATER_HEIGHT_NO_WAVES(Var1, &uVar0) && !func_454(Var1)) || func_453()) || func_295(Var1, 100f, &(Local_90.f_7), &uVar0, &Var2)){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
Local_90.f_10={
Local_90.f_7 
};
iLocal_99=1;
MISC::SET_BIT(&(Local_90.f_1), 9);
MISC::SET_BIT(&(Local_90.f_1), 10);
Local_90.f_15[2]=0;
}}elseif(MISC::IS_BIT_SET(Local_90.f_1, 7)){
MISC::SET_BIT(&(Local_90.f_1), 8);
}}
if(!HUD::IS_WAYPOINT_ACTIVE()){
if(MISC::IS_BIT_SET(uLocal_95, 2)){
func_19();
MISC::CLEAR_BIT(&uLocal_95, 2);
}}elseif(!MISC::IS_BIT_SET(uLocal_95, 2)){
Var3={
HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) 
};
Var3.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((Var3.f_0 - 5f), (Var3.f_1 - 5f), (Var3.f_0 + 5f), (Var3.f_1 + 5f));
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, Var3, 1) > 1000f){
func_19();
Local_90.f_7={
Var3 
};
Local_90.f_10={
Var3 
};
HUD::SET_MINIMAP_BLOCK_WAYPOINT(1);
MISC::SET_BIT(&(Local_90.f_1), 7);
MISC::SET_BIT(&uLocal_95, 2);
iLocal_99=1;
}}}

int func_295(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4){
struct<17> Var0;
struct<18> Var1;
struct<3> Var2;
if(uParam4->f_5 > (fParam1 - 20f)){
uParam4->f_5=(fParam1 - 20f);
}
Var0=5;
Var0.f_16=5;
Var0.f_22=5;
Var0.f_28=5;
Var1.f_16=1;
Var1.f_22=1;
Var1.f_23=1;
Var1.f_24=1;
Var1.f_28=-1;
Var1={
Param0 
};
Var1.f_3=uParam4->f_11;
Var1.f_4=fParam1;
Var1.f_5=0;
Var1.f_6=1;
Var1.f_7=0;
Var1.f_15=0;
Var1.f_16=1;
Var1.f_17=0;
if(func_296(&Var1, uParam4, &Var0)){
if((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8){
Var2={
Param0 - Var0[0 /*3*/] 
};
if(Var2.f_2 > uParam4->f_12){
Var0[0 /*3*/]={
Param0 
};
Var0.f_16[0]=uParam4->f_11;
}}
*uParam2={
Var0[0 /*3*/] 
};
*uParam3=Var0.f_16[0];
return 1;
}
return 0;
}

int func_296(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
int iVar9;
struct<3> Var10;
struct<3> Var11;
var uVar12;
bool bVar13;
struct<61> Var14;
bool bVar15;
bVar13=false;
switch (uParam0->f_7){
case 0:
if(((!Global_2635560.f_2566==*uParam0 || !Global_2635560.f_2566.f_1==uParam0->f_1) || !Global_2635560.f_2566.f_2==uParam0->f_2) || !Global_2635560.f_2569==uParam0->f_4){
bVar13=true;
}
break;
case 1:
if(((((!Global_2635560.f_2580==uParam0->f_8 || !Global_2635560.f_2580.f_1==uParam0->f_8.f_1) || !Global_2635560.f_2580.f_2==uParam0->f_8.f_2) || !Global_2635560.f_2583==uParam0->f_11) || !Global_2635560.f_2583.f_1==uParam0->f_11.f_1) || !Global_2635560.f_2583.f_2==uParam0->f_11.f_2){
bVar13=true;
}
break;
case 2:
if((((((!Global_2635560.f_2580==uParam0->f_8 || !Global_2635560.f_2580.f_1==uParam0->f_8.f_1) || !Global_2635560.f_2580.f_2==uParam0->f_8.f_2) || !Global_2635560.f_2583==uParam0->f_11) || !Global_2635560.f_2583.f_1==uParam0->f_11.f_1) || !Global_2635560.f_2583.f_2==uParam0->f_11.f_2) || !Global_2635560.f_2586==uParam0->f_14){
bVar13=true;
}
break;
}
if(Global_1574477){
if(!Global_2635560.f_2587==uParam0->f_7){
bVar13=true;
}
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_2573) && !Global_2635560.f_2573==SCRIPT::GET_ID_OF_THIS_THREAD()){
bVar13=true;
}}
if(bVar13){
if(Global_2635560.f_2564==1){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_2573)){
if(Global_2635560.f_2573==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) < func_452(0)){
return 0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) < func_452(0)){
return 0;
}}
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_451();
}
Global_2635560.f_2564=0;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) > func_452(0)){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
func_445();
}
switch (uParam0->f_7){
case 0:
fVar2=(*uParam0 - uParam0->f_4);
fVar3=(uParam0->f_1 - uParam0->f_4);
fVar4=(*uParam0 + uParam0->f_4);
fVar5=(uParam0->f_1 + uParam0->f_4);
break;
case 1:
if(uParam0->f_8 < uParam0->f_11){
fVar2=uParam0->f_8;
fVar4=uParam0->f_11;
}else{
fVar2=uParam0->f_11;
fVar4=uParam0->f_8;
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar3=uParam0->f_8.f_1;
fVar5=uParam0->f_11.f_1;
}else{
fVar3=uParam0->f_11.f_1;
fVar5=uParam0->f_8.f_1;
}
break;
case 2:
if(uParam0->f_8 < uParam0->f_11){
fVar2=(uParam0->f_8 - (0.5f * uParam0->f_14));
fVar4=(uParam0->f_11 + (0.5f * uParam0->f_14));
}else{
fVar2=(uParam0->f_11 - (0.5f * uParam0->f_14));
fVar4=(uParam0->f_8 + (0.5f * uParam0->f_14));
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar3=(uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
fVar5=(uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
}else{
fVar3=(uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
fVar5=(uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
}
break;
}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
if(uParam0->f_7==0){
Var6={
*uParam0 
};
}else{
Var6={
uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
}
Var7={
Var6 + Vector(-0.1f, -0.1f, -0.1f) 
};
Var8={
Var6 + Vector(0.1f, 0.1f, 0.1f) 
};
if(!Global_2635560.f_2564){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_451();
if(uParam1->f_7 && uParam0->f_7==0){
if(vmag(*uParam0) > 0f){
if(func_444(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
return 1;
}}}
if(!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
Global_2635560.f_2587=uParam0->f_7;
switch (uParam0->f_7){
case 0:
Global_2635560.f_2566={
*uParam0 
};
Global_2635560.f_2569=uParam0->f_4;
break;
case 1:
Global_2635560.f_2580={
uParam0->f_8 
};
Global_2635560.f_2583={
uParam0->f_11 
};
Global_2635560.f_2586=0f;
Global_2635560.f_2566={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
case 2:
Global_2635560.f_2580={
uParam0->f_8 
};
Global_2635560.f_2583={
uParam0->f_11 
};
Global_2635560.f_2586=uParam0->f_14;
Global_2635560.f_2566={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
if(!uParam1->f_8 && !uParam1->f_9){
func_443(Var6.f_0, Var6.f_1);
}
Global_2635560.f_2565=1;
Global_2635560.f_2564=1;
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2570=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2573=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
return 0;
}}
if(Global_2635560.f_2564){
if(Global_2635560.f_2565==1){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 5000){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
if(uParam1->f_8 || uParam1->f_9){
if(uParam0->f_21){
*(uParam2[0 /*3*/])={
uParam0->f_18 
};
}else{
*(uParam2[0 /*3*/])={
Var6 
};
}
Var14.f_6=1082130432;
Var14.f_7=1176255488;
Var14.f_8=1;
Var14.f_10=1;
Var14.f_13=1;
Var14.f_15=1;
Var14.f_16=1;
Var14.f_31=1;
Var14.f_34=joaat("tailgater");
Var14.f_38=2;
Var14.f_45=2;
Var14.f_49=1123024896;
Var14.f_53=999;
Var14.f_54=1176256410;
Var14.f_55=1;
Var14.f_56=1;
Var14.f_57=1;
Var14={
*uParam1 
};
Var14.f_3=uParam1->f_5;
Var14.f_11=uParam1->f_9;
Var14.f_18=1;
if(uParam1->f_32 > 0f){
Var14.f_6=uParam1->f_32;
}
switch (uParam0->f_7){
case 0:
Var14.f_19={
*uParam0 
};
Var14.f_25=uParam0->f_4;
break;
case 1:
Var14.f_19={
uParam0->f_8 
};
Var14.f_22={
uParam0->f_11 
};
Var14.f_25=0f;
break;
case 2:
Var14.f_19={
uParam0->f_8 
};
Var14.f_22={
uParam0->f_11 
};
Var14.f_25=uParam0->f_14;
break;
}
Var14.f_26=uParam0->f_7;
Var14.f_12=uParam0->f_15;
if(uParam0->f_21){
Var14.f_30=1;
Var14.f_32=1;
}
iVar9=0;
while (iVar9 < 2){
Var14.f_38[iVar9 /*3*/]={
uParam1->f_13[iVar9 /*3*/] 
};
Var14.f_45[iVar9]=uParam1->f_20[iVar9];
iVar9++;
}
Var14.f_51=uParam1->f_30;
Var14.f_55=uParam0->f_16;
if(uParam0->f_26){
Var14.f_10=0;
}
if(func_442(Global_4718592.f_171044)){
Var14.f_9=1;
}
Var14.f_60=uParam0->f_30;
func_415(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
if((uParam1->f_7 && uParam1->f_9) && uParam0->f_7==0){
if(!func_414(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
}}
Global_2635560.f_2565=9;
}else{
Global_2635560.f_2565=2;
}}}
if(Global_2635560.f_2565==2){
if((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8)==0){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
if(uParam0->f_5 && !func_9(PLAYER::PLAYER_ID(), 0)){
Global_2635560.f_2565=3;
}else{
Global_2635560.f_2565=4;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2575) > 7000){
func_413(Var6.f_0, Var6.f_1);
}}
if(Global_2635560.f_2565==3){
if(func_412() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 10000){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=4;
}}
if(Global_2635560.f_2565==4){
if(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
}else{
iVar0=0;
func_445();
if(uParam0->f_5){
if(vmag(*uParam1)==0f){
iVar0 +=2;
}
if(uParam1->f_3){
iVar0 +=8;
}
iVar0 +=16;
iVar0 +=32;
if(!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
iVar0 +=64;
iVar0 +=128;
iVar0 +=256;
}
iVar0 +=2048;
iVar0 +=512;
iVar0 +=1024;
switch (uParam0->f_7){
case 0:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0)){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=5;
}
break;
case 1:
func_411(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, uVar12, *uParam1, iVar0)){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=5;
}
break;
case 2:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0)){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=5;
}
break;
}}else{
if(uParam1->f_3){
iVar0++;
}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=5;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_411(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}}}
if(Global_2635560.f_2565==5){
if(func_346(uParam2, uParam0, uParam1, 0)){
if(Global_2635560.f_2591.f_5){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=6;
}else{
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
if(!uParam0->f_5){
if(!vmag(*uParam1)==0f){
Var1={
*uParam1 - *(uParam2[0 /*3*/]) 
};
uParam2->f_16[0]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}}
Global_2635560.f_2565=9;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 20000){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=8;
}}
if(Global_2635560.f_2565==6){
iVar0=0;
Global_2635560.f_2591.f_1=0;
if(uParam1->f_3){
iVar0++;
}elseif(uParam0->f_7==0){
if(!func_345(uParam0->f_4)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6))){
iVar0++;
}}}elseif(!func_344(uParam0->f_8, uParam0->f_11, uParam0->f_14)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6))){
iVar0++;
}}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
if(uParam0->f_15){
iVar0 +=16;
}
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=7;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_411(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}
if(Global_2635560.f_2565==7){
if(func_346(uParam2, uParam0, uParam1, 1)){
if(vmag(*(uParam2[0 /*3*/]))==0f){
iVar9=0;
while (iVar9 < 3){
if(vmag(*(uParam2[0 /*3*/]))==0f){
if(!vmag(Global_2635560.f_2725[iVar9 /*3*/])==0f){
switch (uParam0->f_7){
case 0:
if(func_414(Global_2635560.f_2725[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635560.f_2725[iVar9 /*3*/] 
};
}
break;
case 1:
if(func_342(Global_2635560.f_2725[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635560.f_2725[iVar9 /*3*/] 
};
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635560.f_2725[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1)){
*(uParam2[0 /*3*/])={
Global_2635560.f_2725[iVar9 /*3*/] 
};
}
break;
}}
}
iVar9++;
}
if(vmag(*(uParam2[0 /*3*/]))==0f){
switch (uParam0->f_7){
case 0:
Var1={
*uParam0 
};
break;
case 1:
case 2:
Var1={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
func_299(&Var1, 0, 1, 1, 0, uParam0, uParam1);
*(uParam2[0 /*3*/])={
Var1 
};
}}
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
if(!vmag(*uParam1)==0f){
iVar9=0;
while (iVar9 < 5){
Var1={
*uParam1 - *(uParam2[iVar9 /*3*/]) 
};
uParam2->f_16[iVar9]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
iVar9++;
}}
Global_2635560.f_2565=9;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 20000){
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=8;
}}
if(Global_2635560.f_2565==8){
if(uParam0->f_5){
if(func_298(Global_2635560.f_489)){
}}elseif(Global_2635560.f_2591.f_2){
func_297(uParam2, &(Global_2635560.f_2591.f_6));
}else{
if(uParam0->f_15){
bVar15=false;
}else{
bVar15=true;
}
*(uParam2[0 /*3*/])={
Global_2635560.f_2566 
};
func_299(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
}
Global_2635560.f_2571=NETWORK::GET_NETWORK_TIME();
Global_2635560.f_2565=9;
}
if(Global_2635560.f_2565==9){
Global_2635560.f_2564=0;
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_451();
return 1;
}
Global_2635560.f_2570=NETWORK::GET_NETWORK_TIME();
}
return 0;
}


void func_297(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < 5){
*(uParam0[iVar0 /*3*/])={
(uParam1[iVar0 /*10*/])->f_4 
};
uParam0->f_16[iVar0]=(uParam1[iVar0 /*10*/])->f_7;
uParam0->f_22[iVar0]=(*uParam1)[iVar0 /*10*/];
iVar0++;
}}

int func_298(int iParam0){
if(iParam0==3 || iParam0==26){
return 1;
}
return 0;
}


void func_299(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6){
struct<3> Var0;
var uVar1;
struct<61> Var2;
var uVar3;
int iVar4;
bool bVar5;
int iVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
float fVar10;
Var2.f_6=1082130432;
Var2.f_7=1176255488;
Var2.f_8=1;
Var2.f_10=1;
Var2.f_13=1;
Var2.f_15=1;
Var2.f_16=1;
Var2.f_31=1;
Var2.f_34=joaat("tailgater");
Var2.f_38=2;
Var2.f_45=2;
Var2.f_49=1123024896;
Var2.f_53=999;
Var2.f_54=1176256410;
Var2.f_55=1;
Var2.f_56=1;
Var2.f_57=1;
if(bParam1){
iVar6=0;
}else{
iVar6=16;
}
if(!uParam6->f_3){
if(uParam5->f_5){
if(!uParam5->f_22){
iVar6 +=4;
}else{
switch (uParam5->f_7){
case 0:
Var7={
*uParam5 
};
if(func_345(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 1:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_344(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 2:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_344(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
}}}else{
iVar6 +=4;
}}
if(func_313(*uParam0, &Var0, iVar6, iParam3, 1)){}else{
bVar5=true;
}
if(bVar5){
Var0={
*uParam0 
};
Var2={
*uParam6 
};
Var2.f_8=1;
Var2.f_3=uParam6->f_5;
if(bParam2){
Var2.f_10=0;
}else{
Var2.f_10=1;
}
Var2.f_13=uParam5->f_15;
Var2.f_15=iParam3;
if(uParam6->f_32 > 0f){
Var2.f_6=uParam6->f_32;
}
if(bParam4){
Var2.f_18=1;
Var2.f_26=uParam5->f_7;
switch (uParam5->f_7){
case 0:
Var2.f_19={
*uParam5 
};
Var2.f_25=uParam5->f_4;
break;
case 1:
Var2.f_19={
uParam5->f_8 
};
Var2.f_22={
uParam5->f_11 
};
Var2.f_25=0f;
break;
case 2:
Var2.f_19={
uParam5->f_8 
};
Var2.f_22={
uParam5->f_11 
};
Var2.f_25=uParam5->f_14;
break;
}}
iVar4=0;
while (iVar4 < 2){
Var2.f_38[iVar4 /*3*/]={
uParam6->f_13[iVar4 /*3*/] 
};
Var2.f_45[iVar4]=uParam6->f_20[iVar4];
iVar4++;
}
Var2.f_51=uParam6->f_30;
Var2.f_55=uParam5->f_16;
if(func_311(PLAYER::PLAYER_ID(), 0)){
Var2.f_9=1;
}
Var2.f_60=uParam5->f_30;
func_415(&Var0, &uVar1, &Var2);
}
if(bParam4){
switch (uParam5->f_7){
case 0:
Var8={
*uParam5 
};
fVar10=uParam5->f_4;
break;
case 1:
Var8={
uParam5->f_8 
};
Var9={
uParam5->f_11 
};
break;
case 2:
Var8={
uParam5->f_8 
};
Var9={
uParam5->f_11 
};
fVar10=uParam5->f_14;
break;
}
if(!func_310(Var0, uParam5->f_7, Var8, Var9, fVar10)){
if(func_313(*uParam0, &Var0, iVar6, iParam3, 0)){
if(!func_310(Var0, uParam5->f_7, Var8, Var9, fVar10)){
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var8 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, 0, 0)){
Var0.f_2=uVar3;
}}}elseif(func_300(uParam0, 1, 1, 1, 1)){
func_299(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
}else{
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var8 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, 0, 0)){
Var0.f_2=uVar3;
}}}}
*uParam0={
Var0 
};
Global_2635560.f_667=1;
}

int func_300(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640611[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640611[iVar0 /*17*/].f_16)){
if(func_309(*uParam0, &(Global_2640611[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640611[iVar0 /*17*/].f_12){
*uParam0={
Global_2640611[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_301(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_300(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_301(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 1, 0);
}
*uParam0={
Var1 
};
}}
return 1;
}}}
iVar0++;
}
return 0;
}


void func_301(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_308(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_308(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_308(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_306(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_305(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_302(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}


void func_302(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
Var0={
Param2 - Param1 
};
Var0.f_2=0f;
Var1={
*uParam0 - Param1 
};
Var1.f_2=0f;
Var2={
func_304(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_303(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_303(Var2, Var1) >=0f){
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) 
};
}
Var4={
*uParam0 + Var2 
};
fVar6=vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
Var7={
Param1 + Param2 / Vector(2f, 2f, 2f) 
};
Var7.f_2=0f;
Var2={
func_304(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
Var2={
Var2 * FtoV((fParam3 * 0.5f)) 
};
Var8={
Var7 - Var2 
};
Var9={
Var7 + Var2 
};
Var10={
Var9 - Var8 
};
Var10.f_2=0f;
Var11={
*uParam0 - Var8 
};
Var11.f_2=0f;
Var2={
func_304(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_303(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_303(Var2, Var11) >=0f){
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) 
};
}
Var5={
*uParam0 + Var2 
};
if(vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f)){
*uParam0={
Var4 
};
}else{
*uParam0={
Var5 
};
}}}


float func_303(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__304(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_305(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
Var0={
*uParam0 
};
fVar1=(*uParam0 - Param1.f_0);
fVar2=(*uParam0 - Param3.f_0);
if(fVar1 < fVar2){
fVar3=fVar1;
}else{
fVar3=fVar2;
}
fVar4=(uParam0->f_1 - Param1.f_1);
fVar5=(uParam0->f_1 - Param3.f_1);
if(fVar4 < fVar5){
fVar6=fVar4;
}else{
fVar6=fVar5;
}
Var0={
*uParam0 
};
if(!bParam6){
if(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param1.f_0 - fParam5);
}else{
Var0.f_0=(Param3.f_0 + fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param1.f_1 - fParam5);
}else{
Var0.f_1=(Param3.f_1 + fParam5);
}}elseif(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param3.f_0 + fParam5);
}else{
Var0.f_0=(Param1.f_0 - fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param3.f_1 + fParam5);
}else{
Var0.f_1=(Param1.f_1 - fParam5);
}
*uParam0={
Var0 
};
}


void func_306(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
Var0={
*uParam0 - Param1 
};
Var0.f_2=0f;
if(vmag(Var0) > 0f){
Var0={
Var0 / FtoV(vmag(Var0)) 
};
}else{
Var0={
0f, 1f, 0f 
};
if(fParam5==0f){
func_307(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_307(&Var0, 0f, 0f, fParam5);
}}
Var0={
Var0 * FtoV((fParam2 + fParam3)) 
};
if(!bParam4){
Var1={
Param1 + Var0 
};
}else{
Var1={
Param1 - Var0 
};
}
*uParam0=Var1.f_0;
uParam0->f_1=Var1.f_1;
}


void func_307(var uParam0, struct<3> Param1){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=cos(Param1.f_0);
fVar1=sin(Param1.f_0);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_1);
fVar1=sin(Param1.f_1);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_2);
fVar1=sin(Param1.f_2);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


Vector3 func__308(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_306(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_305(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_302(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_414(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_342(Var1, Param1, Param2, 0, 0)){
return Var1;
}
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1)){
return Var1;
}
break;
}
iVar0++;
}
return Param0;
}

int func_309(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_414(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_342(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
break;
case 2:
if(bParam3 && bParam4){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
}elseif(bParam3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}elseif(bParam4){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}else{
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}
break;
}
return 0;
}

int func_310(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4){
switch (iParam1){
case 0:
if(vdist(Param0, Param2) <=fParam4){
return 1;
}
break;
case 1:
return func_342(Param0, Param2, Param3, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param2, Param3, fParam4, 0, 1);
break;
}
return 0;
}

int func_311(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_69()){
return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7)==12;
}}}
return 0;
}

int func_312(int iParam0){
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

int func_313(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4){
if(func_341(Param0, uParam1)){
if(func_314(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
if(PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam1, iParam2)){
if(func_314(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
return 0;
}

int func_314(struct<3> Param0, var uParam1, int iParam2, bool bParam3){
float fVar0;
var uVar1;
var uVar2;
fVar0=vdist(Param0, *uParam1);
if(fVar0 < 40f){
uVar1=2;
uVar2=2;
if((iParam2==1 && !func_327(Global_2635560.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2==0){
if(!func_318(*uParam1, 1056964608)){
if(!func_315(uParam1, 0)){
return 1;
}}}}
return 0;
}

int func_315(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
*uParam0 
};
iVar2=func_317(Var1);
iVar0=0;
while (iVar0 < Global_2642212[iVar2]){
if(func_316(Var1, &(Global_2640816[iVar2 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_302(&Var1, Global_2640816[iVar2 /*155*/][iVar0 /*7*/], Global_2640816[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2640816[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642212[8]){
if(func_316(Var1, &(Global_2640816[8 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_302(&Var1, Global_2640816[8 /*155*/][iVar0 /*7*/], Global_2640816[8 /*155*/][iVar0 /*7*/].f_3, Global_2640816[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}


bool func_316(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_317(struct<2> Param0, var uParam1){
if(Param0.f_1 > Global_2642223[0]){
return 0;
}
if(Param0.f_1 > Global_2642223[1]){
if(Param0.f_0 < Global_2642227[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642223[2]){
if(Param0.f_0 < Global_2642227[1]){
return 3;
}elseif(Param0.f_0 < Global_2642227[2]){
return 4;
}elseif(Param0.f_0 < Global_2642227[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_318(struct<3> Param0, float fParam1){
int iVar0;
if(func_208(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_42750 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_42750){
if(Global_4980736.f_42751[iVar0 /*160*/].f_7 !=0){
if(func_319(Param0, Global_4980736.f_42751[iVar0 /*160*/], Global_4980736.f_42751[iVar0 /*160*/].f_6, Global_4980736.f_42751[iVar0 /*160*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_6201 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_6201){
if(Global_4980736.f_6204[iVar0 /*546*/].f_15 !=0){
if(func_319(Param0, Global_4980736.f_6204[iVar0 /*546*/], Global_4980736.f_6204[iVar0 /*546*/].f_3, Global_4980736.f_6204[iVar0 /*546*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_91870 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_91870){
if(Global_4980736.f_91874[iVar0 /*529*/].f_12 !=0){
if(func_319(Param0, Global_4980736.f_91874[iVar0 /*529*/], Global_4980736.f_91874[iVar0 /*529*/].f_3, Global_4980736.f_91874[iVar0 /*529*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_233[iVar0], 0)){
if(func_319(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar0], 0)){
if(func_319(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}

int func_319(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_326(iParam3, 1008981770)){
func_320(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_320(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_307(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_321(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
Var3={
Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) 
};
Var3.f_2=(Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
Var4={
Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) 
};
Var4.f_2=(Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
*uParam3={
Var3 
};
*uParam4={
Var4 
};
*uParam5=MISC::ABSF((Var2.f_0 - Var1.f_0));
}


void func_321(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_324(iParam0);
if(iVar0 !=0){
func_322(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_322(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_323(iParam0, &Global_1578013);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1578013[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1578013[iVar0], &(Global_1578017[iVar0 /*3*/]), &(Global_1578024[iVar0 /*3*/]));
}
if(vmag(Global_1578017[iVar0 /*3*/]) <=0.01f || vmag(Global_1578024[iVar0 /*3*/]) <=0.01f){
Global_1578017[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578024[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1578017[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578024[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1578017[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578024[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578031[iVar0]=(Global_1578024[iVar0 /*3*/] - Global_1578017[iVar0 /*3*/]);
Global_1578034[iVar0]=(Global_1578024[iVar0 /*3*/].f_1 - Global_1578017[iVar0 /*3*/].f_1);
Global_1578037[iVar0]=(Global_1578024[iVar0 /*3*/].f_2 - Global_1578017[iVar0 /*3*/].f_2);
if(Global_1578031[iVar0] > Global_1578040){
Global_1578040=Global_1578031[iVar0];
}
if(Global_1578037[iVar0] > Global_1578041){
Global_1578041=Global_1578037[iVar0];
}
iVar0++;
}
Global_1578042=(Global_1578040 * -0.5f);
Global_1578045=(Global_1578040 * 0.5f);
Global_1578042.f_1=((((0.5f * Global_1578034[0]) + Global_1578034[1]) + Global_1578013.f_3) * -1f);
Global_1578045.f_1=(0.5f * Global_1578034[0]);
Global_1578042.f_2=(Global_1578037[0] * -0.5f);
Global_1578045.f_2=(Global_1578037[0] * 0.5f);
*uParam1={
Global_1578042 
};
*uParam2={
Global_1578045 
};
}


void func_323(int iParam0, var uParam1){
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

int func_324(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_325(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_325(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


float func_326(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_321(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_327(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_334(Param0)){
if(func_300(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_329(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_328(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_306(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
}
bVar1=true;
}
iVar0++;
}
if(bVar1){
return 1;
}
return 0;
}

int func_328(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(vdist(Param0, Global_2635560.f_2837[iVar0 /*3*/]) < fParam1){
return 1;
}
iVar0++;
}
return 0;
}

int func_329(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_331(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_301(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_331(Var2, &uVar1) || func_330(Var2)){
Var2={
*uParam0 
};
func_301(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}

int func_330(struct<3> Param0){
float fVar0;
if(Global_2635560.f_596 > 0f){
fVar0=vdist(Param0, Global_2635560.f_593);
if(fVar0 < Global_2635560.f_596){
return 1;
}}
return 0;
}

int func_331(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_333()){
return 0;
}
iVar1=func_332();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635560.f_368[iVar0 /*12*/].f_9==1){
if(func_309(Param0, &(Global_2635560.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_332(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635560.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_333(){
return Global_1950844.f_529;
}

int func_334(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635560.f_515 && !Global_2635560.f_516){
if(!Global_2635560.f_45.f_317){
if(!func_338(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_337(Param0, 1008981770)){
if(!func_300(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_300(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_336(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_335(&(Global_2635560.f_45[iVar0 /*12*/])) 
};
if(!func_300(&Var1, 0, 0, 0, 1)){
if(!func_300(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__335(var uParam0){
switch (uParam0->f_10){
case 0:
return *uParam0;
break;
case 1:
case 2:
return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
break;
}
return *uParam0;
}

int func_336(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_309(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_337(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_309(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_338(int iParam0, bool bParam1){
if(func_340() !=0){
return func_339(iParam0) !=0;
}
return func_208(iParam0, bParam1, 0);
}

int func_339(int iParam0){
if(func_13(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}

int func_340(){
return Global_32283;
}

int func_341(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
iVar1=-1;
fVar2=999999.9f;
if(Global_2635560.f_2362 > 0){
iVar0=0;
while (iVar0 < Global_2635560.f_2362){
fVar3=vdist(Global_2635560.f_2363[iVar0 /*4*/], Param0);
if(fVar3 < fVar2){
iVar1=iVar0;
fVar2=fVar3;
}
iVar0++;
}
if(!iVar1==-1){
*uParam1={
Global_2635560.f_2363[iVar1 /*4*/] 
};
return 1;
}}
return 0;
}

int func_342(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_343(&Param1, &Param2);
if(((!Param0.f_0 >=Param1.f_0 || !Param0.f_1 >=Param1.f_1) || !Param0.f_0 <=Param2.f_0) || !Param0.f_1 <=Param2.f_1){
return 0;
}
if(bParam3 && bParam4){
return 1;
}elseif(bParam3){
if(Param0.f_2 >=Param1.f_2){
return 1;
}}elseif(bParam4){
if(Param0.f_2 <=Param2.f_2){
return 1;
}}elseif(Param0.f_2 >=Param1.f_2 && Param0.f_2 <=Param2.f_2){
return 1;
}
return 0;
}


void func_343(var uParam0, var uParam1){
var uVar0;
if(*uParam0 > *uParam1){
uVar0=*uParam1;
*uParam1=*uParam0;
*uParam0=uVar0;
}
if(uParam0->f_1 > uParam1->f_1){
uVar0=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=uVar0;
}
if(uParam0->f_2 > uParam1->f_2){
uVar0=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=uVar0;
}}

int func_344(struct<3> Param0, struct<3> Param1, float fParam2){
struct<3> Var0;
struct<3> Var1;
if(Param0.f_0 > Param1.f_0){
Var1.f_0=Param0.f_0;
Var0.f_0=Param1.f_0;
}else{
Var1.f_0=Param1.f_0;
Var0.f_0=Param0.f_0;
}
if(Param0.f_1 > Param1.f_1){
Var1.f_1=Param0.f_1;
Var0.f_1=Param1.f_1;
}else{
Var1.f_1=Param1.f_1;
Var0.f_1=Param0.f_1;
}
if(Param0.f_2 > Param1.f_2){
Var1.f_2=Param0.f_2;
Var0.f_2=Param1.f_2;
}else{
Var1.f_2=Param1.f_2;
Var0.f_2=Param0.f_2;
}
if(vmag(Var1 - Var0) > 100f){
return 1;
}
if(fParam2 > 50f){
return 1;
}
return 0;
}

int func_345(float fParam0){
if(fParam0 > 50f){
return 1;
}
return 0;
}

int func_346(var uParam0, var uParam1, var uParam2, bool bParam3){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
if(Global_2635560.f_2591.f_1==0 && Global_2635560.f_2591==0){
if(uParam1->f_5 && !bParam3){
switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635560.f_2591.f_1))){
case 0:
func_409(uParam1, uParam2);
if(!Global_2635560.f_2591.f_2){
if(uParam2->f_7 && Global_2635560.f_555.f_7==0){
*(uParam0[0 /*3*/])={
*uParam1 
};
uParam0->f_16[0]=uParam1->f_3;
return 1;
}
else{
if(uParam1->f_21){
*(uParam0[0 /*3*/])={
uParam1->f_18 
};
}else{
*(uParam0[0 /*3*/])={
Global_2635560.f_2566 
};
}
if(uParam1->f_5 && func_298(Global_2635560.f_489)){
if(!Global_2635560.f_2591.f_5){
Global_2635560.f_2591.f_5=1;
}else{
func_299(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
func_299(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 1;
}}
break;
case 1:
func_409(uParam1, uParam2);
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
}}elseif(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
if(!PED::SPAWNPOINTS_IS_SEARCH_FAILED()){
if(PED::SPAWNPOINTS_IS_SEARCH_COMPLETE()){
func_409(uParam1, uParam2);
Global_2635560.f_2591.f_1=PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
}else{
return 0;
}}else{
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_409(uParam1, uParam2);
if(!Global_2635560.f_2591.f_2){
Global_2635560.f_2591.f_5=1;
return 1;
}}}else{
return 0;
}}
if(uParam1->f_5){
func_406(Global_2635560.f_555, &(Global_2635560.f_2591.f_57), &(Global_2635560.f_2591.f_90));
}
if(uParam2->f_7 && !Global_2635560.f_2591.f_4){
Global_2635560.f_2591.f_4=1;
func_354(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
}
iVar4=0;
if(uParam1->f_5){
iVar5=64;
}else{
iVar5=32;
}
if(Global_2635560.f_2591.f_1 > 0 || Global_2635560.f_2591 > 0){
if(uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
iVar2=0;
while (iVar2 < Global_2635560.f_2591.f_1){
if(iVar4 < iVar5){
if(iVar2 <=Global_2635560.f_2591.f_3){
iVar2=Global_2635560.f_2591.f_3 + 1;
}
if(iVar2 > (Global_2635560.f_2591.f_1 - 1)){
iVar2=(Global_2635560.f_2591.f_1 - 1);
}
if(iVar2 < 0){
iVar2=0;
}
if(uParam1->f_5 && !bParam3){
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
fVar1=(fVar1 * 57.29578f);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
}
if(uParam1->f_5 && !bParam3){
iVar3=NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
}
func_354(Var0, fVar1, uParam1, uParam2, 0, iVar3);
iVar4++;
Global_2635560.f_2591.f_3=iVar2;
}else{
return 0;
}
iVar2++;
}}else{
iVar2=Global_2635560.f_2591.f_1;
}
if(Global_2635560.f_2591.f_1==iVar2){
if(uParam1->f_5 && Global_2635560.f_2994){
func_348(&(Global_2635560.f_2591.f_6[0 /*10*/]), &(Global_2635560.f_2591.f_6[1 /*10*/]), &(Global_2635560.f_2591.f_6[2 /*10*/]));
}
if(uParam1->f_5 && func_298(Global_2635560.f_489)){
if(Global_2635560.f_2591.f_2){
func_297(uParam0, &(Global_2635560.f_2591.f_6));
func_347(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635560.f_2566 
};
func_299(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_347(*(uParam0[0 /*3*/]));
return 1;
}}elseif(Global_2635560.f_2591.f_2){
func_297(uParam0, &(Global_2635560.f_2591.f_6));
func_347(*(uParam0[0 /*3*/]));
return 1;
}elseif(uParam1->f_5){
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_2591.f_1);
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
if(!func_315(uParam0[0 /*3*/], 0)){
uParam0->f_16[0]=(uParam0->f_16[0] * 57.29578f);
func_347(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635560.f_2566 
};
func_299(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_347(*(uParam0[0 /*3*/]));
return 1;
}}else{
*(uParam0[0 /*3*/])={
Global_2635560.f_2566 
};
func_299(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_347(*(uParam0[0 /*3*/]));
return 1;
}}}else{
*(uParam0[0 /*3*/])={
Global_2635560.f_2566 
};
if(uParam1->f_5 && func_298(Global_2635560.f_489)){
if(!Global_2635560.f_2591.f_5){
Global_2635560.f_2591.f_5=1;
}else{
func_299(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
if(uParam1->f_15){
bVar6=false;
}else{
bVar6=true;
}
func_299(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_347(*(uParam0[0 /*3*/]));
return 1;
}
return 0;
}


void func_347(struct<3> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(iVar0 > 0){
Global_2635560.f_2725[(3 - iVar0) /*3*/]={
Global_2635560.f_2725[(3 - iVar0 + 1) /*3*/] 
};
}
iVar0++;
}
Global_2635560.f_2725[0 /*3*/]={
Param0 
};
}


void func_348(var uParam0, var uParam1, var uParam2){
if(func_298(Global_2635560.f_489) && func_353() < 4096){
func_352(uParam0, 0f);
func_352(uParam1, uParam0->f_2);
func_352(uParam2, uParam1->f_2);
}else{
func_351(uParam0);
func_350(uParam2, uParam0->f_4);
func_349(uParam1, uParam0->f_4, uParam2->f_4);
}}


void func_349(var uParam0, struct<3> Param1, struct<3> Param2){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
struct<10> Var5;
fVar1=-1f;
Var5.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638608[iVar0 /*10*/].f_4, Param1);
fVar3=vdist(Global_2638608[iVar0 /*10*/].f_4, Param2);
fVar4=(fVar2 + fVar3);
fVar4=(fVar4 * Global_2638608[iVar0 /*10*/].f_1);
if(fVar4 > fVar1){
fVar1=fVar4;
Var5={
Global_2638608[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var5 
};
}


void func_350(var uParam0, struct<3> Param1){
int iVar0;
float fVar1;
float fVar2;
struct<10> Var3;
fVar1=-1f;
Var3.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638608[iVar0 /*10*/].f_4, Param1);
fVar2=(fVar2 * Global_2638608[iVar0 /*10*/].f_1);
if(fVar2 > fVar1){
fVar1=fVar2;
Var3={
Global_2638608[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var3 
};
}


void func_351(var uParam0){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=-1f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > 0){
if(Global_2638608[iVar0 /*10*/].f_1 > fVar1){
fVar1=Global_2638608[iVar0 /*10*/].f_1;
Var2={
Global_2638608[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}


void func_352(var uParam0, float fParam1){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=999999.9f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > 0){
if(Global_2638608[iVar0 /*10*/].f_2 < fVar1 && Global_2638608[iVar0 /*10*/].f_2 > fParam1){
fVar1=Global_2638608[iVar0 /*10*/].f_2;
Var2={
Global_2638608[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}

int func_353(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > iVar1){
iVar1=Global_2638608[iVar0 /*10*/];
}
iVar0++;
}
return iVar1;
}


void func_354(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
float fVar5;
float fVar6;
var uVar7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
struct<3> Var12;
bool bVar13;
int iVar14;
struct<3> Var15;
struct<3> Var16;
float fVar17;
int iVar18;
struct<10> Var19;
bool bVar20;
bool bVar21;
iVar10=0;
iVar8=0;
bVar9=false;
if(uParam2->f_5){
if(Global_2635560.f_489==1){
if(MISC::ABSF((Global_2635560.f_512.f_2 - Param0.f_2)) < 25f){
iVar8++;
}}else{
iVar8++;
}}else{
iVar8++;
}
if(uParam2->f_5){
if(func_403(PLAYER::PLAYER_ID())){
if(iParam5==-1){
bVar9=true;
}elseif(!iParam5 & 1==0){
bVar9=true;
}}elseif(iParam5==-1){
iVar8 +=2;
}elseif(!iParam5 & 1==0){
iVar8 +=2;
}}else{
iVar8 +=2;
}
if(uParam2->f_5 && uParam2->f_6){
if(!func_402(Param0, 1084227584, 1123024896, 0)){
iVar8 +=4;
}}else{
iVar8 +=4;
}
if(uParam2->f_5){
if(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f)){
iVar8 +=8;
iVar8 +=16;
}elseif(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f)){
iVar8 +=8;
}}else{
iVar8 +=8;
iVar8 +=16;
}
if(uParam2->f_5){
if(!func_401(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0)){
iVar8 +=32;
}}else{
iVar8 +=32;
}
bVar13=true;
iVar11=0;
while (iVar11 < 2){
if(vmag(uParam3->f_13[iVar11 /*3*/]) > 0f){
if(!vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11]){
bVar13=false;
}}
iVar11++;
}
if(bVar13){
if((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1)){
bVar13=false;
}}}
if(bVar13){
iVar8 +=256;
}
if(uParam2->f_5){
if(func_396(Param0, fParam1, uParam2->f_15, func_400(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0)){
iVar8 +=64;
iVar8 +=128;
}else{
iVar10=Global_2635560.f_3;
}}elseif(!func_393(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1)){
if(uParam2->f_15){
fVar1=3.5f;
}else{
fVar1=1f;
}
if(!func_390(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1)){
iVar8 +=128;
iVar8 +=64;
}elseif(!func_390(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1)){
iVar8 +=64;
}}
if(uParam2->f_5){
if(!Global_2635560.f_701){
Var12={
Global_2635560.f_512 
};
if(Global_2635560.f_489==26){
Var12={
Global_2635560.f_555.f_18 
};
}
if(!func_328(Param0, 0.5f)){
if(func_334(Var12)){
if(!func_300(&Param0, 0, 0, 0, 1) && !func_389(&Param0, 0)){
iVar8 +=512;
}}elseif(!func_389(&Param0, 0)){
iVar8 +=512;
}}}else{
iVar8 +=512;
}}elseif(!func_388(Param0, 2.5f, 3)){
iVar8 +=512;
}
if(uParam2->f_5){
if(!(func_207(PLAYER::PLAYER_ID()) && func_386(PLAYER::PLAYER_ID()))){
if(!func_385(&Param0, &(Global_2635560.f_2591.f_90), 0, 1065353216)){
iVar8 +=1024;
}}else{
iVar8 +=1024;
}}else{
iVar8 +=1024;
}
if(uParam2->f_5){
if(!func_386(PLAYER::PLAYER_ID())){
if(!func_384(Param0, &(Global_2635560.f_2591.f_57), &(Global_2635560.f_2591.f_90), 1073741824)){
iVar8 +=2048;
}}else{
iVar8 +=2048;
}}else{
iVar8 +=2048;
}
if(func_383(Param0)){
if(uParam2->f_5){
if(func_298(Global_2635560.f_489)){
if(func_337(Param0, 0.01f)){
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}
if(uParam2->f_5){
if(func_382(Param0)){
iVar8 +=8192;
}}else{
iVar8 +=8192;
}
if(!Global_2635560.f_45.f_55){
iVar8 +=16384;
}elseif(uParam2->f_5){
if(!iParam5 & 1==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}}elseif(!iParam5 & 2==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}
if(uParam2->f_5){
if(!Global_2635560.f_701){
if(!func_329(&Param0, 0, 0)){
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}
if(!func_315(&Param0, 0)){
iVar8=(iVar8 + 65536);
}else{
iVar14=func_336(Param0, 1008981770);
if(iVar14 > -1){
func_381(Param0, &Var15, &Var16, &fVar17);
if(!func_376(&(Global_2635560.f_45[iVar14 /*12*/]), Var15, Var16, fVar17)){
iVar8=-1;
}}else{
iVar8=-1;
}}
if(func_318(Param0, 1056964608)){
iVar8=-1;
}
if(uParam3->f_33){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f)){
iVar8=-1;
}}
if(uParam3->f_34){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f)){
iVar8=-1;
}}
if(uParam2->f_5){}elseif(func_375(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888)){
iVar8=0;
}
Var19.f_2=1176256410;
bVar20=false;
bVar21=false;
if(Global_2635560.f_2994 && uParam2->f_5){
if(iVar8 > 0){
if(bParam4){
uParam3->f_4=0;
bVar4=false;
}else{
bVar4=true;
}
if(uParam2->f_21){
fVar0=func_366(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}else{
fVar0=func_366(Param0, Global_2635560.f_2566, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
if(func_298(Global_2635560.f_489) && iVar8 < 4096){
Var19.f_2=func_364(Param0);
}
uVar7=func_360(Param0, 1, 0, 0, 0, 0);
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_9=uVar7;
func_359(Var19);
Global_2635560.f_2591.f_2=1;
}}else{
iVar18=0;
while (iVar18 < 5){
if(iVar8 >=Global_2635560.f_2591.f_6[iVar18 /*10*/]){
if(uParam2->f_5){
if(!bVar20){
if(bParam4){
uParam3->f_4=0;
bVar4=false;
}
else{
bVar4=true;
}
if(uParam2->f_21){
fVar0=func_366(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
else{
fVar0=func_366(Param0, Global_2635560.f_2566, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
bVar20=true;
}
if((func_298(Global_2635560.f_489) && iVar8==Global_2635560.f_2591.f_6[iVar18 /*10*/]) && iVar8 < 4096){
if(!bVar21){
fVar2=func_364(Param0);
bVar21=true;
}
if(fVar2 < Global_2635560.f_2591.f_6[iVar18 /*10*/].f_2){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_2=fVar2;
func_358(Var19, iVar18);
Global_2635560.f_2591.f_2=1;
return;
}}elseif(iVar8 > Global_2635560.f_2591.f_6[iVar18 /*10*/] || (iVar8==Global_2635560.f_2591.f_6[iVar18 /*10*/] && fVar0 > Global_2635560.f_2591.f_6[iVar18 /*10*/].f_1)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
func_358(Var19, iVar18);
Global_2635560.f_2591.f_2=1;
return;
}}else{
if(!bVar20){
if(uParam2->f_15){
fVar1=3.5f;
}
else{
fVar1=1f;
}
fVar5=func_356(Param0, fVar1, 1, 1, 0, -1, 1);
fVar6=func_360(Param0, 1, 1, 1, 1, 0);
if(fVar5 > 15f && fVar6 > 5f){
fVar3=func_355(fVar5, 0f, 80f, 160f, 1f, 1.2f);
}
else{
fVar3=func_355(fVar6, 0f, 80f, 160f, 0f, 0.2f);
}
bVar20=true;
}
if(iVar8 > Global_2635560.f_2591.f_6[iVar18 /*10*/] || (iVar8==Global_2635560.f_2591.f_6[iVar18 /*10*/] && fVar3 > Global_2635560.f_2591.f_6[iVar18 /*10*/].f_3)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_3=fVar3;
func_358(Var19, iVar18);
Global_2635560.f_2591.f_2=1;
return;
}}}
iVar18++;
}}}


float func_355(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
float fVar0;
if(fParam1 >=fParam3){
fParam1=(fParam3 * 0.5f);
}
if(fParam0 < fParam1){
fParam0=fParam1;
}
if(fParam0 > fParam3){
fParam0=fParam3;
}
if(fParam2 < fParam3 && fParam2 > fParam1){
if(fParam0 < fParam2){
fVar0=(fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
}else{
fVar0=(fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
}}else{
fVar0=(fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
}
return fVar0;
}


float func_356(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
int iVar0;
int iVar1;
bool bVar2;
float fVar3;
float fVar4;
bVar2=false;
fVar3=1E+13f;
if(iParam2 && !bParam4){
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_13(iVar1, 1, 1)){
if(!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if(func_357(bVar1) || !bParam6){
if(!bParam4){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam5 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}
}}}}}
iVar0++;
}
if(bVar2){
return sqrt(fVar3);
}
return -1f;
}

int func_357(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[bParam0 /*463*/].f_255){
return 1;
}
return 0;
}


void func_358(struct<10> Param0, int iParam1){
struct<10> Var0;
Var0.f_2=1176256410;
Var0={
Global_2635560.f_2591.f_6[iParam1 /*10*/] 
};
Global_2635560.f_2591.f_6[iParam1 /*10*/]={
Param0 
};
if(iParam1 < 4){
func_358(Var0, iParam1 + 1);
}}


void func_359(struct<10> Param0){
int iVar0;
struct<10> Var1;
int iVar2;
float fVar3;
int iVar4;
Var1.f_2=1176256410;
iVar2=func_353();
if(Param0.f_0 > iVar2){
iVar2=Param0.f_0;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] < iVar2){
Global_2638608[iVar0 /*10*/]={
Var1 
};
}
iVar0++;
}
if(Param0.f_0 < iVar2){
return;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/]==0){
Global_2638608[iVar0 /*10*/]={
Param0 
};
return;
}
iVar0++;
}
fVar3=9999.9f;
iVar4=-1;
iVar0=0;
while (iVar0 < 128){
if(Global_2638608[iVar0 /*10*/] > 0){
if(Global_2638608[iVar0 /*10*/].f_1 < fVar3){
fVar3=Global_2638608[iVar0 /*10*/].f_1;
iVar4=iVar0;
}}
iVar0++;
}
if(iVar4 > -1){
Global_2638608[iVar4 /*10*/]={
Param0 
};
}}


float func_360(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
struct<3> Var5;
struct<3> Var6;
int iVar7;
fVar3=999999.9f;
bVar4=false;
iVar0=0;
while (iVar0 < 32){
iVar7=iVar0;
if(func_13(iVar7, 1, 1) || (iParam5==1 && func_13(iVar7, 0, 0))){
if(!iVar7==PLAYER::PLAYER_ID() || iParam3==1){
bVar4=false;
if(bParam1){
if(func_361(iVar7)){
bVar4=true;
}}
if(bParam2){
if(PLAYER::GET_PLAYER_TEAM(iVar7)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(!PLAYER::GET_PLAYER_TEAM(bVar7)==-1 || !func_338(PLAYER::PLAYER_ID(), 1)){
bVar4=true;
}}}
if(bVar4){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar7) || !bParam4){
if(func_357(bVar7)){
Var5={
func_155(bVar7) 
};
if(!bVar7==PLAYER::PLAYER_ID()){
Var6={
NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar7)) 
};
}else{
Var6={
Var5 
};
}
if(!bParam4){
if(Var5.f_2 < -100f){
Var5.f_2=Param0.f_2;
}
if(Var6.f_2 < -100f){
Var6.f_2=Param0.f_2;
}}
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, 1);
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, 1);
if(fVar1 < fVar3){
fVar3=fVar1;
}
if(fVar2 < fVar3){
fVar3=fVar2;
}
}}}}}
iVar0++;
}
return fVar3;
}

int func_361(bool bParam0){
if(func_13(iParam0, 0, 1)){
if(!func_88(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_208(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_6(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_208(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_362(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_362(int iParam0){
if(func_152(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_47(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_363(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_363(int iParam0, int iParam1){
int iVar0;
iVar0=func_68(iParam0);
if(func_12(iVar0)){
if(iVar0==func_68(iParam1)){
return 1;
}}
return 0;
}


float func_364(struct<3> Param0){
var uVar0;
return func_365(Param0, &(Global_2635560.f_45), &uVar0);
}


float func_365(struct<3> Param0, var uParam1, var uParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=-1;
fVar2=1E+07f;
iVar0=0;
while (iVar0 < *uParam1){
if((uParam1[iVar0 /*12*/])->f_9){
fVar1=0f;
switch ((uParam1[iVar0 /*12*/])->f_10){
case 0:
fVar1=vdist(*(uParam1[iVar0 /*12*/]), Param0);
fVar1=(fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635560.f_2835) * (uParam1[iVar0 /*12*/])->f_8)));
break;
case 1:
case 2:
if(Param0.f_0 < (*uParam1)[iVar0 /*12*/]){
fVar1=(fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
}elseif(Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3){
fVar1=(fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
}
if(Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1){
fVar1=(fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
}elseif(Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1){
fVar1=(fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
}
if(Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2){
fVar1=(fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
}elseif(Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2){
fVar1=(fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
}
break;
}
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}
iVar0++;
}
if(fVar2 < 0f){
fVar2=0f;
}
*uParam2=iVar3;
return fVar2;
}


float func_366(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
fVar1=1f;
if(iParam5 > 0){
fVar1=(to_float(iParam5) / to_float(8));
}
if(bParam2){
fVar0=func_355(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
}
*uParam6=1E+07f;
fVar4=func_360(Param0, 1, 0, 0, 1, 0);
fVar0=func_355(fVar4, 0f, func_374(), func_372(), 0f, 0.3f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar4=func_370(Param0);
fVar0=func_355(fVar4, 0f, 0f, 60f, 0.5f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar5=100f;
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !func_338(PLAYER::PLAYER_ID(), 1)){
fVar5=1f;
}
fVar4=func_368(Param0, PLAYER::PLAYER_ID(), 0);
fVar0=func_355(fVar4, 0f, 0f, fVar5, 0f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
if(bParam3){
if(func_367(Param0, &fVar2, &fVar3)){
if(fVar2 < 10f){
fVar2=10f;
}
if(fVar3 < 0.5f){
fVar3=0.5f;
}
fVar0=func_355(fVar2, 0f, 0f, 200f, 1f, 0.1f);
fVar0=(fVar0 + func_355(fVar3, 0f, 0f, 6f, 1f, 0.5f));
fVar0=(fVar0 * 0.5f);
fVar1=(fVar1 * (fVar0 * 0.85f));
}}
if(bParam4){
fVar0=func_355(vdist(Global_2635560.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.9f));
}
return fVar1;
}

int func_367(struct<3> Param0, var uParam1, var uParam2){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
uVar1=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar1)){
PATHFIND::GET_VEHICLE_NODE_POSITION(uVar1, &Var0);
*uParam1=vdist(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
*uParam2=MISC::ABSF((Param0.f_2 - Var0.f_2));
return 1;
}
return 0;
}


float func_368(struct<3> Param0, bool bParam1, int iParam2){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=999999.9f;
if(func_13(iParam1, 0, 1)){
iVar2=0;
while (iVar2 < 32){
if(!iParam1==iVar2 || iParam2==1){
iVar3=iVar2;
if(func_13(iVar3, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar3) !=PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(bVar3)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1)){
if(!func_369(bVar3, bParam1)){
if(Global_2648711.f_261[iVar2]){
fVar1=vdist(Global_2648711.f_131[iVar2 /*3*/], Param0);
if(fVar1 < fVar0){
fVar0=fVar1;
}}
}}}}
iVar2++;
}}
return fVar0;
}

int func_369(int iParam0, int iParam1){
int iVar0;
if(func_12(iParam0) && func_12(iParam1)){
iVar0=func_68(iParam0);
if(iVar0 !=func_69()){
return iVar0==func_68(iParam1);
}}
return 0;
}


float func_370(struct<3> Param0){
float fVar0;
float fVar1;
int iVar2;
struct<3> Var3;
var uVar4[32];
int iVar5;
iVar5=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, 2);
fVar0=1E+07f;
iVar2=0;
while (iVar2 < iVar5){
if(ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0)){
if(func_371(uVar4[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}}}}
iVar2++;
}
if(Global_2635560.f_3039){
if(Global_1058071.f_267 > 0){
iVar2=0;
while (iVar2 < Global_1058071.f_267){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_152[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1058071.f_152[iVar2], 0)){
if(func_371(Global_1058071.f_152[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(Global_1058071.f_152[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}
}}}
iVar2++;
}}}
return fVar0;
}

int func_371(var uParam0){
var uVar0;
int iVar1;
uVar0=PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, joaat("player"))){
case 3:
case 5:
return 1;
break;
}
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837183[PLAYER::PLAYER_ID()])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1837183[PLAYER::PLAYER_ID()])){
case 3:
case 5:
return 1;
break;
}}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==0){
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(iVar1 > -1 && iVar1 < 4){
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836893[iVar1])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1836893[iVar1])){
case 3:
case 5:
return 1;
break;
}}}}
return 0;
}


float func_372(){
if(func_373()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635560.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635560.f_45.f_67)) || Global_2635560.f_45.f_67==joaat("rhino")){
return 640f;
}else{
return 320f;
}}
return 160f;
}

int func_373(){
if(Global_2635560.f_45.f_65 && !Global_2635560.f_45.f_304){
if(!func_88(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


float func_374(){
if(func_373()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635560.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635560.f_45.f_67)) || Global_2635560.f_45.f_67==joaat("rhino")){
return 320f;
}else{
return 160f;
}}
return 80f;
}

int func_375(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7){
float fVar0;
fVar0=iParam4;
if(bParam3){
fVar0=fParam5;
}
if((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2==1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, 0))) || ((iParam1==1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, 1))){
return 1;
}
return 0;
}

int func_376(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3){
switch (uParam0->f_10){
case 0:
if(func_380(*uParam0, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
case 1:
if(func_379(*uParam0, uParam0->f_3, Param1, Param2, fParam3)){
return 1;
}
break;
case 2:
if(func_377(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
}
return 0;
}

int func_377(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5){
struct<3> Var0[8];
int iVar1;
func_378(Param0, Param1, fParam2, &Var0);
iVar1=0;
while (iVar1 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}


void func_378(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3){
struct<3> Var0;
struct<3> Var1;
var uVar2;
var uVar3;
if(Param0.f_2==Param1.f_2){
Param1.f_2=(Param1.f_2 + 0.01f);
}
Var0={
Param0 - Param1 
};
Var1={
func_304(Var0, Var0.f_0, Var0.f_1, 0f) 
};
Var1={
Var1 / FtoV(vmag(Var1)) 
};
Var1={
Var1 * FtoV((fParam2 * 0.5f)) 
};
if(Param0.f_2 > Param1.f_2){
uVar2=Param1.f_2;
uVar3=Param0.f_2;
}else{
uVar2=Param0.f_2;
uVar3=Param1.f_2;
}
*(uParam3[0 /*3*/])={
Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 
};
*(uParam3[1 /*3*/])={
Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 
};
*(uParam3[2 /*3*/])={
Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 
};
*(uParam3[3 /*3*/])={
Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 
};
*(uParam3[4 /*3*/])={
Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 
};
*(uParam3[5 /*3*/])={
Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 
};
*(uParam3[6 /*3*/])={
Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 
};
*(uParam3[7 /*3*/])={
Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 
};
}

int func_379(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4){
struct<3> Var0[8];
int iVar1;
Var0[0 /*3*/]={
Param0.f_0, Param0.f_1, Param0.f_2 
};
Var0[1 /*3*/]={
Param0.f_0, Param0.f_1, Param1.f_2 
};
Var0[2 /*3*/]={
Param0.f_0, Param1.f_1, Param1.f_2 
};
Var0[3 /*3*/]={
Param0.f_0, Param1.f_1, Param0.f_2 
};
Var0[4 /*3*/]={
Param1.f_0, Param0.f_1, Param0.f_2 
};
Var0[5 /*3*/]={
Param1.f_0, Param0.f_1, Param1.f_2 
};
Var0[6 /*3*/]={
Param1.f_0, Param1.f_1, Param1.f_2 
};
Var0[7 /*3*/]={
Param1.f_0, Param1.f_1, Param0.f_2 
};
iVar1=0;
while (iVar1 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}

int func_380(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4){
struct<3> Var0[4];
int iVar1;
Var0[0 /*3*/]={
Param0 + Vector(0f, fParam1, 0f) 
};
Var0[1 /*3*/]={
Param0 + Vector(0f, (-1f * fParam1), 0f) 
};
Var0[2 /*3*/]={
Param0 + Vector(0f, 0f, fParam1) 
};
Var0[3 /*3*/]={
Param0 + Vector(0f, 0f, (-1f * fParam1)) 
};
iVar1=0;
while (iVar1 < 4){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}


void func_381(struct<3> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
Param0 
};
iVar2=func_317(Var1);
iVar0=0;
while (iVar0 < Global_2642212[iVar2]){
if(func_316(Var1, &(Global_2640816[iVar2 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640816[iVar2 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640816[iVar2 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640816[iVar2 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642212[8]){
if(func_316(Var1, &(Global_2640816[8 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640816[8 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640816[8 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640816[8 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}}

int func_382(struct<3> Param0){
var uVar0;
int iVar1;
if(Global_2635560.f_45.f_55){
if(INTERIOR::IS_VALID_INTERIOR(Global_2635560.f_45.f_56)){
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
uVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
iVar1=INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
if(!iVar1==Global_2635560.f_45.f_57){
return 0;
}}else{
return 0;
}}else{
return 0;
}}}
return 1;
}

int func_383(struct<3> Param0){
switch (Global_2635560.f_2587){
case 0:
return func_414(Param0, Global_2635560.f_2566, Global_2635560.f_2569, 0, 0);
break;
case 1:
return func_342(Param0, Global_2635560.f_2580, Global_2635560.f_2583, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635560.f_2580, Global_2635560.f_2583, Global_2635560.f_2586, 0, 1);
break;
}
return 0;
}

int func_384(struct<3> Param0, var uParam1, var uParam2, float fParam3){
float fVar0;
int iVar1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
fVar0=0f;
iVar1=0;
iVar1=0;
while (iVar1 < *uParam1){
fVar0=((uParam1[iVar1 /*4*/])->f_3 + fParam3);
if(vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0){
return 1;
}
iVar1++;
}
Var2={
0f, 0f, 0f 
};
Var3={
0f, 0f, 0f 
};
fVar4=0f;
iVar1=0;
while (iVar1 < *uParam2){
Var2={
*(uParam2[iVar1 /*10*/]) 
};
Var3={
(uParam2[iVar1 /*10*/])->f_3 
};
fVar4=(uParam2[iVar1 /*10*/])->f_6;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, 0, 1)){
return 1;
}
iVar1++;
}
return 0;
}

int func_385(var uParam0, var uParam1, bool bParam2, float fParam3){
int iVar0;
struct<3> Var1;
iVar0=0;
iVar0=0;
while (iVar0 < *uParam1){
if(vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3)){
if(bParam2){
Var1={
*uParam0 
};
func_306(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}

int func_386(int iParam0){
switch (func_340()){
case 0:
if(!func_387(iParam0)){
if(Global_1853988[iParam0 /*867*/]==0){
return 1;
}}
break;
}
return 0;
}


bool func_387(int iParam0){
return Global_1853988[iParam0 /*867*/].f_192 !=0;
}

int func_388(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < iParam2){
if(vdist2(Global_2635560.f_2725[iVar0 /*3*/], Param0) < (fParam1 * fParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_389(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_330(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_306(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 0, fVar2);
if(func_331(Var1, &uVar0) || func_330(Var1)){
Var1={
*uParam0 
};
func_306(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_390(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_391(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_13(iVar1, 1, 1)){
if(!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_357(bVar1) || !bParam8) && !Global_2657704[bVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_391(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_391(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__391(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_82() && Global_1853988[iVar0 /*867*/].f_834) && !func_392(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_155(iParam0);
}

int func_392(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_393(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
if(func_395(Param0, fParam1, iParam2, iParam3, 0) || func_394(Param0, iParam2, iParam4)){
return 1;
}
return 0;
}

int func_394(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam1==iVar0 || iParam2==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_319(Param0, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_13(iVar2, 0, 1) && func_13(iParam1, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_395(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam2==iVar0 || iParam3==1){
iVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_13(bVar1, 0, 1) && func_13(bParam2, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_155(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_13(bVar1, 0, 1)){
if(vdist(func_155(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_396(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13){
Global_2635560.f_3=0;
if(!func_393(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0)){
Global_2635560.f_3++;
if(bParam3){
if(func_444(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
if(!func_399(Param0, fParam10)){
Global_2635560.f_3++;
if(!func_318(Param0, 1056964608)){
Global_2635560.f_3++;
return 1;
}}}else{
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
}}elseif(!bParam2){
if(func_444(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
if(!func_399(Param0, fParam10)){
Global_2635560.f_3++;
if(!func_397(Param0, fParam1, fParam7, fParam8, 1084227584)){
Global_2635560.f_3++;
if(!func_318(Param0, 1056964608)){
Global_2635560.f_3++;
return 1;
}}}}else{
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
}}elseif(func_444(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
if(!func_399(Param0, fParam10)){
Global_2635560.f_3++;
if(!func_397(Param0, fParam1, fParam7, fParam8, fParam9)){
Global_2635560.f_3++;
if(!func_318(Param0, 1056964608)){
Global_2635560.f_3++;
return 1;
}}}}else{
Global_2635560.f_3=(Global_2635560.f_3 + Global_2635560.f_2);
}}
return 0;
}

int func_397(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(!PLAYER::PLAYER_ID()==iVar1){
if((func_13(iVar1, 1, 1) && func_357(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!func_64(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(func_398(func_155(bVar1), Param0, fParam1, fParam2, fParam3, fParam4)){
return 1;
}}}}
iVar0++;
}
return 0;
}


bool func_398(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
fParam2=(fParam2 * -1f);
fParam2=(fParam2 + 360f);
Var0.f_0=sin(fParam2);
Var0.f_1=cos(fParam2);
Var0.f_2=0f;
Var0={
Var0 / FtoV(vmag(Var0)) 
};
Var0={
Var0 * Vector(fParam3, fParam3, fParam3) 
};
Var1={
Param1 + Var0 
};
Var1.f_2=Param1.f_2;
Var1.f_2=(Var1.f_2 + fParam5);
Param1.f_2=(Param1.f_2 + fParam5);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Var1, fParam4, 0, 1);
}

int func_399(struct<3> Param0, float fParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((func_13(iVar1, 1, 1) && func_357(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && PLAYER::GET_PLAYER_TEAM(bVar1)==-1) && !func_338(PLAYER::PLAYER_ID(), 1)){
return 0;
}elseif((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !PLAYER::PLAYER_ID()==bVar1) || !func_64(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(vdist(Param0, func_155(bVar1)) < fParam1){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_400(int iParam0){
if((Global_2635560.f_489==9 || Global_2635560.f_489==9) || (Global_2635560.f_489==15 && iParam0==1)){
return 1;
}
return 0;
}

int func_401(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_13(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_357(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_362(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_155(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_402(struct<3> Param0, float fParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
iVar3=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(!iVar3==-1){
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_13(iVar1, 1, 1)){
if((!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && bVar1 !=PLAYER::PLAYER_ID()){
fVar2=iParam2;
if(fParam3 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam3;
}
}}
if(PLAYER::GET_PLAYER_TEAM(bVar1)==iVar3){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_155(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}
}}}}
iVar0++;
}}
return 0;
}

int func_403(int iParam0){
if(((func_338(iParam0, 1) || func_405(iParam0)) || func_165(iParam0, 0)) || func_404(iParam0)){
return 1;
}
return 0;
}

int func_404(int iParam0){
if(!func_13(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_405(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/] !=-1;
}
return 0;
}


void func_406(struct<3> Param0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
struct<8> Var4;
struct<3> Var5;
struct<3> Var6;
iVar0=0;
while (iVar0 < *uParam1){
*(uParam1[iVar0 /*4*/])={
Var3 
};
iVar0++;
}
iVar0=0;
while (iVar0 < *uParam2){
*(uParam2[iVar0 /*10*/])={
Var4 
};
iVar0++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573885){
iVar0=0;
while (iVar0 < *uParam1){
if(!MISC::IS_BIT_SET(Global_4543629[iVar1 /*26*/].f_12, 11)){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_4543629[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_4543629[iVar1 /*26*/].f_3 
};
Var3.f_3=Global_4543629[iVar1 /*26*/].f_6.f_2;
func_408(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < 19){
iVar0=0;
while (iVar0 < *uParam1){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6346[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6346[iVar1 /*3*/] 
};
Var3.f_3=3f;
func_408(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar2=0;
iVar1=0;
while (iVar1 < 20){
iVar2=0;
while (iVar2 < 6){
iVar0=0;
while (iVar0 < *uParam1){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6404[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6404[iVar1 /*19*/][iVar2 /*3*/] 
};
Var3.f_3=3f;
func_408(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}
iVar0++;
}
iVar2++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573850){
iVar0=0;
while (iVar0 < *uParam2){
Var5={
Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) 
};
Var6={
*(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) 
};
if(vmag(*(uParam2[iVar0 /*10*/]))==0f || vdist(Var5, Param0) < vdist(Var6, Param0)){
Var4={
Global_1573169[iVar1 /*8*/].f_1 
};
Var4.f_3={
Global_1573169[iVar1 /*8*/].f_4 
};
Var4.f_6=Global_1573169[iVar1 /*8*/].f_7;
Var4.f_7={
Global_4543305[iVar1 /*3*/] 
};
func_407(&Var4, uParam2, iVar0);
iVar0=*uParam2;
}
iVar0++;
}
iVar1++;
}}


void func_407(var uParam0, var uParam1, int iParam2){
Global_2643218={
*(uParam1[iParam2 /*10*/]) 
};
*(uParam1[iParam2 /*10*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_407(&Global_2643218, uParam1, iParam2 + 1);
}}


void func_408(var uParam0, var uParam1, int iParam2){
Global_2643214={
*(uParam1[iParam2 /*4*/]) 
};
*(uParam1[iParam2 /*4*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_408(&Global_2643214, uParam1, iParam2 + 1);
}}


void func_409(var uParam0, var uParam1){
int iVar0;
struct<3> Var1;
float fVar2;
if(Global_2635560.f_2362 > 0){
iVar0=0;
while (iVar0 < Global_2635560.f_2362){
if(func_410(Global_2635560.f_2363[iVar0 /*4*/], uParam0)){
fVar2=Global_2635560.f_2363[iVar0 /*4*/].f_3;
if(vmag(*uParam1) > 0.01f){
Var1={
*uParam1 - Global_2635560.f_2363[iVar0 /*4*/] 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}
func_354(Global_2635560.f_2363[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
Global_2635560.f_2591++;
}
iVar0++;
}}
if(uParam0->f_5 && Global_2635560.f_2994){
func_348(&(Global_2635560.f_2591.f_6[0 /*10*/]), &(Global_2635560.f_2591.f_6[1 /*10*/]), &(Global_2635560.f_2591.f_6[2 /*10*/]));
}}

int func_410(struct<3> Param0, var uParam1){
switch (uParam1->f_7){
case 0:
return func_310(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
case 1:
case 2:
return func_310(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
default:
}
return 0;
}


void func_411(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4){
float fVar0;
func_343(&Param0, &Param1);
fVar0=(Param1.f_0 - Param0.f_0);
*uParam2=(Param0.f_0 + (fVar0 * 0.5f));
uParam2->f_1=Param0.f_1;
uParam2->f_2=Param0.f_2;
*uParam3=*uParam2;
uParam3->f_1=Param1.f_1;
uParam3->f_2=Param1.f_2;
*uParam4=(fVar0 * 0.5f);
}


var func__412(){
return Global_1573131.f_4;
}


void func_413(var uParam0, var uParam1){
func_451();
func_443(uParam0, uParam1);
}


bool func_414(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
if(bParam3 && bParam4){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam3){
if(Param0.f_2 > Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam4){
if(Param0.f_2 < Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}


void func_415(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635560.f_1854 > 0){
iVar0=0;
while (func_437(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_416(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_416(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
float fVar11;
float fVar12;
int iVar13;
int iVar14;
int iVar15;
bool bVar16;
int iVar17;
bool bVar18;
int iVar19;
float fVar20;
int iVar21;
int iVar22;
float fVar23;
int iVar24;
struct<3> Var25;
var uVar26;
struct<3> Var27;
float fVar28;
bool bVar29;
iVar0=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_327(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_436(uParam0, 1)){
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
iVar3=0;
iVar8=1;
if(uParam2->f_11){
iVar3 +=2;
iVar3++;
iVar8=0;
}elseif(uParam2->f_10==0 || (uParam2->f_33 > 0 && uParam2->f_16)){
iVar3++;
iVar8=0;
}
iVar3 +=4;
fVar11=3f;
fVar12=5f;
switch (uParam2->f_33){
case 0:
fVar11=3f;
fVar12=5f;
break;
case 1:
fVar11=2.75f;
fVar12=7.5f;
break;
default:
fVar11=2.5f;
fVar12=10f;
break;
}
iVar13=0;
Global_2643228.f_162=0;
Global_2643228.f_163=0;
Global_2643228.f_164=-99;
Global_2643228.f_165={
0f, 0f, 0f 
};
iVar14=0;
while (iVar14 < 40){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
iVar15=1;
if(func_324(uParam2->f_34) !=0){
iVar15=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
iVar6=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6)){
PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
bVar10=false;
if(Global_2643228.f_164==iVar6){
bVar10=true;
}
Global_2643228.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
if(vdist(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_389(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_435(Var1)){
Var1={
func_431(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_318(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_430(Var1, uParam2)){
if((uParam2->f_48 && !func_436(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_426(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_327(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar17=uParam2->f_31;
bVar18=true;
iVar19=1;
fVar20=uParam2->f_49;
if(!uParam2->f_55){
iVar17=0;
bVar18=false;
iVar19=0;
fVar20=1f;
}
elseif(uParam2->f_17){
iVar17=0;
bVar18=false;
iVar19=0;
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
else{
bVar18=true;
iVar19=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
}
iVar21=0;
if(!func_425(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_444(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_444(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_423(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_422(Var1, uParam2->f_54, &fVar23);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar22 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar22 < uParam2->f_53){
iVar14=0;
while (iVar14 < Global_2643228.f_162){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar22;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var1 
};
Global_2643228.f_121[0]=fVar2;
}
else{
iVar14=0;
while (iVar14 < Global_2643228.f_162 + 1){
if(iVar14 < 40){
if(vdist2(Var1, uParam2->f_35) < vdist2(Global_2643228[iVar14 /*3*/], uParam2->f_35)){
func_421(Var1, fVar2, iVar14);
iVar14=Global_2643228.f_162 + 1;
}
}
iVar14++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var1 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar2;
Global_2643228.f_162++;
if(func_430(Var1, uParam2)){
Global_2643228.f_163++;
}
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
elseif(bVar16){
iVar0++;
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
}
else{
iVar13++;
}
}
else{
iVar0=100;
}
}
}
else{
iVar0++;
}
}
elseif(!uParam2->f_32){
iVar0=100;
}
}
else{
iVar0++;
}}else{
iVar0++;
}}
}
}
else{
iVar0++;
}}}else{
iVar0++;
}
}
else{
iVar0++;
}}else{
iVar13++;
}}else{
iVar13++;
}}
iVar0++;
if(iVar0 >=(40 + iVar13) || iVar0 >=100){
if(Global_2643228.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_419(0, uParam2);
}
iVar24=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar24=0;
}
Var25={
Global_2643228[0 /*3*/] 
};
uVar26=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar24 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar24];
Global_2643228[iVar24 /*3*/]={
Var25 
};
Global_2643228.f_121[iVar24]=uVar26;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_418(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
Var27={
Var1 
};
fVar28=fVar2;
if(!uParam2->f_50){
bVar29=true;
}
else{
bVar29=false;
}
if(func_327(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_436(&Var27, bVar29)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
Var27 
};
*uParam1=fVar28;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}
}
else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}}}}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_417(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643228.f_164=iVar6;
}
return 0;
}


void func_417(var uParam0, var uParam1, var uParam2, struct<3> Param3){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=1E+09f;
iVar3=-1;
iVar2=0;
while (iVar2 < *uParam0){
fVar1=vdist(*(uParam0[iVar2 /*4*/]), Param3);
if(fVar1 < fVar0){
if(!func_393(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
fVar0=fVar1;
iVar3=iVar2;
}}
iVar2++;
}
if(!iVar3==-1){
*uParam1={
*(uParam0[iVar3 /*4*/]) 
};
*uParam2=(uParam0[iVar3 /*4*/])->f_3;
}}


void func_418(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_431(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_435(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_419(int iParam0, var uParam1){
if(!func_430(Global_2643228[iParam0 /*3*/], uParam1)){
Global_2643228.f_162=(Global_2643228.f_162 - 1);
func_420(iParam0);
if(Global_2643228.f_162 > Global_2643228.f_163){
func_419(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_419(iParam0 + 1, uParam1);
}}


void func_420(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643228[iParam0 /*3*/]={
Global_2643228[iParam0 + 1 /*3*/] 
};
Global_2643228.f_121[iParam0]=Global_2643228.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_421(struct<3> Param0, float fParam1, int iParam2){
struct<3> Var0;
var uVar1;
Var0={
Global_2643228[iParam2 /*3*/] 
};
uVar1=Global_2643228.f_121[iParam2];
Global_2643228[iParam2 /*3*/]={
Param0 
};
Global_2643228.f_121[iParam2]=fParam1;
if(iParam2 <=Global_2643228.f_162 && iParam2 < 39){
if(vmag(Var0) > 0f){
func_421(Var0, uVar1, iParam2 + 1);
}}}

int func_422(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
iVar3=iVar0;
if(func_361(iVar3)){
Var1={
func_155(iVar3) 
};
fVar5=vdist(Param0, Var1);
if(fVar5 < fParam1){
if(fVar5 < fVar4){
fVar4=fVar5;
}
iVar2++;
}}
iVar0++;
}
*fParam2=fVar4;
return iVar2;
}

int func_423(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam7==0){
if(func_13(iVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_357(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_362(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), 0)){
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_424(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_319(func_155(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_424(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_319(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_320(Param0, fParam1, iParam2, &Global_1982109, &(Global_1982109.f_3), &(Global_1982109.f_6), 1036831949);
func_320(Param3, fParam4, iParam5, &(Global_1982109.f_7), &(Global_1982109.f_10), &(Global_1982109.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1982109, Global_1982109.f_3, Global_1982109.f_6, Global_1982109.f_7, Global_1982109.f_10, Global_1982109.f_13)){
return 1;
}
return 0;
}

int func_425(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
var uVar1;
int iVar2;
struct<3> Var3;
float fVar4;
iVar0=1;
iVar0 +=2;
iVar0 +=4;
iVar0 +=8;
iVar0 +=16;
iVar0 +=32;
iVar0 +=64;
iVar0=(iVar0 + 131076);
uVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_424(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
iVar0 +=4096;
iVar0 +=8192;
iVar0 +=16384;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_424(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_426(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5){
if(func_429(Param0, fParam1, iParam2, iParam3, iParam4) || func_427(Param0, fParam1, iParam2, iParam3, iParam5)){
return 1;
}
return 0;
}

int func_427(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_428(Param0, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_424(Param0, fParam1, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_13(iVar2, 0, 1) && func_13(iParam3, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_428(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_326(iParam1, 1008981770);
fVar1=func_326(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_429(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar1=iVar0;
if(func_13(iVar1, 0, 1) && func_13(iParam3, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(func_319(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_319(func_155(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(func_319(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_13(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_319(func_155(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_430(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_414(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_342(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
return 1;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1)){
return 1;
}
break;
}
return 0;
}
return 1;
}


Vector3 func__431(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
float fVar10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
if(bParam11){
if(vmag(Param4) > 0f){
if(!func_434(Param0, *uParam1, Param4)){
*uParam1=(*uParam1 + 180f);
}}
return Param0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
if(uVar2 & 1024==0 && !bParam6){
PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
if(iVar4==iVar5){
*uParam8=1;
}
if(bParam10){
if(!uVar2 & 128==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 256==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 512==0){
return 0f, 0f, 0f;
}
if((iVar4 + iVar5) !=iParam2){
return 0f, 0f, 0f;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_433(Param0)){
return 0f, 0f, 0f;
}}
if(iParam9 && *uParam8){
*uParam1=(*uParam1 + 180f);
if(*uParam1 > 360f){
*uParam1=(*uParam1 + -360f);
}}
if(*uParam1 <=90f || *uParam1 > 270f){
bVar8=true;
}else{
bVar8=false;
}
bVar9=false;
if(bVar8){
if(iVar4==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar4){
bVar9=true;
}}elseif(iVar5==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar5){
bVar9=true;
}
if(fVar6 < 0f){
fVar7=0f;
}else{
if(bVar8){
if(bVar9){
fVar7=(4.2f * (to_float(iVar4) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar4));
}
if(bVar9){
if(iVar4 > 2){
fVar7=(fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
}}elseif(iVar4 > 1){
fVar7=(fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
}}else{
if(bVar9){
fVar7=(4.2f * (to_float(iVar5) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar5));
}
if(bVar9){
if(iVar5 > 2){
fVar7=(fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
}}elseif(iVar5 > 1){
fVar7=(fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
}}
if(!uVar2 & 64==0){
fVar7=(fVar7 + (0.95f * fVar6));
}
if(!uVar2 & 4==0 || !uVar2 & 8==0){
fVar7=(fVar7 + -0.5f);
}
if((!uVar2 & 32==0 && uVar2 & 4==0) && uVar2 & 8==0){
fVar7=(fVar7 + -1f);
}
if(!bParam3 || !uVar2 & 8==0){
fVar7=(fVar7 + (4.2f * -0.5f));
}
if(!iParam7==0){
if(uVar2 & 8 !=0){
fVar10=func_432(iParam7, 3.5f);
}else{
fVar10=func_432(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_434(Param0, *uParam1, Param4)){
if((bParam3 || uParam12) || ((uVar2 & 1024 !=0 || Param0.f_2==0f) && bParam6)){
*uParam1=(*uParam1 + 180f);
}elseif(bParam10){
return 0f, 0f, 0f;
}}}
if(fVar7 < 0f){
fVar7=0f;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *uParam1, fVar7, 0f, 0f) 
};
if(bParam3){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *uParam1, &Var11)){
Var12={
Var11 - Param0 
};
if(!iParam7==0){
Var13={
Var12 / FtoV(vmag(Var12)) 
};
if(uVar2 & 8 !=0){
fVar10=func_432(iParam7, 3.5f);
}else{
fVar10=func_432(iParam7, 1.5f);
}
Var13={
Var13 * FtoV((fVar10 * 0.5f)) 
};
Var12={
Var12 - Var13 
};
Var11={
Param0 + Var12 
};
}
Var13={
Var0 - Var11 
};
Var0={
Var11 
};
}}
return Var0;
}


float func_432(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_321(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_433(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_434(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_307(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_303(Var1, Var0) >=0f){
return 1;
}
return 0;
}

int func_435(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_317(Param0);
iVar0=0;
while (iVar0 < Global_2642935[iVar1]){
if(func_316(Param0, &(Global_2642232[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642935[8]){
if(func_316(Param0, &(Global_2642232[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_436(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635560.f_26.f_18){
switch (Global_2635560.f_26.f_17){
case 0:
if(func_414(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_342(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_308(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, Global_2635560.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}

int func_437(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
float fVar9;
bool bVar10;
int iVar11;
float fVar12;
struct<3> Var13;
var uVar14;
if(Global_2635560.f_1854 > 0){
iVar1=0;
iVar2=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_327(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_436(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643228.f_162=0;
Global_2643228.f_163=0;
iVar5=0;
while (iVar5 < 40){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
if(uParam2->f_30){
func_440(*uParam0);
}elseif(uParam2->f_29){
func_439();
}else{
func_438();
}
iVar1=0;
while (iVar1 < Global_2635560.f_1854){
iVar2=Global_2635560.f_2260[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635560.f_1855[iVar2 /*4*/] 
};
fVar4=Global_2635560.f_1855[iVar2 /*4*/].f_3;
if(vmag(Var3) > 0f){
if((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_426(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_327(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar6=uParam2->f_31;
bVar7=true;
iVar8=1;
fVar9=uParam2->f_49;
if(!uParam2->f_55){
iVar6=0;
bVar7=false;
iVar8=0;
fVar9=1f;
}
elseif(uParam2->f_17){
iVar6=0;
bVar7=false;
iVar8=0;
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}
}
else{
bVar7=true;
iVar8=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}}
}
bVar10=false;
if(!func_425(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_444(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_444(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_423(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_422(Var3, uParam2->f_54, &fVar12);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar11 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar11 < uParam2->f_53){
iVar5=0;
while (iVar5 < Global_2643228.f_162){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar11;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var3 
};
Global_2643228.f_121[0]=fVar4;
}
else{
iVar5=0;
while (iVar5 < Global_2643228.f_162 + 1){
if(iVar5 < 40){
if(vdist2(Var3, uParam2->f_35) < vdist2(Global_2643228[iVar5 /*3*/], uParam2->f_35)){
func_421(Var3, fVar4, iVar5);
iVar5=Global_2643228.f_162 + 1;
}
}
iVar5++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var3 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar4;
Global_2643228.f_162++;
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}}}else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}
}
}
else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}}}
}}}}
iVar1++;
}
if(Global_2643228.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_419(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
Var13={
Global_2643228[0 /*3*/] 
};
uVar14=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar0 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar0];
Global_2643228[iVar0 /*3*/]={
Var13 
};
Global_2643228.f_121[iVar0]=uVar14;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635560.f_1854 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
*uParam0={
Global_2635560.f_1855[iVar0 /*4*/] 
};
*uParam1=Global_2635560.f_1855[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_438(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}}


void func_439(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
uVar3=Global_2635560.f_2260[iVar1];
Global_2635560.f_2260[iVar1]=Global_2635560.f_2260[iVar2];
Global_2635560.f_2260[iVar2]=uVar3;
iVar0++;
}}


void func_440(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635560.f_1854){
uVar1=func_441(Param0, fVar0, &fVar0);
Global_2635560.f_2260[iVar2]=uVar1;
iVar2++;
}}

int func_441(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635560.f_1854){
fVar2=vdist2(Param0, Global_2635560.f_1855[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam1){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam2=fVar1;
return iVar0;
}


bool func_442(int iParam0){
return iParam0==50;
}


void func_443(var uParam0, var uParam1){
PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
Global_2635560.f_2574=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_2572=1;
Global_2635560.f_2575=NETWORK::GET_NETWORK_TIME();
}

int func_444(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
Global_2635560.f_2=0;
if(fParam1 > 0f){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1)){
return 0;
}}
if(fParam2 > 0f){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2)){
return 0;
}}
if(fParam3 > 0f){
if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, iParam16)){
return 0;
}}
Global_2635560.f_2++;
if(bParam11){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635560.f_2++;
if(fParam12 > 0f){
if(func_401(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_390(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}


void func_445(){
func_450();
func_449();
func_448();
func_447();
func_446();
}


void func_446(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 128){
Global_2638608[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_447(){
struct<10> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 4){
Global_2635560.f_2591.f_90[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_448(){
struct<4> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 8){
Global_2635560.f_2591.f_57[iVar1 /*4*/]={
Var0 
};
iVar1++;
}}


void func_449(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 5){
Global_2635560.f_2591.f_6[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_450(){
struct<6> Var0;
Var0.f_3=-1;
Global_2635560.f_2591={
Var0 
};
}


void func_451(){
if(Global_2635560.f_2572){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_2574){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}else{
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
Global_2635560.f_2572=0;
}}

int func_452(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}

int func_453(){
struct<3> Var0;
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Local_90.f_7 - 25f), (Local_90.f_7.f_1 - 25f), (Local_90.f_7 + 25f), (Local_90.f_7.f_1 + 25f));
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Local_90.f_7 - 25f), (Local_90.f_7.f_1 - 25f), (Local_90.f_7 + 25f), (Local_90.f_7.f_1 + 25f))){
PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_90.f_7, &Var0, 1, 1077936128, 0);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_7, Var0, 0) <=25f){
Local_90.f_7={
Var0 
};
return 1;
}}
return 0;
}

int func_454(struct<3> Param0){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1836.619f, -1262.522f, -42.18043f, -1664.868f, -1060.219f, 119.5007f, 150f, 0, 1)){
return 1;
}
return 0;
}


void func_455(char* sParam0){
if(Global_23390.f_5162 >=3 || Global_23390.f_5159 >=4){
return;
}
Global_23390.f_5093[Global_23390.f_5159]=5;
Global_23390.f_5159++;
StringCopy(&(Global_23390.f_5110[Global_23390.f_5162 /*16*/]), sParam0, 64);
Global_23390.f_5162++;
}


void func_456(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23390.f_5081), sParam0, 24);
Global_23390.f_5159=0;
Global_23390.f_5160=0;
Global_23390.f_5161=0;
Global_23390.f_5162=0;
Global_23390.f_5163=iParam1;
Global_23390.f_5164=MISC::GET_GAME_TIMER();
Global_23390.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5093[iVar0]=0;
iVar0++;
}}


void func_457(bool bParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
bool bVar4;
bool bVar5;
func_470(0, 0);
if(bParam0){
func_469("R2P_MENU_S");
}else{
func_469("R2P_MENU");
}
func_468(1, 1, 0, 0, 0);
func_467(1, 2, 1, 1, 1);
HUD::GET_HUD_COLOUR(116, &uVar0, &uVar1, &uVar2, &uVar3);
func_466(uVar0, uVar1, uVar2, uVar3, 1);
bVar4=false;
bVar5=false;
iLocal_150=0;
StringCopy(&(Local_141.f_6), "R2P_MENU_DEST", 16);
StringCopy(&(Local_141.f_10), "R2P_MENU_DE", 16);
if(Local_90.f_15[2] <=0 || Local_90.f_15[2] > iLocal_88){
Local_90.f_15[2]=0;
if(!bParam0){
StringCopy(&(Local_141.f_6), "R2P_MENU_DE0", 16);
}elseif(HUD::IS_WAYPOINT_ACTIVE() || MISC::IS_BIT_SET(Local_90.f_1, 10)){
if((func_16(func_17(), 0f, 0f, -2000f, 0) || func_16(func_17(), 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f){
iLocal_150=1;
StringCopy(&(Local_141.f_10), "R2P_MENU_DE0S", 16);
}else{
StringCopy(&(Local_141.f_6), "R2P_MENU_DE0", 16);
}}else{
iLocal_150=1;
StringCopy(&(Local_141.f_10), "R2P_MENU_DE0S", 16);
}}else{
StringCopy(&(Local_141.f_6), "R2P_MENU_DE", 16);
StringIntConCat(&(Local_141.f_6), Local_90.f_15[2], 16);
StringConCat(&(Local_141.f_6), "F", 16);
if(Local_90.f_15[2]==2){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==0 || MISC::IS_BIT_SET(Global_2794162.f_1831, 24)){
StringCopy(&(Local_141.f_6), "R2P_MENU_DE99F", 16);
}}}
Local_114={
Local_141.f_6 
};
if(bParam0){
if(iLocal_150==0){
bVar4=func_512(&uLocal_142, iLocal_144, 0);
}
bLocal_103=bVar4;
func_263(0, "R2P_MENU_IN", 0, bVar4, 0, 0, 0);
func_263(1, "R2P_MENU_IN2", 0, bVar4, 0, 0, 0);
}
bVar4=bParam0;
if(MISC::IS_BIT_SET(Local_90.f_1, 11)){
bVar4=false;
}
bVar5=bVar4;
func_263(2, "R2P_MENU_DEST", 0, 1, 0, 0, 0);
if(MISC::ARE_STRINGS_EQUAL(&(Local_141.f_10), "R2P_MENU_DE0S")){
func_263(2, &(Local_141.f_10), 0, bVar4, 0, 0, 0);
}else{
func_263(2, &(Local_141.f_10), 2, bVar4, 0, 0, 0);
func_465(&(Local_141.f_6), 0);
func_461(func_464(), 0);
}
func_263(3, "R2P_MENU_SCT", 0, 1, 0, 0, 0);
StringCopy(&(Local_141.f_6), "R2P_MENU_SC", 16);
func_263(3, &(Local_141.f_6), 1, 0, 0, 0, 0);
if(Local_90.f_3 >=50){
func_461(Local_90.f_3, 0);
}else{
func_461(50, 0);
}
if(bParam0){
bVar4=true;
if(Local_90.f_14 >=2){
if(((Local_90.f_15[2] <=0 || Local_90.f_15[2] > iLocal_88) && !HUD::IS_WAYPOINT_ACTIVE()) && !MISC::IS_BIT_SET(Local_90.f_1, 10)){
bVar4=false;
}elseif((func_16(func_17(), 0f, 0f, -2000f, 0) || func_16(func_17(), 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f){
bVar4=false;
}}else{
bVar4=false;
}
func_263(4, "R2P_MENU_STT", 0, bVar4, 0, 0, 0);
}
if(bParam0){
if(Local_141.f_14==4){
if(Local_90.f_14 >=2){
if(!MISC::IS_BIT_SET(Local_90.f_1, 7) || MISC::IS_BIT_SET(Local_90.f_1, 9)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(237, "R2P_MENU_LAU", -1, 0);
}else{
func_459(176, "R2P_MENU_LAU", -1);
}}}}elseif(Local_141.f_14==0){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(237, "R2P_CTRL_INV", -1, 0);
}else{
func_459(176, "R2P_CTRL_INV", -1);
}}elseif(Local_141.f_14==1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(237, "R2P_CTRL_SEL", -1, 0);
}else{
func_459(176, "R2P_CTRL_SEL", -1);
}}elseif(Local_141.f_14==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(237, "R2P_CTRL_NXT", -1, 0);
}else{
func_459(176, "R2P_CTRL_NXT", -1);
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(238, "R2P_MENU_EXI", -1, 0);
func_459(199, "SPEC_PAUSE", -1);
}else{
func_459(177, "R2P_MENU_EXI", -1);
}
if(Local_141.f_14==2 && bVar5==1){
func_458(0, 1, 0, 0, 0);
}else{
func_458(0, 0, 0, 0, 0);
}}elseif(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(238, "R2P_MENU_EXI", -1, 0);
}else{
func_459(177, "R2P_MENU_EXI", -1);
}
if(bParam0){
func_495(Local_141.f_14, 1, 1);
}else{
func_495(-1, 1, 1);
}
func_456("", 0, 0);
}


void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5518[0]=iParam0;
Global_23390.f_5518[1]=iParam1;
Global_23390.f_5518[2]=iParam2;
Global_23390.f_5518[3]=iParam3;
Global_23390.f_5518[4]=iParam4;
}


void func_459(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
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
Global_23390.f_5465[Global_23390.f_5166]=iParam0;
Global_23390.f_5480[Global_23390.f_5166]=32;
Global_23390.f_5166++;
}


void func_460(int iParam0, char* sParam1, int iParam2, bool bParam3){
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


void func_461(int iParam0, bool bParam1){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23390.f_5665 >=256){
return;
}
if(Global_23390.f_6186 >=4){
return;
}
if(Global_23390.f_6187 !=1){
return;
}
if(Global_23390.f_6186 >=Global_23390.f_6184){
return;
}
Global_23390.f_4309[Global_23390.f_5665]=iParam0;
Global_23390.f_5665++;
Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186]=2;
Global_23390.f_6186++;
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar0=func_463();
if(Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186==Global_23390.f_6184){
func_269(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)]){
Global_23390.f_5511[(Global_23390.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar3=func_462();
if(fVar3 > Global_23390.f_6188[Global_23390.f_5661]){
Global_23390.f_6188[Global_23390.f_5661]=fVar3;
}}}}


float func_462(){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
float fVar4;
iVar0=0;
while (iVar0 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar0]==4){
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < iVar1){
if(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)] !=0){
if(func_269(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0)){
if(fVar4 > fVar2){
fVar2=fVar4;
}}}
iVar0++;
}
if(fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0)){
return fVar2;
}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_463(){
float fVar0;
float fVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
iVar7=0;
while (iVar7 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==1){
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==8){
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==2){
iVar3++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==3){
iVar4++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==4){
iVar5++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==5){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==6){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==7){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==9){
iVar6++;
}
iVar7++;
}
func_248(0, 1, 0, 0, 0, iVar6 > 0, 0);
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[Global_23390.f_6185 /*6*/]));
}
iVar7=0;
while (iVar7 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==1){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==8){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[((Global_23390.f_5665 - iVar3) + iVar9)]);
}
iVar9++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[((Global_23390.f_5666 - iVar4) + iVar10)], Global_23390.f_4695[((Global_23390.f_5666 - iVar4) + iVar10)]);
}
iVar10++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}
iVar7++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
iVar7=0;
while (iVar7 < iVar5){
if(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)] !=0){
func_269(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + fVar1);
}
iVar7++;
}
return fVar0;
}

int func_464(){
if(func_16(func_17(), 0f, 0f, -2000f, 0) || func_16(func_17(), 0f, 0f, 0f, 0)){
return 0;
}
return round(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, Local_90.f_7, 1));
}


void func_465(char* sParam0, bool bParam1){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23390.f_5663 >=256){
return;
}
if(Global_23390.f_6186 >=4){
return;
}
if(Global_23390.f_6187 !=1){
return;
}
if(Global_23390.f_6186 >=Global_23390.f_6184){
return;
}
StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam0, 24);
Global_23390.f_5663++;
Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186]=1;
Global_23390.f_6186++;
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar0=func_463();
if(Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186==Global_23390.f_6184){
func_269(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)]){
Global_23390.f_5511[(Global_23390.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar3=func_462();
if(fVar3 > Global_23390.f_6188[Global_23390.f_5661]){
Global_23390.f_6188[Global_23390.f_5661]=fVar3;
}}}}


void func_466(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4){
Global_23390.f_8867=iParam4;
Global_23390.f_8863=uParam0;
Global_23390.f_8864=uParam1;
Global_23390.f_8865=uParam2;
Global_23390.f_8866=uParam3;
}


void func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5526[0]=iParam0;
Global_23390.f_5526[1]=iParam1;
Global_23390.f_5526[2]=iParam2;
Global_23390.f_5526[3]=iParam3;
Global_23390.f_5526[4]=iParam4;
}


void func_468(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5499[0]=iParam0;
Global_23390.f_5499[1]=iParam1;
Global_23390.f_5499[2]=iParam2;
Global_23390.f_5499[3]=iParam3;
Global_23390.f_5499[4]=iParam4;
Global_23390.f_5669=0;
if(iParam0 !=0){
Global_23390.f_5669++;
}
if(iParam1 !=0){
Global_23390.f_5669++;
}
if(iParam2 !=0){
Global_23390.f_5669++;
}
if(iParam3 !=0){
Global_23390.f_5669++;
}
if(iParam4 !=0){
Global_23390.f_5669++;
}}


void func_469(char* sParam0){
int iVar0;
StringCopy(&(Global_23390.f_1), sParam0, 16);
Global_23390.f_74=0;
Global_23390.f_75=0;
Global_23390.f_76=0;
Global_23390.f_77=0;
Global_23390.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5[iVar0]=0;
iVar0++;
}}


void func_470(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23390.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23390.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695123[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23390.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23390.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23390.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23390.f_5532[iVar0]=0;
Global_23390.f_5670[iVar0]=0;
Global_23390.f_5799[iVar0]=0;
Global_23390.f_6322[iVar0]=0f;
Global_23390.f_5928[iVar0]=0;
Global_23390.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23390.f_5499[iVar0]=0;
Global_23390.f_5511[iVar0]=0f;
Global_23390.f_5505[iVar0]=-1f;
Global_23390.f_5518[iVar0]=0;
Global_23390.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
Global_23390.f_5450[iVar0]=-1;
Global_23390.f_5465[iVar0]=363;
Global_23390.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23390.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23390.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23390.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540958.f_16), "", 16);
Global_4540958.f_20=-1;
Global_23390=0;
Global_23390.f_5661=0;
Global_23390.f_5662=0;
Global_23390.f_5663=0;
Global_23390.f_5665=0;
Global_23390.f_5666=0;
Global_23390.f_5667=0;
Global_23390.f_5664=0;
Global_23390.f_6317=0;
Global_23390.f_6457=0;
Global_23390.f_6182=0;
Global_23390.f_6181=0;
Global_23390.f_6183=0;
StringCopy(&(Global_23390.f_5081), "", 24);
Global_23390.f_5159=0;
Global_23390.f_5160=0;
Global_23390.f_5161=0;
Global_23390.f_5162=0;
Global_23390.f_5163=0;
Global_23390.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5093[iVar0]=0;
iVar0++;
}
Global_23390.f_5165=0;
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_61=0;
Global_4540958.f_62=0;
Global_4540958.f_63=0;
Global_4540958.f_64=0;
Global_4540958.f_65=0;
Global_4540958.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540958.f_25[iVar0]=0;
iVar0++;
}
Global_4540958.f_67=0;
StringCopy(&(Global_23390.f_1), "", 16);
Global_23390.f_5517=0f;
Global_23390.f_74=0;
Global_23390.f_75=0;
Global_23390.f_76=0;
Global_23390.f_77=0;
Global_23390.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5[iVar0]=0;
iVar0++;
}
Global_23390.f_6187=0;
Global_23390.f_6186=0;
Global_23390.f_6184=0;
Global_23390.f_6185=0;
Global_23390.f_5166=0;
Global_23390.f_5167=0;
Global_23390.f_5668=10;
Global_23390.f_5669=0;
Global_23390.f_6319=0f;
Global_23390.f_6320=0f;
Global_23390.f_6171=0;
Global_23390.f_6172=0;
Global_23390.f_6173=0f;
Global_23390.f_6174=0;
Global_23390.f_6176=0;
Global_23390.f_6175=0;
Global_23390.f_6177=0;
Global_23390.f_6178=0;
Global_23390.f_6179=0;
Global_23390.f_6180=0;
Global_23390.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23390.f_6451[iVar0]=-1;
Global_23390.f_6454[iVar0]=-1;
iVar0++;
}
Global_23390.f_5524=0f;
Global_23390.f_5495=0;
Global_23390.f_5525=0;
iVar0=0;
while (iVar0 < Global_23390.f_6458){
Global_23390.f_6458[iVar0]=0;
iVar0++;
}
Global_23390.f_8867=0;
Global_23390.f_8862=0;
Global_23390.f_8872=0;
Global_23390.f_8877=0;
Global_23390.f_8882=0;
Global_23390.f_8884=0;
Global_23390.f_8890=0;
Global_23387=0.05f;
Global_23388=0.05f;
Global_23389=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23389=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23389=(0.225f * (1.777778f / fVar2));
}else{
Global_23389=0.225f;
}}


void func_471(){
int iVar0;
int iVar1;
int iVar2;
int iVar3[32];
var uVar4[32];
var uVar5;
int iVar6;
float fVar7;
int iVar8;
func_470(0, 0);
func_458(0, 0, 0, 0, 0);
func_469("R2P_MENU_TINV");
func_468(1, 1, 0, 0, 0);
func_467(1, 2, 1, 1, 1);
iVar1=0;
iLocal_102=func_69();
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(func_475(iVar2)){
if(iVar1 < func_474()){
iVar1++;
bLocal_103=true;
uVar5=PLAYER::GET_PLAYER_PED(iVar2);
if(iVar1 > 1){
fVar7=func_473(PLAYER::PLAYER_PED_ID(), uVar5, 1);
iVar6=0;
while (iVar6 < iVar1){
if(fVar7 < uVar4[iVar6] || uVar4[iVar6]==0f){
iVar8=(iVar1 - 1);
while (iVar8 >=iVar6 + 1){
if(iVar8 > 0){
iVar3[iVar8]=iVar3[(iVar8 - 1)];
uVar4[iVar8]=uVar4[(iVar8 - 1)];
}
iVar8=(iVar8 + -1);
}
iVar3[iVar6]=bVar2;
uVar4[iVar6]=func_473(PLAYER::PLAYER_PED_ID(), uVar5, 1);
iVar6=iVar1;
}
iVar6++;
}}else{
iVar3[0]=bVar2;
uVar4[0]=func_473(PLAYER::PLAYER_PED_ID(), uVar5, 1);
}}}
iVar0++;
}
if(iVar1==0){
func_263(iVar1, "PIM_R2PNON", 1, 1, 0, 0, 0);
bLocal_103=false;
iVar1++;
}else{
iVar0=0;
while (iVar0 < iVar1){
func_263(iVar0, "PIM_PLNM", 1, 1, 0, 0, 0);
func_472(PLAYER::GET_PLAYER_NAME(iVar3[iVar0]), 0, 1, 1);
if(Local_141.f_14==iVar0){
iLocal_102=iVar3[iVar0];
}
iVar0++;
}}
iLocal_89=iVar1;
if(bLocal_103==1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(237, "R2P_CTRL_INV", -1, 0);
}else{
func_459(176, "R2P_CTRL_INV", -1);
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_460(238, "R2P_MENU_BAC", -1, 0);
}else{
func_459(177, "R2P_MENU_BAC", -1);
}
func_495(Local_141.f_14, 1, 1);
func_456("", 0, 0);
}


void func_472(char* sParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23390.f_5664 >=40){
return;
}
if(Global_23390.f_6186 >=4){
return;
}
if(Global_23390.f_6187 !=1){
return;
}
if(Global_23390.f_6186 >=Global_23390.f_6184){
return;
}
StringCopy(&(Global_2695123[Global_23390.f_5664 /*16*/]), sParam0, 64);
Global_23390.f_5664++;
Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186]=5;
Global_23390.f_6186++;
fVar0=0f;
if(bParam3){
fVar0=func_463();
}
if(bParam2){}
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar0=func_463();
if(Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186==Global_23390.f_6184){
func_269(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)]){
Global_23390.f_5511[(Global_23390.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar3=func_462();
if(fVar3 > Global_23390.f_6188[Global_23390.f_5661]){
Global_23390.f_6188[Global_23390.f_5661]=fVar3;
}}}}


float func_473(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_474(){
if(Global_2691837){
return 32;
}
return (32 - Global_2691838);
}

int func_475(bool bParam0){
if(!func_13(iParam0, 0, 1)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return 0;
}
if(func_9(iParam0, 0)){
return 0;
}
if(func_478(iParam0, 0, -1)){
return 0;
}
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bParam0)){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0){
return 0;
}elseif(!func_6(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1)){
return 0;
}}
if(func_13(bParam0, 1, 1) && func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(bParam0), 300f, 300f, 300f, 0, 1, 0)){
return 0;
}}else{
return 0;
}
if(func_476(bParam0)){
return 0;
}
return 1;
}

int func_476(int iParam0){
switch (Global_1895156[iParam0 /*609*/]){
case 131:
case 138:
case 139:
case 140:
case 141:
case 129:
case 144:
case 236:
case 150:
return 1;
default:
}
if(func_477(Global_1895156[iParam0 /*609*/])==1){
return 1;
}
return 0;
}

int func_477(int iParam0){
switch (iParam0){
case 150:
return 1;
case 24:
return 2;
case 26:
return 2;
case 256:
return 0;
case 258:
return 0;
case 259:
return 2;
case 271:
return 0;
case 273:
return 2;
case 276:
return 0;
case 277:
return 0;
case 262:
return 0;
case 263:
return 0;
case 264:
return 0;
case 269:
return 2;
case 270:
return 2;
case 275:
return 2;
case 268:
return 2;
case 286:
return 2;
case 267:
return 0;
case 266:
return 2;
case 287:
return 2;
case 289:
return 2;
case 147:
return 2;
case 291:
return 0;
case 292:
return 0;
case 293:
return 0;
case 294:
return 0;
case 295:
return 0;
case 296:
return 0;
case 297:
return 0;
case 298:
return 0;
case 299:
return 0;
case 300:
return 0;
case 301:
return 0;
case 288:
return 2;
case 290:
return 2;
case 304:
return 0;
case 305:
return 0;
case 306:
return 0;
case 307:
return 0;
case 308:
return 0;
case 309:
return 0;
case 310:
return 2;
case 311:
return 2;
case 312:
return 2;
case 320:
return 2;
case 313:
return 2;
case 315:
return 0;
case 316:
return 0;
case 317:
return 0;
case 318:
return 0;
default:
}
return -1;
}

int func_478(int iParam0, bool bParam1, int iParam2){
if(Global_1853988[iParam0 /*867*/].f_267.f_33 > 0){
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 0)){
return 1;
}}else{
return 1;
}}
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
if(iParam2==-1 || func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) !=iParam2){
if(bParam1){
return func_479(iParam0)==iParam0;
}
return 1;
}}
return 0;
}

int func_479(int iParam0){
int iVar0;
if(iParam0==func_69()){
return iParam0;
}
if(func_480(iParam0) !=-1){
iVar0=func_312(func_480(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_70(iParam0, 0)){
return func_68(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_69();
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}
return func_69();
}

int func_480(int iParam0){
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}elseif(((Global_1575063 || Global_2635560.f_2780) && iParam0==PLAYER::PLAYER_ID()) && func_13(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}}
return -1;
}

int func_481(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return iLocal_88;
case 3:
return 0;
case 4:
return 0;
default:
}
return 0;
}


void func_482(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
Local_141[iVar0]=0;
iVar0++;
}}

int func_483(bool bParam0){
int iVar0;
if(func_20()){
return 0;
}
if(bParam0){
if(PAD::IS_CONTROL_PRESSED(2, 173) || func_486(0, 1, 0)){
if(func_512(&uLocal_106, iLocal_108, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_99=1;
Local_141.f_14++;
if(iLocal_101==1){
if(Local_141.f_14 > (iLocal_89 - 1)){
Local_141.f_14=0;
}}elseif(Local_141.f_14 > 4){
Local_141.f_14=0;
}
func_495(Local_141.f_14, 1, 1);
iLocal_99=1;
iLocal_108=250;
func_29(&uLocal_106);
return 1;
}}elseif(PAD::IS_CONTROL_PRESSED(2, 172) || func_485(0, 1, 0)){
if(func_512(&uLocal_106, iLocal_108, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_99=1;
Local_141.f_14=(Local_141.f_14 - 1);
if(iLocal_101==1){
if(Local_141.f_14 < 0){
Local_141.f_14=(iLocal_89 - 1);
}}elseif(Local_141.f_14 < 0){
Local_141.f_14=4;
}
func_495(Local_141.f_14, 1, 1);
iLocal_99=1;
iLocal_108=250;
func_29(&uLocal_106);
return 1;
}}elseif(iLocal_108 !=-1){
iLocal_108=-1;
}}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
if(((bParam0 && iLocal_101==0) && Local_141.f_14==2) && !MISC::IS_BIT_SET(Local_90.f_1, 11)){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 174) || PAD::IS_CONTROL_PRESSED(2, 174)) || iLocal_105==-1){
if(func_512(&uLocal_109, iLocal_111, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_90.f_15[Local_141.f_14]=(Local_90.f_15[Local_141.f_14] - 1);
if(Local_90.f_15[Local_141.f_14] < 0){
Local_90.f_15[Local_141.f_14]=func_481(Local_141.f_14);
}
iVar0=0;
while (iVar0 < iLocal_88){
if(Local_141.f_14==2){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f && Local_90.f_15[2] !=0){
Local_90.f_15[Local_141.f_14]=(Local_90.f_15[Local_141.f_14] - 1);
if(Local_90.f_15[Local_141.f_14] < 0){
Local_90.f_15[Local_141.f_14]=func_481(Local_141.f_14);
}
}
else{
iVar0=99;
}
Global_2794162.f_28.f_39=Local_90.f_15[Local_141.f_14];
}
iVar0++;
}
iLocal_111=250;
func_29(&uLocal_109);
iLocal_99=1;
iLocal_100=1;
Local_90.f_15.f_6++;
return 1;
}}elseif(((PAD::IS_CONTROL_JUST_PRESSED(2, 175) || PAD::IS_CONTROL_PRESSED(2, 175)) || (func_484() && Local_141.f_14==2)) || iLocal_105==1){
if(func_512(&uLocal_109, iLocal_111, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_90.f_15[Local_141.f_14]++;
if(Local_90.f_15[Local_141.f_14] > func_481(Local_141.f_14)){
Local_90.f_15[Local_141.f_14]=0;
}
iVar0=0;
while (iVar0 < iLocal_88){
if(Local_141.f_14==2){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_90.f_4, func_17(), 1) < 1000f && Local_90.f_15[2] !=0){
Local_90.f_15[Local_141.f_14]++;
if(Local_90.f_15[Local_141.f_14] > func_481(Local_141.f_14)){
Local_90.f_15[Local_141.f_14]=0;
}
}
else{
iVar0=99;
}
Global_2794162.f_28.f_39=Local_90.f_15[Local_141.f_14];
}
iVar0++;
}
iLocal_111=250;
func_29(&uLocal_109);
iLocal_99=1;
iLocal_100=1;
Local_90.f_15.f_6++;
return 1;
}}elseif(iLocal_111 !=-1){
iLocal_111=-1;
}}
return 1;
}

int func_484(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_PRESSED(2, 176)){
return 1;
}
return 0;
}

int func_485(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034==-2){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1)){
return 1;
}}}
return 0;
}

int func_486(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034==-3){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1)){
return 1;
}}}
return 0;
}


void func_487(){
int iVar0;
if(MISC::IS_BIT_SET(Local_141.f_18, 2)){
if(func_512(&uLocal_142, iLocal_144, 0)){
iLocal_99=1;
MISC::CLEAR_BIT(&(Local_141.f_18), 2);
}}
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
if(func_20()){
return;
}
if(func_15() || iLocal_104){
switch (iLocal_101){
case 0:
if(bLocal_103==1){
if(func_512(&uLocal_142, iLocal_144, 0)){
if(Local_141.f_14==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_101=1;
Local_141.f_14=0;
iLocal_99=1;
return;
}
elseif(Local_141.f_14 !=0){
return;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_491(Local_90.f_4, Local_90.f_7, Local_114, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
iVar0=func_490();
if(iVar0 !=1){
func_489("R2P_TINVS", iVar0, 0);
}
else{
func_488("R2P_TINVS1", 0);
}
func_29(&uLocal_142);
func_27(&uLocal_142, 0, 0);
iLocal_144=5000;
iLocal_99=1;
MISC::SET_BIT(&(Local_141.f_18), 2);
MISC::SET_BIT(&(Local_90.f_1), 11);
}}
break;
case 1:
if(bLocal_103==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_41("R2P_TINVP", iLocal_102, 0, 0, 0, 1, 0);
func_491(Local_90.f_4, Local_90.f_7, Local_114, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_172(iLocal_102));
MISC::SET_BIT(&(Local_90.f_1), 11);
}
break;
}}}

int func_488(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_42(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}

int func_489(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_42(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_42(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}

int func_490(){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_13(PLAYER::PLAYER_ID(), 1, 1)){
if(func_475(iVar2)){
iVar0++;
}}
iVar1++;
}
return iVar0;
}


void func_491(struct<3> Param0, struct<3> Param1, struct<4> Param2, int iParam3, int iParam4){
struct<10> Var0;
Var0.f_0=-1595661064;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam3;
Var0.f_3={
Param0 
};
Var0.f_6={
Param1 
};
Var0.f_9={
Param2 
};
if(!iParam4==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 13, iParam4);
}
func_40(26, 1, -1);
}


void func_492(){
if(func_20()){
return;
}
PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(func_494() || func_493()){
switch (iLocal_101){
case 0:
Global_2672524.f_947.f_11=1;
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Global_2672524.f_947.f_5=PLAYER::PLAYER_ID();
Global_2672524.f_947.f_6=0;
Global_2672524.f_947.f_13=1;
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
break;
case 1:
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_101=0;
Local_141.f_14=1;
iLocal_99=1;
break;
}}}

int func_493(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}

int func_494(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177)){
return 1;
}
return 0;
}


void func_495(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23390.f_6182=iParam0;
Global_23390.f_6317=iParam2;
if(Global_23390.f_6182 < Global_23390.f_6181){
Global_23390.f_6181=Global_23390.f_6182;
}elseif((Global_23390.f_6172 && Global_23390.f_6182 > Global_23390.f_6183) || (!Global_23390.f_6172 && Global_23390.f_6182 >=(Global_23390.f_6181 + Global_23390.f_5668))){
iVar0=Global_23390.f_6181;
while (iVar0 <=Global_23390.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23390.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23390.f_5668 && Global_23390.f_6181 < 128){
Global_23390.f_6181++;
iVar1=0;
iVar0=Global_23390.f_6181;
while (iVar0 <=Global_23390.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23390.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23390.f_6171=0;
Global_23390.f_6172=0;
if(bParam1){
StringCopy(&(Global_23390.f_5081), "", 24);
StringCopy(&(Global_4540958.f_21), "", 16);
}}

int func_496(float fParam0){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
fVar6=0.02f;
fVar0=0.05f;
fVar2=(fVar0 + Global_23389);
fVar1=(Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
fVar5=(fVar0 + fParam0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
fVar4=(fVar2 - fVar6);
if(fParam0 > 0f){
if(Global_4541028 >=fVar0 && Global_4541028 < fVar5){
return -999;
}}
if(Global_4541028 >=fVar0 && Global_4541028 < fVar4){
return -1;
}
if(Global_4541028 >=fVar4 && Global_4541028 <=fVar2){
return 1;
}
return 0;
}


void func_497(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
fVar6=(0.034722f / 2f);
iVar13=-1;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
Global_4541034=-1;
return;
}
PAD::SET_USE_ADJUSTED_MOUSE_COORDS(1);
fVar0=Global_23387;
fVar2=(fVar0 + Global_23389);
fVar3=Global_23390.f_6173;
fVar1=(Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
if(bParam2){
fVar3=(fVar3 + 0.034722f);
fVar1=(fVar1 + 0.034722f);
}
if(Global_23390.f_6175 < 1){
fVar1=(Global_23390.f_6173 - 0.034722f);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar4=fVar0;
fVar5=fVar1;
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_499();
if(Global_4541034==-6){
return;
}
Global_4541034=-1;
fVar7=Global_4541028;
fVar8=Global_4541029;
if(Global_23390.f_6176 > Global_23390.f_6175){
if(((Global_4541028 >=fVar0 && Global_4541028 <=fVar2) && Global_4541029 >=fVar3) && Global_4541029 < (fVar3 + fVar6)){
Global_4541034=-2;
if(bParam3){
func_498(0);
}
return;
}
if(((Global_4541028 >=fVar0 && Global_4541028 <=fVar2) && Global_4541029 >=(fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f)){
Global_4541034=-3;
if(bParam3){
func_498(0);
}
return;
}}
if(((fVar7 >=fVar0 && fVar7 <=fVar2) && fVar8 >=fVar1) && fVar8 <=fVar3){
fVar9=(fVar8 - fVar1);
iVar13=floor((fVar9 / 0.034722f));
if(Global_23390.f_6176==-1){
Global_4541034=0;
iVar13=0;
return;
}
iVar11=148;
iVar12=(iVar11 / Global_23390.f_6175);
iVar10=(32 + (iVar11 - (iVar12 * iVar13)));
if(bParam3){
if(!bParam1 || iVar13 !=0){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
func_259(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
Global_4541034=Global_23390.f_8513[iVar13];
return;
}
if(!bParam0){
if(fVar7 < fVar2){
Global_4541034=-4;
return;
}
if(fVar8 > 0.9f){
Global_4541034=-5;
return;
}}elseif(fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f)){
Global_4541034=-4;
return;
}
Global_4541034=-1;
}


void func_498(bool bParam0){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=(0.034722f / 2f);
if(bParam0){
iVar3=48;
}else{
iVar3=210;
}
fVar0=Global_23387;
fVar1=Global_23390.f_6173;
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
if(Global_4541034==-2){
func_259(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541034==-3){
func_259(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_499(){
Global_4541030=Global_4541028;
Global_4541031=Global_4541029;
Global_4541028=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541029=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541032=(Global_4541028 - Global_4541030);
Global_4541033=(Global_4541029 - Global_4541031);
}

int func_500(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541034==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541034=-1;
return 0;
}}
if(((Global_4541034 > -1 || Global_4541034==-3) || Global_4541034==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541034==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541034=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}

int func_501(struct<3> Param0, struct<3> Param1){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
float fVar5;
int iVar6;
int iVar7;
iVar0=50;
iVar1=25;
iVar2=4;
fVar3=0.25f;
iVar4=func_502(PLAYER::PLAYER_ID());
if(iVar4 < 10){
iVar4=10;
}elseif(iVar4 > 40){
iVar4=40;
}
iVar4=(iVar4 * iVar2);
fVar5=vdist(Param1, Param0);
if(fVar5 > 1000f){
fVar5=(fVar5 / 1000f);
}
fVar5=(fVar5 * fVar3);
iVar6=round((IntToFloat(iVar4) * fVar5));
iVar7=round((to_float(iVar6) / to_float(iVar1)));
iVar6=(iVar7 * iVar1);
iVar6=round((to_float(iVar6) * Global_262145.f_178));
if(iVar6 > Global_262145.f_179){
iVar6=Global_262145.f_179;
}
if(iVar6 >=round((IntToFloat(iVar0) * Global_262145.f_178))){
return iVar6;
}
return round((IntToFloat(iVar0) * Global_262145.f_178));
}


var func__502(int iParam0){
return Global_1853988[iParam0 /*867*/].f_205.f_6;
}


var func__503(int iParam0){
var uVar0;
uVar0=func_504(iParam0);
return uVar0;
}

int func_504(int iParam0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
}elseif(func_147(iParam0)){
return Global_1853988[iParam0 /*867*/].f_205.f_3;
}else{
return 0;
}}
return 0;
}


void func_505(){
struct<14> Var0;
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
Var0.f_2=1681501530;
Var0.f_10=PLAYER::PLAYER_ID();
func_506(Var0, func_507(0));
MISC::SET_BIT(&uLocal_95, 6);
}}


void func_506(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_507(int iParam0){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_13(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, iVar2);
}}}
iVar1++;
}
return uVar0;
}


void func_508(var uParam0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1);
}


void func_509(){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
Var0={
Local_90.f_7 
};
if(!MISC::IS_BIT_SET(uLocal_95, 5)){
if(HUD::DOES_BLIP_EXIST(uLocal_96)){
if(!func_16(Var0, HUD::GET_BLIP_COORDS(uLocal_96), 0)){
HUD::REMOVE_BLIP(&uLocal_96);
GRAPHICS::DELETE_CHECKPOINT(uLocal_97);
MISC::CLEAR_BIT(&uLocal_95, 4);
}}
if(!HUD::DOES_BLIP_EXIST(uLocal_96)){
if((!func_16(Var0, 0f, 0f, 0f, 0) && !func_16(Var0, 0f, 0f, -2000f, 0)) && (!MISC::IS_BIT_SET(Local_90.f_1, 7) || MISC::IS_BIT_SET(Local_90.f_1, 9))){
HUD::GET_HUD_COLOUR(12, &uVar1, &uVar2, &uVar3, &uVar4);
uLocal_96=HUD::ADD_BLIP_FOR_COORD(Var0);
HUD::SET_BLIP_SPRITE(uLocal_96, 38);
HUD::SET_BLIP_SCALE(uLocal_96, 1.2f);
HUD::SET_BLIP_PRIORITY(uLocal_96, 5);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_96, "R2P_BLIP");
PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(1);
HUD::SET_BLIP_ROUTE(uLocal_96, 1);
uLocal_97=GRAPHICS::CREATE_CHECKPOINT(10, Var0 + Vector(4f, 0f, 0f), Var0, 10f, uVar1, uVar2, uVar3, 75, 0);
GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uLocal_97, 7.5f, 7.5f, 100f);
iLocal_99=1;
}}}elseif(HUD::DOES_BLIP_EXIST(uLocal_96)){
HUD::REMOVE_BLIP(&uLocal_96);
GRAPHICS::DELETE_CHECKPOINT(uLocal_97);
}}


void func_510(){
if(!HUD::DOES_BLIP_EXIST(uLocal_98)){
uLocal_98=HUD::ADD_BLIP_FOR_RADIUS(Local_90.f_4, 1000f);
HUD::SET_BLIP_COLOUR(uLocal_98, 1);
HUD::SET_BLIP_ALPHA(uLocal_98, 220);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_98, "R2P_BLIPR");
HUD::SET_BLIP_DISPLAY(uLocal_98, 3);
}}

int func_511(){
return Local_90.f_0;
}

int func_512(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_27(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


bool func_513(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_235(&iVar0, 1, iParam1)){
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
bVar2=func_514(&(Global_23390.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_514(var uParam0){
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


void func_515(int iParam0){
if(func_520()){
return;
}
if(!Global_20500.f_1==1){
if(func_21(0)){
func_516(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_516(int iParam0){
if(func_520()){
return;
}
if(Global_20704){
if(func_519()){
func_518(1, 1);
}else{
func_518(0, 0);
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
if(!func_517()){
Global_20500.f_1=3;
}}

int func_517(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_518(bool bParam0, bool bParam1){
if(bParam0){
if(func_21(0)){
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


bool func_519(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_520(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_521(int iParam0){
return Local_94[iParam0 /*4*/];
}

int func_522(bool bParam0){
if(func_532()){
if(bParam0){
if(!Global_1836594 && !func_531(PLAYER::PLAYER_ID(), 2)){
GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
func_523(0, 0);
}}
return 1;
}
return 0;
}


void func_523(bool bParam0, int iParam1){
if(bParam0){
func_528(1, 0, 1);
}else{
func_524(iParam1);
}}


void func_524(int iParam0){
func_527();
if(iParam0==0){
if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()){
return;
}}
if(func_526()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_525(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
}}


void func_525(int iParam0){
if(Global_1574632.f_20 !=iParam0){
Global_1574632.f_20=iParam0;
}}

int func_526(){
return Global_1574632.f_20;
}


void func_527(){
Global_2696294=1;
}


void func_528(int iParam0, bool bParam1, bool bParam2){
if(func_529()){
return;
}
if((func_526()==1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0){
func_525(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
if(!bParam1){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
if(bParam2){
GRAPHICS::RESET_PAUSED_RENDERPHASES();
}}}

int func_529(){
if(func_530()){
return Global_2694503;
}
return 0;
}

int func_530(){
if(Global_2694496){
return Global_2694495;
}
return 0;
}


bool func_531(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}


bool func_532(){
return Global_2672524.f_22;
}

int func_533(int iParam0, int iParam1, int iParam2){
if(func_567()){
return 0;
}
if(iParam0==1){
if(!func_555(32, 0, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return 0;
}
if((((((Global_1853988[PLAYER::PLAYER_ID() /*867*/]==14 || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==15) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==13) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==6) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==5) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==285){
return 0;
}
if(func_531(PLAYER::PLAYER_ID(), 0)){
return 0;
}
if(func_531(PLAYER::PLAYER_ID(), 21)){
return 0;
}
if(func_531(PLAYER::PLAYER_ID(), 25)){
return 0;
}
if(func_554(PLAYER::PLAYER_ID())==136){
return 0;
}
if(func_549()){
return 0;
}
if(func_165(PLAYER::PLAYER_ID(), 1)){
return 0;
}
if(func_548()){
return 0;
}
if(((((((func_547(PLAYER::PLAYER_ID(), 1, 0) || func_546(PLAYER::PLAYER_ID())) || func_544(PLAYER::PLAYER_ID())) || func_540(4)) || func_540(5)) || func_539(PLAYER::PLAYER_ID())) || func_538(PLAYER::PLAYER_ID())) || func_537(PLAYER::PLAYER_ID())){
return 0;
}
if(func_32() !=0){
return 0;
}
if(iParam2==1){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0 && func_208(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}}
if((func_536(PLAYER::PLAYER_ID()) || func_535(PLAYER::PLAYER_ID())) || func_534(PLAYER::PLAYER_ID())){
return 0;
}
if(func_31()){
return 0;
}
if(iParam1==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mg_race_to_point")) > 0){
return 0;
}}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_534(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==4;
}


bool func_535(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==6;
}


bool func_536(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==5;
}

int func_537(int iParam0){
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7)==7;
}}}
return 0;
}

int func_538(int iParam0){
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_13(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_539(int iParam0){
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_69()){
return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_540(int iParam0){
if(func_543()){
return func_541(func_542(), iParam0);
}
return 0;
}


bool func_541(int iParam0, int iParam1){
return func_312(iParam0)==iParam1;
}

int func_542(){
return Global_1950844.f_514;
}


bool func_543(){
return Global_1950844.f_514 !=-1;
}

int func_544(int iParam0){
if(func_545(Global_1853988[iParam0 /*867*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_545(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}

int func_546(int iParam0){
int iVar0;
if(iParam0 !=func_69()){
if(func_13(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
iVar0=func_312(Global_2657704[iParam0 /*463*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_547(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_69()){
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


bool func_548(){
return MISC::IS_BIT_SET(Global_1836866.f_1, 15);
}

int func_549(){
switch (func_554(PLAYER::PLAYER_ID())){
case 131:
case 138:
case 139:
case 140:
case 141:
case 129:
case 144:
case 236:
case 150:
return 1;
default:
}
if(func_477(func_554(PLAYER::PLAYER_ID()))==1){
return 1;
}
if(func_550(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_550(int iParam0){
if(func_553(iParam0)){
return 1;
}
if(func_551(iParam0)){
return 1;
}
return 0;
}

int func_551(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_552(iParam0, 9);
}
return 0;
}


var func__552(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_553(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}

int func_554(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/];
}
return -1;
}

int func_555(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(Global_262145.f_8317==1){
if(iParam0==67){
return 1;
}
if(iParam0==74){
return 1;
}
if(func_559(PLAYER::PLAYER_ID(), 85)){
if(((((iParam0==64 || iParam0==77) || iParam0==61) || iParam0==81) || iParam0==63) || iParam0==62){
return 1;
}}
if((((((((((iParam0==66 || iParam0==116) || iParam0==103) || iParam0==104) || iParam0==105) || iParam0==119) || iParam0==88) || iParam0==75) || iParam0==95) || iParam0==65) || iParam0==98){
return 1;
}}
if(iParam0 < 0){
return 0;
}
if(iParam0==31){
if(Global_262145.f_4747==1){
return 1;
}}
if(func_558() || func_557()){
return 1;
}
iVar0=iParam0;
iVar1=(iVar0 / 32);
iVar0=(iVar0 % 32);
if(bParam1){
if(iParam0==3){
if(func_556()){
return 1;
}else{
return 0;
}}}
if(bParam2){
return 0;
}
return MISC::IS_BIT_SET(Global_1836851[iVar1], iVar0);
}

int func_556(){
var uVar0;
if(Global_1574612){
return 1;
}
if(MISC::IS_BIT_SET(Global_2794162.f_1831, 23)){
return 1;
}
if(func_558()){
return 1;
}
if(func_557()){
return 1;
}
uVar0=func_188(1304, -1);
if(MISC::IS_BIT_SET(uVar0, 7)){
MISC::SET_BIT(&(Global_2794162.f_1831), 23);
return 1;
}
return 0;
}


bool func_557(){
return Global_1575051;
}


bool func_558(){
return Global_1575053;
}

int func_559(int iParam0, int iParam1){
if(!func_563()){
return 0;
}
if(func_562()){
return 0;
}
if(iParam1==86){
return 1;
}
return func_560(&(Global_1853988[iParam0 /*867*/].f_794), func_561(iParam1));
}


var func__560(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_561(int iParam0){
switch (iParam0){
case 86:
return 0;
case 19:
return 1;
case 12:
return 2;
case 31:
return 3;
case 20:
return 4;
case 18:
return 5;
case 2:
return 6;
case 76:
return 7;
case 22:
return 8;
case 53:
return 9;
case 34:
return 10;
case 152:
return 11;
case 85:
return 12;
case 84:
return 13;
case 0:
return 14;
case 1:
return 15;
case 153:
return 16;
case 151:
return 17;
case 14:
return 18;
case 15:
return 19;
case 24:
return 20;
case 30:
return 21;
case 46:
return 22;
case 47:
return 23;
case 54:
return 24;
case 51:
return 25;
case 60:
return 26;
case 62:
return 27;
case 66:
return 28;
case 69:
return 29;
case 154:
return 30;
case 82:
return 31;
case 157:
return 32;
case 167:
return 34;
case 169:
return 35;
case 171:
return 36;
case 172:
return 37;
case 173:
return 38;
case 177:
return 39;
case 182:
return 40;
case 188:
return 41;
case 190:
return 42;
default:
}
return 1;
}


bool func_562(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

int func_563(){
if(!func_564()){
return 0;
}
return 1;
}

int func_564(){
if(Global_1574612){
return 1;
}
if(func_558()){
return 1;
}
if(func_557()){
return 1;
}
return func_565(120, -1);
}

int func_565(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_566(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__566(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_115(uParam1));
}


bool func_567(){
return Global_2794162.f_28.f_43;
}

int func_568(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_574()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_573()){
return 1;
}
if(func_572(159)){
if(!func_571()){
return 1;
}}
if(func_572(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_569() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_569())==0){
return 1;
}}
return 0;
}

int func_569(){
switch (func_340()){
case 0:
return func_570();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_570(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_571(){
return Global_2683883.f_698;
}

int func_572(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_573(){
return Global_2694576;
}


bool func_574(){
return Global_2683883.f_693;
}


void func_575(){
wait(0);
}


bool func_576(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


void func_577(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_4(Local_90.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
}
Global_2794162.f_28.f_82=0;
}
if(HUD::DOES_BLIP_EXIST(uLocal_96)){
HUD::REMOVE_BLIP(&uLocal_96);
}
GRAPHICS::DELETE_CHECKPOINT(uLocal_97);
HUD::SET_MISSION_NAME(0, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3==0){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
func_233(1, -1);
}}else{
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
}
if(func_583("R2P_WARNH")){
HUD::CLEAR_HELP(1);
}
func_19();
PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(0);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!MISC::IS_BIT_SET(uLocal_95, 1)){
func_582();
}
if(MISC::IS_BIT_SET(uLocal_95, 3)){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=0){
Global_1853988[PLAYER::PLAYER_ID() /*867*/]=-1;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2=-1;
}
func_215(2, 0);
}
if(Local_90.f_22 >=3){
func_581();
}
func_216(0);
func_217(0);
}
func_580(&uLocal_139);
Global_2794162.f_28.f_80=0;
Global_2794162.f_28.f_41=0;
Global_2794162.f_28.f_81=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_1057408==1){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_211()){
func_579(6, 0, -1);
}}}
MISC::CLEAR_BIT(&(Global_2794162.f_4697), 16);
func_578();
}


void func_578(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_579(int iParam0, int iParam1, int iParam2){
if(!func_214() || iParam1){
Global_1574582=1;
func_212(1);
if(((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_211()) && !func_207(PLAYER::PLAYER_ID())) && !func_550(PLAYER::PLAYER_ID())){
Global_1057408=1;
}
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=1;
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(1, iParam0, iParam2, -1);
}}


void func_580(var uParam0){
if(*uParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}}


void func_581(){
if(Global_2672524.f_2514[0 /*80*/].f_2 !=0){
Global_2672524.f_2514[0 /*80*/].f_2=5;
}}


void func_582(){
struct<14> Var0;
if(MISC::IS_BIT_SET(uLocal_95, 7)){
Var0.f_2=-153984855;
}else{
Var0.f_2=1334380224;
}
Var0.f_10=PLAYER::PLAYER_ID();
func_506(Var0, func_507(0));
}


bool func_583(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_584(struct<21> Param0){
int iVar0;
func_597(32, Param0);
func_595(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_90, 25, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_94, 129, 0);
func_513(0, -1, 0);
if(!func_594()){
return 0;
}
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_90.f_4={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
Local_90.f_10={
0f, 0f, -2000f 
};
MISC::SET_BIT(&(Local_141.f_15), false);
}
iLocal_149=NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
Global_2794162.f_28.f_41=1;
iLocal_108=-1;
func_27(&uLocal_106, 0, 0);
func_586(1, 1, 0, 0, 0);
Global_2794162.f_28.f_46=0;
iVar0=0;
while (iVar0 < func_474()){
Global_2794162.f_28.f_47[iVar0]=0;
iVar0++;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==0){
iLocal_88=2;
}
func_513(0, -1, 0);
func_585(&uLocal_116);
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=0;
return 1;
}


void func_585(var uParam0){
Global_23388=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
uParam0->f_14=(0f + (Global_23389 * 0.5f));
uParam0->f_14.f_1=((0.1f + 0.034722f) + uParam0->f_13);
uParam0->f_14.f_2=(Global_23389 + 0.0005f);
uParam0->f_14.f_3=0.09f;
uParam0->f_14.f_4=255;
uParam0->f_14.f_5=255;
uParam0->f_14.f_6=255;
uParam0->f_14.f_7=255;
*uParam0=4;
uParam0->f_1=0.5f;
uParam0->f_2=0.75f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=255;
uParam0->f_7=0;
uParam0->f_9=0f;
uParam0->f_8=0f;
uParam0->f_11=0.00390625f;
uParam0->f_11.f_1=(0.11f + uParam0->f_13);
}


void func_586(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672524.f_1685.f_703.f_16 !=func_69()){
if(MISC::IS_BIT_SET(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_587()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643396=0;
}
Global_2635560.f_490=iParam0;
Global_2635560.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_490.f_2=iParam1;
Global_2635560.f_490.f_3=iParam2;
Global_2635560.f_490.f_4=iParam3;
Global_2635560.f_490.f_5=iParam4;
}

int func_587(){
if((((((func_164(PLAYER::PLAYER_ID())==229 || func_164(PLAYER::PLAYER_ID())==191) || func_593()) || func_592()) || func_591()) || Global_2765084.f_227==1) || (Global_2635560.f_1853 && func_588(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_588(int iParam0){
if(func_590(iParam0)){
return 1;
}
if(func_589(iParam0)){
return 1;
}
return 0;
}


bool func_589(int iParam0){
return func_552(iParam0, 20);
}

int func_590(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 7);
}
return 0;
}


var func__591(){
return Global_2765083;
}


var func__592(){
return Global_1836594;
}

int func_593(){
if(Global_4718592==6){
return 1;
}
return 0;
}

int func_594(){
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
if(func_574()){
return 0;
}
if(func_572(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_595(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_578();
}else{
return 0;
}}
if(!func_596(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_578();
}else{
return 0;
}}
if(func_574()){
if(!bParam2){
func_578();
}else{
return 0;
}}
if(func_572(157)){
if(!bParam2){
func_578();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_578();
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
func_578();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_578();
}else{
return 0;
}}
return 1;
}


bool func_596(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_597(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_578();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}