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
struct<872> Local_93={
0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 
};
struct<14> Local_94[32];
var uLocal_95=0;
var uLocal_96=0;
bool bLocal_97=0;
bool bLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110[4]={
0, 0, 0, 0 
};
struct<8> Local_111[30];
var uLocal_112[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_113=0;
var uLocal_114=0;
int iLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
struct<21> Local_120={
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
iLocal_102=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1123(PLAYER::PLAYER_ID(), 0, 1)){
func_1069(ScriptParam_120);
}else{
func_1015();
}
while (true){
func_1014();
if(func_1009()){
func_1015();
}
Global_1947733.f_2=Local_93.f_863;
Global_1947733.f_3=Local_93.f_864;
switch (func_1008(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_1007()==1){
if(func_1006()){
func_1005();
if(func_1004()){
func_989(166, 1, -1, 0);
PLAYER::SET_MAX_WANTED_LEVEL(3);
func_988(0f);
iLocal_101=PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_100);
}
else{
func_989(166, 0, -1, 0);
}
func_987();
func_986();
func_985();
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=1;
}}elseif(func_1007()==4){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=3;
}
break;
case 1:
if(func_974(1)){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=2;
}
if(func_1007()==1){
func_973();
func_953();
func_928();
func_318();
func_309();
if(func_1004() || func_307()){
func_153(&(Global_1645402.f_534), &Global_1645402, 28, &(Global_1645402.f_1), &(Global_1645402.f_117), -1, 0, 0);
}
func_78();
}elseif(func_1007()==4){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=3;
func_75();
}
func_74();
break;
case 3:
func_73(&(Local_93.f_845));
if(func_72(&(Local_93.f_845))){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=4;
}
break;
case 2:
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/]=4;
case 4:
func_1015();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_1007()){
case 0:
func_70();
func_69();
if(func_25()){
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_93.f_863), &(Local_93.f_864));
Local_93.f_0=1;
Local_93.f_118=NETWORK::PARTICIPANT_ID_TO_INT();
Local_93.f_119=PLAYER::PLAYER_ID();
func_989(166, 1, -1, 0);
}
break;
case 1:
func_21();
func_15();
func_11();
func_4();
if(func_2()){
Local_93.f_0=4;
}elseif(func_1()){
Local_93.f_0=4;
}
break;
case 4:
break;
}}}}

int func_1(){
if(Global_2793046.f_5225.f_42){
Global_2793046.f_5225.f_42=0;
return 1;
}
return 0;
}

int func_2(){
if(func_3()){
return 1;
}
if(MISC::IS_BIT_SET(Local_93.f_1, 2)){
return 1;
}
return 0;
}

int func_3(){
return 0;
}


void func_4(){
switch (Local_93.f_117){
case 0:
func_9();
func_5();
if(MISC::IS_BIT_SET(Local_93.f_1, 1)){
Local_93.f_117=2;
}elseif(MISC::IS_BIT_SET(Local_93.f_1, 3)){
Local_93.f_117=2;
}
break;
case 2:
break;
case 3:
break;
}}


void func_5(){
if(!MISC::IS_BIT_SET(Local_93.f_1, 6)){
if(!func_8(&(Local_93.f_849))){
func_7(&(Local_93.f_849), 0, 0);
}elseif(func_6(&(Local_93.f_849), 500, 0)){
MISC::SET_BIT(&(Local_93.f_1), 6);
}}}

int func_6(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_7(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_7(var uParam0, bool bParam1, bool bParam2){
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


bool func_8(var uParam0){
return uParam0->f_1;
}


void func_9(){
if(!func_8(&(Local_93.f_847))){
func_7(&(Local_93.f_847), 0, 0);
}elseif(func_6(&(Local_93.f_847), func_10(), 0)){
MISC::SET_BIT(&(Local_93.f_1), 3);
}}

int func_10(){
return Global_262145.f_15473;
}


void func_11(){
bool bVar0;
int iVar1;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=false;
while (bVar0 < 4){
switch (Local_93.f_2[bVar0 /*26*/].f_17){
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(Local_93.f_2[bVar0 /*26*/]==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_2)){
Local_93.f_2[bVar0 /*26*/].f_17=1;
}
}
elseif(Local_93.f_2[bVar0 /*26*/]==1){
Local_93.f_2[bVar0 /*26*/].f_17=5;
}
else{
Local_93.f_2[bVar0 /*26*/].f_17=8;
}}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!func_14(Local_93.f_2[bVar0 /*26*/].f_1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_2)){
if(func_12(Local_93.f_2[bVar0 /*26*/].f_2)){
if(PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_93.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_93.f_2[bVar0 /*26*/].f_2))){
if(MISC::IS_BIT_SET(Local_93.f_109, bVar0)){
MISC::SET_BIT(&(Local_93.f_108), bVar0);
Local_93.f_2[bVar0 /*26*/].f_17=2;
}
elseif(MISC::IS_BIT_SET(Local_93.f_110, bVar0)){
MISC::SET_BIT(&(Local_93.f_108), bVar0);
Local_93.f_2[bVar0 /*26*/].f_17=2;
}
elseif(MISC::IS_BIT_SET(Local_93.f_111, bVar0)){
MISC::SET_BIT(&(Local_93.f_108), bVar0);
Local_93.f_2[bVar0 /*26*/].f_17=2;
}
elseif(MISC::IS_BIT_SET(Local_93.f_112, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_17=3;
}
}
else{
Local_93.f_2[bVar0 /*26*/].f_17=4;
}}else{
Local_93.f_2[bVar0 /*26*/].f_17=3;
}}
}}
break;
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!func_14(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_93.f_2[bVar0 /*26*/].f_1))){
Local_93.f_2[bVar0 /*26*/].f_17=4;
}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_2)){
if(!func_12(Local_93.f_2[bVar0 /*26*/].f_2)){
Local_93.f_2[bVar0 /*26*/].f_17=3;
}elseif(MISC::IS_BIT_SET(Local_93.f_112, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_17=3;
}}
}}
break;
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!func_14(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_93.f_2[bVar0 /*26*/].f_1), 0)){
Local_93.f_2[bVar0 /*26*/].f_17=4;
}
}}
break;
case 5:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!func_14(Local_93.f_2[bVar0 /*26*/].f_1)){
if(MISC::IS_BIT_SET(Local_93.f_110, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_17=4;
}elseif(MISC::IS_BIT_SET(Local_93.f_111, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_17=4;
}
}}
break;
case 8:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(Local_93.f_2[bVar0 /*26*/].f_24){
Local_93.f_2[bVar0 /*26*/].f_17=9;
}}
break;
case 9:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(Local_93.f_2[bVar0 /*26*/].f_25){
Local_93.f_2[bVar0 /*26*/].f_17=6;
}}
break;
case 4:
break;
}
iVar1=0;
iVar1=0;
while (iVar1 < 3){
switch (Local_93.f_2[bVar0 /*26*/].f_18[iVar1]){
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(Local_93.f_2[bVar0 /*26*/]==0){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=1;
}elseif(Local_93.f_2[bVar0 /*26*/]==2){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=8;
}
}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(Local_93.f_2[bVar0 /*26*/].f_17==2){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=7;
}elseif(Local_93.f_2[bVar0 /*26*/].f_17==3 || Local_93.f_2[bVar0 /*26*/].f_17==4){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=3;
}
}
break;
case 8:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(Local_93.f_2[bVar0 /*26*/].f_24){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=6;
}
}
break;
case 7:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(Local_93.f_2[bVar0 /*26*/].f_17==3 || Local_93.f_2[bVar0 /*26*/].f_17==4){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=3;
}
}
break;
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(!func_14(Local_93.f_2[bVar0 /*26*/].f_3[iVar1])){
if(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_93.f_2[bVar0 /*26*/].f_3[iVar1]), 0)){
Local_93.f_2[bVar0 /*26*/].f_18[iVar1]=6;
}}
}
break;
case 6:
break;
}
iVar1++;
}
bVar0++;
}}}

int func_12(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_13(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_13(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_14(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}


void func_15(){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_2)){
if(!MISC::IS_BIT_SET(Local_93.f_116, bVar0)){
if(func_20(bVar0)){
if(func_12(Local_93.f_2[bVar0 /*26*/].f_2)){
func_16(bVar0);
MISC::SET_BIT(&(Local_93.f_116), bVar0);
}}}}
bVar0++;
}}


void func_16(bool bParam0){
bool bVar0;
bool bVar1;
bVar0=false;
while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0))){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
if(!func_17(bVar1, 0)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), bVar1, 0);
}}
bVar0++;
}}


bool func_17(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_18(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_18(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_19();
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

int func_19(){
return Global_1574918;
}

int func_20(bool bParam0){
int iVar0;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
return 0;
}
if(!func_14(Local_93.f_2[bParam0 /*26*/].f_1)){
return 0;
}
iVar0=0;
while (iVar0 < 3){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_3[iVar0])){
if(!func_14(Local_93.f_2[bParam0 /*26*/].f_3[iVar0])){
return 0;
}}
iVar0++;
}
return 1;
}


void func_21(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
iVar0=0;
bVar1=false;
bVar2=false;
if(Local_93.f_0 !=4){
bLocal_97=false;
while (bLocal_97 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_97))){
bVar3=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_97));
if(!func_17(bVar3, 0)){
if(func_1123(bVar3, 1, 1)){
}
func_24(bLocal_97);
func_23(bLocal_97);
if(!MISC::IS_BIT_SET(Local_93.f_1, 2)){
if(!bVar2){
if((MISC::IS_BIT_SET(Local_93.f_1, 1) || MISC::IS_BIT_SET(Local_93.f_1, 3)) || MISC::IS_BIT_SET(Local_93.f_1, 5)){
if(!MISC::IS_BIT_SET(Local_94[bLocal_97 /*14*/].f_1, 4)){
bVar2=true;
}}else{
bVar2=true;
}
}}}}elseif(!MISC::IS_BIT_SET(Local_93.f_1, 5)){
if(Local_93.f_118 > -1){
if(bLocal_97==Local_93.f_118){
MISC::SET_BIT(&(Local_93.f_1), 5);
}}}
bLocal_97++;
}
func_22();
bVar1=false;
while (bVar1 < 4){
if(MISC::IS_BIT_SET(Local_93.f_113, bVar1)){
iVar0++;
}
bVar1++;
}
if(Local_93.f_115 !=iVar0){
Local_93.f_115=iVar0;
}
if(!MISC::IS_BIT_SET(Local_93.f_1, 1)){
if(iVar0 >=4){
MISC::SET_BIT(&(Local_93.f_1), true);
}}
if(!MISC::IS_BIT_SET(Local_93.f_1, 2)){
if(!bVar2){
MISC::SET_BIT(&(Local_93.f_1), 2);
}}}}


void func_22(){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar0 /*26*/].f_1)){
if(!MISC::IS_BIT_SET(Local_93.f_113, bVar0)){
if(!func_8(&(Local_93.f_853[bVar0 /*2*/]))){
if(func_14(Local_93.f_2[bVar0 /*26*/].f_1)){
func_7(&(Local_93.f_853[bVar0 /*2*/]), 0, 0);
}}elseif(func_6(&(Local_93.f_853[bVar0 /*2*/]), 10000, 0)){
MISC::SET_BIT(&(Local_93.f_113), bVar0);
}}}
bVar0++;
}}


void func_23(bool bParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(!MISC::IS_BIT_SET(Local_93.f_109, bVar0)){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_5, bVar0)){
MISC::SET_BIT(&(Local_93.f_109), bVar0);
}}
if(!MISC::IS_BIT_SET(Local_93.f_110, bVar0)){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_2, bVar0)){
MISC::SET_BIT(&(Local_93.f_110), bVar0);
}}
if(!MISC::IS_BIT_SET(Local_93.f_112, bVar0)){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_3, bVar0)){
MISC::SET_BIT(&(Local_93.f_112), bVar0);
}}
if(!MISC::IS_BIT_SET(Local_93.f_111, bVar0)){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_4, bVar0)){
MISC::SET_BIT(&(Local_93.f_111), bVar0);
}}
if(!MISC::IS_BIT_SET(Local_93.f_113, bVar0)){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_6, bVar0)){
MISC::SET_BIT(&(Local_93.f_113), bVar0);
}elseif(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_7, bVar0)){
MISC::SET_BIT(&(Local_93.f_113), bVar0);
}}
if(Local_93.f_2[bVar0 /*26*/]==2){
if(!Local_93.f_2[bVar0 /*26*/].f_24){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_12, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_24=1;
}}
if(!Local_93.f_2[bVar0 /*26*/].f_25){
if(MISC::IS_BIT_SET(Local_94[bParam0 /*14*/].f_13, bVar0)){
Local_93.f_2[bVar0 /*26*/].f_25=1;
}}}
bVar0++;
}}


void func_24(bool bParam0){
int iVar0;
if(!MISC::IS_BIT_SET(Local_93.f_114, bParam0)){
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iVar0 /*26*/].f_2)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iVar0 /*26*/].f_1)){
if(!func_14(Local_93.f_2[iVar0 /*26*/].f_1)){
if(func_12(Local_93.f_2[iVar0 /*26*/].f_2)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_93.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0)), 1);
MISC::SET_BIT(&(Local_93.f_114), bParam0);
}}}}else{
MISC::SET_BIT(&(Local_93.f_114), bParam0);
}
iVar0++;
}}}

int func_25(){
if(!func_46()){
return 0;
}
if(!func_35()){
return 0;
}
if(!func_26()){
return 0;
}
return 1;
}

int func_26(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(func_34(iVar0)){
func_29(iVar0);
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 4){
if(func_34(iVar0)){
if(!func_27(iVar0)){
return 0;
}}
iVar0++;
}
return 1;
}

int func_27(int iParam0){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=Local_93.f_2[iParam0 /*26*/].f_22;
iVar1=0;
while (iVar1 < 3){
Var2={
Local_93.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] 
};
if(!func_28(Var2, 0f, 0f, 0f, 0)){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_7[iVar1])){
return 0;
}}
iVar1++;
}
return 1;
}


bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_29(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
struct<3> Var3;
var uVar4;
iVar0=Local_93.f_2[iParam0 /*26*/].f_22;
bVar1=false;
while (bVar1 < 3){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_7[bVar1])){
Var3={
Local_93.f_123[iVar0 /*36*/].f_18[bVar1 /*3*/] 
};
uVar4=Local_93.f_123[iVar0 /*36*/].f_28[bVar1];
if(!func_28(Var3, 0f, 0f, 0f, 0)){
iVar2=Local_93.f_123[iVar0 /*36*/].f_32[bVar1];
if(NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
if(func_33(iVar2)){
if(!MISC::IS_BIT_SET(Local_93.f_2[iParam0 /*26*/].f_23, bVar1)){
MISC::CLEAR_AREA(Var3, 10f, 1, 0, 0, 1);
MISC::SET_BIT(&(Local_93.f_2[iParam0 /*26*/].f_23), bVar1);
}
if(func_30(&(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), iVar2, Var3, uVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), 1);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), 1, iLocal_100);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), 0, 0);
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_93.f_2[iParam0 /*26*/].f_7[bVar1]), 0);
}}}}}
bVar1++;
}
return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
float fVar0;
int iVar1;
if(!STREAMING::IS_MODEL_VALID(iParam1)){
return 0;
}
if(!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
return 0;
}
fVar0=1.5f;
if(iParam1==joaat("bombushka")){
fVar0=20f;
}
if(bParam9){
MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
}
iVar1=VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
*uParam0=NETWORK::VEH_TO_NET(iVar1);
Global_2793046.f_6736=iVar1;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(bParam13){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, 1);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, iParam8);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1)){
if(bParam6){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}else{
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
}
if(bParam11){
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
}}
VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam7);
VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, 1);
if(bParam10){
VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
}
func_31(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_31(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_32(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
if((Global_2635559.f_2921[1 /*6*/].f_5==iParam3 && Global_2635559.f_2921[1 /*6*/].f_4==iParam2) && vdist(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f){
return;
}
iVar0=0;
while (iVar0 < 2){
if(iVar0 < 1){
Global_2635559.f_2921[iVar0 /*6*/]={
Global_2635559.f_2921[iVar0 + 1 /*6*/] 
};
}
iVar0++;
}
Global_2635559.f_2921[1 /*6*/]={
Param0 
};
Global_2635559.f_2921[1 /*6*/].f_3=uParam1;
Global_2635559.f_2921[1 /*6*/].f_4=iParam2;
Global_2635559.f_2921[1 /*6*/].f_5=iParam3;
}}

int func_32(bool bParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=bParam0;
if(iVar0 > -1){
iVar1=0;
while (iVar1 < 2){
if(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==iParam2){
Var2={
Param1 
};
if(MISC::ABSF((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f){
Var2.f_2=Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
}
if(vdist(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f){
return iVar1;
}}
iVar1++;
}}
return -1;
}

int func_33(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


bool func_34(int iParam0){
int iVar0;
if(Local_93.f_2[iParam0 /*26*/] !=2){
return 0;
}
iVar0=Local_93.f_2[iParam0 /*26*/].f_22;
return !func_28(Local_93.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(func_45(iVar0)){
func_37(iVar0);
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 4){
if(func_45(iVar0)){
if(!func_36(iVar0)){
return 0;
}}
iVar0++;
}
return 1;
}

int func_36(int iParam0){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
iVar1=Local_93.f_2[iParam0 /*26*/];
iVar2=Local_93.f_2[iParam0 /*26*/].f_22;
iVar0=0;
while (iVar0 < 3){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_3[iVar0])){
if(iVar1==0){
return 0;
}elseif(iVar1==2){
Var3={
Local_93.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] 
};
if(!func_28(Var3, 0f, 0f, 0f, 0)){
return 0;
}}}
iVar0++;
}
return 1;
}

int func_37(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<3> Var5;
var uVar6;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_1)){
switch (Local_93.f_2[iParam0 /*26*/]){
case 0:
if(func_44(Local_93.f_2[iParam0 /*26*/].f_2)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_2)){
iVar0=func_43();
iVar1=0;
while (iVar1 < 3){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_3[iVar1])){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
if(func_33(iVar0)){
if(func_42(&(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), Local_93.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837220);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_100);
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
}
}}}
iVar1++;
}}}
break;
case 2:
iVar0=func_43();
iVar1=0;
while (iVar1 < 3){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iParam0 /*26*/].f_3[iVar1])){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
if(func_33(iVar0)){
iVar2=Local_93.f_2[iParam0 /*26*/].f_22;
Var5={
Local_93.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] 
};
uVar6=Local_93.f_123[iVar2 /*36*/].f_14[iVar1];
if(!func_28(Var5, 0f, 0f, 0f, 0)){
if(func_41(&(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar6, 1, 1, 1)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837220);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_100);
WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
iVar3=func_40();
ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
uVar4=func_39();
PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
}}}
}}
iVar1++;
}
break;
}}
return 0;
}

int func_38(){
return round(Global_262145.f_15481);
}

int func_39(){
return 200;
}


var func__40(){
return Global_262145.f_15480;
}

int func_41(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
int iVar0;
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
iVar0=PED::CREATE_PED(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
*uParam0=NETWORK::PED_TO_NET(iVar0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0)){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0)){
return 0;
}
*uParam0=NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0))){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_43(){
return joaat("s_m_m_chemsec_01");
}

int func_44(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}


bool func_45(int iParam0){
return (Local_93.f_2[iParam0 /*26*/]==0 || Local_93.f_2[iParam0 /*26*/]==2);
}

int func_46(){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
func_48(bVar0);
bVar0++;
}
bVar0=false;
bVar0=false;
while (bVar0 < 4){
if(!func_47(bVar0)){
return 0;
}
bVar0++;
}
return 1;
}

int func_47(bool bParam0){
switch (Local_93.f_2[bParam0 /*26*/]){
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_2)){
return 1;
}}
break;
case 1:
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
return 1;
}
break;
}
return 0;
}

int func_48(bool bParam0){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
var uVar4;
int iVar5;
var uVar6;
var uVar7;
switch (Local_93.f_2[bParam0 /*26*/]){
case 0:
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_2)){
iVar0=Local_93.f_2[bParam0 /*26*/].f_11;
if(NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
if(func_33(iVar0)){
if(func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_54(bParam0, &Var2, &uVar3, &uVar4)){
Local_93.f_2[bParam0 /*26*/].f_13={
Var2 
};
Local_93.f_2[bParam0 /*26*/].f_16=uVar3;
}
}
if(!func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_30(&(Local_93.f_2[bParam0 /*26*/].f_2), iVar0, Local_93.f_2[bParam0 /*26*/].f_13, Local_93.f_2[bParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1, 1, 0);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_2), 1, iLocal_100);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 0);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 0, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1, 1);
VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1);
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 1);
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 0);
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_93.f_2[bParam0 /*26*/].f_2), 0);
}
}}}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_2)){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
iVar1=Local_93.f_2[bParam0 /*26*/].f_12;
if(func_33(iVar1)){
if(func_42(&(Local_93.f_2[bParam0 /*26*/].f_1), Local_93.f_2[bParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), Global_1837220);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, iLocal_100);
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
MISC::SET_BIT(&(Local_93.f_107), bParam0);
}
}}}}
break;
case 1:
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
iVar1=Local_93.f_2[bParam0 /*26*/].f_12;
if(func_33(iVar1)){
if(func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_54(bParam0, &Var2, &uVar3, &uVar4)){
Local_93.f_2[bParam0 /*26*/].f_13={
Var2 
};
Local_93.f_2[bParam0 /*26*/].f_16=uVar3;
}
}
if(!func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_41(&(Local_93.f_2[bParam0 /*26*/].f_1), 22, iVar1, Local_93.f_2[bParam0 /*26*/].f_13, Local_93.f_2[bParam0 /*26*/].f_16, 1, 1, 1)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), Global_1837220);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, iLocal_100);
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
MISC::SET_BIT(&(Local_93.f_107), bParam0);
}
}}}}
break;
case 2:
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bParam0 /*26*/].f_1)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
iVar1=Local_93.f_2[bParam0 /*26*/].f_12;
if(func_33(iVar1)){
if(func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_54(bParam0, &Var2, &uVar3, &uVar4)){
Local_93.f_2[bParam0 /*26*/].f_13={
Var2 
};
Local_93.f_2[bParam0 /*26*/].f_16=uVar3;
Local_93.f_2[bParam0 /*26*/].f_22=uVar4;
func_53(Var2);
}
}
if(!func_28(Local_93.f_2[bParam0 /*26*/].f_13, 0f, 0f, 0f, 0)){
if(func_41(&(Local_93.f_2[bParam0 /*26*/].f_1), 22, iVar1, Local_93.f_2[bParam0 /*26*/].f_13, Local_93.f_2[bParam0 /*26*/].f_16, 1, 1, 1)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), Global_1837220);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, iLocal_100);
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 42, 1);
PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 11, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 44, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1);
WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
uVar7=func_52(bParam0);
PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), Local_93.f_2[bParam0 /*26*/].f_13, uVar7, 0, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 132, 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 281, 1);
iVar5=func_51();
ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), iVar5);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), iVar5, 0);
uVar6=func_50();
PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), uVar6);
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), func_49());
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_93.f_2[bParam0 /*26*/].f_1), 1, 1);
MISC::SET_BIT(&(Local_93.f_107), bParam0);
}
}}}}
break;
}
return 0;
}

int func_49(){
return round(Global_262145.f_15479);
}

int func_50(){
return 100;
}


var func__51(){
return Global_262145.f_15478;
}


float func_52(bool bParam0){
if(func_28(Local_93.f_2[bParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0)){
return 10f;
}
return 3f;
}


void func_53(struct<3> Param0){
bool bVar0;
bool bVar1;
bVar0=-1;
bVar1=false;
while (bVar1 < 5){
if(bVar0==-1){
if(!MISC::IS_BIT_SET(Local_93.f_871, bVar1)){
bVar0=bVar1;
}}
bVar1++;
}
if(bVar0 < 0){
return;
}
if(func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0)){
Local_93.f_865[bVar0]=PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
MISC::SET_BIT(&(Local_93.f_871), bVar0);
}
if(func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0)){
Local_93.f_865[bVar0]=PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
MISC::SET_BIT(&(Local_93.f_871), bVar0);
}
if(func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0)){
Local_93.f_865[bVar0]=PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
MISC::SET_BIT(&(Local_93.f_871), bVar0);
}}

int func_54(bool bParam0, var uParam1, var uParam2, var uParam3){
int iVar0;
switch (Local_93.f_2[bParam0 /*26*/]){
case 1:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Local_93.f_122);
if(!func_28(Local_93.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0)){
if(func_55(Local_93.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
*uParam1={
Local_93.f_123[iVar0 /*36*/] 
};
*uParam2=Local_93.f_123[iVar0 /*36*/].f_3;
Local_93.f_123[iVar0 /*36*/]={
0f, 0f, 0f 
};
return 1;
}}
break;
case 2:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Local_93.f_122);
if(!func_28(Local_93.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0)){
if(func_55(Local_93.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
*uParam1={
Local_93.f_123[iVar0 /*36*/] 
};
*uParam2=Local_93.f_123[iVar0 /*36*/].f_3;
*uParam3=iVar0;
Local_93.f_123[iVar0 /*36*/]={
0f, 0f, 0f 
};
return 1;
}}
break;
case 0:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(!func_28(Local_93.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0)){
if(func_55(Local_93.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
*uParam1={
Local_93.f_484[iVar0 /*36*/] 
};
*uParam2=Local_93.f_484[iVar0 /*36*/].f_3;
Local_93.f_484[iVar0 /*36*/]={
0f, 0f, 0f 
};
return 1;
}}
break;
}
return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
Global_2635559.f_2=0;
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
Global_2635559.f_2++;
if(bParam11){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635559.f_2++;
if(fParam12 > 0f){
if(func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
bool bVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_1123(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_1123(bVar1, 1, 1)){
if(!func_17(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_57(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_57(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


Vector3 func__58(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_61() && Global_1853910[iVar0 /*862*/].f_832) && !func_60(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_59(bParam0);
}


Vector3 func__59(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_60(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


bool func_61(){
return Global_2683864.f_19;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_1123(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_57(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_63(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_63(bool bParam0){
if(func_68(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_67(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_64(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_64(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_66(bParam0);
if(!iVar0==func_65()){
if(iVar0==func_66(bParam1)){
return 1;
}}
return 0;
}

int func_65(){
return -1;
}

int func_66(int iParam0){
if(iParam0 !=func_65()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_65();
}
struct<13> func_67(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_68(bool bParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_67(bParam0) 
};
Global_2764216={
func_67(iParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764203)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764216)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764133, 35, &Global_2764203);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764168, 35, &Global_2764216);
if(Global_2764133==Global_2764168){
return 1;
}}}}
return 0;
}


void func_69(){
Local_93.f_2[0 /*26*/]=2;
Local_93.f_2[0 /*26*/].f_11=joaat("baller3");
Local_93.f_2[0 /*26*/].f_12=joaat("a_m_y_business_03");
Local_93.f_2[1 /*26*/]=2;
Local_93.f_2[1 /*26*/].f_11=joaat("dubsta");
Local_93.f_2[1 /*26*/].f_12=joaat("a_m_y_business_03");
Local_93.f_2[2 /*26*/]=0;
Local_93.f_2[2 /*26*/].f_11=joaat("cog552");
Local_93.f_2[2 /*26*/].f_12=joaat("a_m_y_business_03");
Local_93.f_2[3 /*26*/]=0;
Local_93.f_2[3 /*26*/].f_11=joaat("baller5");
Local_93.f_2[3 /*26*/].f_12=joaat("a_m_y_business_03");
}


void func_70(){
func_71();
if(Local_93.f_122==0){
if(Local_93.f_121==0){
Local_93.f_122=10;
}else{
Local_93.f_122=9;
}}
if(MISC::IS_BIT_SET(Local_93.f_1, 4)){
return;
}
switch (Local_93.f_121){
case 0:
Local_93.f_123[0 /*36*/]={
-106.8009f, 331.5984f, 111.7262f 
};
Local_93.f_123[0 /*36*/].f_3=45.1956f;
Local_93.f_123[0 /*36*/].f_4[0 /*3*/]={
-106.2522f, 353.0331f, 111.8849f 
};
Local_93.f_123[0 /*36*/].f_4[1 /*3*/]={
-104.2692f, 356.5287f, 111.8858f 
};
Local_93.f_123[0 /*36*/].f_4[2 /*3*/]={
-108.1528f, 347.4515f, 111.8858f 
};
Local_93.f_123[1 /*36*/]={
-1193.408f, -218.8712f, 36.9448f 
};
Local_93.f_123[1 /*36*/].f_3=136.8281f;
Local_93.f_123[1 /*36*/].f_4[0 /*3*/]={
-1174.724f, -238.3963f, 36.9385f 
};
Local_93.f_123[1 /*36*/].f_4[1 /*3*/]={
-1201.011f, -231.2006f, 36.948f 
};
Local_93.f_123[1 /*36*/].f_4[2 /*3*/]={
-1162.52f, -229.3399f, 36.9564f 
};
Local_93.f_123[2 /*36*/]={
-1646.583f, -1102.801f, 12.0181f 
};
Local_93.f_123[2 /*36*/].f_3=312.8899f;
Local_93.f_123[2 /*36*/].f_4[0 /*3*/]={
-1643.292f, -1098.154f, 12.0207f 
};
Local_93.f_123[2 /*36*/].f_4[1 /*3*/]={
-1638.825f, -1093.105f, 12.0269f 
};
Local_93.f_123[3 /*36*/]={
1171.307f, -398.4046f, 70.5896f 
};
Local_93.f_123[3 /*36*/].f_3=252.8763f;
Local_93.f_123[3 /*36*/].f_4[0 /*3*/]={
1180.066f, -405.9521f, 66.7792f 
};
Local_93.f_123[3 /*36*/].f_4[1 /*3*/]={
1176.999f, -397.1275f, 66.928f 
};
Local_93.f_123[4 /*36*/]={
929.1267f, -1255.108f, 24.4835f 
};
Local_93.f_123[4 /*36*/].f_3=27.8866f;
Local_93.f_123[4 /*36*/].f_4[0 /*3*/]={
943.2654f, -1244.3f, 24.6881f 
};
Local_93.f_123[4 /*36*/].f_4[1 /*3*/]={
939.8859f, -1229.958f, 24.652f 
};
Local_93.f_123[4 /*36*/].f_4[2 /*3*/]={
920.2808f, -1259.097f, 24.5269f 
};
Local_93.f_123[5 /*36*/]={
883.0366f, -2166.188f, 31.2735f 
};
Local_93.f_123[5 /*36*/].f_3=186.7157f;
Local_93.f_123[5 /*36*/].f_4[0 /*3*/]={
871.2222f, -2167.22f, 31.2735f 
};
Local_93.f_123[5 /*36*/].f_4[1 /*3*/]={
872.3619f, -2199.464f, 29.5194f 
};
Local_93.f_123[5 /*36*/].f_4[2 /*3*/]={
888.3759f, -2169.164f, 35.2714f 
};
Local_93.f_123[6 /*36*/]={
-110.3279f, -2705.599f, 5.0099f 
};
Local_93.f_123[6 /*36*/].f_3=0.3174f;
Local_93.f_123[6 /*36*/].f_4[0 /*3*/]={
-133.4379f, -2700.109f, 5.0103f 
};
Local_93.f_123[6 /*36*/].f_4[1 /*3*/]={
-127.772f, -2681.304f, 5.0274f 
};
Local_93.f_123[6 /*36*/].f_4[2 /*3*/]={
-112.7492f, -2673.062f, 5.006f 
};
Local_93.f_123[6 /*36*/].f_14[2]=180f;
Local_93.f_123[7 /*36*/]={
-520.2162f, 163.9754f, 70.0812f 
};
Local_93.f_123[7 /*36*/].f_3=358.2249f;
Local_93.f_123[7 /*36*/].f_4[0 /*3*/]={
-508.6846f, 166.9421f, 69.9316f 
};
Local_93.f_123[7 /*36*/].f_4[1 /*3*/]={
-495.0937f, 169.297f, 69.9316f 
};
Local_93.f_123[7 /*36*/].f_18[0 /*3*/]={
-505.5487f, 166.7718f, 69.9316f 
};
Local_93.f_123[7 /*36*/].f_28[0]=85.9643f;
Local_93.f_123[7 /*36*/].f_32[0]=joaat("baller5");
Local_93.f_123[7 /*36*/].f_18[1 /*3*/]={
-498.6042f, 169.8883f, 69.9316f 
};
Local_93.f_123[7 /*36*/].f_28[1]=263.6038f;
Local_93.f_123[7 /*36*/].f_32[1]=joaat("cog552");
Local_93.f_123[8 /*36*/]={
-591.7915f, -1765.793f, 22.1854f 
};
Local_93.f_123[9 /*36*/].f_3=241.2612f;
Local_93.f_123[8 /*36*/].f_4[0 /*3*/]={
-593.1422f, -1779.995f, 21.8499f 
};
Local_93.f_123[8 /*36*/].f_4[1 /*3*/]={
-584.6111f, -1774.981f, 21.62f 
};
Local_93.f_123[8 /*36*/].f_4[2 /*3*/]={
-580.9441f, -1769.818f, 22.1854f 
};
Local_93.f_123[8 /*36*/].f_18[0 /*3*/]={
-582.6792f, -1777.695f, 21.6132f 
};
Local_93.f_123[8 /*36*/].f_28[0]=145.1394f;
Local_93.f_123[8 /*36*/].f_32[0]=joaat("baller5");
Local_93.f_123[9 /*36*/]={
306.2488f, -1000.808f, 28.3108f 
};
Local_93.f_123[9 /*36*/].f_3=63.2117f;
Local_93.f_123[9 /*36*/].f_4[0 /*3*/]={
314.583f, -998.1405f, 28.1613f 
};
Local_93.f_123[9 /*36*/].f_4[1 /*3*/]={
300.5795f, -997.6307f, 28.1986f 
};
Local_93.f_123[9 /*36*/].f_18[0 /*3*/]={
312.527f, -1000.571f, 28.2617f 
};
Local_93.f_123[9 /*36*/].f_28[0]=148.5301f;
Local_93.f_123[9 /*36*/].f_32[0]=joaat("baller5");
Local_93.f_123[9 /*36*/].f_18[1 /*3*/]={
303.729f, -1000.568f, 28.3096f 
};
Local_93.f_123[9 /*36*/].f_28[1]=44.2995f;
Local_93.f_123[9 /*36*/].f_32[1]=joaat("cog552");
Local_93.f_484[0 /*36*/]={
533.1884f, -136.2944f, 58.6519f 
};
Local_93.f_484[0 /*36*/].f_3=179.583f;
Local_93.f_484[1 /*36*/]={
774.9319f, -1329.652f, 25.243f 
};
Local_93.f_484[1 /*36*/].f_3=268.6526f;
Local_93.f_484[2 /*36*/]={
999.0349f, -3054.079f, 4.9011f 
};
Local_93.f_484[2 /*36*/].f_3=90.3809f;
Local_93.f_484[3 /*36*/]={
329.7707f, -1750.917f, 28.2917f 
};
Local_93.f_484[3 /*36*/].f_3=229.4149f;
Local_93.f_484[4 /*36*/]={
-1000.175f, -2098.133f, 11.3367f 
};
Local_93.f_484[4 /*36*/].f_3=141.0009f;
Local_93.f_484[5 /*36*/]={
-712.6369f, -880.1467f, 22.5928f 
};
Local_93.f_484[5 /*36*/].f_3=359.1567f;
Local_93.f_484[6 /*36*/]={
-1482.46f, -498.4642f, 31.8069f 
};
Local_93.f_484[6 /*36*/].f_3=212.8829f;
Local_93.f_484[7 /*36*/]={
-1357.325f, 579.7441f, 130.483f 
};
Local_93.f_484[7 /*36*/].f_3=257.1156f;
Local_93.f_484[8 /*36*/]={
-555.6091f, 55.0564f, 48.3253f 
};
Local_93.f_484[8 /*36*/].f_3=174.0491f;
Local_93.f_484[9 /*36*/]={
-84.1599f, -1024.114f, 27.2205f 
};
Local_93.f_484[9 /*36*/].f_3=245.895f;
break;
case 1:
Local_93.f_123[0 /*36*/]={
1447.271f, 3750.165f, 30.9342f 
};
Local_93.f_123[0 /*36*/].f_3=225.1522f;
Local_93.f_123[0 /*36*/].f_4[0 /*3*/]={
1440.142f, 3753.75f, 30.9407f 
};
Local_93.f_123[0 /*36*/].f_4[1 /*3*/]={
1455.688f, 3760.388f, 31.0543f 
};
Local_93.f_123[1 /*36*/]={
-46.8187f, 1946.659f, 189.5608f 
};
Local_93.f_123[9 /*36*/].f_3=128.6356f;
Local_93.f_123[1 /*36*/].f_4[0 /*3*/]={
-52.1263f, 1953.13f, 189.1861f 
};
Local_93.f_123[1 /*36*/].f_4[1 /*3*/]={
-63.1502f, 1951.946f, 189.1861f 
};
Local_93.f_123[1 /*36*/].f_4[2 /*3*/]={
-59.1516f, 1964.074f, 189.1861f 
};
Local_93.f_123[2 /*36*/]={
2002.527f, 4978.516f, 40.5969f 
};
Local_93.f_123[2 /*36*/].f_3=214.3712f;
Local_93.f_123[2 /*36*/].f_4[0 /*3*/]={
2013.281f, 4976.885f, 40.4305f 
};
Local_93.f_123[2 /*36*/].f_4[1 /*3*/]={
2025.947f, 4978.383f, 40.1376f 
};
Local_93.f_123[2 /*36*/].f_4[2 /*3*/]={
2000.83f, 4990.36f, 40.4477f 
};
Local_93.f_123[3 /*36*/]={
2939.418f, 4623.833f, 47.7256f 
};
Local_93.f_123[3 /*36*/].f_3=151.8443f;
Local_93.f_123[3 /*36*/].f_4[0 /*3*/]={
2930.615f, 4620.496f, 47.7246f 
};
Local_93.f_123[3 /*36*/].f_4[1 /*3*/]={
2946.911f, 4629.479f, 47.7251f 
};
Local_93.f_123[3 /*36*/].f_4[2 /*3*/]={
2936.956f, 4609.8f, 47.7277f 
};
Local_93.f_123[4 /*36*/]={
519.5331f, 3105.464f, 39.5241f 
};
Local_93.f_123[4 /*36*/].f_3=186.7534f;
Local_93.f_123[4 /*36*/].f_4[0 /*3*/]={
518.6117f, 3090.195f, 39.4652f 
};
Local_93.f_123[4 /*36*/].f_4[1 /*3*/]={
532.1984f, 3083.56f, 39.4652f 
};
Local_93.f_123[5 /*36*/]={
-1597.604f, 3083.673f, 31.5661f 
};
Local_93.f_123[5 /*36*/].f_3=101.7629f;
Local_93.f_123[5 /*36*/].f_4[0 /*3*/]={
-1601.259f, 3078.785f, 31.5661f 
};
Local_93.f_123[5 /*36*/].f_4[1 /*3*/]={
-1609.109f, 3080.765f, 31.5661f 
};
Local_93.f_123[5 /*36*/].f_4[2 /*3*/]={
-1598.4f, 3070.091f, 32.6629f 
};
Local_93.f_123[6 /*36*/]={
1470.055f, 6550.666f, 13.9091f 
};
Local_93.f_123[6 /*36*/].f_3=352.4692f;
Local_93.f_123[6 /*36*/].f_4[0 /*3*/]={
1459.452f, 6546.819f, 13.6304f 
};
Local_93.f_123[6 /*36*/].f_4[1 /*3*/]={
1460.641f, 6562.202f, 12.7644f 
};
Local_93.f_123[6 /*36*/].f_18[0 /*3*/]={
1459.178f, 6544.879f, 13.713f 
};
Local_93.f_123[6 /*36*/].f_28[0]=88.1481f;
Local_93.f_123[6 /*36*/].f_32[0]=joaat("baller5");
Local_93.f_123[6 /*36*/].f_18[1 /*3*/]={
1460.212f, 6560.179f, 12.9444f 
};
Local_93.f_123[6 /*36*/].f_28[1]=97.3821f;
Local_93.f_123[6 /*36*/].f_32[1]=joaat("cog552");
Local_93.f_123[7 /*36*/]={
2328.066f, 2576.558f, 45.6677f 
};
Local_93.f_123[7 /*36*/].f_3=335.1092f;
Local_93.f_123[7 /*36*/].f_4[0 /*3*/]={
2339.745f, 2569.616f, 46.7255f 
};
Local_93.f_123[7 /*36*/].f_4[1 /*3*/]={
2356.385f, 2593.859f, 46.1125f 
};
Local_93.f_123[7 /*36*/].f_4[2 /*3*/]={
2338.935f, 2549.453f, 45.6677f 
};
Local_93.f_123[8 /*36*/]={
-1600.295f, 5204.928f, 3.3151f 
};
Local_93.f_123[8 /*36*/].f_3=296.2108f;
Local_93.f_123[8 /*36*/].f_4[0 /*3*/]={
-1587.408f, 5193.21f, 3.3151f 
};
Local_93.f_123[8 /*36*/].f_4[1 /*3*/]={
-1576.558f, 5176.321f, 18.7159f 
};
Local_93.f_123[8 /*36*/].f_4[2 /*3*/]={
-1595.553f, 5206.593f, 3.3151f 
};
Local_93.f_123[8 /*36*/].f_18[0 /*3*/]={
-1575.924f, 5170.995f, 18.5541f 
};
Local_93.f_123[8 /*36*/].f_28[0]=312.3839f;
Local_93.f_123[8 /*36*/].f_32[0]=joaat("baller5");
Local_93.f_484[0 /*36*/]={
1514.526f, 1730.14f, 108.9447f 
};
Local_93.f_484[0 /*36*/].f_3=87.1735f;
Local_93.f_484[1 /*36*/]={
2028.331f, 3444.544f, 42.9909f 
};
Local_93.f_484[1 /*36*/].f_3=251.7144f;
Local_93.f_484[2 /*36*/]={
392.7668f, 3588.585f, 32.2922f 
};
Local_93.f_484[2 /*36*/].f_3=351.6842f;
Local_93.f_484[3 /*36*/]={
200.9893f, 2351.4f, 72.5299f 
};
Local_93.f_484[3 /*36*/].f_3=297.6164f;
Local_93.f_484[4 /*36*/]={
-2337.792f, 4041.646f, 29.414f 
};
Local_93.f_484[4 /*36*/].f_3=346.6894f;
Local_93.f_484[5 /*36*/]={
-742.3113f, 5537.667f, 32.4857f 
};
Local_93.f_484[5 /*36*/].f_3=30.2635f;
Local_93.f_484[6 /*36*/]={
1586.277f, 6445.438f, 24.1337f 
};
Local_93.f_484[6 /*36*/].f_3=155.2497f;
Local_93.f_484[7 /*36*/]={
2574.845f, 5086.147f, 43.6593f 
};
Local_93.f_484[7 /*36*/].f_3=11.7033f;
Local_93.f_484[8 /*36*/]={
362.3407f, 4431.755f, 61.9071f 
};
Local_93.f_484[8 /*36*/].f_3=290.5464f;
Local_93.f_484[9 /*36*/]={
-1906.661f, 1773.933f, 170.3475f 
};
Local_93.f_484[9 /*36*/].f_3=113.551f;
break;
}
MISC::SET_BIT(&(Local_93.f_1), 4);
}


var func__71(){
if(Local_93.f_121 !=-1){
return Local_93.f_121;
}
if(Local_93.f_121==-1){
if(ZONE::GET_HASH_OF_MAP_AREA_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0))==joaat("City")){
Local_93.f_121=0;
}else{
Local_93.f_121=1;
}}
return Local_93.f_121;
}

int func_72(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_73(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_7(uParam0, 0, 0);
}}}


void func_74(){
}


void func_75(){
int iVar0;
int iVar1;
int iVar2;
if(Local_93.f_119 !=-1){
iVar0=PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119);
}
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
if(!func_17(iVar2, 0)){
if(iVar0 !=func_65()){
if(iVar2==iVar0 || func_76(iVar2, iVar0, 1)){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837175[bVar1], Global_1837220);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837220, Global_1837175[bVar1]);
}}}}
bVar1++;
}}

int func_76(int iParam0, int iParam1, bool bParam2){
if(iParam1 !=func_65()){
if(!bParam2){
if(func_77(iParam0, iParam1)){
return 0;
}}
if(Global_1894573[iParam0 /*608*/].f_10 !=func_65()){
return iParam1==Global_1894573[iParam0 /*608*/].f_10;
}}
return 0;
}

int func_77(int iParam0, int iParam1){
if(iParam1 !=func_65()){
if(iParam0 !=func_65()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_65()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


void func_78(){
struct<3> Var0;
int iVar1;
float fVar2;
if(func_1004()){
return;
}
if(!func_307()){
return;
}
iVar1=-1;
fVar2=func_152(&iVar1, 0);
if(fVar2 <=1600f){
if(!func_151(PLAYER::PLAYER_ID())){
if(!func_145()){
func_134(0);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
MISC::SET_BIT(&uLocal_95, 18);
}}}
if(Local_93.f_119 > -1){
if(iVar1 > -1){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_93.f_2[iVar1 /*26*/].f_1), 0) 
};
}}
if(!func_28(Var0, 0f, 0f, 0f, 0)){
func_79(166, Var0, &uLocal_114, 1140457472, 1144750080, 0);
}}


void func_79(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5){
float fVar0;
float fVar1;
if((((func_133(PLAYER::PLAYER_ID()) && !func_132(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 8)) && (func_131(PLAYER::PLAYER_ID()) || func_130(PLAYER::PLAYER_ID()))) || func_60(Param1)){
return;
}
Global_1947724={
Param1 
};
fVar0=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1);
func_126(iParam0, fVar0);
if(HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE()==15){
if(func_125(PLAYER::PLAYER_ID()) || func_123(PLAYER::PLAYER_ID())){
if(!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
}}elseif(HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
}}
if(fVar0 < fParam3){
if(!(func_122(PLAYER::PLAYER_ID(), 21) || func_122(PLAYER::PLAYER_ID(), 25))){
func_121(Param1, 1, 0);
}
if(!*uParam2 && func_1123(PLAYER::PLAYER_ID(), 1, 1)){
*uParam2=1;
if(func_120(iParam0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_119(iParam0));
if(func_118(iParam0, -1)){
PLAYER::SET_MAX_WANTED_LEVEL(0);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
}
MISC::SET_BIT(&(Global_1947724.f_3), false);
}}
if(func_117(iParam0)){
fVar1=func_115(iParam0);
if(fVar1 !=1f){
func_988(fVar1);
MISC::SET_BIT(&(Global_1947724.f_3), true);
}}
if(!Global_4585348){
if(func_114(iParam0) && func_125(PLAYER::PLAYER_ID())){
func_112(1);
func_111(2);
}}
func_110(19);
}}else{
if(fVar0 > fParam4){
if(func_109(PLAYER::PLAYER_ID(), 19)){
func_108(19);
}}
if(*uParam2 && func_1123(PLAYER::PLAYER_ID(), 1, 1)){
*uParam2=0;
if(func_120(iParam0)){
if(MISC::IS_BIT_SET(Global_1947724.f_3, 0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
MISC::CLEAR_BIT(&(Global_1947724.f_3), false);
}}
if(func_117(iParam0)){
func_107();
MISC::CLEAR_BIT(&(Global_1947724.f_3), true);
}
if(iParam5 && !func_133(PLAYER::PLAYER_ID())){
if(func_105(PLAYER::PLAYER_ID()) !=152){
func_82();
}}
if(func_81(2)){
func_112(0);
func_80(2);
}}}}


void func_80(bool bParam0){
MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_47), iParam0);
}


bool func_81(int iParam0){
return MISC::IS_BIT_SET(Global_2793046.f_5225.f_47, iParam0);
}


void func_82(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_24), &Global_2639845, 2);
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_26), &Global_2639847, 19);
func_103();
func_85(1, 1, 0);
func_83();
}


void func_83(){
func_84(0, 0);
}


void func_84(int iParam0, int iParam1){
Global_2635559.f_22=iParam0;
Global_2635559.f_23=iParam1;
}


void func_85(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_45), &Global_2639866, 323);
}else{
Global_2635559.f_45={
Global_2639866 
};
Global_2635559.f_45.f_49={
Global_2639866.f_49 
};
Global_2635559.f_45.f_52=Global_2639866.f_52;
Global_2635559.f_45.f_53=Global_2639866.f_53;
}
if(bParam0){
func_102();
}
if(!bParam2){
func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
}
func_87(0);
func_86();
}


void func_86(){
struct<6> Var0;
if(Global_2635559.f_490.f_1==SCRIPT::GET_ID_OF_THIS_THREAD()){
Global_2635559.f_490={
Var0 
};
}}


void func_87(bool bParam0){
if(bParam0){
Global_2635559.f_713=0;
}else{
Global_2635559.f_713=1;
}}


void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
if(bParam0){
if(func_101()){
func_100();
}
Global_2635559.f_714.f_518=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_714.f_504=iParam1;
Global_2635559.f_714.f_505=iParam2;
Global_2635559.f_714.f_506=iParam10;
func_98();
func_92(8, 0, 0, 0, 0);
Global_2635559.f_714.f_507=iParam11;
Global_2635559.f_714.f_512=iParam3;
Global_2635559.f_714.f_513=iParam4;
Global_2635559.f_714.f_510=iParam5;
Global_2635559.f_714.f_511=iParam6;
Global_2635559.f_714.f_514=iParam7;
Global_2635559.f_714.f_515=iParam8;
Global_2635559.f_714.f_516=iParam9;
Global_2635559.f_714.f_517=iParam14;
Global_2635559.f_714.f_508=iParam12;
Global_2635559.f_714.f_509=iParam13;
Global_2635559.f_1753=1;
}else{
func_89();
}}


void func_89(){
if(func_101() && !func_91()){
func_100();
}
if(func_91()){
func_90();
}else{
func_98();
func_92(0, 0, 0, 0, 0);
Global_2635559.f_1753=0;
Global_2635559.f_1752=0;
}}


void func_90(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
Global_2635559.f_490={
Global_2635559.f_496 
};
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518){
Global_2635559.f_1752=0;
}}

int func_91(){
if((Global_2635559.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_1233.f_518)){
return 1;
}
return 0;
}


void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672505.f_1685.f_703.f_16 !=func_65()){
if(MISC::IS_BIT_SET(Global_2657589[Global_2672505.f_1685.f_703.f_16 /*466*/].f_427, 0) && func_93()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643290=0;
}
Global_2635559.f_490=iParam0;
Global_2635559.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_490.f_2=iParam1;
Global_2635559.f_490.f_3=iParam2;
Global_2635559.f_490.f_4=iParam3;
Global_2635559.f_490.f_5=iParam4;
}

int func_93(){
if((((((func_105(PLAYER::PLAYER_ID())==229 || func_105(PLAYER::PLAYER_ID())==191) || func_97()) || func_96()) || func_95()) || Global_2764908.f_227==1) || (Global_2635559.f_1753 && func_94(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_94(int iParam0){
if(func_131(iParam0)){
return 1;
}
if(func_151(iParam0)){
return 1;
}
return 0;
}


bool func_95(){
return Global_2764907;
}


var func__96(){
return Global_1836591;
}

int func_97(){
if(Global_4718592==6){
return 1;
}
return 0;
}


void func_98(){
if(func_101() && !func_91()){
func_100();
}
func_99();
Global_2635559.f_714=0;
}


void func_99(){
int iVar0;
struct<5> Var1;
Var1.f_4=1065353216;
iVar0=0;
while (iVar0 < 100){
Global_2635559.f_714.f_1[iVar0 /*5*/]={
Var1 
};
iVar0++;
}}


void func_100(){
if(func_91()){
if(Global_2635559.f_714.f_518==Global_2635559.f_1233.f_518){
return;
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
Global_2635559.f_496={
Global_2635559.f_490 
};
Global_2635559.f_1752=1;
}}

int func_101(){
if((Global_2635559.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_714.f_518)){
return 1;
}
return 0;
}


void func_102(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_368), &Global_2640189, 121);
}


void func_103(){
func_104();
}


void func_104(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 50){
Global_2635559.f_2263[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635559.f_2262=0;
}

int func_105(bool bParam0){
if(func_106(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_106(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


void func_107(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2793046.f_5221)){
if(!Global_2793046.f_5221==SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2793046.f_5220 < 1f){
return;
}}
Global_2793046.f_5221=-1;
Global_2793046.f_5220=1f;
}


void func_108(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


bool func_109(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_10.f_4, iParam1);
}


void func_110(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


void func_111(bool bParam0){
MISC::SET_BIT(&(Global_2793046.f_5225.f_47), bParam0);
}


void func_112(int iParam0){
if(func_113() && iParam0){
return;
}
if(iParam0==Global_4585348){
return;
}
Global_4585348=iParam0;
Global_4585350=0;
Global_4585351=0;
}

int func_113(){
if((((Global_1057409 !=-1 && Global_1057409 !=33) && Global_1057409 !=35) && Global_1057409 !=37) && Global_1057409 !=21){
return 1;
}
return 0;
}

int func_114(int iParam0){
switch (iParam0){
case 142:
case 159:
case 148:
case 157:
case 166:
case 179:
case 189:
case 193:
case 198:
case 205:
return 1;
default:
}
return 0;
}


float func_115(int iParam0){
switch (iParam0){
case 142:
case 157:
case 159:
case 151:
case 148:
case 164:
case 152:
case 153:
case 154:
case 155:
case 160:
case 162:
case 166:
case 173:
case 169:
case 167:
case 168:
case 170:
case 178:
case 179:
case 189:
case 180:
case 182:
case 183:
case 190:
case 191:
case 192:
case 193:
case 194:
case 199:
case 201:
case 185:
case 197:
case 186:
case 198:
case 195:
case 205:
case 207:
case 208:
case 209:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
return 0f;
default:
}
if(func_116(iParam0)==0){
return 0f;
}
return 1f;
}

int func_116(int iParam0){
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
default:
}
return -1;
}

int func_117(int iParam0){
switch (iParam0){
case 152:
case 164:
case 151:
case 170:
case 169:
case 201:
case 191:
case 198:
case 180:
case 200:
case 208:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 227:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}

int func_118(int iParam0, int iParam1){
switch (iParam0){
case 148:
case 164:
case 152:
case 153:
case 160:
return 1;
case 168:
if((iParam1 !=2 && iParam1 !=10) && iParam1 !=7){
return 1;
}
break;
case 170:
case 166:
case 173:
return 1;
case 179:
case 183:
case 181:
case 189:
case 191:
case 192:
case 193:
case 194:
case 186:
case 199:
case 185:
case 201:
case 198:
case 195:
case 180:
case 207:
case 208:
case 209:
case 210:
case 214:
case 217:
case 218:
case 215:
case 216:
case 219:
case 220:
case 221:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
case 227:
return 1;
case 190:
if(((iParam1 !=6 && iParam1 !=9) && iParam1 !=7) && iParam1 !=1){
return 1;
}
break;
}
return 0;
}


float func_119(int iParam0){
switch (iParam0){
case 131:
case 138:
case 140:
case 139:
case 141:
case 146:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 0f;
case 144:
return 0f;
case 185:
return 0f;
default:
}
return 1f;
}

int func_120(int iParam0){
switch (iParam0){
case 152:
case 142:
case 164:
case 151:
case 160:
case 166:
case 173:
case 183:
case 185:
case 197:
case 186:
case 201:
case 191:
case 198:
case 207:
case 208:
case 209:
case 200:
case 195:
case 180:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 227:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}


void func_121(struct<3> Param0, int iParam1, int iParam2){
Global_2635559.f_45.f_49={
Param0 
};
Global_2635559.f_45.f_52=iParam1;
Global_2635559.f_45.f_53=iParam2;
}


var func__122(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_123(int iParam0){
if(func_124(iParam0)){
if(func_125(iParam0)){
return 1;
}}
return 0;
}

int func_124(int iParam0){
if(iParam0 !=func_65()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_65()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_125(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return func_109(bParam0, 9);
}
return 0;
}


void func_126(int iParam0, float fParam1){
int iVar0;
iVar0=func_129(iParam0);
if(iVar0==-1){
return;
}
if(fParam1 < IntToFloat(iVar0)){
func_127();
}}


void func_127(){
if(!func_128(PLAYER::PLAYER_ID())){
func_110(25);
}}


bool func_128(int iParam0){
return func_109(iParam0, 25);
}

int func_129(int iParam0){
switch (iParam0){
case 152:
return Global_262145.f_12997;
case 142:
return Global_262145.f_12985;
case 157:
return Global_262145.f_12952;
case 159:
return Global_262145.f_12935;
case 162:
return Global_262145.f_13046;
case 173:
return 100;
case 170:
return 100;
default:
}
return -1;
}

int func_130(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_131(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}


bool func_132(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 2);
}

int func_133(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


void func_134(int iParam0){
if(!func_151(PLAYER::PLAYER_ID())){
if(iParam0 || func_142(PLAYER::PLAYER_ID()) !=0){
func_110(20);
func_135(func_137());
if(func_133(PLAYER::PLAYER_ID())){
if(!MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 8)){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 8);
}}}}}


void func_135(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_136() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_136(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_137(){
int iVar0;
iVar0=func_105(PLAYER::PLAYER_ID());
if(func_141(iVar0)==0 || func_141(iVar0)==3){
return -1;
}
if(func_140(iVar0)){
return 65;
}
if(func_139(iVar0)){
return 66;
}
if(func_138(iVar0)){
return 63;
}
return 64;
}

int func_138(int iParam0){
switch (iParam0){
case 241:
case 248:
case 242:
case 244:
case 240:
case 239:
return 1;
default:
}
return 0;
}

int func_139(int iParam0){
switch (iParam0){
case 180:
case 183:
case 185:
case 186:
case 182:
case 195:
case 197:
case 198:
case 207:
case 208:
case 209:
return 1;
default:
}
return 0;
}

int func_140(int iParam0){
switch (iParam0){
case 179:
case 201:
case 200:
case 148:
return 1;
default:
}
return 0;
}

int func_141(int iParam0){
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
return 0;
case 276:
case 267:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}

int func_142(int iParam0){
int iVar0;
bool bVar1;
bool bVar2;
var uVar3;
var uVar4;
iVar0=2;
bVar1=((func_133(iParam0) && !func_132(iParam0)) && !MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 8));
bVar2=func_151(iParam0);
uVar3=func_144();
uVar4=func_145();
if((bVar1 && (func_131(iParam0) || func_130(iParam0))) || uVar4){
iVar0=0;
}elseif(uVar3 || ((!bVar2 && !func_125(iParam0)) && !func_143(iParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2793046.f_5225.f_220 !=iVar0){
Global_2793046.f_5225.f_220=iVar0;
}
return iVar0;
}


bool func_143(int iParam0){
return func_109(iParam0, 19);
}


bool func_144(){
return Global_1574582;
}

int func_145(){
if((func_109(PLAYER::PLAYER_ID(), 21) || func_109(PLAYER::PLAYER_ID(), 22)) || func_148()){
return 1;
}
if(func_146()){
func_110(22);
return 1;
}
return 0;
}

int func_146(){
if(func_106(PLAYER::PLAYER_ID(), 0)){
if(((func_144() && !func_147()) || func_122(PLAYER::PLAYER_ID(), 21)) || func_122(PLAYER::PLAYER_ID(), 25)){
return 1;
}else{
func_108(27);
}}
return 0;
}


bool func_147(){
return Global_1574582.f_1;
}


bool func_148(){
return func_149(424, -1);
}

int func_149(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_150(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_150(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_19();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


bool func_151(int iParam0){
return func_109(iParam0, 20);
}


float func_152(int iParam0, bool bParam1){
float fVar0;
float fVar1;
int iVar2;
struct<3> Var3;
struct<3> Var4;
fVar0=1E+10f;
fVar1=0f;
Var3={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
iVar2=0;
while (iVar2 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[iVar2 /*26*/].f_1)){
if(Local_93.f_2[iVar2 /*26*/]==2 || !bParam1){
if(!func_14(Local_93.f_2[iVar2 /*26*/].f_1)){
Var4={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_93.f_2[iVar2 /*26*/].f_1), 1) 
};
fVar1=vdist2(Var3, Var4);
if(fVar1 < fVar0){
fVar0=fVar1;
*iParam0=iVar2;
}}}}
iVar2++;
}
return fVar0;
}


void func_153(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7){
int iVar0;
int iVar1[32];
bool bVar2;
bool bVar3;
bool bVar4;
char* sVar5;
int iVar6;
struct<4> Var7;
int iVar8;
int iVar9;
bool bVar10;
float fVar11;
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
struct<2> Var23;
if(func_306(iParam2)){
return;
}
fVar11=-1f;
iVar12=-1;
iVar13=-1;
iVar15=0;
iVar16=0;
uParam3->f_36=0;
if(func_304() || iParam2==28){
if(func_244(uParam1, iParam2, uParam3, Global_1836368, 0, func_302(), iParam7)){
func_243(1);
if((!func_241() && !func_239()) || MISC::IS_BIT_SET(Global_2793046.f_4687, 1)){
if(func_238()){
func_233();
}else{
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
if(uParam3->f_27==0){
func_232(1);
Global_1836368=0;
iVar20=-1;
if(Global_1836592 !=1){
func_231(uParam1, 0, 0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
}
if(iParam2==28){
iVar18=0;
while (iVar18 < 32){
iVar1[iVar18]=-1;
iVar18++;
}
iVar18=0;
while (iVar18 < 32){
if(func_1123(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
if(!func_17(bVar4, 0)){
if(func_227(bVar4) || func_225(bVar4, bVar3)){
bVar10=bVar4;
if(func_124(bVar4)){
iVar1[bVar10]=iVar21;
iVar21++;
iVar0++;
func_224(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
}
}
}}
iVar18++;
}
}
if(!func_221(PLAYER::PLAYER_ID(), 0) && func_105(PLAYER::PLAYER_ID()) !=188){
bVar2=iVar0 > 0;
}
iVar18=0;
while (iVar18 < 32){
if(func_220()){
if(func_1123(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
}else{
bVar4=func_65();
}}else{
bVar4=(uParam0[iVar18 /*42*/])->f_1;
}
if((func_219(bVar4) && func_215(bVar4, iParam2, bVar3)) && func_1123(bVar4, 0, 1)){
bVar10=bVar4;
iVar8=Global_1853910[bVar10 /*862*/].f_205.f_6;
Var7={
func_209(bVar4) 
};
if(bVar4==PLAYER::PLAYER_ID()){
uParam3->f_35=iVar19;
}
StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
*(uParam4[iVar18 /*13*/])={
func_67(bVar4) 
};
iVar6=func_203(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836368++;
if((uParam0[iVar18 /*42*/])->f_22 !=-1f){
fVar11=(uParam0[iVar18 /*42*/])->f_22;
}
if((uParam0[iVar18 /*42*/])->f_31 !=-1){
iVar12=(uParam0[iVar18 /*42*/])->f_31;
}
if((uParam0[iVar18 /*42*/])->f_41 !=-1){
iVar13=(uParam0[iVar18 /*42*/])->f_41;
}
iVar9=(uParam0[iVar18 /*42*/])->f_9;
if(((uParam0[iVar18 /*42*/])->f_9 !=-1 || (uParam0[iVar18 /*42*/])->f_22 !=-1f) || (uParam0[iVar18 /*42*/])->f_31 !=-1){
if(!func_220()){
iVar16=1;
}}
if(iParam5 !=-1){
func_198(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
StringCopy(&(uParam3->f_104), func_197(iParam5, 1, 0, 0), 16);
}
if(bParam6){
iVar14=(uParam0[iVar18 /*42*/])->f_2 + 1;
if(iVar20 !=iVar14){
iVar20=iVar14;
}
else{
iVar14=-2;
}}
iVar17=func_192(bVar4, 0);
if(bVar2){
if(func_191(bVar4, 1) && iVar1[bVar10] !=-1){
iVar19=iVar1[bVar10];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
if((uParam0[iVar18 /*42*/])->f_39 !=-1){
StringCopy(&Var23, "UW_TM", 16);
StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
}
if(func_190(iParam5)){
func_189(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
}else{
func_189(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
}
MISC::SET_BIT(&iVar15, bVar4);
iVar19++;
}
iVar18++;
}
iVar18=0;
while (iVar18 < 32){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
if(func_1123(bVar4, 0, 1) && !MISC::IS_BIT_SET(iVar15, bVar4)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
}else{
bVar4=func_65();
}
if(func_219(bVar4)){
if(func_1123(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar10=bVar4;
iVar8=Global_1853910[bVar10 /*862*/].f_205.f_6;
Var7={
func_209(bVar4) 
};
*(uParam4[iVar18 /*13*/])={
func_67(bVar4) 
};
iVar6=func_203(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836368++;
iVar17=func_192(bVar4, 1);
if(bVar2){
if(func_191(bVar4, 1)){
iVar19=iVar1[iVar18];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}
}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
func_167(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
iVar19++;
}}
iVar18++;
}
if(MISC::IS_BIT_SET(uParam3->f_33, 11)){
func_164(uParam3, uParam1, iParam2);
}
func_163(&(uParam3->f_21));
func_162();
uParam3->f_27=2;
}
if(uParam3->f_27==2){
if(!MISC::IS_BIT_SET(uParam3->f_33, 7)){
func_161(uParam3, uParam1);
func_160(uParam1, 0, 1);
MISC::SET_BIT(&(uParam3->f_33), 7);
}
func_161(uParam3, uParam1);
if(!MISC::IS_BIT_SET(uParam3->f_33, 11)){
MISC::SET_BIT(&(uParam3->f_33), 11);
}
if(func_156(uParam3)){
Global_1836592=1;
}
func_154(uParam3);
if(Global_1836592==1){
uParam3->f_27=0;
}
if(Global_1836592==2){
uParam3->f_27=0;
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}}}else{
uParam3->f_27=0;
func_162();
func_232(0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
if(MISC::IS_BIT_SET(uParam3->f_33, 10)){
MISC::CLEAR_BIT(&(uParam3->f_33), 10);
}}}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_154(var uParam0){
if(!func_8(&(uParam0->f_21))){
func_7(&(uParam0->f_21), 0, 0);
}elseif(func_6(&(uParam0->f_21), 250, 0)){
func_163(&(uParam0->f_21));
func_155(0);
}}


void func_155(bool bParam0){
if(bParam0){
if(Global_1836592 !=2){
Global_1836592=2;
}}else{
switch (Global_1836592){
case 0:
Global_1836592=1;
break;
case 1:
break;
case 2:
break;
}}}

int func_156(var uParam0){
int iVar0;
int iVar1;
struct<13> Var2;
bool bVar3;
int iVar4;
iVar4=0;
iVar0=uParam0->f_37;
bVar3=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
if(bVar3 !=func_65() && func_1123(bVar3, 0, 1)){
Var2={
func_67(bVar3) 
};
iVar1=func_159(uParam0, uParam0->f_37);
if(func_158(Var2)){
switch (iVar1){
case 0:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_157(uParam0, iVar0, 2);
}}elseif(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_157(uParam0, iVar0, 1);
}
break;
case 2:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_157(uParam0, iVar0, 0);
}}else{
iVar4=1;
func_157(uParam0, iVar0, 0);
}
break;
case 1:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_157(uParam0, iVar0, 0);
}}elseif(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_157(uParam0, iVar0, 0);
}
break;
}}}
uParam0->f_37++;
if(uParam0->f_37 >=32){
uParam0->f_37=0;
}
return iVar4;
}


void func_157(var uParam0, int iParam1, int iParam2){
uParam0->f_38[iParam1 /*2*/]=iParam2;
}


bool func_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


var func__159(var uParam0, int iParam1){
return uParam0->f_38[iParam1 /*2*/];
}


void func_160(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(iParam2==1){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW")){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_161(var uParam0, var uParam1){
if(!MISC::IS_BIT_SET(uParam0->f_33, 10)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_33), 10);
}}


void func_162(){
if(Global_1836592 !=0){
Global_1836592=0;
}}


void func_163(var uParam0){
uParam0->f_1=0;
}


void func_164(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(bVar2 !=func_65()){
if(func_1123(bVar2, 0, 1)){
if(uParam0->f_38[iVar0 /*2*/].f_1 !=-1){
iVar1=func_166(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
func_165(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853910[iVar0 /*862*/].f_205.f_6);
}}}
iVar0++;
}}


void func_165(var uParam0, int iParam1, int iParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(iParam2==65){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}

int func_166(int iParam0, bool bParam1, int iParam2){
int iVar0;
iVar0=65;
switch (iParam2){
case 21:
iVar0=0;
break;
}
if(bParam1){
iVar0=116;
}
switch (iParam0){
case 2:
return 47;
case 1:
return 49;
default:
}
return iVar0;
}


void func_167(bool bParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12){
int iVar0;
char* sVar1;
if(iParam4 >=func_188() && iParam4 < func_187()){
iParam4=(iParam4 % 16);
iVar0=iParam4 + 1;
if(Global_1836370){
iVar0 +=16;
}
sVar1="SET_DATA_SLOT";
if(Global_1836592==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108==6){
func_186("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}
func_186(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam3->f_108==6){
func_186("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
func_186("");
if(uParam3->f_108==6){
func_186("");
}else{
func_186(&sParam5);
}
func_172(uParam3, bParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
if(func_171(uParam3)){
func_170("DPAD_FRIEND");
}elseif(func_169(uParam3)){
func_170("DPAD_FRIEND");
}elseif(func_168(uParam3)){
func_170("DPAD_CREW");
}else{
func_170("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


bool func_168(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 6);
}


bool func_169(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 5);
}


void func_170(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_171(var uParam0){
if(func_169(uParam0) && func_168(uParam0)){
return 1;
}
return 0;
}


void func_172(var uParam0, int iParam1){
if(func_185(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
}elseif(func_177(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
}elseif(((MISC::IS_BIT_SET(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2657589[iParam1 /*466*/].f_436, 0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
}else{
if(func_173()){
uParam0->f_36=0;
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
}}

int func_173(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(func_175() || func_174()){
return 1;
}}
return 0;
}


var func__174(){
return Global_2683864.f_17;
}

int func_175(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_174();
}
return func_176(Global_4718592.f_113724);
}

int func_176(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_5024[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_177(int iParam0){
if((func_1123(iParam0, 0, 1) && func_181()) && func_178(iParam0, 1)){
return 1;
}
return 0;
}


bool func_178(int iParam0, bool bParam1){
return func_179(iParam0, bParam1, 1);
}

int func_179(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_65()){
return 0;
}
if(!bParam1){
if(func_180(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_65() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_180(int iParam0, int iParam1){
if(iParam0 !=func_65()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_65()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_181(){
if(func_133(PLAYER::PLAYER_ID()) || func_184()){
if(!func_182(PLAYER::PLAYER_ID())){
return 0;
}}
return 1;
}

int func_182(int iParam0){
if(func_183(iParam0)==236 || func_183(iParam0)==150){
return func_131(iParam0);
}
return 0;
}

int func_183(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}

int func_184(){
switch (func_105(PLAYER::PLAYER_ID())){
case 193:
case 194:
case 199:
case 205:
case 210:
case 188:
return 1;
default:
}
return 0;
}

int func_185(int iParam0){
if(func_173()){
if(func_1123(iParam0, 0, 1)){
return func_124(iParam0);
}}
if((func_1123(iParam0, 0, 1) && func_181()) && func_180(iParam0, 0)){
return 1;
}
return 0;
}


void func_186(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_187(){
int iVar0;
if(Global_1836370){
iVar0=32;
}else{
iVar0=16;
}
return iVar0;
}

int func_188(){
int iVar0;
iVar0=0;
if(Global_1836370){
iVar0=16;
}
return iVar0;
}


void func_189(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19){
int iVar0;
char* sVar1;
if(iParam3 >=func_188() && iParam3 < func_187()){
iParam3=(iParam3 % 16);
iVar0=iParam3 + 1;
if(Global_1836370){
iVar0 +=16;
}
if(bParam19){
iVar0=iParam18;
if(iVar0==-2){
iParam10=-1;
}}
sVar1="SET_DATA_SLOT";
if(Global_1836592==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
if(MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108==6){
func_186("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
}
if(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
func_170(sParam16);
}else{
func_186(&(uParam2->f_1));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam2->f_108==6){
func_186("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
if(iParam12==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
if(func_220()){
func_186("");
}elseif(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
if(fParam13 !=-1f){
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
}
if(iParam10 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==9){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==10){
if(iParam10==0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(iParam15 > -1){
if(iParam15==0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
func_170(&(uParam2->f_104));
}else{
func_186("");
}}elseif(iParam14 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(fParam13 !=-1f){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam10 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}else{
func_186("");
}
if(uParam2->f_108==6){
func_186("");
}else{
func_186(&sParam4);
}
func_172(uParam2, iParam0);
if(iParam12==1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_186("");
func_186("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
}
if(func_171(uParam2)){
func_170("DPAD_FRIEND");
}elseif(func_169(uParam2)){
func_170("DPAD_FRIEND");
}elseif(func_168(uParam2)){
func_170("DPAD_CREW");
}else{
func_170("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}}

int func_190(int iParam0){
return 0;
switch (iParam0){
case 11:
case 12:
return 1;
default:
}
return 0;
}


bool func_191(bool bParam0, bool bParam1){
if(!bParam1){
if(func_124(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_65();
}

int func_192(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=116;
if((!bParam1 && func_133(bParam0)) && !func_151(bParam0)){
iVar0=func_196();
}
iVar1=func_195(bParam0);
if(!iVar1==-1){
return func_193(iVar1);
}
return iVar0;
}

int func_193(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_194(iParam0);
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


var func__194(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_195(int iParam0){
if(!iParam0==func_65()){
if(func_191(iParam0, 1)){
return Global_2648605.f_818.f_11[func_66(iParam0)];
}}
return -1;
}

int func_196(){
return 21;
}


char* func_197(int iParam0, bool bParam1, bool bParam2, int iParam3){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_M_LB";
}elseif(bParam2){
return "AMCH_M";
}else{
return "AMCH_METRES";
}}elseif(bParam1){
return "AMCH_FT_LB";
}elseif(bParam2){
return "AMCH_FT";
}else{
return "AMCH_FEET";
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_KMH_LB";
}elseif(bParam2){
return "AMCH_KMHN";
}else{
return "AMCH_KMH";
}}elseif(bParam1){
return "AMCH_MPH_LB";
}elseif(bParam2){
return "AMCH_MPHN";
}else{
return "AMCH_MPH";
}
break;
case 7:
if(bParam1 || bParam2){
return "";
}else{
return "AMCH_VEH";
}
break;
case 15:
case 16:
case 17:
case 18:
if(bParam1 || bParam2){
return "";
}elseif(iParam3 !=1){
return "AMCH_KILLS";
}else{
return "AMCH_KILL";
}
break;
}
if(bParam1 || bParam2){
return "";
}
return "AMCH_EMPTY";
}

int func_198(var uParam0, float fParam1, int iParam2, int iParam3){
if(func_202(iParam3)){
*fParam1=(func_199(iParam3, iParam2) / 10f);
return 1;
}
if(func_190(iParam3)){
*fParam1=(func_199(iParam3, iParam2) / 1000f);
return 1;
}
*uParam0=iParam2;
return 0;
}


float func_199(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_201(to_float(iParam1));
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_200(to_float(iParam1));
}
break;
}
return to_float(iParam1);
}


float func_200(float fParam0){
return (fParam0 / 1.609344f);
}


float func_201(float fParam0){
return (fParam0 / 0.3048f);
}

int func_202(int iParam0){
switch (iParam0){
case 0:
case 2:
case 3:
case 5:
case 4:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
return 1;
default:
}
return 0;
}

int func_203(bool bParam0){
int iVar0;
iVar0=func_206(bParam0);
if(iVar0==-1){
func_204(bParam0, 1);
return 0;
}
Global_1666668[iVar0 /*5*/].f_4=1;
return Global_1666668[iVar0 /*5*/].f_2;
}


void func_204(int iParam0, bool bParam1){
if(!func_1123(iParam0, 0, 1)){
return;
}
if(func_206(iParam0) !=-1){
return;
}
if(Global_1666831){
if(iParam0==Global_1666831.f_1){
return;
}}
if(func_205(iParam0)){
return;
}
if(Global_1666869 >=32){
return;
}
Global_1666836[Global_1666869]=iParam0;
Global_1666869++;
if(bParam1){}}

int func_205(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666869){
if(Global_1666836[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_206(int iParam0){
int iVar0;
if(!func_1123(iParam0, 0, 1)){
return -1;
}
if(Global_1666829==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666829){
if(Global_1666668[iVar0 /*5*/].f_1==iParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[iVar0 /*5*/].f_2)){
return iVar0;
}
func_207(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_207(int iParam0){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
if(iParam0 >=Global_1666829){
return;
}
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
if(Global_1666668[iParam0 /*5*/].f_2 !=0){
StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
}
iVar2=iParam0;
iVar3=iVar2 + 1;
while (iVar3 < Global_1666829){
Global_1666668[iVar2 /*5*/]={
Global_1666668[iVar3 /*5*/] 
};
iVar2++;
iVar3++;
}
func_208(&(Global_1666668[iVar2 /*5*/]));
Global_1666829=(Global_1666829 - 1);
}


void func_208(var uParam0){
*uParam0=0;
uParam0->f_1=func_65();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


struct<4> func_209(bool bParam0){
struct<4> Var0;
if(func_1123(bParam0, 0, 1)){
Global_2764203={
func_67(bParam0) 
};
if(func_214()){
if(func_158(Global_2764203)){
if(!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764203)){
return Var0;
}}}elseif(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return Var0;
}
if(func_213(&Global_2764203)){
Global_2764133={
func_211(bParam0) 
};
func_210(&Global_2764133, &Var0);
}}
return Var0;
}


void func_210(var uParam0, var uParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}
struct<35> func_211(int iParam0){
struct<13> Var0;
struct<35> Var1;
if(func_212(iParam0)){
return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_67(iParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_212(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_213(var uParam0){
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return 1;
}}
return 0;
}


bool func_214(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_215(int iParam0, int iParam1, bool bParam2){
if(iParam1==27){
if((func_132(iParam0) || func_218(iParam0)) || func_217(iParam0)){
return 0;
}}
if(!func_216(iParam0)){
return 0;
}
if(!func_227(iParam0) && !func_225(iParam0, bParam2)){
return 0;
}
return 1;
}


bool func_216(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 22);
}

int func_217(int iParam0){
if(func_132(iParam0)){
return 1;
}
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 8);
}

int func_218(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return (MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 10) || MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 9));
}
return 0;
}

int func_219(bool bParam0){
int iVar0;
if(bParam0==func_65()){
return 0;
}
if(func_17(bParam0, 0)){
return 0;
}
iVar0=bParam0;
if(iVar0 !=-1){
if(MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_139, 2)){
return 0;
}}
return 1;
}

int func_220(){
switch (func_105(PLAYER::PLAYER_ID())){
case 179:
case 180:
case 182:
case 183:
case 184:
case 185:
case 186:
case 189:
case 190:
case 191:
case 192:
case 195:
case 197:
case 198:
case 200:
case 201:
case 202:
case 203:
case 204:
case 206:
case 207:
case 208:
case 209:
case 211:
return 1;
default:
}
switch (func_183(PLAYER::PLAYER_ID())){
case 131:
case 140:
case 138:
case 146:
return 1;
break;
}
if(func_151(PLAYER::PLAYER_ID())){
switch (func_105(PLAYER::PLAYER_ID())){
case 148:
case 151:
case 152:
case 153:
case 157:
case 159:
case 162:
case 164:
case 142:
return 1;
break;
}}
if(func_182(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_221(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 && func_222(Global_1894573[iParam0 /*608*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1){
if(func_222(Global_1894573[iParam0 /*608*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_222(int iParam0){
switch (iParam0){
case 155:
case 160:
case 153:
case 162:
case 154:
case 163:
case 171:
case 172:
case 240:
case 239:
return 1;
default:
}
return func_223(iParam0, 0);
return 0;
}

int func_223(int iParam0, int iParam1){
switch (iParam0){
case 199:
case 205:
case 210:
case 211:
return 1;
default:
}
if(iParam1==0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
}
default:
}
return 0;
}


void func_224(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(func_1123(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(!func_17(iVar1, 0)){
if(func_227(iVar1) || func_225(iVar1, bParam4)){
if(func_76(iVar1, iParam1, 0)){
(*iParam0)[iVar0]=*iParam2;
*iParam2++;
*iParam3++;
}}}}
iVar0++;
}}


bool func_225(int iParam0, bool bParam1){
if(bParam1){
return 0;
}
return (Global_2657589[iParam0 /*466*/].f_246 !=-1 || func_226(iParam0));
}


bool func_226(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192 !=0;
}

int func_227(bool bParam0){
if(!func_1123(iParam0, 0, 1)){
return 0;
}
if(!func_1123(PLAYER::PLAYER_ID(), 0, 1)){
return 0;
}
if(!func_228(iParam0)){
return 0;
}
if((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iParam0, PLAYER::PLAYER_ID()) || func_105(bParam0)==233) || func_105(bParam0)==271){
return 1;
}
return 0;
}

int func_228(int iParam0){
bool bVar0;
bool bVar1;
bVar0=func_229(PLAYER::PLAYER_ID());
bVar1=func_229(iParam0);
if((bVar0 && !bVar1) || (!bVar0 && bVar1)){
return 0;
}
return 1;
}


var func__229(int iParam0){
return func_230(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}


var func__230(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_231(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_232(bool bParam0){
if(bParam0){
if(Global_1653910.f_2==0){
Global_1653910.f_2=1;
}}elseif(Global_1653910.f_2==1){
Global_1653910.f_2=0;
}}


void func_233(){
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 1)){
if(func_237()){
func_234();
}}}


void func_234(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_235(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_235(var uParam0, int iParam1){
func_236(uParam0, iParam1);
}


void func_236(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_237(){
return Global_2672505.f_2514[0 /*80*/].f_1 !=0;
}

int func_238(){
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 0) && func_237()){
return 1;
}
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 1) && func_237()){
return 1;
}
return 0;
}

int func_239(){
if(func_237()){
if(func_240(Global_2672505.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}

int func_240(int iParam0){
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

int func_241(){
if(func_237()){
if(func_242(Global_2672505.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}

int func_242(int iParam0){
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


void func_243(int iParam0){
if(Global_1653910.f_1 !=Global_1653910){
Global_1653910.f_1=Global_1653910;
}
if(Global_1653910 !=iParam0){
Global_1653910=iParam0;
}}

int func_244(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6){
struct<4> Var0;
var uVar1;
bool bVar2;
bool bVar3;
float fVar4;
int iVar5;
char* sVar6;
StringCopy(&Var0, "", 16);
bVar2=iParam1==20;
bVar3=func_301(iParam1);
fVar4=func_300();
iVar5=-1;
if(iParam1==27 || iParam1==28){
if(func_299()){
if(func_298() > 0 && Global_1836370){
HUD::THEFEED_HIDE_THIS_FRAME();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}}}
if(!bParam5){
if(!func_279()){
func_278(uParam0, uParam2, 1);
return 0;
}}
if(MISC::IS_BIT_SET(Global_2793046.f_4690, 26)){
func_278(uParam0, uParam2, 1);
return 0;
}
if(!func_8(&(uParam2->f_19))){
if(func_298()==1){
func_277(bVar3, uParam0, 0);
func_7(&(uParam2->f_19), 0, 0);
func_278(uParam0, uParam2, 0);
MISC::SET_BIT(&(Global_2793046.f_4692), 5);
}}
if(func_8(&(uParam2->f_19)) || bParam5){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
if(func_6(&(uParam2->f_19), 10000, 0) || (func_298()==0 && !bParam5)){
func_278(uParam0, uParam2, 1);
return 0;
}else{
if(bVar2==0){
func_276();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
if(!MISC::IS_BIT_SET(uParam2->f_33, 0)){
if(bVar2==0){
func_276();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(func_277(bVar3, uParam0, 0)){
func_231(uParam0, 0, 0);
uVar1=func_274(iParam1, &(Global_4718592.f_113731), bParam4);
Var0={
func_272(iParam1) 
};
if(bParam4){
func_269(uParam0, uVar1, "", 0, -1, -1, 1);
}elseif(iParam1==27){
func_262(uParam0, func_266(uParam2), func_263(uParam2), -1);
}elseif(iParam1==28){
sVar6=func_255(uParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam6)){
sVar6=sParam6;
}
func_253(uParam0, sVar6, func_254(), -1);
}elseif(func_173()){
uParam2->f_34=Global_1836369;
func_269(uParam0, uVar1, &Var0, 1, -1, Global_1836369, 1);
}elseif(bVar2){
iVar5=func_246(iParam1);
uParam2->f_34=Global_1836369;
func_269(uParam0, uVar1, "", 0, iVar5, func_245(), 1);
}else{
iVar5=func_246(iParam1);
func_269(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
}
MISC::SET_BIT(&(uParam2->f_33), false);
}}
if(MISC::IS_BIT_SET(uParam2->f_33, 0)){
Global_1836368=uParam3;
Global_1836367=1;
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(bVar2){
if(uParam2->f_34 !=Global_1836369){
MISC::CLEAR_BIT(&(uParam2->f_33), false);
}}
return 1;
}}}
return 0;
}

int func_245(){
return Global_1836369;
}

int func_246(int iParam0){
int iVar0;
iVar0=-1;
if(func_252()){
iVar0=2;
}
switch (iParam0){
case 40:
iVar0=22;
break;
case 0:
case 31:
case 30:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 41:
case 42:
iVar0=3;
break;
case 2:
iVar0=3;
break;
case 1:
iVar0=6;
break;
case 3:
iVar0=5;
break;
case 26:
iVar0=21;
break;
case 4:
case 5:
case 6:
case 8:
case 9:
case 10:
case 11:
iVar0=4;
break;
case 7:
iVar0=10;
break;
case 12:
case 13:
case 14:
case 17:
iVar0=2;
break;
case 15:
iVar0=17;
break;
case 16:
iVar0=18;
break;
case 18:
if(func_251(PLAYER::PLAYER_ID())){
iVar0=20;
}
if(func_250(PLAYER::PLAYER_ID())){
iVar0=19;
}
break;
}
if(func_249(PLAYER::PLAYER_ID())){
iVar0=2;
}
if(func_247()){
iVar0=20;
}
return iVar0;
}


bool func_247(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_61();
}
return func_248(Global_4718592.f_113724);
}

int func_248(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_249(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==4;
}


bool func_250(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


bool func_251(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_252(){
return Global_4718592.f_1==0;
}


void func_253(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
func_170(sParam1);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_170("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_254(){
switch (func_105(PLAYER::PLAYER_ID())){
case 163:
return "BD_SORT_1";
break;
case 160:
return "BD_SORT_4";
break;
case 154:
return "BD_SORT_3";
break;
case 155:
return "BD_SORT_3";
break;
}
return "";
}


char* func_255(var uParam0){
switch (uParam0->f_112){
case 0:
return "GR_DPD_E";
break;
case 1:
return "GR_DPD_F";
break;
case 2:
return "GR_DPD_S";
break;
}
switch (uParam0->f_110){
case 0:
return "GR_DPD_A";
break;
case 1:
return "GR_DPD_B";
break;
case 2:
return "GR_DPD_C";
break;
case 3:
return "GR_DPD_D";
break;
}
switch (func_105(PLAYER::PLAYER_ID())){
case 233:
return "H2_DPAD_SET";
break;
case 180:
return "GB_BIGUNLOAD_T";
break;
case 182:
return "DEAL_DEALN";
break;
case 194:
return "PI_BIK_13_0";
break;
case 189:
return "PI_BIK_4_1";
break;
case 193:
return "PI_BIK_13_1";
break;
case 205:
return "PI_BIK_13_3";
break;
case 186:
return "CELL_BIKER_CK";
break;
case 207:
return "DV_SH_TITLE";
break;
case 208:
return "BA_SH_TITLE";
break;
case 209:
return "SHU_SH_TITLE";
break;
case 210:
return "PI_BIK_13_4";
break;
case 183:
return "CELL_BIKER_RESC";
break;
case 199:
return "CELL_BIKER_SEAR";
break;
case 201:
return "CELL_BIKER_STAN";
break;
case 142:
return "PIM_MAGM210";
break;
case 163:
return "PIM_MAGM608";
break;
case 160:
return "PIM_MAGM604";
break;
case 154:
return "PIM_MAGM602";
break;
case 155:
return "PIM_MAGM603";
break;
case 148:
if(func_258()){
return "LBD_BKVBK";
}
return "PIM_MAGM201";
break;
case 151:
if(func_257(1)){
return "GB_DPAD_BMFD";
}
return "PIM_MAGM202";
break;
case 152:
return "PIM_MAGM204";
break;
case 153:
if(func_257(1)){
return "PI_BIK_3_2";
}
return "PIM_MAGM601";
break;
case 157:
return "PIM_MAGM207";
break;
case 159:
return "PIM_MAGM206";
break;
case 162:
return "PIM_MAGM607";
break;
case 164:
return "PIM_MAGM212";
break;
case 166:
return "GB_DPAD_HEAD";
case 167:
return "GB_DPAD_BUY";
case 168:
return "GB_DPAD_SELL";
case 169:
return "GB_DPAD_DEF";
case 170:
return "GB_DPAD_AIR";
case 171:
return "GB_DPAD_CASH";
case 172:
return "GB_DPAD_SAL";
case 173:
return "GB_DPAD_FRA";
case 178:
return "VEX_TITLEa";
case 188:
return "VEX_TITLEb";
case 218:
return "FRT_MODE";
case 217:
return "FRT_TRNS";
case 214:
return "MODE_PLW";
case 215:
return "MODE_FUL";
case 216:
return "MODE_AA";
case 219:
return "MODE_VEL";
case 220:
return "MODE_RMP";
case 221:
return "MODE_STK";
case 225:
return "GR_TITLEL";
case 226:
return "GRS_TITLEL";
case 227:
return "GRD_TITLEL";
case 195:
return "GB_STEAL_T";
case 198:
return "SC_MENU_TITLE";
case 190:
return "GB_DPAD_BSEL";
case 191:
return "GB_DPAD_BDEF";
case 185:
return "GB_DPAD_GFH";
case 197:
return "GB_DPAD_JB";
case 179:
return "CELL_JOUST";
case 200:
return "CAG_BLIP";
case 192:
if(func_256(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182)){
return "GB_DPAD_BSET";
}
return "GB_DPAD_BBUY";
break;
}
return "";
}

int func_256(int iParam0){
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
return 1;
default:
}
return 0;
}


bool func_257(bool bParam0){
return func_178(PLAYER::PLAYER_ID(), bParam0);
}


bool func_258(){
return (func_261() && func_259(func_260()));
}


bool func_259(int iParam0){
return func_180(iParam0, 1);
}

int func_260(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}


bool func_261(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148;
}


void func_262(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam2)){
func_170(uParam1);
}elseif(func_183(PLAYER::PLAYER_ID())==133){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_170("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_263(var uParam0){
int iVar0;
iVar0=func_183(PLAYER::PLAYER_ID());
if(func_265()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "";
case 132:
return "FM_AE_SORT_5";
case 133:
switch (func_264()){
case 0:
return "FM_AE_SORT_2";
case 1:
return "FM_AE_SORT_2";
case 2:
return "FM_AE_SORT_3";
case 3:
return "FM_AE_SORT_2";
case 4:
return "FM_AE_SORT_2";
case 5:
return "FM_AE_SORT_2";
case 6:
return "FM_AE_SORT_2";
case 7:
return "FM_AE_SORT_13";
case 8:
return "FM_AE_SORT_4";
case 9:
return "FM_AE_SORT_2";
case 10:
return "FM_AE_SORT_2";
case 11:
return "FM_AE_SORT_2";
case 12:
return "FM_AE_SORT_2";
case 13:
return "FM_AE_SORT_2";
case 14:
return "FM_AE_SORT_5";
case 15:
return "FM_AE_SORT_9";
case 16:
return "FM_AE_SORT_9";
case 17:
return "FM_AE_SORT_9";
case 18:
return "FM_AE_SORT_9";
default:
}
break;
case 136:
return "";
case 138:
return "";
case 139:
return "FM_AE_SORT_10";
case 140:
return "";
case 141:
return "FM_AE_SORT_5";
case 144:
return "FM_AE_SORT_1";
case 129:
return "FM_AE_SORT_9";
}
return "";
}

int func_264(){
if(func_183(PLAYER::PLAYER_ID())==133){
return Global_2793046.f_5146;
}
return -1;
}


bool func_265(){
return Global_1853783;
}


char* func_266(var uParam0){
int iVar0;
iVar0=func_183(PLAYER::PLAYER_ID());
if(func_265()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "PIM_TA9";
case 132:
if(func_268()==0){
return "CPC_TILEL";
}elseif(func_268()==1){
return "CPC_TILELA";
}
return "PIM_TA0";
break;
case 133:
switch (func_264()){
case 0:
return "AMCH_0SLC";
case 1:
return "AMCH_1SLC";
case 2:
return "AMCH_2SLC";
case 3:
return "AMCH_3SLC";
case 4:
return "AMCH_4SLC";
case 5:
return "AMCH_5SLC";
case 6:
return "AMCH_6SLC";
case 7:
return "AMCH_7SLC";
case 8:
return "AMCH_8SLC";
case 9:
return "AMCH_12SLC";
case 10:
return "AMCH_13SLC";
case 11:
return "AMCH_15SLC";
case 12:
return "AMCH_16SLC";
case 13:
return "AMCH_23SLC";
case 14:
return "AMCH_9SLC";
case 15:
return "AMCH_19SLC";
case 16:
return "AMCH_20SLC";
case 17:
return "AMCH_21SLC";
case 18:
return "AMCH_22SLC";
default:
}
break;
case 136:
return "PIM_TA10";
case 138:
return "PIM_TA4";
case 139:
return "PIM_TA5";
case 140:
return "PIM_TA3";
case 141:
return "PIM_TA8";
case 144:
return "PIM_TA2";
case 129:
if(func_267()==1){
return "FM_AE_TITL_12";
}else{
return "PIM_TA7";
}
break;
case 146:
return "PIM_TA6";
}
return "";
}

int func_267(){
return Global_2793046.f_5149;
}

int func_268(){
if(func_183(PLAYER::PLAYER_ID())==132){
return Global_2793046.f_5144;
}
return -1;
}


void func_269(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(bParam3){
func_186(uParam1);
}elseif(iParam5 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_170(sParam1);
}
if(func_299() && iParam6){
if(func_271()){
iVar0=2;
iVar1=2;
}else{
iVar0=1;
iVar1=2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_170(sParam2);
}
if(iParam4 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(func_270(PLAYER::PLAYER_ID())){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}elseif(func_61()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_270(int iParam0){
if(func_251(iParam0) || func_250(iParam0)){
return 1;
}
return 0;
}


bool func_271(){
return Global_1836370;
}


struct<4> func_272(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "", 16);
if(func_273(PLAYER::PLAYER_ID()) || func_249(PLAYER::PLAYER_ID())){
return Var0;
}
switch (iParam0){
case 12:
case 13:
case 14:
case 17:
case 15:
case 16:
case 18:
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1198, 16);
break;
}
if(func_173() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1198, 16);
}
return Var0;
}


bool func_273(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==5;
}


char* func_274(int iParam0, char* sParam1, bool bParam2){
var uVar0;
if(iParam0==20 && (!func_173() || MISC::IS_STRING_NULL_OR_EMPTY(uParam1))){
uVar0=func_275();
return uVar0;
}elseif(bParam2){
return "HUD_LBD_IMP";
}elseif(iParam0==25){
if(Global_1836612==0){
Global_1836612=1;
}
return "HUD_LBD_OVR";
}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(Global_1836612==1){
Global_1836612=0;
}
return sParam1;
}else{
if(Global_1836612==0){
Global_1836612=1;
}
switch (iParam0){
case 0:
case 31:
case 42:
return "HUD_LBD_DM";
break;
case 1:
return "HUD_LBD_TDM";
break;
case 5:
return "HUD_LBD_GRCE";
break;
case 4:
case 9:
case 10:
case 6:
case 26:
case 11:
return "HUD_LBD_RCE";
break;
case 7:
return "HUD_LBD_BRCE";
break;
case 18:
case 14:
case 17:
case 15:
case 13:
case 12:
case 16:
case 19:
return "HUD_TITLEMC";
break;
case 3:
return "HUD_LBD_HRD";
break;
case 22:
return "HUD_LBD_SHOO";
break;
}}
return sParam1;
}


char* func_275(){
if(NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS()){
return "HUD_LBD_FMF";
}
if(NETWORK::NETWORK_SESSION_IS_CLOSED_CREW()){
return "HUD_LBD_FMC";
}
if(NETWORK::NETWORK_SESSION_IS_SOLO()){
return "HUD_LBD_FMS";
}
if(NETWORK::NETWORK_SESSION_IS_PRIVATE()){
return "HUD_LBD_FMI";
}
return "HUD_LBD_FMP";
}


void func_276(){
Global_44200=1;
}


bool func_277(bool bParam0, var uParam1, bool bParam2){
if(bParam0){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
}elseif(bParam2){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
}else{
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
}
return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}


void func_278(var uParam0, var uParam1, bool bParam2){
MISC::CLEAR_BIT(&(uParam1->f_33), 7);
Global_1836368=0;
func_162();
Global_1836367=0;
uParam1->f_27=0;
if(bParam2){
if(func_8(&(uParam1->f_19))){
func_163(&(uParam1->f_19));
MISC::CLEAR_BIT(&(Global_2793046.f_4692), 5);
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_33, 0)){
MISC::CLEAR_BIT(&(uParam1->f_33), false);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_279(){
if(func_297()){
return 0;
}
if(func_296()){
return 0;
}
if(!func_294()){
return 0;
}
if(!func_292()){
return 0;
}
if(func_291(8, -1)){
return 0;
}
if(func_298()==2){
return 0;
}
if(Global_2793046.f_4642){
return 0;
}
if(func_290()){
return 0;
}elseif(!func_287(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0){
return 0;
}
if(((func_286(1) || func_284(1)) || Global_23131.f_124) || Global_23131){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(func_283() && Global_1969891==2){
return 0;
}
if(func_281(PLAYER::PLAYER_ID()) && !func_283()){
return 0;
}
if(Global_1935176){
return 0;
}
if(Global_1935181){
return 0;
}
if(func_81(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 4)){
return 0;
}
if(Global_1648740){
return 0;
}
if((Global_1964005.f_718.f_5 || Global_1966831.f_718.f_5) || Global_1963033.f_718.f_5){
return 0;
}
if((Global_1970895.f_724.f_5 || Global_1970895.f_744.f_724.f_5) || Global_1970895.f_1497.f_724.f_5){
return 0;
}
if(Global_1977693.f_726.f_5){
return 0;
}
if(func_280(PLAYER::PLAYER_ID())){
return 0;
}
if((Global_1648781 || Global_1648782) || Global_1648783){
return 0;
}
return 1;
}

int func_280(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_4, 6);
}

int func_281(int iParam0){
if(func_17(iParam0, 0)){
return 1;
}
if(func_282()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_282(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_283(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 0));
}

int func_284(bool bParam0){
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_285(PLAYER::PLAYER_PED_ID())){
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

int func_285(int iParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}


bool func_286(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_287(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_288(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_288(int iParam0){
return func_289(iParam0);
}


var func__289(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_290(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


bool func_291(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_292(){
if(func_293()==0){
return 1;
}
return 0;
}

int func_293(){
return Global_1574632.f_18;
}

int func_294(){
if(func_295()){
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


bool func_295(){
return Global_1574604;
}


bool func_296(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==5;
}


bool func_297(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_298(){
return Global_1653913.f_68;
}

int func_299(){
if(Global_1836369 > 16){
return 1;
}
return 0;
}


float func_300(){
float fVar0;
float fVar1;
float fVar2;
fVar2=0.6347182f;
fVar1=(1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
fVar0=(1f - (fVar1 - fVar2));
return fVar0;
}

int func_301(int iParam0){
switch (iParam0){
case 20:
case 21:
case 27:
case 28:
case 40:
return 1;
default:
}
return 0;
}

int func_302(){
if(func_303(PLAYER::PLAYER_ID())){
return Global_1581949;
}
return 0;
}

int func_303(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_17(iParam0, 0)){
return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
}}
return 0;
}

int func_304(){
if(func_302()){
return 1;
}
if(func_217(PLAYER::PLAYER_ID())){
return 0;
}
if(func_265()){
return 1;
}
if(func_133(PLAYER::PLAYER_ID())){
switch (func_183(PLAYER::PLAYER_ID())){
case 131:
case 132:
case 133:
case 136:
case 138:
case 139:
case 141:
case 144:
case 146:
return 1;
break;
case 140:
if(!func_305(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 129:
if(!func_305(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 174:
if(!func_305(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 175:
return 1;
break;
}}
return 0;
}


bool func_305(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 4);
}

int func_306(int iParam0){
if(iParam0==28){
if((func_133(PLAYER::PLAYER_ID()) && !func_151(PLAYER::PLAYER_ID())) && !func_182(PLAYER::PLAYER_ID())){
return 1;
}}
if(iParam0==27){
if(func_106(PLAYER::PLAYER_ID(), 0) && func_151(PLAYER::PLAYER_ID())){
return 1;
}
if(func_142(PLAYER::PLAYER_ID())==3){
return 1;
}}
return 0;
}

int func_307(){
int iVar0;
iVar0=-1;
if(!func_17(PLAYER::PLAYER_ID(), 0)){
iVar0=NETWORK::PARTICIPANT_ID_TO_INT();
}else{
iVar0=func_308();
}
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Local_94[iVar0 /*14*/].f_1, 1);
}
return 0;
}

int func_308(){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1)){
iVar2=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
iVar0=iVar2;
}}
return iVar0;
}


void func_309(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar1=SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
switch (iVar1){
case 186:
func_310(iVar0);
break;
}
iVar0++;
}}


void func_310(int iParam0){
struct<6> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
struct<14> Var6;
bool bVar7;
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13)){
bVar7=false;
while (bVar7 < 4){
if(!MISC::IS_BIT_SET(Local_93.f_113, bVar7)){
if(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, bVar7)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0)){
if(!MISC::IS_BIT_SET(Local_93.f_109, bVar7)){
if(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, bVar7)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_93.f_2[bVar7 /*26*/].f_2)){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_93.f_2[bVar7 /*26*/].f_2))){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==NETWORK::NET_TO_VEH(Local_93.f_2[bVar7 /*26*/].f_2)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)==PLAYER::PLAYER_PED_ID()){
if(func_1005()==Local_93.f_118){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), bVar7);
}
}
}}}
}
}}}
}
elseif(ENTITY::IS_ENTITY_A_PED(Var0.f_0)){
iVar2=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
if(iVar2==NETWORK::NET_TO_PED(Local_93.f_2[bVar7 /*26*/].f_1)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar4=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4)){
if(Var0.f_5){
if(bVar4==PLAYER::PLAYER_ID()){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), bVar7);
Var6.f_2=-1446638030;
Var6.f_10=PLAYER::PLAYER_ID();
func_316(Var6, func_317(0));
func_311("HUNT_TCKP", 0);
}}}elseif(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7)){
if(Var0.f_5){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
}}
}
elseif(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7)){
if(Var0.f_5){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
}
}
}
elseif(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7)){
if(Var0.f_5){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
}
}}elseif(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7)){
if(Var0.f_5){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
}}}
}}}}
bVar7++;
}}
if(func_307()){
if(!func_109(PLAYER::PLAYER_ID(), 20)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_0)){
iVar2=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar1)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(bVar4==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)){
if(func_191(bVar3, 1)){
if(Local_93.f_118 > -1){
iVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_93.f_118));
if(func_76(bVar3, iVar5, 1)){
if(!func_145()){
func_134(0);
func_127();
}
}}}
}
}}}
}}}}}}}

int func_311(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_312(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_312(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_315() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_313(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944061.f_5[iVar0 /*53*/]=iParam0;
Global_1944061.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944061.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944061.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_313(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_314(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944061++;
if(Global_1944061 > 5){
Global_1944061=5;
return Global_1944061;
}
return (Global_1944061 - 1);
}


void func_314(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_315(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_316(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_317(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
if(func_1123(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
bVar1++;
}
return uVar0;
}


void func_318(){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
if(!func_17(PLAYER::PLAYER_ID(), 0)){
if(MISC::IS_BIT_SET(uLocal_95, 14)){
MISC::CLEAR_BIT(&uLocal_95, 14);
}
return;
}
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
if(!MISC::IS_BIT_SET(uLocal_95, 14)){
if(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 !=0){
Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1=0;
}
MISC::SET_BIT(&uLocal_95, 14);
}
if(!MISC::IS_BIT_SET(uLocal_95, 15)){
MISC::SET_BIT(&uLocal_95, 15);
func_927();
}
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
uVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
iVar2=uVar1;
iVar3=Local_94[iVar2 /*14*/].f_9;
switch (iVar3){
case 0:
func_876();
func_858();
func_843();
break;
case 2:
func_319();
break;
case 3:
func_1015();
break;
}}}}


void func_319(){
struct<20> Var0;
int iVar1;
int iVar2;
char* sVar3;
int iVar4;
int iVar5;
Var0.f_2=1065353216;
Var0.f_3=1065353216;
Var0.f_4=1;
Var0.f_9=-1;
Var0.f_18=-1;
Var0.f_19=-1;
iVar1=NETWORK::PARTICIPANT_ID_TO_INT();
iVar2=PLAYER::PLAYER_ID();
if(func_17(PLAYER::PLAYER_ID(), 0)){
iVar1=func_308();
iVar2=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
}
if(!MISC::IS_BIT_SET(Local_94[iVar1 /*14*/].f_1, 4)){
if(!MISC::IS_BIT_SET(uLocal_95, 9)){
if(MISC::IS_BIT_SET(Local_93.f_1, 1)){
if(iVar1==Local_93.f_118 || func_1005()==Local_93.f_118){
if(func_142(iVar2) >=2){
sVar3=func_842(iVar2);
iVar4=func_841(iVar2);
func_839(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
Var0.f_0=func_655();
Var0.f_1=func_654();
func_408(166, 1, &Var0, 0);
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
iLocal_115=PLAYER::GET_MAX_WANTED_LEVEL();
PLAYER::SET_MAX_WANTED_LEVEL(0);
MISC::SET_BIT(&uLocal_95, 17);
func_7(&uLocal_116, 0, 0);
}}elseif(func_307()){
if(func_191(iVar2, 1)){
if(func_142(iVar2) >=2){
sVar3=func_842(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
iVar4=func_841(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
func_839(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
if(func_128(iVar2)){
Var0.f_0=func_407();
Var0.f_1=func_406();
}
func_408(166, 0, &Var0, 0);
}}else{
if(func_142(iVar2) >=2){
sVar3=func_842(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
iVar4=func_841(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
func_839(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
if(func_128(iVar2)){
Var0.f_0=func_407();
Var0.f_1=func_406();
}
func_408(166, 0, &Var0, 0);
}}}
MISC::SET_BIT(&uLocal_95, 9);
}elseif(MISC::IS_BIT_SET(Local_93.f_1, 3)){
iVar5=(4 - Local_93.f_115);
if(iVar1==Local_93.f_118 || func_1005()==Local_93.f_118){
if(func_142(iVar2) >=2){
sVar3=func_400();
iVar4=func_841(iVar2);
func_839(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
Var0.f_0=func_655();
Var0.f_1=func_654();
func_408(166, 0, &Var0, 0);
}}else{
if(func_142(iVar2) >=2){
sVar3=func_842(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
iVar4=func_841(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
if(iVar5==1){
func_839(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
}
elseif(iVar5 > 1){
func_839(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
}}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
if(func_128(iVar2)){
Var0.f_0=func_407();
Var0.f_1=func_406();
}
func_408(166, 1, &Var0, 0);
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}}
MISC::SET_BIT(&uLocal_95, 9);
}elseif(MISC::IS_BIT_SET(Local_93.f_1, 5)){
if(func_399()){
if(func_1004()){
if(func_142(iVar2) >=2){
}}elseif(func_142(iVar2) >=2){
func_354(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
}}
if(iVar2==PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_95, 6)){
func_656(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1);
MISC::SET_BIT(&uLocal_95, 6);
}
func_408(166, 0, &Var0, 0);
}
MISC::SET_BIT(&uLocal_95, 9);
}}
if(MISC::IS_BIT_SET(uLocal_95, 9)){
func_927();
if(!MISC::IS_BIT_SET(uLocal_96, 8)){
func_339();
func_75();
MISC::SET_BIT(&uLocal_96, 8);
}
if(!MISC::IS_BIT_SET(uLocal_95, 10)){
}
if(func_320(&uLocal_103, 0, 0)){
if(iVar1==NETWORK::PARTICIPANT_ID_TO_INT()){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
}}elseif(MISC::IS_BIT_SET(uLocal_95, 17)){
if(func_6(&uLocal_116, 10000, 0)){
PLAYER::SET_MAX_WANTED_LEVEL(iLocal_115);
MISC::CLEAR_BIT(&uLocal_95, 17);
}}}}}

int func_320(var uParam0, bool bParam1, int iParam2){
bool bVar0;
func_110(29);
if((*uParam0 > 0 && !func_237()) && func_142(PLAYER::PLAYER_ID()) !=0){
if(!func_336()){
func_335();
}}
switch (*uParam0){
case 0:
if(!func_8(&(uParam0->f_3))){
func_7(&(uParam0->f_3), 0, 0);
}elseif(func_6(&(uParam0->f_3), 1000, 0)){
MISC::SET_BIT(&(Global_1947724.f_3), 2);
if(bParam1){
MISC::SET_BIT(&(Global_2793046.f_4687), false);
func_7(&(uParam0->f_5), 0, 0);
}
func_7(&(uParam0->f_1), 0, 0);
func_334(uParam0, 1);
}
break;
case 1:
if(func_8(&(uParam0->f_5))){
if(func_6(&(uParam0->f_5), 3000, 0)){
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){
func_327(iParam2);
func_334(uParam0, 2);
}
break;
case 2:
func_327(0);
if(func_6(&(uParam0->f_1), 15000, 0)){
if(func_321(func_322(0))){
HUD::CLEAR_HELP(1);
}
func_334(uParam0, 3);
}
break;
case 3:
if(func_6(&(uParam0->f_1), 23500, 0)){
MISC::CLEAR_BIT(&(Global_2793046.f_4687), true);
MISC::CLEAR_BIT(&(Global_1947724.f_3), 2);
func_334(uParam0, 4);
return 1;
}
break;
case 4:
MISC::CLEAR_BIT(&(Global_2793046.f_4687), true);
MISC::CLEAR_BIT(&(Global_1947724.f_3), 2);
return 1;
}
return 0;
}


bool func_321(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_322(int iParam0){
if(((func_325(PLAYER::PLAYER_ID()) || func_324(PLAYER::PLAYER_ID())) || func_258()) || iParam0){
if(func_324(PLAYER::PLAYER_ID())){
return "BG_LBD_HELP";
}
return "BG_LBD_HELPW";
}
if(func_222(func_323())){
return "GB_LBD_HELP";
}
return "GB_LBD_HELPW";
}

int func_323(){
return Global_1923597;
}


bool func_324(int iParam0){
return func_223(func_105(iParam0), 0);
}


bool func_325(int iParam0){
return func_326(func_105(iParam0));
}

int func_326(int iParam0){
switch (iParam0){
case 179:
case 180:
case 148:
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148 && func_180(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35, 1)){
return 1;
}else{
return 0;
}
break;
case 182:
case 183:
case 185:
case 186:
case 189:
case 190:
case 191:
case 192:
case 193:
case 194:
case 195:
case 197:
case 198:
case 199:
case 200:
case 201:
case 205:
case 207:
case 208:
case 209:
case 210:
case 211:
return 1;
}
return 0;
}


void func_327(int iParam0){
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 0)){
if(((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2793046.f_848, 2)) && func_1123(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !CAM::IS_SCREEN_FADED_OUT()) && !func_109(PLAYER::PLAYER_ID(), 22)) && func_142(PLAYER::PLAYER_ID()) !=0) && !func_332(func_333())) && !func_325(PLAYER::PLAYER_ID())) && !func_331(func_105(PLAYER::PLAYER_ID()))) && !func_330(func_105(PLAYER::PLAYER_ID()))){
MISC::SET_BIT(&(Global_2793046.f_4687), true);
func_329(func_322(iParam0), -1);
func_328(1);
MISC::CLEAR_BIT(&(Global_2793046.f_4687), false);
}}}


void func_328(int iParam0){
char* sVar0;
sVar0="GTAO_Boss_Goons_FM_Soundset";
if(func_257(1)){
sVar0="GTAO_Biker_FM_Soundset";
}
if(iParam0 && !func_237()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
}}


void func_329(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_330(int iParam0){
switch (iParam0){
case 150:
case 236:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}

int func_331(int iParam0){
switch (iParam0){
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 188:
case 178:
return 1;
default:
}
return 0;
}

int func_332(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}

int func_333(){
var uVar0;
uVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT")){
return 159;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST")){
return 157;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH")){
return 148;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS")){
return 164;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER")){
return 142;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB")){
return 152;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CARJACKING")){
return 163;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_COLLECT_MONEY")){
return 155;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FINDERSKEEPERS")){
return 160;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FIVESTAR")){
return 153;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_POINT_TO_POINT")){
return 162;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ROB_SHOP")){
return 154;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER")){
return 166;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_BUY")){
return 167;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_SELL")){
return 168;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_DEFEND")){
return 169;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT")){
return 170;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CASHING_OUT")){
return 171;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SALVAGE")){
return 172;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS")){
return 173;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_VEHICLE_EXPORT")){
return 178;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_JOUST")){
return 179;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_UNLOAD_WEAPONS")){
return 180;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BAD_DEAL")){
return 182;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RESCUE_CONTACT")){
return 183;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_LAST_RESPECTS")){
return 185;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRACT_KILLING")){
return 186;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RACE_P2P")){
return 189;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_SELL")){
return 190;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_DEFEND")){
return 191;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN")){
return 193;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RIPPIN_IT_UP")){
return 194;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_FREE_PRISONER")){
return 197;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SAFECRACKER")){
return 198;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STEAL_BIKES")){
return 195;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SEARCH_AND_DESTROY")){
return 199;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "AM_PENNED_IN")){
return 200;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STAND_YOUR_GROUND")){
return 201;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF")){
return 205;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DESTROY_VANS")){
return 207;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BURN_ASSETS")){
return 208;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SHUTTLE")){
return 209;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_WHEELIE_RIDER")){
return 210;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_PLOUGHED")){
return 214;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FULLY_LOADED")){
return 215;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_AMPHIBIOUS_ASSAULT")){
return 216;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_TRANSPORTER")){
return 217;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FORTIFIED")){
return 218;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_VELOCITY")){
return 219;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_STOCKPILING")){
return 221;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_RAMPED_UP")){
return 220;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING")){
return 225;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING_DEFEND")){
return 227;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SMUGGLER")){
return 229;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FM_GANGOPS")){
return 233;
}
return 0;
}


void func_334(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_335(){
Global_2696213=1;
}

int func_336(){
if(((((((func_105(PLAYER::PLAYER_ID())==170 || func_105(PLAYER::PLAYER_ID())==219) || func_105(PLAYER::PLAYER_ID())==221) || func_105(PLAYER::PLAYER_ID())==220) || func_105(PLAYER::PLAYER_ID())==216) || func_105(PLAYER::PLAYER_ID())==215) || func_105(PLAYER::PLAYER_ID())==214) || func_105(PLAYER::PLAYER_ID())==218){
return 1;
}
if(func_337(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_337(int iParam0){
int iVar0;
if(iParam0 !=func_65()){
if(func_1123(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_338(Global_2657589[iParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_338(int iParam0){
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


void func_339(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(HUD::DOES_BLIP_EXIST(uLocal_110[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_110[iVar0]));
}
iVar0++;
}
if(MISC::IS_BIT_SET(uLocal_95, 18)){
func_353(1);
MISC::CLEAR_BIT(&uLocal_95, 18);
}
func_350();
func_340();
}


void func_340(){
bool bVar0;
bool bVar1;
if(!MISC::IS_BIT_SET(uLocal_95, 7)){
MISC::SET_BIT(&uLocal_95, 7);
bVar0=false;
while (bVar0 < 32){
bVar1=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1)){
if(bVar1 !=PLAYER::PLAYER_ID()){
if(MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, bVar0)){
func_348(bVar1, 432, 0, 0);
func_341(bVar1, func_347(iLocal_113), 0, 0);
}}}
bVar0++;
}}}


void func_341(bool bParam0, var uParam1, bool bParam2, bool bParam3){
var uVar0;
if(func_343(bParam0)){
return;
}
if(func_342(&(Global_2646729.f_624[bParam0]), &(Global_2646729.f_987[bParam0]), &(Global_2646729.f_389), bParam2, bParam0, bParam3, &uVar0)){
if(bParam2){
Global_2646729.f_459[bParam0]=uParam1;
}}}

int func_342(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6){
if(bParam5){
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=SCRIPT::GET_ID_OF_THIS_THREAD();
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}}
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(bParam3){
if(!MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::SET_BIT(uParam2, bParam4);
}
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
if(MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::CLEAR_BIT(uParam2, bParam4);
}
if(*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=-1;
}
*uParam0=-1;
}
return 1;
}elseif(SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){}
return 0;
}

int func_343(int iParam0){
if(iParam0==func_65()){
return 1;
}
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_344()){
return 1;
}
return 0;
}

int func_344(){
switch (func_346()){
case 0:
return func_345();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_345(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_346(){
return Global_32163;
}

int func_347(int iParam0){
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


void func_348(bool bParam0, int iParam1, bool bParam2, bool bParam3){
bool bVar0;
if(func_343(bParam0)){
return;
}
if(func_342(&(Global_2646729.f_591[bParam0]), &(Global_2646729.f_954[bParam0]), &(Global_2646729.f_388), bParam2, bParam0, bParam3, &bVar0)){
if(bParam2){
Global_2646729.f_426[bParam0]=iParam1;
}
if(bVar0){
func_349();
}}}


void func_349(){
Global_2646729.f_1655=1;
}


void func_350(){
if(MISC::IS_BIT_SET(uLocal_95, 16)){
func_86();
func_351();
MISC::CLEAR_BIT(&uLocal_95, 16);
}}


void func_351(){
if(Global_2644549.f_6==SCRIPT::GET_ID_OF_THIS_THREAD()){
func_352();
}}


void func_352(){
struct<28> Var0;
if(SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6)){
if(!Global_2644549.f_6==SCRIPT::GET_ID_OF_THIS_THREAD()){
return;
}}
Var0.f_7=1;
Var0.f_8=1;
Var0.f_21=1115815936;
Var0.f_27=-1082130432;
Global_2644549={
Var0 
};
Global_2644549.f_6=-1;
}


void func_353(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_144()){
if(func_1123(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_1123(PLAYER::PLAYER_ID(), 1, 1)){
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

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
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
func_398(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_235(&(Var0.f_69), iParam7);
}
return func_355(&Var0);
}

int func_355(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_366(uParam0, uParam0->f_17);
func_365(uParam0);
if(func_61()){
func_365(uParam0);
}
if(func_364(uParam0->f_1)){
func_357();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_356(uParam0->f_69, 8192)){
Global_1935182=1;
}
return 1;
}
if(((Global_2672505.f_2514[0 /*80*/].f_1==13 || Global_2672505.f_2514[0 /*80*/].f_1==53) || Global_2672505.f_2514[0 /*80*/].f_1==54) || Global_2672505.f_2514[0 /*80*/].f_1==58){
Global_2672505.f_2514[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672505.f_2514[iVar0 + 1 /*80*/]={
Global_2672505.f_2514[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672505.f_2514[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2==0){
Global_2672505.f_2514[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_357();
}
return 1;
}else{
if(uParam0->f_1==1){
func_235(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_356(uParam0->f_69, 128)){
if(func_240(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_235(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}


bool func_356(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_357(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_358();
if(bVar0){
Global_78827=0;
}}


void func_358(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_362(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_359(&(Global_2672505.f_2838.f_1), 1);
}


void func_359(var uParam0, int iParam1){
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
if(!Global_78827){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78828){
if(CAM::IS_SCREEN_FADED_OUT() && !func_361(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_360(0);
}


void func_360(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_361(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_362(var uParam0){
func_363(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_363(var uParam0){
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

int func_364(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_365(var uParam0){
if(func_242(uParam0->f_1)){
uParam0->f_72=func_196();
}}


void func_366(var uParam0, int iParam1){
if(func_242(uParam0->f_1)){
uParam0->f_73=1;
}
if(iParam1==func_65() || !func_1123(iParam1, 0, 1)){
return;
}
if(func_240(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_367(iParam1, -2, 0, 0, 0);
}}}

int func_367(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_281(iParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_108449[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_281(PLAYER::PLAYER_ID()) || (func_397() && func_396())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
uVar1=func_395();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_1123(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_393(iParam1, bParam0, 0);
}else{
return func_382(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_382(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_393(iParam1, bParam0, 0);
}else{
return func_368(0, -1, 0);
}}else{
return func_368(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_393(iParam1, bParam0, 0);
}else{
return func_382(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_382(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_368(bool bParam0, int iParam1, bool bParam2){
return func_369(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_369(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_381() || (func_380() && func_378())) && Global_1665699.f_1){
if(bParam1){
return func_377(iParam2, iVar0);
}else{
return func_377(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_374(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_373(1);
}else{
return func_373(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_370(iVar0, iParam2, 1, 4);
}else{
return func_370(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_373(1);
}
return func_373(0);
}

int func_370(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_372(iParam0, iParam1, iParam3);
if(func_371(Global_4718592.f_113724, 1)){
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

int func_371(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(Global_4718592.f_166301==65){
return 1;
}}
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(iParam0==Global_262145.f_9486[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_372(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_374(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_373(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_374(int iParam0, int iParam1, int iParam2, int iParam3){
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
bVar0=Global_1058070.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0)){
bVar1=Global_1058070.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 15);
default:
}
break;
}
return 0;
}

int func_375(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3)){
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
if(((!func_1123(iVar1, 1, 1) || func_17(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_376(iVar1)){
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


var func__376(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_377(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_372(iParam1, iParam0, 4);
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

int func_378(){
if(func_379()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_379(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_380(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_381(){
if(func_379() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_382(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148){
bVar1=true;
}
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853910[iVar2 /*862*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_385()){
iVar3=func_195(bParam0);
if(!iVar3==-1){
return func_193(iVar3);
}}
if((func_384(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_374(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_373(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_383(1);
}else{
return func_369(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_373(1);
}else{
return func_369(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_195(bParam0);
if(!iVar4==-1){
return func_193(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_383(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_384(bool bParam0, bool bParam1, int iParam2, int iParam3){
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

int func_385(){
if((((((func_174() || func_392()) || func_61()) || func_391()) || func_390()) || func_388()) || func_386()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_386(){
return func_387(Global_4718592.f_113724);
}

int func_387(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31715[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_388(){
return func_389(Global_4718592.f_113724);
}

int func_389(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__390(){
return Global_2683864.f_24;
}


var func__391(){
return Global_2683864.f_21;
}


var func__392(){
return Global_2683864.f_18;
}

int func_393(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_385()){
iVar2=func_195(iParam1);
if(!iVar2==-1){
return func_193(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_65()){
if(Global_4718592.f_108449[iParam0] !=-1 && Global_4718592.f_108449[iParam0] <=4){
if(Global_4718592.f_108449[iParam0]==0){
iVar0=15;
}elseif(Global_4718592.f_108449[iParam0]==1){
iVar0=18;
}elseif(Global_4718592.f_108449[iParam0]==2){
iVar0=24;
}elseif(Global_4718592.f_108449[iParam0]==4){
if(MISC::IS_BIT_SET(Global_4718592.f_15, 29)){
iVar0=21;
}else{
iVar0=6;
}}else{
iVar0=Global_4718592.f_108449[iParam0];
}}else{
iVar0=func_369(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_394(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_374(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_383(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_394(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_4718592.f_166456;
break;
case 1:
iVar0=Global_4718592.f_166457;
break;
case 2:
iVar0=Global_4718592.f_166458;
break;
case 3:
iVar0=Global_4718592.f_166459;
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


var func__395(){
return Global_2621446.f_2;
}


var func__396(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__397(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


void func_398(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_65();
uParam1->f_18=func_65();
uParam1->f_19=func_65();
uParam1->f_20=func_65();
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

int func_399(){
int iVar0;
if(!func_17(PLAYER::PLAYER_ID(), 0)){
if(!Global_2672505.f_4.f_10){
if(MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6)){
MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
}
return 0;
}
if(func_145()){
if(MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6)){
MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
}
return 0;
}
if(!MISC::IS_BIT_SET(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6)){
MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
}}else{
iVar0=func_308();
if(iVar0==-1){
return 0;
}
if(!MISC::IS_BIT_SET(Local_94[iVar0 /*14*/].f_1, 6)){
return 0;
}}
return 1;
}


char* func_400(){
int iVar0;
var uVar1;
iVar0=func_66(PLAYER::PLAYER_ID());
if(iVar0 !=func_65()){
if(iVar0 !=PLAYER::PLAYER_ID()){
if(((func_109(iVar0, 28) || func_109(PLAYER::PLAYER_ID(), 28)) || func_405(iVar0)) && !func_404(iVar0)){
return func_402(iVar0, 0);
}
if(!func_214() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return func_402(iVar0, 0);
}}
uVar1=func_401(&(Global_1894573[iVar0 /*608*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
return func_402(iVar0, 0);
}else{
return sVar1;
}}
return "";
}


var func__401(var uParam0){
return uParam0;
}


var func__402(int iParam0, bool bParam1){
if(!bParam1){
if(func_178(iParam0, 1)){
return func_403();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


var func__403(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_404(int iParam0){
struct<13> Var0;
Var0={
func_67(iParam0) 
};
if(func_214()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}

int func_405(int iParam0){
struct<13> Var0;
if(iParam0 !=func_65()){
Var0={
func_67(iParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_214() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}

int func_406(){
return ((4 - Local_93.f_115) * Global_262145.f_15978);
}

int func_407(){
return ((4 - Local_93.f_115) * Global_262145.f_15977);
}


void func_408(int iParam0, bool bParam1, var uParam2, bool bParam3){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
func_652(iParam0, &fVar2, &fVar3);
if(uParam2->f_6==0){
iVar1=(iVar1 + uParam2->f_1);
iVar0=(iVar0 + *uParam2);
}
if(bParam1){
iVar1=(iVar1 + func_651(iParam0, uParam2->f_13, bParam3));
if(iParam0==233){
iVar6=(uParam2->f_10 / uParam2->f_11) * 100;
iVar1=((iVar1 / 100) * iVar6);
}
if((iParam0==158 && uParam2->f_21==1) && !uParam2->f_22){
iVar1=200;
}
iVar1=round((to_float(iVar1) / to_float(uParam2->f_4)));
iVar1=round((IntToFloat(iVar1) * fVar3));
iVar1=round((IntToFloat(iVar1) * uParam2->f_3));
iVar0=(iVar0 + func_650(iParam0, bParam3));
iVar0=round((to_float(iVar0) / to_float(uParam2->f_4)));
iVar0=round((IntToFloat(iVar0) * fVar2));
iVar0=round((IntToFloat(iVar0) * uParam2->f_2));
}elseif((iParam0==185 || iParam0==220) || iParam0==221){
iVar1=round((to_float(iVar1) / to_float(uParam2->f_4)));
iVar1=round((IntToFloat(iVar1) * fVar3));
iVar1=round((IntToFloat(iVar1) * uParam2->f_3));
iVar0=round((to_float(iVar0) / to_float(uParam2->f_4)));
iVar0=round((IntToFloat(iVar0) * fVar2));
iVar0=round((IntToFloat(iVar0) * uParam2->f_2));
}
if(uParam2->f_18 > -1){
iVar0=(iVar0 + uParam2->f_18);
}
if(uParam2->f_19 > -1){
iVar1=(iVar1 + uParam2->f_19);
}
if(func_649(iParam0)){
if(bParam1){
if(Global_262145.f_24468){
if(func_648(PLAYER::PLAYER_ID()) <=0){
func_647();
}}elseif(func_648(PLAYER::PLAYER_ID()) > 0){
func_646();
}else{
func_647();
}}else{
func_645();
}}
func_629(iParam0, bParam1, uParam2, &iVar0, &uVar4);
func_626(iParam0, uParam2, &iVar0, &iVar5);
func_605(iParam0, uParam2, &iVar0, &iVar5);
func_602(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
func_595(iParam0, uParam2, &iVar0, &iVar5);
if(iParam0==168){
Global_2793046.f_5225.f_387=uVar4;
}else{
Global_2793046.f_5225.f_387=iVar5;
}
iVar8=func_260();
if(iVar8 !=func_65() && iParam0 !=148){
if(func_191(PLAYER::PLAYER_ID(), 0)){
if(!func_76(PLAYER::PLAYER_ID(), iVar8, 1)){
func_584(&iVar0, 1);
}}}
func_580(iParam0, &iVar9, &iVar10);
iVar1=(iVar1 + iVar9);
iVar0=(iVar0 + iVar10);
if(iVar1 > 0){
Global_1947733.f_10=iVar1;
func_579();
func_535(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
}
if(iVar0 > 0){
Global_1947733.f_9=iVar0;
func_507(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
func_506(iParam0, iVar0);
if(func_505(iParam0)){
if(func_504(iParam0) > -1){
func_503(func_504(iParam0), iVar0);
}}
Global_2696875=iVar0;
func_502(&Global_2694992, 0, 0);
}
if(func_125(PLAYER::PLAYER_ID()) || func_151(PLAYER::PLAYER_ID())){
func_494(iParam0);
}
if(func_326(iParam0)){
Global_1947751.f_13=iVar0;
Global_1947751.f_14=iVar1;
}
if(func_331(iParam0)){
Global_1947807.f_13=iVar0;
Global_1947807.f_14=iVar1;
}
if(((func_493(iParam0) || iParam0==297) || iParam0==296) || iParam0==298){
Global_1947870.f_12=iVar0;
Global_1947870.f_13=iVar1;
}
if(func_492(iParam0)){
Global_1947917.f_12=iVar0;
Global_1947917.f_13=iVar1;
}
if(func_491(iParam0)){
Global_1947971.f_12=iVar0;
Global_1947971.f_13=iVar1;
}
if(func_330(iParam0)){
if(func_490(iParam0)){
Global_1948053.f_12=iVar0;
Global_1948053.f_13=iVar1;
}elseif(((func_486(iParam0) || iParam0==299) || iParam0==300) || iParam0==301){
Global_1948107.f_12=iVar0;
Global_1948107.f_13=iVar1;
}}
if(func_485(iParam0)){
Global_1948194.f_12=iVar0;
Global_1948194.f_13=iVar1;
}
if(func_484(iParam0)){
Global_1948269.f_16=iVar0;
Global_1948269.f_17=iVar1;
}
if(func_483(iParam0)){
Global_1948357.f_16=iVar0;
Global_1948357.f_17=iVar1;
}
if(func_482(iParam0) || func_481(iParam0)){
Global_1948491.f_15=iVar0;
Global_1948491.f_16=iVar1;
}
func_409(bParam1, iParam0);
}


void func_409(bool bParam0, int iParam1){
int iVar0;
bool bVar1;
if(bParam0){
iVar0=-1;
bVar1=false;
switch (iParam1){
case 226:
iVar0=2;
bVar1=true;
break;
case 190:
iVar0=3;
bVar1=true;
break;
case 230:
iVar0=4;
bVar1=true;
break;
case 168:
iVar0=5;
bVar1=true;
break;
case 188:
iVar0=6;
bVar1=true;
break;
case 237:
bVar1=true;
break;
}
if(iVar0 !=-1){
if(func_480(iVar0) && !func_419(iVar0)){
func_410(iVar0);
}}
if(bVar1){
if(func_480(1) && !func_419(1)){
func_410(1);
}}}}


void func_410(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
func_414(func_415(func_416(iParam0)), 1, -1);
func_411(12, func_413(func_416(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}}


void func_411(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_412(&Global_1662547);
Global_1662547[iVar0 /*106*/]=iParam0;
StringCopy(&(Global_1662547[iVar0 /*106*/].f_17), sParam3, 64);
StringCopy(&(Global_1662547[iVar0 /*106*/].f_1), sParam4, 64);
StringCopy(&(Global_1662547[iVar0 /*106*/].f_33), sParam1, 64);
StringCopy(&(Global_1662547[iVar0 /*106*/].f_49), sParam2, 64);
Global_1662547[iVar0 /*106*/].f_97=iParam5;
Global_1662547[iVar0 /*106*/].f_104=iParam9;
Global_1662547[iVar0 /*106*/].f_105=iParam10;
if(iParam6 !=0){}
if(iParam7 !=0){}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
StringCopy(&(Global_1662547[iVar0 /*106*/].f_98), sParam8, 24);
}}

int func_412(var uParam0){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 <=9){
if((*uParam0)[iVar1 /*106*/]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}


char* func_413(int iParam0){
switch (iParam0){
case -1069968045:
return "CLO_X6M_U_3_3";
break;
case -921734020:
return "CLO_X6F_U_3_3";
break;
case -1509312284:
return "CLO_X6M_U_2_3";
break;
case 2103965964:
return "CLO_X6F_U_2_3";
break;
case -1709127394:
return "CLO_X6M_U_3_9";
break;
case -727053399:
return "CLO_X6F_U_3_9";
break;
case 425828250:
return "CLO_X6M_U_2_9";
break;
case -731306227:
return "CLO_X6F_U_2_9";
break;
case -1655013310:
return "CLO_X6M_U_3_12";
break;
case -8081421:
return "CLO_X6F_U_3_12";
break;
case 1136959044:
return "CLO_X6M_U_2_12";
break;
case 1252591238:
return "CLO_X6F_U_2_12";
break;
case -1326192619:
return "CLO_X6M_U_8_0";
break;
case 1881115548:
return "CLO_X6M_U_8_0";
break;
case 1290819217:
return "CLO_X6F_U_10_0";
break;
case 117815244:
return "CLO_X6F_U_10_0";
break;
case -1662464917:
return "CLO_X6M_U_15_0";
break;
case 439944869:
return "CLO_X6F_U_18_0";
break;
case -1411572922:
return "CLO_X6M_U_10_16";
break;
case 1655606115:
return "CLO_X6F_U_12_16";
break;
case -1687399299:
return "CLO_X6M_U_10_0";
break;
case -921932467:
return "CLO_X6F_U_12_0";
break;
case -1516214043:
return "CLO_X6M_U_10_1";
break;
case -1757640274:
return "CLO_X6F_U_12_1";
break;
case 654371756:
return "CLO_X6M_U_10_2";
break;
case 340755414:
return "CLO_X6F_U_12_2";
break;
case -120058021:
return "CLO_X6M_U_10_3";
break;
case 583082169:
return "CLO_X6F_U_12_3";
break;
case 44442359:
return "CLO_X6M_U_10_4";
break;
case 2145704703:
return "CLO_X6F_U_12_4";
break;
case -723499156:
return "CLO_X6M_U_10_5";
break;
case -1907623987:
return "CLO_X6F_U_12_5";
break;
case 222672970:
return "CLO_X6M_U_10_6";
break;
case 818396254:
return "CLO_X6F_U_12_6";
break;
case -544285475:
return "CLO_X6M_U_10_7";
break;
case 514398241:
return "CLO_X6F_U_12_7";
break;
case -375328511:
return "CLO_X6M_U_10_8";
break;
case -2081103177:
return "CLO_X6F_U_12_8";
break;
case -1142876798:
return "CLO_X6M_U_10_9";
break;
case -2104434705:
return "CLO_X6F_U_12_9";
break;
case -551157269:
return "CLO_X6M_U_10_10";
break;
case -1881446972:
return "CLO_X6F_U_12_10";
break;
case 292021870:
return "CLO_X6M_U_10_11";
break;
case 1719833363:
return "CLO_X6F_U_12_11";
break;
case -1035974624:
return "CLO_X6M_U_10_12";
break;
case 1956294467:
return "CLO_X6F_U_12_12";
break;
case -192205643:
return "CLO_X6M_U_10_13";
break;
case 1894950891:
return "CLO_X6F_U_12_13";
break;
case -947334499:
return "CLO_X6M_U_10_14";
break;
case 2114667036:
return "CLO_X6F_U_12_14";
break;
case -111757768:
return "CLO_X6M_U_10_15";
break;
case -783423328:
return "CLO_X6F_U_12_15";
break;
case -593232685:
return "CLO_X6M_U_10_17";
break;
case -1223936995:
return "CLO_X6F_U_12_17";
break;
case 1311829745:
return "CLO_X6M_U_16_0";
break;
case 1376594947:
return "CLO_X6F_U_19_0";
break;
case 925416247:
return "CLO_X6M_U_12_0";
break;
case -993141292:
return "CLO_X6F_U_14_0";
break;
case -80344790:
return "CLO_X6M_L_2_23";
break;
case -448274315:
return "CLO_X6F_L_3_23";
break;
case 1505804828:
return "CLO_X6M_L_3_0";
break;
case -1839009993:
return "CLO_X6F_L_4_0";
break;
case -608876472:
return "CLO_X6M_L_1_1";
break;
case 1334957776:
return "CLO_X6F_L_2_1";
break;
case 498873860:
return "CLO_X6M_F_6_9";
break;
case -126601887:
return "CLO_X6F_F_6_9";
break;
case 1985248855:
return "CLO_X6M_F_6_13";
break;
case -875041851:
return "CLO_X6F_F_6_13";
break;
case -197848144:
return "CLO_X6M_B_0_0";
break;
case 2130504112:
return "CLO_X6F_B_0_0";
break;
case 99858221:
return "CLO_X6M_B_0_1";
break;
case 213255460:
return "CLO_X6F_B_0_1";
break;
case 1605135005:
return "CLO_X6M_B_0_2";
break;
case 461611711:
return "CLO_X6F_B_0_2";
break;
case -1943948059:
return "CLO_X6M_EY_4_0";
break;
case -2070991003:
return "CLO_X6F_EY_4_0";
break;
case -683062477:
return "CLO_X6M_EY_4_1";
break;
case -617653084:
return "CLO_X6F_EY_4_1";
break;
case 388773720:
return "CLO_X6M_LW_1_2";
break;
case -2098938846:
return "CLO_X6F_LW_1_2";
break;
case -1759130267:
return "CLO_X6M_EY_1_0";
break;
case -2109654177:
return "CLO_X6F_EY_1_0";
break;
case 652173018:
return "CLO_X6M_T_0_0";
break;
case -1189158251:
return "CLO_X6F_T_0_0";
break;
case -315422177:
return "CLO_X6M_T_4_0";
break;
case -1832379936:
return "CLO_X6F_T_4_0";
break;
case -1256711400:
return "CLO_X6M_D_3_0";
break;
case 1298977992:
return "CLO_X6F_D_3_0";
break;
case 471019161:
return "CLO_X6M_EY_2_0";
break;
case 692557212:
return "CLO_X6F_EY_2_0";
break;
case 165186084:
return "CLO_X6M_EY_2_1";
break;
case -498759787:
return "CLO_X6F_EY_2_1";
break;
case 493498543:
return "CLO_X6M_EY_2_2";
break;
case -292085704:
return "CLO_X6F_EY_2_2";
break;
case -2056426364:
return "CLO_X6M_PH_5_0";
break;
case 1986396785:
return "CLO_X6F_PH_5_0";
break;
case -1883471582:
return "CLO_X6M_PH_5_1";
break;
case -1397788925:
return "CLO_X6F_PH_5_1";
break;
case -36216721:
return "CLO_X6M_PH_6_0";
break;
case 1244363453:
return "CLO_X6F_PH_6_0";
break;
case 1207735097:
return "CLO_X6M_PH_7_0";
break;
case -133674528:
return "CLO_X6F_PH_7_0";
break;
case 1033338279:
return "CLO_X6M_U_13_0";
break;
case 1956717889:
return "CLO_X6F_U_16_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
return "CLO_E1M_B_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
return "CLO_E1F_B_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
return "CLO_E1M_B_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
return "CLO_E1F_B_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
return "CLO_E1M_B_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
return "CLO_E1F_B_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
return "CLO_E1M_B_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
return "CLO_E1F_B_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
return "CLO_E1M_B_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
return "CLO_E1M_B_4_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
return "CLO_E1F_B_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
return "CLO_E1F_B_4_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
return "CLO_E1M_B_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return "CLO_E1F_B_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
return "CLO_E1M_O_MUM";
break;
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return "CLO_E1F_O_MUM";
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
return "CLO_E1M_L_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
return "CLO_E1F_L_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
return "CLO_E1M_L_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return "CLO_E1F_L_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
return "CLO_E1M_U_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
return "CLO_E1M_U_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
return "CLO_E1F_U_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
return "CLO_E1F_U_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
return "CLO_E1M_U_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
return "CLO_E1M_U_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
return "CLO_E1F_U_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
return "CLO_E1F_U_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
return "CLO_E1M_U_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
return "CLO_E1M_U_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
return "CLO_E1F_U_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
return "CLO_E1F_U_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
return "CLO_E1M_U_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
return "CLO_E1F_U_8_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
return "CLO_E1M_U_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return "CLO_E1F_U_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
return "CLO_E1M_PH_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
return "CLO_E1M_PH_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
return "CLO_E1F_PH_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
return "CLO_E1F_PH_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
return "CLO_E1M_PH_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
return "CLO_E1F_PH_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
return "CLO_E1M_PH_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
return "CLO_E1M_PH_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
return "CLO_E1F_PH_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
return "CLO_E1F_PH_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
return "CLO_E1M_PH_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
return "CLO_E1M_PH_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
return "CLO_E1F_PH_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
return "CLO_E1F_PH_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
return "CLO_E1M_PH_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
return "CLO_E1F_PH_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
return "CLO_E1M_PH_5_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
return "CLO_E1F_PH_5_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
return "CLO_E1M_PH_5_2";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
return "CLO_E1F_PH_5_2";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
return "CLO_E1M_PH_5_3";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
return "CLO_E1F_PH_5_3";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
return "CLO_E1M_PH_5_4";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
return "CLO_E1F_PH_5_4";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
return "CLO_E1M_PH_5_7";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
return "CLO_E1F_PH_5_7";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
return "CLO_E1M_PH_5_8";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
return "CLO_E1F_PH_5_8";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
return "CLO_E1M_PH_5_5";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
return "CLO_E1F_PH_5_5";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
return "CLO_E1M_PH_5_6";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
return "CLO_E1F_PH_5_6";
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
return "CLO_E1M_E_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
return "CLO_E1F_E_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
return "CLO_E1M_LW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
return "CLO_E1M_RW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
return "CLO_E1F_LW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return "CLO_E1F_RW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
return "CLO_E1M_D_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return "CLO_E1F_D_0_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
return "CLO_SBM_B_5_0";
break;
case joaat("dlc_mp_sum2_f_berd_5_0"):
return "CLO_SBF_B_5_0";
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
return "CLO_SBM_B_5_1";
break;
case joaat("dlc_mp_sum2_f_berd_5_1"):
return "CLO_SBF_B_5_1";
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
return "CLO_SBM_B_5_2";
break;
case joaat("dlc_mp_sum2_f_berd_5_2"):
return "CLO_SBF_B_5_2";
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
return "CLO_SBM_B_5_3";
break;
case joaat("dlc_mp_sum2_f_berd_5_3"):
return "CLO_SBF_B_5_3";
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
return "CLO_SBM_B_6_0";
break;
case joaat("dlc_mp_sum2_f_berd_6_0"):
return "CLO_SBF_B_6_0";
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
return "CLO_SBM_B_6_1";
break;
case joaat("dlc_mp_sum2_f_berd_6_1"):
return "CLO_SBF_B_6_1";
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
return "CLO_SBM_B_6_2";
break;
case joaat("dlc_mp_sum2_f_berd_6_2"):
return "CLO_SBF_B_6_2";
break;
case joaat("dlc_mp_sum2_m_berd_7_0"):
return "CLO_SBM_B_7_0";
break;
case joaat("dlc_mp_sum2_f_berd_7_0"):
return "CLO_SBF_B_7_0";
break;
case joaat("dlc_mp_sum2_m_berd_8_0"):
return "CLO_SBM_B_8_0";
break;
case joaat("dlc_mp_sum2_f_berd_8_0"):
return "CLO_SBF_B_8_0";
break;
case joaat("dlc_mp_sum2_m_berd_9_0"):
return "CLO_SBM_B_9_0";
break;
case joaat("dlc_mp_sum2_f_berd_9_0"):
return "CLO_SBF_B_9_0";
break;
case joaat("dlc_mp_sum2_m_berd_9_1"):
return "CLO_SBM_B_9_1";
break;
case joaat("dlc_mp_sum2_f_berd_9_1"):
return "CLO_SBF_B_9_1";
break;
case joaat("dlc_mp_sum2_m_berd_9_2"):
return "CLO_SBM_B_9_2";
break;
case joaat("dlc_mp_sum2_f_berd_9_2"):
return "CLO_SBF_B_9_2";
break;
case joaat("dlc_mp_sum2_m_berd_10_0"):
return "CLO_SBM_B_10_0";
break;
case joaat("dlc_mp_sum2_f_berd_10_0"):
return "CLO_SBF_B_10_0";
break;
case joaat("dlc_mp_sum2_m_berd_10_1"):
return "CLO_SBM_B_10_1";
break;
case joaat("dlc_mp_sum2_f_berd_10_1"):
return "CLO_SBF_B_10_1";
break;
case joaat("dlc_mp_sum2_m_berd_10_2"):
return "CLO_SBM_B_10_2";
break;
case joaat("dlc_mp_sum2_f_berd_10_2"):
return "CLO_SBF_B_10_2";
break;
case joaat("dlc_mp_sum2_m_berd_10_3"):
return "CLO_SBM_B_10_3";
break;
case joaat("dlc_mp_sum2_f_berd_10_3"):
return "CLO_SBF_B_10_3";
break;
case joaat("dlc_mp_sum2_m_berd_10_4"):
return "CLO_SBM_B_10_4";
break;
case joaat("dlc_mp_sum2_f_berd_10_4"):
return "CLO_SBF_B_10_4";
break;
case joaat("dlc_mp_sum2_m_berd_10_5"):
return "CLO_SBM_B_10_5";
break;
case joaat("dlc_mp_sum2_f_berd_10_5"):
return "CLO_SBF_B_10_5";
break;
case joaat("dlc_mp_sum2_m_berd_10_6"):
return "CLO_SBM_B_10_6";
break;
case joaat("dlc_mp_sum2_f_berd_10_6"):
return "CLO_SBF_B_10_6";
break;
case joaat("dlc_mp_sum2_m_berd_10_7"):
return "CLO_SBM_B_10_7";
break;
case joaat("dlc_mp_sum2_f_berd_10_7"):
return "CLO_SBF_B_10_7";
break;
case joaat("dlc_mp_sum2_m_berd_10_8"):
return "CLO_SBM_B_10_8";
break;
case joaat("dlc_mp_sum2_f_berd_10_8"):
return "CLO_SBF_B_10_8";
break;
case joaat("dlc_mp_sum2_m_berd_10_9"):
return "CLO_SBM_B_10_9";
break;
case joaat("dlc_mp_sum2_f_berd_10_9"):
return "CLO_SBF_B_10_9";
break;
case joaat("dlc_mp_sum2_m_berd_10_10"):
return "CLO_SBM_B_10_10";
break;
case joaat("dlc_mp_sum2_f_berd_10_10"):
return "CLO_SBF_B_10_10";
break;
case joaat("dlc_mp_sum2_m_berd_10_11"):
return "CLO_SBM_B_10_11";
break;
case joaat("dlc_mp_sum2_f_berd_10_11"):
return "CLO_SBF_B_10_11";
break;
case joaat("dlc_mp_sum2_m_berd_10_12"):
return "CLO_SBM_B_10_12";
break;
case joaat("dlc_mp_sum2_f_berd_10_12"):
return "CLO_SBF_B_10_12";
break;
case joaat("dlc_mp_sum2_m_berd_10_13"):
return "CLO_SBM_B_10_13";
break;
case joaat("dlc_mp_sum2_f_berd_10_13"):
return "CLO_SBF_B_10_13";
break;
case joaat("dlc_mp_sum2_m_berd_10_14"):
return "CLO_SBM_B_10_14";
break;
case joaat("dlc_mp_sum2_f_berd_10_14"):
return "CLO_SBF_B_10_14";
break;
case joaat("dlc_mp_sum2_m_berd_10_15"):
return "CLO_SBM_B_10_15";
break;
case joaat("dlc_mp_sum2_f_berd_10_15"):
return "CLO_SBF_B_10_15";
break;
case joaat("dlc_mp_sum2_m_berd_10_16"):
return "CLO_SBM_B_10_16";
break;
case joaat("dlc_mp_sum2_f_berd_10_16"):
return "CLO_SBF_B_10_16";
break;
case joaat("dlc_mp_sum2_m_berd_10_17"):
return "CLO_SBM_B_10_17";
break;
case joaat("dlc_mp_sum2_f_berd_10_17"):
return "CLO_SBF_B_10_17";
break;
case joaat("dlc_mp_sum2_m_berd_10_18"):
return "CLO_SBM_B_10_18";
break;
case joaat("dlc_mp_sum2_f_berd_10_18"):
return "CLO_SBF_B_10_18";
break;
case joaat("dlc_mp_sum2_m_berd_10_19"):
return "CLO_SBM_B_10_19";
break;
case joaat("dlc_mp_sum2_f_berd_10_19"):
return "CLO_SBF_B_10_19";
break;
case joaat("dlc_mp_sum2_m_berd_10_20"):
return "CLO_SBM_B_10_20";
break;
case joaat("dlc_mp_sum2_f_berd_10_20"):
return "CLO_SBF_B_10_20";
break;
case joaat("dlc_mp_sum2_m_berd_10_21"):
return "CLO_SBM_B_10_21";
break;
case joaat("dlc_mp_sum2_f_berd_10_21"):
return "CLO_SBF_B_10_21";
break;
case joaat("dlc_mp_sum2_m_berd_10_22"):
return "CLO_SBM_B_10_22";
break;
case joaat("dlc_mp_sum2_f_berd_10_22"):
return "CLO_SBF_B_10_22";
break;
case joaat("dlc_mp_sum2_m_berd_10_23"):
return "CLO_SBM_B_10_23";
break;
case joaat("dlc_mp_sum2_f_berd_10_23"):
return "CLO_SBF_B_10_23";
break;
case joaat("dlc_mp_sum2_m_berd_10_24"):
return "CLO_SBM_B_10_24";
break;
case joaat("dlc_mp_sum2_f_berd_10_24"):
return "CLO_SBF_B_10_24";
break;
case joaat("dlc_mp_sum2_m_berd_10_25"):
return "CLO_SBM_B_10_25";
break;
case joaat("dlc_mp_sum2_f_berd_10_25"):
return "CLO_SBF_B_10_25";
break;
case joaat("dlc_mp_sum2_m_berd_0_0"):
return "CLO_SBM_B_0_0";
break;
case joaat("dlc_mp_sum2_f_berd_0_0"):
return "CLO_SBF_B_0_0";
break;
case joaat("dlc_mp_sum2_m_berd_1_0"):
return "CLO_SBM_B_1_0";
break;
case joaat("dlc_mp_sum2_f_berd_1_0"):
return "CLO_SBF_B_1_0";
break;
case joaat("dlc_mp_sum2_m_berd_1_1"):
return "CLO_SBM_B_1_1";
break;
case joaat("dlc_mp_sum2_f_berd_1_1"):
return "CLO_SBF_B_1_1";
break;
case joaat("dlc_mp_sum2_m_berd_1_2"):
return "CLO_SBM_B_1_2";
break;
case joaat("dlc_mp_sum2_f_berd_1_2"):
return "CLO_SBF_B_1_2";
break;
case joaat("dlc_mp_sum2_m_berd_3_0"):
return "CLO_SBM_B_3_0";
break;
case joaat("dlc_mp_sum2_f_berd_3_0"):
return "CLO_SBF_B_3_0";
break;
case joaat("dlc_mp_sum2_m_berd_4_0"):
return "CLO_SBM_B_4_0";
break;
case joaat("dlc_mp_sum2_f_berd_4_0"):
return "CLO_SBF_B_4_0";
break;
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
return "CLO_SBM_O_SAS";
break;
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return "CLO_SBF_O_SAS";
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
return "CLO_SBM_L_2_0";
break;
case joaat("dlc_mp_sum2_f_legs_0_0"):
return "CLO_SBF_L_0_0";
break;
case joaat("dlc_mp_sum2_m_legs_2_1"):
return "CLO_SBM_L_2_1";
break;
case joaat("dlc_mp_sum2_f_legs_0_1"):
return "CLO_SBF_L_0_1";
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
return "CLO_SBM_U_13_0";
break;
case joaat("dlc_mp_sum2_f_jbib_15_0"):
return "CLO_SBF_U_15_0";
break;
case joaat("dlc_mp_sum2_m_jbib_14_0"):
return "CLO_SBM_U_14_0";
break;
case joaat("dlc_mp_sum2_f_jbib_19_0"):
return "CLO_SBF_U_19_0";
break;
case joaat("dlc_mp_sum2_m_jbib_15_0"):
return "CLO_SBM_U_15_0";
break;
case joaat("dlc_mp_sum2_m_jbib_16_0"):
return "CLO_SBM_U_15_0";
break;
case joaat("dlc_mp_sum2_f_jbib_20_0"):
return "CLO_SBF_U_20_0";
break;
case joaat("dlc_mp_sum2_m_jbib_15_1"):
return "CLO_SBM_U_15_1";
break;
case joaat("dlc_mp_sum2_m_jbib_16_1"):
return "CLO_SBM_U_15_1";
break;
case joaat("dlc_mp_sum2_f_jbib_20_1"):
return "CLO_SBF_U_20_1";
break;
case joaat("dlc_mp_sum2_m_jbib_15_2"):
return "CLO_SBM_U_15_2";
break;
case joaat("dlc_mp_sum2_m_jbib_16_2"):
return "CLO_SBM_U_15_2";
break;
case joaat("dlc_mp_sum2_f_jbib_20_2"):
return "CLO_SBF_U_20_2";
break;
case joaat("dlc_mp_sum2_m_jbib_17_0"):
return "CLO_SBM_U_17_0";
break;
case joaat("dlc_mp_sum2_f_jbib_8_0"):
return "CLO_SBF_U_8_0";
break;
case joaat("dlc_mp_sum2_m_jbib_7_0"):
return "CLO_SBM_U_7_0";
break;
case joaat("dlc_mp_sum2_m_jbib_8_0"):
return "CLO_SBM_U_7_0";
break;
case joaat("dlc_mp_sum2_f_jbib_24_0"):
return "CLO_SBF_U_21_0";
break;
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return "CLO_SBF_U_21_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_phead_6_0"):
return "CLO_SBM_PH_6_0";
break;
case joaat("dlc_mp_sum2_f_phead_6_0"):
return "CLO_SBF_PH_6_0";
break;
case joaat("dlc_mp_sum2_m_phead_6_1"):
return "CLO_SBM_PH_6_1";
break;
case joaat("dlc_mp_sum2_f_phead_6_1"):
return "CLO_SBF_PH_6_1";
break;
case joaat("dlc_mp_sum2_m_phead_6_2"):
return "CLO_SBM_PH_6_2";
break;
case joaat("dlc_mp_sum2_f_phead_6_2"):
return "CLO_SBF_PH_6_2";
break;
case joaat("dlc_mp_sum2_m_phead_6_3"):
return "CLO_SBM_PH_6_3";
break;
case joaat("dlc_mp_sum2_f_phead_6_3"):
return "CLO_SBF_PH_6_3";
break;
case joaat("dlc_mp_sum2_m_phead_6_4"):
return "CLO_SBM_PH_6_4";
break;
case joaat("dlc_mp_sum2_f_phead_6_4"):
return "CLO_SBF_PH_6_4";
break;
case joaat("dlc_mp_sum2_m_phead_6_5"):
return "CLO_SBM_PH_6_5";
break;
case joaat("dlc_mp_sum2_f_phead_6_5"):
return "CLO_SBF_PH_6_5";
break;
case joaat("dlc_mp_sum2_m_phead_6_6"):
return "CLO_SBM_PH_6_6";
break;
case joaat("dlc_mp_sum2_f_phead_6_6"):
return "CLO_SBF_PH_6_6";
break;
case joaat("dlc_mp_sum2_m_phead_6_7"):
return "CLO_SBM_PH_6_7";
break;
case joaat("dlc_mp_sum2_f_phead_6_7"):
return "CLO_SBF_PH_6_7";
break;
case joaat("dlc_mp_sum2_m_phead_6_8"):
return "CLO_SBM_PH_6_8";
break;
case joaat("dlc_mp_sum2_f_phead_6_8"):
return "CLO_SBF_PH_6_8";
break;
case joaat("dlc_mp_sum2_m_phead_6_9"):
return "CLO_SBM_PH_6_9";
break;
case joaat("dlc_mp_sum2_f_phead_6_9"):
return "CLO_SBF_PH_6_9";
break;
case joaat("dlc_mp_sum2_m_phead_6_10"):
return "CLO_SBM_PH_6_10";
break;
case joaat("dlc_mp_sum2_f_phead_6_10"):
return "CLO_SBF_PH_6_10";
break;
case joaat("dlc_mp_sum2_m_phead_6_11"):
return "CLO_SBM_PH_6_11";
break;
case joaat("dlc_mp_sum2_f_phead_6_11"):
return "CLO_SBF_PH_6_11";
break;
case joaat("dlc_mp_sum2_m_phead_6_12"):
return "CLO_SBM_PH_6_12";
break;
case joaat("dlc_mp_sum2_f_phead_6_12"):
return "CLO_SBF_PH_6_12";
break;
case joaat("dlc_mp_sum2_m_phead_6_13"):
return "CLO_SBM_PH_6_13";
break;
case joaat("dlc_mp_sum2_f_phead_6_13"):
return "CLO_SBF_PH_6_13";
break;
case joaat("dlc_mp_sum2_m_phead_0_0"):
return "CLO_SBF_PH_0_0";
break;
case joaat("dlc_mp_sum2_m_phead_1_0"):
return "CLO_SBM_PH_1_0";
break;
case joaat("dlc_mp_sum2_f_phead_0_0"):
return "CLO_SBF_PH_0_0";
break;
case joaat("dlc_mp_sum2_f_phead_1_0"):
return "CLO_SBF_PH_1_0";
break;
case joaat("dlc_mp_sum2_m_phead_2_0"):
return "CLO_SBM_PH_2_0";
break;
case joaat("dlc_mp_sum2_m_phead_4_0"):
return "CLO_SBM_PH_4_0";
break;
case joaat("dlc_mp_sum2_f_phead_2_0"):
return "CLO_SBF_PH_2_0";
break;
case joaat("dlc_mp_sum2_f_phead_4_0"):
return "CLO_SBF_PH_4_0";
break;
case joaat("dlc_mp_sum2_m_phead_2_1"):
return "CLO_SBM_PH_2_1";
break;
case joaat("dlc_mp_sum2_m_phead_4_1"):
return "CLO_SBM_PH_4_1";
break;
case joaat("dlc_mp_sum2_f_phead_2_1"):
return "CLO_SBF_PH_2_1";
break;
case joaat("dlc_mp_sum2_f_phead_4_1"):
return "CLO_SBF_PH_4_1";
break;
case joaat("dlc_mp_sum2_m_phead_3_0"):
return "CLO_SBM_PH_3_0";
break;
case joaat("dlc_mp_sum2_m_phead_7_0"):
return "CLO_SBM_PH_7_0";
break;
case joaat("dlc_mp_sum2_f_phead_3_0"):
return "CLO_SBF_PH_3_0";
break;
case joaat("dlc_mp_sum2_f_phead_7_0"):
return "CLO_SBF_PH_7_0";
break;
case joaat("dlc_mp_sum2_m_phead_8_0"):
return "CLO_SBM_PH_8_0";
break;
case joaat("dlc_mp_sum2_f_phead_8_0"):
return "CLO_SBF_PH_8_0";
break;
case joaat("dlc_mp_sum2_m_pears_0_0"):
return "CLO_SBM_E_0_0";
break;
case joaat("dlc_mp_sum2_f_pears_0_0"):
return "CLO_SBF_E_0_0";
break;
case joaat("dlc_mp_sum2_m_pears_0_1"):
return "CLO_SBM_E_0_1";
break;
case joaat("dlc_mp_sum2_f_pears_0_1"):
return "CLO_SBF_E_0_1";
break;
case joaat("dlc_mp_sum2_m_pears_0_2"):
return "CLO_SBM_E_0_2";
break;
case joaat("dlc_mp_sum2_f_pears_0_2"):
return "CLO_SBF_E_0_2";
break;
case joaat("dlc_mp_sum2_m_pears_0_3"):
return "CLO_SBM_E_0_3";
break;
case joaat("dlc_mp_sum2_f_pears_0_3"):
return "CLO_SBF_E_0_3";
break;
case joaat("dlc_mp_sum2_m_pears_0_4"):
return "CLO_SBM_E_0_4";
break;
case joaat("dlc_mp_sum2_f_pears_0_4"):
return "CLO_SBF_E_0_4";
break;
case joaat("dlc_mp_sum2_m_pears_0_5"):
return "CLO_SBM_E_0_5";
break;
case joaat("dlc_mp_sum2_f_pears_0_5"):
return "CLO_SBF_E_0_5";
break;
case joaat("dlc_mp_sum2_m_pears_0_6"):
return "CLO_SBM_E_0_6";
break;
case joaat("dlc_mp_sum2_f_pears_0_6"):
return "CLO_SBF_E_0_6";
break;
case joaat("dlc_mp_sum2_m_pears_0_7"):
return "CLO_SBM_E_0_7";
break;
case joaat("dlc_mp_sum2_f_pears_0_7"):
return "CLO_SBF_E_0_7";
break;
case joaat("dlc_mp_sum2_m_pears_0_8"):
return "CLO_SBM_E_0_8";
break;
case joaat("dlc_mp_sum2_f_pears_0_8"):
return "CLO_SBF_E_0_8";
break;
case joaat("dlc_mp_sum2_m_pears_0_9"):
return "CLO_SBM_E_0_9";
break;
case joaat("dlc_mp_sum2_f_pears_0_9"):
return "CLO_SBF_E_0_9";
break;
case joaat("dlc_mp_sum2_m_pears_0_10"):
return "CLO_SBM_E_0_10";
break;
case joaat("dlc_mp_sum2_f_pears_0_10"):
return "CLO_SBF_E_0_10";
break;
case joaat("dlc_mp_sum2_m_pears_0_11"):
return "CLO_SBM_E_0_11";
break;
case joaat("dlc_mp_sum2_f_pears_0_11"):
return "CLO_SBF_E_0_11";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_special_1_0"):
return "CLO_SBM_S_1_0";
break;
case joaat("dlc_mp_sum2_f_special_1_0"):
return "CLO_SBF_S_1_0";
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
return "CLO_SBM_F_5_0";
break;
case joaat("dlc_mp_sum2_f_feet_5_0"):
return "CLO_SBF_F_5_0";
break;
case joaat("dlc_mp_sum2_m_feet_5_1"):
return "CLO_SBM_F_5_1";
break;
case joaat("dlc_mp_sum2_f_feet_5_1"):
return "CLO_SBF_F_5_1";
break;
case joaat("dlc_mp_sum2_m_feet_5_2"):
return "CLO_SBM_F_5_2";
break;
case joaat("dlc_mp_sum2_f_feet_5_2"):
return "CLO_SBF_F_5_2";
break;
case joaat("dlc_mp_sum2_m_feet_5_3"):
return "CLO_SBM_F_5_3";
break;
case joaat("dlc_mp_sum2_f_feet_5_3"):
return "CLO_SBF_F_5_3";
break;
case joaat("dlc_mp_sum2_m_feet_5_4"):
return "CLO_SBM_F_5_4";
break;
case joaat("dlc_mp_sum2_f_feet_5_4"):
return "CLO_SBF_F_5_4";
break;
case joaat("dlc_mp_sum2_m_feet_5_5"):
return "CLO_SBM_F_5_5";
break;
case joaat("dlc_mp_sum2_f_feet_5_5"):
return "CLO_SBF_F_5_5";
break;
case joaat("dlc_mp_sum2_m_feet_5_6"):
return "CLO_SBM_F_5_6";
break;
case joaat("dlc_mp_sum2_f_feet_5_6"):
return "CLO_SBF_F_5_6";
break;
case joaat("dlc_mp_sum2_m_feet_5_7"):
return "CLO_SBM_F_5_7";
break;
case joaat("dlc_mp_sum2_f_feet_5_7"):
return "CLO_SBF_F_5_7";
break;
case joaat("dlc_mp_sum2_m_feet_5_8"):
return "CLO_SBM_F_5_8";
break;
case joaat("dlc_mp_sum2_f_feet_5_8"):
return "CLO_SBF_F_5_8";
break;
case joaat("dlc_mp_sum2_m_feet_6_0"):
return "CLO_SBM_F_6_0";
break;
case joaat("dlc_mp_sum2_f_feet_6_0"):
return "CLO_SBF_F_6_0";
break;
case joaat("dlc_mp_sum2_m_feet_6_1"):
return "CLO_SBM_F_6_1";
break;
case joaat("dlc_mp_sum2_f_feet_6_1"):
return "CLO_SBF_F_6_1";
break;
case joaat("dlc_mp_sum2_m_feet_6_2"):
return "CLO_SBM_F_6_2";
break;
case joaat("dlc_mp_sum2_f_feet_6_2"):
return "CLO_SBF_F_6_2";
break;
case joaat("dlc_mp_sum2_m_feet_6_3"):
return "CLO_SBM_F_6_3";
break;
case joaat("dlc_mp_sum2_f_feet_6_3"):
return "CLO_SBF_F_6_3";
break;
case joaat("dlc_mp_sum2_m_feet_6_4"):
return "CLO_SBM_F_6_4";
break;
case joaat("dlc_mp_sum2_f_feet_6_4"):
return "CLO_SBF_F_6_4";
break;
case joaat("dlc_mp_sum2_m_feet_6_5"):
return "CLO_SBM_F_6_5";
break;
case joaat("dlc_mp_sum2_f_feet_6_5"):
return "CLO_SBF_F_6_5";
break;
case joaat("dlc_mp_sum2_m_feet_6_6"):
return "CLO_SBM_F_6_6";
break;
case joaat("dlc_mp_sum2_f_feet_6_6"):
return "CLO_SBF_F_6_6";
break;
case joaat("dlc_mp_sum2_m_feet_6_7"):
return "CLO_SBM_F_6_7";
break;
case joaat("dlc_mp_sum2_f_feet_6_7"):
return "CLO_SBF_F_6_7";
break;
case joaat("dlc_mp_sum2_m_feet_6_8"):
return "CLO_SBM_F_6_8";
break;
case joaat("dlc_mp_sum2_f_feet_6_8"):
return "CLO_SBF_F_6_8";
break;
case joaat("dlc_mp_sum2_m_feet_6_9"):
return "CLO_SBM_F_6_9";
break;
case joaat("dlc_mp_sum2_f_feet_6_9"):
return "CLO_SBF_F_6_9";
break;
case joaat("dlc_mp_sum2_m_feet_6_10"):
return "CLO_SBM_F_6_10";
break;
case joaat("dlc_mp_sum2_f_feet_6_10"):
return "CLO_SBF_F_6_10";
break;
case joaat("dlc_mp_sum2_m_feet_6_11"):
return "CLO_SBM_F_6_11";
break;
case joaat("dlc_mp_sum2_f_feet_6_11"):
return "CLO_SBF_F_6_11";
break;
case joaat("dlc_mp_sum2_m_feet_6_12"):
return "CLO_SBM_F_6_12";
break;
case joaat("dlc_mp_sum2_f_feet_6_12"):
return "CLO_SBF_F_6_12";
break;
case joaat("dlc_mp_sum2_m_feet_6_13"):
return "CLO_SBM_F_6_13";
break;
case joaat("dlc_mp_sum2_f_feet_6_13"):
return "CLO_SBF_F_6_13";
break;
case joaat("dlc_mp_sum2_m_feet_6_14"):
return "CLO_SBM_F_6_14";
break;
case joaat("dlc_mp_sum2_f_feet_6_14"):
return "CLO_SBF_F_6_14";
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
return "CLO_FXM_U_10_2";
break;
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
return "CLO_FXM_U_10_3";
break;
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return "CLO_FXM_U_10_4";
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
return "CLO_FXM_U_10_0";
break;
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return "CLO_FXM_U_10_1";
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
return "CLO_FXM_B_0_0";
break;
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
return "CLO_FXM_B_0_1";
break;
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
return "CLO_FXM_B_0_2";
break;
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
return "CLO_FXM_B_0_3";
break;
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
return "CLO_FXM_B_1_0";
break;
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
return "CLO_FXM_B_1_1";
break;
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
return "CLO_FXM_B_1_2";
break;
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
return "CLO_FXM_B_1_3";
break;
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
return "CLO_FXM_B_2_0";
break;
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
return "CLO_FXM_B_2_1";
break;
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
return "CLO_FXM_B_2_2";
break;
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return "CLO_FXM_B_2_3";
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return "CLO_TRM_D_30_1";
break;
case 991513037:
case -1634791241:
return "CLO_TRM_DECL_8";
break;
case -675149090:
case -1227437948:
return "CLO_TRM_DECL_10";
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return "CLO_TRM_U_11_0";
break;
case -1686814509:
case -1408179706:
return "CLO_TRM_DECL_11";
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return "CLO_TRM_O_BS_1";
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return "CLO_TRM_U_9_15";
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return "CLO_TRM_U_13_2";
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return "CLO_TRM_U_13_0";
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return "CLO_TRM_U_13_1";
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return "CLO_TRM_PH_1_0";
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return "CLO_TRM_PH_1_1";
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return "CLO_TRM_O_MS_0";
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return "CLO_TRM_O_MS_1";
break;
case -1372800957:
return "PS_BAG_64";
break;
case -1125170035:
return "PS_BAG_66";
break;
case 1276052663:
return "PS_BAG_65";
break;
case 2138708412:
case -1894139601:
return "CLO_TRM_DECL_12";
break;
case 205793848:
case -786254870:
return "CLO_TRM_DECL_13";
break;
case 1325175663:
case -773154515:
return "CLO_TRM_DECL_14";
break;
case -368088972:
case 1778247767:
return "CLO_TRM_DECL_15";
break;
case -1771053026:
case -648092145:
return "CLO_TRM_DECL_16";
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return "CLO_TRM_O_BS_0";
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
return "CLO_H4M_DECL_55";
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
return "CLO_H4M_DECL_57";
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
return "CLO_H4M_DECL_59";
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
return "CLO_H4M_DECL_61";
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
return "CLO_H4M_DECL_63";
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
return "CLO_H4M_DECL_65";
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
return "CLO_H4M_DECL_30";
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
return "CLO_H4M_DECL_32";
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
return "CLO_H4M_DECL_28";
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
return "CLO_H4M_DECL_29";
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
return "CLO_H4M_DECL_31";
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
return "CLO_H4M_DECL_22";
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
return "CLO_H4M_DECL_23";
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
return "CLO_H4M_DECL_20";
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
return "CLO_H4M_DECL_21";
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
return "CLO_H4M_DECL_3";
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
return "CLO_H4M_DECL_4";
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
return "CLO_H4M_DECL_5";
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
return "CLO_H4M_DECL_6";
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
return "CLO_H4M_DECL_27";
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
return "CLO_H4M_DECL_26";
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
return "CLO_H4M_DECL_25";
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
return "CLO_H4M_DECL_24";
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
return "CLO_H4M_DECL_2";
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
return "CLO_H4M_DECL_1";
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
return "CLO_H4M_DECL_0";
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
return "CLO_H4M_DECL_7";
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
return "CLO_H4M_DECL_8";
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
return "CLO_H4M_DECL_9";
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
return "CLO_H4M_DECL_10";
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
return "CLO_H4M_DECL_11";
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
return "CLO_H4M_DECL_12";
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
return "CLO_H4M_DECL_13";
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
return "CLO_H4M_DECL_14";
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
return "CLO_H4M_DECL_15";
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
return "CLO_H4M_DECL_16";
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
return "CLO_H4M_DECL_17";
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
return "CLO_H4M_DECL_18";
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
return "CLO_H4M_DECL_19";
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
return "CLO_H4M_DECL_33";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
return "CLO_H4F_U_8_0";
break;
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
return "CLO_H4F_U_10_0";
break;
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
return "CLO_H4F_U_5_0";
break;
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
return "CLO_H4F_U_5_1";
break;
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
return "CLO_H4F_U_7_1";
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
return "CLO_H4M_DECL_48";
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
return "CLO_H4M_DECL_47";
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
return "CLO_H4M_DECL_45";
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
return "CLO_H4M_DECL_46";
break;
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
return "CLO_H4F_U_7_5";
break;
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
return "CLO_H4F_U_7_4";
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return "CLO_H4F_D_0_0";
break;
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
return "CLO_H4F_U_7_2";
break;
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
return "CLO_H4F_U_7_3";
break;
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
return "CLO_H4F_U_4_0";
break;
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
return "CLO_H4F_U_6_4";
break;
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
return "CLO_H4F_U_6_3";
break;
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
return "CLO_H4F_U_6_2";
break;
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
return "CLO_H4F_U_6_1";
break;
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return "CLO_H4F_U_6_0";
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
return "CLO_H4F_L_1_0";
break;
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
return "CLO_H4F_L_1_1";
break;
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
return "CLO_H4F_L_1_2";
break;
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return "CLO_H4F_L_0_0";
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
return "CLO_H4F_PH_1_0";
break;
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
return "CLO_H4F_PH_1_1";
break;
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
return "CLO_H4F_PH_1_2";
break;
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
return "CLO_H4F_PH_1_3";
break;
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return "CLO_H4F_PH_1_4";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
return "CLO_H4F_PLW_0_0";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
return "CLO_H4F_PLW_0_1";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
return "CLO_H4F_PLW_0_2";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
return "CLO_H4F_PLW_0_3";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
return "CLO_H4F_PLW_0_4";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
return "CLO_H4F_PLW_0_5";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
return "CLO_H4F_PLW_0_6";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
return "CLO_H4F_PLW_0_7";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
return "CLO_H4F_PLW_0_8";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
return "CLO_H4F_PLW_0_9";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
return "CLO_H4F_PLW_010";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return "CLO_H4F_PLW_011";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
return "CLO_H4F_PEY_0_0";
break;
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
return "CLO_H4F_PEY_0_1";
break;
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
return "CLO_H4F_PEY_0_2";
break;
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
return "CLO_H4F_PEY_0_3";
break;
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
return "CLO_H4F_PEY_0_4";
break;
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
return "CLO_H4F_PEY_0_5";
break;
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
return "CLO_H4F_PEY_0_6";
break;
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
return "CLO_H4F_PEY_0_7";
break;
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
return "CLO_H4F_PEY_0_8";
break;
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
return "CLO_H4F_PEY_0_9";
break;
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
return "CLO_H4F_PEY_010";
break;
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return "CLO_H4F_PEY_011";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
return "CLO_H4F_T_13_0";
break;
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
return "CLO_H4F_T_13_1";
break;
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
return "CLO_H4F_T_13_2";
break;
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
return "CLO_H4F_T_13_3";
break;
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
return "CLO_H4F_T_13_4";
break;
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
return "CLO_H4F_T_13_5";
break;
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
return "CLO_H4F_T_13_6";
break;
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
return "CLO_H4F_T_13_7";
break;
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
return "CLO_H4F_T_13_8";
break;
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
return "CLO_H4F_T_13_9";
break;
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
return "CLO_H4F_T_13_10";
break;
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
return "CLO_H4F_T_13_11";
break;
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
return "CLO_H4F_T_13_12";
break;
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
return "CLO_H4F_T_13_13";
break;
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
return "CLO_H4F_T_13_14";
break;
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return "CLO_H4F_T_13_15";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
return "CLO_H4M_B_4_0";
break;
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
return "CLO_H4M_B_4_1";
break;
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
return "CLO_H4M_B_4_2";
break;
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
return "CLO_H4M_B_4_3";
break;
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
return "CLO_H4M_B_4_4";
break;
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
return "CLO_H4M_B_4_5";
break;
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
return "CLO_H4M_B_4_6";
break;
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
return "CLO_H4M_B_4_7";
break;
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
return "CLO_H4M_B_4_8";
break;
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
return "CLO_H4M_B_4_9";
break;
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
return "CLO_H4M_B_4_10";
break;
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
return "CLO_H4M_B_4_11";
break;
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
return "CLO_H4M_B_4_12";
break;
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
return "CLO_H4M_B_4_13";
break;
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
return "CLO_H4M_B_4_14";
break;
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
return "CLO_H4M_B_4_15";
break;
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
return "CLO_H4M_B_4_16";
break;
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
return "CLO_H4M_B_4_17";
break;
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
return "CLO_H4M_B_4_18";
break;
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return "CLO_H4M_B_4_19";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
return "CLO_H4M_PEY_1_0";
break;
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
return "CLO_H4M_PEY_1_1";
break;
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
return "CLO_H4M_PEY_1_2";
break;
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
return "CLO_H4M_PEY_1_3";
break;
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
return "CLO_H4M_PEY_1_4";
break;
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
return "CLO_H4M_PEY_1_5";
break;
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
return "CLO_H4M_PEY_1_6";
break;
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
return "CLO_H4M_PEY_1_7";
break;
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
return "CLO_H4M_PEY_1_8";
break;
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
return "CLO_H4M_PEY_1_9";
break;
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
return "CLO_H4M_PEY_110";
break;
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
return "CLO_H4M_PEY_111";
break;
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
return "CLO_H4M_PEY_2_0";
break;
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
return "CLO_H4M_PEY_2_1";
break;
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
return "CLO_H4M_PEY_2_2";
break;
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
return "CLO_H4M_PEY_2_3";
break;
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
return "CLO_H4M_PEY_2_4";
break;
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
return "CLO_H4M_PEY_2_5";
break;
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
return "CLO_H4M_PEY_2_6";
break;
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
return "CLO_H4M_PEY_2_7";
break;
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
return "CLO_H4M_PEY_2_8";
break;
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
return "CLO_H4M_PEY_2_9";
break;
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
return "CLO_H4M_PEY_210";
break;
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
return "CLO_H4M_PEY_211";
break;
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
return "CLO_H4M_PEY_3_0";
break;
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
return "CLO_H4M_PEY_3_1";
break;
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
return "CLO_H4M_PEY_3_2";
break;
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
return "CLO_H4M_PEY_3_3";
break;
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
return "CLO_H4M_PEY_3_4";
break;
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
return "CLO_H4M_PEY_3_5";
break;
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
return "CLO_H4M_PEY_3_6";
break;
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
return "CLO_H4M_PEY_3_7";
break;
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
return "CLO_H4M_PEY_3_8";
break;
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
return "CLO_H4M_PEY_3_9";
break;
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
return "CLO_H4M_PEY_310";
break;
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return "CLO_H4M_PEY_311";
break;
}
switch (iParam0){
case -1265443416:
return "CLO_SUM_DECL_0";
break;
case 676807987:
return "CLO_SUF_DECL_0";
break;
case 1888753218:
return "CLO_SUM_DECL_1";
break;
case 272160153:
return "CLO_SUF_DECL_1";
break;
case -552467991:
return "CLO_SUM_DECL_2";
break;
case 1593344440:
return "CLO_SUF_DECL_2";
break;
case -1655919948:
return "CLO_SUM_DECL_3";
break;
case 546222390:
return "CLO_SUF_DECL_3";
break;
case -917106601:
return "CLO_SUM_DECL_4";
break;
case 1983375900:
return "CLO_SUF_DECL_4";
break;
case 1595446967:
return "CLO_SUM_DECL_5";
break;
case -620589387:
return "CLO_SUF_DECL_5";
break;
case -530593323:
return "CLO_SUM_DECL_6";
break;
case 383923929:
return "CLO_SUF_DECL_6";
break;
case 561619447:
return "CLO_SUM_DECL_7";
break;
case -1703406594:
return "CLO_SUF_DECL_7";
break;
case -1913656173:
return "CLO_SUM_DECL_8";
break;
case -398286533:
return "CLO_SUF_DECL_8";
break;
case -1766901922:
return "CLO_SUM_DECL_9";
break;
case -80478106:
return "CLO_SUF_DECL_9";
break;
case 2091781849:
return "CLO_SUM_DECL_10";
break;
case 1835331655:
return "CLO_SUF_DECL_10";
break;
case 1824588341:
return "CLO_SUM_DECL_11";
break;
case -1650596870:
return "CLO_SUF_DECL_11";
break;
case 242597641:
return "CLO_SUM_DECL_12";
break;
case 1231926496:
return "CLO_SUF_DECL_12";
break;
case 566785691:
return "CLO_SUM_DECL_13";
break;
case -1506181253:
return "CLO_SUF_DECL_13";
break;
case -2091312957:
return "CLO_SUM_DECL_14";
break;
case -1737145605:
return "CLO_SUF_DECL_14";
break;
case -2079214831:
return "CLO_SUM_DECL_15";
break;
case 1673851512:
return "CLO_SUF_DECL_15";
break;
case 1359156274:
return "CLO_SUM_DECL_16";
break;
case 1023339598:
return "CLO_SUF_DECL_16";
break;
case -1302300594:
return "CLO_SUM_DECL_17";
break;
case -163738770:
return "CLO_SUF_DECL_17";
break;
case -1351518396:
return "CLO_SUM_DECL_18";
break;
case 1863218823:
return "CLO_SUF_DECL_18";
break;
case -797874817:
return "CLO_SUM_DECL_19";
break;
case 333966447:
return "CLO_SUF_DECL_19";
break;
case -385507297:
return "CLO_SUM_DECL_20";
break;
case 1412626052:
return "CLO_SUF_DECL_20";
break;
case 2011910758:
return "CLO_SUM_DECL_21";
break;
case -39100956:
return "CLO_SUF_DECL_21";
break;
case -1953985443:
return "CLO_SUM_DECL_22";
break;
case 1631533003:
return "CLO_SUF_DECL_22";
break;
case -1124222352:
return "CLO_SUM_DECL_23";
break;
case 1493430918:
return "CLO_SUF_DECL_23";
break;
case -1806994767:
return "CLO_SUM_DECL_24";
break;
case -196693334:
return "CLO_SUF_DECL_24";
break;
case -1445761968:
return "CLO_SUM_DECL_25";
break;
case 553507495:
return "CLO_SUF_DECL_25";
break;
case -89186417:
return "CLO_SUM_DECL_26";
break;
case 2003474700:
return "CLO_SUF_DECL_26";
break;
case -308083083:
return "CLO_SUM_DECL_27";
break;
case 1121792228:
return "CLO_SUF_DECL_27";
break;
case 667714507:
return "CLO_SUM_DECL_28";
break;
case -1424651669:
return "CLO_SUF_DECL_28";
break;
case -1610210252:
return "CLO_SUM_DECL_29";
break;
case -1454164346:
return "CLO_SUF_DECL_29";
break;
case joaat("dlc_mp_sum_m_berd_3_4"):
return "CLO_SUM_B_3_4";
break;
case joaat("dlc_mp_sum_f_berd_3_4"):
return "CLO_SUF_B_3_4";
break;
case joaat("dlc_mp_sum_m_berd_3_5"):
return "CLO_SUM_B_3_5";
break;
case joaat("dlc_mp_sum_f_berd_3_5"):
return "CLO_SUF_B_3_5";
break;
case joaat("dlc_mp_sum_m_berd_3_6"):
return "CLO_SUM_B_3_6";
break;
case joaat("dlc_mp_sum_f_berd_3_6"):
return "CLO_SUF_B_3_6";
break;
case joaat("dlc_mp_sum_m_berd_3_7"):
return "CLO_SUM_B_3_7";
break;
case joaat("dlc_mp_sum_f_berd_3_7"):
return "CLO_SUF_B_3_7";
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
return "CLO_SUM_L_1_25";
break;
case joaat("dlc_mp_sum_f_legs_2_25"):
return "CLO_SUF_L_2_25";
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
return "CLO_SUM_U_0_25";
break;
case joaat("dlc_mp_sum_f_jbib_0_25"):
return "CLO_SUF_U_0_25";
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
return "CLO_VWM_D_1_0";
break;
case joaat("dlc_mp_vwd_f_decl_1_0"):
return "CLO_VWF_D_1_0";
break;
case joaat("dlc_mp_vwd_m_decl_1_6"):
return "CLO_VWM_D_1_6";
break;
case joaat("dlc_mp_vwd_f_decl_1_6"):
return "CLO_VWF_D_1_6";
break;
case joaat("dlc_mp_vwd_m_decl_1_7"):
return "CLO_VWM_D_1_7";
break;
case joaat("dlc_mp_vwd_f_decl_1_7"):
return "CLO_VWF_D_1_7";
break;
case joaat("dlc_mp_vwd_m_decl_1_8"):
return "CLO_VWM_D_1_8";
break;
case joaat("dlc_mp_vwd_f_decl_1_8"):
return "CLO_VWF_D_1_8";
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
return "CLO_VWM_U_23_5";
break;
case joaat("dlc_mp_vwd_f_jbib_21_5"):
return "CLO_VWF_U_21_5";
break;
case joaat("dlc_mp_vwd_m_jbib_23_8"):
return "CLO_VWM_U_23_8";
break;
case joaat("dlc_mp_vwd_f_jbib_21_8"):
return "CLO_VWF_U_21_8";
break;
case joaat("dlc_mp_vwd_m_jbib_23_9"):
return "CLO_VWM_U_23_9";
break;
case joaat("dlc_mp_vwd_f_jbib_21_9"):
return "CLO_VWF_U_21_9";
break;
case joaat("dlc_mp_vwd_m_jbib_23_10"):
return "CLO_VWM_U_23_10";
break;
case joaat("dlc_mp_vwd_f_jbib_21_10"):
return "CLO_VWF_U_21_10";
break;
case joaat("dlc_mp_vwd_m_decl_1_11"):
return "CLO_VWM_D_1_11";
break;
case joaat("dlc_mp_vwd_f_decl_1_11"):
return "CLO_VWF_D_1_11";
break;
case joaat("dlc_mp_vwd_m_decl_1_12"):
return "CLO_VWM_D_1_12";
break;
case joaat("dlc_mp_vwd_f_decl_1_12"):
return "CLO_VMF_D_1_12";
break;
case joaat("dlc_mp_vwd_m_decl_1_13"):
return "CLO_VWM_D_1_13";
break;
case joaat("dlc_mp_vwd_f_decl_1_13"):
return "CLO_VWF_D_1_13";
break;
case joaat("dlc_mp_vwd_m_decl_1_14"):
return "CLO_VWM_D_1_14";
break;
case joaat("dlc_mp_vwd_f_decl_1_14"):
return "CLO_VWF_D_1_14";
break;
case joaat("dlc_mp_vwd_m_decl_1_15"):
return "CLO_VWM_D_1_15";
break;
case joaat("dlc_mp_vwd_f_decl_1_15"):
return "CLO_VWF_D_1_15";
break;
case joaat("dlc_mp_vwd_m_decl_1_16"):
return "CLO_VWM_D_1_16";
break;
case joaat("dlc_mp_vwd_f_decl_1_16"):
return "CLO_VWF_D_1_16";
break;
case joaat("dlc_mp_vwd_m_decl_1_17"):
return "CLO_VWM_D_1_17";
break;
case joaat("dlc_mp_vwd_f_decl_1_17"):
return "CLO_VWF_D_1_17";
break;
case joaat("dlc_mp_vwd_m_decl_1_18"):
return "CLO_VWM_D_1_18";
break;
case joaat("dlc_mp_vwd_f_decl_1_18"):
return "CLO_VWF_D_1_18";
break;
case joaat("dlc_mp_vwd_m_jbib_23_0"):
return "CLO_VWM_U_23_0";
break;
case joaat("dlc_mp_vwd_f_jbib_21_0"):
return "CLO_VMF_U_21_0";
break;
case joaat("dlc_mp_vwd_m_jbib_23_2"):
return "CLO_VWM_U_23_2";
break;
case joaat("dlc_mp_vwd_f_jbib_21_2"):
return "CLO_VMF_U_21_2";
break;
case joaat("dlc_mp_vwd_m_jbib_23_4"):
return "CLO_VWM_U_23_4";
break;
case joaat("dlc_mp_vwd_f_jbib_21_4"):
return "CLO_VMF_U_21_4";
break;
case joaat("dlc_mp_vwd_m_jbib_23_7"):
return "CLO_VWM_U_23_7";
break;
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return "CLO_VMF_U_21_7";
break;
}
switch (iParam0){
case joaat("MP_Christmas2018_Tee_000_M"):
return "CLO_AWM_DECL_0";
case joaat("MP_Christmas2018_Tee_000_F"):
return "CLO_AWF_DECL_0";
case joaat("MP_Christmas2018_Tee_001_M"):
return "CLO_AWM_DECL_1";
case joaat("MP_Christmas2018_Tee_001_F"):
return "CLO_AWF_DECL_1";
case joaat("MP_Christmas2018_Tee_002_M"):
return "CLO_AWM_DECL_2";
case joaat("MP_Christmas2018_Tee_002_F"):
return "CLO_AWF_DECL_2";
case joaat("MP_Christmas2018_Tee_003_M"):
return "CLO_AWM_DECL_3";
case joaat("MP_Christmas2018_Tee_003_F"):
return "CLO_AWF_DECL_3";
case joaat("MP_Christmas2018_Tee_004_M"):
return "CLO_AWM_DECL_4";
case joaat("MP_Christmas2018_Tee_004_F"):
return "CLO_AWF_DECL_4";
case joaat("MP_Christmas2018_Tee_005_M"):
return "CLO_AWM_DECL_5";
case joaat("MP_Christmas2018_Tee_005_F"):
return "CLO_AWF_DECL_5";
case joaat("MP_Christmas2018_Tee_006_M"):
return "CLO_AWM_DECL_6";
case joaat("MP_Christmas2018_Tee_006_F"):
return "CLO_AWF_DECL_6";
case joaat("MP_Christmas2018_Tee_007_M"):
return "CLO_AWM_DECL_7";
case joaat("MP_Christmas2018_Tee_007_F"):
return "CLO_AWF_DECL_7";
case joaat("MP_Christmas2018_Tee_008_M"):
return "CLO_AWM_DECL_8";
case joaat("MP_Christmas2018_Tee_008_F"):
return "CLO_AWF_DECL_8";
case joaat("MP_Christmas2018_Tee_009_M"):
return "CLO_AWM_DECL_9";
case joaat("MP_Christmas2018_Tee_009_F"):
return "CLO_AWF_DECL_9";
case joaat("MP_Christmas2018_Tee_010_M"):
return "CLO_AWM_DECL_10";
case joaat("MP_Christmas2018_Tee_010_F"):
return "CLO_AWF_DECL_10";
case joaat("MP_Christmas2018_Tee_011_M"):
return "CLO_AWM_DECL_11";
case joaat("MP_Christmas2018_Tee_011_F"):
return "CLO_AWF_DECL_11";
case joaat("MP_Christmas2018_Tee_012_M"):
return "CLO_AWM_DECL_12";
case joaat("MP_Christmas2018_Tee_012_F"):
return "CLO_AWF_DECL_12";
case joaat("MP_Christmas2018_Tee_013_M"):
return "CLO_AWM_DECL_13";
case joaat("MP_Christmas2018_Tee_013_F"):
return "CLO_AWF_DECL_13";
case joaat("MP_Christmas2018_Tee_014_M"):
return "CLO_AWM_DECL_14";
case joaat("MP_Christmas2018_Tee_014_F"):
return "CLO_AWF_DECL_14";
case joaat("MP_Christmas2018_Tee_015_M"):
return "CLO_AWM_DECL_15";
case joaat("MP_Christmas2018_Tee_015_F"):
return "CLO_AWF_DECL_15";
case joaat("MP_Christmas2018_Tee_016_M"):
return "CLO_AWM_DECL_16";
case joaat("MP_Christmas2018_Tee_016_F"):
return "CLO_AWF_DECL_16";
case joaat("MP_Christmas2018_Tee_017_M"):
return "CLO_AWM_DECL_17";
case joaat("MP_Christmas2018_Tee_017_F"):
return "CLO_AWF_DECL_17";
case joaat("MP_Christmas2018_Tee_018_M"):
return "CLO_AWM_DECL_18";
case joaat("MP_Christmas2018_Tee_018_F"):
return "CLO_AWF_DECL_18";
case joaat("MP_Christmas2018_Tee_019_M"):
return "CLO_AWM_DECL_19";
case joaat("MP_Christmas2018_Tee_019_F"):
return "CLO_AWF_DECL_19";
case joaat("MP_Christmas2018_Tee_020_M"):
return "CLO_AWM_DECL_20";
case joaat("MP_Christmas2018_Tee_020_F"):
return "CLO_AWF_DECL_20";
case joaat("MP_Christmas2018_Tee_021_M"):
return "CLO_AWM_DECL_21";
case joaat("MP_Christmas2018_Tee_021_F"):
return "CLO_AWF_DECL_21";
case joaat("MP_Christmas2018_Tee_022_M"):
return "CLO_AWM_DECL_22";
case joaat("MP_Christmas2018_Tee_022_F"):
return "CLO_AWF_DECL_22";
case joaat("MP_Christmas2018_Tee_023_M"):
return "CLO_AWM_DECL_23";
case joaat("MP_Christmas2018_Tee_023_F"):
return "CLO_AWF_DECL_23";
case joaat("MP_Christmas2018_Tee_024_M"):
return "CLO_AWM_DECL_24";
case joaat("MP_Christmas2018_Tee_024_F"):
return "CLO_AWF_DECL_24";
case joaat("MP_Christmas2018_Tee_025_M"):
return "CLO_AWM_DECL_25";
case joaat("MP_Christmas2018_Tee_025_F"):
return "CLO_AWF_DECL_25";
case joaat("MP_Christmas2018_Tee_026_M"):
return "CLO_AWM_DECL_26";
case joaat("MP_Christmas2018_Tee_026_F"):
return "CLO_AWF_DECL_26";
case joaat("MP_Christmas2018_Tee_027_M"):
return "CLO_AWM_DECL_27";
case joaat("MP_Christmas2018_Tee_027_F"):
return "CLO_AWF_DECL_27";
case joaat("MP_Christmas2018_Tee_028_M"):
return "CLO_AWM_DECL_28";
case joaat("MP_Christmas2018_Tee_028_F"):
return "CLO_AWF_DECL_28";
case joaat("MP_Christmas2018_Tee_029_M"):
return "CLO_AWM_DECL_29";
case joaat("MP_Christmas2018_Tee_029_F"):
return "CLO_AWF_DECL_29";
case joaat("MP_Christmas2018_Tee_030_M"):
return "CLO_AWM_DECL_30";
case joaat("MP_Christmas2018_Tee_030_F"):
return "CLO_AWF_DECL_30";
case joaat("MP_Christmas2018_Tee_031_M"):
return "CLO_AWM_DECL_31";
case joaat("MP_Christmas2018_Tee_031_F"):
return "CLO_AWF_DECL_31";
case joaat("MP_Christmas2018_Tee_032_M"):
return "CLO_AWM_DECL_32";
case joaat("MP_Christmas2018_Tee_032_F"):
return "CLO_AWF_DECL_32";
case joaat("MP_Christmas2018_Tee_033_M"):
return "CLO_AWM_DECL_33";
case joaat("MP_Christmas2018_Tee_033_F"):
return "CLO_AWF_DECL_33";
case joaat("MP_Christmas2018_Tee_034_M"):
return "CLO_AWM_DECL_34";
case joaat("MP_Christmas2018_Tee_034_F"):
return "CLO_AWF_DECL_34";
case joaat("MP_Christmas2018_Tee_035_M"):
return "CLO_AWM_DECL_35";
case joaat("MP_Christmas2018_Tee_035_F"):
return "CLO_AWF_DECL_35";
case joaat("MP_Christmas2018_Tee_036_M"):
return "CLO_AWM_DECL_36";
case joaat("MP_Christmas2018_Tee_036_F"):
return "CLO_AWF_DECL_36";
case joaat("MP_Christmas2018_Tee_037_M"):
return "CLO_AWM_DECL_37";
case joaat("MP_Christmas2018_Tee_037_F"):
return "CLO_AWF_DECL_37";
case joaat("MP_Christmas2018_Tee_038_M"):
return "CLO_AWM_DECL_38";
case joaat("MP_Christmas2018_Tee_038_F"):
return "CLO_AWF_DECL_38";
case joaat("MP_Christmas2018_Tee_039_M"):
return "CLO_AWM_DECL_39";
case joaat("MP_Christmas2018_Tee_039_F"):
return "CLO_AWF_DECL_39";
case joaat("MP_Christmas2018_Tee_040_M"):
return "CLO_AWM_DECL_40";
case joaat("MP_Christmas2018_Tee_040_F"):
return "CLO_AWF_DECL_40";
case joaat("MP_Christmas2018_Tee_041_M"):
return "CLO_AWM_DECL_41";
case joaat("MP_Christmas2018_Tee_041_F"):
return "CLO_AWF_DECL_41";
case joaat("MP_Christmas2018_Tee_042_M"):
return "CLO_AWM_DECL_42";
case joaat("MP_Christmas2018_Tee_042_F"):
return "CLO_AWF_DECL_42";
case joaat("MP_Christmas2018_Tee_043_M"):
return "CLO_AWM_DECL_43";
case joaat("MP_Christmas2018_Tee_043_F"):
return "CLO_AWF_DECL_43";
case joaat("MP_Christmas2018_Tee_044_M"):
return "CLO_AWM_DECL_44";
case joaat("MP_Christmas2018_Tee_044_F"):
return "CLO_AWF_DECL_44";
case joaat("MP_Christmas2018_Tee_045_M"):
return "CLO_AWM_DECL_45";
case joaat("MP_Christmas2018_Tee_045_F"):
return "CLO_AWF_DECL_45";
case joaat("MP_Christmas2018_Tee_046_M"):
return "CLO_AWM_DECL_46";
case joaat("MP_Christmas2018_Tee_046_F"):
return "CLO_AWF_DECL_46";
case joaat("MP_Christmas2018_Tee_047_M"):
return "CLO_AWM_DECL_47";
case joaat("MP_Christmas2018_Tee_047_F"):
return "CLO_AWF_DECL_47";
case joaat("MP_Christmas2018_Tee_048_M"):
return "CLO_AWM_DECL_48";
case joaat("MP_Christmas2018_Tee_048_F"):
return "CLO_AWF_DECL_48";
case joaat("MP_Christmas2018_Tee_049_M"):
return "CLO_AWM_DECL_49";
case joaat("MP_Christmas2018_Tee_049_F"):
return "CLO_AWF_DECL_49";
case joaat("MP_Christmas2018_Tee_050_M"):
return "CLO_AWM_DECL_50";
case joaat("MP_Christmas2018_Tee_050_F"):
return "CLO_AWF_DECL_50";
case joaat("MP_Christmas2018_Tee_051_M"):
return "CLO_AWM_DECL_51";
case joaat("MP_Christmas2018_Tee_051_F"):
return "CLO_AWF_DECL_51";
case joaat("MP_Christmas2018_Tee_052_M"):
return "CLO_AWM_DECL_52";
case joaat("MP_Christmas2018_Tee_052_F"):
return "CLO_AWF_DECL_52";
case joaat("MP_Christmas2018_Tee_053_M"):
return "CLO_AWM_DECL_53";
case joaat("MP_Christmas2018_Tee_053_F"):
return "CLO_AWF_DECL_53";
case joaat("MP_Christmas2018_Tee_054_M"):
return "CLO_AWM_DECL_54";
case joaat("MP_Christmas2018_Tee_054_F"):
return "CLO_AWF_DECL_54";
case joaat("MP_Christmas2018_Tee_055_M"):
return "CLO_AWM_DECL_55";
case joaat("MP_Christmas2018_Tee_055_F"):
return "CLO_AWF_DECL_55";
case joaat("MP_Christmas2018_Tee_056_M"):
return "CLO_AWM_DECL_56";
case joaat("MP_Christmas2018_Tee_056_F"):
return "CLO_AWF_DECL_56";
case joaat("MP_Christmas2018_Tee_057_M"):
return "CLO_AWM_DECL_57";
case joaat("MP_Christmas2018_Tee_057_F"):
return "CLO_AWF_DECL_57";
case joaat("MP_Christmas2018_Tee_058_M"):
return "CLO_AWM_DECL_58";
case joaat("MP_Christmas2018_Tee_058_F"):
return "CLO_AWF_DECL_58";
case joaat("MP_Christmas2018_Tee_059_M"):
return "CLO_AWM_DECL_59";
case joaat("MP_Christmas2018_Tee_059_F"):
return "CLO_AWF_DECL_59";
case joaat("MP_Christmas2018_Tee_060_M"):
return "CLO_AWM_DECL_60";
case joaat("MP_Christmas2018_Tee_060_F"):
return "CLO_AWF_DECL_60";
case joaat("MP_Christmas2018_Tee_061_M"):
return "CLO_AWMDECL_61";
case joaat("MP_Christmas2018_Tee_061_F"):
return "CLO_AWF_DECL_61";
case joaat("MP_Christmas2018_Tee_062_M"):
return "CLO_AWM_DECL_62";
case joaat("MP_Christmas2018_Tee_062_F"):
return "CLO_AWF_DECL_62";
case joaat("MP_Christmas2018_Tee_063_M"):
return "CLO_AWM_DECL_63";
case joaat("MP_Christmas2018_Tee_063_F"):
return "CLO_AWF_DECL_63";
case joaat("MP_Christmas2018_Tee_064_M"):
return "CLO_AWM_DECL_64";
case joaat("MP_Christmas2018_Tee_064_F"):
return "CLO_AWF_DECL_64";
case joaat("MP_Christmas2018_Tee_065_M"):
return "CLO_AWM_DECL_65";
case joaat("MP_Christmas2018_Tee_065_F"):
return "CLO_AWF_DECL_65";
case joaat("MP_Christmas2018_Tee_066_M"):
return "CLO_AWM_DECL_66";
case joaat("MP_Christmas2018_Tee_066_F"):
return "CLO_AWF_DECL_66";
case joaat("MP_Christmas2018_Tee_067_M"):
return "CLO_AWM_DECL_67";
case joaat("MP_Christmas2018_Tee_067_F"):
return "CLO_AWF_DECL_67";
case joaat("MP_Christmas2018_Tee_068_M"):
return "CLO_AWM_DECL_68";
case joaat("MP_Christmas2018_Tee_068_F"):
return "CLO_AWF_DECL_68";
default:
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
return "CLO_X5F_U_16_0";
case joaat("dlc_mp_arena_m_jbib_16_0"):
return "CLO_X5M_U_16_0";
case joaat("dlc_mp_arena_f_jbib_16_1"):
return "CLO_X5F_U_16_1";
case joaat("dlc_mp_arena_m_jbib_16_1"):
return "CLO_X5M_U_16_1";
case joaat("dlc_mp_arena_f_jbib_16_2"):
return "CLO_X5F_U_16_2";
case joaat("dlc_mp_arena_m_jbib_16_2"):
return "CLO_X5M_U_16_2";
case joaat("dlc_mp_arena_f_jbib_16_3"):
return "CLO_X5F_U_16_3";
case joaat("dlc_mp_arena_m_jbib_16_3"):
return "CLO_X5M_U_16_3";
case joaat("dlc_mp_arena_f_jbib_16_4"):
return "CLO_X5F_U_16_4";
case joaat("dlc_mp_arena_m_jbib_16_4"):
return "CLO_X5M_U_16_4";
case joaat("dlc_mp_arena_f_jbib_16_5"):
return "CLO_X5F_U_16_5";
case joaat("dlc_mp_arena_m_jbib_16_5"):
return "CLO_X5M_U_16_5";
case joaat("dlc_mp_arena_f_jbib_16_6"):
return "CLO_X5F_U_16_6";
case joaat("dlc_mp_arena_m_jbib_16_6"):
return "CLO_X5M_U_16_6";
case joaat("dlc_mp_arena_f_jbib_16_7"):
return "CLO_X5F_U_16_7";
case joaat("dlc_mp_arena_m_jbib_16_7"):
return "CLO_X5M_U_16_7";
case joaat("dlc_mp_arena_f_jbib_16_8"):
return "CLO_X5F_U_16_8";
case joaat("dlc_mp_arena_m_jbib_16_8"):
return "CLO_X5M_U_16_8";
case joaat("dlc_mp_arena_f_jbib_16_9"):
return "CLO_X5F_U_16_9";
case joaat("dlc_mp_arena_m_jbib_16_9"):
return "CLO_X5M_U_16_9";
case joaat("dlc_mp_arena_f_jbib_16_10"):
return "CLO_X5F_U_16_10";
case joaat("dlc_mp_arena_m_jbib_16_10"):
return "CLO_X5M_U_16_10";
case joaat("dlc_mp_arena_f_jbib_16_11"):
return "CLO_X5F_U_16_11";
case joaat("dlc_mp_arena_m_jbib_16_11"):
return "CLO_X5M_U_16_11";
case joaat("dlc_mp_arena_f_jbib_16_12"):
return "CLO_X5F_U_16_12";
case joaat("dlc_mp_arena_m_jbib_16_12"):
return "CLO_X5M_U_16_12";
case joaat("dlc_mp_arena_f_jbib_16_13"):
return "CLO_X5F_U_16_13";
case joaat("dlc_mp_arena_m_jbib_16_13"):
return "CLO_X5M_U_16_13";
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
return "CLO_BHM_DECL_0";
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
return "CLO_BHM_DECL_1";
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
return "CLO_BHM_DECL_2";
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
return "CLO_BHM_DECL_3";
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
return "CLO_BHM_DECL_4";
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
return "CLO_BHM_DECL_5";
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
return "CLO_BHM_DECL_6";
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
return "CLO_BHM_DECL_7";
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
return "CLO_BHM_DECL_8";
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
return "CLO_BHM_DECL_9";
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
return "CLO_BHM_DECL_10";
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
return "CLO_BHM_DECL_11";
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
return "CLO_BHM_DECL_12";
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
return "CLO_BHM_DECL_13";
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
return "CLO_BHM_DECL_14";
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
return "CLO_BHM_DECL_15";
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
return "CLO_BHM_DECL_16";
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
return "CLO_BHM_DECL_17";
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
return "CLO_BHM_DECL_18";
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
return "CLO_BHM_DECL_19";
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
return "CLO_BHM_DECL_20";
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
return "BBNCSHIRT3";
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
return "BBNCSHIRT4";
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
return "BBNCSHIRT5";
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
return "BBNCSHIRT1";
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
return "BBNCSHIRT7";
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
return "BBNCSHIRT2";
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
return "BBNCSHIRT6";
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
return "BBNCSHIRT8";
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
return "BBNCSHIRT9";
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
return "CLO_BHF_DECL_30";
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
return "CLO_BHF_DECL_31";
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
return "CLO_BHF_DECL_32";
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
return "CLO_BHF_DECL_33";
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
return "CLO_BHF_DECL_34";
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
return "CLO_BHF_DECL_35";
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
return "CLO_BHF_DECL_36";
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
return "CLO_BHF_DECL_37";
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
return "CLO_BHF_DECL_38";
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
return "CLO_BHF_DECL_39";
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
return "CLO_BHF_DECL_40";
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
return "CLO_BHF_DECL_41";
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
return "CLO_BHF_DECL_42";
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
return "CLO_BHF_DECL_43";
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
return "CLO_BHF_DECL_44";
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
return "CLO_BHF_DECL_45";
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
return "CLO_BHF_DECL_46";
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
return "CLO_BHF_DECL_47";
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
return "CLO_BHF_DECL_48";
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
return "CLO_BHF_DECL_49";
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
return "CLO_BHF_DECL_50";
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
return "CLO_BHF_DECL_51";
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
return "CLO_BHF_DECL_52";
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
return "CLO_BHF_DECL_53";
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
return "CLO_BHF_DECL_54";
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
return "CLO_BHF_DECL_55";
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
return "CLO_BHF_DECL_56";
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
return "CLO_BHF_DECL_57";
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
return "CLO_BHF_DECL_58";
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
return "CLO_BHF_DECL_59";
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
return "CLO_BHF_DECL_60";
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
return "CLO_BHF_DECL_61";
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_m_jbib_5_0"):
return "CLO_X17M_O_M_0";
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
return "CLO_X17F_O_M_0";
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
return "CLO_X17M_O_M_1";
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
return "CLO_X17F_O_M_1";
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
return "CLO_X17M_O_M_2";
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
return "CLO_X17F_O_M_2";
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
return "CLO_X17M_O_M_3";
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
return "CLO_X17F_O_M_3";
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
return "CLO_X17M_O_M_4";
case joaat("dlc_mp_x17_f_outfit_morph_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return "CLO_X17F_O_M_4";
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
return "CLO_LTSM_O_14";
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
return "UNLOCK_AWD_KRAMP1";
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
return "UNLOCK_AWD_KRAMP2";
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
return "UNLOCK_AWD_KRAMP3";
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return "UNLOCK_AWD_KRAMP4";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
return "CLO_GRM_PH_6_0";
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
return "CLO_GRF_PH_6_0";
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
return "CLO_GRM_PH_6_2";
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
return "CLO_GRF_PH_6_2";
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
return "CLO_GRM_PH_6_4";
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
return "CLO_GRF_PH_6_4";
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
return "CLO_GRM_PH_6_5";
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
return "CLO_GRF_PH_6_5";
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
return "CLO_GRM_PH_6_6";
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
return "CLO_GRF_PH_6_6";
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
return "CLO_GRM_PH_6_7";
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
return "CLO_GRF_PH_6_7";
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
return "CLO_GRM_PH_6_8";
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
return "CLO_GRF_PH_6_8";
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
return "CLO_GRM_PH_6_10";
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return "CLO_GRF_PH_6_10";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
return "CLO_GRF_U_25_0";
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
return "CLO_GRF_U_25_1";
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return "CLO_GRM_U_20_0";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
return "CLO_GRF_DECL_19";
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
return "CLO_GRM_DECL_20";
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
return "CLO_GRM_DECL_21";
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
return "CLO_GRF_DECL_22";
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
return "CLO_GRM_DECL_23";
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
return "CLO_GRM_DECL_25";
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
return "CLO_GRM_DECL_27";
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return "CLO_GRM_DECL_29";
default:
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
return "CLO_GRF_DECL_0";
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
return "CLO_GRM_DECL_2";
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
return "CLO_GRF_DECL_3";
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
return "CLO_GRF_DECL_5";
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
return "CLO_GRF_DECL_6";
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
return "CLO_GRM_DECL_9";
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
return "CLO_GRM_DECL_10";
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
return "CLO_GRF_DECL_11";
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
return "CLO_GRF_DECL_12";
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
return "CLO_GRM_DECL_14";
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
return "CLO_GRM_DECL_15";
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
return "CLO_GRM_DECL_16";
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
return "CLO_GRM_DECL_10";
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
return "CLO_X4M_B_7_0";
case joaat("dlc_mp_ie_f_berd_7_0"):
return "CLO_X4F_B_7_0";
default:
}
switch (iParam0){
case joaat("MP_Biker_Award_000_M"):
return "CLO_BIM_DECL_57";
case joaat("MP_Biker_Award_000_F"):
return "CLO_BIF_DECL_56";
case joaat("MP_Biker_Award_001_M"):
return "CLO_BIM_DECL_57";
case joaat("MP_Biker_Award_001_F"):
return "CLO_BIF_DECL_57";
default:
}
switch (iParam0){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
return "bikshirt4";
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
return "bikshirt5";
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
return "bikshirt7";
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
return "bikshirt6";
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
return "bikshirt3";
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
return "bikshirt2";
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
return "bikshirt1";
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
return "bikshirt0";
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
return "bikshirt8";
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
return "bikshirt9";
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
return "bikshirt10";
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
return "bikshirt11";
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
return "bikshirt12";
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
return "bikshirt13";
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
return "bikshirt14";
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
return "bikshirt15";
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
return "bikshirt16";
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
return "bikshirt17";
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
return "bikshirt18";
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
return "bikshirt19";
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
return "bikshirt20";
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return "bikshirt21";
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
return "CLO_STM_O_E_0";
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
return "CLO_STF_O_E_0";
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
return "CLO_STM_O_E_1";
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
return "CLO_STF_O_E_1";
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
return "CLO_STM_O_E_2";
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
return "CLO_STF_O_E_2";
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
return "CLO_STM_O_E_3";
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
return "CLO_STF_O_E_3";
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
return "CLO_STM_O_E_4";
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
return "CLO_STF_O_E_4";
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
return "CLO_STM_O_E_15";
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
return "CLO_STF_O_E_5";
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
return "CLO_STM_O_E_6";
case joaat("dlc_mp_stunt_f_outfit_e_6"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return "CLO_STF_O_E_6";
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_f_legs_1_0"):
return "CLO_EXF_EU_15_0";
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
return "CLO_EXM_EU_15_0";
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_f_legs_1_1"):
return "CLO_EXF_EU_15_1";
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
return "CLO_EXM_EU_15_1";
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_f_legs_1_2"):
return "CLO_EXF_EU_15_2";
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
return "CLO_EXM_EU_15_2";
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_f_legs_1_3"):
return "CLO_EXF_EU_15_3";
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
return "CLO_EXM_EU_15_3";
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_f_legs_1_4"):
return "CLO_EXF_EU_15_4";
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
return "CLO_EXM_EU_15_4";
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_f_legs_1_5"):
return "CLO_EXF_EU_15_5";
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
return "CLO_EXM_EU_15_5";
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_f_legs_1_6"):
return "CLO_EXF_EU_15_6";
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
return "CLO_EXM_EU_15_6";
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_f_legs_1_7"):
return "CLO_EXF_EU_15_7";
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
return "CLO_EXM_EU_15_7";
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_f_legs_1_8"):
return "CLO_EXF_EU_15_8";
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
return "CLO_EXM_EU_15_8";
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_f_legs_1_9"):
return "CLO_EXF_EU_15_9";
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
return "CLO_EXM_EU_15_9";
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_f_legs_1_10"):
return "CLO_EXF_EU_1510";
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
return "CLO_EXM_EU_1510";
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_f_legs_1_11"):
return "CLO_EXF_EU_1511";
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
return "CLO_EXM_EU_1511";
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_f_legs_1_12"):
return "CLO_EXF_EU_1512";
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
return "CLO_EXM_EU_1512";
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_f_legs_1_13"):
return "CLO_EXF_EU_1513";
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return "CLO_EXM_EU_1513";
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return "SMOKINGJACKUNLOCK";
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
return "UNLOKLOWHATS0";
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
return "UNLOKLOWHATS1";
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
return "UNLOKLOWHATS2";
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
return "UNLOKLOWHATS3";
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
return "UNLOKLOWHATS4";
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
return "UNLOKLOWHATS5";
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
return "UNLOKLOWHATS6";
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
return "UNLOKLOWHATS7";
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
return "UNLOKLOWHATS8";
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return "UNLOKLOWHATS9";
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
return "UNLOCK_NAME_BHAT1";
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
return "UNLOCK_NAME_BHAT2";
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
return "UNLOCK_NAME_BHAT3";
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
return "UNLOCK_NAME_BHAT4";
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
return "UNLOCK_NAME_BHAT5";
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return "UNLOCK_NAME_BHAT6";
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return "BBSHIRTUN15";
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return "BBSHIRTUN6";
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return "BBSHIRTUN1";
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return "BBSHIRTUN2";
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return "BBSHIRTUN4";
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return "BBSHIRTUN3";
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return "BBSHIRTUN0";
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return "BBSHIRTUN10";
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return "BBSHIRTUN8";
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return "BBSHIRTUN9";
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return "BBSHIRTUN14";
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return "BBSHIRTUN12";
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return "BBSHIRTUN5";
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return "BBSHIRTUN13";
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return "BBSHIRTUN7";
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return "UNLOCK_NAME_SHIRT14";
default:
}
switch (iParam0){
case 1743008394:
return "CLO_X3F_U_1_0";
case 1084175393:
return "CLO_X3M_U_1_0";
case -1090232119:
return "CLO_X3F_U_1_1";
case 787255484:
return "CLO_X3M_U_1_1";
case -1133356123:
return "CLO_X3F_U_1_2";
case -566366372:
return "CLO_X3M_U_1_2";
default:
}
switch (iParam0){
case 1970268516:
return "CLO_X2F_HT_4_0";
case 2026483804:
return "CLO_X2F_HT_5_0";
case 1831101822:
return "CLO_X2M_HT_4_0";
case 1411612772:
return "CLO_X2M_HT_5_0";
case 1875861023:
return "CLO_X2F_HT_4_3";
case -1385031204:
return "CLO_X2F_HT_5_3";
case -703154335:
return "CLO_X2M_HT_4_3";
case 798340921:
return "CLO_X2M_HT_5_3";
case -1208373599:
return "CLO_X3M_B_10_0";
case 1656518170:
return "CLO_X3F_B_10_0";
case -970054678:
return "CLO_X2M_B_1_0";
case -840010097:
return "CLO_X2F_B_1_0";
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
return "CLO_INDF_HT_6_0";
case joaat("dlc_mp_ind_m_phead_6_0"):
return "CLO_INDM_HT_6_0";
case joaat("dlc_mp_ind_f_phead_6_1"):
return "CLO_INDF_HT_6_1";
case joaat("dlc_mp_ind_m_phead_6_1"):
return "CLO_INDM_HT_6_1";
case joaat("dlc_mp_ind_f_phead_6_2"):
return "CLO_INDF_HT_6_2";
case joaat("dlc_mp_ind_m_phead_6_2"):
return "CLO_INDM_HT_6_2";
case joaat("dlc_mp_ind_f_phead_6_3"):
return "CLO_INDF_HT_6_3";
case joaat("dlc_mp_ind_m_phead_6_3"):
return "CLO_INDM_HT_6_3";
case joaat("dlc_mp_ind_f_phead_6_4"):
return "CLO_INDF_HT_6_4";
case joaat("dlc_mp_ind_m_phead_6_4"):
return "CLO_INDM_HT_6_4";
case joaat("dlc_mp_ind_f_phead_6_5"):
return "CLO_INDF_HT_6_5";
case joaat("dlc_mp_ind_m_phead_6_5"):
return "CLO_INDM_HT_6_5";
default:
}
return "UNLOCK_AWD_SHIRT";
}


void func_414(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_19();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_415(int iParam0){
switch (iParam0){
case 1605135005:
case 461611711:
return 36759;
break;
}
switch (iParam0){
case -1655013310:
case -8081421:
return 36703;
break;
case 1136959044:
case 1252591238:
return 36704;
break;
case -1662464917:
case 439944869:
return 36718;
break;
case 1311829745:
case 1376594947:
return 36737;
break;
case 925416247:
case -993141292:
case -794186434:
return 36738;
break;
case 1544949032:
case 609473027:
return 36751;
break;
case 1505804828:
case -1839009993:
return 36752;
break;
case -1759130267:
case -2109654177:
return 36763;
break;
case 1207735097:
case -133674528:
return 36783;
break;
case 1033338279:
case 1956717889:
return 36784;
break;
case -36216721:
case 1244363453:
return 36782;
break;
case 1226096741:
case 1745898052:
return 36769;
break;
case 765528446:
case 1154188219:
return 36768;
break;
}
switch (iParam0){
case -197848144:
case 2130504112:
return 36757;
break;
case 99858221:
case 213255460:
return 36758;
break;
case 1710404355:
case -1469882278:
return 36739;
break;
case -2101744495:
case -1661253242:
return 36740;
break;
case 841763679:
case 138092552:
return 36741;
break;
case 1069377153:
case 513166526:
return 36742;
break;
case -843709836:
case -410952059:
return 36743;
break;
case 673800403:
case -2099479637:
return 36775;
break;
}
switch (iParam0){
case 205194150:
case 1019798721:
case -782196529:
case -3146323:
case 1530696889:
case 1301510495:
case 339475450:
case 1494189484:
case -2124289883:
case 1353353015:
case -156491260:
case 1232357267:
return 36809;
break;
case -1069968045:
case -921734020:
return 36699;
break;
case -1509312284:
case 2103965964:
return 36700;
break;
case -1709127394:
case -727053399:
return 36701;
break;
case 425828250:
case -731306227:
return 36702;
break;
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
return 36715;
break;
case -1411572922:
case 1655606115:
return 36719;
break;
case -1687399299:
case -921932467:
return 36720;
break;
case -1516214043:
case -1757640274:
return 36721;
break;
case 654371756:
case 340755414:
return 36722;
break;
case -120058021:
case 583082169:
return 36723;
break;
case 44442359:
case 2145704703:
return 36724;
break;
case -723499156:
case -1907623987:
return 36725;
break;
case 222672970:
case 818396254:
return 36726;
break;
case -544285475:
case 514398241:
return 36727;
break;
case -375328511:
case -2081103177:
return 36728;
break;
case -1142876798:
case -2104434705:
return 36729;
break;
case -551157269:
case -1881446972:
return 36730;
break;
case 292021870:
case 1719833363:
return 36731;
break;
case -1035974624:
case 1956294467:
return 36732;
break;
case -192205643:
case 1894950891:
return 36733;
break;
case -947334499:
case 2114667036:
return 36734;
break;
case -111757768:
case -783423328:
return 36735;
break;
case -593232685:
case -1223936995:
return 36736;
break;
case -608876472:
case 1334957776:
return 36753;
break;
case 498873860:
case -126601887:
return 36754;
break;
case 1985248855:
case -875041851:
return 36755;
break;
case -1943948059:
case -2070991003:
return 36760;
break;
case -683062477:
case -617653084:
return 36761;
break;
case 388773720:
case -2098938846:
return 36762;
break;
case 652173018:
case -1189158251:
return 36764;
break;
case -315422177:
case -1832379936:
return 36765;
break;
case -1256711400:
case 1298977992:
return 36774;
break;
case 471019161:
case 692557212:
return 36777;
break;
case 165186084:
case -498759787:
return 36778;
break;
case 493498543:
case -292085704:
return 36779;
break;
case -2056426364:
case 1986396785:
return 36780;
break;
case -1883471582:
case -1397788925:
return 36781;
break;
case -1895527326:
case 1259618253:
return 36705;
break;
case -1416608391:
case -1905506688:
return 36706;
break;
case 1186233287:
case 952605492:
return 36707;
break;
case -1997903306:
case -1952569676:
return 36710;
break;
case -1975121276:
case 441259453:
return 36711;
break;
case -1734858968:
case -751171688:
return 36712;
break;
case 2066009771:
case -1497080576:
return 36713;
break;
case -231360453:
case -91981822:
return 36714;
break;
case -1963845403:
case 882420786:
return 36746;
break;
case 732574088:
case -824927683:
return 36747;
break;
case 492344549:
case -522764734:
return 36748;
break;
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
return 36744;
break;
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
return 36745;
break;
case -378776327:
case -1886485930:
return 36716;
break;
case 955216856:
case -756304130:
return 36749;
break;
case -1622267676:
case -1099489536:
return 36750;
break;
case 534801913:
case 430517623:
return 36770;
break;
case -602915326:
case 321893176:
return 36708;
break;
case 969275756:
case 44864034:
return 36709;
break;
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
return 36756;
break;
case 72595168:
case 1980524092:
return 36776;
break;
}
switch (iParam0){
case 1529075272:
case 28812113:
return 34505;
break;
case 1769388797:
case 183205348:
return 34375;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
return 34397;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
return 34398;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
return 34395;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
return 34396;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
return 34399;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return 34400;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return 34389;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
return 34410;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return 34409;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
return 34404;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
return 34403;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
return 34406;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
return 34408;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return 34405;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
return 34391;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
return 34394;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
return 34390;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
return 34392;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
return 34393;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
return 34730;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
return 34731;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
return 34732;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
return 34733;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
return 34736;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
return 34737;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
return 34734;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
return 34735;
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
return 34401;
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return 34402;
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return 34407;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
return 34451;
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
return 34452;
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
return 34453;
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
return 34454;
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
return 34418;
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
return 34419;
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
return 34420;
break;
case joaat("dlc_mp_sum2_m_berd_7_0"):
case joaat("dlc_mp_sum2_f_berd_7_0"):
return 34372;
break;
case joaat("dlc_mp_sum2_m_berd_8_0"):
case joaat("dlc_mp_sum2_f_berd_8_0"):
return 34421;
break;
case joaat("dlc_mp_sum2_m_berd_9_0"):
case joaat("dlc_mp_sum2_f_berd_9_0"):
return 34415;
break;
case joaat("dlc_mp_sum2_m_berd_9_1"):
case joaat("dlc_mp_sum2_f_berd_9_1"):
return 34416;
break;
case joaat("dlc_mp_sum2_m_berd_9_2"):
case joaat("dlc_mp_sum2_f_berd_9_2"):
return 34417;
break;
case joaat("dlc_mp_sum2_m_berd_10_0"):
case joaat("dlc_mp_sum2_f_berd_10_0"):
return 34425;
break;
case joaat("dlc_mp_sum2_m_berd_10_1"):
case joaat("dlc_mp_sum2_f_berd_10_1"):
return 34426;
break;
case joaat("dlc_mp_sum2_m_berd_10_2"):
case joaat("dlc_mp_sum2_f_berd_10_2"):
return 34427;
break;
case joaat("dlc_mp_sum2_m_berd_10_3"):
case joaat("dlc_mp_sum2_f_berd_10_3"):
return 34428;
break;
case joaat("dlc_mp_sum2_m_berd_10_4"):
case joaat("dlc_mp_sum2_f_berd_10_4"):
return 34429;
break;
case joaat("dlc_mp_sum2_m_berd_10_5"):
case joaat("dlc_mp_sum2_f_berd_10_5"):
return 34430;
break;
case joaat("dlc_mp_sum2_m_berd_10_6"):
case joaat("dlc_mp_sum2_f_berd_10_6"):
return 34431;
break;
case joaat("dlc_mp_sum2_m_berd_10_7"):
case joaat("dlc_mp_sum2_f_berd_10_7"):
return 34432;
break;
case joaat("dlc_mp_sum2_m_berd_10_8"):
case joaat("dlc_mp_sum2_f_berd_10_8"):
return 34433;
break;
case joaat("dlc_mp_sum2_m_berd_10_9"):
case joaat("dlc_mp_sum2_f_berd_10_9"):
return 34434;
break;
case joaat("dlc_mp_sum2_m_berd_10_10"):
case joaat("dlc_mp_sum2_f_berd_10_10"):
return 34435;
break;
case joaat("dlc_mp_sum2_m_berd_10_11"):
case joaat("dlc_mp_sum2_f_berd_10_11"):
return 34436;
break;
case joaat("dlc_mp_sum2_m_berd_10_12"):
case joaat("dlc_mp_sum2_f_berd_10_12"):
return 34437;
break;
case joaat("dlc_mp_sum2_m_berd_10_13"):
case joaat("dlc_mp_sum2_f_berd_10_13"):
return 34438;
break;
case joaat("dlc_mp_sum2_m_berd_10_14"):
case joaat("dlc_mp_sum2_f_berd_10_14"):
return 34439;
break;
case joaat("dlc_mp_sum2_m_berd_10_15"):
case joaat("dlc_mp_sum2_f_berd_10_15"):
return 34440;
break;
case joaat("dlc_mp_sum2_m_berd_10_16"):
case joaat("dlc_mp_sum2_f_berd_10_16"):
return 34441;
break;
case joaat("dlc_mp_sum2_m_berd_10_17"):
case joaat("dlc_mp_sum2_f_berd_10_17"):
return 34442;
break;
case joaat("dlc_mp_sum2_m_berd_10_18"):
case joaat("dlc_mp_sum2_f_berd_10_18"):
return 34443;
break;
case joaat("dlc_mp_sum2_m_berd_10_19"):
case joaat("dlc_mp_sum2_f_berd_10_19"):
return 34444;
break;
case joaat("dlc_mp_sum2_m_berd_10_20"):
case joaat("dlc_mp_sum2_f_berd_10_20"):
return 34445;
break;
case joaat("dlc_mp_sum2_m_berd_10_21"):
case joaat("dlc_mp_sum2_f_berd_10_21"):
return 34446;
break;
case joaat("dlc_mp_sum2_m_berd_10_22"):
case joaat("dlc_mp_sum2_f_berd_10_22"):
return 34447;
break;
case joaat("dlc_mp_sum2_m_berd_10_23"):
case joaat("dlc_mp_sum2_f_berd_10_23"):
return 34448;
break;
case joaat("dlc_mp_sum2_m_berd_10_24"):
case joaat("dlc_mp_sum2_f_berd_10_24"):
return 34449;
break;
case joaat("dlc_mp_sum2_m_berd_10_25"):
case joaat("dlc_mp_sum2_f_berd_10_25"):
return 34450;
break;
case joaat("dlc_mp_sum2_m_berd_0_0"):
case joaat("dlc_mp_sum2_f_berd_0_0"):
return 34423;
break;
case joaat("dlc_mp_sum2_m_berd_1_0"):
case joaat("dlc_mp_sum2_f_berd_1_0"):
return 34703;
break;
case joaat("dlc_mp_sum2_m_berd_1_1"):
case joaat("dlc_mp_sum2_f_berd_1_1"):
return 34704;
break;
case joaat("dlc_mp_sum2_m_berd_1_2"):
case joaat("dlc_mp_sum2_f_berd_1_2"):
return 34705;
break;
case joaat("dlc_mp_sum2_m_berd_3_0"):
case joaat("dlc_mp_sum2_f_berd_3_0"):
return 34424;
break;
case joaat("dlc_mp_sum2_m_berd_4_0"):
case joaat("dlc_mp_sum2_f_berd_4_0"):
return 34422;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return 34411;
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
case joaat("dlc_mp_sum2_f_legs_0_0"):
return 34506;
break;
case joaat("dlc_mp_sum2_m_legs_2_1"):
case joaat("dlc_mp_sum2_f_legs_0_1"):
return 34507;
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
case joaat("dlc_mp_sum2_f_jbib_15_0"):
case joaat("dlc_mp_sum2_f_jbib_16_0"):
return 34380;
break;
case joaat("dlc_mp_sum2_m_jbib_14_0"):
case joaat("dlc_mp_sum2_f_jbib_19_0"):
return 34388;
break;
case joaat("dlc_mp_sum2_m_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_16_0"):
case joaat("dlc_mp_sum2_f_jbib_20_0"):
return 34383;
break;
case joaat("dlc_mp_sum2_m_jbib_15_1"):
case joaat("dlc_mp_sum2_m_jbib_16_1"):
case joaat("dlc_mp_sum2_f_jbib_20_1"):
return 34381;
break;
case joaat("dlc_mp_sum2_m_jbib_15_2"):
case joaat("dlc_mp_sum2_m_jbib_16_2"):
case joaat("dlc_mp_sum2_f_jbib_20_2"):
return 34385;
break;
case joaat("dlc_mp_sum2_m_jbib_17_0"):
case joaat("dlc_mp_sum2_f_jbib_8_0"):
return 34382;
break;
case joaat("dlc_mp_sum2_m_jbib_7_0"):
case joaat("dlc_mp_sum2_m_jbib_8_0"):
case joaat("dlc_mp_sum2_f_jbib_24_0"):
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return 34384;
break;
case joaat("dlc_mp_sum2_m_phead_6_0"):
case joaat("dlc_mp_sum2_f_phead_6_0"):
return 34455;
break;
case joaat("dlc_mp_sum2_m_phead_6_1"):
case joaat("dlc_mp_sum2_f_phead_6_1"):
return 34456;
break;
case joaat("dlc_mp_sum2_m_phead_6_2"):
case joaat("dlc_mp_sum2_f_phead_6_2"):
return 34457;
break;
case joaat("dlc_mp_sum2_m_phead_6_3"):
case joaat("dlc_mp_sum2_f_phead_6_3"):
return 34458;
break;
case joaat("dlc_mp_sum2_m_phead_6_4"):
case joaat("dlc_mp_sum2_f_phead_6_4"):
return 34459;
break;
case joaat("dlc_mp_sum2_m_phead_6_5"):
case joaat("dlc_mp_sum2_f_phead_6_5"):
return 34460;
break;
case joaat("dlc_mp_sum2_m_phead_6_6"):
case joaat("dlc_mp_sum2_f_phead_6_6"):
return 34461;
break;
case joaat("dlc_mp_sum2_m_phead_6_7"):
case joaat("dlc_mp_sum2_f_phead_6_7"):
return 34462;
break;
case joaat("dlc_mp_sum2_m_phead_6_8"):
case joaat("dlc_mp_sum2_f_phead_6_8"):
return 34463;
break;
case joaat("dlc_mp_sum2_m_phead_6_9"):
case joaat("dlc_mp_sum2_f_phead_6_9"):
return 34464;
break;
case joaat("dlc_mp_sum2_m_phead_6_10"):
case joaat("dlc_mp_sum2_f_phead_6_10"):
return 34465;
break;
case joaat("dlc_mp_sum2_m_phead_6_11"):
case joaat("dlc_mp_sum2_f_phead_6_11"):
return 34466;
break;
case joaat("dlc_mp_sum2_m_phead_6_12"):
case joaat("dlc_mp_sum2_f_phead_6_12"):
return 34467;
break;
case joaat("dlc_mp_sum2_m_phead_6_13"):
case joaat("dlc_mp_sum2_f_phead_6_13"):
return 34468;
break;
case joaat("dlc_mp_sum2_m_phead_0_0"):
case joaat("dlc_mp_sum2_m_phead_1_0"):
case joaat("dlc_mp_sum2_f_phead_0_0"):
case joaat("dlc_mp_sum2_f_phead_1_0"):
return 34375;
break;
case joaat("dlc_mp_sum2_m_phead_2_0"):
case joaat("dlc_mp_sum2_m_phead_4_0"):
case joaat("dlc_mp_sum2_f_phead_2_0"):
case joaat("dlc_mp_sum2_f_phead_4_0"):
return 34508;
break;
case joaat("dlc_mp_sum2_m_phead_2_1"):
case joaat("dlc_mp_sum2_m_phead_4_1"):
case joaat("dlc_mp_sum2_f_phead_2_1"):
case joaat("dlc_mp_sum2_f_phead_4_1"):
return 34509;
break;
case joaat("dlc_mp_sum2_m_phead_3_0"):
case joaat("dlc_mp_sum2_m_phead_7_0"):
case joaat("dlc_mp_sum2_f_phead_3_0"):
case joaat("dlc_mp_sum2_f_phead_7_0"):
return 34510;
break;
case joaat("dlc_mp_sum2_m_phead_8_0"):
case joaat("dlc_mp_sum2_f_phead_8_0"):
return 34387;
break;
case joaat("dlc_mp_sum2_m_pears_0_0"):
case joaat("dlc_mp_sum2_f_pears_0_0"):
return 34469;
break;
case joaat("dlc_mp_sum2_m_pears_0_1"):
case joaat("dlc_mp_sum2_f_pears_0_1"):
return 34470;
break;
case joaat("dlc_mp_sum2_m_pears_0_2"):
case joaat("dlc_mp_sum2_f_pears_0_2"):
return 34471;
break;
case joaat("dlc_mp_sum2_m_pears_0_3"):
case joaat("dlc_mp_sum2_f_pears_0_3"):
return 34472;
break;
case joaat("dlc_mp_sum2_m_pears_0_4"):
case joaat("dlc_mp_sum2_f_pears_0_4"):
return 34473;
break;
case joaat("dlc_mp_sum2_m_pears_0_5"):
case joaat("dlc_mp_sum2_f_pears_0_5"):
return 34474;
break;
case joaat("dlc_mp_sum2_m_pears_0_6"):
case joaat("dlc_mp_sum2_f_pears_0_6"):
return 34475;
break;
case joaat("dlc_mp_sum2_m_pears_0_7"):
case joaat("dlc_mp_sum2_f_pears_0_7"):
return 34476;
break;
case joaat("dlc_mp_sum2_m_pears_0_8"):
case joaat("dlc_mp_sum2_f_pears_0_8"):
return 34477;
break;
case joaat("dlc_mp_sum2_m_pears_0_9"):
case joaat("dlc_mp_sum2_f_pears_0_9"):
return 34478;
break;
case joaat("dlc_mp_sum2_m_pears_0_10"):
case joaat("dlc_mp_sum2_f_pears_0_10"):
return 34479;
break;
case joaat("dlc_mp_sum2_m_pears_0_11"):
case joaat("dlc_mp_sum2_f_pears_0_11"):
return 34480;
break;
case joaat("dlc_mp_sum2_m_special_1_0"):
case joaat("dlc_mp_sum2_f_special_1_0"):
return 34386;
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
case joaat("dlc_mp_sum2_f_feet_5_0"):
return 34481;
break;
case joaat("dlc_mp_sum2_m_feet_5_1"):
case joaat("dlc_mp_sum2_f_feet_5_1"):
return 34482;
break;
case joaat("dlc_mp_sum2_m_feet_5_2"):
case joaat("dlc_mp_sum2_f_feet_5_2"):
return 34483;
break;
case joaat("dlc_mp_sum2_m_feet_5_3"):
case joaat("dlc_mp_sum2_f_feet_5_3"):
return 34484;
break;
case joaat("dlc_mp_sum2_m_feet_5_4"):
case joaat("dlc_mp_sum2_f_feet_5_4"):
return 34485;
break;
case joaat("dlc_mp_sum2_m_feet_5_5"):
case joaat("dlc_mp_sum2_f_feet_5_5"):
return 34486;
break;
case joaat("dlc_mp_sum2_m_feet_5_6"):
case joaat("dlc_mp_sum2_f_feet_5_6"):
return 34487;
break;
case joaat("dlc_mp_sum2_m_feet_5_7"):
case joaat("dlc_mp_sum2_f_feet_5_7"):
return 34488;
break;
case joaat("dlc_mp_sum2_m_feet_5_8"):
case joaat("dlc_mp_sum2_f_feet_5_8"):
return 34489;
break;
case joaat("dlc_mp_sum2_m_feet_6_0"):
case joaat("dlc_mp_sum2_f_feet_6_0"):
return 34490;
break;
case joaat("dlc_mp_sum2_m_feet_6_1"):
case joaat("dlc_mp_sum2_f_feet_6_1"):
return 34491;
break;
case joaat("dlc_mp_sum2_m_feet_6_2"):
case joaat("dlc_mp_sum2_f_feet_6_2"):
return 34492;
break;
case joaat("dlc_mp_sum2_m_feet_6_3"):
case joaat("dlc_mp_sum2_f_feet_6_3"):
return 34493;
break;
case joaat("dlc_mp_sum2_m_feet_6_4"):
case joaat("dlc_mp_sum2_f_feet_6_4"):
return 34494;
break;
case joaat("dlc_mp_sum2_m_feet_6_5"):
case joaat("dlc_mp_sum2_f_feet_6_5"):
return 34495;
break;
case joaat("dlc_mp_sum2_m_feet_6_6"):
case joaat("dlc_mp_sum2_f_feet_6_6"):
return 34496;
break;
case joaat("dlc_mp_sum2_m_feet_6_7"):
case joaat("dlc_mp_sum2_f_feet_6_7"):
return 34497;
break;
case joaat("dlc_mp_sum2_m_feet_6_8"):
case joaat("dlc_mp_sum2_f_feet_6_8"):
return 34498;
break;
case joaat("dlc_mp_sum2_m_feet_6_9"):
case joaat("dlc_mp_sum2_f_feet_6_9"):
return 34499;
break;
case joaat("dlc_mp_sum2_m_feet_6_10"):
case joaat("dlc_mp_sum2_f_feet_6_10"):
return 34500;
break;
case joaat("dlc_mp_sum2_m_feet_6_11"):
case joaat("dlc_mp_sum2_f_feet_6_11"):
return 34501;
break;
case joaat("dlc_mp_sum2_m_feet_6_12"):
case joaat("dlc_mp_sum2_f_feet_6_12"):
return 34502;
break;
case joaat("dlc_mp_sum2_m_feet_6_13"):
case joaat("dlc_mp_sum2_f_feet_6_13"):
return 34503;
break;
case joaat("dlc_mp_sum2_m_feet_6_14"):
case joaat("dlc_mp_sum2_f_feet_6_14"):
return 34504;
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
return 32309;
break;
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
return 32310;
break;
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return 32311;
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
return 32307;
break;
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return 32308;
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
return 32295;
break;
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
return 32296;
break;
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
return 32297;
break;
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
return 32298;
break;
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
return 32299;
break;
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
return 32300;
break;
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
return 32301;
break;
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
return 32302;
break;
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
return 32303;
break;
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
return 32304;
break;
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
return 32305;
break;
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return 32306;
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return 32273;
break;
case 991513037:
case -1634791241:
return 31768;
break;
case -675149090:
case -1227437948:
return 31769;
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return 31784;
break;
case -1686814509:
case -1408179706:
return 31770;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return 31777;
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return 31788;
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return 31787;
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return 31786;
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return 31785;
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return 31766;
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return 31767;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return 31789;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return 31790;
break;
case -1372800957:
return 31791;
break;
case -1125170035:
return 31792;
break;
case 1276052663:
return 31793;
break;
case 2138708412:
case -1894139601:
return 31771;
break;
case 205793848:
case -786254870:
return 31772;
break;
case 1325175663:
case -773154515:
return 31773;
break;
case -368088972:
case 1778247767:
return 31774;
break;
case -1771053026:
case -648092145:
return 31775;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return 31776;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
return 30703;
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
return 30704;
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
return 30700;
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
return 30701;
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
return 30702;
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
return 30699;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
return 30533;
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
return 30534;
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
return 30535;
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
return 30536;
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
return 30537;
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
return 30538;
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
return 30539;
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
return 30540;
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
return 30541;
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
return 30542;
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
return 30543;
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
return 30544;
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
return 30545;
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
return 30546;
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
return 30547;
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
return 30548;
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
return 30549;
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
return 30550;
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
return 30551;
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
return 30552;
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
return 30553;
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
return 30554;
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
return 30555;
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
return 30556;
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
return 30557;
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
return 30524;
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
return 30525;
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
return 30526;
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
return 30527;
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
return 30528;
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
return 30529;
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
return 30530;
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
return 30531;
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
return 30532;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
return 30563;
break;
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
return 30564;
break;
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
return 30565;
break;
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
return 30566;
break;
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
return 30567;
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
return 30568;
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
return 30569;
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
return 30570;
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
return 30571;
break;
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
return 30572;
break;
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
return 30573;
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return 30574;
break;
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
return 30575;
break;
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
return 30576;
break;
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
return 30577;
break;
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
return 30578;
break;
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
return 30579;
break;
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
return 30580;
break;
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
return 30581;
break;
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return 30582;
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
return 30583;
break;
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
return 30584;
break;
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
return 30585;
break;
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return 30586;
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
return 30587;
break;
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
return 30588;
break;
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
return 30589;
break;
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
return 30590;
break;
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return 30591;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
return 30592;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
return 30593;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
return 30594;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
return 30595;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
return 30596;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
return 30597;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
return 30598;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
return 30599;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
return 30600;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
return 30601;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
return 30602;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return 30603;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
return 30604;
break;
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
return 30605;
break;
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
return 30606;
break;
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
return 30607;
break;
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
return 30608;
break;
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
return 30609;
break;
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
return 30610;
break;
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
return 30611;
break;
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
return 30612;
break;
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
return 30613;
break;
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
return 30614;
break;
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return 30615;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
return 30616;
break;
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
return 30617;
break;
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
return 30618;
break;
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
return 30619;
break;
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
return 30620;
break;
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
return 30621;
break;
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
return 30622;
break;
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
return 30623;
break;
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
return 30624;
break;
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
return 30625;
break;
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
return 30626;
break;
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
return 30627;
break;
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
return 30628;
break;
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
return 30629;
break;
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
return 30630;
break;
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return 30631;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
return 30674;
break;
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
return 30675;
break;
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
return 30676;
break;
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
return 30677;
break;
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
return 30678;
break;
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
return 30679;
break;
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
return 30680;
break;
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
return 30681;
break;
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
return 30682;
break;
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
return 30683;
break;
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
return 30684;
break;
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
return 30685;
break;
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
return 30686;
break;
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
return 30687;
break;
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
return 30688;
break;
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
return 30689;
break;
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
return 30690;
break;
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
return 30691;
break;
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
return 30692;
break;
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return 30693;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
return 30638;
break;
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
return 30639;
break;
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
return 30640;
break;
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
return 30641;
break;
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
return 30642;
break;
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
return 30643;
break;
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
return 30644;
break;
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
return 30645;
break;
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
return 30646;
break;
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
return 30647;
break;
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
return 30648;
break;
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
return 30649;
break;
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
return 30650;
break;
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
return 30651;
break;
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
return 30652;
break;
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
return 30653;
break;
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
return 30654;
break;
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
return 30655;
break;
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
return 30656;
break;
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
return 30657;
break;
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
return 30658;
break;
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
return 30659;
break;
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
return 30660;
break;
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
return 30661;
break;
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
return 30662;
break;
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
return 30663;
break;
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
return 30664;
break;
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
return 30665;
break;
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
return 30666;
break;
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
return 30667;
break;
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
return 30668;
break;
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
return 30669;
break;
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
return 30670;
break;
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
return 30671;
break;
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
return 30672;
break;
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return 30673;
break;
}
switch (iParam0){
case -1265443416:
case 676807987:
return 30260;
break;
case 1888753218:
case 272160153:
return 30261;
break;
case -552467991:
case 1593344440:
return 30262;
break;
case -1655919948:
case 546222390:
return 30263;
break;
case -917106601:
case 1983375900:
return 30264;
break;
case 1595446967:
case -620589387:
return 30265;
break;
case -530593323:
case 383923929:
return 30266;
break;
case 561619447:
case -1703406594:
return 30267;
break;
case -1913656173:
case -398286533:
return 30268;
break;
case -1766901922:
case -80478106:
return 30269;
break;
case 2091781849:
case 1835331655:
return 30270;
break;
case 1824588341:
case -1650596870:
return 30271;
break;
case 242597641:
case 1231926496:
return 30272;
break;
case 566785691:
case -1506181253:
return 30273;
break;
case -2091312957:
case -1737145605:
return 30274;
break;
case -2079214831:
case 1673851512:
return 30275;
break;
case 1359156274:
case 1023339598:
return 30276;
break;
case 1904247246:
case -163738770:
return 30277;
break;
case -1351518396:
case 1863218823:
return 30278;
break;
case -797874817:
case 333966447:
return 30279;
break;
case -385507297:
case 1412626052:
return 30280;
break;
case 2011910758:
case -39100956:
return 30281;
break;
case -1953985443:
case 1631533003:
return 30282;
break;
case -1124222352:
case 1493430918:
return 30283;
break;
case -1806994767:
case -196693334:
return 30284;
break;
case -1445761968:
case 553507495:
return 30285;
break;
case -89186417:
case 2003474700:
return 30286;
break;
case -308083083:
case 1121792228:
return 30287;
break;
case 667714507:
case -1424651669:
return 30288;
break;
case -1610210252:
case -1454164346:
return 30289;
break;
case joaat("dlc_mp_sum_m_berd_3_4"):
case joaat("dlc_mp_sum_f_berd_3_4"):
return 30290;
break;
case joaat("dlc_mp_sum_m_berd_3_5"):
case joaat("dlc_mp_sum_f_berd_3_5"):
return 30291;
break;
case joaat("dlc_mp_sum_m_berd_3_6"):
case joaat("dlc_mp_sum_f_berd_3_6"):
return 30292;
break;
case joaat("dlc_mp_sum_m_berd_3_7"):
case joaat("dlc_mp_sum_f_berd_3_7"):
return 30293;
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
case joaat("dlc_mp_sum_f_legs_2_25"):
return 30294;
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
case joaat("dlc_mp_sum_f_jbib_0_25"):
return 30295;
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
case joaat("dlc_mp_vwd_f_decl_1_0"):
return 27194;
break;
case joaat("dlc_mp_vwd_m_decl_1_6"):
case joaat("dlc_mp_vwd_f_decl_1_6"):
return 27195;
break;
case joaat("dlc_mp_vwd_m_decl_1_7"):
case joaat("dlc_mp_vwd_f_decl_1_7"):
return 27196;
break;
case joaat("dlc_mp_vwd_m_decl_1_8"):
case joaat("dlc_mp_vwd_f_decl_1_8"):
return 27197;
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
case joaat("dlc_mp_vwd_f_jbib_21_5"):
return 27198;
break;
case joaat("dlc_mp_vwd_m_jbib_23_8"):
case joaat("dlc_mp_vwd_f_jbib_21_8"):
return 27199;
break;
case joaat("dlc_mp_vwd_m_jbib_23_9"):
case joaat("dlc_mp_vwd_f_jbib_21_9"):
return 27200;
break;
case joaat("dlc_mp_vwd_m_jbib_23_10"):
case joaat("dlc_mp_vwd_f_jbib_21_10"):
return 27201;
break;
case joaat("dlc_mp_vwd_m_decl_1_11"):
case joaat("dlc_mp_vwd_f_decl_1_11"):
return 27202;
break;
case joaat("dlc_mp_vwd_m_decl_1_12"):
case joaat("dlc_mp_vwd_f_decl_1_12"):
return 27203;
break;
case joaat("dlc_mp_vwd_m_decl_1_13"):
case joaat("dlc_mp_vwd_f_decl_1_13"):
return 27204;
break;
case joaat("dlc_mp_vwd_m_decl_1_14"):
case joaat("dlc_mp_vwd_f_decl_1_14"):
return 27205;
break;
case joaat("dlc_mp_vwd_m_decl_1_15"):
case joaat("dlc_mp_vwd_f_decl_1_15"):
return 27206;
break;
case joaat("dlc_mp_vwd_m_decl_1_16"):
case joaat("dlc_mp_vwd_f_decl_1_16"):
return 27207;
break;
case joaat("dlc_mp_vwd_m_decl_1_17"):
case joaat("dlc_mp_vwd_f_decl_1_17"):
return 27208;
break;
case joaat("dlc_mp_vwd_m_decl_1_18"):
case joaat("dlc_mp_vwd_f_decl_1_18"):
return 27209;
break;
case joaat("dlc_mp_vwd_m_jbib_23_0"):
case joaat("dlc_mp_vwd_f_jbib_21_0"):
return 27210;
break;
case joaat("dlc_mp_vwd_m_jbib_23_2"):
case joaat("dlc_mp_vwd_f_jbib_21_2"):
return 27211;
break;
case joaat("dlc_mp_vwd_m_jbib_23_4"):
case joaat("dlc_mp_vwd_f_jbib_21_4"):
return 27212;
break;
case joaat("dlc_mp_vwd_m_jbib_23_7"):
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return 27213;
break;
}
switch (iParam0){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
return 25032;
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
return 25033;
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
return 25034;
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
return 25035;
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
return 25036;
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
return 25037;
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
return 25038;
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
return 25039;
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
return 25040;
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
return 25041;
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
return 25042;
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
return 25043;
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
return 25044;
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
return 25045;
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
return 25046;
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
return 25047;
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
return 25048;
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
return 25049;
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
return 25050;
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
return 25051;
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
return 25052;
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
return 25053;
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
return 25054;
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
return 25055;
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
return 25056;
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
return 25057;
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
return 25058;
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
return 25059;
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
return 25060;
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
return 25061;
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
return 25062;
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
return 25063;
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
return 25064;
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
return 25065;
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
return 25066;
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
return 25067;
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
return 25068;
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
return 25069;
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
return 25070;
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
return 25071;
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
return 25072;
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
return 25073;
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
return 25074;
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
return 25075;
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
return 25076;
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
return 25077;
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
return 25078;
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
return 25079;
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
return 25080;
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
return 25081;
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
return 25082;
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
return 25083;
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
return 25084;
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
return 25085;
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
return 25086;
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
return 25087;
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
return 25088;
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
return 25089;
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
return 25090;
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
return 25091;
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
return 25092;
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
return 25093;
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
return 25094;
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
return 25095;
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
return 25096;
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
return 25097;
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
return 25098;
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
return 25099;
break;
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
case joaat("dlc_mp_arena_m_jbib_16_0"):
return 25022;
case joaat("dlc_mp_arena_f_jbib_16_1"):
case joaat("dlc_mp_arena_m_jbib_16_1"):
return 25023;
case joaat("dlc_mp_arena_f_jbib_16_2"):
case joaat("dlc_mp_arena_m_jbib_16_2"):
return 25024;
case joaat("dlc_mp_arena_f_jbib_16_3"):
case joaat("dlc_mp_arena_m_jbib_16_3"):
return 25025;
case joaat("dlc_mp_arena_f_jbib_16_4"):
case joaat("dlc_mp_arena_m_jbib_16_4"):
return 25026;
case joaat("dlc_mp_arena_f_jbib_16_5"):
case joaat("dlc_mp_arena_m_jbib_16_5"):
return 25027;
case joaat("dlc_mp_arena_f_jbib_16_6"):
case joaat("dlc_mp_arena_m_jbib_16_6"):
return 25028;
case joaat("dlc_mp_arena_f_jbib_16_7"):
case joaat("dlc_mp_arena_m_jbib_16_7"):
return 25019;
case joaat("dlc_mp_arena_f_jbib_16_8"):
case joaat("dlc_mp_arena_m_jbib_16_8"):
return 25029;
case joaat("dlc_mp_arena_f_jbib_16_9"):
case joaat("dlc_mp_arena_m_jbib_16_9"):
return 25021;
case joaat("dlc_mp_arena_f_jbib_16_10"):
case joaat("dlc_mp_arena_m_jbib_16_10"):
return 25018;
case joaat("dlc_mp_arena_f_jbib_16_11"):
case joaat("dlc_mp_arena_m_jbib_16_11"):
return 25020;
case joaat("dlc_mp_arena_f_jbib_16_12"):
case joaat("dlc_mp_arena_m_jbib_16_12"):
return 25030;
case joaat("dlc_mp_arena_f_jbib_16_13"):
case joaat("dlc_mp_arena_m_jbib_16_13"):
return 25031;
default:
}
switch (iParam0){
case -1641688020:
return 25002;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
return 22108;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
return 9481;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
return 9470;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
return 9475;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
return 9472;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
return 9465;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
return 9463;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
return 9464;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
return 9468;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
return 9469;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
return 9479;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
return 9473;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
return 9480;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
return 9476;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
return 9477;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
return 9471;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
return 9474;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
return 9467;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
return 9478;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
return 9462;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
return 9466;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
return 22126;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
return 22127;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
return 22128;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
return 22124;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
return 22130;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
return 22125;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
return 22129;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
return 22131;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
return 22132;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
return 22147;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
return 22148;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
return 22149;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
return 22150;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
return 22151;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
return 22152;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
return 22153;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
return 22154;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
return 22155;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
return 22156;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
return 22157;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
return 22158;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
return 22159;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
return 22160;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
return 22161;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
return 22162;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
return 22163;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
return 22164;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
return 22165;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
return 22166;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
return 22167;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
return 22168;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
return 22169;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
return 22170;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
return 22171;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
return 22172;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
return 22173;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
return 22174;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
return 22175;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
return 22176;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
return 22177;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
return 22178;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
return 18099;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_m_jbib_5_0"):
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
return 18121;
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
return 18122;
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
return 18123;
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
return 18124;
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
case joaat("dlc_mp_x17_f_outfit_morph_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return 18125;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
return 18134;
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
return 18135;
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
return 18136;
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return 18137;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
return 15417;
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
return 15418;
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return 15425;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
return 15405;
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
return 15393;
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
return 15409;
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
return 15396;
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
return 15412;
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
return 15403;
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
return 15389;
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return 15398;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
return 15400;
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
return 15408;
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
return 15411;
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
return 15397;
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
return 15413;
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
return 15391;
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
return 15388;
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 15401;
default:
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
return 15394;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
return 15406;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
return 15395;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
return 15410;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
return 15407;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
return 15414;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
return 15415;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
return 15399;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
return 15404;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
return 15392;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
return 15390;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
return 15402;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
return 15416;
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
case joaat("dlc_mp_ie_f_berd_7_0"):
return 9443;
default:
}
switch (iParam0){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
return 9366;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
return 9367;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
return 9369;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
return 9368;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
return 9365;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
return 9364;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
return 9363;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
return 9362;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
return 9370;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
return 9371;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
return 9372;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
return 9373;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
return 9374;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
return 9384;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
return 9385;
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
return 9375;
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
return 9376;
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
return 9377;
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
return 9378;
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
return 9379;
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
return 9380;
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
return 9381;
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
return 9382;
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return 9383;
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
return 7595;
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
return 7596;
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
return 7597;
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
return 7599;
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
return 7600;
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
return 7598;
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
case joaat("dlc_mp_stunt_f_outfit_e_6"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return 7601;
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_f_legs_1_0"):
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
return 7482;
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_f_legs_1_1"):
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
return 7483;
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_f_legs_1_2"):
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
return 7484;
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_f_legs_1_3"):
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
return 7485;
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_f_legs_1_4"):
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
return 7486;
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_f_legs_1_5"):
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
return 7487;
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_f_legs_1_6"):
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
return 7488;
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_f_legs_1_7"):
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
return 7489;
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_f_legs_1_8"):
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
return 7490;
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_f_legs_1_9"):
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
return 7491;
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_f_legs_1_10"):
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
return 7492;
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_f_legs_1_11"):
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
return 7493;
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_f_legs_1_12"):
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
return 7494;
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_f_legs_1_13"):
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return 7495;
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
return 7515;
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
return 7516;
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
return 7517;
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
return 7518;
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
return 7519;
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
return 7520;
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
return 7521;
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
return 7522;
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
return 7523;
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
return 7524;
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
return 7525;
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
return 7526;
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
return 7527;
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return 7528;
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
return 4247;
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
return 4248;
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
return 4249;
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
return 4250;
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
return 4251;
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
return 4252;
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
return 4253;
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
return 4254;
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
return 4255;
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return 4256;
case 1743008394:
case 1084175393:
return 110;
case -1090232119:
case 787255484:
return 111;
case -1133356123:
case -566366372:
return 112;
default:
}
switch (iParam0){
case 1970268516:
case 2026483804:
case 1831101822:
case 1411612772:
return 4333;
case 1875861023:
case -1385031204:
case -703154335:
case 798340921:
return 4334;
case -1208373599:
case 1656518170:
return 4335;
case -970054678:
case -840010097:
return 3750;
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
return 3594;
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
return 3595;
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
return 3596;
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
return 3597;
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
return 3598;
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return 3599;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return 3616;
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return 3615;
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return 9440;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return 9430;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return 9426;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return 9427;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return 9428;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return 9431;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return 9432;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return 9433;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return 9439;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return 9434;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return 9435;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return 9436;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return 9429;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return 9437;
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return 3593;
default:
}
return -1;
}

int func_416(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_417()){
return Global_262145.f_31795[iVar0];
}else{
return Global_262145.f_31783[iVar0];
}}
return -1;
}


bool func_417(){
return func_418(PLAYER::PLAYER_ID());
}

int func_418(bool bParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_419(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar1=-99;
iVar2=-1;
iVar0=func_416(iParam0);
if(iVar0==-1){
return 1;
}
if(func_417()){
iVar3=func_479(iVar0);
if(iVar3 !=-1){
iVar1=func_475(joaat("mp_f_freemode_01"), iVar0, func_479(iVar0), 4);
}
iVar2=func_474(iVar0, 4);
if((func_473(func_415(iVar0), -1) || (iVar2 !=-1 && func_467(iVar2, -1))) || (iVar1 !=-99 && func_420(joaat("mp_f_freemode_01"), func_479(iVar0), iVar1))){
return 1;
}}else{
iVar4=func_479(iVar0);
if(iVar4 !=-1){
iVar1=func_475(joaat("mp_m_freemode_01"), iVar0, func_479(iVar0), 3);
}
iVar2=func_474(iVar0, 3);
if((func_473(func_415(iVar0), -1) || (iVar2 !=-1 && func_467(iVar2, -1))) || (iVar1 !=-99 && func_420(joaat("mp_m_freemode_01"), func_479(iVar0), iVar1))){
return 1;
}}
return 0;
}


var func__420(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_421(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}
struct<14> func_421(int iParam0, int iParam1, int iParam2, int iParam3){
func_466();
if(iParam0==joaat("mp_m_freemode_01")){
func_450(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_422(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_422(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_449(iParam1, iParam2);
break;
case 11:
func_448(iParam1, iParam2);
break;
case 8:
func_447(iParam1, iParam2);
break;
case 9:
func_446(iParam1, iParam2);
break;
case 3:
func_445(iParam1, iParam2);
break;
case 4:
func_444(iParam1, iParam2);
break;
case 6:
func_443(iParam1, iParam2);
break;
case 1:
func_442(iParam1, iParam2);
break;
case 7:
func_441(iParam1, iParam2);
break;
case 10:
func_440(iParam1, iParam2);
break;
case 14:
func_439(iParam1, iParam2);
break;
case 12:
func_438(iParam1, iParam2);
break;
case 5:
func_437(iParam1, iParam2);
break;
case 0:
func_434(iParam1, iParam2);
break;
case 13:
func_423(iParam1);
break;
}}


void func_423(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_424(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
int iVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_433(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_432(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_430(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_430(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_430(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_430(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_430(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_430(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_429(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_429(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_429(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_432(14)){
return;
}
iVar0=func_427(func_428(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
iVar0=func_427(func_426(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_425(iParam1, uParam0->f_2, &iVar1)){
iVar0=func_427(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_425(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_426(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_427(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_150(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_428(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_430(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_431(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
iVar3=func_427(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_431(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14192;
if((bParam4 && Global_4539485) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_0"):
case joaat("dlc_mp_biker_m_special_2_0"):
case joaat("dlc_mp_biker_m_special_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_1"):
case joaat("dlc_mp_biker_m_special_2_1"):
case joaat("dlc_mp_biker_m_special_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_2"):
case joaat("dlc_mp_biker_m_special_2_2"):
case joaat("dlc_mp_biker_m_special_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_3"):
case joaat("dlc_mp_biker_m_special_2_3"):
case joaat("dlc_mp_biker_m_special_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_4"):
case joaat("dlc_mp_biker_m_special_2_4"):
case joaat("dlc_mp_biker_m_special_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_5"):
case joaat("dlc_mp_biker_m_special_2_5"):
case joaat("dlc_mp_biker_m_special_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_7"):
case joaat("dlc_mp_biker_m_special_2_7"):
case joaat("dlc_mp_biker_m_special_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_8"):
case joaat("dlc_mp_biker_m_special_2_8"):
case joaat("dlc_mp_biker_m_special_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_11"):
case joaat("dlc_mp_biker_m_special_2_11"):
case joaat("dlc_mp_biker_m_special_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4539485){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14192;
}


bool func_432(int iParam0){
return Global_43257==iParam0;
}

int func_433(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
return 0;
break;
case 1:
return 1;
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
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_434(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_435(iVar0, iParam0, 0, iParam1);
}


void func_435(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
struct<8> Var2;
int iVar3;
int iVar4;
struct<10> Var5;
int iVar6;
int iVar7;
int iVar8;
struct<10> Var9;
int iVar10;
int iVar11;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
uVar1=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_424(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_424(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uVar1, 10, -1, 1, -1, -1);
if(iVar8 > iVar7){
FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
if(Var5.f_6==0){
iVar6=9;
}elseif(Var5.f_6==1){
iVar6=10;
}elseif(Var5.f_6==2){
iVar6=2;
}elseif(Var5.f_6==3){
iVar6=3;
}elseif(Var5.f_6==4){
iVar6=4;
}elseif(Var5.f_6==5){
iVar6=5;
}elseif(Var5.f_6==6){
iVar6=6;
}elseif(Var5.f_6==7){
iVar6=7;
}elseif(Var5.f_6==8){
iVar6=8;
}else{
iVar6=-1;
}
Global_2883588=Var5.f_1;
Global_2883589=Var5.f_0;
func_424(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_424(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uVar1, 10, -1, 0, -1, func_436(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_424(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_436(int iParam0){
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


void func_437(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_438(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P1", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P2", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P3", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P4", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P5", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P6", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P7", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P8", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P9", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P10", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B1", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B2", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B3", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B4", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B5", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B6", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B7", 16);
break;
case 26:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B8", 16);
break;
case 27:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B9", 16);
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_439(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "HT_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "HT_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "HT_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "HT_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "HT_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "HT_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "HT_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 29:
StringCopy(&Var2, "HT_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "HT_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=120;
iVar5=0;
iVar8=1;
break;
case 35:
StringCopy(&Var2, "HT_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=400;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=375;
iVar5=0;
iVar8=1;
break;
case 38:
StringCopy(&Var2, "HT_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 39:
StringCopy(&Var2, "HT_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 40:
StringCopy(&Var2, "HT_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 41:
StringCopy(&Var2, "HT_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 42:
StringCopy(&Var2, "HT_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=325;
iVar5=0;
iVar8=1;
break;
case 43:
StringCopy(&Var2, "HT_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 46:
StringCopy(&Var2, "HT_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 47:
StringCopy(&Var2, "HT_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 48:
StringCopy(&Var2, "HT_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 49:
StringCopy(&Var2, "HT_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 50:
StringCopy(&Var2, "HT_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=255;
iVar5=0;
iVar8=1;
break;
case 51:
StringCopy(&Var2, "HT_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=360;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=3970;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1355;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=230;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=515;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=545;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=1440;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 76:
StringCopy(&Var2, "HT_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 77:
StringCopy(&Var2, "HT_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 78:
StringCopy(&Var2, "HT_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 79:
StringCopy(&Var2, "HT_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=50;
iVar5=0;
iVar8=1;
break;
case 80:
StringCopy(&Var2, "HT_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=575;
iVar5=0;
iVar8=1;
break;
case 82:
StringCopy(&Var2, "HT_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=605;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "HT_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=285;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=2125;
iVar5=0;
iVar8=1;
break;
case 93:
StringCopy(&Var2, "HT_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "HT_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "HT_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 104:
StringCopy(&Var2, "HT_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=295;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=855;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=1615;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=1130;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=165;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=250;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=390;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=425;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMF_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMF_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMF_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMF_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMF_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMF_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMF_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMF_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMF_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMF_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMF_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMF_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMF_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMF_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMF_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMF_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMF_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMF_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMF_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMF_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMF_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMF_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMF_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMF_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 156:
StringCopy(&Var2, "G_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 157:
StringCopy(&Var2, "G_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 158:
StringCopy(&Var2, "G_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 159:
StringCopy(&Var2, "G_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 160:
StringCopy(&Var2, "G_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 161:
StringCopy(&Var2, "G_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 162:
StringCopy(&Var2, "G_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 163:
StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=820;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=435;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 167:
StringCopy(&Var2, "G_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=165;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 169:
StringCopy(&Var2, "G_FMF_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 170:
StringCopy(&Var2, "G_FMF_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 171:
StringCopy(&Var2, "G_FMF_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 172:
StringCopy(&Var2, "G_FMF_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 173:
StringCopy(&Var2, "G_FMF_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 174:
StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=970;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
iVar3=1;
iVar4=9;
iVar1=585;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
iVar3=1;
iVar4=10;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=595;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "G_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "G_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "G_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=590;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=1125;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=740;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=805;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=6250;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=3585;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=4075;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=4935;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "G_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "G_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=5600;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "G_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=4790;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=2245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=1205;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "G_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "G_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=2215;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "G_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 211:
StringCopy(&Var2, "G_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 212:
StringCopy(&Var2, "G_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "G_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 214:
StringCopy(&Var2, "G_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "G_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "G_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "G_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "G_FMF_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 219:
StringCopy(&Var2, "G_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 220:
StringCopy(&Var2, "G_FMF_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 221:
StringCopy(&Var2, "G_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=5000;
iVar5=1;
iVar8=3;
break;
case 222:
StringCopy(&Var2, "G_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "G_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 228:
StringCopy(&Var2, "G_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 229:
StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=4815;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=4795;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "G_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "G_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "G_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=4965;
iVar5=1;
iVar8=3;
break;
case 237:
StringCopy(&Var2, "G_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=480;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=465;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=4320;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=2390;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=2005;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 243:
StringCopy(&Var2, "G_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 245:
StringCopy(&Var2, "G_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 246:
StringCopy(&Var2, "G_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 247:
StringCopy(&Var2, "G_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 248:
StringCopy(&Var2, "G_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 249:
StringCopy(&Var2, "G_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 250:
StringCopy(&Var2, "G_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 251:
StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "G_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "G_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=570;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "G_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=525;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "G_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "G_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4275;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "G_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 271:
StringCopy(&Var2, "G_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 272:
StringCopy(&Var2, "G_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 273:
StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 274:
StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 275:
StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 276:
StringCopy(&Var2, "G_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=3660;
iVar5=1;
iVar8=3;
break;
case 277:
StringCopy(&Var2, "G_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=4165;
iVar5=1;
iVar8=3;
break;
case 278:
StringCopy(&Var2, "G_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=3670;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=3620;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=3610;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=4140;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 285:
StringCopy(&Var2, "G_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 286:
StringCopy(&Var2, "G_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 287:
StringCopy(&Var2, "G_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 288:
StringCopy(&Var2, "G_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 289:
StringCopy(&Var2, "G_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 290:
StringCopy(&Var2, "G_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 291:
StringCopy(&Var2, "G_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 292:
StringCopy(&Var2, "G_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 293:
StringCopy(&Var2, "G_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 294:
StringCopy(&Var2, "G_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 295:
StringCopy(&Var2, "G_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 296:
StringCopy(&Var2, "G_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 297:
StringCopy(&Var2, "G_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 298:
StringCopy(&Var2, "G_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 299:
StringCopy(&Var2, "G_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 300:
StringCopy(&Var2, "G_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 301:
StringCopy(&Var2, "G_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 302:
StringCopy(&Var2, "G_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 303:
StringCopy(&Var2, "G_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 304:
StringCopy(&Var2, "G_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 305:
StringCopy(&Var2, "G_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 306:
StringCopy(&Var2, "G_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 307:
StringCopy(&Var2, "G_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 308:
StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=1490;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=1105;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 312:
StringCopy(&Var2, "G_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 313:
StringCopy(&Var2, "G_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 314:
StringCopy(&Var2, "G_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 315:
StringCopy(&Var2, "G_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 316:
StringCopy(&Var2, "G_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 317:
StringCopy(&Var2, "G_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 318:
StringCopy(&Var2, "G_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 320:
StringCopy(&Var2, "W_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=825;
iVar5=6;
iVar8=4;
break;
case 324:
StringCopy(&Var2, "W_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 325:
StringCopy(&Var2, "W_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_296940.f_26));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_2175[iVar10]) * Global_296940.f_27));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_2200[iVar11]) * Global_296940.f_56));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 10){
iVar1=round(((to_float(iVar1) * Global_262145.f_2329[iVar12]) * Global_296940.f_28));
}}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_440(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=1;
iVar4=0;
iVar1=10000;
break;
case 2:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=2;
iVar4=0;
iVar1=5000;
break;
case 3:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=3;
iVar4=0;
iVar1=10000;
break;
case 4:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=4;
iVar4=0;
iVar1=5000;
break;
case 5:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=5;
iVar4=0;
iVar1=10000;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_441(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
if(Global_262145.f_4151 !=-1){
iVar1=Global_262145.f_4151;
}else{
iVar1=310;
}
break;
case 2:
iVar3=1;
iVar4=1;
if(Global_262145.f_4152 !=-1){
iVar1=Global_262145.f_4152;
}else{
iVar1=125;
}
break;
case 3:
iVar3=1;
iVar4=2;
if(Global_262145.f_4153 !=-1){
iVar1=Global_262145.f_4153;
}else{
iVar1=145;
}
break;
case 4:
iVar3=1;
iVar4=3;
if(Global_262145.f_4154 !=-1){
iVar1=Global_262145.f_4154;
}else{
iVar1=130;
}
break;
case 5:
iVar3=1;
iVar4=4;
if(Global_262145.f_4155 !=-1){
iVar1=Global_262145.f_4155;
}else{
iVar1=265;
}
break;
case 6:
iVar3=1;
iVar4=5;
if(Global_262145.f_4156 !=-1){
iVar1=Global_262145.f_4156;
}else{
iVar1=280;
}
break;
case 7:
iVar3=2;
iVar4=0;
if(Global_262145.f_4157 !=-1){
iVar1=Global_262145.f_4157;
}else{
iVar1=295;
}
break;
case 8:
iVar3=2;
iVar4=1;
if(Global_262145.f_4158 !=-1){
iVar1=Global_262145.f_4158;
}else{
iVar1=95;
}
break;
case 9:
iVar3=2;
iVar4=2;
if(Global_262145.f_4159 !=-1){
iVar1=Global_262145.f_4159;
}else{
iVar1=85;
}
break;
case 10:
iVar3=2;
iVar4=3;
if(Global_262145.f_4160 !=-1){
iVar1=Global_262145.f_4160;
}else{
iVar1=95;
}
break;
case 11:
iVar3=2;
iVar4=4;
if(Global_262145.f_4161 !=-1){
iVar1=Global_262145.f_4161;
}else{
iVar1=105;
}
break;
case 12:
iVar3=2;
iVar4=5;
if(Global_262145.f_4162 !=-1){
iVar1=Global_262145.f_4162;
}else{
iVar1=95;
}
break;
case 13:
iVar3=3;
iVar4=0;
if(Global_262145.f_4163 !=-1){
iVar1=Global_262145.f_4163;
}else{
iVar1=35;
}
break;
case 14:
iVar3=3;
iVar4=1;
if(Global_262145.f_4164 !=-1){
iVar1=Global_262145.f_4164;
}else{
iVar1=35;
}
break;
case 15:
iVar3=3;
iVar4=2;
if(Global_262145.f_4165 !=-1){
iVar1=Global_262145.f_4165;
}else{
iVar1=30;
}
break;
case 16:
iVar3=3;
iVar4=3;
if(Global_262145.f_4166 !=-1){
iVar1=Global_262145.f_4166;
}else{
iVar1=40;
}
break;
case 17:
iVar3=3;
iVar4=4;
if(Global_262145.f_4167 !=-1){
iVar1=Global_262145.f_4167;
}else{
iVar1=35;
}
break;
case 18:
iVar3=3;
iVar4=5;
if(Global_262145.f_4168 !=-1){
iVar1=Global_262145.f_4168;
}else{
iVar1=35;
}
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=2;
if(Global_262145.f_4169 !=-1){
iVar1=Global_262145.f_4169;
}else{
iVar1=355;
}
break;
case 22:
iVar3=4;
iVar4=3;
if(Global_262145.f_4170 !=-1){
iVar1=Global_262145.f_4170;
}else{
iVar1=370;
}
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=4;
if(Global_262145.f_4171 !=-1){
iVar1=Global_262145.f_4171;
}else{
iVar1=110;
}
break;
case 30:
iVar3=5;
iVar4=5;
if(Global_262145.f_4172 !=-1){
iVar1=Global_262145.f_4172;
}else{
iVar1=160;
}
break;
case 31:
iVar3=6;
iVar4=0;
if(Global_262145.f_4173 !=-1){
iVar1=Global_262145.f_4173;
}else{
iVar1=385;
}
break;
case 32:
iVar3=6;
iVar4=1;
if(Global_262145.f_4174 !=-1){
iVar1=Global_262145.f_4174;
}else{
iVar1=190;
}
break;
case 33:
iVar3=6;
iVar4=2;
if(Global_262145.f_4175 !=-1){
iVar1=Global_262145.f_4175;
}else{
iVar1=235;
}
break;
case 34:
iVar3=6;
iVar4=3;
if(Global_262145.f_4176 !=-1){
iVar1=Global_262145.f_4176;
}else{
iVar1=220;
}
break;
case 35:
iVar3=6;
iVar4=4;
if(Global_262145.f_4177 !=-1){
iVar1=Global_262145.f_4177;
}else{
iVar1=250;
}
break;
case 36:
iVar3=6;
iVar4=5;
if(Global_262145.f_4178 !=-1){
iVar1=Global_262145.f_4178;
}else{
iVar1=205;
}
break;
case 37:
iVar3=7;
iVar4=0;
if(Global_262145.f_4179 !=-1){
iVar1=Global_262145.f_4179;
}else{
iVar1=445;
}
break;
case 38:
iVar3=7;
iVar4=1;
if(Global_262145.f_4180 !=-1){
iVar1=Global_262145.f_4180;
}else{
iVar1=175;
}
break;
case 39:
iVar3=7;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=8;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=9;
iVar4=0;
if(Global_262145.f_4181 !=-1){
iVar1=Global_262145.f_4181;
}else{
iVar1=340;
}
break;
case 50:
iVar3=9;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=9;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=9;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 55, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_58));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_296940.f_58));
StringCopy(&Var2, "T_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_442(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 26, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_29));
}
return;
break;
}
StringCopy(&Var2, "M_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_296940.f_29));
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_443(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=1765;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=760;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=760;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=765;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=85;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=80;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=90;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=90;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=95;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=100;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=60;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=55;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=100;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=1255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=65;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=1050;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=1895;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=185;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=190;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=115;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=415;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=115;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=135;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=125;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=105;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=130;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=3530;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=2610;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=1295;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=120;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=160;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=160;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=145;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=105;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=115;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=150;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=540;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=110;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=120;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=460;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=120;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=120;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=415;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=135;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=140;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=160;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1025;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=1560;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=145;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=120;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=365;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=100;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=65;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=85;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=50;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=50;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2395;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=3675;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=320;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=3875;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=2050;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=375;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=2105;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=345;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=380;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=340;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=385;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=4135;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=370;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=375;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=385;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=365;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=325;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=325;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=370;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=390;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=400;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=390;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=365;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=410;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=4125;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=4365;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=5365;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=6225;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=3755;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=405;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=4115;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=2240;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=3850;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=3110;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=1950;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=455;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=405;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=410;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=415;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=4425;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=115;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=65;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=85;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=75;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=115;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=135;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=175;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=675;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=100;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=400;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=340;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=195;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=215;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=120;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=165;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=100;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=1040;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=100;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=120;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=210;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=205;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=200;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=100;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=1420;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=435;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=420;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=425;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=435;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=425;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=430;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=3215;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=3320;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=440;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=440;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=450;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=450;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=1255;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=750;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=165;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=460;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=190;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=195;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=200;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=205;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=210;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=215;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=220;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=455;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=175;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=800;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=790;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=175;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=190;
break;
}
StringCopy(&Var2, "F_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_296940.f_25));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_444(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=270;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=750;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=450;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=4875;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=1760;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=1090;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=2465;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=305;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=290;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=410;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=255;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=255;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=405;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=5000;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=4480;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=4335;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=375;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=265;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=275;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=280;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=300;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=265;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=255;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=250;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=260;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=250;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=225;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=230;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=650;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=425;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=345;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=115;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=110;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=250;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=290;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=135;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=125;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=120;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=130;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=110;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=525;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=115;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=535;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=135;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=130;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=140;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=130;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=520;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=215;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=220;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=225;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=245;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=215;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=630;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=250;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=260;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=200;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=225;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=230;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=725;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=650;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=230;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=230;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=280;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=330;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=320;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=315;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=850;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=530;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=890;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=440;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=455;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=295;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=180;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=150;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=155;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=840;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=150;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=950;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=580;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=200;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=665;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=780;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=615;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=250;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=435;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=420;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=390;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=485;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=380;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=1295;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=1135;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=1425;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1645;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1925;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=2250;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=365;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=360;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=2245;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=2170;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=50;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=100;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=65;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=275;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=300;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=145;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=150;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=110;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=95;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=155;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=155;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=510;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=165;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=465;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=250;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=110;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=470;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=480;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=155;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=275;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=395;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=285;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=560;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=595;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=295;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=230;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=215;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=270;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=295;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=285;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=215;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=210;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=290;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=230;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=90;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=105;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=100;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=230;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=350;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=335;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "L_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_296940.f_23));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_445(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
}
if(iParam0 >=16){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 16, iParam1);
return;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_446(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
}
if(iParam0 >=36){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 36, iParam1);
return;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_447(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=125;
break;
case 16:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=1;
iVar4=0;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=1;
iVar4=2;
iVar1=50;
break;
case 19:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=1;
iVar4=4;
iVar1=40;
break;
case 21:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=1;
iVar4=5;
iVar1=40;
break;
case 22:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=1;
iVar4=6;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=1;
iVar4=8;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=1;
iVar4=9;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=1;
iVar4=10;
iVar1=135;
break;
case 27:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=1;
iVar4=12;
iVar1=220;
break;
case 29:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=1;
iVar4=13;
iVar1=45;
break;
case 30:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=1;
iVar4=14;
iVar1=45;
break;
case 31:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=1;
iVar4=15;
iVar1=125;
break;
case 32:
iVar3=2;
iVar4=0;
break;
case 33:
iVar3=3;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "U_FMF_4_0", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "U_FMF_4_1", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "U_FMF_4_2", 16);
iVar3=4;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "U_FMF_4_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "U_FMF_4_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMF_4_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "U_FMF_4_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "U_FMF_4_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMF_4_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMF_4_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "U_FMF_4_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMF_4_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMF_4_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMF_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[77]));
break;
case 48:
StringCopy(&Var2, "U_FMF_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[78]));
break;
case 49:
StringCopy(&Var2, "U_FMF_4_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "U_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[80]));
break;
case 51:
StringCopy(&Var2, "U_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[81]));
break;
case 52:
StringCopy(&Var2, "U_FMF_5_2", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "U_FMF_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "U_FMF_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "U_FMF_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "U_FMF_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "U_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[87]));
break;
case 58:
StringCopy(&Var2, "U_FMF_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "U_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[89]));
break;
case 60:
StringCopy(&Var2, "U_FMF_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "U_FMF_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "U_FMF_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "U_FMF_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "U_FMF_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "U_FMF_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
case 66:
iVar3=6;
iVar4=0;
break;
case 67:
iVar3=7;
iVar4=0;
break;
case 68:
iVar3=8;
iVar4=0;
break;
case 69:
iVar3=9;
iVar4=0;
break;
case 70:
iVar3=10;
iVar4=0;
break;
case 71:
StringCopy(&Var2, "U_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[176]));
break;
case 72:
StringCopy(&Var2, "U_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[177]));
break;
case 73:
StringCopy(&Var2, "U_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[178]));
break;
case 74:
StringCopy(&Var2, "U_FMF_11_3", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "U_FMF_11_4", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "U_FMF_11_5", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "U_FMF_11_6", 16);
iVar3=11;
iVar4=6;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "U_FMF_11_7", 16);
iVar3=11;
iVar4=7;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "U_FMF_11_8", 16);
iVar3=11;
iVar4=8;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMF_11_9", 16);
iVar3=11;
iVar4=9;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "U_FMF_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=150;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[186]));
break;
case 82:
StringCopy(&Var2, "U_FMF_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=65;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[187]));
break;
case 83:
StringCopy(&Var2, "U_FMF_11_12", 16);
iVar3=11;
iVar4=12;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMF_11_13", 16);
iVar3=11;
iVar4=13;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMF_11_14", 16);
iVar3=11;
iVar4=14;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMF_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=145;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[191]));
break;
case 87:
StringCopy(&Var2, "U_FMF_12_0", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "U_FMF_12_1", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMF_12_2", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMF_12_3", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMF_12_4", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMF_12_5", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMF_12_6", 16);
iVar3=12;
iVar4=6;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=1560;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[199]));
break;
case 95:
StringCopy(&Var2, "U_FMF_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=195;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[200]));
break;
case 96:
StringCopy(&Var2, "U_FMF_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=200;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[201]));
break;
case 97:
StringCopy(&Var2, "U_FMF_12_10", 16);
iVar3=12;
iVar4=10;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "U_FMF_12_11", 16);
iVar3=12;
iVar4=11;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "U_FMF_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 100:
StringCopy(&Var2, "U_FMF_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "U_FMF_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "U_FMF_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "U_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=975;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[208]));
break;
case 104:
StringCopy(&Var2, "U_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=2670;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[209]));
break;
case 105:
StringCopy(&Var2, "U_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[210]));
break;
case 106:
StringCopy(&Var2, "U_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=400;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[211]));
break;
case 107:
StringCopy(&Var2, "U_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=2500;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[212]));
break;
case 108:
StringCopy(&Var2, "U_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2060;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[213]));
break;
case 109:
StringCopy(&Var2, "U_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2620;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[214]));
break;
case 110:
StringCopy(&Var2, "U_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[215]));
break;
case 111:
StringCopy(&Var2, "U_FMF_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[216]));
break;
case 112:
StringCopy(&Var2, "U_FMF_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2280;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[217]));
break;
case 113:
StringCopy(&Var2, "U_FMF_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[218]));
break;
case 114:
StringCopy(&Var2, "U_FMF_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=2390;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[219]));
break;
case 115:
StringCopy(&Var2, "U_FMF_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=2610;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[220]));
break;
case 116:
StringCopy(&Var2, "U_FMF_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[221]));
break;
case 117:
StringCopy(&Var2, "U_FMF_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=2720;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[222]));
break;
case 118:
StringCopy(&Var2, "U_FMF_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=4995;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[223]));
break;
case 119:
iVar3=14;
iVar4=0;
break;
case 120:
StringCopy(&Var2, "U_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=325;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[240]));
break;
case 121:
StringCopy(&Var2, "U_FMF_15_1", 16);
iVar3=15;
iVar4=1;
bVar0=true;
break;
case 122:
StringCopy(&Var2, "U_FMF_15_2", 16);
iVar3=15;
iVar4=2;
bVar0=true;
break;
case 123:
StringCopy(&Var2, "U_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=130;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[243]));
break;
case 124:
StringCopy(&Var2, "U_FMF_15_4", 16);
iVar3=15;
iVar4=4;
bVar0=true;
break;
case 125:
StringCopy(&Var2, "U_FMF_15_5", 16);
iVar3=15;
iVar4=5;
bVar0=true;
break;
case 126:
StringCopy(&Var2, "U_FMF_15_6", 16);
iVar3=15;
iVar4=6;
bVar0=true;
break;
case 127:
StringCopy(&Var2, "U_FMF_15_7", 16);
iVar3=15;
iVar4=7;
bVar0=true;
break;
case 128:
StringCopy(&Var2, "U_FMF_15_8", 16);
iVar3=15;
iVar4=8;
bVar0=true;
break;
case 129:
StringCopy(&Var2, "U_FMF_15_9", 16);
iVar3=15;
iVar4=9;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMF_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[250]));
break;
case 131:
StringCopy(&Var2, "U_FMF_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[251]));
break;
case 132:
StringCopy(&Var2, "U_FMF_15_12", 16);
iVar3=15;
iVar4=12;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMF_15_13", 16);
iVar3=15;
iVar4=13;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMF_15_14", 16);
iVar3=15;
iVar4=14;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMF_15_15", 16);
iVar3=15;
iVar4=15;
bVar0=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[9]));
}}elseif(iParam0 >=0 && iParam0 < 16){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar8]));
}}elseif(iParam0 >=16 && iParam0 < 32){
iVar9=(iParam0 - 16);
if(iVar9 >=0 && iVar9 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar9]));
}}
iVar1=round((to_float(iVar1) * Global_296940.f_24));
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_448(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=125;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=390;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=230;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=355;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=5000;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=2725;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=3265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=3625;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=4220;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=310;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=45;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=75;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=50;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=60;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=50;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=295;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=80;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=75;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=2250;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=275;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=445;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=50;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=40;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=45;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=470;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=95;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=95;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=360;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=100;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=60;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=295;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=460;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1980;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=2110;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=95;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=40;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=40;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=45;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=60;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=375;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=90;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=900;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=1000;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=1050;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=1000;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=2975;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=1100;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=1825;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=1750;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=1075;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=2805;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=2250;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=95;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=95;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=525;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=100;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=110;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=130;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=560;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=295;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=975;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=160;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=100;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1700;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=380;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=95;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=95;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=110;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=95;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=90;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=85;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=90;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=95;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=95;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=150;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=65;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=145;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=1560;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=195;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=200;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=975;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=2670;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=480;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=400;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=2500;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=2060;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=2620;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=475;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=490;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=2280;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=485;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=2390;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=2610;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=1450;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=2720;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=4995;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=265;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=385;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=345;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=330;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=430;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=375;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=375;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=295;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=360;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=325;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=340;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=300;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=315;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=415;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=420;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=325;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=450;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=465;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "U_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==4){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[9]) * Global_296940.f_24));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1513[iVar8]) * Global_296940.f_24));
}}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_449(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[15]));
break;
case 18:
iVar3=4;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[16]));
break;
case 19:
iVar3=4;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[17]));
break;
case 20:
iVar3=4;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[18]));
break;
case 21:
iVar3=4;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[19]));
break;
case 22:
iVar3=4;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[20]));
break;
case 23:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 24:
iVar3=5;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[21]));
break;
case 25:
iVar3=5;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[22]));
break;
case 26:
iVar3=5;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[23]));
break;
case 27:
iVar3=5;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[24]));
break;
case 28:
iVar3=5;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[25]));
break;
case 29:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 30:
iVar3=6;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[26]));
break;
case 31:
iVar3=6;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[27]));
break;
case 32:
iVar3=6;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[28]));
break;
case 33:
iVar3=6;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[29]));
break;
case 34:
iVar3=6;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[30]));
break;
case 35:
iVar3=7;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[31]));
break;
case 36:
iVar3=7;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[32]));
break;
case 37:
iVar3=7;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[33]));
break;
case 38:
iVar3=7;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[34]));
break;
case 39:
iVar3=7;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[35]));
break;
case 40:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 41:
iVar3=8;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[36]));
break;
case 42:
iVar3=8;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[37]));
break;
case 43:
iVar3=8;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[38]));
break;
case 44:
iVar3=8;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[39]));
break;
case 45:
iVar3=8;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[40]));
break;
case 46:
iVar3=8;
iVar4=5;
iVar1=0;
break;
case 47:
iVar3=9;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[41]));
break;
case 48:
iVar3=9;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[42]));
break;
case 49:
iVar3=9;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[43]));
break;
case 50:
iVar3=9;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[44]));
break;
case 51:
iVar3=9;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[45]));
break;
case 52:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 53:
iVar3=10;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[46]));
break;
case 54:
iVar3=10;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[47]));
break;
case 55:
iVar3=10;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[48]));
break;
case 56:
iVar3=10;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[49]));
break;
case 57:
iVar3=10;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[50]));
break;
case 58:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 59:
iVar3=10;
iVar4=6;
iVar1=0;
break;
case 60:
iVar3=11;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[51]));
break;
case 61:
iVar3=11;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[52]));
break;
case 62:
iVar3=11;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[53]));
break;
case 63:
iVar3=11;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[54]));
break;
case 64:
iVar3=11;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[55]));
break;
case 65:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 66:
iVar3=11;
iVar4=6;
iVar1=0;
break;
case 67:
iVar3=12;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[56]));
break;
case 68:
iVar3=12;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[57]));
break;
case 69:
iVar3=12;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[58]));
break;
case 70:
iVar3=12;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[59]));
break;
case 71:
iVar3=12;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[60]));
break;
case 72:
iVar3=12;
iVar4=5;
iVar1=0;
break;
case 73:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[61]));
break;
case 74:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[62]));
break;
case 75:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[63]));
break;
case 76:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[64]));
break;
case 77:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[65]));
break;
case 78:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 79:
iVar3=14;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[66]));
break;
case 80:
iVar3=14;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[67]));
break;
case 81:
iVar3=14;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[68]));
break;
case 82:
iVar3=14;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[69]));
break;
case 83:
iVar3=14;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[70]));
break;
case 84:
iVar3=14;
iVar4=5;
iVar1=0;
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
case 91:
iVar3=15;
iVar4=6;
iVar1=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_435(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_450(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_465(iParam1, iParam2);
break;
case 11:
func_464(iParam1, iParam2);
break;
case 8:
func_463(iParam1, iParam2);
break;
case 9:
func_462(iParam1, iParam2);
break;
case 3:
func_461(iParam1, iParam2);
break;
case 4:
func_460(iParam1, iParam2);
break;
case 6:
func_459(iParam1, iParam2);
break;
case 1:
func_458(iParam1, iParam2);
break;
case 7:
func_457(iParam1, iParam2);
break;
case 10:
func_456(iParam1, iParam2);
break;
case 14:
func_455(iParam1, iParam2);
break;
case 12:
func_454(iParam1, iParam2);
break;
case 5:
func_453(iParam1, iParam2);
break;
case 0:
func_452(iParam1, iParam2);
break;
case 13:
func_451(iParam1);
break;
}}


void func_451(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
case 24:
iVar3=0;
iVar4=0;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_452(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_435(iVar0, iParam0, 0, iParam1);
}


void func_453(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_454(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S9", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P1", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P2", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P3", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P4", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P5", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P6", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P7", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P8", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B1", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B2", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B3", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B4", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B5", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B6", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B7", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B8", 16);
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_455(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 20:
StringCopy(&Var2, "HT_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 22:
StringCopy(&Var2, "HT_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=320;
iVar5=0;
iVar8=1;
break;
case 23:
StringCopy(&Var2, "HT_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=185;
iVar5=0;
iVar8=1;
break;
case 24:
StringCopy(&Var2, "HT_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=245;
iVar5=0;
iVar8=1;
break;
case 25:
StringCopy(&Var2, "HT_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 26:
StringCopy(&Var2, "HT_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 27:
StringCopy(&Var2, "HT_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 29:
StringCopy(&Var2, "HT_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 30:
StringCopy(&Var2, "HT_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "HT_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=415;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=315;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "HT_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "HT_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "HT_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "HT_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "HT_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "HT_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "HT_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "HT_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "HT_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "HT_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "HT_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "HT_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=265;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=170;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=570;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=560;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=260;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=430;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=165;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "HT_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "HT_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "HT_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "HT_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "HT_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=100;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 82:
StringCopy(&Var2, "HT_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 89:
StringCopy(&Var2, "HT_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "HT_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMM_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=1715;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=3900;
iVar5=0;
iVar8=1;
break;
case 101:
StringCopy(&Var2, "HT_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=1550;
iVar5=0;
iVar8=1;
break;
case 102:
StringCopy(&Var2, "HT_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=4250;
iVar5=0;
iVar8=1;
break;
case 104:
StringCopy(&Var2, "HT_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=4460;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=4970;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=290;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=305;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=4170;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=335;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=4940;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=275;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=3620;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=350;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=365;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=380;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMM_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMM_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMM_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMM_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMM_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMM_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMM_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMM_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMM_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMM_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMM_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMM_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMM_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMM_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMM_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMM_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMM_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMM_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMM_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMM_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMM_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMM_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMM_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMM_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 156:
StringCopy(&Var2, "G_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 157:
StringCopy(&Var2, "G_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 158:
StringCopy(&Var2, "G_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 159:
StringCopy(&Var2, "G_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 160:
StringCopy(&Var2, "G_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 161:
StringCopy(&Var2, "G_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 162:
StringCopy(&Var2, "G_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 163:
StringCopy(&Var2, "G_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "G_FMM_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "G_FMM_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 167:
StringCopy(&Var2, "G_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 169:
StringCopy(&Var2, "G_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 170:
StringCopy(&Var2, "G_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "G_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 172:
StringCopy(&Var2, "G_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 173:
StringCopy(&Var2, "G_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 174:
StringCopy(&Var2, "G_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "G_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "G_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=380;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=390;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=950;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=565;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=630;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "G_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "G_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "G_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=265;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=330;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "G_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "G_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "G_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=995;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=610;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=675;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "G_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=4050;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "G_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=4060;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "G_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 211:
StringCopy(&Var2, "G_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 212:
StringCopy(&Var2, "G_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 213:
StringCopy(&Var2, "G_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 214:
StringCopy(&Var2, "G_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 215:
StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=1760;
iVar5=1;
iVar8=3;
break;
case 216:
StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=1375;
iVar5=1;
iVar8=3;
break;
case 217:
StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=1440;
iVar5=1;
iVar8=3;
break;
case 218:
StringCopy(&Var2, "G_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "G_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "G_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "G_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 222:
StringCopy(&Var2, "G_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 227:
StringCopy(&Var2, "G_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 228:
StringCopy(&Var2, "G_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 229:
StringCopy(&Var2, "G_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "G_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "G_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=1445;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=530;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=785;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=850;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 237:
StringCopy(&Var2, "G_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=4260;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=4310;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=4130;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "G_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "G_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "G_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 243:
StringCopy(&Var2, "G_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 245:
StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=1885;
iVar5=1;
iVar8=3;
break;
case 246:
StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=1500;
iVar5=1;
iVar8=3;
break;
case 247:
StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=1565;
iVar5=1;
iVar8=3;
break;
case 248:
StringCopy(&Var2, "G_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 249:
StringCopy(&Var2, "G_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 250:
StringCopy(&Var2, "G_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 251:
StringCopy(&Var2, "G_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "G_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "G_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=4290;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=4150;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=4295;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=6240;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=4955;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=5590;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "G_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4920;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "G_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=4990;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "G_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=4780;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=4775;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=4800;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 271:
StringCopy(&Var2, "G_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 272:
StringCopy(&Var2, "G_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 273:
StringCopy(&Var2, "G_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 274:
StringCopy(&Var2, "G_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 275:
StringCopy(&Var2, "G_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 277:
StringCopy(&Var2, "G_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 278:
StringCopy(&Var2, "G_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=385;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=310;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=3655;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=4055;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=3595;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=3605;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=3645;
iVar5=1;
iVar8=3;
break;
case 285:
StringCopy(&Var2, "G_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=320;
iVar5=1;
iVar8=3;
break;
case 286:
StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 287:
StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 288:
StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 289:
StringCopy(&Var2, "G_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=230;
iVar5=1;
iVar8=3;
break;
case 290:
StringCopy(&Var2, "G_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=1605;
iVar5=1;
iVar8=3;
break;
case 291:
StringCopy(&Var2, "G_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=2230;
iVar5=1;
iVar8=3;
break;
case 292:
StringCopy(&Var2, "G_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 293:
StringCopy(&Var2, "G_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 294:
StringCopy(&Var2, "G_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
case 295:
StringCopy(&Var2, "G_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2205;
iVar5=1;
iVar8=3;
break;
case 296:
StringCopy(&Var2, "G_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=1690;
iVar5=1;
iVar8=3;
break;
case 297:
StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=2715;
iVar5=1;
iVar8=3;
break;
case 298:
StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2330;
iVar5=1;
iVar8=3;
break;
case 299:
StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=2395;
iVar5=1;
iVar8=3;
break;
case 300:
StringCopy(&Var2, "G_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 301:
StringCopy(&Var2, "G_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 302:
StringCopy(&Var2, "G_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 303:
StringCopy(&Var2, "G_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 304:
StringCopy(&Var2, "G_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 305:
StringCopy(&Var2, "G_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 306:
StringCopy(&Var2, "G_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 307:
StringCopy(&Var2, "G_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 308:
StringCopy(&Var2, "G_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=515;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "G_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "G_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 312:
StringCopy(&Var2, "G_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 313:
StringCopy(&Var2, "G_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 314:
StringCopy(&Var2, "G_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=485;
iVar5=1;
iVar8=3;
break;
case 315:
StringCopy(&Var2, "G_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 316:
StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 317:
StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 318:
StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
iVar5=6;
iVar8=4;
break;
case 320:
StringCopy(&Var2, "W_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 324:
StringCopy(&Var2, "W_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=695;
iVar5=6;
iVar8=4;
break;
case 325:
StringCopy(&Var2, "W_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_965[iVar9]) * Global_296940.f_18));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_1086[iVar10]) * Global_296940.f_19));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_1111[iVar11]) * Global_296940.f_20));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 15){
iVar1=round(((to_float(iVar1) * Global_262145.f_1240[iVar12]) * Global_296940.f_21));
}}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_21));
}}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_456(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=5000;
break;
case 2:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=10000;
break;
case 3:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=3;
iVar4=0;
iVar1=5000;
break;
case 4:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=4;
iVar4=0;
iVar1=10000;
break;
case 5:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=5;
iVar4=0;
iVar1=5000;
break;
case 6:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=6;
iVar4=0;
iVar1=10000;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_457(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=3;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=3;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=3;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 17:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 18:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 22:
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 23:
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 25:
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=7;
iVar4=0;
break;
case 39:
iVar3=8;
iVar4=0;
break;
case 40:
iVar3=9;
iVar4=0;
break;
case 41:
iVar3=10;
iVar4=0;
if(Global_262145.f_4182 !=-1){
iVar1=Global_262145.f_4182;
}else{
iVar1=115;
}
break;
case 42:
iVar3=10;
iVar4=1;
if(Global_262145.f_4183 !=-1){
iVar1=Global_262145.f_4183;
}else{
iVar1=125;
}
break;
case 43:
iVar3=10;
iVar4=2;
if(Global_262145.f_4184 !=-1){
iVar1=Global_262145.f_4184;
}else{
iVar1=130;
}
break;
case 44:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 50:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 59:
iVar3=11;
iVar4=2;
if(Global_262145.f_4188 !=-1){
iVar1=Global_262145.f_4188;
}else{
iVar1=725;
}
break;
case 60:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 61:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 62:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 63:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 64:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=12;
iVar4=0;
if(Global_262145.f_4185 !=-1){
iVar1=Global_262145.f_4185;
}else{
iVar1=65;
}
break;
case 74:
iVar3=12;
iVar4=1;
if(Global_262145.f_4186 !=-1){
iVar1=Global_262145.f_4186;
}else{
iVar1=65;
}
break;
case 75:
iVar3=12;
iVar4=2;
if(Global_262145.f_4187 !=-1){
iVar1=Global_262145.f_4187;
}else{
iVar1=95;
}
break;
case 76:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=13;
iVar4=0;
break;
case 90:
iVar3=14;
iVar4=0;
break;
case 91:
iVar3=15;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 92, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_57));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_296940.f_57));
StringCopy(&Var2, "T_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_458(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 26, iParam1);
return;
break;
}
StringCopy(&Var2, "M_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_938[iVar8]) * Global_296940.f_22));
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_459(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=300;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=285;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=180;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=190;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=190;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=165;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=200;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=480;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=155;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=350;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=290;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=165;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=165;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=170;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=155;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=165;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=165;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=160;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=205;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=560;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=275;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=290;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=300;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=360;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=270;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=265;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=295;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=355;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=340;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=285;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=310;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=350;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=305;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=280;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=320;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=115;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=115;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=110;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=125;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=50;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=65;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=65;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=165;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=165;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=185;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=175;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=185;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=460;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=185;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=190;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=165;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=165;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=185;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=175;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=235;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=445;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=185;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=190;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=175;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=215;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=225;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=230;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=235;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=215;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=245;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=225;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=215;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=225;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=230;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=235;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=215;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=425;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=245;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=225;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=135;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=130;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=110;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=140;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=95;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=105;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=105;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=115;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=115;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=115;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=500;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=440;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=1090;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=600;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=1865;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=490;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=470;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=1795;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=1830;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=455;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=455;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=2110;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=380;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=1655;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=2500;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=415;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=730;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=445;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=425;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=410;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=480;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=485;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=480;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=395;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=495;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=2090;
break;
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=450;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=685;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=420;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=365;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=465;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=405;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=400;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=385;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=435;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=375;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=390;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=475;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=430;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=490;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=490;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=615;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=315;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=415;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=425;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=435;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=445;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=640;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=460;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=465;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=745;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=845;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=1420;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=475;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=470;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=1000;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=690;
break;
}
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_681[iVar8]) * Global_296940.f_17));
}
StringCopy(&Var2, "F_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_17));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_460(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=335;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=460;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=455;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=470;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=650;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=385;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=455;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=2150;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=375;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=2190;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=285;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=295;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=445;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=2240;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=465;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=1740;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=1415;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=325;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=345;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=355;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=395;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=315;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=275;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=265;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=305;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=235;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=245;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=1865;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=450;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=415;
break;
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=100;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=55;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=60;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=100;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=65;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=65;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=100;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=100;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=65;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=90;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=75;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=65;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=100;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=100;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=225;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=205;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=215;
break;
case 64:
iVar3=4;
iVar4=0;
iVar1=490;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=485;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2500;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=485;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=100;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=105;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=80;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=90;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=100;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=95;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=100;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=90;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=85;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=80;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=80;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=100;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=95;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=440;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=380;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=80;
break;
case 96:
iVar3=6;
iVar4=0;
iVar1=115;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=140;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=135;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=255;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=325;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=135;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=125;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=120;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=110;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=345;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=745;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=120;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=135;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=345;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=130;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=140;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=130;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=660;
break;
case 128:
iVar3=8;
iVar4=0;
iVar1=150;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=150;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=75;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=90;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=145;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=150;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=110;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=155;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=255;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=165;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1150;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1150;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=1210;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=1125;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=1135;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1145;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=1145;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=845;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=480;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=220;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=100;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=65;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=50;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=100;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=460;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=475;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=470;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=50;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=100;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=100;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=100;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=90;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=105;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=100;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=95;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=95;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=100;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=105;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=100;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=295;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=250;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=285;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=275;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=105;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=100;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=95;
break;
}
StringCopy(&Var2, "L_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_186[iVar8]) * Global_296940.f_15));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_15));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_461(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_462(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
case 36:
iVar3=8;
iVar4=0;
break;
case 37:
iVar3=8;
iVar4=1;
break;
case 38:
iVar3=8;
iVar4=2;
break;
case 39:
iVar3=8;
iVar4=3;
break;
case 40:
iVar3=8;
iVar4=4;
break;
case 41:
iVar3=9;
iVar4=0;
break;
case 42:
iVar3=9;
iVar4=1;
break;
case 43:
iVar3=9;
iVar4=2;
break;
case 44:
iVar3=9;
iVar4=3;
break;
case 45:
iVar3=9;
iVar4=4;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_463(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=0;
iVar4=6;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=0;
iVar4=9;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=0;
iVar4=10;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=0;
iVar4=12;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=0;
iVar4=13;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=0;
iVar4=14;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=0;
iVar4=15;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=1;
iVar4=9;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=1;
iVar4=10;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=1;
iVar4=13;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=1;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 32:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=2;
iVar4=0;
iVar1=250;
break;
case 33:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=2;
iVar4=2;
iVar1=50;
break;
case 35:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=2;
iVar4=3;
iVar1=90;
break;
case 36:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=2;
iVar4=4;
iVar1=210;
break;
case 37:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=2;
iVar4=5;
iVar1=200;
break;
case 38:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=2;
iVar4=6;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=2;
iVar4=7;
iVar1=130;
break;
case 40:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=2;
iVar4=8;
iVar1=220;
break;
case 41:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=2;
iVar4=9;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=2;
iVar4=10;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=2;
iVar4=11;
iVar1=220;
break;
case 44:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=2;
iVar4=12;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=2;
iVar4=13;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=2;
iVar4=14;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=2;
iVar4=15;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=3;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 49:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=3;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 50:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=3;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 51:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=3;
iVar4=5;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=3;
iVar4=6;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=3;
iVar4=7;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=3;
iVar4=8;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=3;
iVar4=9;
bVar0=true;
break;
case 58:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=3;
iVar4=10;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=3;
iVar4=11;
bVar0=true;
break;
case 60:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=3;
iVar4=12;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=3;
iVar4=13;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=3;
iVar4=14;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=3;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 64:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=4;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 65:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=4;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 66:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=4;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 67:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=80;
iVar1=round((to_float(iVar1) * Global_262145.f_443[80]));
break;
case 81:
StringCopy(&Var2, "U_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[81]));
break;
case 82:
StringCopy(&Var2, "U_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[82]));
break;
case 83:
StringCopy(&Var2, "U_FMM_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMM_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMM_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMM_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "U_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[87]));
break;
case 88:
StringCopy(&Var2, "U_FMM_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMM_5_9", 16);
iVar3=5;
iVar4=9;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMM_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMM_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMM_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMM_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMM_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "U_FMM_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 96:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=6;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 97:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=6;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 98:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=6;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 99:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=6;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 100:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=6;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 101:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=6;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 102:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=6;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 103:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=6;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 104:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=6;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 105:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=6;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 106:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=6;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 107:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=6;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 108:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=6;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 109:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=6;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 110:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=6;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 111:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=6;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
case 112:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=7;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 113:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=7;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 114:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=7;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 115:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=7;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 116:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=7;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 117:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=7;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 118:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=7;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 119:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=7;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 120:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=7;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 121:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=7;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 122:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=7;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 123:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=7;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 124:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=7;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 125:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=7;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 126:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=7;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 127:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=7;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
}
switch (iParam0){
case 128:
StringCopy(&Var2, "U_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "U_FMM_8_1", 16);
iVar3=8;
iVar4=1;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMM_8_2", 16);
iVar3=8;
iVar4=2;
bVar0=true;
break;
case 131:
StringCopy(&Var2, "U_FMM_8_3", 16);
iVar3=8;
iVar4=3;
bVar0=true;
break;
case 132:
StringCopy(&Var2, "U_FMM_8_4", 16);
iVar3=8;
iVar4=4;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMM_8_5", 16);
iVar3=8;
iVar4=5;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMM_8_6", 16);
iVar3=8;
iVar4=6;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMM_8_7", 16);
iVar3=8;
iVar4=7;
bVar0=true;
break;
case 136:
StringCopy(&Var2, "U_FMM_8_8", 16);
iVar3=8;
iVar4=8;
bVar0=true;
break;
case 137:
StringCopy(&Var2, "U_FMM_8_9", 16);
iVar3=8;
iVar4=9;
bVar0=true;
break;
case 138:
StringCopy(&Var2, "U_FMM_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 139:
StringCopy(&Var2, "U_FMM_8_11", 16);
iVar3=8;
iVar4=11;
bVar0=true;
break;
case 140:
StringCopy(&Var2, "U_FMM_8_12", 16);
iVar3=8;
iVar4=12;
bVar0=true;
break;
case 141:
StringCopy(&Var2, "U_FMM_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 142:
StringCopy(&Var2, "U_FMM_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 143:
StringCopy(&Var2, "U_FMM_8_15", 16);
iVar3=8;
iVar4=15;
bVar0=true;
break;
case 144:
StringCopy(&Var2, "U_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 145:
StringCopy(&Var2, "U_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 146:
StringCopy(&Var2, "U_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 147:
StringCopy(&Var2, "U_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 148:
StringCopy(&Var2, "U_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 149:
StringCopy(&Var2, "U_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 150:
StringCopy(&Var2, "U_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 151:
StringCopy(&Var2, "U_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 152:
StringCopy(&Var2, "U_FMM_9_8", 16);
iVar3=9;
iVar4=8;
bVar0=true;
break;
case 153:
StringCopy(&Var2, "U_FMM_9_9", 16);
iVar3=9;
iVar4=9;
bVar0=true;
break;
case 154:
StringCopy(&Var2, "U_FMM_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 155:
StringCopy(&Var2, "U_FMM_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 156:
StringCopy(&Var2, "U_FMM_9_12", 16);
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 157:
StringCopy(&Var2, "U_FMM_9_13", 16);
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 158:
StringCopy(&Var2, "U_FMM_9_14", 16);
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 159:
StringCopy(&Var2, "U_FMM_9_15", 16);
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 160:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=10;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 161:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=10;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 162:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=10;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 163:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=10;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 164:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=10;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 165:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=10;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 166:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=10;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 167:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=10;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 168:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=10;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 169:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=10;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 170:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=10;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 171:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=10;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 172:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=10;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 173:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=10;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 174:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=10;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 175:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=10;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
case 176:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=11;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 177:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=11;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 178:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=11;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 179:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=11;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 180:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=11;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 181:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=11;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 182:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=11;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 183:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=11;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 184:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=11;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 185:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=11;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 186:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=11;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 187:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=11;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 188:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=11;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 189:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=11;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 190:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=11;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 191:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=11;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
}
switch (iParam0){
case 192:
StringCopy(&Var2, "U_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 193:
StringCopy(&Var2, "U_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 194:
StringCopy(&Var2, "U_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 195:
StringCopy(&Var2, "U_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 196:
StringCopy(&Var2, "U_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 197:
StringCopy(&Var2, "U_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 198:
StringCopy(&Var2, "U_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 199:
StringCopy(&Var2, "U_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 200:
StringCopy(&Var2, "U_FMM_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 201:
StringCopy(&Var2, "U_FMM_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 202:
StringCopy(&Var2, "U_FMM_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 203:
StringCopy(&Var2, "U_FMM_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 204:
StringCopy(&Var2, "U_FMM_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 205:
StringCopy(&Var2, "U_FMM_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 206:
StringCopy(&Var2, "U_FMM_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 207:
StringCopy(&Var2, "U_FMM_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 208:
StringCopy(&Var2, "U_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 209:
StringCopy(&Var2, "U_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 210:
StringCopy(&Var2, "U_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 211:
StringCopy(&Var2, "U_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 212:
StringCopy(&Var2, "U_FMM_13_4", 16);
iVar3=13;
iVar4=4;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "U_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 214:
StringCopy(&Var2, "U_FMM_13_6", 16);
iVar3=13;
iVar4=6;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "U_FMM_13_7", 16);
iVar3=13;
iVar4=7;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "U_FMM_13_8", 16);
iVar3=13;
iVar4=8;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "U_FMM_13_9", 16);
iVar3=13;
iVar4=9;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "U_FMM_13_10", 16);
iVar3=13;
iVar4=10;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "U_FMM_13_11", 16);
iVar3=13;
iVar4=11;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "U_FMM_13_12", 16);
iVar3=13;
iVar4=12;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "U_FMM_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 222:
StringCopy(&Var2, "U_FMM_13_14", 16);
iVar3=13;
iVar4=14;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "U_FMM_13_15", 16);
iVar3=13;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 224:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=14;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[16]));
break;
case 225:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=14;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[17]));
break;
case 226:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=14;
iVar4=2;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=14;
iVar4=3;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_443[19]));
break;
case 228:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=14;
iVar4=4;
iVar1=315;
iVar1=round((to_float(iVar1) * Global_262145.f_443[20]));
break;
case 229:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=14;
iVar4=5;
iVar1=215;
iVar1=round((to_float(iVar1) * Global_262145.f_443[21]));
break;
case 230:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=14;
iVar4=6;
iVar1=265;
iVar1=round((to_float(iVar1) * Global_262145.f_443[22]));
break;
case 231:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=14;
iVar4=7;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[23]));
break;
case 232:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=14;
iVar4=8;
iVar1=205;
iVar1=round((to_float(iVar1) * Global_262145.f_443[24]));
break;
case 233:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=14;
iVar4=9;
bVar0=true;
break;
case 234:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=14;
iVar4=10;
bVar0=true;
break;
case 235:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=14;
iVar4=11;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[27]));
break;
case 236:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=14;
iVar4=12;
iVar1=55;
iVar1=round((to_float(iVar1) * Global_262145.f_443[28]));
break;
case 237:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=14;
iVar4=13;
bVar0=true;
break;
case 238:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=14;
iVar4=14;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_443[30]));
break;
case 239:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=14;
iVar4=15;
bVar0=true;
break;
case 240:
StringCopy(&Var2, "U_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar1=round((to_float(iVar1) * Global_262145.f_443[32]));
break;
}
if(iParam0==23 || iParam0==231){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(55) * Global_262145.f_443[28]));
}}elseif(iParam0 >=0 && iParam0 < 32){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar8]));
}}elseif(iParam0 >=32 && iParam0 < 48){
iVar9=(iParam0 - 32);
if(iVar9 >=0 && iVar9 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar9]));
}}elseif(iParam0 >=128 && iParam0 < 160){
iVar10=(iParam0 - 160) + 124;
if(iVar10 >=0 && iVar10 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar10]));
}}elseif(iParam0 >=192 && iParam0 < 224){
iVar11=(iParam0 - 160) + 188;
if(iVar11 >=0 && iVar11 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar11]));
}}
iVar1=round((to_float(iVar1) * Global_296940.f_16));
if(iParam0 >=241){
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 241, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_464(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=160;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=205;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=110;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=150;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=115;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=115;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=150;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=150;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=115;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=140;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=125;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=115;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=150;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=150;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=275;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=460;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=260;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=965;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2520;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=350;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=150;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=3125;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=80;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=45;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=50;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2485;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=2945;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=3080;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=2990;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=3750;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=515;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=530;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=2810;
break;
case 108:
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 109:
iVar3=7;
iVar4=1;
iVar1=155;
break;
case 110:
iVar3=7;
iVar4=2;
iVar1=320;
break;
case 111:
iVar3=7;
iVar4=3;
iVar1=140;
break;
case 112:
iVar3=7;
iVar4=4;
iVar1=150;
break;
case 113:
iVar3=7;
iVar4=5;
iVar1=145;
break;
case 114:
iVar3=7;
iVar4=6;
iVar1=150;
break;
case 115:
iVar3=7;
iVar4=7;
iVar1=140;
break;
case 116:
iVar3=7;
iVar4=8;
iVar1=135;
break;
case 117:
iVar3=7;
iVar4=9;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=10;
iVar1=130;
break;
case 119:
iVar3=7;
iVar4=11;
iVar1=150;
break;
case 120:
iVar3=7;
iVar4=12;
iVar1=145;
break;
case 121:
iVar3=7;
iVar4=13;
iVar1=740;
break;
case 122:
iVar3=7;
iVar4=14;
iVar1=790;
break;
case 123:
iVar3=7;
iVar4=15;
iVar1=130;
break;
}
switch (iParam0){
case 124:
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 125:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 128:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 129:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 135:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 138:
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 139:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 141:
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 142:
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 143:
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 144:
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 145:
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 146:
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 147:
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 148:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 151:
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 152:
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 153:
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 154:
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 155:
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 156:
iVar3=10;
iVar4=0;
iVar1=505;
break;
case 157:
iVar3=10;
iVar4=1;
iVar1=470;
break;
case 158:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 159:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 160:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 161:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=11;
iVar4=0;
iVar1=120;
break;
case 173:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 174:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=7;
iVar1=90;
break;
case 180:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=14;
iVar1=2450;
break;
case 187:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 188:
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 189:
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 190:
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 191:
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 192:
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 193:
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 194:
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 195:
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 196:
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 197:
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 198:
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 199:
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 200:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 205:
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 206:
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 207:
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 208:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 210:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 218:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 220:
iVar3=14;
iVar4=0;
iVar1=420;
break;
case 221:
iVar3=14;
iVar4=1;
iVar1=415;
break;
case 222:
iVar3=14;
iVar4=2;
iVar1=440;
break;
case 223:
iVar3=14;
iVar4=3;
iVar1=385;
break;
case 224:
iVar3=14;
iVar4=4;
iVar1=330;
break;
case 225:
iVar3=14;
iVar4=5;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=6;
iVar1=340;
break;
case 227:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 228:
iVar3=14;
iVar4=8;
iVar1=295;
break;
case 229:
iVar3=14;
iVar4=9;
iVar1=340;
break;
case 230:
iVar3=14;
iVar4=10;
iVar1=325;
break;
case 231:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 232:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 233:
iVar3=14;
iVar4=13;
iVar1=440;
break;
case 234:
iVar3=14;
iVar4=14;
iVar1=325;
break;
case 235:
iVar3=14;
iVar4=15;
iVar1=325;
break;
case 236:
iVar3=15;
iVar4=0;
break;
}
StringCopy(&Var2, "U_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==23){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_296940.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_16));
}elseif(iParam0==28){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_296940.f_16));
}else{
iVar1=round(((to_float(55) * Global_262145.f_443[28]) * Global_296940.f_16));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round(((to_float(iVar1) * Global_262145.f_443[iVar8]) * Global_296940.f_16));
}}
if(iParam0 >=237){
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 237, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_465(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[15]));
break;
case 18:
iVar3=3;
iVar4=5;
iVar1=0;
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[16]));
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[17]));
break;
case 21:
iVar3=4;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[18]));
break;
case 22:
iVar3=4;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[19]));
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[20]));
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 25:
iVar3=4;
iVar4=6;
iVar1=0;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[21]));
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[22]));
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[23]));
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[24]));
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[25]));
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[26]));
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[27]));
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[28]));
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[29]));
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[30]));
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
break;
case 38:
iVar3=7;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[31]));
break;
case 39:
iVar3=7;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[32]));
break;
case 40:
iVar3=7;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[33]));
break;
case 41:
iVar3=7;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[34]));
break;
case 42:
iVar3=7;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[35]));
break;
case 43:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 44:
iVar3=7;
iVar4=6;
iVar1=0;
break;
case 45:
iVar3=8;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[36]));
break;
case 46:
iVar3=8;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[37]));
break;
case 47:
iVar3=8;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[38]));
break;
case 48:
iVar3=8;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[39]));
break;
case 49:
iVar3=8;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[40]));
break;
case 50:
iVar3=9;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[41]));
break;
case 51:
iVar3=9;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[42]));
break;
case 52:
iVar3=9;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[43]));
break;
case 53:
iVar3=9;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[44]));
break;
case 54:
iVar3=9;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[45]));
break;
case 55:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 56:
iVar3=9;
iVar4=6;
iVar1=0;
break;
case 57:
iVar3=10;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[46]));
break;
case 58:
iVar3=10;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[47]));
break;
case 59:
iVar3=10;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[48]));
break;
case 60:
iVar3=10;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[49]));
break;
case 61:
iVar3=10;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[50]));
break;
case 62:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 63:
iVar3=11;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[51]));
break;
case 64:
iVar3=11;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[52]));
break;
case 65:
iVar3=11;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[53]));
break;
case 66:
iVar3=11;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[54]));
break;
case 67:
iVar3=11;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[55]));
break;
case 68:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 69:
iVar3=12;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[56]));
break;
case 70:
iVar3=12;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[57]));
break;
case 71:
iVar3=12;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[58]));
break;
case 72:
iVar3=12;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[59]));
break;
case 73:
iVar3=12;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[60]));
break;
case 74:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[61]));
break;
case 75:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[62]));
break;
case 76:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[63]));
break;
case 77:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[64]));
break;
case 78:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[65]));
break;
case 79:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 80:
iVar3=14;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[66]));
break;
case 81:
iVar3=14;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[67]));
break;
case 82:
iVar3=14;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[68]));
break;
case 83:
iVar3=14;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[69]));
break;
case 84:
iVar3=14;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[70]));
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_435(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_424(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_466(){
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
StringCopy(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_467(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_470(iParam0)==14192){
return 0;
}
uVar0=func_469(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_468(iVar1));
}

int func_468(int iParam0){
return (iParam0 % 32);
}

int func_469(var uParam0, int iParam1){
int iVar0;
iVar0=func_427(func_470(uParam0), iParam1, 0);
return iVar0;
}

int func_470(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_472(iVar0);
if((func_346()==0 || func_471()==0) || (func_346()==999 && func_471()==999)){
switch (iVar1){
case 0:
return 1039;
break;
case 1:
return 1040;
break;
case 2:
return 1041;
break;
case 3:
return 1042;
break;
case 4:
return 1043;
break;
case 5:
return 1503;
break;
case 6:
return 1758;
break;
case 7:
return 1952;
break;
case 8:
return 1953;
break;
case 9:
return 1954;
break;
case 10:
return 1955;
break;
case 11:
return 1956;
break;
case 12:
return 1957;
break;
case 13:
return 2424;
break;
case 14:
return 2444;
break;
case 15:
return 2447;
break;
case 16:
return 2450;
break;
case 17:
return 2614;
break;
case 18:
return 2617;
break;
case 19:
return 2620;
break;
case 20:
return 3786;
break;
case 21:
return 3789;
break;
case 22:
return 3864;
break;
case 23:
return 3867;
break;
case 24:
return 3870;
break;
case 25:
return 3873;
break;
case 26:
return 5364;
break;
case 27:
return 5367;
break;
case 28:
return 5469;
break;
case 29:
return 5472;
break;
case 30:
return 6431;
break;
case 31:
return 6434;
break;
case 32:
return 7255;
break;
case 33:
return 7258;
break;
case 34:
return 7261;
break;
case 35:
return 7970;
break;
case 36:
return 7973;
break;
case 37:
return 7976;
break;
case 38:
return 7979;
break;
case 39:
return 8501;
break;
case 40:
return 8504;
break;
case 41:
return 8507;
break;
case 42:
return 8510;
break;
case 43:
return 8906;
break;
case 44:
return 8909;
break;
case 45:
return 8912;
break;
case 46:
return 10287;
break;
case 47:
return 10290;
break;
case 48:
return 10413;
break;
case 49:
return 10416;
break;
case 50:
return 11824;
break;
case 51:
return 11827;
break;
}}
return 14192;
}

int func_471(){
return Global_32164;
}

int func_472(int iParam0){
return (iParam0 / 32);
}


bool func_473(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_19();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_474(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_475(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==12){
iVar2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
if(Var0.f_1==iParam1){
return (func_478(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_477(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_436(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_476(iParam0, func_436(iParam2)) + iVar4);
}}
return -99;
}

int func_476(int iParam0, int iParam1){
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

int func_477(int iParam0){
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

int func_478(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}

int func_479(int iParam0){
switch (iParam0){
case 1605135005:
case 461611711:
case 99858221:
case 213255460:
case -197848144:
case 2130504112:
case 1710404355:
case -1469882278:
case -2101744495:
case -1661253242:
case 841763679:
case 138092552:
case 1069377153:
case 513166526:
case -843709836:
case -410952059:
case 673800403:
case -2099479637:
return 1;
break;
case -1655013310:
case -8081421:
case 1136959044:
case 1252591238:
case -1662464917:
case 439944869:
case 1311829745:
case 1376594947:
case 925416247:
case -993141292:
case -794186434:
case 1033338279:
case 1956717889:
case -1069968045:
case 205194150:
case 1019798721:
case -782196529:
case -3146323:
case 1530696889:
case 1301510495:
case 339475450:
case 1494189484:
case -2124289883:
case 1353353015:
case -156491260:
case 1232357267:
case -921734020:
case -1509312284:
case 2103965964:
case -1709127394:
case -727053399:
case 425828250:
case -731306227:
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
case -1411572922:
case 1655606115:
case -1687399299:
case -921932467:
case -1516214043:
case -1757640274:
case 654371756:
case 340755414:
case -120058021:
case 583082169:
case 44442359:
case 2145704703:
case -723499156:
case -1907623987:
case 222672970:
case 818396254:
case -544285475:
case 514398241:
case -375328511:
case -2081103177:
case -1142876798:
case -2104434705:
case -551157269:
case -1881446972:
case 292021870:
case 1719833363:
case -1035974624:
case 1956294467:
case -192205643:
case 1894950891:
case -947334499:
case 2114667036:
case -111757768:
case -783423328:
case -593232685:
case -1223936995:
case -1895527326:
case 1259618253:
case -1416608391:
case -1905506688:
case 1186233287:
case 952605492:
case -1997903306:
case -1952569676:
case -1975121276:
case 441259453:
case -1734858968:
case -751171688:
case 2066009771:
case -1497080576:
case -231360453:
case -91981822:
case -378776327:
case -1886485930:
case -602915326:
case 321893176:
case 969275756:
case 44864034:
return 11;
break;
case 1544949032:
case 609473027:
case 1505804828:
case -1839009993:
case -608876472:
case 1334957776:
case -1963845403:
case 882420786:
case 732574088:
case -824927683:
case 492344549:
case -522764734:
case 955216856:
case -756304130:
case -1622267676:
case -1099489536:
return 4;
break;
case -1759130267:
case -2109654177:
case 1207735097:
case -133674528:
case -36216721:
case 1244363453:
case -1943948059:
case -2070991003:
case -683062477:
case -617653084:
case 388773720:
case -2098938846:
case 471019161:
case 692557212:
case 165186084:
case -498759787:
case 493498543:
case -292085704:
case -2056426364:
case 1986396785:
case -1883471582:
case -1397788925:
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
return 14;
break;
case 498873860:
case -126601887:
case 1985248855:
case -875041851:
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
return 6;
break;
case 652173018:
case -1189158251:
case -315422177:
case -1832379936:
return 7;
break;
case -1256711400:
case 1298977992:
return 10;
break;
case 1226096741:
case 1745898052:
case 534801913:
case 430517623:
case 765528446:
case 1154188219:
case 72595168:
case 1980524092:
return 12;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return 1;
break;
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return 12;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return 4;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return 11;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return 14;
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return 10;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
case joaat("dlc_mp_sum2_m_berd_7_0"):
case joaat("dlc_mp_sum2_f_berd_7_0"):
case joaat("dlc_mp_sum2_m_berd_8_0"):
case joaat("dlc_mp_sum2_f_berd_8_0"):
case joaat("dlc_mp_sum2_m_berd_9_0"):
case joaat("dlc_mp_sum2_f_berd_9_0"):
case joaat("dlc_mp_sum2_m_berd_9_1"):
case joaat("dlc_mp_sum2_f_berd_9_1"):
case joaat("dlc_mp_sum2_m_berd_9_2"):
case joaat("dlc_mp_sum2_f_berd_9_2"):
case joaat("dlc_mp_sum2_m_berd_10_0"):
case joaat("dlc_mp_sum2_f_berd_10_0"):
case joaat("dlc_mp_sum2_m_berd_10_1"):
case joaat("dlc_mp_sum2_f_berd_10_1"):
case joaat("dlc_mp_sum2_m_berd_10_2"):
case joaat("dlc_mp_sum2_f_berd_10_2"):
case joaat("dlc_mp_sum2_m_berd_10_3"):
case joaat("dlc_mp_sum2_f_berd_10_3"):
case joaat("dlc_mp_sum2_m_berd_10_4"):
case joaat("dlc_mp_sum2_f_berd_10_4"):
case joaat("dlc_mp_sum2_m_berd_10_5"):
case joaat("dlc_mp_sum2_f_berd_10_5"):
case joaat("dlc_mp_sum2_m_berd_10_6"):
case joaat("dlc_mp_sum2_f_berd_10_6"):
case joaat("dlc_mp_sum2_m_berd_10_7"):
case joaat("dlc_mp_sum2_f_berd_10_7"):
case joaat("dlc_mp_sum2_m_berd_10_8"):
case joaat("dlc_mp_sum2_f_berd_10_8"):
case joaat("dlc_mp_sum2_m_berd_10_9"):
case joaat("dlc_mp_sum2_f_berd_10_9"):
case joaat("dlc_mp_sum2_m_berd_10_10"):
case joaat("dlc_mp_sum2_f_berd_10_10"):
case joaat("dlc_mp_sum2_m_berd_10_11"):
case joaat("dlc_mp_sum2_f_berd_10_11"):
case joaat("dlc_mp_sum2_m_berd_10_12"):
case joaat("dlc_mp_sum2_f_berd_10_12"):
case joaat("dlc_mp_sum2_m_berd_10_13"):
case joaat("dlc_mp_sum2_f_berd_10_13"):
case joaat("dlc_mp_sum2_m_berd_10_14"):
case joaat("dlc_mp_sum2_f_berd_10_14"):
case joaat("dlc_mp_sum2_m_berd_10_15"):
case joaat("dlc_mp_sum2_f_berd_10_15"):
case joaat("dlc_mp_sum2_m_berd_10_16"):
case joaat("dlc_mp_sum2_f_berd_10_16"):
case joaat("dlc_mp_sum2_m_berd_10_17"):
case joaat("dlc_mp_sum2_f_berd_10_17"):
case joaat("dlc_mp_sum2_m_berd_10_18"):
case joaat("dlc_mp_sum2_f_berd_10_18"):
case joaat("dlc_mp_sum2_m_berd_10_19"):
case joaat("dlc_mp_sum2_f_berd_10_19"):
case joaat("dlc_mp_sum2_m_berd_10_20"):
case joaat("dlc_mp_sum2_f_berd_10_20"):
case joaat("dlc_mp_sum2_m_berd_10_21"):
case joaat("dlc_mp_sum2_f_berd_10_21"):
case joaat("dlc_mp_sum2_m_berd_10_22"):
case joaat("dlc_mp_sum2_f_berd_10_22"):
case joaat("dlc_mp_sum2_m_berd_10_23"):
case joaat("dlc_mp_sum2_f_berd_10_23"):
case joaat("dlc_mp_sum2_m_berd_10_24"):
case joaat("dlc_mp_sum2_f_berd_10_24"):
case joaat("dlc_mp_sum2_m_berd_10_25"):
case joaat("dlc_mp_sum2_f_berd_10_25"):
case joaat("dlc_mp_sum2_m_berd_0_0"):
case joaat("dlc_mp_sum2_f_berd_0_0"):
case joaat("dlc_mp_sum2_m_berd_1_0"):
case joaat("dlc_mp_sum2_f_berd_1_0"):
case joaat("dlc_mp_sum2_m_berd_1_1"):
case joaat("dlc_mp_sum2_f_berd_1_1"):
case joaat("dlc_mp_sum2_m_berd_1_2"):
case joaat("dlc_mp_sum2_f_berd_1_2"):
case joaat("dlc_mp_sum2_m_berd_3_0"):
case joaat("dlc_mp_sum2_f_berd_3_0"):
case joaat("dlc_mp_sum2_m_berd_4_0"):
case joaat("dlc_mp_sum2_f_berd_4_0"):
return 1;
break;
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return 12;
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
case joaat("dlc_mp_sum2_f_legs_0_0"):
case joaat("dlc_mp_sum2_m_legs_2_1"):
case joaat("dlc_mp_sum2_f_legs_0_1"):
return 4;
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
case joaat("dlc_mp_sum2_f_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_14_0"):
case joaat("dlc_mp_sum2_f_jbib_19_0"):
case joaat("dlc_mp_sum2_m_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_16_0"):
case joaat("dlc_mp_sum2_f_jbib_20_0"):
case joaat("dlc_mp_sum2_m_jbib_15_1"):
case joaat("dlc_mp_sum2_m_jbib_16_1"):
case joaat("dlc_mp_sum2_f_jbib_20_1"):
case joaat("dlc_mp_sum2_m_jbib_15_2"):
case joaat("dlc_mp_sum2_m_jbib_16_2"):
case joaat("dlc_mp_sum2_f_jbib_20_2"):
case joaat("dlc_mp_sum2_m_jbib_17_0"):
case joaat("dlc_mp_sum2_f_jbib_8_0"):
case joaat("dlc_mp_sum2_m_jbib_7_0"):
case joaat("dlc_mp_sum2_m_jbib_8_0"):
case joaat("dlc_mp_sum2_f_jbib_24_0"):
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_phead_6_0"):
case joaat("dlc_mp_sum2_f_phead_6_0"):
case joaat("dlc_mp_sum2_m_phead_6_1"):
case joaat("dlc_mp_sum2_f_phead_6_1"):
case joaat("dlc_mp_sum2_m_phead_6_2"):
case joaat("dlc_mp_sum2_f_phead_6_2"):
case joaat("dlc_mp_sum2_m_phead_6_3"):
case joaat("dlc_mp_sum2_f_phead_6_3"):
case joaat("dlc_mp_sum2_m_phead_6_4"):
case joaat("dlc_mp_sum2_f_phead_6_4"):
case joaat("dlc_mp_sum2_m_phead_6_5"):
case joaat("dlc_mp_sum2_f_phead_6_5"):
case joaat("dlc_mp_sum2_m_phead_6_6"):
case joaat("dlc_mp_sum2_f_phead_6_6"):
case joaat("dlc_mp_sum2_m_phead_6_7"):
case joaat("dlc_mp_sum2_f_phead_6_7"):
case joaat("dlc_mp_sum2_m_phead_6_8"):
case joaat("dlc_mp_sum2_f_phead_6_8"):
case joaat("dlc_mp_sum2_m_phead_6_9"):
case joaat("dlc_mp_sum2_f_phead_6_9"):
case joaat("dlc_mp_sum2_m_phead_6_10"):
case joaat("dlc_mp_sum2_f_phead_6_10"):
case joaat("dlc_mp_sum2_m_phead_6_11"):
case joaat("dlc_mp_sum2_f_phead_6_11"):
case joaat("dlc_mp_sum2_m_phead_6_12"):
case joaat("dlc_mp_sum2_f_phead_6_12"):
case joaat("dlc_mp_sum2_m_phead_6_13"):
case joaat("dlc_mp_sum2_f_phead_6_13"):
case joaat("dlc_mp_sum2_m_phead_0_0"):
case joaat("dlc_mp_sum2_m_phead_1_0"):
case joaat("dlc_mp_sum2_f_phead_0_0"):
case joaat("dlc_mp_sum2_f_phead_1_0"):
case joaat("dlc_mp_sum2_m_phead_2_0"):
case joaat("dlc_mp_sum2_m_phead_4_0"):
case joaat("dlc_mp_sum2_f_phead_2_0"):
case joaat("dlc_mp_sum2_f_phead_4_0"):
case joaat("dlc_mp_sum2_m_phead_2_1"):
case joaat("dlc_mp_sum2_m_phead_4_1"):
case joaat("dlc_mp_sum2_f_phead_2_1"):
case joaat("dlc_mp_sum2_f_phead_4_1"):
case joaat("dlc_mp_sum2_m_phead_3_0"):
case joaat("dlc_mp_sum2_m_phead_7_0"):
case joaat("dlc_mp_sum2_f_phead_3_0"):
case joaat("dlc_mp_sum2_f_phead_7_0"):
case joaat("dlc_mp_sum2_m_phead_8_0"):
case joaat("dlc_mp_sum2_f_phead_8_0"):
case joaat("dlc_mp_sum2_m_pears_0_0"):
case joaat("dlc_mp_sum2_f_pears_0_0"):
case joaat("dlc_mp_sum2_m_pears_0_1"):
case joaat("dlc_mp_sum2_f_pears_0_1"):
case joaat("dlc_mp_sum2_m_pears_0_2"):
case joaat("dlc_mp_sum2_f_pears_0_2"):
case joaat("dlc_mp_sum2_m_pears_0_3"):
case joaat("dlc_mp_sum2_f_pears_0_3"):
case joaat("dlc_mp_sum2_m_pears_0_4"):
case joaat("dlc_mp_sum2_f_pears_0_4"):
case joaat("dlc_mp_sum2_m_pears_0_5"):
case joaat("dlc_mp_sum2_f_pears_0_5"):
case joaat("dlc_mp_sum2_m_pears_0_6"):
case joaat("dlc_mp_sum2_f_pears_0_6"):
case joaat("dlc_mp_sum2_m_pears_0_7"):
case joaat("dlc_mp_sum2_f_pears_0_7"):
case joaat("dlc_mp_sum2_m_pears_0_8"):
case joaat("dlc_mp_sum2_f_pears_0_8"):
case joaat("dlc_mp_sum2_m_pears_0_9"):
case joaat("dlc_mp_sum2_f_pears_0_9"):
case joaat("dlc_mp_sum2_m_pears_0_10"):
case joaat("dlc_mp_sum2_f_pears_0_10"):
case joaat("dlc_mp_sum2_m_pears_0_11"):
case joaat("dlc_mp_sum2_f_pears_0_11"):
return 14;
break;
case joaat("dlc_mp_sum2_m_special_1_0"):
case joaat("dlc_mp_sum2_f_special_1_0"):
return 8;
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
case joaat("dlc_mp_sum2_f_feet_5_0"):
case joaat("dlc_mp_sum2_m_feet_5_1"):
case joaat("dlc_mp_sum2_f_feet_5_1"):
case joaat("dlc_mp_sum2_m_feet_5_2"):
case joaat("dlc_mp_sum2_f_feet_5_2"):
case joaat("dlc_mp_sum2_m_feet_5_3"):
case joaat("dlc_mp_sum2_f_feet_5_3"):
case joaat("dlc_mp_sum2_m_feet_5_4"):
case joaat("dlc_mp_sum2_f_feet_5_4"):
case joaat("dlc_mp_sum2_m_feet_5_5"):
case joaat("dlc_mp_sum2_f_feet_5_5"):
case joaat("dlc_mp_sum2_m_feet_5_6"):
case joaat("dlc_mp_sum2_f_feet_5_6"):
case joaat("dlc_mp_sum2_m_feet_5_7"):
case joaat("dlc_mp_sum2_f_feet_5_7"):
case joaat("dlc_mp_sum2_m_feet_5_8"):
case joaat("dlc_mp_sum2_f_feet_5_8"):
case joaat("dlc_mp_sum2_m_feet_6_0"):
case joaat("dlc_mp_sum2_f_feet_6_0"):
case joaat("dlc_mp_sum2_m_feet_6_1"):
case joaat("dlc_mp_sum2_f_feet_6_1"):
case joaat("dlc_mp_sum2_m_feet_6_2"):
case joaat("dlc_mp_sum2_f_feet_6_2"):
case joaat("dlc_mp_sum2_m_feet_6_3"):
case joaat("dlc_mp_sum2_f_feet_6_3"):
case joaat("dlc_mp_sum2_m_feet_6_4"):
case joaat("dlc_mp_sum2_f_feet_6_4"):
case joaat("dlc_mp_sum2_m_feet_6_5"):
case joaat("dlc_mp_sum2_f_feet_6_5"):
case joaat("dlc_mp_sum2_m_feet_6_6"):
case joaat("dlc_mp_sum2_f_feet_6_6"):
case joaat("dlc_mp_sum2_m_feet_6_7"):
case joaat("dlc_mp_sum2_f_feet_6_7"):
case joaat("dlc_mp_sum2_m_feet_6_8"):
case joaat("dlc_mp_sum2_f_feet_6_8"):
case joaat("dlc_mp_sum2_m_feet_6_9"):
case joaat("dlc_mp_sum2_f_feet_6_9"):
case joaat("dlc_mp_sum2_m_feet_6_10"):
case joaat("dlc_mp_sum2_f_feet_6_10"):
case joaat("dlc_mp_sum2_m_feet_6_11"):
case joaat("dlc_mp_sum2_f_feet_6_11"):
case joaat("dlc_mp_sum2_m_feet_6_12"):
case joaat("dlc_mp_sum2_f_feet_6_12"):
case joaat("dlc_mp_sum2_m_feet_6_13"):
case joaat("dlc_mp_sum2_f_feet_6_13"):
case joaat("dlc_mp_sum2_m_feet_6_14"):
case joaat("dlc_mp_sum2_f_feet_6_14"):
return 6;
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return 11;
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return 11;
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return 1;
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return 10;
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return 11;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return 12;
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return 11;
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return 0;
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return 0;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return 12;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return 12;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return 12;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return 11;
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return 4;
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return 0;
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return 10;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return 5;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return 0;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return 7;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return 1;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return 0;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum_m_berd_3_4"):
case joaat("dlc_mp_sum_f_berd_3_4"):
case joaat("dlc_mp_sum_m_berd_3_5"):
case joaat("dlc_mp_sum_f_berd_3_5"):
case joaat("dlc_mp_sum_m_berd_3_6"):
case joaat("dlc_mp_sum_f_berd_3_6"):
case joaat("dlc_mp_sum_m_berd_3_7"):
case joaat("dlc_mp_sum_f_berd_3_7"):
return 1;
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
case joaat("dlc_mp_sum_f_legs_2_25"):
return 4;
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
case joaat("dlc_mp_sum_f_jbib_0_25"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
case joaat("dlc_mp_vwd_f_decl_1_0"):
case joaat("dlc_mp_vwd_m_decl_1_6"):
case joaat("dlc_mp_vwd_f_decl_1_6"):
case joaat("dlc_mp_vwd_m_decl_1_7"):
case joaat("dlc_mp_vwd_f_decl_1_7"):
case joaat("dlc_mp_vwd_m_decl_1_8"):
case joaat("dlc_mp_vwd_f_decl_1_8"):
case joaat("dlc_mp_vwd_m_decl_1_11"):
case joaat("dlc_mp_vwd_f_decl_1_11"):
case joaat("dlc_mp_vwd_m_decl_1_12"):
case joaat("dlc_mp_vwd_f_decl_1_12"):
case joaat("dlc_mp_vwd_m_decl_1_13"):
case joaat("dlc_mp_vwd_f_decl_1_13"):
case joaat("dlc_mp_vwd_m_decl_1_14"):
case joaat("dlc_mp_vwd_f_decl_1_14"):
case joaat("dlc_mp_vwd_m_decl_1_15"):
case joaat("dlc_mp_vwd_f_decl_1_15"):
case joaat("dlc_mp_vwd_m_decl_1_16"):
case joaat("dlc_mp_vwd_f_decl_1_16"):
case joaat("dlc_mp_vwd_m_decl_1_17"):
case joaat("dlc_mp_vwd_f_decl_1_17"):
case joaat("dlc_mp_vwd_m_decl_1_18"):
case joaat("dlc_mp_vwd_f_decl_1_18"):
return 10;
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
case joaat("dlc_mp_vwd_f_jbib_21_5"):
case joaat("dlc_mp_vwd_m_jbib_23_8"):
case joaat("dlc_mp_vwd_f_jbib_21_8"):
case joaat("dlc_mp_vwd_m_jbib_23_9"):
case joaat("dlc_mp_vwd_f_jbib_21_9"):
case joaat("dlc_mp_vwd_m_jbib_23_10"):
case joaat("dlc_mp_vwd_f_jbib_21_10"):
case joaat("dlc_mp_vwd_m_jbib_23_0"):
case joaat("dlc_mp_vwd_f_jbib_21_0"):
case joaat("dlc_mp_vwd_m_jbib_23_2"):
case joaat("dlc_mp_vwd_f_jbib_21_2"):
case joaat("dlc_mp_vwd_m_jbib_23_4"):
case joaat("dlc_mp_vwd_f_jbib_21_4"):
case joaat("dlc_mp_vwd_m_jbib_23_7"):
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
case joaat("dlc_mp_arena_m_jbib_16_0"):
case joaat("dlc_mp_arena_f_jbib_16_1"):
case joaat("dlc_mp_arena_m_jbib_16_1"):
case joaat("dlc_mp_arena_f_jbib_16_2"):
case joaat("dlc_mp_arena_m_jbib_16_2"):
case joaat("dlc_mp_arena_f_jbib_16_3"):
case joaat("dlc_mp_arena_m_jbib_16_3"):
case joaat("dlc_mp_arena_f_jbib_16_4"):
case joaat("dlc_mp_arena_m_jbib_16_4"):
case joaat("dlc_mp_arena_f_jbib_16_5"):
case joaat("dlc_mp_arena_m_jbib_16_5"):
case joaat("dlc_mp_arena_f_jbib_16_6"):
case joaat("dlc_mp_arena_m_jbib_16_6"):
case joaat("dlc_mp_arena_f_jbib_16_7"):
case joaat("dlc_mp_arena_m_jbib_16_7"):
case joaat("dlc_mp_arena_f_jbib_16_8"):
case joaat("dlc_mp_arena_m_jbib_16_8"):
case joaat("dlc_mp_arena_f_jbib_16_9"):
case joaat("dlc_mp_arena_m_jbib_16_9"):
case joaat("dlc_mp_arena_f_jbib_16_10"):
case joaat("dlc_mp_arena_m_jbib_16_10"):
case joaat("dlc_mp_arena_f_jbib_16_11"):
case joaat("dlc_mp_arena_m_jbib_16_11"):
case joaat("dlc_mp_arena_f_jbib_16_12"):
case joaat("dlc_mp_arena_m_jbib_16_12"):
case joaat("dlc_mp_arena_f_jbib_16_13"):
case joaat("dlc_mp_arena_m_jbib_16_13"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_f_outfit_morph_4"):
return 12;
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return 1;
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
return 4;
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
return 6;
case joaat("dlc_mp_x17_m_jbib_5_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return 11;
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
case joaat("dlc_mp_gr_m_decl_5_5"):
case joaat("dlc_mp_gr_f_decl_5_5"):
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
case joaat("dlc_mp_gr_m_decl_5_7"):
case joaat("dlc_mp_gr_f_decl_5_7"):
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
case joaat("dlc_mp_gr_m_decl_5_9"):
case joaat("dlc_mp_gr_f_decl_5_9"):
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return 10;
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case joaat("dlc_mp_gr_m_phead_6_1"):
case joaat("dlc_mp_gr_f_phead_6_1"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case joaat("dlc_mp_gr_m_phead_6_3"):
case joaat("dlc_mp_gr_f_phead_6_3"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("dlc_mp_gr_m_phead_6_9"):
case joaat("dlc_mp_gr_f_phead_6_9"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
case joaat("dlc_mp_ie_f_berd_7_0"):
return 1;
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return 10;
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_f_outfit_e_6"):
return 12;
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_legs_1_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
case joaat("dlc_mp_exec_f_legs_1_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
case joaat("dlc_mp_exec_f_legs_1_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
case joaat("dlc_mp_exec_f_legs_1_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
case joaat("dlc_mp_exec_f_legs_1_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
case joaat("dlc_mp_exec_f_legs_1_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
case joaat("dlc_mp_exec_f_legs_1_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
case joaat("dlc_mp_exec_f_legs_1_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
case joaat("dlc_mp_exec_f_legs_1_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
case joaat("dlc_mp_exec_f_legs_1_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
case joaat("dlc_mp_exec_f_legs_1_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
case joaat("dlc_mp_exec_f_legs_1_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
case joaat("dlc_mp_exec_f_legs_1_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
case joaat("dlc_mp_exec_f_legs_1_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return 4;
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return 0;
case 1743008394:
case 1084175393:
case -1090232119:
case 787255484:
case -1133356123:
case -566366372:
return 11;
default:
}
switch (iParam0){
case 1970268516:
case 2026483804:
case 1831101822:
case 1411612772:
case 1875861023:
case -1385031204:
case -703154335:
case 798340921:
return 0;
case -1208373599:
case 1656518170:
case -970054678:
case -840010097:
return 1;
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return 1;
default:
}
return -1;
}

int func_480(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_417()){
if(Global_262145.f_31795[iVar0] !=-1){
return 1;
}}elseif(Global_262145.f_31783[iVar0] !=-1){
return 1;
}}
return 0;
}

int func_481(int iParam0){
switch (iParam0){
case 264:
return 1;
default:
}
return 0;
}

int func_482(int iParam0){
switch (iParam0){
case 271:
return 1;
default:
}
return 0;
}

int func_483(int iParam0){
switch (iParam0){
case 256:
return 1;
default:
}
return 0;
}

int func_484(int iParam0){
switch (iParam0){
case 158:
return 1;
default:
}
return 0;
}

int func_485(int iParam0){
switch (iParam0){
case 243:
return 1;
default:
}
return 0;
}

int func_486(int iParam0){
if(((((((((iParam0==250 || iParam0==238) || iParam0==242) || iParam0==244) || iParam0==248) || iParam0==241) || iParam0==239) || iParam0==240) || iParam0==249) || (iParam0==237 && func_487(func_488(PLAYER::PLAYER_ID())))){
return 1;
}
return 0;
}

int func_487(int iParam0){
switch (iParam0){
case 0:
case 4:
case 3:
case 2:
case 5:
case 1:
return 1;
default:
}
return 0;
}

int func_488(int iParam0){
if(func_105(iParam0)==237 || func_105(iParam0)==250){
return func_489(iParam0);
}
return -1;
}

int func_489(int iParam0){
if(func_106(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_490(int iParam0){
if(iParam0==237){
return 1;
}
return 0;
}

int func_491(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_492(int iParam0){
switch (iParam0){
case 229:
case 230:
return 1;
default:
}
return 0;
}

int func_493(int iParam0){
switch (iParam0){
case 225:
case 226:
case 227:
return 1;
default:
}
return 0;
}


void func_494(int iParam0){
if(func_501(PLAYER::PLAYER_ID()) && func_500()){
if(func_139(iParam0)){
func_496(12554, -1);
}elseif(func_140(iParam0)){
func_496(12556, -1);
}elseif(func_223(iParam0, 1)){
func_496(12557, -1);
}elseif(func_495(iParam0)){
func_496(12558, -1);
}}}

int func_495(int iParam0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
default:
}
return 0;
}


void func_496(int iParam0, int iParam1){
int iVar0;
iVar0=func_427(iParam0, func_150(iParam1), 0);
iVar0++;
if(!func_499(iParam0)){
func_498(iParam0, iVar0, iParam1, 1, 0);
}else{
func_497(iParam0, iVar0, iParam1, 1);
}}


void func_497(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_150(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_150(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_150(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_150(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_150(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_150(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_150(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_150(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_150(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_150(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_150(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_150(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_150(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_150(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_150(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_150(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_150(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_150(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_150(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_150(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_150(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_150(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_150(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_150(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_150(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_150(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_150(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_150(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_150(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_150(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_150(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_150(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_150(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_150(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_150(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_150(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_150(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_150(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_150(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_150(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_150(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_150(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_150(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_150(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_150(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_150(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_150(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_150(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_150(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_150(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_150(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_150(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_150(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_150(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_150(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_150(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_150(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_150(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_150(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_150(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_150(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_150(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_150(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_150(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_150(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_150(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_150(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_150(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_150(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_150(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_150(iParam2)]=iParam1;
break;
default:
break;
}}


void func_498(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_150(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_499(int iParam0){
if(Global_1665487){
switch (iParam0){
case 788:
case 789:
case 790:
case 791:
case 8729:
case 778:
case 779:
case 780:
case 781:
case 8731:
case 768:
case 769:
case 770:
case 771:
case 8733:
case 758:
case 759:
case 760:
case 761:
case 8735:
case 1304:
case 7236:
case 640:
case 1279:
case 765:
case 766:
case 767:
case 8734:
case 9538:
case 11803:
case 1237:
case 1878:
case 2269:
case 2932:
case 3061:
case 12424:
case 3056:
case 3057:
case 3058:
case 3059:
case 3060:
case 3235:
case 3237:
case 3639:
case 3640:
case 3641:
case 3642:
case 3643:
case 3644:
case 3645:
case 3646:
case 3647:
case 3648:
case 3230:
case 3224:
case 3666:
case 3667:
case 3668:
case 3669:
case 3670:
case 3671:
case 3692:
case 3233:
case 3232:
case 4023:
case 4022:
case 4026:
case 4025:
case 4029:
case 4028:
case 4032:
case 4031:
case 6113:
case 6112:
case 6171:
case 6170:
case 6536:
case 6535:
case 6549:
case 6548:
case 6562:
case 6561:
case 6565:
case 6564:
case 6568:
case 6567:
case 7286:
case 7288:
case 7290:
case 8285:
case 8286:
case 8287:
case 8288:
case 8289:
case 8290:
case 8291:
case 8292:
case 8293:
case 8294:
case 8295:
case 8296:
case 8297:
case 8905:
case 8013:
case 8537:
case 8980:
case 8982:
case 8983:
case 8985:
case 9624:
case 9913:
case 10441:
case 10443:
case 10444:
case 10446:
return 1;
break;
}}
return 0;
}


bool func_500(){
return func_259(PLAYER::PLAYER_ID());
}

int func_501(int iParam0){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_133, 14);
}


void func_502(var uParam0, bool bParam1, bool bParam2){
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


void func_503(int iParam0, int iParam1){
if(iParam1 > 0){
if(Global_262145.f_23997==0 || Global_262145.f_23997==1){
if(!MISC::IS_PC_VERSION() || Global_262145.f_23997==1){
Global_2793046.f_283=iParam0;
if(iParam1 > Global_262145.f_7044){
iParam1=Global_262145.f_7044;
}
Global_2793046.f_284=iParam1;
Global_2793046.f_285=0;
}}}}

int func_504(int iParam0){
switch (iParam0){
case 142:
return 25;
case 157:
return 22;
case 159:
return 21;
case 151:
return 33;
case 148:
return 23;
case 164:
return 24;
case 152:
return 26;
case 153:
return 30;
case 154:
return 32;
case 155:
return 28;
case 160:
return 29;
case 162:
return 31;
case 163:
return 27;
case 166:
return 38;
case 170:
return 34;
case 171:
return 35;
case 172:
return 36;
case 173:
return 37;
case 179:
return 23;
default:
}
return 0;
}

int func_505(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 167:
iVar0=0;
break;
case 169:
iVar0=0;
break;
case 168:
iVar0=0;
break;
case 166:
iVar0=0;
break;
case 190:
iVar0=0;
break;
case 191:
iVar0=0;
break;
case 192:
iVar0=0;
break;
}
return iVar0;
}


void func_506(int iParam0, int iParam1){
if(func_501(PLAYER::PLAYER_ID()) && func_500()){
if(func_139(iParam0) && iParam1 > 0){
func_498(12555, (func_427(12555, -1, 0) + iParam1), -1, 1, 0);
}}}


void func_507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
struct<2> Var9;
char* sVar10;
bVar6=func_534();
if(bVar6 !=func_65()){
func_533(bVar6, &uVar0, &uVar1);
}
bVar7=!func_532(1);
bVar8=func_532(0);
Var9.f_1=-1;
switch (iParam0){
case 168:
if(func_500()){
if(!func_531()){
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, uParam3);
}}elseif(func_531()){
func_519(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 190:
if(func_500()){
if(!func_531()){
Var9={
func_518() 
};
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_517(Var9.f_0)), func_516(Var9.f_0), iParam4);
}}elseif(func_531()){
func_519(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 226:
if(func_515()){
if(!func_531()){
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_517(func_514(PLAYER::PLAYER_ID()))), 5, iParam4);
}}elseif(func_531()){
func_519(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 230:
if(func_515()){
if(!func_531()){
iVar2=func_510(uParam5->f_16, iParam4);
iVar3=iParam1;
if(iVar2 > 0){
iVar3=(iVar3 - iVar2);
}
if(iParam2 > 0){
iVar3=(iVar3 - iParam2);
}
MONEY::NETWORK_EARN_FROM_SMUGGLER_WORK(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
}}else{
if(func_531()){
func_519(463142405, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_SMUGGLER_AGENCY(uVar0, uVar1, iParam1, bVar7);
}
if(bVar8){
bVar5=true;
}}
break;
case 233:
if(func_531()){
func_519(1407278493, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(iParam1);
}
break;
case 237:
if(func_515()){
if(!func_531()){
MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
}}else{
if(func_531()){
func_519(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}}
break;
case 250:
if(func_531()){
func_519(-961034881, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
Global_4535172[iVar4 /*85*/]=1781827765;
}else{
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1, 1781827765);
}
break;
case 249:
if(func_531()){
func_519(1135468152, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
}
break;
case 242:
case 244:
case 248:
case 241:
case 239:
case 240:
if(func_531()){
func_519(-634726636, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
}
break;
case 243:
if(func_531()){
func_519(1698417709, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(iParam1);
}
break;
case 158:
if(uParam5->f_22){
if(func_531()){
func_519(1668610896, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
}}elseif(func_531()){
func_519(-2032529561, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
}
break;
default:
if(func_531()){
func_519(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_AGENCY(uVar0, uVar1, iParam1, bVar7);
}
break;
}
if(bVar5){
sVar10="GBMR_SELLTICK0";
if(func_257(1)){
sVar10="GBMR_SELLTICK2";
}elseif(func_509(bVar6)){
sVar10="GBMR_SELLTICK1";
}
func_508(sVar10, iParam1, 0);
}}

int func_508(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_312(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_312(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}

int func_509(bool bParam0){
if(bParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_31, 26);
}

int func_510(int iParam0, int iParam1){
float fVar0;
float fVar1;
fVar0=func_513(iParam0, iParam1);
fVar1=(to_float(func_511(iParam0, iParam1)) * fVar0);
return round(fVar1);
}

int func_511(int iParam0, int iParam1){
return (func_512(iParam0) * iParam1);
}

int func_512(int iParam0){
switch (iParam0){
case 8:
return Global_262145.f_22810;
case 0:
return Global_262145.f_22811;
case 1:
return Global_262145.f_22812;
case 2:
return Global_262145.f_22813;
case 3:
return Global_262145.f_22814;
case 4:
return Global_262145.f_22815;
case 5:
return Global_262145.f_22816;
case 6:
return Global_262145.f_22817;
case 7:
return Global_262145.f_22818;
default:
}
return 0;
}


float func_513(int iParam0, int iParam1){
float fVar0;
float fVar1;
int iVar2;
fVar0=0f;
fVar1=to_float(Global_262145.f_22820);
switch (iParam0){
case -1:
case 8:
return 0f;
case 7:
fVar0=Global_262145.f_22822;
fVar1=to_float(Global_262145.f_22819);
break;
case 3:
fVar0=Global_262145.f_22822;
fVar1=to_float(Global_262145.f_22819);
break;
case 0:
fVar0=Global_262145.f_22823;
break;
case 1:
fVar0=Global_262145.f_22823;
break;
case 4:
fVar0=Global_262145.f_22823;
break;
case 6:
fVar0=Global_262145.f_22824;
fVar1=to_float(Global_262145.f_22821);
break;
case 2:
fVar0=Global_262145.f_22824;
fVar1=to_float(Global_262145.f_22821);
break;
case 5:
fVar0=Global_262145.f_22824;
fVar1=to_float(Global_262145.f_22821);
break;
}
iVar2=floor((to_float(iParam1) / fVar1));
return (to_float(iVar2) * fVar0);
}

int func_514(int iParam0){
if(iParam0==func_65()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}


bool func_515(){
return func_124(PLAYER::PLAYER_ID());
}

int func_516(int iParam0){
switch (iParam0){
case 1:
return 3;
case 2:
return 1;
case 3:
return 4;
case 4:
return 2;
case 5:
return 0;
case 6:
return 3;
case 7:
return 1;
case 8:
return 4;
case 9:
return 2;
case 10:
return 0;
case 11:
return 3;
case 12:
return 1;
case 13:
return 4;
case 14:
return 2;
case 15:
return 0;
case 16:
return 3;
case 17:
return 1;
case 18:
return 4;
case 19:
return 2;
case 20:
return 0;
case 21:
return 5;
case 22:
return 5;
case 23:
return 5;
case 24:
return 5;
case 25:
return 5;
case 26:
return 5;
case 27:
return 5;
case 28:
return 5;
case 29:
return 5;
case 30:
return 5;
case 31:
return 5;
case 32:
return 6;
default:
}
return -1;
}


char* func_517(int iParam0){
char* sVar0;
switch (iParam0){
case 2:
sVar0="MP_BWH_WEED_1";
break;
case 1:
sVar0="MP_BWH_METH_1";
break;
case 3:
sVar0="MP_BWH_CRACK_1";
break;
case 5:
sVar0="MP_BWH_FAKEID_1";
break;
case 4:
sVar0="MP_BWH_CASH_1";
break;
case 7:
sVar0="MP_BWH_WEED_2";
break;
case 6:
sVar0="MP_BWH_METH_2";
break;
case 8:
sVar0="MP_BWH_CRACK_2";
break;
case 10:
sVar0="MP_BWH_FAKEID_2";
break;
case 9:
sVar0="MP_BWH_CASH_2";
break;
case 12:
sVar0="MP_BWH_WEED_3";
break;
case 11:
sVar0="MP_BWH_METH_3";
break;
case 13:
sVar0="MP_BWH_CRACK_3";
break;
case 15:
sVar0="MP_BWH_FAKEID_3";
break;
case 14:
sVar0="MP_BWH_CASH_3";
break;
case 17:
sVar0="MP_BWH_WEED_4";
break;
case 16:
sVar0="MP_BWH_METH_4";
break;
case 18:
sVar0="MP_BWH_CRACK_4";
break;
case 20:
sVar0="MP_BWH_FAKEID_4";
break;
case 19:
sVar0="MP_BWH_CASH_4";
break;
case 32:
sVar0="MP_BWH_ACID";
break;
case 21:
sVar0="MP_BUNKER_1";
break;
case 22:
sVar0="MP_BUNKER_2";
break;
case 23:
sVar0="MP_BUNKER_3";
break;
case 24:
sVar0="MP_BUNKER_4";
break;
case 25:
sVar0="MP_BUNKER_5";
break;
case 26:
sVar0="MP_BUNKER_6";
break;
case 27:
sVar0="MP_BUNKER_7";
break;
case 28:
sVar0="MP_BUNKER_9";
break;
case 29:
sVar0="MP_BUNKER_10";
break;
case 30:
sVar0="MP_BUNKER_11";
break;
case 31:
sVar0="MP_BUNKER_12";
break;
}
return sVar0;
}


struct<2> func_518(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_194;
}


void func_519(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_531()){
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
if(iParam1 > 0 || Global_262145.f_28375){
func_520(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
case 312105838:
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
func_520(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
if(iParam1 > 0 || Global_262145.f_28375){
func_520(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_520(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_520(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_531()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536675=1;
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
*uParam0=func_527(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
Global_4536673=1;
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
bVar5=false;
if(bVar5){
func_526(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_521(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_521(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_522(iParam0);
}}


void func_522(int iParam0){
bool bVar0;
bVar0=false;
if(!func_531()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_525(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_523(&(Global_4535172[iParam0 /*85*/]));
}}


void func_523(var uParam0){
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
func_524(&(uParam0->f_14));
func_524(&(uParam0->f_14.f_13));
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


void func_524(var uParam0){
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

int func_525(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_526(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_527(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_531()){
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
func_528(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_528(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=45913685;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_530(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_529();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_529(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__530(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_531(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_532(bool bParam0){
return func_191(PLAYER::PLAYER_ID(), bParam0);
}


void func_533(bool bParam0, var uParam1, var uParam2){
*uParam1=Global_1894573[bParam0 /*608*/].f_10.f_8[0];
*uParam2=Global_1894573[bParam0 /*608*/].f_10.f_8[1];
}


bool func_534(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_535(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_536(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_536(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
int iVar0;
var uVar1;
iVar0=func_546(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_542(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
}}}else{
func_537(iParam1, iVar0, sParam8, iParam10);
}
return iVar0;
}


void func_537(int iParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
Var0={
func_540(iParam0, 1) 
};
if(iParam0==func_539(PLAYER::PLAYER_PED_ID())){
func_538(1);
}
func_542(Var0, iParam1, 0, sParam2, iParam3);
}


void func_538(int iParam0){
Global_2672505.f_1682=iParam0;
}

int func_539(var uParam0){
return uParam0;
}


Vector3 func__540(int iParam0, bool bParam1){
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
if(iParam0==func_541(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
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

int func_541(var uParam0){
return uParam0;
}


void func_542(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672505.f_1081[iVar0 /*30*/].f_6==0 || Global_2672505.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672505.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672505.f_1081[iVar1 /*30*/].f_6=1;
Global_2672505.f_1081[iVar1 /*30*/].f_4=func_545(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672505.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672505.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672505.f_1081[iVar1 /*30*/].f_9=func_544();
Global_2672505.f_1081[iVar1 /*30*/].f_10=func_543();
StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672505.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
}}}

int func_543(){
if(Global_2672505.f_1682){
Global_2672505.f_1682=0;
return 1;
}
Global_2672505.f_1682=0;
return 0;
}


var func__544(){
var uVar0;
uVar0=Global_2672505.f_1684;
Global_2672505.f_1684=1;
return uVar0;
}


float func_545(struct<3> Param0, var uParam1, var uParam2){
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


var func__546(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_547(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_547(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_575();
if(func_574(uParam2)){}
if(func_573()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_571(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_570(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_568(0, &iVar1);
break;
case 3:
func_568(1, &iVar1);
break;
case 1:
func_566(&iVar1);
break;
}}
if(iVar1 > Global_1961999){
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
func_565(1165, iVar1, -1);
if(iParam1==0){
func_557((func_564(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_565(1166, iVar1, -1);
}
func_552(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_548((func_550(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_548((func_550(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_548(int iParam0){
if(func_573()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_549(joaat("mpply_globalxp"), iParam0);
}}


void func_549(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}}

int func_550(int iParam0){
if(iParam0 > -1){
if(func_1123(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_551(joaat("mpply_globalxp"));
}else{
return Global_1853910[iParam0 /*862*/].f_205.f_5;
}}else{
return func_551(joaat("mpply_globalxp"));
}}
return 0;
}

int func_551(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_552(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_67(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_555(func_556(&Var0));
if(iVar1==0){
func_554(&Global_1665493, iParam0);
func_553(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_554(&Global_1665494, iParam0);
func_553(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_554(&Global_1665495, iParam0);
func_553(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_554(&Global_1665496, iParam0);
func_553(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_554(&Global_1665497, iParam0);
func_553(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_553(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=iParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=iParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=iParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=iParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=iParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=iParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=iParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=iParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=iParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=iParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=iParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=iParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=iParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=iParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=iParam1;
break;
default:
break;
}}


void func_554(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_555(int iParam0){
if(iParam0==Global_1665488){
return 0;
}elseif(iParam0==Global_1665489){
return 1;
}elseif(iParam0==Global_1665490){
return 2;
}elseif(iParam0==Global_1665491){
return 3;
}elseif(iParam0==Global_1665492){
return 4;
}else{
return -1;
}
return -1;
}

int func_556(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}


void func_557(int iParam0, int iParam1, int iParam2){
if(func_573()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_150(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_150(-1)]){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_563(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_561(iParam0, 1);
}
func_497(640, iParam0, -1, 1);
func_498(641, func_561(iParam0, 1), -1, 1, 0);
Global_1665638[func_150(-1)]=iParam0;
func_558(-1109644434, 7, 0);
}}


void func_558(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_560(iParam1, iParam2)){
iVar0=func_559();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_559(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694420[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_560(int iParam0, var uParam1){
if(Global_1575048){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575060) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}

int func_561(int iParam0, bool bParam1){
if(bParam1){}
return func_562(iParam0, 0);
}

int func_562(int iParam0, int iParam1){
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
if(Global_297010[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297010[iVar3] < iParam0){
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

int func_563(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}

int func_564(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_150(-1)];
}elseif(func_563(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_150(-1)];
}
return 0;
}


void func_565(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_427(iParam0, func_150(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_499(iParam0)){
func_498(iParam0, iVar0, iParam2, 1, 0);
}else{
func_497(iParam0, iVar0, iParam2, 1);
}}


void func_566(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
iVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(iVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_374(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_68(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
bVar0++;
}
if(bVar3){
iVar6=round((func_567(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_567(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_567(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_568(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
iVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_1123(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_68(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_1123(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_569(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_68(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_567(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_567(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_569(int iParam0, int iParam1){
return vdist(func_59(iParam0), func_59(iParam1));
return 0f;
}

int func_570(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_567(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_571(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_564(PLAYER::PLAYER_ID())){
iParam0=-func_564(PLAYER::PLAYER_ID());
}}
if(func_572(8000, 0, 0) > 0){
if(func_572(8000, 0, 0) < (iParam0 + func_564(PLAYER::PLAYER_ID()))){
iParam0=(func_572(8000, 0, 0) - func_564(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_572(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297010[iParam0];
}

int func_573(){
return 1;
}

int func_574(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_575(){
int iVar0;
if(func_578(PLAYER::PLAYER_ID()) || func_577(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_247() || func_576(PLAYER::PLAYER_ID())){
if(Global_262145.f_23282 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23282;
}}elseif(Global_262145.f_7095 > 30000){
iVar0=30000;
}else{
iVar0=Global_262145.f_7095;
}
return iVar0;
}

int func_576(int iParam0){
return func_491(func_105(iParam0));
}


bool func_577(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_578(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


void func_579(){
Global_2696212=1;
}


void func_580(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
*uParam1=0;
*uParam2=0;
if(!func_81(7)){
return;
}
iVar0=func_583(iParam0);
iVar1=func_582(iParam0);
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2793046.f_5225.f_269, NETWORK::GET_NETWORK_TIME()));
if(func_581(iParam0) !=-1){
if(iVar2 > func_581(iParam0)){
iVar2=func_581(iParam0);
}}elseif(iVar2 > Global_262145.f_12870){
iVar2=Global_262145.f_12870;
}
iVar3=floor((to_float(iVar2) / (1000f * 60f)));
if(iVar3 < 1){
iVar3=1;
}
*uParam1=(iVar3 * iVar1);
*uParam2=(iVar3 * iVar0);
}

int func_581(int iParam0){
if(func_223(iParam0, 0) || func_140(iParam0)){
return Global_262145.f_18959;
}
if(func_139(iParam0)){
return Global_262145.f_18958;
}
switch (iParam0){
case 192:
return Global_262145.f_18955;
case 191:
return Global_262145.f_18957;
case 190:
return Global_262145.f_18956;
case 227:
return Global_262145.f_21520;
case 226:
return Global_262145.f_21506;
case 225:
return Global_262145.f_21528;
case 230:
return Global_262145.f_22807;
case 229:
return Global_262145.f_22709;
case 233:
return Global_262145.f_23287;
case 237:
return Global_262145.f_24457;
case 238:
return Global_262145.f_24575;
case 249:
return Global_262145.f_24591;
case 243:
return Global_262145.f_27092;
default:
}
return -1;
}

int func_582(int iParam0){
switch (iParam0){
case 148:
return Global_262145.f_12961;
case 152:
return Global_262145.f_12996;
case 151:
return 0;
case 142:
return Global_262145.f_12984;
case 157:
return Global_262145.f_12951;
case 159:
return Global_262145.f_12934;
case 164:
return Global_262145.f_12974;
case 160:
return Global_262145.f_13024;
case 162:
return Global_262145.f_13044;
case 163:
return Global_262145.f_13009;
case 154:
return Global_262145.f_13079;
case 155:
return Global_262145.f_13069;
case 153:
return Global_262145.f_13033;
case 170:
return Global_262145.f_15454;
case 171:
return Global_262145.f_15513;
case 172:
return Global_262145.f_15531;
case 173:
return Global_262145.f_15472;
case 166:
return Global_262145.f_15487;
case 167:
return Global_262145.f_15578;
case 169:
return Global_262145.f_15550;
case 168:
return Global_262145.f_15543;
case 179:
return Global_262145.f_18836;
case 180:
return Global_262145.f_18614;
case 182:
return Global_262145.f_18614;
case 183:
return Global_262145.f_18614;
case 185:
return Global_262145.f_18614;
case 186:
return Global_262145.f_18614;
case 189:
return Global_262145.f_18836;
case 190:
return Global_262145.f_18490;
case 191:
return Global_262145.f_18581;
case 192:
return Global_262145.f_18375;
case 193:
return Global_262145.f_18836;
case 194:
return Global_262145.f_18836;
case 195:
return Global_262145.f_18614;
case 197:
return Global_262145.f_18614;
case 198:
return Global_262145.f_18614;
case 199:
return Global_262145.f_18836;
case 200:
return Global_262145.f_18836;
case 201:
return Global_262145.f_18836;
case 205:
return Global_262145.f_18836;
case 207:
return Global_262145.f_18614;
case 208:
return Global_262145.f_18614;
case 209:
return Global_262145.f_18614;
case 210:
return Global_262145.f_18836;
case 211:
return Global_262145.f_18836;
case 214:
return Global_262145.f_19688;
case 215:
return Global_262145.f_19690;
case 216:
return Global_262145.f_19692;
case 217:
return Global_262145.f_19694;
case 218:
return Global_262145.f_19696;
case 219:
return Global_262145.f_19698;
case 220:
return Global_262145.f_19700;
case 221:
return Global_262145.f_19702;
case 225:
if(!func_515()){
return Global_262145.f_21530;
}
break;
case 226:
if(!func_515()){
return Global_262145.f_21508;
}
break;
case 227:
if(!func_515()){
return Global_262145.f_21522;
}
break;
case 229:
if(!func_515()){
return Global_262145.f_22711;
}
break;
case 230:
if(!func_515()){
return Global_262145.f_22809;
}
break;
case 233:
if(!func_515()){
return Global_262145.f_23286;
}
break;
case 241:
return 100;
case 242:
return 100;
case 244:
return 100;
case 248:
return 100;
case 239:
return 100;
case 240:
return 100;
case 250:
return 100;
case 237:
if(!func_515()){
return Global_262145.f_24459;
}
break;
case 238:
if(!func_515()){
return Global_262145.f_24577;
}
break;
case 249:
if(!func_515()){
return Global_262145.f_24593;
}
break;
case 243:
if(!func_515()){
return Global_262145.f_27095;
}
break;
case 158:
if(!func_515()){
return 100;
}
break;
}
return 0;
}

int func_583(int iParam0){
int iVar0;
switch (iParam0){
case 148:
iVar0=Global_262145.f_12960;
break;
case 152:
iVar0=Global_262145.f_12995;
break;
case 151:
iVar0=0;
break;
case 142:
iVar0=Global_262145.f_12983;
break;
case 157:
iVar0=Global_262145.f_12950;
break;
case 159:
iVar0=Global_262145.f_12933;
break;
case 164:
iVar0=Global_262145.f_12973;
break;
case 160:
iVar0=Global_262145.f_13023;
break;
case 162:
iVar0=Global_262145.f_13043;
break;
case 163:
iVar0=Global_262145.f_13008;
break;
case 154:
iVar0=Global_262145.f_13078;
break;
case 155:
iVar0=Global_262145.f_13068;
break;
case 153:
iVar0=Global_262145.f_13032;
break;
case 170:
iVar0=Global_262145.f_15453;
break;
case 171:
iVar0=Global_262145.f_15512;
break;
case 172:
iVar0=Global_262145.f_15530;
break;
case 173:
iVar0=Global_262145.f_15471;
break;
case 166:
iVar0=Global_262145.f_15486;
break;
case 179:
iVar0=Global_262145.f_18835;
break;
case 180:
iVar0=Global_262145.f_18613;
break;
case 182:
iVar0=Global_262145.f_18613;
break;
case 183:
iVar0=Global_262145.f_18613;
break;
case 185:
iVar0=Global_262145.f_18613;
break;
case 186:
iVar0=Global_262145.f_18613;
break;
case 189:
iVar0=Global_262145.f_18835;
break;
case 193:
iVar0=Global_262145.f_18835;
break;
case 194:
iVar0=Global_262145.f_18835;
break;
case 195:
iVar0=Global_262145.f_18613;
break;
case 197:
iVar0=Global_262145.f_18613;
break;
case 198:
iVar0=Global_262145.f_18613;
break;
case 199:
iVar0=Global_262145.f_18835;
break;
case 200:
iVar0=Global_262145.f_18835;
break;
case 201:
iVar0=Global_262145.f_18835;
break;
case 205:
iVar0=Global_262145.f_18835;
break;
case 207:
iVar0=Global_262145.f_18613;
break;
case 208:
iVar0=Global_262145.f_18613;
break;
case 209:
iVar0=Global_262145.f_18613;
break;
case 210:
iVar0=Global_262145.f_18835;
break;
case 211:
iVar0=Global_262145.f_18835;
break;
case 190:
if(func_257(0)){
iVar0=Global_262145.f_18489;
}
break;
case 191:
if(func_257(0)){
iVar0=Global_262145.f_18580;
}
break;
case 192:
if(func_257(0)){
iVar0=Global_262145.f_18374;
}
break;
case 214:
iVar0=Global_262145.f_19687;
break;
case 215:
iVar0=Global_262145.f_19689;
break;
case 216:
iVar0=Global_262145.f_19691;
break;
case 217:
iVar0=Global_262145.f_19693;
break;
case 218:
iVar0=Global_262145.f_19695;
break;
case 219:
iVar0=Global_262145.f_19697;
break;
case 220:
iVar0=Global_262145.f_19699;
break;
case 221:
iVar0=Global_262145.f_19701;
break;
case 225:
if(func_257(0)){
iVar0=Global_262145.f_21529;
}
break;
case 226:
if(func_257(0)){
iVar0=Global_262145.f_21507;
}
break;
case 227:
if(func_257(0)){
iVar0=Global_262145.f_21521;
}
break;
case 229:
if(func_257(0)){
iVar0=Global_262145.f_22710;
}
break;
case 230:
if(func_257(0)){
iVar0=Global_262145.f_22808;
}
break;
case 233:
if(func_257(0)){
iVar0=Global_262145.f_23288;
}
break;
case 241:
iVar0=500;
break;
case 242:
iVar0=500;
break;
case 244:
iVar0=500;
break;
case 248:
iVar0=500;
break;
case 239:
iVar0=500;
break;
case 240:
iVar0=500;
break;
case 250:
iVar0=500;
break;
case 237:
if(func_257(0)){
iVar0=Global_262145.f_24458;
}
break;
case 238:
if(func_257(0)){
iVar0=Global_262145.f_24576;
}
break;
case 249:
if(func_257(0)){
iVar0=Global_262145.f_24592;
}
break;
case 243:
iVar0=Global_262145.f_27091;
break;
case 158:
if(func_257(0)){
iVar0=500;
}
break;
}
if(func_257(0) && Global_262145.f_24467 > 0f){
iVar0=ceil((IntToFloat(iVar0) * Global_262145.f_24467));
}
return iVar0;
}


void func_584(int iParam0, int iParam1){
int iVar0;
if(*iParam0 > 0){
if(!func_515()){
if(func_532(0)){
if(!func_257(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_534())){
if(func_594()==100){
iVar0=*iParam0;
*iParam0=0;
}
else{
iVar0=((*iParam0 / 100) * func_594());
*iParam0=(*iParam0 - iVar0);
}
func_592(&iVar0, 0);
if(iParam1==1){
func_589("GB_BCUT_TICK1", func_534(), iVar0, 0, 0, 1);
}
func_588(20);
func_585(func_534(), iVar0, 1);
}}}}}}


void func_585(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_1123(bParam0, 0, 1)){
Var0.f_0=1810976828;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_587(bParam0);
func_586(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_530(bParam0));
}}


void func_586(var uParam0, var uParam1){
*uParam0=Global_1923597.f_9;
*uParam1=Global_1923597.f_10;
}


var func__587(int iParam0){
return Global_1894573[iParam0 /*608*/].f_510;
}


void func_588(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_7[iVar0]), bVar1);
}

int func_589(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
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
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_367(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_590(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_312(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


var func__590(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_591(&cVar0);
}


var func__591(char[4] cParam0){
return cParam0;
}


void func_592(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_593(1);
}else{
iVar1=func_593(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_593(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_12865;
}

int func_594(){
return Global_262145.f_12864;
}


void func_595(int iParam0, var uParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
int iVar17;
bool bVar18;
bool bVar19;
int iVar20;
bVar18=func_257(1);
bVar19=false;
if(iParam0==237 && !uParam1->f_22){
if(func_515()){
iVar17=PLAYER::PLAYER_ID();
}else{
iVar17=func_534();
}
iVar11=iVar17;
if(iVar11 !=-1){
iVar0=Global_1853910[iVar11 /*862*/].f_839.f_1;
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
bVar19=true;
}else{
fVar12=to_float(uParam1->f_10);
fVar13=to_float(uParam1->f_11);
fVar14=((fVar12 / fVar13) * 100f);
fVar15=((IntToFloat(iVar0) / 100f) * fVar14);
iVar1=ceil(fVar15);
}
*uParam3=iVar1;
if(bVar19){
iVar2=Global_1853910[iVar11 /*862*/].f_839.f_2;
}else{
iVar2=func_601(Global_1853910[iVar11 /*862*/].f_839.f_4, Global_1853910[iVar11 /*862*/].f_839.f_1, *uParam3, Global_1853910[iVar11 /*862*/].f_839.f_2, Global_1853910[iVar11 /*862*/].f_839.f_3);
}
if(uParam1->f_17){
iVar20=(iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
if(iVar20 > 100000){
iVar20=100000;
}
iVar2=(iVar2 - iVar20);
}
*iParam2=(*iParam2 + iVar2);
iVar10=func_600(*iParam2);
if(iVar10 > 0){
if(iVar17==PLAYER::PLAYER_ID()){
func_508("TICK_TCUT", iVar10, 0);
}
*iParam2=(*iParam2 - iVar10);
}
Global_1948053.f_49=*uParam3;
if(iVar17==PLAYER::PLAYER_ID()){
if(iVar2 > 0){
func_599(iVar2);
}
if(*uParam3 > 0){
func_597(*uParam3);
}
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_596(&uVar5);
iVar7=Global_262145.f_24495;
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar9=ceil((IntToFloat(iVar6) * Global_262145.f_24494));
iVar8=((*iParam2 / 100) * iVar9);
*iParam2=(*iParam2 + iVar8);
if(*iParam2 > 0){
if(iVar6 > 0){
func_588(140);
}}}
if(Global_262145.f_33060){
if(!func_473(32356, -1)){
*iParam2=(*iParam2 * Global_262145.f_33069);
func_414(32356, 1, -1);
}}
Global_2793046.f_5225.f_386=*iParam2;
}else{
fVar16=Global_262145.f_24461;
if(!bVar18){
fVar16=Global_262145.f_24462;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar16));
*iParam2=iVar3;
iVar4=Global_262145.f_24463;
if(!bVar18){
iVar4=Global_262145.f_24464;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}elseif(uParam1->f_22){}}

int func_596(var uParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
iVar0=0;
while (iVar0 < 32){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0))){
iVar2=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(!func_17(iVar2, 0) && !func_76(iVar2, PLAYER::PLAYER_ID(), 1)){
iVar1++;
}elseif(func_17(iVar2, 0)){
*uParam0++;
}}
bVar0++;
}
return iVar1;
}


void func_597(int iParam0){
func_598(iParam0, 7239);
}


void func_598(int iParam0, int iParam1){
int iVar0;
if(iParam0 <=0){
return;
}
iVar0=func_427(iParam1, -1, 0);
func_498(iParam1, (iVar0 + iParam0), -1, 1, 0);
}


void func_599(int iParam0){
func_598(iParam0, 7234);
}

int func_600(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(fVar0 * Global_262145.f_24496);
if(fVar1 > 100000f){
fVar1=100000f;
}
return round(fVar1);
}

int func_601(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4){
int iVar0;
float fVar1;
float fVar2;
if(iParam2==iParam1){
return uParam3;
}
iVar0=uParam3;
if((iParam0==1 || iParam0==2) || iParam0==3){
iVar0=(iVar0 - iParam4);
}
fVar1=(to_float(iParam2) / to_float(iParam1));
fVar2=to_float(iVar0);
return floor((fVar2 * fVar1));
}


void func_602(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
int iVar15;
bool bVar16;
bool bVar17;
*uParam4=0;
bVar16=func_257(1);
bVar17=false;
if(iParam0==229){}elseif(iParam0==230){
if(func_515()){
iVar15=PLAYER::PLAYER_ID();
}else{
iVar15=func_534();
}
if(iVar15 !=-1){
iVar0=(uParam1->f_15 + uParam1->f_8);
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
bVar17=true;
}else{
fVar10=to_float(uParam1->f_10);
fVar11=to_float(uParam1->f_11);
fVar12=((fVar10 / fVar11) * 100f);
fVar13=((IntToFloat(iVar0) / 100f) * fVar12);
iVar1=ceil(fVar13);
}
*uParam3=iVar1;
iVar2=func_511(uParam1->f_16, *uParam3);
*iParam2=(*iParam2 + iVar2);
if(bVar17){
iVar9=func_510(uParam1->f_16, *uParam3);
if(iVar9 > 0){
*iParam2=(*iParam2 + iVar9);
}}
if(func_604(*iParam2) > 0){
if(iVar15==PLAYER::PLAYER_ID()){
func_508("SMTICK_RONCUT", func_604(*iParam2), 0);
}
*iParam2=(*iParam2 - func_604(*iParam2));
}
if(iVar15==PLAYER::PLAYER_ID()){
func_603(iVar2, iVar9);
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_596(&uVar5);
iVar7=Global_262145.f_22826;
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar8=ceil((IntToFloat(iVar6) * Global_262145.f_22825));
*uParam4=((*iParam2 / 100) * iVar8);
*iParam2=(*iParam2 + *uParam4);
if(*iParam2 > 0){
if(iVar6 > 0){
func_588(44);
}}}
Global_2793046.f_5225.f_386=*iParam2;
}else{
fVar14=Global_262145.f_22757;
if(!bVar16){
fVar14=Global_262145.f_22758;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar14));
*iParam2=iVar3;
iVar4=Global_262145.f_22759;
if(!bVar16){
iVar4=Global_262145.f_22760;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}}


void func_603(int iParam0, int iParam1){
if(iParam0 > 0){
func_598(iParam0, 6119);
}
if(iParam1 > 0){
func_598(iParam1, 6120);
}}

int func_604(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(fVar0 * Global_262145.f_22793);
if(fVar1 > to_float(Global_262145.f_22794)){
fVar1=to_float(Global_262145.f_22794);
}
return round(fVar1);
}


void func_605(int iParam0, var uParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
int iVar15;
int iVar16;
bool bVar17;
bVar17=func_257(1);
if(iParam0==225){}elseif(iParam0==226){
if(func_515()){
iVar15=PLAYER::PLAYER_ID();
}else{
iVar15=func_534();
}
if(iVar15 !=-1){
iVar16=func_514(iVar15);
iVar0=(func_625(iVar15, iVar16) + uParam1->f_8);
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
}else{
fVar10=to_float(uParam1->f_10);
fVar11=to_float(uParam1->f_11);
fVar12=((fVar10 / fVar11) * 100f);
fVar13=((IntToFloat(iVar0) / 100f) * fVar12);
iVar1=ceil(fVar13);
}
*uParam3=iVar1;
iVar2=func_619(iVar15, iVar16, iVar1, 0);
if(uParam1->f_14==0){
iVar2=ceil((IntToFloat(iVar2) * Global_262145.f_21510));
}else{
iVar2=ceil((IntToFloat(iVar2) * Global_262145.f_21509));
}
*iParam2=(*iParam2 + iVar2);
if(iVar15==PLAYER::PLAYER_ID()){
func_615(iVar16, iVar2);
if(func_611(iVar16) >=Global_262145.f_21055 || iVar2 >=Global_262145.f_21055){
func_606(5);
}
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_596(&uVar5);
iVar7=round(Global_262145.f_21512);
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar8=ceil((IntToFloat(iVar6) * Global_262145.f_21511));
iVar9=((*iParam2 / 100) * iVar8);
*iParam2=(*iParam2 + iVar9);
if(*iParam2 > 0){
if(iVar6 > 0){
func_588(108);
}
else{
func_588(110);
}}}
if(Global_262145.f_33061){
if(!func_473(32357, -1)){
*iParam2=(*iParam2 * Global_262145.f_33070);
func_414(32357, 1, -1);
}}
Global_2793046.f_5225.f_386=*iParam2;
}else{
fVar14=Global_262145.f_21513;
if(!bVar17){
fVar14=Global_262145.f_21514;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar14));
*iParam2=iVar3;
iVar4=Global_262145.f_21515;
if(!bVar17){
iVar4=Global_262145.f_21516;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}elseif(iParam0==227){}}


void func_606(int iParam0){
switch (iParam0){
case 0:
if(Global_262145.f_21043){
if(func_608(Global_262145.f_21044)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
}}
break;
case 1:
if(Global_262145.f_21045){
if(func_608(Global_262145.f_21046)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
}}
break;
case 2:
if(Global_262145.f_21047){
if(func_608(Global_262145.f_21048)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
}}
break;
case 3:
if(Global_262145.f_21049){
if(func_608(Global_262145.f_21050)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
}}
break;
case 4:
if(Global_262145.f_21051){
if(func_608(Global_262145.f_21052)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
}}
break;
case 5:
if(Global_262145.f_21053){
if(func_608(Global_262145.f_21054)){
func_508("CLOTHAWDSTRAP3", Global_262145.f_21055, 0);
}}
break;
case 6:
if(Global_262145.f_21056){
if(func_608(Global_262145.f_21057)){
func_508("CLOTHAWDSTRAP5", Global_262145.f_21192, 0);
}}
break;
case 7:
if(Global_262145.f_21059){
if(func_608(Global_262145.f_21060)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
}}
break;
case 8:
if(Global_262145.f_21061){
if(func_608(Global_262145.f_21062)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
}}
break;
case 9:
if(Global_262145.f_21063){
if(func_608(Global_262145.f_21064)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
}}
break;
case 10:
if(Global_262145.f_21065){
if(func_608(Global_262145.f_21066)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
}}
break;
case 11:
if(Global_262145.f_21067){
if(func_608(Global_262145.f_21068)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
}}
break;
case 12:
if(Global_262145.f_21069){
if(func_608(Global_262145.f_21070)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
}}
break;
case 13:
if(Global_262145.f_21071){
if(func_608(Global_262145.f_21072)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
}}
break;
case 14:
if(Global_262145.f_21073){
if(func_608(Global_262145.f_21074)){
func_607("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
}}
break;
}}

int func_607(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if(!iParam2==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
}
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764203={
func_67(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764133, 35, &Global_2764203)){
iVar1=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764133.f_22), "Leader") && Global_2764133.f_30==0){
iVar1=1;
}
if(Global_2764133.f_21 > 0){
iVar2=0;
}else{
iVar2=1;
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar1, 0, Global_2764133, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1576217, Global_1576218, Global_1576219);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_312(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}

int func_608(int iParam0){
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
case -1191485992:
case joaat("CLO_GRF_U_25_0"):
if(!func_473(15417, -1)){
func_414(15417, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
case -1407302654:
case joaat("CLO_GRF_U_25_1"):
if(!func_473(15418, -1)){
func_414(15418, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
case joaat("CLO_GRM_U_20_0"):
case -1850642937:
if(!func_473(15425, -1)){
func_414(15425, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
case -1307315235:
case joaat("CLO_GRF_DECL_19"):
if(!func_473(15405, -1)){
func_414(15405, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
case joaat("CLO_GRM_DECL_20"):
case 1374601256:
if(!func_473(15393, -1)){
func_414(15393, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
case joaat("CLO_GRM_DECL_21"):
case -660288110:
if(!func_473(15409, -1)){
func_414(15409, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
case -1005186539:
case joaat("CLO_GRF_DECL_22"):
if(!func_473(15396, -1)){
func_414(15396, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
case joaat("CLO_GRM_DECL_23"):
case -1132522169:
if(!func_473(15412, -1)){
func_414(15412, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_5"):
case joaat("dlc_mp_gr_f_decl_5_5"):
case 1110085176:
case joaat("CLO_GRF_DECL_24"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
case joaat("CLO_GRM_DECL_25"):
case -182614393:
if(!func_473(15403, -1)){
func_414(15403, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_7"):
case joaat("dlc_mp_gr_f_decl_5_7"):
case -1496983695:
case joaat("CLO_GRF_DECL_26"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
case joaat("CLO_GRM_DECL_27"):
case -646852824:
if(!func_473(15389, -1)){
func_414(15389, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_9"):
case joaat("dlc_mp_gr_f_decl_5_9"):
case 420690954:
case joaat("CLO_GRF_DECL_28"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
case joaat("CLO_GRM_DECL_29"):
case 1717168382:
if(!func_473(15398, -1)){
func_414(15398, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case -1991379993:
case joaat("CLO_GRF_PH_6_0"):
if(!func_473(15400, -1)){
func_414(15400, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_1"):
case joaat("dlc_mp_gr_f_phead_6_1"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case 2065127290:
case joaat("CLO_GRF_PH_6_1"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case -56403312:
case joaat("CLO_GRF_PH_6_2"):
if(!func_473(15408, -1)){
func_414(15408, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_3"):
case joaat("dlc_mp_gr_f_phead_6_3"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case -292700571:
case joaat("CLO_GRF_PH_6_3"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case -648899601:
case joaat("CLO_GRF_PH_6_4"):
if(!func_473(15411, -1)){
func_414(15411, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case -889194678:
case joaat("CLO_GRF_PH_6_5"):
if(!func_473(15397, -1)){
func_414(15397, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case 867092646:
case joaat("CLO_GRF_PH_6_6"):
if(!func_473(15413, -1)){
func_414(15413, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case 627387411:
case joaat("CLO_GRF_PH_6_7"):
if(!func_473(15391, -1)){
func_414(15391, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("CLO_GRM_PH_6_8"):
case 1682427144:
if(!func_473(15388, -1)){
func_414(15388, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_9"):
case joaat("dlc_mp_gr_f_phead_6_9"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case 35480964:
case joaat("CLO_GRF_PH_6_9"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
case joaat("CLO_GRM_PH_6_10"):
case 1377465778:
if(!func_473(15401, -1)){
func_414(15401, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
case -1604737223:
case joaat("CLO_GRF_DECL_0"):
if(!func_473(15394, -1)){
func_414(15394, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
case -1367129204:
case joaat("CLO_GRF_DECL_1"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
case joaat("CLO_GRM_DECL_2"):
case -1438775324:
if(!func_473(15406, -1)){
func_414(15406, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
case -1686659723:
case joaat("CLO_GRF_DECL_3"):
if(!func_473(15395, -1)){
func_414(15395, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
case 1992217604:
case joaat("CLO_GRF_DECL_4"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
case -1934557208:
case joaat("CLO_GRF_DECL_5"):
if(!func_473(15410, -1)){
func_414(15410, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
case -1034032319:
case joaat("CLO_GRF_DECL_6"):
if(!func_473(15407, -1)){
func_414(15407, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
case 1747334867:
case joaat("CLO_GRF_DECL_7"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
case 236389050:
case joaat("CLO_GRF_DECL_8"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
case joaat("CLO_GRM_DECL_9"):
case 908992470:
if(!func_473(15414, -1)){
func_414(15414, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
case joaat("CLO_GRM_DECL_10"):
case -1021993708:
if(!func_473(15415, -1)){
func_414(15415, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
case 479676642:
case joaat("CLO_GRF_DECL_11"):
if(!func_473(15399, -1)){
func_414(15399, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
case 242920617:
case joaat("CLO_GRF_DECL_12"):
if(!func_473(15404, -1)){
func_414(15404, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
case -1219723702:
case joaat("CLO_GRF_DECL_13"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
case joaat("CLO_GRM_DECL_14"):
case 2087194554:
if(!func_473(15392, -1)){
func_414(15392, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
case joaat("CLO_GRM_DECL_15"):
case 981732339:
if(!func_473(15390, -1)){
func_414(15390, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
case joaat("CLO_GRM_DECL_16"):
case 1271443068:
if(!func_473(15402, -1)){
func_414(15402, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
case joaat("CLO_GRM_DECL_17"):
case -1785118184:
if(!func_473(15416, -1)){
func_414(15416, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
case 2029126042:
case joaat("CLO_GRF_DECL_18"):
if(!func_149(209, -1)){
func_609(209, 1, -1, 1);
return 1;
}
break;
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
case -14316613:
case joaat("CLO_GRF_DECL_30"):
if(!func_473(15426, -1)){
func_414(15426, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
case 1281631799:
case joaat("CLO_GRF_DECL_31"):
if(!func_473(15422, -1)){
func_414(15422, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
case 447234752:
case joaat("CLO_GRF_DECL_32"):
if(!func_473(15423, -1)){
func_414(15423, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
case 278933172:
case joaat("CLO_GRF_DECL_33"):
if(!func_473(15421, -1)){
func_414(15421, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
case -562607521:
case joaat("CLO_GRF_DECL_34"):
if(!func_473(15427, -1)){
func_414(15427, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
case 755492739:
case joaat("CLO_GRF_DECL_35"):
if(!func_473(15419, -1)){
func_414(15419, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
case -85982412:
case joaat("CLO_GRF_DECL_36"):
if(!func_473(15420, -1)){
func_414(15420, 1, -1);
return 1;
}
break;
}
return 0;
}


void func_609(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_610()){
iVar0=Global_2848282[iParam0 /*3*/][func_150(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_610(){
return 1;
return 0;
}

int func_611(int iParam0){
int iVar0;
iVar0=func_613(iParam0);
return func_427(func_612(iVar0), -1, 0);
}

int func_612(int iParam0){
switch (iParam0){
case 0:
return 3954;
case 1:
return 3955;
case 2:
return 3956;
case 3:
return 3957;
case 4:
return 3958;
case 5:
return 5459;
case 6:
return 11813;
default:
}
return 3954;
}

int func_613(int iParam0){
int iVar0;
if(func_614(iParam0)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iVar0 /*13*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_614(int iParam0){
if(iParam0==33 || iParam0==0){
return 0;
}
return 1;
}


void func_615(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=func_613(iParam0);
iVar1=func_612(iVar0);
iVar2=(func_427(iVar1, -1, 0) + iParam1);
func_498(iVar1, iVar2, -1, 1, 0);
if(iVar0==5){
return;
}
if(func_618(9357, -1) < 3){
iVar3=0;
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iVar0 /*13*/] !=0){
iVar1=func_612(iVar0);
iVar3=(iVar3 + func_427(iVar1, -1, 0));
}
iVar0++;
}
iVar4=1;
while (iVar4 <=3){
if(iVar3 >=func_617(iVar4)){
iVar5=iVar4;
}
iVar4++;
}
func_616(9357, iVar5, -1);
}}


void func_616(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_19();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_617(int iParam0){
switch (iParam0){
case 1:
return 100000;
break;
case 2:
return 300000;
break;
case 3:
return 500000;
break;
}
return 0;
}

int func_618(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_19();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_619(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
iVar1=func_516(iParam1);
if(func_614(iParam1)){
switch (iVar1){
case 1:
iVar0=Global_262145.f_17424;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17430);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17436);
}
iVar0=(iVar0 * iParam2);
break;
case 3:
iVar0=Global_262145.f_17423;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17429);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17435);
}
iVar0=(iVar0 * iParam2);
break;
case 4:
iVar0=Global_262145.f_17422;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17428);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17434);
}
iVar0=(iVar0 * iParam2);
break;
case 0:
iVar0=Global_262145.f_17420;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17426);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17432);
}
iVar0=(iVar0 * iParam2);
break;
case 6:
iVar0=Global_262145.f_17425;
if(func_621(iParam0)){
iVar0=(iVar0 + Global_262145.f_17431);
}
iVar0=(iVar0 * iParam2);
break;
case 2:
iVar0=Global_262145.f_17421;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17427);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17433);
}
iVar0=(iVar0 * iParam2);
break;
case 5:
iVar0=Global_262145.f_21537;
if(func_622(iParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_21539);
}
if(func_622(iParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_21538);
}
iVar0=(iVar0 * iParam2);
break;
}}
if(bParam3){
iVar0=func_620(iVar1, iVar0);
}
return iVar0;
}

int func_620(int iParam0, int iParam1){
switch (iParam0){
case 1:
if(Global_262145.f_33054){
if(!func_473(32351, -1)){
iParam1=(iParam1 * Global_262145.f_33063);
}}
break;
case 3:
if(Global_262145.f_33055){
if(!func_473(32352, -1)){
iParam1=(iParam1 * Global_262145.f_33064);
}}
break;
case 4:
if(Global_262145.f_33056){
if(!func_473(32353, -1)){
iParam1=(iParam1 * Global_262145.f_33065);
}}
break;
case 0:
if(Global_262145.f_33057){
if(!func_473(32354, -1)){
iParam1=(iParam1 * Global_262145.f_33066);
}}
break;
case 6:
if(Global_262145.f_33058){
if(!func_473(36667, -1)){
iParam1=(iParam1 * Global_262145.f_33067);
}}
break;
case 2:
if(Global_262145.f_33059){
if(!func_473(32355, -1)){
iParam1=(iParam1 * Global_262145.f_33068);
}}
break;
case 5:
if(Global_262145.f_33061){
if(!func_473(32357, -1)){
iParam1=(iParam1 * Global_262145.f_33070);
}}
break;
}
return iParam1;
}

int func_621(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_478, 16);
}

int func_622(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_624(iParam0, iParam1)){
iVar0=func_623(iParam0, iParam1);
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_5, iParam2);
}
return 0;
}

int func_623(int iParam0, int iParam1){
int iVar0;
if(func_614(iParam1) && iParam0 !=func_65()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_624(int iParam0, int iParam1){
int iVar0;
if(func_614(iParam1) && iParam0 !=func_65()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return 1;
}
iVar0++;
}}
return 0;
}

int func_625(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_65()){
return 0;
}
if(func_614(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_1;
}
iVar0++;
}}
return 0;
}


void func_626(int iParam0, var uParam1, int iParam2, var uParam3){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
int iVar4;
float fVar5;
int iVar6;
float fVar7;
float fVar8;
var uVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
struct<2> Var14;
float fVar15;
float fVar16;
float fVar17;
int iVar18;
float fVar19;
int iVar20;
float fVar21;
int iVar22;
int iVar23;
if(iParam0==192){}elseif(iParam0==190){
if(uParam1->f_10 > 0){
if(func_500()){
Var0={
func_518() 
};
if(uParam1->f_10==uParam1->f_11){
*uParam3=(uParam1->f_15 + uParam1->f_8);
}else{
fVar1=to_float(uParam1->f_10);
fVar2=to_float(uParam1->f_11);
fVar3=((fVar1 / fVar2) * 100f);
iVar4=(uParam1->f_15 + uParam1->f_8);
fVar5=((IntToFloat(iVar4) / 100f) * fVar3);
*uParam3=ceil(fVar5);
}
iVar6=func_619(PLAYER::PLAYER_ID(), Var0.f_0, *uParam3, 0);
if(Var0.f_1==1){
fVar7=(to_float(iVar6) * Global_262145.f_19067);
iVar6=round(fVar7);
}else{
fVar8=(to_float(iVar6) * Global_262145.f_19066);
iVar6=round(fVar8);
}
*iParam2=(*iParam2 + iVar6);
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar10=func_596(&uVar9);
iVar11=round(Global_262145.f_19057);
if(iVar10 > iVar11){
iVar10=iVar11;
}
iVar12=ceil((IntToFloat(iVar10) * Global_262145.f_19056));
iVar13=((*iParam2 / 100) * iVar12);
*iParam2=(*iParam2 + iVar13);
if(iVar10 > 0){
func_588(86);
}}
if(uParam1->f_6){
*iParam2=(*iParam2 + *uParam1);
}
if(uParam1->f_6){
if(uParam1->f_12==11){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}elseif(uParam1->f_12==9){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}}
switch (func_628(Var0.f_0)){
case 1:
if(Global_262145.f_33054){
if(!func_473(32351, -1)){
*iParam2=(*iParam2 * Global_262145.f_33063);
func_414(32351, 1, -1);
}
}
break;
case 3:
if(Global_262145.f_33055){
if(!func_473(32352, -1)){
*iParam2=(*iParam2 * Global_262145.f_33064);
func_414(32352, 1, -1);
}
}
break;
case 4:
if(Global_262145.f_33056){
if(!func_473(32353, -1)){
*iParam2=(*iParam2 * Global_262145.f_33065);
func_414(32353, 1, -1);
}
}
break;
case 0:
if(Global_262145.f_33057){
if(!func_473(32354, -1)){
*iParam2=(*iParam2 * Global_262145.f_33066);
func_414(32354, 1, -1);
}
}
break;
case 2:
if(Global_262145.f_33059){
if(!func_473(32355, -1)){
*iParam2=(*iParam2 * Global_262145.f_33068);
func_414(32355, 1, -1);
}
}
break;
}
Global_2793046.f_5225.f_386=*iParam2;
}elseif(func_257(0)){
Var14={
func_627(func_534()) 
};
if(uParam1->f_10==uParam1->f_11){
*uParam3=(uParam1->f_15 + uParam1->f_8);
}else{
fVar15=to_float(uParam1->f_10);
fVar16=to_float(uParam1->f_11);
fVar17=((fVar15 / fVar16) * 100f);
iVar18=(uParam1->f_15 + uParam1->f_8);
fVar19=((IntToFloat(iVar18) / 100f) * fVar17);
*uParam3=ceil(fVar19);
}
iVar20=func_619(func_534(), Var14.f_0, *uParam3, 0);
if(Var14.f_1==1){
iVar20=ceil((IntToFloat(iVar20) * Global_262145.f_19067));
}elseif(Var14.f_1==0){
iVar20=ceil((IntToFloat(iVar20) * Global_262145.f_19066));
}
*iParam2=(*iParam2 + iVar20);
fVar21=Global_262145.f_19106;
iVar22=ceil((IntToFloat(*iParam2) * fVar21));
*iParam2=iVar22;
iVar23=Global_262145.f_19107;
if(*iParam2 > iVar23){
*iParam2=iVar23;
}
if(uParam1->f_6){
if(uParam1->f_12==11){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}}}}}}


struct<2> func_627(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_194;
}

int func_628(int iParam0){
switch (iParam0){
case 3:
case 8:
case 13:
case 18:
return 4;
break;
case 4:
case 9:
case 14:
case 19:
return 2;
break;
case 5:
case 10:
case 15:
case 20:
return 0;
break;
case 1:
case 6:
case 11:
case 16:
return 3;
break;
case 2:
case 7:
case 12:
case 17:
return 1;
break;
case 32:
return 6;
break;
case 21:
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
return 5;
break;
}
return -1;
}


void func_629(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
float fVar8;
int iVar9;
int iVar10;
bVar0=func_124(PLAYER::PLAYER_ID());
if(iParam0==167){
if(func_124(PLAYER::PLAYER_ID())){
if(bParam1){
func_644();
}
func_643();
}}elseif(iParam0==168){
if(bParam1){
if(uParam2->f_5){
*iParam3=(*iParam3 + func_635(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_183));
}else{
*uParam4=uParam2->f_7;
if(uParam2->f_8 > 0){
*uParam4=(*uParam4 + uParam2->f_8);
}
iVar1=func_634(*uParam4);
iVar2=(iVar1 * *uParam4);
*iParam3=(*iParam3 + iVar2);
if(bVar0){
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar4=func_596(&uVar3);
iVar5=Global_262145.f_16601;
if(iVar4 > iVar5){
iVar4=iVar5;
}
iVar6=ceil((IntToFloat(iVar4) * Global_262145.f_15809));
iVar7=((*iParam3 / 100) * iVar6);
*iParam3=(*iParam3 + iVar7);
if(iVar4 > 0 && uParam2->f_9 !=4){
func_588(44);
}}
if(uParam2->f_6){
*iParam3=(*iParam3 + *uParam2);
}}}
if(bVar0){
if(Global_262145.f_33053){
if(!func_473(32350, -1)){
*iParam3=(*iParam3 * Global_262145.f_33062);
func_414(32350, 1, -1);
}}
func_632(*iParam3);
func_631();
Global_2793046.f_5225.f_386=*iParam3;
}else{
fVar8=Global_262145.f_24465;
iVar9=ceil((IntToFloat(*iParam3) * fVar8));
*iParam3=iVar9;
iVar10=Global_262145.f_24466;
if(*iParam3 > iVar10){
*iParam3=iVar10;
}}}
if(bVar0){
func_630();
}}}


void func_630(){
int iVar0;
iVar0=Global_2851545[func_19()];
iVar0++;
func_497(3670, iVar0, -1, 1);
}


void func_631(){
int iVar0;
iVar0=Global_2851551[func_19()];
iVar0++;
func_497(3669, iVar0, -1, 1);
}


void func_632(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=Global_2851554[func_19()];
iVar0=(iVar0 + iParam0);
func_497(3671, iVar0, -1, 1);
if(func_618(7666, -1) < 24){
iVar1=1;
while (iVar1 <=24){
if(iVar0 >=func_633(iVar1)){
iVar2=iVar1;
}
iVar1++;
}
func_616(7666, iVar2, -1);
}}

int func_633(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_16734;
break;
case 2:
return Global_262145.f_16735;
break;
case 3:
return Global_262145.f_16736;
break;
case 4:
return Global_262145.f_16737;
break;
case 5:
return Global_262145.f_16738;
break;
case 6:
return Global_262145.f_16739;
break;
case 7:
return Global_262145.f_16740;
break;
case 8:
return Global_262145.f_16741;
break;
case 9:
return Global_262145.f_16742;
break;
case 10:
return Global_262145.f_16743;
break;
case 11:
return Global_262145.f_16744;
break;
case 12:
return Global_262145.f_16745;
break;
case 13:
return Global_262145.f_16746;
break;
case 14:
return Global_262145.f_16747;
break;
case 15:
return Global_262145.f_16748;
break;
case 16:
return Global_262145.f_16749;
break;
case 17:
return Global_262145.f_16750;
break;
case 18:
return Global_262145.f_16751;
break;
case 19:
return Global_262145.f_16752;
break;
case 20:
return Global_262145.f_16753;
break;
case 21:
return Global_262145.f_16754;
break;
case 22:
return Global_262145.f_16755;
break;
case 23:
return Global_262145.f_16756;
break;
case 24:
return Global_262145.f_16757;
break;
}
return 0;
}


var func__634(int iParam0){
if(iParam0 >=Global_262145.f_15787){
return Global_262145.f_15808;
}elseif(iParam0 >=Global_262145.f_15786){
return Global_262145.f_15807;
}elseif(iParam0 >=Global_262145.f_15785){
return Global_262145.f_15806;
}elseif(iParam0 >=Global_262145.f_15784){
return Global_262145.f_15805;
}elseif(iParam0 >=Global_262145.f_15783){
return Global_262145.f_15804;
}elseif(iParam0 >=Global_262145.f_15782){
return Global_262145.f_15803;
}elseif(iParam0 >=Global_262145.f_15781){
return Global_262145.f_15802;
}elseif(iParam0 >=Global_262145.f_15780){
return Global_262145.f_15801;
}elseif(iParam0 >=Global_262145.f_15779){
return Global_262145.f_15800;
}elseif(iParam0 >=Global_262145.f_15778){
return Global_262145.f_15799;
}elseif(iParam0 >=Global_262145.f_15777){
return Global_262145.f_15798;
}elseif(iParam0 >=Global_262145.f_15776){
return Global_262145.f_15797;
}elseif(iParam0 >=Global_262145.f_15775){
return Global_262145.f_15796;
}elseif(iParam0 >=Global_262145.f_15774){
return Global_262145.f_15795;
}elseif(iParam0 >=Global_262145.f_15773){
return Global_262145.f_15794;
}elseif(iParam0 >=Global_262145.f_15772){
return Global_262145.f_15793;
}elseif(iParam0 >=Global_262145.f_15771){
return Global_262145.f_15792;
}elseif(iParam0 >=Global_262145.f_15770){
return Global_262145.f_15791;
}elseif(iParam0 >=Global_262145.f_15769){
return Global_262145.f_15790;
}elseif(iParam0 >=Global_262145.f_15768){
return Global_262145.f_15789;
}
return Global_262145.f_15788;
}

int func_635(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_642(iParam0)){
iVar2=1;
while (iVar2 <=6){
iVar3=iVar2;
if(func_641(iParam0, iVar3)){
iVar0=(iVar0 + func_640(iVar3));
iVar1++;
}
iVar2++;
}
if(iVar1 < func_636(iParam0)){
iVar2=0;
while (iVar2 <=(func_636(iParam0) - iVar1)){
iVar0=(iVar0 + func_640(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
iVar2++;
}}}
return iVar0;
}

int func_636(int iParam0){
int iVar0;
if(func_639(iParam0)){
iVar0=func_637(func_638(iParam0));
return func_427(iVar0, -1, 0);
}
return 0;
}

int func_637(int iParam0){
if(iParam0==0){
return 3649;
}elseif(iParam0==1){
return 3650;
}elseif(iParam0==2){
return 3651;
}elseif(iParam0==3){
return 3652;
}elseif(iParam0==4){
return 3653;
}
return 3649;
}

int func_638(int iParam0){
int iVar0;
if(func_639(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_639(int iParam0){
if(iParam0 < 1 || iParam0 > 22){
return 0;
}
return 1;
}

int func_640(int iParam0){
if(iParam0==1){
return Global_262145.f_15988;
}elseif(iParam0==2){
return Global_262145.f_15986;
}elseif(iParam0==3){
return Global_262145.f_15990;
}elseif(iParam0==4){
return Global_262145.f_15984;
}elseif(iParam0==5){
return Global_262145.f_15982;
}elseif(iParam0==6){
return Global_262145.f_15992;
}
return 0;
}

int func_641(int iParam0, int iParam1){
int iVar0;
if(func_639(iParam0)){
iVar0=0;
while (iVar0 < 6){
if(Global_1949815[iVar0]==iParam1 && Global_1949822[iVar0]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}

int func_642(int iParam0){
int iVar0;
if(func_639(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}


void func_643(){
int iVar0;
iVar0=Global_2851542[func_19()];
iVar0++;
Global_2851542[func_19()]=iVar0;
func_497(3668, iVar0, -1, 1);
}


void func_644(){
int iVar0;
int iVar1;
iVar0=Global_2851539[func_19()];
iVar1=Global_2851548[func_19()];
iVar0++;
iVar1++;
Global_2851539[func_19()]=iVar0;
Global_2851548[func_19()]=iVar1;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_138=iVar1;
func_497(3666, iVar0, -1, 1);
func_497(3667, iVar1, -1, 1);
}


void func_645(){
if(func_515()){
Global_2684801.f_3076.f_134=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}


void func_646(){
if(func_515()){
if(Global_2684801.f_3076.f_134 > 0){
Global_2684801.f_3076.f_134=(Global_2684801.f_3076.f_134 - 1);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}}


void func_647(){
if(func_515()){
if(Global_2684801.f_3076.f_134 < 10){
Global_2684801.f_3076.f_134++;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}}

int func_648(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_28;
}

int func_649(int iParam0){
switch (iParam0){
case 167:
case 168:
case 178:
case 188:
return 1;
case 225:
case 226:
case 229:
case 230:
case 233:
case 237:
case 158:
case 256:
case 258:
if(func_532(1) && !func_257(1)){
if(func_509(func_534())){
return 1;
}}
break;
}
if(func_116(iParam0)==0){
if(func_532(1) && !func_257(1)){
if(func_509(func_534())){
return 1;
}}}
return 0;
}

int func_650(int iParam0, bool bParam1){
if(bParam1){
return Global_262145.f_18751;
}
switch (iParam0){
case 142:
return round((IntToFloat(Global_262145.f_12981) * Global_262145.f_12986));
case 157:
return 0;
case 159:
return round((IntToFloat(Global_262145.f_12931) * Global_262145.f_12936));
case 151:
return 0;
case 148:
return round((IntToFloat(Global_262145.f_12958) * Global_262145.f_12962));
case 164:
return round((IntToFloat(Global_262145.f_12971) * Global_262145.f_12975));
case 152:
return round((IntToFloat(Global_262145.f_12993) * Global_262145.f_12998));
case 153:
return round((IntToFloat(Global_262145.f_13155) * Global_262145.f_13156));
case 154:
return round((IntToFloat(Global_262145.f_13161) * Global_262145.f_13162));
case 155:
return round((IntToFloat(Global_262145.f_13159) * Global_262145.f_13160));
case 160:
return round((IntToFloat(Global_262145.f_13153) * Global_262145.f_13154));
case 162:
return round((IntToFloat(Global_262145.f_13157) * Global_262145.f_13158));
case 163:
return round((IntToFloat(Global_262145.f_13151) * Global_262145.f_13152));
case 170:
return 0;
case 171:
return Global_262145.f_15510;
case 172:
return Global_262145.f_15526;
case 173:
return Global_262145.f_15469;
case 166:
return 0;
case 179:
return Global_262145.f_18759;
case 180:
return Global_262145.f_18634;
case 182:
return 0;
case 183:
return Global_262145.f_18642;
case 185:
return Global_262145.f_18651;
case 186:
return 0;
case 189:
return Global_262145.f_18847;
case 190:
return 0;
case 191:
return 0;
case 192:
return 0;
case 193:
return Global_262145.f_18864;
case 194:
return 0;
case 195:
return 0;
case 197:
return Global_262145.f_18711;
case 198:
return 0;
case 199:
return Global_262145.f_18895;
case 200:
return 0;
case 201:
return Global_262145.f_18773;
case 205:
return Global_262145.f_18882;
case 207:
return 0;
case 208:
return Global_262145.f_18740;
case 209:
return 0;
case 210:
return Global_262145.f_18877;
case 211:
return Global_262145.f_18841;
case 214:
return Global_262145.f_19437;
case 215:
return Global_262145.f_19447;
case 216:
return Global_262145.f_19457;
case 217:
return Global_262145.f_19466;
case 218:
return Global_262145.f_19475;
case 219:
return Global_262145.f_19491;
case 241:
return Global_262145.f_24612;
case 242:
return Global_262145.f_24608;
case 248:
return Global_262145.f_24611;
case 244:
return Global_262145.f_24609;
case 239:
return Global_262145.f_24613;
case 240:
return Global_262145.f_24614;
case 243:
return Global_262145.f_27090;
default:
}
return 0;
}

int func_651(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(bParam2){
return Global_262145.f_18752;
}
switch (iParam0){
case 142:
return round((IntToFloat(Global_262145.f_12982) * Global_262145.f_12987));
case 157:
return 0;
case 159:
return round((IntToFloat(Global_262145.f_12932) * Global_262145.f_12937));
case 151:
return 0;
case 148:
return round((IntToFloat(Global_262145.f_12959) * Global_262145.f_12963));
case 164:
return round((IntToFloat(Global_262145.f_12972) * Global_262145.f_12976));
case 152:
return round((IntToFloat(Global_262145.f_12994) * Global_262145.f_12999));
case 153:
return round((IntToFloat(Global_262145.f_13031) * Global_262145.f_13034));
case 154:
return round((IntToFloat(Global_262145.f_13077) * Global_262145.f_13080));
case 155:
return round((IntToFloat(Global_262145.f_13067) * Global_262145.f_13070));
case 160:
return round((IntToFloat(Global_262145.f_13022) * Global_262145.f_13025));
case 162:
return round((IntToFloat(Global_262145.f_13042) * Global_262145.f_13047));
case 163:
return round((IntToFloat(Global_262145.f_13007) * Global_262145.f_13010));
case 170:
return Global_262145.f_15452;
case 171:
return Global_262145.f_15511;
case 172:
return Global_262145.f_15527;
case 173:
return Global_262145.f_15470;
case 166:
return 0;
case 167:
return Global_262145.f_17557;
case 168:
iVar0=Global_262145.f_17556;
if((func_515() && Global_262145.f_33053) && !func_473(32350, -1)){
iVar0=(iVar0 * Global_262145.f_33071);
}
return iVar0;
case 179:
return Global_262145.f_18760;
case 180:
return Global_262145.f_18635;
case 182:
return 0;
case 183:
return Global_262145.f_18643;
case 185:
return Global_262145.f_18652;
case 186:
return 0;
case 189:
return Global_262145.f_18848;
case 190:
return 0;
case 191:
return 0;
case 192:
return 0;
case 193:
return Global_262145.f_18865;
case 194:
return 0;
case 195:
return 0;
case 197:
return Global_262145.f_18712;
case 198:
return 0;
case 199:
return Global_262145.f_18896;
case 200:
return 0;
case 201:
return Global_262145.f_18774;
case 205:
return Global_262145.f_18883;
case 207:
return 0;
case 208:
return Global_262145.f_18741;
case 209:
return 0;
case 210:
return Global_262145.f_18878;
case 211:
return Global_262145.f_18842;
case 214:
return Global_262145.f_19438;
case 215:
return Global_262145.f_19448;
case 216:
return Global_262145.f_19458;
case 217:
return Global_262145.f_19467;
case 218:
return Global_262145.f_19476;
case 219:
return Global_262145.f_19492;
case 178:
if(func_515()){
return Global_262145.f_19315;
}elseif(bParam1){
return Global_262145.f_19316;
}
break;
case 188:
if(func_515()){
return Global_262145.f_19399;
}elseif(bParam1){
return Global_262145.f_19400;
}
break;
case 225:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_21525;
}else{
return Global_262145.f_21526;
}}elseif(func_500()){
return Global_262145.f_21527;
}
break;
case 226:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
iVar0=Global_262145.f_21503;
}else{
iVar0=Global_262145.f_21504;
}}elseif(func_500()){
iVar0=Global_262145.f_21505;
}
if((func_515() && Global_262145.f_33061) && !func_473(32357, -1)){
iVar0=(iVar0 * Global_262145.f_33078);
}
return iVar0;
break;
case 227:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_21517;
}else{
return Global_262145.f_21518;
}}elseif(func_500()){
return Global_262145.f_21519;
}
break;
case 229:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_22706;
}else{
return Global_262145.f_22707;
}}elseif(func_500()){
return Global_262145.f_22708;
}
break;
case 230:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_22804;
}else{
return Global_262145.f_22805;
}}elseif(func_500()){
return Global_262145.f_22806;
}
break;
case 233:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_23284;
}else{
return Global_262145.f_23285;
}}elseif(func_500()){
return Global_262145.f_23283;
}
break;
case 241:
return Global_262145.f_24619;
case 242:
return Global_262145.f_24615;
case 244:
return Global_262145.f_24616;
case 248:
return Global_262145.f_24618;
case 239:
return Global_262145.f_24620;
case 240:
return Global_262145.f_24621;
case 237:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
iVar0=Global_262145.f_24454;
}else{
iVar0=Global_262145.f_24455;
}}elseif(func_500()){
iVar0=Global_262145.f_24456;
}
if((func_515() && Global_262145.f_33060) && !func_473(32356, -1)){
iVar0=(iVar0 * Global_262145.f_33077);
}
return iVar0;
break;
case 238:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_24572;
}else{
return Global_262145.f_24573;
}}elseif(func_500()){
return Global_262145.f_24574;
}
break;
case 249:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_24588;
}else{
return Global_262145.f_24589;
}}elseif(func_500()){
return Global_262145.f_24590;
}
break;
case 243:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return Global_262145.f_27093;
}else{
return Global_262145.f_27094;
}}elseif(func_500()){
return Global_262145.f_27093;
}
break;
case 158:
if(func_515() && !func_500()){
if(func_509(PLAYER::PLAYER_ID())){
return 1500;
}else{
return 1000;
}}elseif(func_500()){
return 1500;
}
break;
}
return 0;
}


void func_652(int iParam0, var uParam1, var uParam2){
int iVar0;
if(iParam0==157){
*uParam1=1f;
*uParam2=1f;
return;
}
if(func_653(iParam0)){
if(!func_515()){
*uParam1=1f;
*uParam2=Global_262145.f_12875;
}else{
*uParam1=1f;
*uParam2=1f;
}
return;
}
if(func_191(PLAYER::PLAYER_ID(), 1)){
if(func_326(iParam0)){
*uParam1=(Global_262145.f_18611 / 100f);
*uParam2=(Global_262145.f_18611 / 100f);
}elseif(iParam0==242){
*uParam1=Global_262145.f_24622;
*uParam2=Global_262145.f_24622;
}elseif(iParam0==244){
*uParam1=Global_262145.f_24623;
*uParam2=Global_262145.f_24623;
}elseif(iParam0==248){
*uParam1=Global_262145.f_24625;
*uParam2=Global_262145.f_24625;
}elseif(iParam0==241){
*uParam1=Global_262145.f_24626;
*uParam2=Global_262145.f_24626;
}elseif(iParam0==239){
*uParam1=Global_262145.f_24627;
*uParam2=Global_262145.f_24627;
}elseif(iParam0==240){
*uParam1=Global_262145.f_24628;
*uParam2=Global_262145.f_24628;
}else{
*uParam1=Global_262145.f_12872;
*uParam2=Global_262145.f_12871;
}}elseif(func_326(iParam0)){
*uParam1=(Global_262145.f_18612 / 100f);
*uParam2=(Global_262145.f_18612 / 100f);
}elseif(iParam0==242){
*uParam1=Global_262145.f_24629;
*uParam2=Global_262145.f_24629;
}elseif(iParam0==244){
*uParam1=Global_262145.f_24630;
*uParam2=Global_262145.f_24630;
}elseif(iParam0==248){
*uParam1=Global_262145.f_24632;
*uParam2=Global_262145.f_24632;
}elseif(iParam0==241){
*uParam1=Global_262145.f_24633;
*uParam2=Global_262145.f_24633;
}elseif(iParam0==239){
*uParam1=Global_262145.f_24634;
*uParam2=Global_262145.f_24634;
}elseif(iParam0==240){
*uParam1=Global_262145.f_24635;
*uParam2=Global_262145.f_24635;
}else{
*uParam1=Global_262145.f_12874;
*uParam2=Global_262145.f_12873;
}
iVar0=func_260();
if(iVar0 !=func_65()){
if(func_76(PLAYER::PLAYER_ID(), iVar0, 1)){
*uParam1=1f;
*uParam2=1f;
}}}

int func_653(int iParam0){
switch (iParam0){
case 160:
case 162:
case 153:
case 154:
case 155:
case 163:
case 171:
case 172:
return 1;
default:
}
return 0;
}

int func_654(){
return (Local_93.f_115 * Global_262145.f_15485);
}

int func_655(){
return (Local_93.f_115 * Global_262145.f_15484);
}


void func_656(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11, int iParam12){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4[3];
var uVar5[3];
int iVar6;
int iVar7;
int iVar8[1];
int iVar9[1];
int iVar10;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(bParam9){
if(iParam12==-1){
iVar0=func_183(PLAYER::PLAYER_ID());
}else{
iVar0=iParam12;
}
Global_1948017.f_4=func_838();
Global_1948017.f_5=func_837();
if(func_130(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())){
Global_1948017.f_6=1;
}else{
Global_1948017.f_6=0;
}
Global_1948017.f_1=func_829(bParam9);
Global_1948017.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948017.f_9=func_828(bParam0);
Global_1948017.f_10=iParam1;
Global_1948017.f_17=Global_1948017.f_2;
Global_1948017.f_18=Global_1948017.f_2;
Global_1948017.f_19=func_827();
Global_1948017.f_21=(Global_1948017.f_8 - Global_1948017.f_7);
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948017.f_23=func_828(func_257(1));
}
Global_1948017.f_24=func_826(PLAYER::PLAYER_ID());
Global_1948017.f_28=func_825(PLAYER::PLAYER_ID());
if(Global_1948017.f_24 > 2){
Global_1948017.f_24=2;
}
func_823(iVar0);
}elseif(bParam11){}elseif(iParam12==-1){
iVar0=func_105(PLAYER::PLAYER_ID());
}else{
iVar0=iParam12;
}
if((func_326(iVar0) || iVar0==293) || iVar0==291){
Global_1947751.f_2=func_838();
Global_1947751.f_3=func_837();
Global_1947751.f_50=iParam4;
Global_1947751.f_51=iParam5;
Global_1947751.f_10=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947751.f_20=(Global_1947751.f_10 - Global_1947751.f_9);
Global_1947751.f_12=iParam1;
Global_1947751.f_19=func_818(iVar0, bParam0, func_822(bParam3));
if(bParam0){
Global_1947751.f_11=1;
}else{
Global_1947751.f_11=0;
}
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947751.f_8=1;
}else{
Global_1947751.f_8=0;
}
Global_1947751.f_54=func_793(1);
Global_1947751.f_55=func_793(0);
if(iParam2 !=0){
Global_1947751.f_43=0;
Global_1947751.f_45=func_792(func_534(), iParam2);
Global_1947751.f_47=iParam7;
Global_1947751.f_46=iParam6;
Global_1947751.f_52=func_791(func_534(), iParam2);
}
func_789(iVar0);
}elseif(func_331(iVar0)){
Global_1947807.f_2=func_838();
Global_1947807.f_3=func_837();
Global_1947807.f_10=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947807.f_19=(Global_1947807.f_10 - Global_1947807.f_9);
Global_1947807.f_12=iParam1;
if(bParam0){
Global_1947807.f_11=1;
}else{
Global_1947807.f_11=0;
}
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947807.f_8=1;
}else{
Global_1947807.f_8=0;
}
func_787(iVar0);
}elseif(((func_493(iVar0) || iVar0==297) || iVar0==296) || iVar0==298){
Global_1947870.f_2=func_838();
Global_1947870.f_3=func_837();
Global_1947870.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947870.f_18=(Global_1947870.f_9 - Global_1947870.f_8);
Global_1947870.f_11=iParam1;
Global_1947870.f_7=func_827();
Global_1947870.f_42=func_785(func_19(), 5);
iVar1=PLAYER::PLAYER_ID();
iVar2=func_514(iVar1);
if(func_534() !=-1){
Global_1947870.f_17=func_784(func_534());
}else{
Global_1947870.f_17=func_784(PLAYER::PLAYER_ID());
}
Global_1947870.f_28=iVar2;
Global_1947870.f_29=func_828((func_783(iVar1) || func_782(iVar1)));
Global_1947870.f_30=func_828(func_781(iVar1));
Global_1947870.f_32=func_828(func_780(iVar1));
Global_1947870.f_33=func_828(func_779(iVar1));
Global_1947870.f_34=func_828(func_778(iVar1));
Global_1947870.f_35=func_828(func_777(0, iVar1)==1);
Global_1947870.f_36=func_828(func_776(iVar1));
Global_1947870.f_37=func_828(func_775(iVar1));
Global_1947870.f_38=func_828(func_774(iVar1));
Global_1947870.f_39=func_828(func_622(iVar1, iVar2, 0));
Global_1947870.f_40=func_828(func_622(iVar1, iVar2, 2));
Global_1947870.f_41=func_828(func_622(iVar1, iVar2, 1));
if(func_773(iVar1)){
Global_1947870.f_31=2;
}elseif(func_772(iVar1)){
Global_1947870.f_31=1;
}
if(bParam0){
Global_1947870.f_10=1;
}else{
Global_1947870.f_10=0;
}
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947870.f_6=1;
}else{
Global_1947870.f_6=0;
}
Global_1947870.f_21=-2;
Global_1947870.f_22=-2;
func_770(iVar0);
}elseif(func_492(iVar0)){
Global_1947917.f_2=func_838();
Global_1947917.f_3=func_837();
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947917.f_6=1;
}else{
Global_1947917.f_6=0;
}
Global_1947917.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947917.f_10=func_828(bParam0);
Global_1947917.f_11=iParam1;
Global_1947917.f_17=func_769(func_260());
Global_1947917.f_18=(Global_1947917.f_9 - Global_1947917.f_8);
Global_1947917.f_20=iParam8;
Global_1947917.f_21=-2;
Global_1947917.f_22=-2;
Global_1947917.f_27=func_768();
Global_1947917.f_29=func_427(6110, -1, 0);
Global_1947917.f_30=func_427(6106, -1, 0);
Global_1947917.f_31=func_427(6107, -1, 0);
Global_1947917.f_32=func_427(6109, -1, 0);
Global_1947917.f_33=func_427(6108, -1, 0);
Global_1947917.f_34=func_427(6111, -1, 0);
Global_1947917.f_36=func_828(func_257(1));
Global_1947917.f_37=func_766();
func_745();
func_743(iVar0);
}elseif(func_491(iVar0)){
Global_1947971.f_2=func_838();
Global_1947971.f_3=func_837();
Global_1947971.f_1=iParam10;
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947971.f_6=1;
}else{
Global_1947971.f_6=0;
}
Global_1947971.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947971.f_10=func_828(bParam0);
Global_1947971.f_11=iParam1;
Global_1947971.f_18=(Global_1947971.f_9 - Global_1947971.f_8);
Global_1947971.f_20=iParam8;
Global_1947971.f_23=Global_786547;
Global_1947971.f_36=Global_786547.f_1;
Global_1947971.f_24=func_427(6160, -1, 0);
Global_1947971.f_25=func_427(6165, -1, 0);
Global_1947971.f_26=func_427(6166, -1, 0);
Global_1947971.f_27=func_828((((func_742() || func_741()) || func_740()) || func_739(PLAYER::PLAYER_ID())));
Global_1947971.f_28=func_427(6167, -1, 0);
Global_1947971.f_29=func_828(func_738());
Global_1947971.f_35=-1;
Global_1947971.f_38=-1;
Global_1947971.f_39=Global_1947971.f_4;
Global_1947971.f_40=Global_1947971.f_5;
Global_1947971.f_41=func_838();
Global_1947971.f_42=func_828(func_257(1));
Global_1947971.f_44=Global_1947971.f_18;
func_736(iVar0);
}elseif(func_735(iVar0)){
if(Global_1948107.f_2==-1){
Global_1948107.f_2=func_838();
}
if(Global_1948107.f_3==-1){
Global_1948107.f_3=func_837();
}
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1948107.f_6=1;
}else{
Global_1948107.f_6=0;
}
Global_1948107.f_1=func_829(0);
Global_1948107.f_7=func_827();
Global_1948107.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948107.f_10=func_828(bParam0);
Global_1948107.f_11=iParam1;
if(func_534() !=-1){
Global_1948107.f_17=func_784(func_534());
}
Global_1948107.f_18=(Global_1948107.f_9 - Global_1948107.f_8);
Global_1948107.f_19=Global_2793046.f_6868;
Global_1948107.f_28=func_825(PLAYER::PLAYER_ID());
Global_1948107.f_29=func_828(func_734(PLAYER::PLAYER_ID()));
Global_1948107.f_30=func_828(func_733(PLAYER::PLAYER_ID()));
Global_1948107.f_31=func_732(PLAYER::PLAYER_ID());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948107.f_33=func_828(func_257(1));
}
if(Global_1948107.f_34 > 2){
Global_1948107.f_34=2;
}
Global_1948107.f_41=func_731(iVar0);
func_729(iVar0);
}elseif(func_490(iVar0)){
Global_1948053.f_2=func_838();
Global_1948053.f_3=func_837();
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1948053.f_6=1;
}else{
Global_1948053.f_6=0;
}
Global_1948053.f_1=func_829(0);
Global_1948053.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948053.f_10=func_828(bParam0);
Global_1948053.f_11=iParam1;
Global_1948053.f_18=(Global_1948053.f_9 - Global_1948053.f_8);
Global_1948053.f_28=func_825(PLAYER::PLAYER_ID());
if(Global_1948053.f_28){
Global_1948053.f_29=func_728(PLAYER::PLAYER_ID());
}else{
Global_1948053.f_29=0;
}
Global_1948053.f_30=func_712(PLAYER::PLAYER_ID(), 4, -1);
Global_1948053.f_31=func_732(PLAYER::PLAYER_ID());
Global_1948053.f_32=func_828(func_711(PLAYER::PLAYER_ID()));
Global_1948053.f_33=func_828(func_710(PLAYER::PLAYER_ID()));
Global_1948053.f_34=func_828(func_709(PLAYER::PLAYER_ID()));
Global_1948053.f_35=func_828(func_708(PLAYER::PLAYER_ID()));
Global_1948053.f_36=func_707(PLAYER::PLAYER_ID());
Global_1948053.f_37=func_706(PLAYER::PLAYER_ID());
Global_1948053.f_39=func_705(PLAYER::PLAYER_ID());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948053.f_41=func_828(func_257(1));
}
if(Global_1948053.f_42 > 2){
Global_1948053.f_42=2;
}
func_703(iVar0);
}elseif(func_485(iVar0)){
Global_1948194.f_2=func_838();
Global_1948194.f_3=func_837();
Global_1948194.f_4=func_702(func_534());
Global_1948194.f_5=func_701(func_534());
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1948194.f_6=1;
}else{
Global_1948194.f_6=0;
}
Global_1948194.f_7=func_827();
Global_1948194.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948194.f_10=func_828(bParam0);
Global_1948194.f_11=iParam1;
if(func_260() !=-1){
Global_1948194.f_17=func_784(func_260());
}
Global_1948194.f_18=(Global_1948194.f_9 - Global_1948194.f_8);
Global_1948194.f_21=1;
Global_1948194.f_22=1;
Global_1948194.f_25=func_700(PLAYER::PLAYER_ID());
Global_1948194.f_27=func_828(func_699(PLAYER::PLAYER_ID()));
Global_1948194.f_28=func_695(21, -1);
Global_1948194.f_29=func_828(func_694(PLAYER::PLAYER_ID()));
func_692(iVar0);
}elseif(func_484(iVar0)){
if(func_534() !=-1){
Global_1948269.f_6=func_702(func_534());
Global_1948269.f_7=func_701(func_534());
}
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948269.f_8=func_828(func_257(1));
}
Global_1948269.f_10=func_827();
Global_1948269.f_11=1;
Global_1948269.f_13=(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1977435);
Global_1948269.f_14=iParam1;
Global_1948269.f_19=1;
Global_1948269.f_20=1;
func_690(iVar0);
}elseif(func_483(iVar0)){
Global_1948357.f_2=func_838();
if(func_534() !=-1){
Global_1948357.f_6=func_702(func_534());
Global_1948357.f_7=func_701(func_534());
}
Global_1948357.f_8=func_828(func_257(1));
Global_1948357.f_10=func_827();
Global_1948357.f_11=1;
Global_1948357.f_14=iParam1;
func_688(iVar0);
}elseif(func_687(iVar0)){
Global_1948470.f_2=func_838();
Global_1948470.f_9=1;
Global_1948470.f_10=bParam0;
Global_1948470.f_11=iParam1;
func_685(iVar0);
}elseif(func_482(iVar0) || func_481(iVar0)){
if(func_534() !=-1){
Global_1948491.f_5=func_702(func_534());
Global_1948491.f_6=func_701(func_534());
}
Global_1948491.f_7=func_828(func_257(1));
Global_1948491.f_9=func_827();
Global_1948491.f_10=1;
Global_1948491.f_13=iParam1;
Global_1948491.f_33=bParam0;
Global_1948491.f_32=iVar0;
func_683(iVar0);
}elseif(func_682(iVar0)){
iVar3=func_534();
if(iVar3 !=-1){
Global_1948560.f_7=func_702(iVar3);
Global_1948560.f_8=func_701(iVar3);
}
Global_1948560.f_9=func_828(func_257(1));
Global_1948560.f_11=func_827();
Global_1948560.f_12=1;
Global_1948560.f_15=bParam0;
Global_1948560.f_3=func_838();
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948560.f_9=func_828(func_257(1));
}else{
Global_1948560.f_9=-1;
}
if(func_681(iVar0)){
Global_1948560.f_4=func_679(func_680(PLAYER::PLAYER_ID()));
}elseif(func_678(iVar0)){
Global_1948560.f_4=func_676(func_677(PLAYER::PLAYER_ID()));
}elseif(iVar0==288){
Global_1948560.f_4=func_674(func_675(PLAYER::PLAYER_ID()));
}elseif(iVar0==308){
Global_1948560.f_4=func_672(func_673(PLAYER::PLAYER_ID()));
}elseif(iVar0==307){
Global_1948560.f_4=func_670(func_671(PLAYER::PLAYER_ID()));
}elseif(iVar0==309){
Global_1948560.f_4=func_667(func_668(PLAYER::PLAYER_ID()));
}
Global_1948560.f_1=iVar0;
Global_1948560.f_16=iParam1;
if(func_681(iVar0)){
iVar7=PLAYER::PLAYER_ID();
if(iVar3 !=-1){
iVar7=iVar3;
}
iVar6=0;
while (iVar6 < 3){
uVar4[iVar6]=func_665(func_666(iVar7, iVar6));
uVar5[iVar6]=func_663(func_664(iVar7, iVar6));
iVar6++;
}
func_661(iVar0, &uVar4, &uVar5);
}else{
iVar8[0]=-1;
iVar9[0]=-1;
func_661(iVar0, &iVar8, &iVar9);
}}elseif(func_660(iVar0)){
iVar10=func_534();
if(iVar10 !=-1){
Global_1948628.f_4=func_702(iVar10);
Global_1948628.f_5=func_701(iVar10);
}
Global_1948628.f_2=func_838();
Global_1948628.f_3=func_837();
Global_1948628.f_6=func_659();
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948560.f_9=func_828(func_257(1));
}else{
Global_1948560.f_9=-1;
}
Global_1948628.f_7=func_515();
Global_1948628.f_8=func_827();
Global_1948628.f_10=1;
Global_1948628.f_11=bParam0;
Global_1948628.f_12=iParam1;
Global_1948628.f_28=func_793(0);
Global_1948628.f_29=func_793(1);
if(iVar0==304){
Global_1948628.f_23=104;
}elseif(iVar0==306){
Global_1948628.f_23=102;
}elseif(iVar0==305){
if(Global_1948628.f_23 !=101){
Global_1948628.f_23=103;
}}
func_657(iVar0);
}else{
Global_1947733.f_6=NETWORK::GET_CLOUD_TIME_AS_INT();
if(bParam0){
Global_1947733.f_7=1;
}else{
Global_1947733.f_7=0;
}
Global_1947733.f_8=iParam1;
if(Global_1947733.f_4==0){
if((func_125(PLAYER::PLAYER_ID()) || func_143(PLAYER::PLAYER_ID())) || func_151(PLAYER::PLAYER_ID())){
Global_1947733.f_4=1;
}}}}


void func_657(int iParam0){
STATS::_PLAYSTATS_ACID_MISSION_END(&Global_1948628);
func_658();
}


void func_658(){
struct<44> Var0;
Global_1948628={
Var0 
};
}

int func_659(){
if(func_838()==-1 || func_837()==-1){
return -1;
}
return (func_838() + func_837());
}

int func_660(int iParam0){
switch (iParam0){
case 304:
case 306:
case 305:
return 1;
default:
}
return 0;
}


void func_661(int iParam0, int iParam1, int iParam2){
STATS::PLAYSTATS_FM_MISSION_END(&Global_1948560, iParam1, iParam2);
func_662();
}


void func_662(){
struct<32> Var0;
Global_1948560={
Var0 
};
}

int func_663(int iParam0){
switch (iParam0){
case 0:
return -996199159;
case 1:
return 1351684416;
case 2:
return 80063766;
default:
}
return -1;
}

int func_664(int iParam0, int iParam1){
if(iParam0 !=-1){
if(iParam1 >=0 && iParam1 < 3){
return Global_1981514[iParam0 /*60*/].f_27.f_17[iParam1 /*3*/].f_1;
}}
return 0;
}

int func_665(int iParam0){
switch (iParam0){
case 0:
return -2118247256;
case 1:
return 1203690123;
case 2:
return 270501699;
case 3:
return 1117148689;
case 4:
return 372411449;
case 5:
return 1263185141;
default:
}
return -1;
}

int func_666(int iParam0, int iParam1){
if(iParam0 !=-1){
if(iParam1 >=0 && iParam1 < 3){
return Global_1981514[iParam0 /*60*/].f_27.f_17[iParam1 /*3*/];
}}
return -1;
}

int func_667(int iParam0){
switch (iParam0){
case 0:
return -910562071;
default:
}
return -1;
}

int func_668(int iParam0){
if(func_105(iParam0)==309){
return func_669(iParam0, 309);
}
return -1;
}

int func_669(int iParam0, int iParam1){
if(func_105(iParam0)==iParam1){
return func_489(iParam0);
}
return -1;
}

int func_670(int iParam0){
switch (iParam0){
case 0:
return 293174868;
case 1:
return 1802492922;
case 2:
return 348400347;
case 3:
return 1478184830;
case 4:
return -1790666846;
default:
}
return -1;
}

int func_671(int iParam0){
if(func_105(iParam0)==307){
return func_669(iParam0, 307);
}
return -1;
}

int func_672(int iParam0){
switch (iParam0){
case 0:
return 484601284;
default:
}
return -1;
}

int func_673(int iParam0){
if(func_105(iParam0)==308){
return func_669(iParam0, 308);
}
return -1;
}

int func_674(int iParam0){
switch (iParam0){
case 0:
return 272117664;
default:
}
return -1;
}

int func_675(int iParam0){
if(func_105(iParam0)==288){
return func_669(iParam0, 288);
}
return -1;
}

int func_676(int iParam0){
switch (iParam0){
case 0:
return -550162297;
case 1:
return 1867392996;
case 2:
return 1178478598;
case 3:
return 1733853200;
case 4:
return 122463526;
case 5:
return -11921007;
case 6:
return 1857889391;
case 7:
return -175123167;
default:
}
return -1;
}

int func_677(int iParam0){
if(func_105(iParam0)==262){
return func_489(iParam0);
}
return -1;
}

int func_678(int iParam0){
switch (iParam0){
case 262:
return 1;
default:
}
return 0;
}

int func_679(int iParam0){
switch (iParam0){
case 0:
return -652378470;
case 1:
return -1721915175;
case 2:
return 1943926012;
case 3:
return 1889811088;
case 4:
return 2056605795;
case 5:
return 1160295559;
default:
}
return -1;
}

int func_680(int iParam0){
if(func_105(iParam0)==263){
return func_489(iParam0);
}
return -1;
}

int func_681(int iParam0){
switch (iParam0){
case 263:
return 1;
default:
}
return 0;
}

int func_682(int iParam0){
if((((func_681(iParam0) || func_678(iParam0)) || iParam0==308) || iParam0==307) || iParam0==309){
return 1;
}
return 0;
}


void func_683(int iParam0){
STATS::PLAYSTATS_ROBBERY_PREP(&Global_1948491);
func_684();
}


void func_684(){
struct<34> Var0;
Global_1948491={
Var0 
};
}


void func_685(int iParam0){
STATS::PLAYSTATS_DJ_MISSION_ENDED(&Global_1948470);
func_686();
}


void func_686(){
struct<21> Var0;
Global_1948470={
Var0 
};
}

int func_687(int iParam0){
switch (iParam0){
case 258:
return 1;
default:
}
return 0;
}


void func_688(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_HEIST4_PREP(&Global_1948357);
func_689();
}


void func_689(){
struct<35> Var0;
Global_1948357={
Var0 
};
Global_1948357.f_23=0;
Global_1948357.f_22=0;
Global_1948357.f_21=0;
}


void func_690(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_HEIST3_PREP(&Global_1948269);
func_691();
}


void func_691(){
struct<36> Var0;
Global_1948269={
Var0 
};
Global_1948269.f_23=0;
Global_1948269.f_22=0;
Global_1948269.f_21=0;
}


void func_692(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_FREEMODE_CASINO_MISSION_ENDED(&Global_1948194);
func_693();
}


void func_693(){
struct<31> Var0;
Global_1948194={
Var0 
};
}

int func_694(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_404.f_2, 6);
}
return 0;
}

int func_695(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam1;
if(iParam1==-1){
iVar0=func_19();
}
if(iParam0==7 && !Global_262145.f_17451){
return 0;
}
if(iParam0 >=1000){
iVar1=func_698(iParam0);
if(iVar1==0 && func_427(5396, iParam1, 0) !=0){
return 1234;
}
if(func_697(-1) && iVar1==2){
return 1236;
}
if(func_825(PLAYER::PLAYER_ID()) && iVar1==1){
return 1237;
}
if(func_696(-1) && iVar1==3){
return 1238;
}}
if(iParam0==0){
return Global_1665644[iVar0];
}elseif(iParam0==99){
return Global_2851504[iVar0];
}elseif(iParam0 >=1){
if(iParam0 >=30){
return 0;
}
return Global_2851325[(iParam0 - 1) /*3*/][iVar0];
}
return 0;
}


bool func_696(int iParam0){
return func_427(9517, iParam0, 0) !=0;
}


bool func_697(int iParam0){
if(!Global_262145.f_24171){
return 0;
}
return func_427(7210, iParam0, 0) !=0;
}

int func_698(int iParam0){
iParam0=(iParam0 - 1000);
if(iParam0 >=0 && iParam0 <=4){
return iParam0;
}
return -1;
}

int func_699(int iParam0){
if(iParam0 !=func_65()){
return Global_1853910[iParam0 /*862*/].f_267.f_404 !=0;
}
return 0;
}

int func_700(int iParam0){
if(func_105(iParam0)==243){
return func_489(iParam0);
}
return -1;
}

int func_701(int iParam0){
if(iParam0==func_65()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_702(int iParam0){
if(iParam0==func_65()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}


void func_703(int iParam0){
STATS::PLAYSTATS_WAREHOUSE_MISSION_ENDED(&Global_1948053);
func_704();
}


void func_704(){
struct<54> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_14=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_29=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Global_1948053={
Var0 
};
}

int func_705(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 12);
}
return 0;
}

int func_706(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 10);
}
return 0;
}

int func_707(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 11);
}
return 0;
}

int func_708(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 4);
}

int func_709(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 3);
}

int func_710(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 2);
}

int func_711(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 1);
}

int func_712(int iParam0, int iParam1, int iParam2){
if(iParam0==func_65() || !func_727(iParam1)){
return 0;
}
switch (iParam1){
case 0:
return func_722(iParam0, iParam2);
case 1:
return func_720(iParam0, iParam2);
case 3:
return func_719(iParam0);
case 2:
return func_714(iParam0, iParam2);
case 4:
return func_713(iParam0);
default:
}
return 0;
}

int func_713(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_160064.f_14, 6);
}
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 6);
}

int func_714(int iParam0, int iParam1){
switch (iParam1){
case 10:
return func_718(iParam0);
case 11:
return func_717(iParam0);
case 12:
return func_716(iParam0);
case 13:
return func_715(iParam0);
default:
}
return 0;
}

int func_715(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 15);
}

int func_716(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 14);
}

int func_717(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 13);
}

int func_718(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 12);
}

int func_719(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_160064.f_14, 11);
}
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 5);
}

int func_720(int iParam0, int iParam1){
switch (iParam1){
case 5:
return func_721(iParam0);
case 6:
return func_711(iParam0);
case 7:
return func_710(iParam0);
case 8:
return func_709(iParam0);
case 9:
return func_708(iParam0);
default:
}
return 0;
}

int func_721(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 0);
}

int func_722(int iParam0, int iParam1){
switch (iParam1){
case 0:
return func_726(iParam0);
case 1:
return func_725(iParam0);
case 2:
return func_724(iParam0);
case 3:
return func_723(iParam0);
case 4:
return func_732(iParam0);
default:
}
return 0;
}

int func_723(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 10);
}

int func_724(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 9);
}

int func_725(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 8);
}

int func_726(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 7);
}


bool func_727(int iParam0){
return (iParam0 !=-1 && iParam0 !=6);
}

int func_728(int iParam0){
int iVar0;
if(iParam0==func_65()){
return 0;
}
iVar0=1;
if(func_712(iParam0, 2, 13)){
iVar0=5;
}elseif(func_712(iParam0, 2, 12)){
iVar0=4;
}elseif(func_712(iParam0, 2, 11)){
iVar0=3;
}elseif(func_712(iParam0, 2, 10)){
iVar0=2;
}
return iVar0;
}


void func_729(int iParam0){
STATS::PLAYSTATS_NIGHTCLUB_MISSION_ENDED(&Global_1948107);
func_730();
}


void func_730(){
struct<42> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_14=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Global_1948107={
Var0 
};
}

int func_731(int iParam0){
switch (iParam0){
case 250:
case 299:
case 237:
if(Global_1948107.f_41==0){
return 89;
}else{
return Global_1948107.f_41;
}
break;
case 301:
return 90;
case 300:
return 91;
case 242:
case 244:
case 248:
case 241:
case 239:
case 240:
return 92;
case 238:
return 93;
case 249:
return 94;
}
return 89;
}

int func_732(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_160064.f_14, 12);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 31);
}
return 0;
}

int func_733(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_353.f_1, 0);
}

int func_734(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_160064.f_14, 5);
}
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_353.f_1, 19);
}

int func_735(int iParam0){
if((((((((iParam0==250 || iParam0==238) || iParam0==242) || iParam0==244) || iParam0==248) || iParam0==241) || iParam0==239) || iParam0==240) || iParam0==249){
return 1;
}
if(iParam0==237 && func_487(func_488(PLAYER::PLAYER_ID()))){
return 1;
}
if((iParam0==299 || iParam0==300) || iParam0==301){
return 1;
}
return 0;
}


void func_736(int iParam0){
STATS::PLAYSTATS_FM_HEIST_PREP_ENDED(&Global_1947971);
func_737();
}


void func_737(){
struct<46> Var0;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_14=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Global_1947971={
Var0 
};
Global_1947971.f_16=0;
}


bool func_738(){
return func_427(6159, -1, 0) !=0;
}

int func_739(int iParam0){
if(iParam0 !=func_65()){
return Global_1853910[iParam0 /*862*/].f_267.f_300 !=0;
}
return 0;
}


bool func_740(){
return func_427(6167, -1, 0)==3;
}


bool func_741(){
return func_427(6167, -1, 0)==2;
}


bool func_742(){
return func_427(6167, -1, 0)==1;
}


void func_743(int iParam0){
STATS::PLAYSTATS_SMUGGLER_MISSION_ENDED(&Global_1947917);
func_744();
}


void func_744(){
struct<54> Var0;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_14=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Var0.f_53=-1;
Global_1947917={
Var0 
};
Global_1947917.f_23=0;
Global_1947917.f_24=0;
Global_1947917.f_16=0;
}


void func_745(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
iVar3=-1;
iVar0=0;
while (iVar0 < 10){
iVar2=(iVar0 + func_757(12));
func_756(iVar2, &iVar1, 1);
if(iVar1 >=0){
if(Global_1586468[iVar1 /*142*/].f_66 !=0 && func_747(Global_1586468[iVar1 /*142*/].f_66, 1, iVar1)){
if(Global_2793046.f_979 !=iVar1){
if(func_746(Global_1586468[iVar1 /*142*/].f_66)){
if(Global_1586468[iVar1 /*142*/].f_66 !=0){
iVar3=Global_1586468[iVar1 /*142*/].f_66;
}
switch (iVar0){
case 0:
Global_1947917.f_38=iVar3;
break;
case 1:
Global_1947917.f_39=iVar3;
break;
case 2:
Global_1947917.f_40=iVar3;
break;
case 3:
Global_1947917.f_41=iVar3;
break;
case 4:
Global_1947917.f_42=iVar3;
break;
case 5:
Global_1947917.f_43=iVar3;
break;
case 6:
Global_1947917.f_44=iVar3;
break;
case 7:
Global_1947917.f_45=iVar3;
break;
case 8:
Global_1947917.f_46=iVar3;
break;
case 9:
Global_1947917.f_47=iVar3;
break;
}
}}}}
iVar0++;
}}

int func_746(int iParam0){
switch (iParam0){
case joaat("buzzard"):
case joaat("savage"):
case joaat("valkyrie"):
case joaat("hydra"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("havok"):
case joaat("hunter"):
case joaat("volatus"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("swift"):
case joaat("swift2"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("annihilator"):
case joaat("mogul"):
case joaat("rogue"):
case joaat("starling"):
case joaat("seabreeze"):
case joaat("microlight"):
case joaat("tula"):
case joaat("lazer"):
case joaat("pyro"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("howard"):
case joaat("bombushka"):
case joaat("alphaz1"):
case joaat("nimbus"):
case joaat("luxor2"):
case joaat("velum2"):
case joaat("dodo"):
case joaat("miljet"):
case joaat("besra"):
case joaat("vestra"):
case joaat("duster"):
case joaat("shamal"):
case joaat("cuban800"):
case joaat("luxor"):
case joaat("stunt"):
case joaat("mammatus"):
case joaat("titan"):
case joaat("velum"):
case joaat("akula"):
case joaat("volatol"):
case joaat("strikeforce"):
case joaat("seasparrow"):
case joaat("alkonost"):
case joaat("annihilator2"):
case joaat("conada"):
return 1;
default:
}
return 0;
}

int func_747(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_755()){
return 0;
}}else{
iVar0=0;
while (iVar0 < FILES::GET_NUM_DLC_VEHICLES()){
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1)){
if(iParam0==Var1.f_1){
if(FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
return 0;
}}}
iVar0++;
}}
if(iParam0==joaat("blimp")){
if((((!func_754() && !func_753()) && !func_752()) && !func_751()) && !func_755()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_214() || MISC::IS_PC_VERSION()) || func_750()){
}elseif(!func_752()){
return 0;
}}
if(bParam1){
if(!func_749(iParam0, iParam2)){
return 0;
}}
if(!func_748(iParam0)){
return 0;
}
return 1;
}

int func_748(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_531()){
return 1;
}
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
if(iVar0==4){
return 1;
}
switch (iParam0){
case joaat("dune4"):
StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return 1;
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2)){
return 0;
}
return 1;
}

int func_749(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764244 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764243){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14737 && iVar1 < Global_262145.f_14749){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14733 && iVar1 < Global_262145.f_14745){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14734 && iVar1 < Global_262145.f_14746){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14735 && iVar1 < Global_262145.f_14747){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14736 && iVar1 < Global_262145.f_14748){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14738 && iVar1 < Global_262145.f_14750){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14739 && iVar1 < Global_262145.f_14742){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14740 && iVar1 < Global_262145.f_14743){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14741 && iVar1 < Global_262145.f_14744){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17313 && iVar1 < Global_262145.f_17278){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17308 && iVar1 < Global_262145.f_17273){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17312 && iVar1 < Global_262145.f_17277){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17311 && iVar1 < Global_262145.f_17276){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17305 && iVar1 < Global_262145.f_17270){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17306 && iVar1 < Global_262145.f_17271){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17309 && iVar1 < Global_262145.f_17274){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17310 && iVar1 < Global_262145.f_17275){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17307 && iVar1 < Global_262145.f_17272){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17315 && iVar1 < Global_262145.f_17280){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17316 && iVar1 < Global_262145.f_17281){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17304 && iVar1 < Global_262145.f_17269){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17303 && iVar1 < Global_262145.f_17268){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17302 && iVar1 < Global_262145.f_17267){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17314 && iVar1 < Global_262145.f_17279){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17317 && iVar1 < Global_262145.f_17282){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17318 && iVar1 < Global_262145.f_17283){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17319 && iVar1 < Global_262145.f_17284){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17320 && iVar1 < Global_262145.f_17285){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17474 && iVar1 < Global_262145.f_17496){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17475 && iVar1 < Global_262145.f_17497){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17476 && iVar1 < Global_262145.f_17498){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17477 && iVar1 < Global_262145.f_17499){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17478 && iVar1 < Global_262145.f_17500){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17479 && iVar1 < Global_262145.f_17501){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17481 && iVar1 < Global_262145.f_17502){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17503){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17504){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17505){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17506){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17507){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17508){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17515){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17511){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17512){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17513){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17480 && iVar1 < Global_262145.f_17514){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17516){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17509){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17510){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17517){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19131 && iVar1 < Global_262145.f_19228){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19132 && iVar1 < Global_262145.f_19229){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19133 && iVar1 < Global_262145.f_19230){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19134 && iVar1 < Global_262145.f_19231){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19135 && iVar1 < Global_262145.f_19232){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19136 && iVar1 < Global_262145.f_19233){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19137 && iVar1 < Global_262145.f_19234){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19138 && iVar1 < Global_262145.f_19235){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19139 && iVar1 < Global_262145.f_19236){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19140 && iVar1 < Global_262145.f_19237){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19141 && iVar1 < Global_262145.f_19238){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19142 && iVar1 < Global_262145.f_19239){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19143 && iVar1 < Global_262145.f_19240){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19144 && iVar1 < Global_262145.f_19241){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19145 && iVar1 < Global_262145.f_19242){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19146 && iVar1 < Global_262145.f_19243){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19147 && iVar1 < Global_262145.f_19244){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19148 && iVar1 < Global_262145.f_19245){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19149 && iVar1 < Global_262145.f_19246){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19150 && iVar1 < Global_262145.f_19247){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19151 && iVar1 < Global_262145.f_19248){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19152 && iVar1 < Global_262145.f_19249){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19153 && iVar1 < Global_262145.f_19250){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19154 && iVar1 < Global_262145.f_19251){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19155 && iVar1 < Global_262145.f_19252){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20212 && iVar1 < Global_262145.f_20208){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20213 && iVar1 < Global_262145.f_20209){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20214 && iVar1 < Global_262145.f_20210){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20215 && iVar1 < Global_262145.f_20211){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21094 && iVar1 < Global_262145.f_21102){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21095 && iVar1 < Global_262145.f_21103){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21096 && iVar1 < Global_262145.f_21104){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21097 && iVar1 < Global_262145.f_21105){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21098 && iVar1 < Global_262145.f_21106){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21099 && iVar1 < Global_262145.f_21107){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_21893 && iVar1 < Global_262145.f_21913){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_21905 && iVar1 < Global_262145.f_21925){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_21896 && iVar1 < Global_262145.f_21916){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_21906 && iVar1 < Global_262145.f_21926){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_21894 && iVar1 < Global_262145.f_21914){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_21910 && iVar1 < Global_262145.f_21930){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_21908 && iVar1 < Global_262145.f_21928){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_21909 && iVar1 < Global_262145.f_21929){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_21904 && iVar1 < Global_262145.f_21924){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_21911 && iVar1 < Global_262145.f_21931){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_21907 && iVar1 < Global_262145.f_21927){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_21903 && iVar1 < Global_262145.f_21923){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_21895 && iVar1 < Global_262145.f_21915){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_21897 && iVar1 < Global_262145.f_21917){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_21898 && iVar1 < Global_262145.f_21918){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_21899 && iVar1 < Global_262145.f_21919){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_21900 && iVar1 < Global_262145.f_21920){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_21901 && iVar1 < Global_262145.f_21921){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_21902 && iVar1 < Global_262145.f_21922){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_22861 && iVar1 < Global_262145.f_22889){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_22862 && iVar1 < Global_262145.f_22890){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_22863 && iVar1 < Global_262145.f_22891){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_22864 && iVar1 < Global_262145.f_22892){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_22865 && iVar1 < Global_262145.f_22893){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_22866 && iVar1 < Global_262145.f_22894){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_22867 && iVar1 < Global_262145.f_22895){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_22868 && iVar1 < Global_262145.f_22896){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_22869 && iVar1 < Global_262145.f_22897){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_22870 && iVar1 < Global_262145.f_22898){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_22871 && iVar1 < Global_262145.f_22899){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_22872 && iVar1 < Global_262145.f_22900){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_22873 && iVar1 < Global_262145.f_22901){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_22874 && iVar1 < Global_262145.f_22902){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_22875 && iVar1 < Global_262145.f_22903){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_22876 && iVar1 < Global_262145.f_22904){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_22877 && iVar1 < Global_262145.f_22905){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_22878 && iVar1 < Global_262145.f_22906){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_22879 && iVar1 < Global_262145.f_22907){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_22880 && iVar1 < Global_262145.f_22908){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_22881 && iVar1 < Global_262145.f_22909){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_22882 && iVar1 < Global_262145.f_22910){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_22883 && iVar1 < Global_262145.f_22911){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_22884 && iVar1 < Global_262145.f_22912){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_22885 && iVar1 < Global_262145.f_22913){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_22886 && iVar1 < Global_262145.f_22914){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_22887 && iVar1 < Global_262145.f_22915){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_22888 && iVar1 < Global_262145.f_22916){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24081 && iVar1 < Global_262145.f_24097){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24082 && iVar1 < Global_262145.f_24098){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24086 && iVar1 < Global_262145.f_24102){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24089 && iVar1 < Global_262145.f_24105){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24094 && iVar1 < Global_262145.f_24110){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24088 && iVar1 < Global_262145.f_24104){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24080 && iVar1 < Global_262145.f_24096){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24087 && iVar1 < Global_262145.f_24103){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24093 && iVar1 < Global_262145.f_24109){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24092 && iVar1 < Global_262145.f_24108){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24083 && iVar1 < Global_262145.f_24099){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24085 && iVar1 < Global_262145.f_24101){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24095 && iVar1 < Global_262145.f_24111){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24091 && iVar1 < Global_262145.f_24107){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24084 && iVar1 < Global_262145.f_24100){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24090 && iVar1 < Global_262145.f_24106){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24171 && iVar1 < Global_262145.f_24158){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24172 && iVar1 < Global_262145.f_24159){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24177 && iVar1 < Global_262145.f_24164){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24176 && iVar1 < Global_262145.f_24163){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24174 && iVar1 < Global_262145.f_24161){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24180 && iVar1 < Global_262145.f_24167){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24182 && iVar1 < Global_262145.f_24169){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24183 && iVar1 < Global_262145.f_24170){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24181 && iVar1 < Global_262145.f_24168){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24173 && iVar1 < Global_262145.f_24160){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24175 && iVar1 < Global_262145.f_24162){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24179 && iVar1 < Global_262145.f_24166){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24178 && iVar1 < Global_262145.f_24165){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26768 && iVar1 < Global_262145.f_26770){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25781 && iVar1 < Global_262145.f_25774){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25782 && iVar1 < Global_262145.f_25775){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25783 && iVar1 < Global_262145.f_25776){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25784 && iVar1 < Global_262145.f_25777){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26769 && iVar1 < Global_262145.f_26771){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25785 && iVar1 < Global_262145.f_25778){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && iVar1 < Global_262145.f_25779){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && iVar1 < Global_262145.f_25780){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25792 && iVar1 < Global_262145.f_25813){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25793 && iVar1 < Global_262145.f_25814){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25794 && iVar1 < Global_262145.f_25815){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25795 && iVar1 < Global_262145.f_25816){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && iVar1 < Global_262145.f_25817){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && iVar1 < Global_262145.f_25818){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25798 && iVar1 < Global_262145.f_25819){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25799 && iVar1 < Global_262145.f_25820){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25800 && iVar1 < Global_262145.f_25821){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25801 && iVar1 < Global_262145.f_25822){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && iVar1 < Global_262145.f_25823){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && iVar1 < Global_262145.f_25824){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && iVar1 < Global_262145.f_25825){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && iVar1 < Global_262145.f_25826){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && iVar1 < Global_262145.f_25827){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25807 && iVar1 < Global_262145.f_25828){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25808 && iVar1 < Global_262145.f_25829){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25809 && iVar1 < Global_262145.f_25830){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25810 && iVar1 < Global_262145.f_25831){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25811 && iVar1 < Global_262145.f_25832){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_25812 && iVar1 < Global_262145.f_25833){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28613 && iVar1 < Global_262145.f_28634){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && iVar1 < Global_262145.f_28635){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28615 && iVar1 < Global_262145.f_28636){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && iVar1 < Global_262145.f_28637){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && iVar1 < Global_262145.f_28638){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && iVar1 < Global_262145.f_28639){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && iVar1 < Global_262145.f_28640){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && iVar1 < Global_262145.f_28641){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && iVar1 < Global_262145.f_28642){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28622 && iVar1 < Global_262145.f_28643){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28623 && iVar1 < Global_262145.f_28644){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28624 && iVar1 < Global_262145.f_28645){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && iVar1 < Global_262145.f_28646){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && iVar1 < Global_262145.f_28647){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && iVar1 < Global_262145.f_28648){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && iVar1 < Global_262145.f_28649){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28629 && iVar1 < Global_262145.f_28650){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28630 && iVar1 < Global_262145.f_28651){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28631 && iVar1 < Global_262145.f_28652){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28632 && iVar1 < Global_262145.f_28653){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && iVar1 < Global_262145.f_28654){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && iVar1 < Global_262145.f_28667){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28665 && iVar1 < Global_262145.f_28668){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28666 && iVar1 < Global_262145.f_28669){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && iVar1 < Global_262145.f_29347){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29333 && iVar1 < Global_262145.f_29354){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && iVar1 < Global_262145.f_29340){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && iVar1 < Global_262145.f_29348){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && iVar1 < Global_262145.f_29349){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && iVar1 < Global_262145.f_29346){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && iVar1 < Global_262145.f_29355){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && iVar1 < Global_262145.f_29345){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && iVar1 < Global_262145.f_29343){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29676 && iVar1 < Global_262145.f_29350){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && iVar1 < Global_262145.f_29351){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && iVar1 < Global_262145.f_29352){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && iVar1 < Global_262145.f_29353){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29331 && iVar1 < Global_262145.f_29342){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29332 && iVar1 < Global_262145.f_29344){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30141 && iVar1 < Global_262145.f_30124){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && iVar1 < Global_262145.f_30125){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && iVar1 < Global_262145.f_30126){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && iVar1 < Global_262145.f_30127){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30145 && iVar1 < Global_262145.f_30128){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30146 && iVar1 < Global_262145.f_30129){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30147 && iVar1 < Global_262145.f_30130){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30148 && iVar1 < Global_262145.f_30131){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && iVar1 < Global_262145.f_30132){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && iVar1 < Global_262145.f_30133){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && iVar1 < Global_262145.f_30134){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && iVar1 < Global_262145.f_30135){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30153 && iVar1 < Global_262145.f_30136){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && iVar1 < Global_262145.f_30137){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && iVar1 < Global_262145.f_30138){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && iVar1 < Global_262145.f_30139){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30157 && iVar1 < Global_262145.f_30140){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && iVar1 < Global_262145.f_30992){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31010 && iVar1 < Global_262145.f_30993){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && iVar1 < Global_262145.f_30994){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && iVar1 < Global_262145.f_30995){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31013 && iVar1 < Global_262145.f_30996){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31014 && iVar1 < Global_262145.f_30997){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && iVar1 < Global_262145.f_30998){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31016 && iVar1 < Global_262145.f_30999){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31017 && iVar1 < Global_262145.f_31000){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31018 && iVar1 < Global_262145.f_31001){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && iVar1 < Global_262145.f_31002){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31020 && iVar1 < Global_262145.f_31003){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31021 && iVar1 < Global_262145.f_31004){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && iVar1 < Global_262145.f_31005){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31023 && iVar1 < Global_262145.f_31006){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31024 && iVar1 < Global_262145.f_31007){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31025 && iVar1 < Global_262145.f_31008){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_31889 && iVar1 < Global_262145.f_31874){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && iVar1 < Global_262145.f_31875){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_31891 && iVar1 < Global_262145.f_31876){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && iVar1 < Global_262145.f_31877){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_31893 && iVar1 < Global_262145.f_31878){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && iVar1 < Global_262145.f_31879){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_31895 && iVar1 < Global_262145.f_31880){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_31896 && iVar1 < Global_262145.f_31881){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_31897 && iVar1 < Global_262145.f_31882){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_31898 && iVar1 < Global_262145.f_31883){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && iVar1 < Global_262145.f_31884){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_31900 && iVar1 < Global_262145.f_31885){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && iVar1 < Global_262145.f_31886){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && iVar1 < Global_262145.f_31887){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && iVar1 < Global_262145.f_31888){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33131 && iVar1 < Global_262145.f_33112){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33125 && iVar1 < Global_262145.f_33106){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33129 && iVar1 < Global_262145.f_33110){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33123 && iVar1 < Global_262145.f_33104){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33134 && iVar1 < Global_262145.f_33115){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33126 && iVar1 < Global_262145.f_33107){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33135 && iVar1 < Global_262145.f_33116){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33137 && iVar1 < Global_262145.f_33118){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33128 && iVar1 < Global_262145.f_33109){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33136 && iVar1 < Global_262145.f_33117){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33139 && iVar1 < Global_262145.f_33120){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33124 && iVar1 < Global_262145.f_33105){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33132 && iVar1 < Global_262145.f_33113){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33138 && iVar1 < Global_262145.f_33119){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33130 && iVar1 < Global_262145.f_33111){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33140 && iVar1 < Global_262145.f_33121){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33127 && iVar1 < Global_262145.f_33108){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33122 && iVar1 < Global_262145.f_33103){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_33957 && iVar1 < Global_262145.f_33941){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}
return iVar0;
}


bool func_750(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

int func_751(){
return 0;
}

int func_752(){
return 1;
}

int func_753(){
return 1;
}

int func_754(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_755(){
var uVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
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
MISC::SET_BIT(&iVar0, false);
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


void func_756(int iParam0, int iParam1, bool bParam2){
if(Global_262145.f_10630){
*iParam1=iParam0;
}
if(iParam0 >=0){
*iParam1=(Global_1944416[iParam0] - 1);
if(bParam2){
if((MISC::GET_FRAME_COUNT() % 5)==0){
}}}else{
*iParam1=-1;
}}

int func_757(int iParam0){
int iVar0;
switch (iParam0){
case 8:
return 88;
break;
case 9:
return 108;
break;
case 10:
return 128;
break;
case 11:
return 148;
break;
case 6:
return 65;
break;
case 7:
return 75;
break;
case 5:
return -1;
break;
case 12:
return 159;
break;
case 13:
return 179;
break;
case 14:
return 191;
break;
case 15:
return 192;
break;
case 16:
return 202;
break;
case 17:
return 212;
break;
case 18:
return 227;
break;
case 19:
return 237;
break;
case 20:
return 247;
break;
case 21:
return 258;
break;
case 22:
return 268;
break;
case 23:
return 281;
break;
case 24:
return 294;
break;
case 25:
return 307;
break;
case 26:
return 317;
break;
case 27:
return 337;
break;
case 28:
return 350;
break;
case 29:
return 363;
break;
}
if(iParam0 >=1000){
iVar0=func_698(iParam0);
return func_765(iVar0);
}
return (func_758(iParam0, -1, 1) * iParam0);
}

int func_758(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(iParam1 >=1){
if(func_761(iParam1, 0, 0)){
return 20;
}elseif(func_760(iParam1)){
return 0;
}elseif(func_759(iParam1, -1)){
return 10;
}elseif(iParam1==115){
return 8;
}elseif(iParam1==116){
return 20;
}elseif(iParam1==117){
return 7;
}elseif(iParam1==118){
return 1;
}elseif((iParam1==119 || iParam1==120) || iParam1==121){
return 10;
}elseif(iParam1==122){
return 9;
}elseif(iParam1==123 || iParam1==124){
return 10;
}elseif(iParam1==125){
return 10;
}elseif(iParam1==126){
return 10;
}elseif(iParam1==127){
return 10;
}elseif(iParam1==128){
return 20;
}elseif(iParam1==129){
return 50;
}elseif(iParam1 <=130 && iParam1 > 0){
if(Global_1312228[iParam1 /*1951*/].f_33==2){
if(bParam2){
return 3;
}else{
return 2;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==6){
if(bParam2){
return 8;
}else{
return 6;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==10){
if(bParam2){
return 13;
}else{
return 10;
}}}}}
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 7:
case 23:
case 24:
case 27:
case 28:
return 13;
break;
case 5:
return 0;
break;
case 6:
return 10;
break;
case 8:
case 9:
case 10:
return 20;
break;
case 11:
return 8;
break;
case 12:
return 20;
break;
case 13:
return 7;
break;
case 14:
return 1;
break;
case 15:
case 16:
case 17:
return 10;
break;
case 18:
case 19:
case 20:
return 10;
break;
case 21:
return 10;
break;
case 22:
return 10;
break;
case 25:
return 10;
break;
case 26:
return 20;
break;
case 29:
return 50;
break;
}
return 0;
}

int func_759(int iParam0, int iParam1){
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

int func_760(int iParam0){
switch (iParam0){
case 87:
case 88:
case 89:
case 90:
return 1;
break;
}
return 0;
}

int func_761(int iParam0, bool bParam1, bool bParam2){
if(bParam2){
return func_762(PLAYER::PLAYER_ID(), 0);
}
if(bParam1){
if(func_762(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}
return 0;
}

int func_762(int iParam0, bool bParam1){
if(Global_1853746 !=func_65()){
if(!func_764(Global_1853746)){
return 0;
}
if(bParam1){
if(PLAYER::PLAYER_ID() !=Global_1853746){
if(MISC::IS_BIT_SET(Global_2657589[Global_1853746 /*466*/].f_199, 24) || func_763(Global_1853746)){
return 1;
}}}}
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 24);
}

int func_763(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 9);
}
return 0;
}

int func_764(int iParam0){
if(iParam0 !=func_65()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 2);
}
return 0;
}

int func_765(int iParam0){
switch (iParam0){
case 0:
return 156;
case 2:
return 223;
case 1:
return 224;
case 3:
return 278;
default:
}
return -1;
}


var func__766(){
var uVar0;
uVar0=func_767();
if(!func_515()){
if(func_534() !=func_65()){
uVar0=func_826(func_534()) + 1;
}}
return uVar0;
}

int func_767(){
return func_826(PLAYER::PLAYER_ID()) + 1;
}

int func_768(){
return func_427(6116, -1, 0);
}

int func_769(int iParam0){
if(func_191(iParam0, 1)){
return Global_1894573[iParam0 /*608*/].f_10.f_429;
}
return -1;
}


void func_770(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Global_1947870);
func_771();
}


void func_771(){
struct<47> Var0;
Global_1947870={
Var0 
};
Global_1947870.f_23=0;
Global_1947870.f_24=0;
Global_1947870.f_16=0;
}


bool func_772(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 12);
}


bool func_773(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 13);
}

int func_774(int iParam0){
if(iParam0 !=func_65()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 12) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 13)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 14)){
return 1;
}}
return 0;
}

int func_775(int iParam0){
if(iParam0 !=func_65()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}

int func_776(int iParam0){
if(iParam0 !=func_65()){
if(((((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 5)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}

int func_777(int iParam0, int iParam1){
if(iParam1==func_65()){
return 0;
}
switch (iParam0){
case 0:
if(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 0)){
return 3;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 3)){
return 2;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 6)){
return 4;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 9)){
return 1;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 12)){
return 7;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 15)){
return 5;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 18)){
return 6;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 21)){
return 0;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 24)){
return 8;
}
break;
case 1:
if(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 1)){
return 3;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 4)){
return 2;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 7)){
return 4;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 10)){
return 1;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 13)){
return 7;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 16)){
return 5;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 19)){
return 6;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 22)){
return 0;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 25)){
return 8;
}
break;
case 2:
if(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 2)){
return 3;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 5)){
return 2;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 8)){
return 4;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 11)){
return 1;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 14)){
return 7;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 17)){
return 5;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 20)){
return 6;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 23)){
return 0;
}elseif(MISC::IS_BIT_SET(Global_1853910[iParam1 /*862*/].f_267.f_288, 26)){
return 8;
}
break;
}
return 0;
}

int func_778(int iParam0){
if(iParam0 !=func_65()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 6) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 7)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 8)){
return 1;
}}
return 0;
}


bool func_779(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 8);
}


bool func_780(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 7);
}

int func_781(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 9);
}

int func_782(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 11);
}

int func_783(int iParam0){
if(iParam0==func_65()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 10);
}


var func__784(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_785(int iParam0, int iParam1){
return func_427(func_786(iParam1), iParam0, 0);
}

int func_786(int iParam0){
switch (iParam0){
case 0:
return 3901;
case 1:
return 3930;
case 2:
return 3934;
case 3:
return 3938;
case 4:
return 3942;
case 5:
return 5453;
case 6:
return 11809;
default:
}
return 3901;
}


void func_787(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_IMPEXP_MISSION_ENDED(&Global_1947807);
func_788();
}


void func_788(){
struct<63> Var0;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Var0.f_53=-1;
Var0.f_54=-1;
Var0.f_55=-1;
Var0.f_56=-1;
Var0.f_57=-1;
Var0.f_58=-1;
Var0.f_59=-1;
Var0.f_60=-1;
Var0.f_61=-1;
Var0.f_62=-1;
Global_1947807={
Var0 
};
Global_1947807.f_24=0;
Global_1947807.f_25=0;
Global_1947807.f_17=0;
}


void func_789(int iParam0){
if(iParam0==0){}
STATS::PLAYSTATS_MISSION_ENDED(&Global_1947751);
func_790();
}


void func_790(){
struct<56> Var0;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Var0.f_53=-1;
Global_1947751={
Var0 
};
Global_1947751.f_29=0;
Global_1947751.f_30=0;
Global_1947751.f_17=0;
}

int func_791(int iParam0, int iParam1){
bool bVar0;
bool bVar1;
bool bVar2;
bVar0=func_622(iParam0, iParam1, 2);
bVar1=func_622(iParam0, iParam1, 1);
bVar2=func_622(iParam0, iParam1, 0);
if((bVar0 && bVar1) && bVar2){
return 7;
}elseif((bVar1 && bVar0) && !bVar2){
return 6;
}elseif((bVar2 && bVar0) && !bVar1){
return 5;
}elseif((bVar2 && bVar1) && !bVar0){
return 4;
}elseif(bVar0){
return 3;
}elseif(bVar1){
return 2;
}elseif(bVar2){
return 1;
}
return 0;
}

int func_792(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_65()){
return 0;
}
if(func_614(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_2;
}
iVar0++;
}}
return 0;
}


var func__793(bool bParam0){
var uVar0;
int iVar1;
iVar1=PLAYER::PLAYER_ID();
if(bParam0){
if(func_815(4, 0)){
MISC::SET_BIT(&uVar0, false);
}
if(func_815(5, 0)){
MISC::SET_BIT(&uVar0, true);
}
if(func_815(6, 1)){
MISC::SET_BIT(&uVar0, 2);
}
if(func_815(1, 0)){
MISC::SET_BIT(&uVar0, 3);
}
if(func_815(2, 0)){
MISC::SET_BIT(&uVar0, 4);
}
if(func_815(3, 0)){
MISC::SET_BIT(&uVar0, 5);
}
if((((func_814(61) || func_814(62)) || func_814(63)) || func_814(64)) || func_814(65)){
MISC::SET_BIT(&uVar0, 6);
}
if(func_813()){
MISC::SET_BIT(&uVar0, 7);
}
if(func_811(iVar1, 0)){
MISC::SET_BIT(&uVar0, 8);
}
if(func_811(iVar1, 1)){
MISC::SET_BIT(&uVar0, 9);
}
if(func_811(iVar1, 2)){
MISC::SET_BIT(&uVar0, 10);
}
if(func_810()){
MISC::SET_BIT(&uVar0, 11);
}
if(func_808(3)){
MISC::SET_BIT(&uVar0, 12);
}
if(func_808(1)){
MISC::SET_BIT(&uVar0, 13);
}
if(func_808(4)){
MISC::SET_BIT(&uVar0, 14);
}
if(func_808(2)){
MISC::SET_BIT(&uVar0, 15);
}
if(func_808(0)){
MISC::SET_BIT(&uVar0, 16);
}
if(func_807(-1)){
MISC::SET_BIT(&uVar0, 17);
}
if(func_808(5)){
MISC::SET_BIT(&uVar0, 18);
}
if(func_806()){
MISC::SET_BIT(&uVar0, 19);
}
if(func_805()){
MISC::SET_BIT(&uVar0, 20);
}
if(func_804()){
MISC::SET_BIT(&uVar0, 21);
}
if(func_803()){
MISC::SET_BIT(&uVar0, 22);
}
if(func_802(-1)){
MISC::SET_BIT(&uVar0, 23);
}
if(func_801()){
MISC::SET_BIT(&uVar0, 24);
}
if(func_800()){
MISC::SET_BIT(&uVar0, 25);
}
if(func_799()){
MISC::SET_BIT(&uVar0, 26);
}
if(func_738()){
MISC::SET_BIT(&uVar0, 27);
}
if(func_697(-1)){
MISC::SET_BIT(&uVar0, 28);
}
if(func_696(-1)){
MISC::SET_BIT(&uVar0, 29);
}
if(func_798(-1)){
MISC::SET_BIT(&uVar0, 30);
}
if(func_797(-1)){
MISC::SET_BIT(&uVar0, 31);
}}else{
if(func_796(-1)){
MISC::SET_BIT(&uVar0, false);
}
if(func_794(-1)){
MISC::SET_BIT(&uVar0, true);
}}
return uVar0;
}


bool func_794(int iParam0){
return func_427(11432, iParam0, 0)==func_795();
}

int func_795(){
return joaat("brickade2");
}


bool func_796(int iParam0){
if(iParam0==-1){
iParam0=func_150(iParam0);
}
return func_427(10874, iParam0, 0) !=0;
}


bool func_797(int iParam0){
if(iParam0==-1){
iParam0=func_150(iParam0);
}
return func_427(9903, iParam0, 0) !=0;
}


bool func_798(int iParam0){
if(iParam0==-1){
iParam0=func_150(iParam0);
}
return func_427(9613, iParam0, 0) !=0;
}


bool func_799(){
return func_427(5396, -1, 0) !=0;
}


bool func_800(){
return func_427(3171, -1, 0) !=0;
}


bool func_801(){
return func_427(8717, -1, 0) !=0;
}


bool func_802(int iParam0){
if(iParam0==-1){
iParam0=func_150(iParam0);
}
return func_427(8252, iParam0, 0) !=0;
}


bool func_803(){
return func_427(6551, -1, 0) !=0;
}


bool func_804(){
return Global_2851325[17 /*3*/][func_150(-1)]==122;
}


bool func_805(){
return func_427(6160, -1, 0) !=0;
}


bool func_806(){
return func_427(6103, -1, 0) !=0;
}


bool func_807(int iParam0){
if(iParam0==-1){
iParam0=func_150(iParam0);
}
return func_427(5303, iParam0, 0) !=0;
}

int func_808(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=6){
iVar1=func_427(func_809(iVar0), -1, 0);
if(iVar1 !=0){
if(func_516(iVar1)==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_809(int iParam0){
switch (iParam0){
case 0:
return 3840;
case 1:
return 3841;
case 2:
return 3842;
case 3:
return 3843;
case 4:
return 3844;
case 5:
return 5443;
case 6:
return 11432;
default:
}
return 3840;
}


bool func_810(){
return func_695(6, -1) > 0;
}

int func_811(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_65()){
return 0;
}
iVar0=0;
while (iVar0 < 5){
if(Global_1853910[iParam0 /*862*/].f_267.f_116[iVar0 /*3*/] !=0){
if(func_812(Global_1853910[iParam0 /*862*/].f_267.f_116[iVar0 /*3*/])==iParam1){
return 1;
}}
iVar0++;
}
return 0;
}

int func_812(int iParam0){
if(func_639(iParam0)){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 5:
case 9:
return 0;
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 21:
case 7:
return 1;
case 16:
case 17:
case 18:
case 19:
case 20:
case 22:
case 6:
case 8:
return 2;
}
default:
}
return 3;
}


bool func_813(){
return func_695(5, -1) > 0;
}

int func_814(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_815(int iParam0, bool bParam1){
int iVar0;
if(iParam0 < 1 || iParam0 > 10){
return 0;
}
iVar0=0;
while (iVar0 < 130){
if(func_817(iVar0)==iParam0 && (!func_816(iVar0) || !bParam1)){
if(func_814(iVar0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_816(int iParam0){
switch (iParam0){
case 61:
case 62:
case 63:
case 64:
case 65:
return 1;
default:
}
return 0;
}

int func_817(int iParam0){
switch (iParam0){
case 86:
return 8;
break;
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 10;
break;
case 87:
case 88:
case 89:
case 90:
return 9;
break;
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
return 7;
break;
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 61:
case 62:
case 63:
case 64:
case 65:
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
case 84:
case 85:
return 6;
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
return 5;
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
return 4;
break;
case 24:
case 26:
case 27:
case 54:
case 56:
case 57:
return 3;
break;
case 25:
case 28:
case 32:
case 33:
case 50:
case 52:
case 53:
case 55:
return 2;
break;
case 29:
case 30:
case 31:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 51:
case 58:
case 59:
case 60:
return 1;
break;
}
return 0;
}

int func_818(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(func_139(iParam0)){
if(!bParam1 && bParam2){
iVar0=Global_262145.f_18168;
}elseif(!bParam2){
iVar0=Global_262145.f_18167;
}else{
iVar0=Global_262145.f_18149;
}
iVar1=19;
}elseif(func_821(iParam0)){
iVar0=6;
iVar1=24;
}elseif(func_223(iParam0, 0)){
if(bParam1){
iVar0=Global_262145.f_18148;
iVar1=20;
}}elseif(func_326(iParam0)){
if(!bParam1 && bParam2){
iVar0=Global_262145.f_18168;
}elseif(!bParam2){
iVar0=Global_262145.f_18167;
}else{
iVar0=Global_262145.f_18149;
}
iVar1=18;
}
if(iVar0 !=0){
STATS::PLAYSTATS_EARNED_MC_POINTS(func_702(func_534()), func_701(func_534()), func_838(), func_837(), iVar1, iVar0);
}
func_820(iVar0);
func_819(iVar0);
return iVar0;
}


void func_819(int iParam0){
int iVar0;
iVar0=func_427(3971, -1, 0);
iVar0=(iVar0 + iParam0);
if(iVar0 < 0){
iVar0=0;
}
if(iVar0 > 9999){
iVar0=9999;
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_468=iVar0;
func_498(3971, iVar0, -1, 1, 0);
}


void func_820(int iParam0){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
Global_1894573[iVar0 /*608*/].f_10.f_467=(Global_1894573[iVar0 /*608*/].f_10.f_467 + iParam0);
if(Global_1894573[iVar0 /*608*/].f_10.f_467 < -9999){
Global_1894573[iVar0 /*608*/].f_10.f_467=9999;
}elseif(Global_1894573[iVar0 /*608*/].f_10.f_467 > 9999){
Global_1894573[iVar0 /*608*/].f_10.f_467=9999;
}}

int func_821(int iParam0){
switch (iParam0){
case 190:
case 191:
case 192:
return 1;
default:
}
return 0;
}

int func_822(bool bParam0){
if(bParam0){
return 0;
}
if(func_125(PLAYER::PLAYER_ID()) || func_151(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}


void func_823(int iParam0){
STATS::PLAYSTATS_BUSINESS_BATTLE_ENDED(&Global_1948017);
func_824();
}


void func_824(){
struct<36> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_14=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Global_1948017={
Var0 
};
}

int func_825(int iParam0){
if(iParam0 !=func_65()){
return Global_1853910[iParam0 /*862*/].f_267.f_353 !=0;
}
return 0;
}

int func_826(int iParam0){
if(func_66(iParam0)==func_65()){
return 0;
}
return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_827(){
int iVar0;
if(func_500()){
return 4;
}elseif(func_515()){
if(func_509(PLAYER::PLAYER_ID()) || func_813()){
return 8;
}
return 6;
}
if(func_257(1)){
iVar0=func_769(PLAYER::PLAYER_ID());
if(iVar0==-1){
iVar0=5;
}
return iVar0;
}elseif(func_532(1)){
if(func_509(func_534())){
return 9;
}
return 7;
}
return 100;
}

int func_828(bool bParam0){
if(bParam0){
return 1;
}
return 0;
}

int func_829(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=-1;
if(bParam0){
iVar0=func_183(PLAYER::PLAYER_ID());
}else{
iVar0=func_105(PLAYER::PLAYER_ID());
}
if(iVar0 !=-1){}
switch (iVar0){
case 236:
iVar2=func_836(PLAYER::PLAYER_ID());
iVar1=iVar2;
break;
case 150:
iVar2=func_834(PLAYER::PLAYER_ID());
iVar1=iVar2;
break;
case 237:
iVar2=func_833(PLAYER::PLAYER_ID());
if(func_487(func_488(PLAYER::PLAYER_ID()))){
iVar1=100;
}else{
iVar1=200;
}
iVar1=(iVar1 + iVar2);
break;
case 250:
iVar2=func_833(PLAYER::PLAYER_ID());
iVar1=300;
iVar1=(iVar1 + iVar2);
break;
case 238:
iVar2=func_832(PLAYER::PLAYER_ID());
iVar1=400;
iVar1=(iVar1 + iVar2);
break;
case 249:
iVar2=func_832(PLAYER::PLAYER_ID());
iVar1=500;
iVar1=(iVar1 + iVar2);
break;
case 239:
iVar1=600;
break;
case 240:
iVar1=700;
break;
case 241:
iVar1=800;
break;
case 242:
iVar1=900;
break;
case 244:
iVar1=1100;
break;
case 248:
iVar1=1200;
break;
case 298:
iVar1=1250;
break;
case 299:
if(func_831(PLAYER::PLAYER_ID())==0){
iVar1=1300;
}elseif(func_831(PLAYER::PLAYER_ID())==1){
iVar1=1301;
}
break;
case 300:
if(func_830(PLAYER::PLAYER_ID())==0){
iVar1=1400;
}
break;
case 301:
if(func_669(PLAYER::PLAYER_ID(), 301)==0){
iVar1=1500;
}
if(func_669(PLAYER::PLAYER_ID(), 301)==1){
iVar1=1501;
}
break;
case 302:
iVar1=1700;
break;
case 303:
iVar1=1800;
break;
}
return iVar1;
}

int func_830(int iParam0){
if(func_105(iParam0)==300){
return func_489(iParam0);
}
return -1;
}

int func_831(int iParam0){
if(func_105(iParam0)==299){
return func_489(iParam0);
}
return -1;
}

int func_832(int iParam0){
if(func_105(PLAYER::PLAYER_ID())==238 || func_105(PLAYER::PLAYER_ID())==249){
return Global_1894573[iParam0 /*608*/].f_10.f_477;
}
return -1;
}

int func_833(int iParam0){
if(func_105(PLAYER::PLAYER_ID())==237 || func_105(PLAYER::PLAYER_ID())==250){
return Global_1894573[iParam0 /*608*/].f_10.f_476;
}
return -1;
}

int func_834(int iParam0){
return func_835(iParam0, 150);
}

int func_835(int iParam0, int iParam1){
if(func_183(iParam0)==iParam1){
return Global_1894573[iParam0 /*608*/].f_10.f_474;
}
return -1;
}

int func_836(int iParam0){
return func_835(iParam0, 236);
}

int func_837(){
if(Global_1947733.f_3 !=0){
return Global_1947733.f_3;
}
return -1;
}

int func_838(){
if(Global_1947733.f_2 !=0){
return Global_1947733.f_2;
}
return -1;
}

int func_839(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_65();
iVar1=func_65();
iVar2=func_65();
return func_840(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_840(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14){
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
func_398(uParam0, &Var0, iParam9, sParam2, sParam1);
Var0.f_4=uParam10;
Var0.f_5=uParam11;
Var0.f_17=iParam5;
Var0.f_18=iParam6;
Var0.f_19=iParam7;
StringCopy(&(Var0.f_25), sParam3, 64);
StringCopy(&(Var0.f_57), sParam8, 16);
Var0.f_73=uParam4;
Var0.f_71=uParam4;
Var0.f_6=uParam13;
Var0.f_72=uParam12;
if(iParam14 !=2){
Var0.f_71=iParam14;
}
func_235(&(Var0.f_69), 4);
return func_355(&Var0);
}

int func_841(int iParam0){
int iVar0;
iVar0=func_195(iParam0);
if(iVar0 !=-1){
return func_193(iVar0);
}
return 1;
}


char* func_842(int iParam0){
var uVar0;
int iVar1;
if(iParam0==PLAYER::PLAYER_ID()){
uVar0=func_401(&(Global_1894573[iParam0 /*608*/].f_10.f_105));
return uVar0;
}
if(Global_1894573[iParam0 /*608*/].f_10.f_121 !=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121){
uVar0=func_402(iParam0, 0);
return uVar0;
}
if(((func_109(iParam0, 28) || func_109(PLAYER::PLAYER_ID(), 28)) || func_405(iParam0)) && !func_404(iParam0)){
return func_402(iParam0, 0);
}
iVar1=func_66(iParam0);
if(iVar1 !=func_65()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_214() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return func_402(iVar1, 0);
}}}
if(iVar1 !=func_65()){
uVar0=func_401(&(Global_1894573[iVar1 /*608*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar0)){
return func_402(iVar1, 0);
}else{
return sVar0;
}}
return "";
}


void func_843(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!func_1004() && !func_307()){
return;
}
if(!func_399()){
return;
}
iVar0=PLAYER::PLAYER_ID();
if(func_17(PLAYER::PLAYER_ID(), 0)){
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
}
iVar1=func_142(iVar0);
if(iVar1 < 3){
return;
}
if(func_8(&(Local_93.f_847))){
iVar2=(func_10() - func_857(&(Local_93.f_847), 0, 0));
iVar3=(func_856() - Local_93.f_115);
func_854(iVar2);
if(iVar2 > 30000){
func_844(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
}elseif(iVar2 > 0){
func_844(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
}else{
func_844(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
}}}


void func_844(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4){
char* sVar0;
if(func_852(0)==0){
return;
}
func_851();
func_848(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
sVar0="HUD_COUNTDOWN";
if(!func_574(sParam4)){
sVar0=sParam4;
}
func_845(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}


void func_845(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_847(7, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_846(7, bVar0);
Global_1655472.f_4659[bVar0]=uParam0;
StringCopy(&(Global_1655472.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4659.f_172[bVar0]=iParam2;
Global_1655472.f_4659.f_216[bVar0]=iParam3;
Global_1655472.f_4659.f_183[bVar0]=iParam4;
Global_1655472.f_4659.f_194[bVar0]=iParam5;
Global_1655472.f_4659.f_249[bVar0]=iParam6;
Global_1655472.f_4659.f_260[bVar0]=iParam7;
Global_1655472.f_4659.f_205[bVar0]=uParam8;
Global_1655472.f_4659.f_314[bVar0]=iParam9;
Global_1655472.f_4659.f_325[bVar0]=iParam10;
Global_1655472.f_4659.f_357[bVar0]=iParam11;
Global_1655472.f_4659.f_238[bVar0]=uParam12;
Global_1655472.f_4659.f_271[bVar0]=iParam13;
Global_1655472.f_4659.f_368[bVar0]=iParam14;
Global_1655472.f_4659.f_379[bVar0]=iParam15;
Global_1655472.f_4659.f_390[bVar0]=iParam16;
Global_1655472.f_4659.f_227[bVar0]=iParam17;
}}


void func_846(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_847(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}


void func_848(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_847(6, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_846(6, bVar0);
Global_1655472.f_4041[bVar0]=iParam0;
StringCopy(&(Global_1655472.f_4041.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4041.f_183[bVar0]=iParam3;
Global_1655472.f_4041.f_172[bVar0]=iParam2;
Global_1655472.f_4041.f_260[bVar0]=iParam4;
Global_1655472.f_4041.f_271[bVar0]=iParam5;
StringCopy(&(Global_1655472.f_4041.f_282[bVar0 /*16*/]), sParam6, 64);
Global_1655472.f_4041.f_443[bVar0]=iParam7;
Global_1655472.f_4041.f_454[bVar0]=iParam8;
Global_1655472.f_4041.f_497[bVar0]=iParam9;
Global_1655472.f_4041.f_508[bVar0]=iParam10;
Global_1655472.f_4041.f_205[bVar0]=iParam11;
Global_1655472.f_4041.f_216[bVar0]=iParam12;
Global_1655472.f_4041.f_227[bVar0]=iParam13;
Global_1655472.f_4041.f_238[bVar0]=iParam14;
Global_1655472.f_4041.f_249[bVar0]=iParam15;
Global_1655472.f_4041.f_519[bVar0]=iParam16;
Global_1655472.f_4041.f_530[bVar0]=iParam17;
Global_1655472.f_4041.f_541[bVar0]=iParam18;
Global_1655472.f_4041.f_552[bVar0]=iParam19;
Global_1655472.f_4041.f_563[bVar0]=iParam20;
Global_1655472.f_4041.f_574[bVar0]=iParam21;
Global_1655472.f_4041.f_585[bVar0]=iParam22;
Global_1655472.f_4041.f_596[bVar0]=iParam23;
Global_1655472.f_4041.f_607[bVar0]=iParam24;
Global_1655472.f_4041.f_194[bVar0]=iParam25;
if(iParam15==5 && func_850()){
Global_1655472.f_1172=1;
}
if(MISC::IS_PC_VERSION()){
iVar2=0;
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
if(iVar3==1280 && iVar4 >=960){
iVar2=1;
}
if(iParam0 > 99999999){
Global_1655472.f_1176=1;
}elseif(iParam0 > 9999999 || iVar2){
Global_1655472.f_1175=1;
}elseif(iParam0 > 999){
Global_1655472.f_1172=1;
}
if(func_849()){
Global_1655472.f_1176=1;
}}}}

int func_849(){
int iVar0;
var uVar1;
if(MISC::IS_PC_VERSION()){
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
if(iVar0 <=1024){
return 1;
}}
return 0;
}

int func_850(){
if(((LOCALIZATION::GET_CURRENT_LANGUAGE()==8 || LOCALIZATION::GET_CURRENT_LANGUAGE()==9) || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) || LOCALIZATION::GET_CURRENT_LANGUAGE()==12){
return 1;
}
return 0;
}


void func_851(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
Global_2696216=1;
}

int func_852(bool bParam0){
if(func_853()){
return 0;
}
if(func_290()){
return 0;
}
if(!bParam0){
if(func_1123(PLAYER::PLAYER_ID(), 1, 1)==0){
return 0;
}}
return 1;
}


bool func_853(){
return MISC::IS_BIT_SET(Global_2621446, 12);
}


void func_854(int iParam0){
if(MISC::IS_BIT_SET(uLocal_96, 8)){
func_855();
return;
}
if(!MISC::IS_BIT_SET(uLocal_96, 15)){
if(iParam0 <=35000){
if(AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP")){
MISC::SET_BIT(&uLocal_96, 15);
MISC::SET_BIT(&uLocal_96, 9);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
}}}
if(MISC::IS_BIT_SET(uLocal_96, 9)){
if(iParam0 <=30000){
if(!MISC::IS_BIT_SET(uLocal_96, 11)){
if(AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL")){
MISC::SET_BIT(&uLocal_96, 11);
}}else{
MISC::IS_BIT_SET(uLocal_96, 11);
if(!MISC::IS_BIT_SET(uLocal_96, 14)){
if(AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S")){
MISC::SET_BIT(&uLocal_96, 14);
}}}
if(MISC::IS_BIT_SET(uLocal_96, 14)){
if(iParam0 <=27000){
if(!MISC::IS_BIT_SET(uLocal_96, 12)){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
MISC::SET_BIT(&uLocal_96, 12);
}
if(iParam0 <=500){
if(AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO")){
AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
MISC::CLEAR_BIT(&uLocal_96, 9);
}}}}}}}


void func_855(){
if(MISC::IS_BIT_SET(uLocal_96, 8)){
if(MISC::IS_BIT_SET(uLocal_96, 9)){
if(!MISC::IS_BIT_SET(uLocal_96, 10)){
if(MISC::IS_BIT_SET(uLocal_96, 11)){
if(!MISC::IS_BIT_SET(uLocal_96, 12)){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
}}
if(!MISC::IS_BIT_SET(uLocal_96, 16)){
if(AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL")){
MISC::SET_BIT(&uLocal_96, 16);
}}
if(MISC::IS_BIT_SET(uLocal_96, 16)){
if(!MISC::IS_BIT_SET(uLocal_96, 13)){
if(AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO")){
MISC::SET_BIT(&uLocal_96, 13);
}}
if(MISC::IS_BIT_SET(uLocal_96, 13)){
MISC::SET_BIT(&uLocal_96, 10);
}}}}}}

int func_856(){
return 4;
}

int func_857(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_858(){
int iVar0;
struct<8> Var1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
iVar2=PLAYER::PLAYER_ID();
iVar3=NETWORK::PARTICIPANT_ID_TO_INT();
if(func_17(PLAYER::PLAYER_ID(), 0)){
iVar3=func_308();
iVar2=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
}
iVar4=func_142(iVar2);
if(!func_17(PLAYER::PLAYER_ID(), 0)){
if(!func_399()){
if(func_875("HUNT_OBJ")){
func_927();
}
if(func_875("HUNT_OBJ1L")){
func_927();
}
if(func_875("HUNT_TOBJ")){
func_927();
}
if(func_875("HUNT_DOBJ")){
func_927();
}
if(func_875("HUNT_DOBJ1L")){
func_927();
}
return;
}}elseif(!MISC::IS_BIT_SET(Local_94[iVar3 /*14*/].f_1, 6)){
func_927();
return;
}
if(iVar4 < 3){
if(func_875("HUNT_OBJ")){
func_927();
}
if(func_875("HUNT_OBJ1L")){
func_927();
}
if(func_875("HUNT_TOBJ")){
func_927();
}
if(func_875("HUNT_DOBJ")){
func_927();
}
if(func_875("HUNT_DOBJ1L")){
func_927();
}
return;
}
bVar5=func_874()==true;
if(iVar3==Local_93.f_118){
if(!bVar5){
if(!func_875("HUNT_OBJ")){
func_871("HUNT_OBJ", 0);
}}elseif(!func_875("HUNT_OBJ1L")){
func_871("HUNT_OBJ1L", 0);
}}elseif(func_1005()==Local_93.f_118){
if(!bVar5){
if(!func_875("HUNT_OBJ")){
func_871("HUNT_OBJ", 0);
}}elseif(!func_875("HUNT_OBJ1L")){
func_871("HUNT_OBJ1L", 0);
}}elseif(func_307()){
if(Local_93.f_119 > -1){
if(!bVar5){
if(!func_875("HUNT_DOBJ")){
StringCopy(&Var1, func_842(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119)), 64);
iVar0=func_841(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
func_859("HUNT_DOBJ", &Var1, iVar0, 0);
}}elseif(!func_875("HUNT_DOBJ1L")){
StringCopy(&Var1, func_842(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119)), 64);
iVar0=func_841(PLAYER::INT_TO_PLAYERINDEX(Local_93.f_119));
func_859("HUNT_DOBJ1L", &Var1, iVar0, 0);
}}}}


void func_859(char* sParam0, char* sParam1, int iParam2, bool bParam3){
if(func_860(sParam0, sParam1, bParam3, iParam2)){
Global_1574757=16;
Global_1574757.f_56=iParam2;
}}

int func_860(char* sParam0, char* sParam1, bool bParam2, var uParam3){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(func_870(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
func_864();
Global_1574757=3;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=uParam3;
Global_1574757.f_56=uParam3;
func_863();
func_862(bParam2);
func_861();
return 1;
}


void func_861(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_862(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_863(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


void func_864(){
func_866();
func_865(0);
}


void func_865(bool bParam0){
bool bVar0;
bVar0=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
Global_1574757=20;
StringCopy(&(Global_1574757.f_1), "", 32);
Global_1574757.f_9=0;
if(bVar0){
Global_1574757.f_10=NETWORK::GET_NETWORK_TIME();
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}
StringCopy(&(Global_1574757.f_12), "", 16);
StringCopy(&(Global_1574757.f_16), "", 64);
StringCopy(&(Global_1574757.f_32), "", 64);
Global_1574757.f_52=0;
Global_1574757.f_53=0;
Global_1574757.f_54=0;
Global_1574757.f_55=-1;
Global_1574757.f_56=0;
Global_1574757.f_59=0;
if(bParam0){
return;
}}


void func_866(){
if(!func_869()){}
if(func_868()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_867();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_867(){
switch (Global_1574757){
case 20:
return;
case 0:
return;
case 1:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
return;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
return;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 6:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 8:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 13:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 14:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 15:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 17:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
return;
case 16:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 19:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 18:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
default:
}}

int func_868(){
if(Global_1574757==20){
return 0;
}
return 1;
}

int func_869(){
if(!func_868()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_867();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


bool func_870(char* sParam0, char* sParam1){
if(!func_868()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam1)){
return 0;
}
if(!MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12))){
return 0;
}
return MISC::GET_HASH_KEY(sParam1)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


void func_871(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_872(sParam0)){
return;
}
func_864();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_863();
func_862(bParam1);
func_861();
}


bool func_872(char* sParam0){
if(!func_868()){
return 0;
}
if(Global_1574757==11){
return func_873(uParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_873(char* sParam0){
if(!func_868()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_874(){
return (4 - Local_93.f_115);
}

int func_875(char* sParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(!func_868()){
return 0;
}
if(Global_1574757==11){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63){
return 0;
}}elseif(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
return func_872(sParam0);
}


void func_876(){
int iVar0;
int iVar1;
int iVar2;
if(!func_1004() && !func_307()){
return;
}
if(!func_399()){
return;
}
iVar1=func_65();
iVar2=-1;
if(!func_17(PLAYER::PLAYER_ID(), 0)){
iVar1=PLAYER::PLAYER_ID();
iVar2=NETWORK::PARTICIPANT_ID_TO_INT();
}else{
iVar2=func_308();
iVar1=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802;
}
if(iVar2==-1){
return;
}
if(!MISC::IS_BIT_SET(uLocal_95, 1)){
iVar0=func_142(iVar1);
if(iVar0 >=2){
if(iVar2==Local_93.f_118 || func_1005()==Local_93.f_118){
if(func_906(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1)){
func_354(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1, 0);
if(iVar2==NETWORK::PARTICIPANT_ID_TO_INT()){
func_905(1);
func_877(-1, 0, 0, -1, 0, 0);
}}}else{
if(iVar2==NETWORK::PARTICIPANT_ID_TO_INT()){
func_877(-1, 0, 0, -1, 0, 0);
}
func_354(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1, 0);
}}
MISC::SET_BIT(&uLocal_95, true);
}}


void func_877(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5){
int iVar0;
int iVar1;
struct<8> Var2;
var uVar3;
int iVar4;
int iVar5;
if(bParam5){
iVar0=func_183(PLAYER::PLAYER_ID());
Global_1948017=iVar0;
Global_1948017.f_1=iParam0;
if(func_534() !=func_65()){
Global_1948017.f_2=func_702(func_534());
Global_1948017.f_3=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1948017.f_2), &(Global_1948017.f_3));
}
Global_1948017.f_7=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948017.f_28=func_825(PLAYER::PLAYER_ID());
Global_1948017.f_13=0;
Global_1948017.f_14=0;
Global_1948017.f_19=func_827();
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948017.f_23=func_828(func_257(1));
}}else{
iVar0=func_105(PLAYER::PLAYER_ID());
}
if(((iParam2 || func_326(iVar0)) || iVar0==293) || iVar0==291){
if(iParam3 !=-1 && iParam2){
iVar0=iParam3;
}
Global_1947751=iVar0;
if((func_139(iVar0) || iVar0==293) || iVar0==291){
Global_1947751.f_1=4;
}elseif(func_821(iVar0)){
Global_1947751.f_1=5;
}elseif(func_223(iVar0, 0)){
Global_1947751.f_1=2;
if(func_495(iVar0)){
Global_1947751.f_1=3;
}}else{
Global_1947751.f_1=1;
}
if(func_534() !=func_65()){
Global_1947751.f_4=func_702(func_534());
Global_1947751.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1947751.f_6), &(Global_1947751.f_7));
}
Global_1947751.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iVar0==148 || iVar0==179){
Global_1947751.f_27=1;
Global_1947751.f_28=1;
}
if(iVar0==293 || iVar0==291){
iVar1=func_904(PLAYER::GET_PLAYER_INDEX());
if(iVar1 !=-1){
Global_1947751.f_26=iVar1;
}}elseif(iParam0 !=-1){
Global_1947751.f_26=iParam0;
}
if(iParam1 !=0){
Global_1947751.f_40=func_516(iParam1);
Global_1947751.f_41=func_901();
Global_1947751.f_42=func_625(PLAYER::PLAYER_ID(), iParam1);
Global_1947751.f_44=func_792(PLAYER::PLAYER_ID(), iParam1);
}
if(!func_515() || iVar0 !=192){
Global_1947751.f_53=0;
}}elseif(((func_493(iVar0) || iVar0==297) || iVar0==296) || iVar0==298){
if((((iVar0==225 || iVar0==226) || iVar0==297) || iVar0==296) || iVar0==298){
Global_1947870=iParam0 + 1;
}elseif(iVar0==227){
Global_1947870=iParam0 + 1;
}else{
Global_1947870=func_900(PLAYER::PLAYER_ID());
}
Global_1947870.f_46=iVar0;
if(func_534() !=-1){
Global_1947870.f_17=func_784(func_534());
}else{
Global_1947870.f_17=func_784(PLAYER::PLAYER_ID());
}
switch (iVar0){
case 225:
if(func_489(PLAYER::PLAYER_ID())==0){
Global_1947870.f_1=0;
}else{
Global_1947870.f_1=1;
}
break;
case 226:
Global_1947870.f_1=2;
break;
case 227:
Global_1947870.f_1=3;
break;
case 297:
Global_1947870.f_1=4;
break;
case 296:
Global_1947870.f_1=5;
break;
case 298:
Global_1947870.f_1=6;
break;
}
Global_1947870.f_21=1;
Global_1947870.f_22=1;
Global_1947870.f_44=func_793(1);
Global_1947870.f_45=func_793(0);
if(func_534() !=func_65()){
Global_1947870.f_4=func_702(func_534());
Global_1947870.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1947870.f_4), &(Global_1947870.f_5));
}
Global_1947870.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0 !=-1){
Global_1947870.f_20=iParam0;
}}elseif(func_331(iVar0)){
if(iParam3 !=-1 && iParam2){
}
Global_1947807=iVar0;
Global_1947751.f_1=1;
if(func_534() !=func_65()){
Global_1947807.f_4=func_702(func_534());
Global_1947807.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1947807.f_6), &(Global_1947807.f_7));
}
Global_1947807.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0 !=-1){
Global_1947807.f_21=iParam0;
}}elseif(func_492(iVar0)){
Global_1947917=iVar0;
Global_1947917.f_1=iParam0;
Global_1947917.f_21=1;
Global_1947917.f_22=1;
if(func_534() !=func_65()){
Global_1947917.f_4=func_702(func_534());
Global_1947917.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1947917.f_4), &(Global_1947917.f_5));
}
Global_1947917.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0 !=-1){
Global_1947917.f_20=iParam0;
}
Global_1947917.f_27=func_785(func_19(), 5);
Global_1947917.f_28=func_828(func_899(PLAYER::PLAYER_ID()));
Global_1947917.f_29=func_427(6110, -1, 0);
Global_1947917.f_30=func_427(6106, -1, 0);
Global_1947917.f_31=func_427(6107, -1, 0);
Global_1947917.f_32=func_427(6109, -1, 0);
Global_1947917.f_33=func_427(6108, -1, 0);
Global_1947917.f_34=func_427(6111, -1, 0);
Global_1947917.f_7=func_827();
Global_1947917.f_51=func_828(bParam4);
}elseif(func_491(iVar0)){
Global_1947971=iVar0;
Global_1947971.f_1=iParam0;
Global_1947971.f_21=1;
Global_1947971.f_22=1;
if(func_534() !=func_65()){
Global_1947971.f_4=func_702(func_534());
Global_1947971.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1947971.f_4), &(Global_1947971.f_5));
}
Global_1947971.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0 !=-1){
Global_1947971.f_20=iParam0;
}
Global_1947971.f_24=func_427(6160, -1, 0);
Global_1947971.f_25=func_427(6165, -1, 0);
Global_1947971.f_26=func_427(6166, -1, 0);
Global_1947971.f_27=func_828((((func_742() || func_741()) || func_740()) || func_739(PLAYER::PLAYER_ID())));
Global_1947971.f_28=func_427(6167, -1, 0);
Global_1947971.f_29=func_828(func_738());
Global_1947971.f_31=0;
Global_1947971.f_30=0;
Global_1947971.f_32=0;
Global_1947971.f_33=0;
Global_1947971.f_34=0;
Global_1947971.f_16=0;
Global_1947971.f_7=func_827();
}elseif(func_735(iVar0)){
Global_1948107=iVar0;
Global_1948107.f_1=iParam0;
Global_1948107.f_21=1;
Global_1948107.f_22=1;
Global_1948107.f_7=func_827();
if(func_534() !=func_65()){
Global_1948107.f_4=func_702(func_534());
Global_1948107.f_5=func_701(func_534());
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1948107.f_4), &(Global_1948107.f_5));
}
if(func_534() !=-1){
Global_1948107.f_17=func_784(func_534());
}
Global_1948107.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948107.f_28=func_825(PLAYER::PLAYER_ID());
Global_1948107.f_16=0;
Global_1948107.f_24=0;
Global_1948107.f_23=0;
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948107.f_33=func_828(func_257(1));
}
Global_1948107.f_39=func_793(1);
Global_1948107.f_40=func_793(0);
}elseif(iVar0==237){
Global_1948053=iVar0;
Global_1948053.f_1=iParam0;
Global_1948053.f_21=1;
Global_1948053.f_22=1;
Global_1948053.f_7=func_827();
Global_1948053.f_24=0;
Global_1948053.f_23=0;
Global_1948053.f_16=0;
if(func_534() !=func_65()){
Global_1948053.f_4=func_702(func_534());
Global_1948053.f_5=func_701(func_534());
}
Global_1948053.f_28=func_825(PLAYER::PLAYER_ID());
if(Global_1948053.f_28){
Global_1948053.f_29=func_728(PLAYER::PLAYER_ID());
}else{
Global_1948053.f_29=0;
}
Global_1948053.f_30=func_712(PLAYER::PLAYER_ID(), 4, -1);
Global_1948053.f_31=func_732(PLAYER::PLAYER_ID());
Global_1948053.f_32=func_828(func_711(PLAYER::PLAYER_ID()));
Global_1948053.f_33=func_828(func_710(PLAYER::PLAYER_ID()));
Global_1948053.f_34=func_828(func_709(PLAYER::PLAYER_ID()));
Global_1948053.f_35=func_828(func_708(PLAYER::PLAYER_ID()));
Global_1948053.f_36=func_707(PLAYER::PLAYER_ID());
Global_1948053.f_37=func_706(PLAYER::PLAYER_ID());
Global_1948053.f_39=func_705(PLAYER::PLAYER_ID());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948053.f_41=func_828(func_257(1));
}
if(func_260() !=func_65()){
func_533(func_260(), &(Global_1948053.f_4), &(Global_1948053.f_5));
}
Global_1948053.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1948053.f_28=func_825(PLAYER::PLAYER_ID());
}elseif(func_485(iVar0)){
Global_1948194=iVar0;
Global_1948194.f_1=func_489(PLAYER::PLAYER_ID());
Global_1948194.f_2=func_838();
Global_1948194.f_3=func_837();
Global_1948194.f_4=func_702(func_534());
Global_1948194.f_5=func_701(func_534());
Global_1948194.f_7=func_827();
Global_1948194.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
if(func_534() !=-1){
Global_1948194.f_17=func_784(func_534());
}
Global_1948194.f_21=1;
Global_1948194.f_22=1;
Global_1948194.f_25=iParam0;
Global_1948194.f_27=func_828(func_699(PLAYER::PLAYER_ID()));
Global_1948194.f_28=func_695(21, -1);
}elseif(func_484(iVar0)){
Global_1948269=Global_786547.f_1;
Global_1948269.f_2=Global_786547;
Global_1948269.f_6=func_702(func_534());
Global_1948269.f_7=func_701(func_534());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948269.f_8=func_828(func_257(1));
}
if(func_534() !=-1){
Global_1948269.f_9=func_784(func_534());
}
Global_1948269.f_10=func_827();
Global_1948269.f_19=1;
Global_1948269.f_20=1;
Global_1948269.f_21=0;
Global_1948269.f_22=0;
Global_1948269.f_23=0;
Global_1977435=NETWORK::GET_CLOUD_TIME_AS_INT();
}elseif(func_483(iVar0)){
Global_1948357=Global_786547.f_1;
Global_1948357.f_3=Global_786547;
Global_1948357.f_6=func_702(func_534());
Global_1948357.f_7=func_701(func_534());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948357.f_8=func_828(func_257(1));
}
if(func_534() !=-1){
Global_1948357.f_9=func_784(func_534());
}
Global_1948357.f_10=func_827();
Global_1948357.f_21=0;
Global_1948357.f_22=0;
Global_1948357.f_23=0;
Global_1948357.f_26=func_793(1);
Global_1948357.f_34=func_793(0);
Global_1948357.f_15=!func_76(PLAYER::PLAYER_ID(), func_260(), 1);
}elseif(func_687(iVar0)){
Global_1948470=iParam0;
Global_1948470.f_1=iVar0;
Global_1948470.f_3=func_702(func_534());
Global_1948470.f_4=func_701(func_534());
Global_1948470.f_5=func_828(func_257(1));
Global_1948470.f_6=func_827();
if(func_534() !=-1){
Global_1948470.f_7=func_784(func_534());
}
Global_1948470.f_8=0;
}elseif(func_482(iVar0) || func_481(iVar0)){
Global_1948491=Global_786547.f_1;
Global_1948491.f_27=Global_786547;
Global_1948491.f_5=func_702(func_534());
Global_1948491.f_6=func_701(func_534());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948491.f_7=func_828(func_257(1));
}
if(func_534() !=-1){
Global_1948491.f_8=func_784(func_534());
}else{
Global_1948491.f_8=func_784(PLAYER::PLAYER_ID());
}
Global_1948491.f_9=func_827();
Global_1948491.f_18=1;
Global_1948491.f_19=1;
Global_1948491.f_20=0;
Global_1948491.f_21=0;
Global_1948491.f_22=0;
Global_1948491.f_23=func_793(1);
Global_1948491.f_24=func_793(0);
Global_1948491.f_14=!func_76(PLAYER::PLAYER_ID(), func_260(), 1);
}elseif(func_682(iVar0)){
Global_1948560.f_7=func_702(func_534());
Global_1948560.f_8=func_701(func_534());
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948560.f_9=func_828(func_257(1));
}else{
Global_1948560.f_9=-1;
}
if(func_534() !=-1){
Global_1948560.f_10=func_784(func_534());
}else{
Global_1948560.f_10=func_784(PLAYER::PLAYER_ID());
}
Global_1948560.f_11=func_827();
Global_1948560.f_20=0;
Global_1948560.f_21=0;
Global_1948560.f_22=0;
Global_1948560.f_23=func_793(1);
Global_1948560.f_24=func_793(0);
Global_1948560.f_17=!func_76(PLAYER::PLAYER_ID(), func_260(), 1);
Global_1948560.f_1=iVar0;
}elseif(func_660(iVar0)){
Global_1948628.f_1=iVar0;
Global_1948628=iParam0;
if(func_191(PLAYER::PLAYER_ID(), 1)){
Global_1948628.f_9=func_828(func_257(1));
}else{
Global_1948628.f_9=-1;
}
if(func_534() !=-1){
Global_1948628.f_19=func_784(func_534());
}else{
Global_1948628.f_19=func_784(PLAYER::PLAYER_ID());
}
Global_1948628.f_8=func_827();
Global_1948628.f_18=0;
Global_1948628.f_16=0;
Global_1948628.f_17=0;
Global_1948628.f_28=func_793(1);
Global_1948628.f_29=func_793(0);
Global_1948628.f_13=!func_76(PLAYER::PLAYER_ID(), func_260(), 1);
Global_1948628.f_7=!func_124(PLAYER::PLAYER_ID());
StringCopy(&Var2, func_898(PLAYER::PLAYER_ID()), 32);
if(func_534() !=func_65()){
StringCopy(&Var2, func_898(func_534()), 32);
}
Global_1948628.f_34={
Var2 
};
}else{
if(func_534() !=func_65()){
Global_1947733=func_702(func_534());
Global_1947733.f_1=func_701(func_534());
}
Global_1947733.f_5=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1947733.f_13=func_897();
Global_1947733.f_15=0;
if(func_532(1)){
if(func_260()==func_534()){
Global_1947733.f_15=1;
}}
if(func_896()){
Global_1947870.f_28=1;
}
if(((((func_895() || func_894()) || func_893()) || func_892()) || func_891()) || func_890(PLAYER::PLAYER_ID())){
Global_1947870.f_30=1;
}
if(func_888(func_889(joaat("trailersmall2")))){
Global_1947870.f_32=1;
}
if(func_881(func_887(joaat("caddy")))){
Global_1947870.f_31=1;
}
if(func_783(PLAYER::PLAYER_ID()) || func_782(PLAYER::PLAYER_ID())){
Global_1947870.f_29=1;
}
if(func_779(PLAYER::PLAYER_ID())){
Global_1947870.f_33=1;
Global_1947870.f_34=1;
}
if(func_780(PLAYER::PLAYER_ID())){
Global_1947870.f_36=1;
}
if(func_777(0, PLAYER::PLAYER_ID())==1){
Global_1947870.f_35=1;
}
if(func_880(PLAYER::PLAYER_ID(), 3, &uVar3)){
Global_1947870.f_37=1;
}
if(func_880(PLAYER::PLAYER_ID(), 7, &uVar3)){
Global_1947870.f_38=1;
}
if(func_879(PLAYER::PLAYER_ID())){
iVar4=0;
while (iVar4 < 7){
iVar5=func_878(PLAYER::PLAYER_ID(), iVar4);
if(func_622(PLAYER::PLAYER_ID(), iVar5, 0)){
Global_1947870.f_39=1;
}
if(func_622(PLAYER::PLAYER_ID(), iVar5, 2)){
Global_1947870.f_40=1;
}
if(func_622(PLAYER::PLAYER_ID(), iVar5, 1)){
Global_1947870.f_41=1;
}
iVar4++;
}}}}

int func_878(int iParam0, int iParam1){
var uVar0;
if(iParam0==func_65()){
return 0;
}
if(iParam1 < 0 || iParam1 >=7){
return 0;
}
if(func_614(Global_1853910[iParam0 /*862*/].f_267.f_193[iParam1 /*13*/])){
uVar0=Global_1853910[iParam0 /*862*/].f_267.f_193[iParam1 /*13*/];
}
return uVar0;
}

int func_879(int iParam0){
int iVar0;
if(iParam0==func_65()){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] !=0){
return 1;
}
iVar0++;
}
return 0;
}

int func_880(int iParam0, int iParam1, var uParam2){
int iVar0;
if(iParam0 !=func_65()){
iVar0=0;
while (iVar0 < 3){
if(iParam1==func_777(iVar0, iParam0)){
*uParam2=iVar0;
return 1;
}
iVar0++;
}}
return 0;
}

int func_881(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_695(11, -1)==0){
return 0;
}
if(iParam0 !=-1){
iVar0=-1;
iVar1=(iParam0 + func_757(11));
func_756(iVar1, &iVar0, 1);
iVar2=func_695(func_884(iVar1), -1);
if(iVar2 > 0){
}elseif(iVar0 >=0){
}
if(iVar0 >=0){
iVar3=func_427(func_882(4, iVar0), -1, 0);
if(iVar2 > 0){
}
if(iVar3 !=0){
return 1;
}}}
return 0;
}

int func_882(int iParam0, int iParam1){
if(iParam1 >=363){
return func_883(iParam0, iParam1);
}else{
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return 1630;
case 1:
return 1637;
case 2:
return 1644;
case 3:
return 1651;
case 4:
return 1658;
case 5:
return 1665;
case 6:
return 1672;
case 7:
return 1679;
case 8:
return 1686;
case 9:
return 1693;
case 10:
return 1700;
case 11:
return 1706;
case 12:
return 1712;
case 13:
return 1718;
case 14:
return 1797;
case 15:
return 1804;
case 16:
return 1811;
case 17:
return 1818;
case 18:
return 1825;
case 19:
return 1832;
case 20:
return 1839;
case 21:
return 1846;
case 22:
return 1853;
case 23:
return 1860;
case 24:
return 1866;
case 25:
return 1872;
case 26:
return 2167;
case 27:
return 2174;
case 28:
return 2181;
case 29:
return 2188;
case 30:
return 2195;
case 31:
return 2202;
case 32:
return 2209;
case 33:
return 2216;
case 34:
return 2223;
case 35:
return 2230;
case 36:
return 2237;
case 37:
return 2243;
case 38:
return 2249;
case 39:
return 2831;
case 40:
return 2838;
case 41:
return 2845;
case 42:
return 2852;
case 43:
return 2859;
case 44:
return 2866;
case 45:
return 2873;
case 46:
return 2880;
case 47:
return 2887;
case 48:
return 2894;
case 49:
return 2901;
case 50:
return 2907;
case 51:
return 2913;
case 52:
return 2955;
case 53:
return 2962;
case 54:
return 2969;
case 55:
return 2976;
case 56:
return 2983;
case 57:
return 2990;
case 58:
return 2997;
case 59:
return 3004;
case 60:
return 3011;
case 61:
return 3018;
case 62:
return 3025;
case 63:
return 3031;
case 64:
return 3037;
case 65:
return 3238;
case 66:
return 3246;
case 67:
return 3254;
case 68:
return 3262;
case 69:
return 3270;
case 70:
return 3278;
case 71:
return 3286;
case 72:
return 3294;
case 73:
return 3302;
case 74:
return 3310;
case 75:
return 3318;
case 76:
return 3326;
case 77:
return 3334;
case 78:
return 3342;
case 79:
return 3350;
case 80:
return 3358;
case 81:
return 3366;
case 82:
return 3374;
case 83:
return 3382;
case 84:
return 3390;
case 85:
return 3398;
case 86:
return 3405;
case 87:
return 3412;
default:
}
switch (iParam1){
case 88:
return 4034;
case 89:
return 4042;
case 90:
return 4050;
case 91:
return 4058;
case 92:
return 4066;
case 93:
return 4074;
case 94:
return 4082;
case 95:
return 4090;
case 96:
return 4098;
case 97:
return 4106;
case 98:
return 4114;
case 99:
return 4122;
case 100:
return 4130;
case 101:
return 4138;
case 102:
return 4146;
case 103:
return 4154;
case 104:
return 4162;
case 105:
return 4170;
case 106:
return 4178;
case 107:
return 4186;
case 108:
return 4194;
case 109:
return 4202;
case 110:
return 4210;
case 111:
return 4218;
case 112:
return 4226;
case 113:
return 4234;
case 114:
return 4242;
case 115:
return 4250;
case 116:
return 4258;
case 117:
return 4266;
case 118:
return 4274;
case 119:
return 4282;
case 120:
return 4290;
case 121:
return 4298;
case 122:
return 4306;
case 123:
return 4314;
case 124:
return 4322;
case 125:
return 4330;
case 126:
return 4338;
case 127:
return 4346;
case 128:
return 4354;
case 129:
return 4362;
case 130:
return 4370;
case 131:
return 4378;
case 132:
return 4386;
case 133:
return 4394;
case 134:
return 4402;
case 135:
return 4410;
case 136:
return 4418;
case 137:
return 4426;
case 138:
return 4434;
case 139:
return 4442;
case 140:
return 4450;
case 141:
return 4458;
case 142:
return 4466;
case 143:
return 4474;
case 144:
return 4482;
case 145:
return 4490;
case 146:
return 4498;
case 147:
return 4506;
case 148:
return 4514;
case 149:
return 4522;
case 150:
return 4530;
case 151:
return 4538;
case 152:
return 4546;
case 153:
return 4554;
case 154:
return 4562;
case 155:
return 4570;
case 156:
return 4578;
case 157:
return 4586;
case 158:
return 5479;
default:
}
switch (iParam1){
case 159:
return 5928;
case 160:
return 5935;
case 161:
return 5942;
case 162:
return 5949;
case 163:
return 5956;
case 164:
return 5963;
case 165:
return 5970;
case 166:
return 5977;
case 167:
return 5984;
case 168:
return 5991;
case 169:
return 5998;
case 170:
return 6005;
case 171:
return 6012;
case 172:
return 6019;
case 173:
return 6026;
case 174:
return 6033;
case 175:
return 6040;
case 176:
return 6047;
case 177:
return 6054;
case 178:
return 6061;
case 179:
return 6068;
case 180:
return 6075;
case 181:
return 6082;
case 182:
return 6089;
case 183:
return 6096;
default:
}
switch (iParam1){
case 184:
return 6173;
case 185:
return 6180;
case 186:
return 6187;
case 187:
return 6194;
case 188:
return 6201;
case 189:
return 6208;
case 190:
return 6215;
case 191:
return 6222;
case 192:
return 6229;
case 193:
return 6236;
default:
}
switch (iParam1){
case 194:
return 6570;
case 195:
return 6577;
case 196:
return 6584;
case 197:
return 6591;
case 198:
return 6598;
case 199:
return 6605;
case 200:
return 6612;
case 201:
return 6619;
case 202:
return 6626;
case 203:
return 6633;
case 204:
return 6640;
case 205:
return 6647;
case 206:
return 6654;
case 207:
return 6661;
case 208:
return 6668;
case 209:
return 6675;
case 210:
return 6682;
case 211:
return 6689;
case 212:
return 6696;
case 213:
return 6703;
case 214:
return 6710;
case 215:
return 6717;
case 216:
return 6724;
case 217:
return 6731;
case 218:
return 6738;
case 219:
return 6745;
case 220:
return 6752;
case 221:
return 6759;
case 222:
return 6766;
case 223:
return 6773;
case 224:
return 6780;
case 225:
return 6787;
case 226:
return 6794;
case 227:
return 6801;
case 228:
return 6808;
case 229:
return 6815;
case 230:
return 6822;
default:
}
switch (iParam1){
case 231:
return 7292;
case 232:
return 7299;
case 233:
return 7306;
case 234:
return 7313;
case 235:
return 7320;
case 236:
return 7327;
case 237:
return 7334;
case 238:
return 7341;
case 239:
return 7348;
case 240:
return 7355;
case 241:
return 7362;
case 242:
return 7369;
case 243:
return 7376;
case 244:
return 7383;
case 245:
return 7390;
case 246:
return 7397;
case 247:
return 7404;
case 248:
return 7411;
case 249:
return 7418;
case 250:
return 7425;
case 251:
return 7432;
case 252:
return 7439;
case 253:
return 7446;
case 254:
return 7453;
case 255:
return 7460;
case 256:
return 7467;
case 257:
return 7474;
case 258:
return 7481;
case 259:
return 7488;
case 260:
return 7495;
default:
}
switch (iParam1){
case 261:
return 8015;
case 262:
return 8022;
case 263:
return 8029;
case 264:
return 8036;
case 265:
return 8043;
case 266:
return 8050;
case 267:
return 8057;
case 268:
return 8064;
case 269:
return 8071;
case 270:
return 8078;
case 271:
return 8539;
case 272:
return 8546;
case 273:
return 8553;
case 274:
return 8560;
case 275:
return 8567;
case 276:
return 8574;
case 277:
return 8581;
case 278:
return 8588;
case 279:
return 8595;
case 280:
return 8602;
case 281:
return 8986;
case 282:
return 8993;
case 283:
return 9000;
case 284:
return 9007;
case 285:
return 9014;
case 286:
return 9021;
case 287:
return 9028;
case 288:
return 9035;
case 289:
return 9042;
case 290:
return 9049;
case 291:
return 9056;
case 292:
return 9062;
case 293:
return 9068;
case 294:
return 9074;
case 295:
return 9081;
case 296:
return 9088;
case 297:
return 9095;
case 298:
return 9102;
case 299:
return 9109;
case 300:
return 9116;
case 301:
return 9123;
case 302:
return 9130;
case 303:
return 9137;
case 304:
return 9144;
case 305:
return 9150;
case 306:
return 9156;
case 307:
return 9637;
case 308:
return 9644;
case 309:
return 9651;
case 310:
return 9658;
case 311:
return 9665;
case 312:
return 9672;
case 313:
return 9679;
case 314:
return 9686;
case 315:
return 9693;
case 316:
return 9700;
case 317:
return 9921;
case 318:
return 9928;
case 319:
return 9935;
case 320:
return 9942;
case 321:
return 9949;
case 322:
return 9956;
case 323:
return 9963;
case 324:
return 9970;
case 325:
return 9977;
case 326:
return 9984;
case 327:
return 9991;
case 328:
return 9998;
case 329:
return 10005;
case 330:
return 10012;
case 331:
return 10019;
case 332:
return 10026;
case 333:
return 10033;
case 334:
return 10040;
case 335:
return 10047;
case 336:
return 10054;
default:
}
switch (iParam1){
case 337:
return 10447;
case 338:
return 10454;
case 339:
return 10461;
case 340:
return 10468;
case 341:
return 10475;
case 342:
return 10482;
case 343:
return 10489;
case 344:
return 10496;
case 345:
return 10503;
case 346:
return 10510;
case 347:
return 10517;
case 348:
return 10523;
case 349:
return 10529;
case 350:
return 10535;
case 351:
return 10542;
case 352:
return 10549;
case 353:
return 10556;
case 354:
return 10563;
case 355:
return 10570;
case 356:
return 10577;
case 357:
return 10584;
case 358:
return 10591;
case 359:
return 10598;
case 360:
return 10605;
case 361:
return 10611;
case 362:
return 10617;
default:
}
break;
case 2:
switch (iParam1){
case 0:
return 1631;
case 1:
return 1638;
case 2:
return 1645;
case 3:
return 1652;
case 4:
return 1659;
case 5:
return 1666;
case 6:
return 1673;
case 7:
return 1680;
case 8:
return 1687;
case 9:
return 1694;
case 10:
return 1701;
case 11:
return 1707;
case 12:
return 1713;
case 13:
return 1719;
case 14:
return 1798;
case 15:
return 1805;
case 16:
return 1812;
case 17:
return 1819;
case 18:
return 1826;
case 19:
return 1833;
case 20:
return 1840;
case 21:
return 1847;
case 22:
return 1854;
case 23:
return 1861;
case 24:
return 1867;
case 25:
return 1873;
case 26:
return 2168;
case 27:
return 2175;
case 28:
return 2182;
case 29:
return 2189;
case 30:
return 2196;
case 31:
return 2203;
case 32:
return 2210;
case 33:
return 2217;
case 34:
return 2224;
case 35:
return 2231;
case 36:
return 2238;
case 37:
return 2244;
case 38:
return 2250;
case 39:
return 2832;
case 40:
return 2839;
case 41:
return 2846;
case 42:
return 2853;
case 43:
return 2860;
case 44:
return 2867;
case 45:
return 2874;
case 46:
return 2881;
case 47:
return 2888;
case 48:
return 2895;
case 49:
return 2902;
case 50:
return 2908;
case 51:
return 2914;
case 52:
return 2956;
case 53:
return 2963;
case 54:
return 2970;
case 55:
return 2977;
case 56:
return 2984;
case 57:
return 2991;
case 58:
return 2998;
case 59:
return 3005;
case 60:
return 3012;
case 61:
return 3019;
case 62:
return 3026;
case 63:
return 3032;
case 64:
return 3038;
case 65:
return 3239;
case 66:
return 3247;
case 67:
return 3255;
case 68:
return 3263;
case 69:
return 3271;
case 70:
return 3279;
case 71:
return 3287;
case 72:
return 3295;
case 73:
return 3303;
case 74:
return 3311;
case 75:
return 3319;
case 76:
return 3327;
case 77:
return 3335;
case 78:
return 3343;
case 79:
return 3351;
case 80:
return 3359;
case 81:
return 3367;
case 82:
return 3375;
case 83:
return 3383;
case 84:
return 3391;
case 85:
return 3399;
case 86:
return 3406;
case 87:
return 3413;
default:
}
switch (iParam1){
case 88:
return 4035;
case 89:
return 4043;
case 90:
return 4051;
case 91:
return 4059;
case 92:
return 4067;
case 93:
return 4075;
case 94:
return 4083;
case 95:
return 4091;
case 96:
return 4099;
case 97:
return 4107;
case 98:
return 4115;
case 99:
return 4123;
case 100:
return 4131;
case 101:
return 4139;
case 102:
return 4147;
case 103:
return 4155;
case 104:
return 4163;
case 105:
return 4171;
case 106:
return 4179;
case 107:
return 4187;
case 108:
return 4195;
case 109:
return 4203;
case 110:
return 4211;
case 111:
return 4219;
case 112:
return 4227;
case 113:
return 4235;
case 114:
return 4243;
case 115:
return 4251;
case 116:
return 4259;
case 117:
return 4267;
case 118:
return 4275;
case 119:
return 4283;
case 120:
return 4291;
case 121:
return 4299;
case 122:
return 4307;
case 123:
return 4315;
case 124:
return 4323;
case 125:
return 4331;
case 126:
return 4339;
case 127:
return 4347;
case 128:
return 4355;
case 129:
return 4363;
case 130:
return 4371;
case 131:
return 4379;
case 132:
return 4387;
case 133:
return 4395;
case 134:
return 4403;
case 135:
return 4411;
case 136:
return 4419;
case 137:
return 4427;
case 138:
return 4435;
case 139:
return 4443;
case 140:
return 4451;
case 141:
return 4459;
case 142:
return 4467;
case 143:
return 4475;
case 144:
return 4483;
case 145:
return 4491;
case 146:
return 4499;
case 147:
return 4507;
case 148:
return 4515;
case 149:
return 4523;
case 150:
return 4531;
case 151:
return 4539;
case 152:
return 4547;
case 153:
return 4555;
case 154:
return 4563;
case 155:
return 4571;
case 156:
return 4579;
case 157:
return 4587;
case 158:
return 5480;
default:
}
switch (iParam1){
case 159:
return 5929;
case 160:
return 5936;
case 161:
return 5943;
case 162:
return 5950;
case 163:
return 5957;
case 164:
return 5964;
case 165:
return 5971;
case 166:
return 5978;
case 167:
return 5985;
case 168:
return 5992;
case 169:
return 5999;
case 170:
return 6006;
case 171:
return 6013;
case 172:
return 6020;
case 173:
return 6027;
case 174:
return 6034;
case 175:
return 6041;
case 176:
return 6048;
case 177:
return 6055;
case 178:
return 6062;
case 179:
return 6069;
case 180:
return 6076;
case 181:
return 6083;
case 182:
return 6090;
case 183:
return 6097;
default:
}
switch (iParam1){
case 184:
return 6174;
case 185:
return 6181;
case 186:
return 6188;
case 187:
return 6195;
case 188:
return 6202;
case 189:
return 6209;
case 190:
return 6216;
case 191:
return 6223;
case 192:
return 6230;
case 193:
return 6237;
default:
}
switch (iParam1){
case 194:
return 6571;
case 195:
return 6578;
case 196:
return 6585;
case 197:
return 6592;
case 198:
return 6599;
case 199:
return 6606;
case 200:
return 6613;
case 201:
return 6620;
case 202:
return 6627;
case 203:
return 6634;
case 204:
return 6641;
case 205:
return 6648;
case 206:
return 6655;
case 207:
return 6662;
case 208:
return 6669;
case 209:
return 6676;
case 210:
return 6683;
case 211:
return 6690;
case 212:
return 6697;
case 213:
return 6704;
case 214:
return 6711;
case 215:
return 6718;
case 216:
return 6725;
case 217:
return 6732;
case 218:
return 6739;
case 219:
return 6746;
case 220:
return 6753;
case 221:
return 6760;
case 222:
return 6767;
case 223:
return 6774;
case 224:
return 6781;
case 225:
return 6788;
case 226:
return 6795;
case 227:
return 6802;
case 228:
return 6809;
case 229:
return 6816;
case 230:
return 6823;
default:
}
switch (iParam1){
case 231:
return 7293;
case 232:
return 7300;
case 233:
return 7307;
case 234:
return 7314;
case 235:
return 7321;
case 236:
return 7328;
case 237:
return 7335;
case 238:
return 7342;
case 239:
return 7349;
case 240:
return 7356;
case 241:
return 7363;
case 242:
return 7370;
case 243:
return 7377;
case 244:
return 7384;
case 245:
return 7391;
case 246:
return 7398;
case 247:
return 7405;
case 248:
return 7412;
case 249:
return 7419;
case 250:
return 7426;
case 251:
return 7433;
case 252:
return 7440;
case 253:
return 7447;
case 254:
return 7454;
case 255:
return 7461;
case 256:
return 7468;
case 257:
return 7475;
case 258:
return 7482;
case 259:
return 7489;
case 260:
return 7496;
default:
}
switch (iParam1){
case 261:
return 8016;
case 262:
return 8023;
case 263:
return 8030;
case 264:
return 8037;
case 265:
return 8044;
case 266:
return 8051;
case 267:
return 8058;
case 268:
return 8065;
case 269:
return 8072;
case 270:
return 8079;
case 271:
return 8540;
case 272:
return 8547;
case 273:
return 8554;
case 274:
return 8561;
case 275:
return 8568;
case 276:
return 8575;
case 277:
return 8582;
case 278:
return 8589;
case 279:
return 8596;
case 280:
return 8603;
case 281:
return 8987;
case 282:
return 8994;
case 283:
return 9001;
case 284:
return 9008;
case 285:
return 9015;
case 286:
return 9022;
case 287:
return 9029;
case 288:
return 9036;
case 289:
return 9043;
case 290:
return 9050;
case 291:
return 9057;
case 292:
return 9063;
case 293:
return 9069;
case 294:
return 9075;
case 295:
return 9082;
case 296:
return 9089;
case 297:
return 9096;
case 298:
return 9103;
case 299:
return 9110;
case 300:
return 9117;
case 301:
return 9124;
case 302:
return 9131;
case 303:
return 9138;
case 304:
return 9145;
case 305:
return 9151;
case 306:
return 9157;
case 307:
return 9638;
case 308:
return 9645;
case 309:
return 9652;
case 310:
return 9659;
case 311:
return 9666;
case 312:
return 9673;
case 313:
return 9680;
case 314:
return 9687;
case 315:
return 9694;
case 316:
return 9701;
case 317:
return 9922;
case 318:
return 9929;
case 319:
return 9936;
case 320:
return 9943;
case 321:
return 9950;
case 322:
return 9957;
case 323:
return 9964;
case 324:
return 9971;
case 325:
return 9978;
case 326:
return 9985;
case 327:
return 9992;
case 328:
return 9999;
case 329:
return 10006;
case 330:
return 10013;
case 331:
return 10020;
case 332:
return 10027;
case 333:
return 10034;
case 334:
return 10041;
case 335:
return 10048;
case 336:
return 10055;
default:
}
switch (iParam1){
case 337:
return 10448;
case 338:
return 10455;
case 339:
return 10462;
case 340:
return 10469;
case 341:
return 10476;
case 342:
return 10483;
case 343:
return 10490;
case 344:
return 10497;
case 345:
return 10504;
case 346:
return 10511;
case 347:
return 10518;
case 348:
return 10524;
case 349:
return 10530;
case 350:
return 10536;
case 351:
return 10543;
case 352:
return 10550;
case 353:
return 10557;
case 354:
return 10564;
case 355:
return 10571;
case 356:
return 10578;
case 357:
return 10585;
case 358:
return 10592;
case 359:
return 10599;
case 360:
return 10606;
case 361:
return 10612;
case 362:
return 10618;
default:
}
break;
case 3:
switch (iParam1){
case 0:
return 1632;
case 1:
return 1639;
case 2:
return 1646;
case 3:
return 1653;
case 4:
return 1660;
case 5:
return 1667;
case 6:
return 1674;
case 7:
return 1681;
case 8:
return 1688;
case 9:
return 1695;
case 10:
return 1702;
case 11:
return 1708;
case 12:
return 1714;
case 13:
return 1720;
case 14:
return 1799;
case 15:
return 1806;
case 16:
return 1813;
case 17:
return 1820;
case 18:
return 1827;
case 19:
return 1834;
case 20:
return 1841;
case 21:
return 1848;
case 22:
return 1855;
case 23:
return 1862;
case 24:
return 1868;
case 25:
return 1874;
case 26:
return 2169;
case 27:
return 2176;
case 28:
return 2183;
case 29:
return 2190;
case 30:
return 2197;
case 31:
return 2204;
case 32:
return 2211;
case 33:
return 2218;
case 34:
return 2225;
case 35:
return 2232;
case 36:
return 2239;
case 37:
return 2245;
case 38:
return 2251;
case 39:
return 2833;
case 40:
return 2840;
case 41:
return 2847;
case 42:
return 2854;
case 43:
return 2861;
case 44:
return 2868;
case 45:
return 2875;
case 46:
return 2882;
case 47:
return 2889;
case 48:
return 2896;
case 49:
return 2903;
case 50:
return 2909;
case 51:
return 2915;
case 52:
return 2957;
case 53:
return 2964;
case 54:
return 2971;
case 55:
return 2978;
case 56:
return 2985;
case 57:
return 2992;
case 58:
return 2999;
case 59:
return 3006;
case 60:
return 3013;
case 61:
return 3020;
case 62:
return 3027;
case 63:
return 3033;
case 64:
return 3039;
case 65:
return 3240;
case 66:
return 3248;
case 67:
return 3256;
case 68:
return 3264;
case 69:
return 3272;
case 70:
return 3280;
case 71:
return 3288;
case 72:
return 3296;
case 73:
return 3304;
case 74:
return 3312;
case 75:
return 3320;
case 76:
return 3328;
case 77:
return 3336;
case 78:
return 3344;
case 79:
return 3352;
case 80:
return 3360;
case 81:
return 3368;
case 82:
return 3376;
case 83:
return 3384;
case 84:
return 3392;
case 85:
return 3400;
case 86:
return 3407;
case 87:
return 3414;
default:
}
switch (iParam1){
case 88:
return 4036;
case 89:
return 4044;
case 90:
return 4052;
case 91:
return 4060;
case 92:
return 4068;
case 93:
return 4076;
case 94:
return 4084;
case 95:
return 4092;
case 96:
return 4100;
case 97:
return 4108;
case 98:
return 4116;
case 99:
return 4124;
case 100:
return 4132;
case 101:
return 4140;
case 102:
return 4148;
case 103:
return 4156;
case 104:
return 4164;
case 105:
return 4172;
case 106:
return 4180;
case 107:
return 4188;
case 108:
return 4196;
case 109:
return 4204;
case 110:
return 4212;
case 111:
return 4220;
case 112:
return 4228;
case 113:
return 4236;
case 114:
return 4244;
case 115:
return 4252;
case 116:
return 4260;
case 117:
return 4268;
case 118:
return 4276;
case 119:
return 4284;
case 120:
return 4292;
case 121:
return 4300;
case 122:
return 4308;
case 123:
return 4316;
case 124:
return 4324;
case 125:
return 4332;
case 126:
return 4340;
case 127:
return 4348;
case 128:
return 4356;
case 129:
return 4364;
case 130:
return 4372;
case 131:
return 4380;
case 132:
return 4388;
case 133:
return 4396;
case 134:
return 4404;
case 135:
return 4412;
case 136:
return 4420;
case 137:
return 4428;
case 138:
return 4436;
case 139:
return 4444;
case 140:
return 4452;
case 141:
return 4460;
case 142:
return 4468;
case 143:
return 4476;
case 144:
return 4484;
case 145:
return 4492;
case 146:
return 4500;
case 147:
return 4508;
case 148:
return 4516;
case 149:
return 4524;
case 150:
return 4532;
case 151:
return 4540;
case 152:
return 4548;
case 153:
return 4556;
case 154:
return 4564;
case 155:
return 4572;
case 156:
return 4580;
case 157:
return 4588;
case 158:
return 5481;
default:
}
switch (iParam1){
case 159:
return 5930;
case 160:
return 5937;
case 161:
return 5944;
case 162:
return 5951;
case 163:
return 5958;
case 164:
return 5965;
case 165:
return 5972;
case 166:
return 5979;
case 167:
return 5986;
case 168:
return 5993;
case 169:
return 6000;
case 170:
return 6007;
case 171:
return 6014;
case 172:
return 6021;
case 173:
return 6028;
case 174:
return 6035;
case 175:
return 6042;
case 176:
return 6049;
case 177:
return 6056;
case 178:
return 6063;
case 179:
return 6070;
case 180:
return 6077;
case 181:
return 6084;
case 182:
return 6091;
case 183:
return 6098;
default:
}
switch (iParam1){
case 184:
return 6175;
case 185:
return 6182;
case 186:
return 6189;
case 187:
return 6196;
case 188:
return 6203;
case 189:
return 6210;
case 190:
return 6217;
case 191:
return 6224;
case 192:
return 6231;
case 193:
return 6238;
default:
}
switch (iParam1){
case 194:
return 6572;
case 195:
return 6579;
case 196:
return 6586;
case 197:
return 6593;
case 198:
return 6600;
case 199:
return 6607;
case 200:
return 6614;
case 201:
return 6621;
case 202:
return 6628;
case 203:
return 6635;
case 204:
return 6642;
case 205:
return 6649;
case 206:
return 6656;
case 207:
return 6663;
case 208:
return 6670;
case 209:
return 6677;
case 210:
return 6684;
case 211:
return 6691;
case 212:
return 6698;
case 213:
return 6705;
case 214:
return 6712;
case 215:
return 6719;
case 216:
return 6726;
case 217:
return 6733;
case 218:
return 6740;
case 219:
return 6747;
case 220:
return 6754;
case 221:
return 6761;
case 222:
return 6768;
case 223:
return 6775;
case 224:
return 6782;
case 225:
return 6789;
case 226:
return 6796;
case 227:
return 6803;
case 228:
return 6810;
case 229:
return 6817;
case 230:
return 6824;
default:
}
switch (iParam1){
case 231:
return 7294;
case 232:
return 7301;
case 233:
return 7308;
case 234:
return 7315;
case 235:
return 7322;
case 236:
return 7329;
case 237:
return 7336;
case 238:
return 7343;
case 239:
return 7350;
case 240:
return 7357;
case 241:
return 7364;
case 242:
return 7371;
case 243:
return 7378;
case 244:
return 7385;
case 245:
return 7392;
case 246:
return 7399;
case 247:
return 7406;
case 248:
return 7413;
case 249:
return 7420;
case 250:
return 7427;
case 251:
return 7434;
case 252:
return 7441;
case 253:
return 7448;
case 254:
return 7455;
case 255:
return 7462;
case 256:
return 7469;
case 257:
return 7476;
case 258:
return 7483;
case 259:
return 7490;
case 260:
return 7497;
default:
}
switch (iParam1){
case 261:
return 8017;
case 262:
return 8024;
case 263:
return 8031;
case 264:
return 8038;
case 265:
return 8045;
case 266:
return 8052;
case 267:
return 8059;
case 268:
return 8066;
case 269:
return 8073;
case 270:
return 8080;
case 271:
return 8541;
case 272:
return 8548;
case 273:
return 8555;
case 274:
return 8562;
case 275:
return 8569;
case 276:
return 8576;
case 277:
return 8583;
case 278:
return 8590;
case 279:
return 8597;
case 280:
return 8604;
case 281:
return 8988;
case 282:
return 8995;
case 283:
return 9002;
case 284:
return 9009;
case 285:
return 9016;
case 286:
return 9023;
case 287:
return 9030;
case 288:
return 9037;
case 289:
return 9044;
case 290:
return 9051;
case 291:
return 9058;
case 292:
return 9064;
case 293:
return 9070;
case 294:
return 9076;
case 295:
return 9083;
case 296:
return 9090;
case 297:
return 9097;
case 298:
return 9104;
case 299:
return 9111;
case 300:
return 9118;
case 301:
return 9125;
case 302:
return 9132;
case 303:
return 9139;
case 304:
return 9146;
case 305:
return 9152;
case 306:
return 9158;
case 307:
return 9639;
case 308:
return 9646;
case 309:
return 9653;
case 310:
return 9660;
case 311:
return 9667;
case 312:
return 9674;
case 313:
return 9681;
case 314:
return 9688;
case 315:
return 9695;
case 316:
return 9702;
case 317:
return 9923;
case 318:
return 9930;
case 319:
return 9937;
case 320:
return 9944;
case 321:
return 9951;
case 322:
return 9958;
case 323:
return 9965;
case 324:
return 9972;
case 325:
return 9979;
case 326:
return 9986;
case 327:
return 9993;
case 328:
return 10000;
case 329:
return 10007;
case 330:
return 10014;
case 331:
return 10021;
case 332:
return 10028;
case 333:
return 10035;
case 334:
return 10042;
case 335:
return 10049;
case 336:
return 10056;
default:
}
switch (iParam1){
case 337:
return 10449;
case 338:
return 10456;
case 339:
return 10463;
case 340:
return 10470;
case 341:
return 10477;
case 342:
return 10484;
case 343:
return 10491;
case 344:
return 10498;
case 345:
return 10505;
case 346:
return 10512;
case 347:
return 10519;
case 348:
return 10525;
case 349:
return 10531;
case 350:
return 10537;
case 351:
return 10544;
case 352:
return 10551;
case 353:
return 10558;
case 354:
return 10565;
case 355:
return 10572;
case 356:
return 10579;
case 357:
return 10586;
case 358:
return 10593;
case 359:
return 10600;
case 360:
return 10607;
case 361:
return 10613;
case 362:
return 10619;
default:
}
break;
case 4:
switch (iParam1){
case 0:
return 1633;
case 1:
return 1640;
case 2:
return 1647;
case 3:
return 1654;
case 4:
return 1661;
case 5:
return 1668;
case 6:
return 1675;
case 7:
return 1682;
case 8:
return 1689;
case 9:
return 1696;
case 10:
return 1703;
case 11:
return 1709;
case 12:
return 1715;
case 13:
return 1721;
case 14:
return 1800;
case 15:
return 1807;
case 16:
return 1814;
case 17:
return 1821;
case 18:
return 1828;
case 19:
return 1835;
case 20:
return 1842;
case 21:
return 1849;
case 22:
return 1856;
case 23:
return 1863;
case 24:
return 1869;
case 25:
return 1875;
case 26:
return 2170;
case 27:
return 2177;
case 28:
return 2184;
case 29:
return 2191;
case 30:
return 2198;
case 31:
return 2205;
case 32:
return 2212;
case 33:
return 2219;
case 34:
return 2226;
case 35:
return 2233;
case 36:
return 2240;
case 37:
return 2246;
case 38:
return 2252;
case 39:
return 2834;
case 40:
return 2841;
case 41:
return 2848;
case 42:
return 2855;
case 43:
return 2862;
case 44:
return 2869;
case 45:
return 2876;
case 46:
return 2883;
case 47:
return 2890;
case 48:
return 2897;
case 49:
return 2904;
case 50:
return 2910;
case 51:
return 2916;
case 52:
return 2958;
case 53:
return 2965;
case 54:
return 2972;
case 55:
return 2979;
case 56:
return 2986;
case 57:
return 2993;
case 58:
return 3000;
case 59:
return 3007;
case 60:
return 3014;
case 61:
return 3021;
case 62:
return 3028;
case 63:
return 3034;
case 64:
return 3040;
case 65:
return 3241;
case 66:
return 3249;
case 67:
return 3257;
case 68:
return 3265;
case 69:
return 3273;
case 70:
return 3281;
case 71:
return 3289;
case 72:
return 3297;
case 73:
return 3305;
case 74:
return 3313;
case 75:
return 3321;
case 76:
return 3329;
case 77:
return 3337;
case 78:
return 3345;
case 79:
return 3353;
case 80:
return 3361;
case 81:
return 3369;
case 82:
return 3377;
case 83:
return 3385;
case 84:
return 3393;
case 85:
return 3401;
case 86:
return 3408;
case 87:
return 3415;
default:
}
switch (iParam1){
case 88:
return 4037;
case 89:
return 4045;
case 90:
return 4053;
case 91:
return 4061;
case 92:
return 4069;
case 93:
return 4077;
case 94:
return 4085;
case 95:
return 4093;
case 96:
return 4101;
case 97:
return 4109;
case 98:
return 4117;
case 99:
return 4125;
case 100:
return 4133;
case 101:
return 4141;
case 102:
return 4149;
case 103:
return 4157;
case 104:
return 4165;
case 105:
return 4173;
case 106:
return 4181;
case 107:
return 4189;
case 108:
return 4197;
case 109:
return 4205;
case 110:
return 4213;
case 111:
return 4221;
case 112:
return 4229;
case 113:
return 4237;
case 114:
return 4245;
case 115:
return 4253;
case 116:
return 4261;
case 117:
return 4269;
case 118:
return 4277;
case 119:
return 4285;
case 120:
return 4293;
case 121:
return 4301;
case 122:
return 4309;
case 123:
return 4317;
case 124:
return 4325;
case 125:
return 4333;
case 126:
return 4341;
case 127:
return 4349;
case 128:
return 4357;
case 129:
return 4365;
case 130:
return 4373;
case 131:
return 4381;
case 132:
return 4389;
case 133:
return 4397;
case 134:
return 4405;
case 135:
return 4413;
case 136:
return 4421;
case 137:
return 4429;
case 138:
return 4437;
case 139:
return 4445;
case 140:
return 4453;
case 141:
return 4461;
case 142:
return 4469;
case 143:
return 4477;
case 144:
return 4485;
case 145:
return 4493;
case 146:
return 4501;
case 147:
return 4509;
case 148:
return 4517;
case 149:
return 4525;
case 150:
return 4533;
case 151:
return 4541;
case 152:
return 4549;
case 153:
return 4557;
case 154:
return 4565;
case 155:
return 4573;
case 156:
return 4581;
case 157:
return 4589;
case 158:
return 5482;
default:
}
switch (iParam1){
case 159:
return 5931;
case 160:
return 5938;
case 161:
return 5945;
case 162:
return 5952;
case 163:
return 5959;
case 164:
return 5966;
case 165:
return 5973;
case 166:
return 5980;
case 167:
return 5987;
case 168:
return 5994;
case 169:
return 6001;
case 170:
return 6008;
case 171:
return 6015;
case 172:
return 6022;
case 173:
return 6029;
case 174:
return 6036;
case 175:
return 6043;
case 176:
return 6050;
case 177:
return 6057;
case 178:
return 6064;
case 179:
return 6071;
case 180:
return 6078;
case 181:
return 6085;
case 182:
return 6092;
case 183:
return 6099;
default:
}
switch (iParam1){
case 184:
return 6176;
case 185:
return 6183;
case 186:
return 6190;
case 187:
return 6197;
case 188:
return 6204;
case 189:
return 6211;
case 190:
return 6218;
case 191:
return 6225;
case 192:
return 6232;
case 193:
return 6239;
default:
}
switch (iParam1){
case 194:
return 6573;
case 195:
return 6580;
case 196:
return 6587;
case 197:
return 6594;
case 198:
return 6601;
case 199:
return 6608;
case 200:
return 6615;
case 201:
return 6622;
case 202:
return 6629;
case 203:
return 6636;
case 204:
return 6643;
case 205:
return 6650;
case 206:
return 6657;
case 207:
return 6664;
case 208:
return 6671;
case 209:
return 6678;
case 210:
return 6685;
case 211:
return 6692;
case 212:
return 6699;
case 213:
return 6706;
case 214:
return 6713;
case 215:
return 6720;
case 216:
return 6727;
case 217:
return 6734;
case 218:
return 6741;
case 219:
return 6748;
case 220:
return 6755;
case 221:
return 6762;
case 222:
return 6769;
case 223:
return 6776;
case 224:
return 6783;
case 225:
return 6790;
case 226:
return 6797;
case 227:
return 6804;
case 228:
return 6811;
case 229:
return 6818;
case 230:
return 6825;
default:
}
switch (iParam1){
case 231:
return 7295;
case 232:
return 7302;
case 233:
return 7309;
case 234:
return 7316;
case 235:
return 7323;
case 236:
return 7330;
case 237:
return 7337;
case 238:
return 7344;
case 239:
return 7351;
case 240:
return 7358;
case 241:
return 7365;
case 242:
return 7372;
case 243:
return 7379;
case 244:
return 7386;
case 245:
return 7393;
case 246:
return 7400;
case 247:
return 7407;
case 248:
return 7414;
case 249:
return 7421;
case 250:
return 7428;
case 251:
return 7435;
case 252:
return 7442;
case 253:
return 7449;
case 254:
return 7456;
case 255:
return 7463;
case 256:
return 7470;
case 257:
return 7477;
case 258:
return 7484;
case 259:
return 7491;
case 260:
return 7498;
default:
}
switch (iParam1){
case 261:
return 8018;
case 262:
return 8025;
case 263:
return 8032;
case 264:
return 8039;
case 265:
return 8046;
case 266:
return 8053;
case 267:
return 8060;
case 268:
return 8067;
case 269:
return 8074;
case 270:
return 8081;
case 271:
return 8542;
case 272:
return 8549;
case 273:
return 8556;
case 274:
return 8563;
case 275:
return 8570;
case 276:
return 8577;
case 277:
return 8584;
case 278:
return 8591;
case 279:
return 8598;
case 280:
return 8605;
case 281:
return 8989;
case 282:
return 8996;
case 283:
return 9003;
case 284:
return 9010;
case 285:
return 9017;
case 286:
return 9024;
case 287:
return 9031;
case 288:
return 9038;
case 289:
return 9045;
case 290:
return 9052;
case 291:
return 9059;
case 292:
return 9065;
case 293:
return 9071;
case 294:
return 9077;
case 295:
return 9084;
case 296:
return 9091;
case 297:
return 9098;
case 298:
return 9105;
case 299:
return 9112;
case 300:
return 9119;
case 301:
return 9126;
case 302:
return 9133;
case 303:
return 9140;
case 304:
return 9147;
case 305:
return 9153;
case 306:
return 9159;
case 307:
return 9640;
case 308:
return 9647;
case 309:
return 9654;
case 310:
return 9661;
case 311:
return 9668;
case 312:
return 9675;
case 313:
return 9682;
case 314:
return 9689;
case 315:
return 9696;
case 316:
return 9703;
case 317:
return 9924;
case 318:
return 9931;
case 319:
return 9938;
case 320:
return 9945;
case 321:
return 9952;
case 322:
return 9959;
case 323:
return 9966;
case 324:
return 9973;
case 325:
return 9980;
case 326:
return 9987;
case 327:
return 9994;
case 328:
return 10001;
case 329:
return 10008;
case 330:
return 10015;
case 331:
return 10022;
case 332:
return 10029;
case 333:
return 10036;
case 334:
return 10043;
case 335:
return 10050;
case 336:
return 10057;
default:
}
switch (iParam1){
case 337:
return 10450;
case 338:
return 10457;
case 339:
return 10464;
case 340:
return 10471;
case 341:
return 10478;
case 342:
return 10485;
case 343:
return 10492;
case 344:
return 10499;
case 345:
return 10506;
case 346:
return 10513;
case 347:
return 10520;
case 348:
return 10526;
case 349:
return 10532;
case 350:
return 10538;
case 351:
return 10545;
case 352:
return 10552;
case 353:
return 10559;
case 354:
return 10566;
case 355:
return 10573;
case 356:
return 10580;
case 357:
return 10587;
case 358:
return 10594;
case 359:
return 10601;
case 360:
return 10608;
case 361:
return 10614;
case 362:
return 10620;
default:
}
break;
case 5:
switch (iParam1){
case 0:
return 1634;
case 1:
return 1641;
case 2:
return 1648;
case 3:
return 1655;
case 4:
return 1662;
case 5:
return 1669;
case 6:
return 1676;
case 7:
return 1683;
case 8:
return 1690;
case 9:
return 1697;
case 10:
return 1704;
case 11:
return 1710;
case 12:
return 1716;
case 13:
return 1722;
case 14:
return 1801;
case 15:
return 1808;
case 16:
return 1815;
case 17:
return 1822;
case 18:
return 1829;
case 19:
return 1836;
case 20:
return 1843;
case 21:
return 1850;
case 22:
return 1857;
case 23:
return 1864;
case 24:
return 1870;
case 25:
return 1876;
case 26:
return 2171;
case 27:
return 2178;
case 28:
return 2185;
case 29:
return 2192;
case 30:
return 2199;
case 31:
return 2206;
case 32:
return 2213;
case 33:
return 2220;
case 34:
return 2227;
case 35:
return 2234;
case 36:
return 2241;
case 37:
return 2247;
case 38:
return 2253;
case 39:
return 2835;
case 40:
return 2842;
case 41:
return 2849;
case 42:
return 2856;
case 43:
return 2863;
case 44:
return 2870;
case 45:
return 2877;
case 46:
return 2884;
case 47:
return 2891;
case 48:
return 2898;
case 49:
return 2905;
case 50:
return 2911;
case 51:
return 2917;
case 52:
return 2959;
case 53:
return 2966;
case 54:
return 2973;
case 55:
return 2980;
case 56:
return 2987;
case 57:
return 2994;
case 58:
return 3001;
case 59:
return 3008;
case 60:
return 3015;
case 61:
return 3022;
case 62:
return 3029;
case 63:
return 3035;
case 64:
return 3041;
case 65:
return 3242;
case 66:
return 3250;
case 67:
return 3258;
case 68:
return 3266;
case 69:
return 3274;
case 70:
return 3282;
case 71:
return 3290;
case 72:
return 3298;
case 73:
return 3306;
case 74:
return 3314;
case 75:
return 3322;
case 76:
return 3330;
case 77:
return 3338;
case 78:
return 3346;
case 79:
return 3354;
case 80:
return 3362;
case 81:
return 3370;
case 82:
return 3378;
case 83:
return 3386;
case 84:
return 3394;
case 85:
return 3402;
case 86:
return 3409;
case 87:
return 3416;
default:
}
switch (iParam1){
case 88:
return 4038;
case 89:
return 4046;
case 90:
return 4054;
case 91:
return 4062;
case 92:
return 4070;
case 93:
return 4078;
case 94:
return 4086;
case 95:
return 4094;
case 96:
return 4102;
case 97:
return 4110;
case 98:
return 4118;
case 99:
return 4126;
case 100:
return 4134;
case 101:
return 4142;
case 102:
return 4150;
case 103:
return 4158;
case 104:
return 4166;
case 105:
return 4174;
case 106:
return 4182;
case 107:
return 4190;
case 108:
return 4198;
case 109:
return 4206;
case 110:
return 4214;
case 111:
return 4222;
case 112:
return 4230;
case 113:
return 4238;
case 114:
return 4246;
case 115:
return 4254;
case 116:
return 4262;
case 117:
return 4270;
case 118:
return 4278;
case 119:
return 4286;
case 120:
return 4294;
case 121:
return 4302;
case 122:
return 4310;
case 123:
return 4318;
case 124:
return 4326;
case 125:
return 4334;
case 126:
return 4342;
case 127:
return 4350;
case 128:
return 4358;
case 129:
return 4366;
case 130:
return 4374;
case 131:
return 4382;
case 132:
return 4390;
case 133:
return 4398;
case 134:
return 4406;
case 135:
return 4414;
case 136:
return 4422;
case 137:
return 4430;
case 138:
return 4438;
case 139:
return 4446;
case 140:
return 4454;
case 141:
return 4462;
case 142:
return 4470;
case 143:
return 4478;
case 144:
return 4486;
case 145:
return 4494;
case 146:
return 4502;
case 147:
return 4510;
case 148:
return 4518;
case 149:
return 4526;
case 150:
return 4534;
case 151:
return 4542;
case 152:
return 4550;
case 153:
return 4558;
case 154:
return 4566;
case 155:
return 4574;
case 156:
return 4582;
case 157:
return 4590;
case 158:
return 5483;
default:
}
switch (iParam1){
case 159:
return 5932;
case 160:
return 5939;
case 161:
return 5946;
case 162:
return 5953;
case 163:
return 5960;
case 164:
return 5967;
case 165:
return 5974;
case 166:
return 5981;
case 167:
return 5988;
case 168:
return 5995;
case 169:
return 6002;
case 170:
return 6009;
case 171:
return 6016;
case 172:
return 6023;
case 173:
return 6030;
case 174:
return 6037;
case 175:
return 6044;
case 176:
return 6051;
case 177:
return 6058;
case 178:
return 6065;
case 179:
return 6072;
case 180:
return 6079;
case 181:
return 6086;
case 182:
return 6093;
case 183:
return 6100;
default:
}
switch (iParam1){
case 184:
return 6177;
case 185:
return 6184;
case 186:
return 6191;
case 187:
return 6198;
case 188:
return 6205;
case 189:
return 6212;
case 190:
return 6219;
case 191:
return 6226;
case 192:
return 6233;
case 193:
return 6240;
default:
}
switch (iParam1){
case 194:
return 6574;
case 195:
return 6581;
case 196:
return 6588;
case 197:
return 6595;
case 198:
return 6602;
case 199:
return 6609;
case 200:
return 6616;
case 201:
return 6623;
case 202:
return 6630;
case 203:
return 6637;
case 204:
return 6644;
case 205:
return 6651;
case 206:
return 6658;
case 207:
return 6665;
case 208:
return 6672;
case 209:
return 6679;
case 210:
return 6686;
case 211:
return 6693;
case 212:
return 6700;
case 213:
return 6707;
case 214:
return 6714;
case 215:
return 6721;
case 216:
return 6728;
case 217:
return 6735;
case 218:
return 6742;
case 219:
return 6749;
case 220:
return 6756;
case 221:
return 6763;
case 222:
return 6770;
case 223:
return 6777;
case 224:
return 6784;
case 225:
return 6791;
case 226:
return 6798;
case 227:
return 6805;
case 228:
return 6812;
case 229:
return 6819;
case 230:
return 6826;
default:
}
switch (iParam1){
case 231:
return 7296;
case 232:
return 7303;
case 233:
return 7310;
case 234:
return 7317;
case 235:
return 7324;
case 236:
return 7331;
case 237:
return 7338;
case 238:
return 7345;
case 239:
return 7352;
case 240:
return 7359;
case 241:
return 7366;
case 242:
return 7373;
case 243:
return 7380;
case 244:
return 7387;
case 245:
return 7394;
case 246:
return 7401;
case 247:
return 7408;
case 248:
return 7415;
case 249:
return 7422;
case 250:
return 7429;
case 251:
return 7436;
case 252:
return 7443;
case 253:
return 7450;
case 254:
return 7457;
case 255:
return 7464;
case 256:
return 7471;
case 257:
return 7478;
case 258:
return 7485;
case 259:
return 7492;
case 260:
return 7499;
default:
}
switch (iParam1){
case 261:
return 8019;
case 262:
return 8026;
case 263:
return 8033;
case 264:
return 8040;
case 265:
return 8047;
case 266:
return 8054;
case 267:
return 8061;
case 268:
return 8068;
case 269:
return 8075;
case 270:
return 8082;
case 271:
return 8543;
case 272:
return 8550;
case 273:
return 8557;
case 274:
return 8564;
case 275:
return 8571;
case 276:
return 8578;
case 277:
return 8585;
case 278:
return 8592;
case 279:
return 8599;
case 280:
return 8606;
case 281:
return 8990;
case 282:
return 8997;
case 283:
return 9004;
case 284:
return 9011;
case 285:
return 9018;
case 286:
return 9025;
case 287:
return 9032;
case 288:
return 9039;
case 289:
return 9046;
case 290:
return 9053;
case 291:
return 9060;
case 292:
return 9066;
}