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
int iLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
int iLocal_21=0;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
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
struct<2> Local_66={
0, 0 
};
var uLocal_67[32]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_68=0;
int iLocal_69=0;
struct<576> Local_70={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_71={
0, 0, 0 
};
var uLocal_72=12;
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
var uLocal_85=12;
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
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=12;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=9;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=9;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
int iLocal_138=0;
int iLocal_139=0;
struct<20> Local_140={
4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_141=0;
bool bLocal_142=0;
struct<3> Local_143={
0, 0, 0 
};
struct<3> Local_144={
0, 0, 0 
};
struct<3> Local_145={
0, 0, 0 
};
float fLocal_146=0f;
float fLocal_147=0f;
float fLocal_148=0f;
float fLocal_149=0f;
float fLocal_150=0f;
int iLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
char* sLocal_155=NULL;
char* sLocal_156=NULL;
char* sLocal_157=NULL;
char* sLocal_158=NULL;
int iLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
int iLocal_162=0;
int iLocal_163=0;
var uLocal_164=0;
int iLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
var uLocal_168=0;
int iLocal_169=0;
int iLocal_170=0;
int iLocal_171=0;
var uLocal_172=0;
int iLocal_173=0;
int iLocal_174=0;
int iLocal_175=0;
bool bLocal_176=0;
int iLocal_177=0;
struct<3> Local_178={
0, 0, 0 
};
struct<3> Local_179={
0, 0, 0 
};
int iLocal_180=0;
int iLocal_181=0;
struct<16> Local_182={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_183=0;
int iLocal_184=0;
int iLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
int iLocal_194=0;
struct<4> Local_195={
0, 0, 0, 0 
};
struct<4> Local_196={
0, 0, 0, 0 
};
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
fLocal_14=0.001f;
iLocal_17=-1;
iLocal_18=3;
sLocal_19="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_153=-1;
sLocal_158="MISSTATTOO_PARLOUR@SHOP_IG_4BPLAYER";
iLocal_184=207;
StringCopy(&Local_195, "", 16);
iLocal_68=ScriptParam_196.f_0;
iLocal_69=func_1029(iLocal_68);
MISC::SET_BIT(&(Global_100733.f_1407[iLocal_68]), 16);
func_1025(ScriptParam_196.f_3);
func_1024(iLocal_68);
if(func_1023(1)){
iLocal_175=1;
}
Local_70.f_3=-1;
func_1022(&uLocal_186, iLocal_68, 0);
Global_1949779=0;
while (true){
wait(0);
func_1021(&(Local_70.f_12));
if(func_1018(iLocal_68) && !func_1010(&Local_70, iLocal_68)){
if(func_1009(&Local_70)){
func_1008(iLocal_68);
iVar0=0;
func_999(&Local_70, &iVar0, 0, Local_70.f_46);
func_990(&Local_70, &(Local_70.f_119));
if(Local_70.f_9){
if(!func_989(Local_70.f_0)){
func_977(&Local_70, &(Local_70.f_119), 0);
}}
func_976();
func_968();
func_967();
switch (Local_70.f_11){
case 0:
func_956();
break;
case 1:
func_952(0);
func_951();
if(Local_70.f_11==2){
func_927();
}
break;
case 2:
func_927();
func_923(&Local_70, &(Local_70.f_119));
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_907(&Local_70);
}
break;
case 3:
if(!func_906(Local_70.f_0)){
func_903(&Local_70, func_905(iLocal_69, Local_70.f_0));
}
func_898();
func_856();
func_855();
break;
case 4:
func_898();
func_250();
func_923(&Local_70, &(Local_70.f_119));
break;
case 5:
func_898();
Local_70.f_11=1;
break;
}}}else{
func_21(0);
}
if(func_14(&Local_70)){
func_8();
}
func_1();
}}


void func_1(){
bool bVar0;
int iVar1;
if(Local_70.f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_67[PLAYER::PLAYER_ID()]=Global_100733.f_1407[Local_70.f_0];
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_6(Local_70.f_0);
if(Local_70.f_574){
if(NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_70.f_575)){
bVar0=true;
if((!MISC::IS_BIT_SET(Global_100733.f_1407[Local_70.f_0], 0) && !MISC::IS_BIT_SET(Global_100733.f_1407[Local_70.f_0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(Local_70.f_12) || PED::IS_PED_INJURED(Local_70.f_12))){
iVar1=0;
while (iVar1 < 32){
if(func_5(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1)){
if(MISC::IS_BIT_SET(uLocal_67[iVar1], 5)){
bVar0=false;
iVar1=33;
}}
iVar1++;
}}else{
bVar0=false;
}
if(Global_2793046.f_5147){
bVar0=false;
}
func_2(Local_70.f_0, bVar0, 0, 1);
Local_70.f_574=0;
}}else{
Local_70.f_575=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
Local_70.f_574=1;
}}else{
Local_70.f_575=NETWORK::GET_NETWORK_TIME();
Local_70.f_574=1;
}}}


void func_2(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
struct<6> Var4;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(bParam1){
iVar0=1;
iVar1=0;
}else{
iVar0=0;
iVar1=1;
}
if(bParam2){
if(bParam1){
iVar0=4;
iVar1=3;
}else{
iVar0=3;
iVar1=4;
}}
iVar2=0;
while (iVar2 < 2){
iVar3=func_4(iParam0, iVar2);
if(iVar3 !=226){
Var4={
func_3(iVar3) 
};
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var4.f_5)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
OBJECT::ADD_DOOR_TO_SYSTEM(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
}}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var4.f_5)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Var4.f_5)){
if(OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var4.f_5)==iVar1){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var4.f_5, iVar0, iParam3, 1);
}}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Var4.f_5);
}}}
iVar2++;
}}


struct<7> func_3(int iParam0){
struct<7> Var0;
switch (iParam0){
case 0:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
133f, -1711f, 29f 
};
Var0.f_5=1804701345;
break;
case 1:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-1287.857f, -1115.742f, 7.1401f 
};
Var0.f_5=1403601067;
break;
case 2:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
1932.952f, 3725.154f, 32.9944f 
};
Var0.f_5=-2031139496;
break;
case 3:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
1207.873f, -470.063f, 66.358f 
};
Var0.f_5=1796834809;
break;
case 4:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-29.8692f, -148.1571f, 57.2265f 
};
Var0.f_5=96153298;
break;
case 5:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-280.7851f, 6232.782f, 31.8455f 
};
Var0.f_5=-281080954;
break;
case 6:
Var0.f_3=joaat("v_ilev_hd_door_l");
Var0={
-824f, -187f, 38f 
};
Var0={
-823.2001f, -187.0831f, 37.819f 
};
Var0.f_5=183249434;
break;
case 7:
Var0.f_3=joaat("v_ilev_hd_door_r");
Var0={
-823f, -188f, 38f 
};
Var0={
-822.4442f, -188.3924f, 37.819f 
};
Var0.f_5=758345384;
break;
case 8:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
82.3186f, -1392.752f, 29.5261f 
};
Var0.f_5=-1069262641;
break;
case 9:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
82.3186f, -1390.476f, 29.5261f 
};
Var0.f_5=1968521986;
break;
case 10:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
1686.983f, 4821.741f, 42.2131f 
};
Var0.f_5=-2143706301;
break;
case 11:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
1687.282f, 4819.484f, 42.2131f 
};
Var0.f_5=-1403421822;
break;
case 12:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
418.637f, -806.457f, 29.6396f 
};
Var0.f_5=-1950137670;
break;
case 13:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
418.637f, -808.733f, 29.6396f 
};
Var0.f_5=1226259807;
break;
case 14:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-1096.661f, 2705.446f, 19.2578f 
};
Var0.f_5=1090833557;
break;
case 15:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-1094.965f, 2706.964f, 19.2578f 
};
Var0.f_5=897332612;
break;
case 16:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
1196.825f, 2703.221f, 38.3726f 
};
Var0.f_5=1095946640;
break;
case 17:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
1199.101f, 2703.221f, 38.3726f 
};
Var0.f_5=801975945;
break;
case 18:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-818.7642f, -1079.544f, 11.4781f 
};
Var0.f_5=-167996547;
break;
case 19:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-816.7932f, -1078.406f, 11.4781f 
};
Var0.f_5=-1935818563;
break;
case 20:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-0.0564f, 6517.461f, 32.0278f 
};
Var0.f_5=1891185217;
break;
case 21:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-1.7253f, 6515.914f, 32.0278f 
};
Var0.f_5=1236591681;
break;
case 22:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
-1201.435f, -776.8566f, 17.9918f 
};
Var0.f_5=1980808685;
break;
case 23:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
617.2458f, 2751.022f, 42.7578f 
};
Var0.f_5=1352749757;
break;
case 24:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
127.8201f, -211.8274f, 55.2275f 
};
Var0.f_5=-566554453;
break;
case 25:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
-3167.75f, 1055.536f, 21.5329f 
};
Var0.f_5=1284749450;
break;
case 26:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-716.6754f, -155.42f, 37.6749f 
};
Var0.f_5=261851994;
break;
case 27:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-715.6154f, -157.2561f, 37.6749f 
};
Var0.f_5=217646625;
break;
case 28:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-157.0924f, -306.4413f, 39.994f 
};
Var0.f_5=1801139578;
break;
case 29:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-156.4022f, -304.4366f, 39.994f 
};
Var0.f_5=-2123275866;
break;
case 30:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-1454.782f, -231.7927f, 50.0565f 
};
Var0.f_5=1312689981;
break;
case 31:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-1456.201f, -233.3682f, 50.0565f 
};
Var0.f_5=-595055661;
break;
case 32:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
321.81f, 178.36f, 103.68f 
};
Var0.f_5=-265260897;
break;
case 33:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1859.89f, 3749.79f, 33.18f 
};
Var0.f_5=-1284867488;
break;
case 34:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
-289.1752f, 6199.112f, 31.637f 
};
Var0.f_5=302307081;
break;
case 35:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
-1155.454f, -1424.008f, 5.0461f 
};
Var0.f_5=-681886015;
break;
case 36:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
1321.286f, -1650.597f, 52.3663f 
};
Var0.f_5=-2086556500;
break;
case 37:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
-3167.789f, 1074.767f, 20.9209f 
};
Var0.f_5=-1496386696;
break;
case 38:
Var0.f_3=joaat("v_ilev_mm_doorm_l");
Var0={
-817f, 179f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-2097039789;
break;
case 39:
Var0.f_3=joaat("v_ilev_mm_doorm_r");
Var0={
-816f, 178f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-2127416656;
break;
case 40:
Var0.f_3=joaat("prop_ld_garaged_01");
Var0={
-815f, 186f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1986583853;
Var0.f_6=6.5f;
break;
case 41:
Var0.f_3=joaat("prop_bh1_48_backdoor_l");
Var0={
-797f, 177f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=776026812;
break;
case 42:
Var0.f_3=joaat("prop_bh1_48_backdoor_r");
Var0={
-795f, 178f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=698422331;
break;
case 43:
Var0.f_3=joaat("prop_bh1_48_backdoor_l");
Var0={
-793f, 181f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=535076355;
break;
case 44:
Var0.f_3=joaat("prop_bh1_48_backdoor_r");
Var0={
-794f, 183f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=474675599;
break;
case 45:
Var0.f_3=joaat("prop_bh1_48_gate_1");
Var0={
-849f, 179f, 70f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1978427516;
break;
case 46:
Var0.f_3=joaat("v_ilev_mm_windowwc");
Var0={
-802.7333f, 167.5041f, 77.5824f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1700375831;
break;
case 47:
Var0.f_3=joaat("v_ilev_fa_frontdoor");
Var0={
-14f, -1441f, 31f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=613961892;
break;
case 48:
Var0.f_3=joaat("v_ilev_fh_frntdoor");
Var0={
-15f, -1427f, 31f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-272570634;
break;
case 49:
Var0.f_3=joaat("prop_sc1_21_g_door_01");
Var0={
-25.28f, -1431.06f, 30.84f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1040675994;
break;
case 50:
Var0.f_3=joaat("v_ilev_fh_frontdoor");
Var0={
7.52f, 539.53f, 176.18f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=1201219326;
break;
case 51:
Var0.f_3=joaat("v_ilev_trevtraildr");
Var0={
1973f, 3815f, 34f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=1736361794;
break;
case 52:
Var0.f_3=joaat("prop_cs4_10_tr_gd_01");
Var0={
1972.787f, 3824.554f, 32.5831f 
};
Var0.f_5=1113956670;
Var0.f_6=12f;
break;
case 53:
Var0.f_3=joaat("v_ilev_trev_doorfront");
Var0={
-1150f, -1521f, 11f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1361617046;
break;
}
switch (iParam0){
case 54:
Var0.f_3=joaat("prop_com_ls_door_01");
Var0={
-1145.9f, -1991.14f, 14.18f 
};
Var0.f_5=-1871080926;
Var0.f_6=25f;
break;
case 55:
Var0.f_3=joaat("prop_id2_11_gdoor");
Var0={
723.12f, -1088.83f, 23.28f 
};
Var0.f_5=1168079979;
Var0.f_6=25f;
break;
case 56:
Var0.f_3=joaat("prop_com_ls_door_01");
Var0={
-356.09f, -134.77f, 40.01f 
};
Var0.f_5=1206354175;
Var0.f_6=25f;
break;
case 57:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
108.8502f, 6617.876f, 32.673f 
};
Var0.f_5=-1038180727;
Var0.f_6=25f;
break;
case 58:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
114.3206f, 6623.226f, 32.7161f 
};
Var0.f_5=1200466273;
Var0.f_6=25f;
break;
case 59:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
1182.305f, 2645.242f, 38.807f 
};
Var0.f_5=1391004277;
Var0.f_6=25f;
break;
case 60:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
1174.654f, 2645.242f, 38.6826f 
};
Var0.f_5=-459199009;
Var0.f_6=25f;
break;
case 225:
Var0.f_3=joaat("lr_prop_supermod_door_01");
Var0={
-205.7007f, -1310.692f, 30.2957f 
};
Var0.f_5=-288764223;
Var0.f_6=25f;
break;
case 61:
Var0.f_3=joaat("v_ilev_janitor_frontdoor");
Var0={
-107.5401f, -9.0258f, 70.6696f 
};
Var0.f_5=-252283844;
break;
case 62:
Var0.f_3=joaat("v_ilev_ss_door8");
Var0={
717f, -975f, 25f 
};
Var0.f_5=-826072862;
break;
case 63:
Var0.f_3=joaat("v_ilev_ss_door7");
Var0={
719f, -975f, 25f 
};
Var0.f_5=763780711;
break;
case 64:
Var0.f_3=joaat("v_ilev_ss_door02");
Var0={
709.9813f, -963.5311f, 30.5453f 
};
Var0.f_5=-874851305;
break;
case 65:
Var0.f_3=joaat("v_ilev_ss_door03");
Var0={
709.9894f, -960.6675f, 30.5453f 
};
Var0.f_5=-1480820165;
break;
case 66:
Var0.f_3=joaat("v_ilev_store_door");
Var0={
707.8046f, -962.4564f, 30.5453f 
};
Var0.f_5=949391213;
break;
case 67:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1393f, 3599f, 35f 
};
Var0.f_5=212192855;
break;
case 68:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1395f, 3600f, 35f 
};
Var0.f_5=-126474752;
break;
case 69:
Var0.f_3=joaat("v_ilev_ss_door04");
Var0={
1387f, 3614f, 39f 
};
Var0.f_5=1765671336;
break;
case 70:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1083.547f, -1975.435f, 31.6222f 
};
Var0.f_5=792295685;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 71:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1065.237f, -2006.079f, 32.2329f 
};
Var0.f_5=563273144;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 72:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1085.307f, -2018.561f, 41.6289f 
};
Var0.f_5=-726993043;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 73:
Var0.f_3=joaat("v_ilev_bank4door02");
Var0={
-111f, 6464f, 32f 
};
Var0.f_5=178228075;
break;
case 74:
Var0.f_3=joaat("v_ilev_bank4door01");
Var0={
-110f, 6462f, 32f 
};
Var0.f_5=1852297978;
break;
case 75:
Var0.f_3=joaat("v_ilev_lester_doorfront");
Var0={
1274f, -1721f, 55f 
};
Var0.f_5=-565026078;
break;
case 76:
Var0.f_3=joaat("v_ilev_lester_doorveranda");
Var0={
1271.89f, -1707.57f, 53.79f 
};
Var0.f_5=1646172266;
break;
case 77:
Var0.f_3=joaat("v_ilev_lester_doorveranda");
Var0={
1270.77f, -1708.1f, 53.75f 
};
Var0.f_5=204467342;
break;
case 78:
Var0.f_3=joaat("v_ilev_deviantfrontdoor");
Var0={
-127.5f, -1456.18f, 37.94f 
};
Var0.f_5=2047070410;
break;
case 79:
Var0.f_3=joaat("prop_com_gar_door_01");
Var0={
483.56f, -1316.08f, 32.18f 
};
Var0.f_5=1417775309;
break;
case 80:
Var0.f_3=joaat("v_ilev_cs_door");
Var0={
483f, -1312f, 29f 
};
Var0.f_5=-106474626;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 81:
Var0.f_3=joaat("prop_strip_door_01");
Var0={
128f, -1299f, 29f 
};
Var0.f_5=1840510598;
break;
case 82:
Var0.f_3=joaat("prop_magenta_door");
Var0={
96f, -1285f, 29f 
};
Var0.f_5=1382825971;
break;
case 83:
Var0.f_3=joaat("prop_motel_door_09");
Var0={
549f, -1773f, 34f 
};
Var0.f_5=232536303;
break;
case 84:
Var0.f_3=joaat("v_ilev_gangsafedoor");
Var0={
974f, -1839f, 36f 
};
Var0.f_5=1267246609;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 85:
Var0.f_3=joaat("v_ilev_gangsafedoor");
Var0={
977f, -105f, 75f 
};
Var0.f_5=-1900237971;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 86:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1391f, 1163f, 114f 
};
Var0.f_5=2077901353;
break;
case 87:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1391f, 1161f, 114f 
};
Var0.f_5=-2102079126;
break;
case 88:
Var0.f_3=joaat("prop_cs6_03_door_l");
Var0={
1396f, 1143f, 115f 
};
Var0.f_5=-1905793212;
break;
case 89:
Var0.f_3=joaat("prop_cs6_03_door_r");
Var0={
1396f, 1141f, 115f 
};
Var0.f_5=-1797032505;
break;
case 90:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1409f, 1146f, 114f 
};
Var0.f_5=-62235167;
break;
case 91:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1409f, 1148f, 114f 
};
Var0.f_5=-1727188163;
break;
case 92:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1408f, 1159f, 114f 
};
Var0.f_5=-562748873;
break;
case 93:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1408f, 1161f, 114f 
};
Var0.f_5=1976429759;
break;
case 94:
Var0.f_3=joaat("prop_gar_door_01");
Var0={
-1067f, -1666f, 5f 
};
Var0.f_5=1341041543;
break;
case 95:
Var0.f_3=joaat("prop_gar_door_02");
Var0={
-1065f, -1669f, 5f 
};
Var0.f_5=-1631467220;
break;
case 96:
Var0.f_3=joaat("prop_map_door_01");
Var0={
-1104.66f, -1638.48f, 4.68f 
};
Var0.f_5=-1788473129;
break;
case 97:
Var0.f_3=joaat("v_ilev_fib_door1");
Var0={
-31.72f, -1101.85f, 26.57f 
};
Var0.f_5=-1831288286;
break;
case 98:
Var0.f_3=joaat("v_ilev_tort_door");
Var0={
134.4f, -2204.1f, 7.52f 
};
Var0.f_5=963876966;
break;
case 99:
Var0.f_3=joaat("v_ilev_bl_shutter2");
Var0={
3628f, 3747f, 28f 
};
Var0.f_5=1773088812;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 100:
Var0.f_3=joaat("v_ilev_bl_shutter2");
Var0={
3621f, 3752f, 28f 
};
Var0.f_5=-1332101528;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 101:
Var0.f_3=joaat("v_ilev_rc_door3_l");
Var0={
-608.73f, -1610.32f, 27.16f 
};
Var0.f_5=-1811763714;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 102:
Var0.f_3=joaat("v_ilev_rc_door3_r");
Var0={
-611.32f, -1610.09f, 27.16f 
};
Var0.f_5=1608500665;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 103:
Var0.f_3=joaat("v_ilev_rc_door3_l");
Var0={
-592.94f, -1631.58f, 27.16f 
};
Var0.f_5=-1456048340;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 104:
Var0.f_3=joaat("v_ilev_rc_door3_r");
Var0={
-592.71f, -1628.99f, 27.16f 
};
Var0.f_5=943854909;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 105:
Var0.f_3=joaat("v_ilev_ss_door04");
Var0={
1991f, 3053f, 47f 
};
Var0.f_5=-89065356;
break;
case 106:
Var0.f_3=joaat("v_ilev_fh_door4");
Var0={
1988.353f, 3054.411f, 47.3204f 
};
Var0.f_5=-925491840;
break;
case 107:
Var0.f_3=joaat("prop_epsilon_door_l");
Var0={
-700.17f, 47.31f, 44.3f 
};
Var0.f_5=1999872275;
break;
case 108:
Var0.f_3=joaat("prop_epsilon_door_r");
Var0={
-697.94f, 48.35f, 44.3f 
};
Var0.f_5=1999872275;
break;
case 109:
Var0.f_3=joaat("v_ilev_epsstoredoor");
Var0={
241.3574f, 361.0488f, 105.8963f 
};
Var0.f_5=1538555582;
break;
case 110:
Var0.f_3=joaat("prop_ch2_09c_garage_door");
Var0={
-689.11f, 506.97f, 110.64f 
};
Var0.f_5=-961994186;
break;
case 111:
Var0.f_3=joaat("v_ilev_door_orangesolid");
Var0={
-1055.96f, -236.43f, 44.17f 
};
Var0.f_5=-1772472848;
break;
case 112:
Var0.f_3=joaat("prop_magenta_door");
Var0={
29f, 3661f, 41f 
};
Var0.f_5=-46374650;
break;
case 113:
Var0.f_3=joaat("prop_cs4_05_tdoor");
Var0={
32f, 3667f, 41f 
};
Var0.f_5=-358302761;
break;
case 114:
Var0.f_3=joaat("v_ilev_housedoor1");
Var0={
87f, -1959f, 21f 
};
Var0.f_5=-1237936041;
break;
case 115:
Var0.f_3=joaat("v_ilev_fh_frntdoor");
Var0={
0f, -1823f, 30f 
};
Var0.f_5=1487374207;
break;
case 116:
Var0.f_3=joaat("p_cut_door_03");
Var0={
23.34f, -1897.6f, 23.05f 
};
Var0.f_5=-199126299;
break;
case 117:
Var0.f_3=joaat("p_cut_door_02");
Var0={
524.2f, 3081.14f, 41.16f 
};
Var0.f_5=-897071863;
break;
case 118:
Var0.f_3=joaat("v_ilev_po_door");
Var0={
-1910.58f, -576.01f, 19.25f 
};
Var0.f_5=-864465775;
break;
case 119:
Var0.f_3=joaat("prop_ss1_10_door_l");
Var0={
-720.39f, 256.86f, 80.29f 
};
Var0.f_5=-208439480;
break;
case 120:
Var0.f_3=joaat("prop_ss1_10_door_r");
Var0={
-718.42f, 257.79f, 80.29f 
};
Var0.f_5=-1001088805;
break;
case 121:
Var0.f_3=joaat("v_ilev_fibl_door02");
Var0={
106.38f, -742.7f, 46.18f 
};
Var0.f_5=756894459;
break;
case 122:
Var0.f_3=joaat("v_ilev_fibl_door01");
Var0={
105.76f, -746.65f, 46.18f 
};
Var0.f_5=476981677;
break;
case 123:
Var0.f_3=joaat("v_ilev_ct_door01");
Var0={
-2343.53f, 3265.37f, 32.96f 
};
Var0.f_5=2081647379;
break;
case 124:
Var0.f_3=joaat("v_ilev_ct_door01");
Var0={
-2342.23f, 3267.62f, 32.96f 
};
Var0.f_5=2081647379;
break;
case 125:
Var0.f_3=joaat("ap1_02_door_l");
Var0={
-1041.933f, -2748.167f, 22.0308f 
};
Var0.f_5=169965357;
break;
case 126:
Var0.f_3=joaat("ap1_02_door_r");
Var0={
-1044.841f, -2746.489f, 22.0308f 
};
Var0.f_5=311232516;
break;
case 128:
Var0.f_3=joaat("v_ilev_fb_doorshortl");
Var0={
-1045.12f, -232.004f, 39.4379f 
};
Var0.f_5=-1563127729;
break;
case 129:
Var0.f_3=joaat("v_ilev_fb_doorshortr");
Var0={
-1046.516f, -229.3581f, 39.4379f 
};
Var0.f_5=759145763;
break;
case 130:
Var0.f_3=joaat("v_ilev_fb_door01");
Var0={
-1083.62f, -260.4167f, 38.1867f 
};
Var0.f_5=-84399179;
break;
case 131:
Var0.f_3=joaat("v_ilev_fb_door02");
Var0={
-1080.974f, -259.0204f, 38.1867f 
};
Var0.f_5=-461898059;
break;
case 127:
Var0.f_3=joaat("v_ilev_gtdoor");
Var0={
-1042.57f, -240.6f, 38.11f 
};
Var0.f_5=1259065971;
break;
case 132:
Var0.f_3=joaat("prop_damdoor_01");
Var0={
1385.258f, -2079.949f, 52.7638f 
};
Var0.f_5=-884051216;
break;
case 133:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
1656.57f, 4849.66f, 42.35f 
};
Var0.f_5=243782214;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 134:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
1656.25f, 4852.24f, 42.35f 
};
Var0.f_5=714115627;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 135:
Var0.f_3=joaat("prop_sec_barrier_ld_01a");
Var0={
-1051.402f, -474.6847f, 36.6199f 
};
Var0.f_5=1668106976;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 136:
Var0.f_3=joaat("prop_sec_barrier_ld_01a");
Var0={
-1049.285f, -476.6376f, 36.7584f 
};
Var0.f_5=1382347031;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 137:
Var0.f_3=joaat("prop_sec_barrier_ld_02a");
Var0={
-1210.957f, -580.8765f, 27.2373f 
};
Var0.f_5=-966790948;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 138:
Var0.f_3=joaat("prop_sec_barrier_ld_02a");
Var0={
-1212.445f, -578.4401f, 27.2373f 
};
Var0.f_5=-2068750132;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 139:
Var0.f_3=joaat("v_ilev_roc_door4");
Var0={
-565.1712f, 276.6259f, 83.2863f 
};
Var0.f_5=-1716533184;
break;
case 140:
Var0.f_3=joaat("v_ilev_roc_door4");
Var0={
-561.2863f, 293.5043f, 87.7771f 
};
Var0.f_5=2146505927;
break;
case 141:
Var0.f_3=joaat("p_jewel_door_l");
Var0={
-631.96f, -236.33f, 38.21f 
};
Var0.f_5=1874948872;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 142:
Var0.f_3=joaat("p_jewel_door_r1");
Var0={
-630.43f, -238.44f, 38.21f 
};
Var0.f_5=-1965020851;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 145:
Var0.f_3=joaat("prop_ld_bankdoors_01");
Var0={
231.62f, 216.23f, 106.4f 
};
Var0.f_5=1951546856;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 146:
Var0.f_3=joaat("prop_ld_bankdoors_01");
Var0={
232.72f, 213.88f, 106.4f 
};
Var0.f_5=-431382051;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 143:
Var0.f_3=joaat("hei_prop_hei_bankdoor_new");
Var0={
258.32f, 203.84f, 106.43f 
};
Var0.f_5=-293975210;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 144:
Var0.f_3=joaat("hei_prop_hei_bankdoor_new");
Var0={
260.76f, 202.95f, 106.43f 
};
Var0.f_5=-785215289;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 148:
Var0.f_3=joaat("hei_v_ilev_bk_gate_pris");
Var0={
256.31f, 220.66f, 106.43f 
};
Var0.f_5=-366143778;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 147:
Var0.f_3=joaat("v_ilev_bk_door");
Var0={
266.36f, 217.57f, 110.43f 
};
Var0.f_5=440819155;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 149:
Var0.f_3=joaat("v_ilev_shrf2door");
Var0={
-442.66f, 6015.222f, 31.8663f 
};
Var0.f_5=-588495243;
break;
case 150:
Var0.f_3=joaat("v_ilev_shrf2door");
Var0={
-444.4985f, 6017.06f, 31.8663f 
};
Var0.f_5=1815504139;
break;
case 151:
Var0.f_3=joaat("v_ilev_shrfdoor");
Var0={
1855.685f, 3683.93f, 34.5928f 
};
Var0.f_5=1344911780;
break;
case 152:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1223.35f, -172.41f, 39.98f 
};
Var0.f_5=-320891223;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 153:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1220.93f, -173.68f, 39.98f 
};
Var0.f_5=1511747875;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 154:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1211.99f, -190.57f, 39.98f 
};
Var0.f_5=-1517722103;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 155:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1213.26f, -192.98f, 39.98f 
};
Var0.f_5=-1093199712;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 156:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1217.77f, -201.54f, 39.98f 
};
Var0.f_5=1902048492;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 157:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1219.04f, -203.95f, 39.98f 
};
Var0.f_5=-444768985;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 158:
Var0.f_3=joaat("prop_ch3_04_door_01l");
Var0={
2514.32f, -317.34f, 93.32f 
};
Var0.f_5=404057594;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 159:
Var0.f_3=joaat("prop_ch3_04_door_01r");
Var0={
2512.42f, -319.26f, 93.32f 
};
Var0.f_5=-1417472813;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 160:
Var0.f_3=joaat("prop_ch3_01_trlrdoor_l");
Var0={
2333.23f, 2574.97f, 47.03f 
};
Var0.f_5=-1376084479;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 161:
Var0.f_3=joaat("prop_ch3_01_trlrdoor_r");
Var0={
2329.65f, 2576.64f, 47.03f 
};
Var0.f_5=457472151;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 162:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
16.1279f, -1114.605f, 29.9469f 
};
Var0.f_5=1071759151;
break;
case 163:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
18.572f, -1115.495f, 29.9469f 
};
Var0.f_5=-2119023917;
break;
case 165:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
1698.176f, 3751.506f, 34.8553f 
};
Var0.f_5=-1488490473;
break;
case 166:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
1699.937f, 3753.42f, 34.8553f 
};
Var0.f_5=-511187813;
break;
case 167:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
244.7274f, -44.0791f, 70.91f 
};
Var0.f_5=-248569395;
break;
case 168:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
243.8379f, -46.5232f, 70.91f 
};
Var0.f_5=989443413;
break;
case 169:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
845.3624f, -1024.539f, 28.3448f 
};
Var0.f_5=2022251829;
break;
case 170:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
842.7684f, -1024.539f, 23.3448f 
};
Var0.f_5=649820567;
break;
case 171:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-326.1122f, 6075.27f, 31.6047f 
};
Var0.f_5=537455378;
break;
case 172:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-324.273f, 6077.109f, 31.6047f 
};
Var0.f_5=1121431731;
break;
case 173:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-665.2424f, -944.3256f, 21.9792f 
};
Var0.f_5=-1437380438;
break;
case 174:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-662.6414f, -944.3256f, 21.9792f 
};
Var0.f_5=-946336965;
break;
case 175:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-1313.826f, -389.1259f, 36.8457f 
};
Var0.f_5=1893144650;
break;
case 176:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-1314.465f, -391.6472f, 36.8457f 
};
Var0.f_5=435841678;
break;
case 177:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-1114.009f, 2689.77f, 18.7041f 
};
Var0.f_5=948508314;
break;
case 178:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-1112.071f, 2691.505f, 18.7041f 
};
Var0.f_5=-1796714665;
break;
case 179:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-3164.845f, 1081.392f, 20.9887f 
};
Var0.f_5=-1155247245;
break;
case 180:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-3163.812f, 1083.778f, 20.9887f 
};
Var0.f_5=782482084;
break;
case 181:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
2570.905f, 303.3556f, 108.8848f 
};
Var0.f_5=-1194470801;
break;
case 182:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
2568.304f, 303.3556f, 108.8848f 
};
Var0.f_5=-2129698061;
break;
case 183:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
813.1779f, -2148.27f, 29.7689f 
};
Var0.f_5=1071759151;
break;
case 184:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
810.5769f, -2148.27f, 29.7689f 
};
Var0.f_5=-2119023917;
break;
case 164:
Var0.f_3=joaat("v_ilev_gc_door01");
Var0={
6.8179f, -1098.209f, 29.9469f 
};
Var0.f_5=1487704245;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 185:
Var0.f_3=joaat("v_ilev_gc_door01");
Var0={
827.5342f, -2160.493f, 29.7688f 
};
Var0.f_5=1529812051;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 186:
Var0.f_3=joaat("prop_lrggate_01c_l");
Var0={
-1107.01f, 289.38f, 64.76f 
};
Var0.f_5=904342475;
break;
case 187:
Var0.f_3=joaat("prop_lrggate_01c_r");
Var0={
-1101.62f, 290.36f, 64.76f 
};
Var0.f_5=-795418380;
break;
case 188:
Var0.f_3=joaat("prop_lrggate_01c_l");
Var0={
-1138.64f, 300.82f, 67.18f 
};
Var0.f_5=-1502457334;
break;
case 189:
Var0.f_3=joaat("prop_lrggate_01c_r");
Var0={
-1137.05f, 295.59f, 67.18f 
};
Var0.f_5=-1994188940;
break;
case 190:
Var0.f_3=joaat("v_ilev_bl_doorel_l");
Var0={
-2053.16f, 3239.49f, 30.5f 
};
Var0.f_5=-621770121;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 191:
Var0.f_3=joaat("v_ilev_bl_doorel_r");
Var0={
-2054.39f, 3237.23f, 30.5f 
};
Var0.f_5=1018580481;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 192:
Var0.f_3=joaat("v_ilev_cbankcountdoor01");
Var0={
-108.91f, 6469.11f, 31.91f 
};
Var0.f_5=421926217;
break;
case 193:
Var0.f_3=joaat("prop_fnclink_03gate5");
Var0={
-182.91f, 6168.37f, 32.14f 
};
Var0.f_5=-1331552374;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
}
switch (iParam0){
case 196:
Var0.f_3=joaat("v_ilev_csr_door_l");
Var0={
-59.89f, -1092.95f, 26.88f 
};
Var0.f_5=-293141277;
break;
case 197:
Var0.f_3=joaat("v_ilev_csr_door_r");
Var0={
-60.55f, -1094.75f, 26.89f 
};
Var0.f_5=506750037;
break;
case 194:
Var0.f_3=joaat("v_ilev_csr_door_l");
Var0={
-39.13f, -1108.22f, 26.72f 
};
Var0.f_5=1496005418;
break;
case 195:
Var0.f_3=joaat("v_ilev_csr_door_r");
Var0={
-37.33f, -1108.87f, 26.72f 
};
Var0.f_5=-1863079210;
break;
case 198:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1943.73f, 3803.63f, 32.31f 
};
Var0.f_5=-2018911784;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 199:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
316.39f, -276.49f, 54.52f 
};
Var0.f_5=-93934272;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 200:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
313.96f, -275.6f, 54.52f 
};
Var0.f_5=667682830;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 201:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
-2965.71f, 484.22f, 16.05f 
};
Var0.f_5=1876735830;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 202:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
-2965.82f, 481.63f, 16.05f 
};
Var0.f_5=-2112857171;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 205:
Var0.f_3=joaat("v_ilev_abbmaindoor");
Var0={
962.1f, -2183.83f, 31.06f 
};
Var0.f_5=2046930518;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 206:
Var0.f_3=joaat("v_ilev_abbmaindoor2");
Var0={
961.79f, -2187.08f, 31.06f 
};
Var0.f_5=1208502884;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 207:
Var0.f_3=joaat("prop_ch3_04_door_02");
Var0={
2508.43f, -336.63f, 115.76f 
};
Var0.f_5=1986432421;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 208:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2255.19f, 322.26f, 184.93f 
};
Var0.f_5=-722798986;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 209:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2254.06f, 319.7f, 184.93f 
};
Var0.f_5=204301578;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 210:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2301.13f, 336.91f, 184.93f 
};
Var0.f_5=-320140460;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 211:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2298.57f, 338.05f, 184.93f 
};
Var0.f_5=65222916;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 212:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2222.32f, 305.86f, 184.93f 
};
Var0.f_5=-920027322;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 213:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2221.19f, 303.3f, 184.93f 
};
Var0.f_5=-58432001;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 214:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2280.6f, 265.43f, 184.93f 
};
Var0.f_5=-2007378629;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 215:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2278.04f, 266.57f, 184.93f 
};
Var0.f_5=418772613;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 216:
Var0.f_3=joaat("prop_gar_door_04");
Var0={
778.31f, -1867.49f, 30.66f 
};
Var0.f_5=1679064921;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 217:
Var0.f_3=joaat("prop_gate_tep_01_l");
Var0={
-721.35f, 91.01f, 56.68f 
};
Var0.f_5=412198396;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 218:
Var0.f_3=joaat("prop_gate_tep_01_r");
Var0={
-728.84f, 88.64f, 56.68f 
};
Var0.f_5=-1053755588;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 219:
Var0.f_3=joaat("prop_artgallery_02_dr");
Var0={
-2287.62f, 363.9f, 174.93f 
};
Var0.f_5=-53446139;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 220:
Var0.f_3=joaat("prop_artgallery_02_dl");
Var0={
-2289.78f, 362.91f, 174.93f 
};
Var0.f_5=1333960556;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 221:
Var0.f_3=joaat("prop_artgallery_02_dr");
Var0={
-2289.86f, 362.88f, 174.93f 
};
Var0.f_5=-41786493;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 222:
Var0.f_3=joaat("prop_artgallery_02_dl");
Var0={
-2292.01f, 361.89f, 174.93f 
};
Var0.f_5=1750120734;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 223:
Var0.f_3=joaat("prop_fnclink_07gate1");
Var0={
1803.94f, 3929.01f, 33.72f 
};
Var0.f_5=1661506222;
break;
case 203:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
-348.81f, -47.26f, 49.39f 
};
Var0.f_5=-2116116146;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 204:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
-351.26f, -46.41f, 49.39f 
};
Var0.f_5=-74083138;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 224:
Var0.f_3=joaat("prop_abat_slide");
Var0={
962.9084f, -2105.814f, 34.6432f 
};
Var0.f_5=-1670085357;
break;
}
return Var0;
}

int func_4(int iParam0, int iParam1){
switch (iParam0){
case 0:
if(iParam1==0){
return 6;
}
if(iParam1==1){
return 7;
}
break;
case 1:
if(iParam1==0){
return 0;
}
break;
case 2:
if(iParam1==0){
return 1;
}
break;
case 3:
if(iParam1==0){
return 2;
}
break;
case 4:
if(iParam1==0){
return 3;
}
break;
case 5:
if(iParam1==0){
return 4;
}
break;
case 6:
if(iParam1==0){
return 5;
}
break;
case 7:
if(iParam1==0){
return 8;
}
if(iParam1==1){
return 9;
}
break;
case 8:
if(iParam1==0){
return 10;
}
if(iParam1==1){
return 11;
}
break;
case 9:
if(iParam1==0){
return 12;
}
if(iParam1==1){
return 13;
}
break;
case 10:
if(iParam1==0){
return 14;
}
if(iParam1==1){
return 15;
}
break;
case 11:
if(iParam1==0){
return 16;
}
if(iParam1==1){
return 17;
}
break;
case 12:
if(iParam1==0){
return 18;
}
if(iParam1==1){
return 19;
}
break;
case 13:
if(iParam1==0){
return 20;
}
if(iParam1==1){
return 21;
}
break;
case 14:
if(iParam1==0){
return 22;
}
break;
case 15:
if(iParam1==0){
return 23;
}
break;
case 16:
if(iParam1==0){
return 24;
}
break;
case 17:
if(iParam1==0){
return 25;
}
break;
case 18:
if(iParam1==0){
return 26;
}
if(iParam1==1){
return 27;
}
break;
case 19:
if(iParam1==0){
return 28;
}
if(iParam1==1){
return 29;
}
break;
case 20:
if(iParam1==0){
return 30;
}
if(iParam1==1){
return 31;
}
break;
case 22:
if(iParam1==0){
return 32;
}
break;
case 23:
if(iParam1==0){
return 33;
}
break;
case 24:
if(iParam1==0){
return 34;
}
break;
case 25:
if(iParam1==0){
return 35;
}
break;
case 26:
if(iParam1==0){
return 36;
}
break;
case 27:
if(iParam1==0){
return 37;
}
break;
case 39:
if(iParam1==0){
return 54;
}
break;
case 40:
if(iParam1==0){
return 55;
}
break;
case 41:
if(iParam1==0){
return 56;
}
break;
case 42:
if(iParam1==0){
return 58;
}
if(iParam1==1){
return 57;
}
break;
case 43:
if(iParam1==0){
return 60;
}
if(iParam1==1){
return 59;
}
break;
case 44:
if(iParam1==0){
return 225;
}
break;
case 28:
if(iParam1==0){
return 162;
}
if(iParam1==1){
return 163;
}
break;
case 29:
if(iParam1==0){
return 165;
}
if(iParam1==1){
return 166;
}
break;
case 30:
if(iParam1==0){
return 167;
}
if(iParam1==1){
return 168;
}
break;
case 31:
if(iParam1==0){
return 169;
}
if(iParam1==1){
return 170;
}
break;
case 32:
if(iParam1==0){
return 171;
}
if(iParam1==1){
return 172;
}
break;
case 33:
if(iParam1==0){
return 173;
}
if(iParam1==1){
return 174;
}
break;
case 34:
if(iParam1==0){
return 175;
}
if(iParam1==1){
return 176;
}
break;
case 35:
if(iParam1==0){
return 177;
}
if(iParam1==1){
return 178;
}
break;
case 36:
if(iParam1==0){
return 179;
}
if(iParam1==1){
return 180;
}
break;
case 37:
if(iParam1==0){
return 181;
}
if(iParam1==1){
return 182;
}
break;
case 38:
if(iParam1==0){
return 183;
}
if(iParam1==1){
return 184;
}
break;
}
return 226;
}

int func_5(int iParam0, bool bParam1, bool bParam2){
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

int func_6(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=1;
iVar2=0;
while (iVar2 < 2){
iVar1=func_7(iParam0, iVar2);
if(iVar1 !=0){
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar1)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iVar1)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(iVar1);
iVar0=0;
}}}
iVar2++;
}
return iVar0;
}

int func_7(int iParam0, int iParam1){
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 183249434;
}elseif(iParam1==1){
return 758345384;
}}
break;
case 1:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1804701345;
}}
break;
case 2:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1403601067;
}}
break;
case 3:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -2031139496;
}}
break;
case 4:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1796834809;
}}
break;
case 5:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 96153298;
}}
break;
case 6:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -281080954;
}}
break;
case 7:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1069262641;
}elseif(iParam1==1){
return 1968521986;
}}
break;
case 8:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -2143706301;
}elseif(iParam1==1){
return -1403421822;
}}
break;
case 9:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1950137670;
}elseif(iParam1==1){
return 1226259807;
}}
break;
case 10:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1090833557;
}elseif(iParam1==1){
return 897332612;
}}
break;
case 11:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1095946640;
}elseif(iParam1==1){
return 801975945;
}}
break;
case 12:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -167996547;
}elseif(iParam1==1){
return -1935818563;
}}
break;
case 13:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1891185217;
}elseif(iParam1==1){
return 1236591681;
}}
break;
case 14:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1980808685;
}}
break;
case 15:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1352749757;
}}
break;
case 16:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -566554453;
}}
break;
case 17:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1284749450;
}}
break;
case 18:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 261851994;
}elseif(iParam1==1){
return 217646625;
}}
break;
case 19:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1801139578;
}elseif(iParam1==1){
return -2123275866;
}}
break;
case 20:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1312689981;
}elseif(iParam1==1){
return -595055661;
}}
break;
case 22:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -265260897;
}}
break;
case 23:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1284867488;
}}
break;
case 24:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 302307081;
}}
break;
case 25:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -681886015;
}}
break;
case 26:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -2086556500;
}}
break;
case 27:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1496386696;
}}
break;
case 39:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1871080926;
}}elseif(iParam1==0){
return -1871080926;
}
break;
case 40:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1168079979;
}}elseif(iParam1==0){
return 1168079979;
}
break;
case 41:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1206354175;
}}elseif(iParam1==0){
return 1206354175;
}
break;
case 42:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1200466273;
}elseif(iParam1==1){
return -1038180727;
}}elseif(iParam1==0){
return 1200466273;
}elseif(iParam1==1){
return -1038180727;
}
break;
case 43:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -459199009;
}elseif(iParam1==1){
return 1391004277;
}}elseif(iParam1==0){
return -459199009;
}elseif(iParam1==1){
return 1391004277;
}
break;
case 44:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -288764223;
}}elseif(iParam1==0){
return -288764223;
}
break;
case 28:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1071759151;
}elseif(iParam1==1){
return -2119023917;
}}
break;
case 29:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1488490473;
}elseif(iParam1==1){
return -511187813;
}}
break;
case 30:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -248569395;
}elseif(iParam1==1){
return 989443413;
}}
break;
case 31:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 2022251829;
}elseif(iParam1==1){
return 649820567;
}}
break;
case 32:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 537455378;
}elseif(iParam1==1){
return 1121431731;
}}
break;
case 33:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1437380438;
}elseif(iParam1==1){
return -946336965;
}}
break;
case 34:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 1893144650;
}elseif(iParam1==1){
return 435841678;
}}
break;
case 35:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return 948508314;
}elseif(iParam1==1){
return -1796714665;
}}
break;
case 36:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1155247245;
}elseif(iParam1==1){
return 782482084;
}}
break;
case 37:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -1194470801;
}elseif(iParam1==1){
return -2129698061;
}}
break;
case 38:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==0){
return -675817295;
}elseif(iParam1==1){
return 2121442868;
}}
break;
}
return 0;
}


void func_8(){
func_21(1);
func_9(&Local_70);
}


void func_9(var uParam0){
int iVar0;
func_13(&(uParam0->f_119));
func_12(uParam0);
func_11(&(uParam0->f_239));
func_10(&(uParam0->f_187));
iVar0=0;
while (iVar0 < uParam0->f_445){
uParam0->f_445[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < uParam0->f_450){
uParam0->f_450[iVar0]=0;
iVar0++;
}}


void func_10(var uParam0){
uParam0->f_1={
0f, 0f, 0f 
};
StringCopy(&(uParam0->f_7), "", 16);
uParam0->f_31={
0f, 0f, 0f 
};
uParam0->f_34=0f;
uParam0->f_35={
0f, 0f, 0f 
};
uParam0->f_38=0f;
uParam0->f_39={
0f, 0f, 0f 
};
uParam0->f_42={
0f, 0f, 0f 
};
uParam0->f_45={
0f, 0f, 0f 
};
}


void func_11(var uParam0){
*uParam0=-1;
uParam0->f_1=-1;
uParam0->f_2=0;
uParam0->f_4=0;
}


void func_12(var uParam0){
int iVar0;
*uParam0=-1;
uParam0->f_2=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_111=0;
uParam0->f_9=0;
uParam0->f_11=0;
uParam0->f_103=0;
uParam0->f_12.f_3=0;
uParam0->f_12.f_6={
0f, 0f, 0f 
};
uParam0->f_12.f_15=0f;
uParam0->f_12.f_18={
0f, 0f, 0f 
};
uParam0->f_12.f_21=0f;
uParam0->f_12.f_22={
0f, 0f, 0f 
};
uParam0->f_12.f_25=0f;
uParam0->f_12.f_29=0;
uParam0->f_12.f_26=0;
uParam0->f_46.f_2={
0f, 0f, 0f 
};
uParam0->f_46.f_5=0f;
uParam0->f_46.f_6=0;
iVar0=0;
while (iVar0 < 4){
uParam0->f_54[iVar0 /*12*/].f_11=0;
uParam0->f_54[iVar0 /*12*/]=0;
iVar0++;
}}


void func_13(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
StringCopy(&(uParam0->f_11), "", 16);
uParam0->f_30=0;
uParam0->f_15=0;
uParam0->f_16=0;
uParam0->f_17=0;
uParam0->f_18=0;
uParam0->f_19=0;
uParam0->f_20=0;
uParam0->f_21=0;
uParam0->f_22=0;
uParam0->f_23=0;
uParam0->f_31=0;
}

int func_14(var uParam0){
if(uParam0->f_9){
if(func_15(*uParam0, 10, 1)){
return 1;
}
if(uParam0->f_1==1){
if(func_15(*uParam0, 19, 1)){
return 1;
}}
if(!Global_100733.f_16){
return 1;
}
if(Global_78558){
if(Global_1574654.f_4){
return 1;
}}elseif(uParam0->f_9 && uParam0->f_11 !=0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.278f, 25.77012f, 142.8917f, -1274.154f, 46.51249f, 62f, 0, 1, 0)){
return 1;
}}}}
return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_20()==0){
return MISC::IS_BIT_SET(func_16(func_19(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_16(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_17(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_17(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_18();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_18(){
return Global_1574918;
}

int func_19(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 12385;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
case 58:
return 11433;
break;
case 59:
return 11844;
break;
default:
break;
}
return 14192;
}

int func_20(){
return Global_32163;
}


void func_21(bool bParam0){
func_952(1);
if(Local_70.f_119.f_19){
if(func_249()){
func_247();
Global_2683864.f_785.f_33[0]=Local_70.f_503;
Global_2683864.f_785.f_33[1]=Local_70.f_119.f_3;
Global_2683864.f_785.f_39=Local_70.f_119;
Global_2683864.f_785.f_33[2]=Local_70.f_119.f_1;
Global_2683864.f_785.f_40=1;
}}
if(Local_70.f_3 !=-1){
func_245(&(Local_70.f_3));
}
func_209(&Local_70, iLocal_68);
func_208(&(Local_70.f_54));
if(Local_70.f_119.f_19){
func_179(&(Local_70.f_119), 1, 1, 1, 1);
CAM::SET_WIDESCREEN_BORDERS(0, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
func_178(0, 1, 1, 0);
func_177(1);
func_167();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_262145.f_2461){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
}}
func_164(1, Local_70.f_0);
func_159(Local_70.f_0, 0);
func_158();
Global_100733.f_1570=0;
if(!Global_78558 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_157();
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
func_34(PLAYER::PLAYER_PED_ID());
}
func_29(0);
func_28();
Local_140.f_19=0;
func_27(&Local_140, 1);
}
if(!PED::IS_PED_INJURED(Local_70.f_12)){
if(func_26(0)){
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_70.f_12, 1);
}
if(Local_70.f_10){
if(func_25(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
}else{
PED::DELETE_PED(&(Local_70.f_12));
}}elseif(bParam0){
if(func_25(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
}else{
PED::DELETE_PED(&(Local_70.f_12));
}}elseif(func_25(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
}else{
PED::SET_PED_KEEP_TASK(Local_70.f_12, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_12));
}}else{
Local_70.f_12=0;
}
if(Local_70.f_12.f_28){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_12.f_3);
Local_70.f_12.f_28=0;
}
if(!PED::IS_PED_INJURED(Local_70.f_46)){
if(Local_70.f_10){
PED::DELETE_PED(&(Local_70.f_46));
}elseif(bParam0){
PED::DELETE_PED(&(Local_70.f_46));
}else{
ENTITY::FREEZE_ENTITY_POSITION(Local_70.f_46, false);
PED::SET_PED_KEEP_TASK(Local_70.f_46, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_46));
}}else{
Local_70.f_46=0;
}
if(Local_70.f_46.f_7){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_46.f_1);
Local_70.f_46.f_7=0;
}
if(iLocal_138){
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_137);
iLocal_138=0;
}
func_23();
MISC::CLEAR_BIT(&Global_78807, 9);
if(!Global_78558 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
}
if(bParam0){
func_22("Resetting script", -1);
MISC::SET_BIT(&(Global_100733.f_1407[iLocal_68]), 11);
}else{
Global_1949779=0;
if(iLocal_68==54){
Global_1949781=-1;
AUDIO::STOP_AUDIO_SCENE("Ls_Car_Meet_Tattoo_Shop_Scene");
}
func_22("Terminating script", -1);
MISC::CLEAR_BIT(&(Global_100733.f_1407[iLocal_68]), 16);
SCRIPT::TERMINATE_THIS_THREAD();
}}


void func_22(char* sParam0, int iParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(iParam1==-1){}}


void func_23(){
func_24();
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_157)){
STREAMING::REMOVE_ANIM_DICT(sLocal_157);
}}


void func_24(){
if(iLocal_159){
STREAMING::REMOVE_ANIM_DICT(sLocal_155);
STREAMING::REMOVE_ANIM_DICT(sLocal_156);
}}

int func_25(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_100733.f_79[iParam0];
}

int func_26(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_66.f_0)){
return 1;
}elseif(bParam0){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_66.f_0);
}}}else{
return 1;
}
return 0;
}


void func_27(var uParam0, bool bParam1){
int iVar0;
var uVar1[10];
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!uParam0->f_18){
iVar2=0;
iVar3=0;
iVar2=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=0;
iVar0++;
}
iVar0=0;
iVar3=0;
while (iVar3 < iVar2){
if(iVar0 < *uParam0){
if((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], 0)){
if(PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()))){
(*uParam0)[iVar0]=uVar1[iVar3];
uParam0->f_5[iVar0 /*3*/]={
ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1) 
};
iVar0++;
}}}
iVar3++;
}
uParam0->f_18=1;
}
iVar0=0;
while (iVar0 < *uParam0){
if((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], 0)){
if(uParam0->f_19){
ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false, 0);
if(bParam1){
ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], false, 0);
ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], true);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
}}elseif(!ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iVar0])){
ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], true, 0);
if(bParam1){
ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], true, 0);
ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], false);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
}}}
iVar0++;
}}}


void func_28(){
int iVar0;
iVar0=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2)){
iVar0=Local_71.f_2;
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 1, 0);
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 0, 0);
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 4, 0);
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 5, 0);
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 2, 0);
PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 3, 0);
}}


void func_29(bool bParam0){
if(!bParam0 && Global_97990){
Global_97607=1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_30();
}}
Global_97990=bParam0;
}


void func_30(){
if(!Global_1666878){
func_31(1);
Global_1666877=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), Global_262145.f_2421);
}}


void func_31(int iParam0){
Global_1666884=iParam0;
func_32(139, iParam0, -1, 1);
}


void func_32(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_33()){
iVar0=Global_2848282[iParam0 /*3*/][func_17(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_33(){
return 1;
return 0;
}


void func_34(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
if(Global_78558){
func_50(&iParam0, -1, 0, 0);
}else{
func_35(iParam0);
}}}


void func_35(int iParam0){
bool bVar0;
int iVar1;
bool bVar2;
struct<6> Var3;
bVar0=func_47(iParam0);
if(func_46(bVar0) && !PED::IS_PED_INJURED(iParam0)){
PED::CLEAR_PED_DECORATIONS(iParam0);
iVar1=0;
while (iVar1 < 4){
bVar2=false;
while (bVar2 < 32){
if(MISC::IS_BIT_SET(Global_113648.f_2365.f_493[bVar0 /*15*/].f_10[iVar1], bVar2)){
if(func_36(&Var3, func_45(iVar1, bVar2), func_44(bVar0), iParam0, -1)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
}}
bVar2++;
}
iVar1++;
}}}


bool func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
func_43(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam3);
}
switch (iParam2){
case 0:
switch (iParam1){
case 0:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
break;
case 1:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
break;
case 2:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
break;
case 3:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
break;
case 4:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
break;
case 5:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
break;
case 6:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
break;
case 7:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
break;
case 8:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
break;
case 9:
if(func_42() || func_41()){
iVar1=400;
if(func_40() && (func_39() || func_38())){
iVar1=0;
}
func_43(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
}
break;
case 10:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
break;
case 11:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
break;
case 12:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
break;
case 13:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
break;
case 14:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
break;
case 15:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
break;
case 16:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
break;
case 17:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
break;
case 18:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
break;
case 19:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
break;
case 20:
func_43(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
break;
default:
func_37(sParam0, iParam2, iParam1, 21);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_42() || func_41()){
iVar1=450;
if(func_40() && (func_39() || func_38())){
iVar1=0;
}
func_43(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
}
break;
case 1:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
break;
case 2:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
break;
case 3:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
break;
case 4:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
break;
case 5:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
break;
case 6:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
break;
case 7:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
break;
case 8:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
break;
case 9:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
break;
case 10:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
break;
case 11:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
break;
case 12:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
break;
case 13:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
break;
case 14:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
break;
case 15:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
break;
case 16:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
break;
case 17:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
break;
case 18:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
break;
case 19:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
break;
case 20:
break;
case 21:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
break;
case 22:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
break;
case 23:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
break;
case 24:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
break;
case 25:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
break;
case 26:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
break;
case 27:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
break;
case 28:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
break;
case 29:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
break;
case 30:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
break;
case 31:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
break;
case 32:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
break;
case 33:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
break;
case 34:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
break;
case 35:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
break;
case 36:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
break;
case 37:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
break;
case 38:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
break;
case 39:
func_43(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
break;
default:
func_37(sParam0, iParam2, iParam1, 40);
break;
}
break;
case 2:
switch (iParam1){
case 0:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
break;
case 1:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
break;
case 2:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
break;
case 3:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
break;
case 4:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
break;
case 5:
if(func_42() || func_41()){
iVar1=380;
if(func_40() && (func_39() || func_38())){
iVar1=0;
}
func_43(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
}
break;
case 6:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
break;
case 7:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
break;
case 8:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
break;
case 9:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
break;
case 10:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
break;
case 11:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
break;
case 12:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
break;
case 13:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
break;
case 14:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
break;
case 15:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
break;
case 16:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
break;
case 17:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
break;
case 18:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
break;
case 19:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
break;
case 20:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
break;
case 21:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
break;
case 22:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
break;
case 23:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
break;
case 24:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
break;
case 25:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
break;
case 26:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
break;
case 27:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
break;
case 28:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
break;
case 29:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
break;
case 30:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
break;
case 31:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
break;
case 32:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
break;
case 33:
func_43(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
break;
default:
func_37(sParam0, iParam2, iParam1, 34);
break;
}
break;
case 3:
case 4:
switch (iParam1){
case 0:
func_43(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2917)), 0);
break;
case 1:
func_43(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2918)), 2);
break;
case 2:
func_43(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2919)), 3);
break;
case 3:
func_43(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2920)), 0);
break;
case 4:
func_43(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2921)), 0);
break;
case 54:
func_43(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2922)), 1);
break;
case 5:
func_43(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2923)), 0);
break;
case 6:
func_43(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2924)), 2);
break;
case 55:
func_43(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2925)), 1);
break;
case 7:
func_43(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2926)), 0);
break;
case 8:
func_43(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2927)), 7);
break;
case 9:
func_43(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2928)), 0);
break;
case 10:
func_43(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2929)), 0);
break;
case 11:
func_43(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2930)), 0);
break;
case 56:
func_43(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2931)), 1);
break;
case 12:
func_43(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2932)), 2);
break;
case 57:
func_43(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2933)), 1);
break;
case 58:
func_43(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2934)), 1);
break;
case 59:
func_43(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2935)), 1);
break;
case 60:
func_43(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 1);
break;
case 17:
func_43(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2941)), 2);
break;
case 18:
func_43(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2942)), 2);
break;
case 19:
func_43(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2943)), 2);
break;
case 20:
func_43(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2944)), 3);
break;
case 21:
func_43(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2945)), 3);
break;
case 22:
func_43(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2946)), 3);
break;
case 23:
func_43(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2947)), 3);
break;
case 24:
func_43(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2948)), 3);
break;
case 25:
func_43(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2949)), 2);
break;
case 26:
func_43(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2950)), 3);
break;
case 27:
func_43(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2951)), 3);
break;
case 28:
func_43(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2952)), 3);
break;
case 61:
func_43(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2953)), 1);
break;
case 62:
func_43(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2954)), 1);
break;
case 63:
func_43(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2955)), 1);
break;
case 64:
func_43(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2956)), 1);
break;
case 65:
func_43(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2957)), 1);
break;
case 29:
func_43(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2958)), 0);
break;
case 30:
func_43(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2959)), 0);
break;
case 31:
func_43(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2960)), 0);
break;
case 66:
func_43(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2961)), 1);
break;
case 32:
func_43(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2962)), 2);
break;
case 33:
func_43(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2963)), 3);
break;
case 34:
func_43(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2964)), 2);
break;
case 35:
func_43(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2965)), 0);
break;
case 36:
func_43(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2966)), 0);
break;
case 37:
func_43(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2967)), 0);
break;
case 38:
func_43(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2968)), 3);
break;
case 39:
func_43(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2969)), 2);
break;
case 40:
func_43(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2970)), 0);
break;
case 67:
func_43(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2971)), 1);
break;
case 41:
func_43(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2972)), 2);
break;
case 68:
func_43(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2973)), 1);
break;
case 42:
func_43(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2974)), 0);
break;
case 43:
func_43(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2975)), 2);
break;
case 44:
func_43(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2976)), 0);
break;
case 45:
func_43(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2977)), 0);
break;
case 46:
func_43(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2978)), 0);
break;
case 47:
func_43(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2979)), 3);
break;
case 48:
func_43(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2980)), 3);
break;
case 49:
func_43(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2981)), 3);
break;
case 50:
func_43(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2982)), 2);
break;
case 51:
func_43(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2983)), 3);
break;
case 52:
func_43(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2984)), 3);
break;
case 53:
func_43(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2985)), 0);
break;
case 69:
func_43(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2986)), 1);
break;
case 70:
func_43(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2987)), 2);
break;
}
if(iVar0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 73:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
break;
case 86:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
break;
case 90:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
break;
case 91:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
break;
case 124:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
break;
case 125:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_43(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_43(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2938)), 0);
break;
case 15:
func_43(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_43(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2940)), 0);
break;
case 71:
func_43(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
case 72:
func_43(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}elseif(iVar0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 73:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
break;
case 92:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 118:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 119:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 120:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 121:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 122:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_43(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_43(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_43(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2938)), 0);
break;
case 15:
func_43(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_43(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}
break;
}
if((iParam2==3 || iParam2==4) && iParam1 >=129){
func_37(sParam0, iParam2, iParam1, 129);
}
if(iParam4==22){
sParam0->f_7 *=2;
}
return sParam0->f_11 !=-1;
}


void func_37(char* sParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
struct<8> Var2;
iVar0=(iParam2 - iParam3);
iVar1=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
if(iVar1 > 0 && iVar0 < iVar1){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0)){
sParam0->f_11=iParam2;
MemCopy(sParam0,{
Var2.f_7
}
, 4);
sParam0->f_5=Var2.f_3;
sParam0->f_4=Var2.f_2;
sParam0->f_8=Var2.f_6;
sParam0->f_6=iParam1;
sParam0->f_7=Var2.f_4;
sParam0->f_9=(iParam2 / 32);
sParam0->f_10=(iParam2 % 32);
sParam0->f_12=Var2.f_5;
}}}}

int func_38(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
var uVar4;
if(MISC::IS_BIT_SET(Global_25, 5)){
if(MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 5)){
if(MISC::IS_BIT_SET(uVar0, 1) || MISC::IS_BIT_SET(uVar0, 3)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 5)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 1) || MISC::IS_BIT_SET(uVar3, 3)){
return 1;
}}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar4, -1);
MISC::SET_BIT(&uVar4, true);
MISC::SET_BIT(&uVar4, 3);
MISC::SET_BIT(&uVar4, 5);
MISC::SET_BIT(&Global_25, true);
MISC::SET_BIT(&Global_25, 3);
MISC::SET_BIT(&Global_25, 5);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar4, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar4=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar4, true);
MISC::SET_BIT(&iVar4, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
}
return 1;
}}}
return 0;
}

int func_39(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
if(MISC::IS_BIT_SET(Global_25, 6)){
if(MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 6)){
if(MISC::IS_BIT_SET(uVar0, 2) || MISC::IS_BIT_SET(uVar0, 4)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 8)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 2) || MISC::IS_BIT_SET(uVar3, 4)){
return 1;
}}
return 0;
}

int func_40(){
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

int func_41(){
return 1;
}

int func_42(){
return 1;
}


void func_43(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9){
char cVar0[32];
sParam0->f_11=iParam1;
StringCopy(sParam0, sParam3, 16);
sParam0->f_4=MISC::GET_HASH_KEY(sParam4);
sParam0->f_5=MISC::GET_HASH_KEY(sParam5);
sParam0->f_8=MISC::GET_HASH_KEY(sParam6);
sParam0->f_6=iParam7;
sParam0->f_7=iParam8;
sParam0->f_9=(iParam1 / 32);
sParam0->f_10=(iParam1 % 32);
sParam0->f_12=iParam9;
if(ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2)){
if((sParam0->f_6==0 || sParam0->f_6==1) || sParam0->f_6==2){
}elseif(sParam0->f_6==3 || sParam0->f_6==4){
StringCopy(&cVar0, "", 32);
if(((((sParam0->f_11==13 || sParam0->f_11==14) || sParam0->f_11==15) || sParam0->f_11==16) || sParam0->f_11==71) || sParam0->f_11==72){
StringConCat(&cVar0, "FM_", 32);
StringConCat(&cVar0, "CREW_", 32);
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01")){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}elseif(MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay")){
StringCopy(&cVar0, sParam5, 32);
}else{
if(((((((((((((((((((sParam0->f_11==0 || sParam0->f_11==1) || sParam0->f_11==2) || sParam0->f_11==4) || sParam0->f_11==3) || sParam0->f_11==54) || sParam0->f_11==5) || sParam0->f_11==6) || sParam0->f_11==55) || sParam0->f_11==7) || sParam0->f_11==8) || sParam0->f_11==9) || sParam0->f_11==10) || sParam0->f_11==11) || sParam0->f_11==56) || sParam0->f_11==12) || sParam0->f_11==57) || sParam0->f_11==58) || sParam0->f_11==59) || sParam0->f_11==60){
StringConCat(&cVar0, "FM_Tat_Award_", 32);
}else{
StringConCat(&cVar0, "FM_Tat_", 32);
}
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01") || sParam0->f_11==20){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}
sParam0->f_5=MISC::GET_HASH_KEY(&cVar0);
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5)==7){
sParam0->f_11=-1;
}}}}

int func_44(bool bParam0){
switch (bParam0){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
}
return 0;
}

int func_45(int iParam0, bool bParam1){
if(iParam0 < 0 || iParam0 > 3){}
if(bParam1 < 0 || bParam1 > 31){}
return (iParam0 * 32 + bParam1);
}


bool func_46(bool bParam0){
return bParam0 < 3;
}

int func_47(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_48(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_48(int iParam0){
if(func_46(iParam0)){
return func_49(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__49(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_50(var uParam0, int iParam1, bool bParam2, bool bParam3){
struct<9> Var0;
int iVar1;
bool bVar2;
bool bVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
struct<8> Var8;
int iVar9;
if(iParam1==-1){
iParam1=func_18();
}
if(!bParam3){
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*uParam0);
}
iVar1=func_156(*uParam0);
bVar2=func_150(*uParam0, 0);
bVar3=func_142(*uParam0);
bVar4=func_141(*uParam0, -1);
if(!bParam2){
if(func_61(*uParam0)){
bParam2=true;
}}
if(bParam2){
bVar3=true;
}
iVar5=0;
while (iVar5 < 127){
if(func_55(iVar5, iParam1)){
if(func_36(&Var0, iVar5, iVar1, *uParam0, -1)){
if(func_52(*uParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4)){
if(!bParam3){
PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var0.f_4, Var0.f_5);
}}}}
iVar5++;
}
if(func_55(123, -1)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7){
if(!bParam3){
PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
}}}
iVar7=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
iVar6=0;
while (iVar6 < iVar7){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0)){
iVar9=(129 + iVar6);
if(func_55(iVar9, iParam1)){
if(func_52(*uParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4)){
if(!bParam3){
PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var8.f_2, Var8.f_3);
func_51(*uParam0, Var8.f_2, Var8.f_3);
}}}}}
iVar6++;
}}


void func_51(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 1841427399:
switch (iParam2){
case -507124931:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, -435695677);
break;
case -2045170715:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, 1684098164);
break;
}
break;
case joaat("mpsecurity_overlays"):
switch (iParam2){
case -1698823936:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), -1282588017);
break;
case 543067199:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), 884393080);
break;
}
break;
case joaat("mptuner_overlays"):
switch (iParam2){
case -129339642:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1959383570);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 887263619:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -598443208:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1160700813);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -619123295:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -2139930425:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 991513037:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case -675149090:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case 2021781367:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1625184579);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -436866133:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case 457275657:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 429414924);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -250832592:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -798760789:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -1634791241:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
case -1227437948:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
}
break;
case joaat("mpheist4_overlays"):
switch (iParam2){
case joaat("MP_Heist4_Tee_039_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
break;
case joaat("MP_Heist4_Tee_041_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
break;
case joaat("MP_Heist4_Tee_043_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
break;
case joaat("MP_Heist4_Tee_039_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
break;
case joaat("MP_Heist4_Tee_041_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
break;
case joaat("MP_Heist4_Tee_043_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
break;
case joaat("MP_Heist4_Tee_049_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
break;
case joaat("MP_Heist4_Tee_051_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
break;
case joaat("MP_Heist4_Tee_055_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
break;
case joaat("MP_Heist4_Tee_057_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
break;
case joaat("MP_Heist4_Tee_059_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
break;
case joaat("MP_Heist4_Tee_061_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
break;
case joaat("MP_Heist4_Tee_063_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
break;
case joaat("MP_Heist4_Tee_065_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
break;
}
break;
case joaat("mpVinewood_overlays"):
switch (iParam2){
case joaat("CasinoTop_M_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
break;
case joaat("CasinoTop_M_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
break;
case joaat("CasinoTop_M_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
break;
case joaat("CasinoTop_M_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
break;
case joaat("CasinoTop_M_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
break;
case joaat("CasinoTop_M_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
break;
case joaat("CasinoTop_M_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
break;
case joaat("CasinoTop_M_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
break;
case joaat("CasinoTop_M_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
break;
case joaat("CasinoTop_M_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
break;
case joaat("CasinoTop_M_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
break;
case joaat("CasinoTop_M_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
break;
case joaat("CasinoTop_M_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
break;
case joaat("CasinoTop_M_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
break;
case joaat("CasinoTop_M_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
break;
case joaat("CasinoTop_M_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
case joaat("CasinoTop_M_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
}
switch (iParam2){
case joaat("CasinoTop_F_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
break;
case joaat("CasinoTop_F_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
break;
case joaat("CasinoTop_F_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
break;
case joaat("CasinoTop_F_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
break;
case joaat("CasinoTop_F_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
break;
case joaat("CasinoTop_F_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
break;
case joaat("CasinoTop_F_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
break;
case joaat("CasinoTop_F_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
break;
case joaat("CasinoTop_F_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
break;
case joaat("CasinoTop_F_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
break;
case joaat("CasinoTop_F_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
break;
case joaat("CasinoTop_F_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
break;
case joaat("CasinoTop_F_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
break;
case joaat("CasinoTop_F_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
break;
case joaat("CasinoTop_F_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
break;
case joaat("CasinoTop_F_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
case joaat("CasinoTop_F_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam2){
case joaat("MP_Battle_Clothing_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
break;
}
switch (iParam2){
case joaat("MP_Battle_Clothing_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
break;
}
break;
case joaat("mpSmuggler_overlays"):
switch (iParam2){
case joaat("M_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
break;
case joaat("M_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
break;
case joaat("M_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
break;
case joaat("M_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
break;
case joaat("M_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
break;
case joaat("M_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
break;
case joaat("M_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
break;
case joaat("M_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
break;
case joaat("M_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
break;
case joaat("M_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
break;
case joaat("M_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
break;
case joaat("M_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
break;
case joaat("M_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
break;
case joaat("M_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
break;
case joaat("M_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
break;
case joaat("M_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
break;
case joaat("M_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
break;
case joaat("M_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
break;
case joaat("M_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
break;
}
switch (iParam2){
case joaat("F_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
break;
case joaat("F_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
break;
case joaat("F_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
break;
case joaat("F_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
break;
case joaat("F_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
break;
case joaat("F_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
break;
case joaat("F_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
break;
case joaat("F_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
break;
case joaat("F_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
break;
case joaat("F_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
break;
case joaat("F_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
break;
case joaat("F_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
break;
case joaat("F_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
break;
case joaat("F_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
break;
case joaat("F_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
break;
case joaat("F_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
break;
case joaat("F_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
break;
case joaat("F_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
break;
case joaat("F_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam2){
case joaat("MP_Gunrunning_Award_020_M_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_F_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam2){
case joaat("MP_Securoserv_000_Mb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
break;
case joaat("MP_Securoserv_000_Fb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam2){
case joaat("MP_Elite_M_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
break;
case joaat("MP_Elite_F_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam2){
case joaat("MP_LUXE_TAT_029_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
break;
case joaat("MP_LUXE_TAT_029_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
break;
}
break;
}}

int func_52(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam4==0){
iVar1=func_54(iVar0, sParam1, iParam4);
iParam4=MISC::GET_HASH_KEY(func_53(iVar1));
}
if(iParam3==449512698){
return 0;
}
switch (iParam4){
case joaat("CHEST_FULL"):
case joaat("CHEST_LEFT"):
case joaat("CHEST_MID"):
case joaat("CHEST_RIGHT"):
case joaat("CHEST_STOM"):
case joaat("CHEST_STOM_FULL"):
case joaat("SIDE_RIGHT"):
case joaat("TORSO_SIDE_LEFT"):
case joaat("TORSO_SIDE_RIGHT"):
case -1238079313:
case joaat("STOMACH_FULL"):
case joaat("STOMACH_LEFT"):
case joaat("STOMACH_LOWER_LEFT"):
case joaat("STOMACH_LOWER_RIGHT"):
case 1361645381:
case joaat("STOMACH_RIGHT"):
if(bParam5){
return 0;
}
if((((iParam4==joaat("CHEST_FULL") || (iParam4==joaat("CHEST_MID") && iVar0==joaat("mp_f_freemode_01"))) || iParam4==joaat("CHEST_RIGHT")) || iParam4==joaat("CHEST_STOM")) || iParam4==joaat("CHEST_STOM_FULL")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
return 0;
}elseif(func_55(14, -1)){
return 0;
}elseif(func_55(15, -1)){
return 0;
}elseif(func_55(16, -1)){
return 0;
}elseif(func_55(71, -1)){
return 0;
}elseif(func_55(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("CHEST_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
return 0;
}elseif(func_55(14, -1)){
return 0;
}elseif(func_55(15, -1)){
return 0;
}elseif(func_55(16, -1)){
return 0;
}elseif(func_55(71, -1)){
return 0;
}elseif(func_55(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif((iParam4==joaat("STOMACH_FULL") || iParam4==1361645381) || iParam4==joaat("STOMACH_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
}elseif(func_55(14, -1)){
return 0;
}elseif(func_55(15, -1)){
return 0;
}elseif(func_55(16, -1)){
}elseif(func_55(71, -1)){
return 0;
}elseif(func_55(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("BACK_UPPER")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
}elseif(func_55(14, -1)){
}elseif(func_55(15, -1)){
}elseif(func_55(16, -1)){
}elseif(func_55(71, -1)){
}elseif(func_55(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case 1484379715:
case joaat("BACK_FULL"):
case joaat("BACK_FULL_ARMS_FULL_BACK"):
case joaat("BACK_FULL_SHORT"):
case joaat("BACK_LOWER"):
case joaat("BACK_MID"):
case joaat("BACK_UPPER"):
case joaat("BACK_UPPER_LEFT"):
case joaat("BACK_UPPER_RIGHT"):
if(bParam8){
return 0;
}
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
}
elseif(func_55(14, -1)){
}
elseif(func_55(15, -1)){
return 0;
}
elseif(func_55(16, -1)){
}
elseif(func_55(71, -1)){
}
elseif(func_55(72, -1)){
return 0;
}}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
return 0;
}}
break;
case 1019352240:
if(bParam8){
if(iVar0==joaat("mp_m_freemode_01")){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(15, -1)){
return 0;
}
}}elseif(Global_4540628==15){
return 0;
}}}
if(bParam6){
return 0;
}
if(bParam5){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
return 0;
}
elseif(func_55(14, -1)){
return 0;
}
elseif(func_55(15, -1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}
}
elseif(func_55(16, -1)){
}
elseif(func_55(71, -1)){
}
elseif(func_55(72, -1)){
}}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}
break;
case 0:
case 2:
case joaat("rank"):
if(bParam5){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
switch (MISC::GET_HASH_KEY(sParam1)){
case joaat("TAT_FM_011"):
case joaat("TAT_FM_012"):
case joaat("TAT_FM_019"):
case joaat("TAT_FM_020"):
case joaat("TAT_FM_021"):
case joaat("TAT_FM_218"):
case joaat("TAT_FM_219"):
case joaat("TAT_FM_220"):
case joaat("TAT_FM_225"):
case joaat("TAT_FM_226"):
case joaat("TAT_FM_230"):
case joaat("TAT_FM_233"):
case joaat("TAT_FM_235"):
case joaat("TAT_FM_237"):
case joaat("TAT_FM_245"):
return 0;
break;
}}}
if(iVar0==joaat("mp_m_freemode_01")){
}elseif(iVar0==joaat("mp_f_freemode_01")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_55(13, -1)){
}elseif(func_55(14, -1)){
}elseif(func_55(15, -1)){
}elseif(func_55(16, -1)){
}elseif(func_55(71, -1)){
}elseif(func_55(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case joaat("torsoDecal"):
if(bParam7){
return 0;
}
break;
}
return 1;
}


char* func_53(int iParam0){
switch (iParam0){
case 0:
return "ARM_LEFT_FULL_SLEEVE";
break;
case 1:
return "ARM_LEFT_SHORT_SLEEVE";
break;
case 2:
return "ARM_LEFT_LOWER_SLEEVE";
break;
case 3:
return "ARM_LEFT_LOWER_INNER";
break;
case 4:
return "ARM_LEFT_LOWER_OUTER";
break;
case 5:
return "ARM_LEFT_WRIST";
break;
case 6:
return "ARM_LEFT_UPPER_SLEEVE";
break;
case 7:
return "ARM_LEFT_UPPER_TRICEP";
break;
case 8:
return "ARM_LEFT_UPPER_SIDE";
break;
case 9:
return "ARM_LEFT_UPPER_BICEP";
break;
case 10:
return "ARM_LEFT_SHOULDER";
break;
case 11:
return "ARM_LEFT_ELBOW";
break;
case 12:
return "ARM_RIGHT_FULL_SLEEVE";
break;
case 13:
return "ARM_RIGHT_SHORT_SLEEVE";
break;
case 14:
return "ARM_RIGHT_LOWER_SLEEVE";
break;
case 15:
return "ARM_RIGHT_LOWER_INNER";
break;
case 16:
return "ARM_RIGHT_LOWER_OUTER";
break;
case 17:
return "ARM_RIGHT_WRIST";
break;
case 18:
return "ARM_RIGHT_UPPER_SLEEVE";
break;
case 19:
return "ARM_RIGHT_UPPER_TRICEP";
break;
case 20:
return "ARM_RIGHT_UPPER_SIDE";
break;
case 21:
return "ARM_RIGHT_UPPER_BICEP";
break;
case 22:
return "ARM_RIGHT_SHOULDER";
break;
case 23:
return "ARM_RIGHT_ELBOW";
break;
case 24:
return "HAND_LEFT";
break;
case 25:
return "HAND_RIGHT";
break;
case 26:
return "BACK_FULL";
break;
case 27:
return "BACK_FULL_ARMS_FULL_BACK";
break;
case 28:
return "BACK_FULL_SHORT";
break;
case 29:
return "BACK_MID";
break;
case 30:
return "BACK_UPPER";
break;
case 31:
return "BACK_UPPER_LEFT";
break;
case 32:
return "BACK_UPPER_RIGHT";
break;
case 33:
return "BACK_LOWER";
break;
case 34:
return "BACK_LOWER_LEFT";
break;
case 35:
return "BACK_LOWER_MID";
break;
case 36:
return "BACK_LOWER_RIGHT";
break;
case 37:
return "CHEST_FULL";
break;
case 38:
return "CHEST_STOM";
break;
case 39:
return "CHEST_STOM_FULL";
break;
case 40:
return "CHEST_LEFT";
break;
case 41:
return "CHEST_UPPER_LEFT";
break;
case 42:
return "CHEST_RIGHT";
break;
case 43:
return "CHEST_UPPER_RIGHT";
break;
case 44:
return "CHEST_MID";
break;
case 45:
return "TORSO_SIDE_RIGHT";
break;
case 46:
return "TORSO_SIDE_LEFT";
break;
case 47:
return "STOMACH_FULL";
break;
case 48:
return "STOMACH_UPPER";
break;
case 49:
return "STOMACH_UPPER_LEFT";
break;
case 50:
return "STOMACH_UPPER_RIGHT";
break;
case 51:
return "STOMACH_LOWER";
break;
case 52:
return "STOMACH_LOWER_LEFT";
break;
case 53:
return "STOMACH_LOWER_RIGHT";
break;
case 54:
return "STOMACH_LEFT";
break;
case 55:
return "STOMACH_RIGHT";
break;
case 56:
return "FACE";
break;
case 57:
return "HEAD_LEFT";
break;
case 58:
return "HEAD_RIGHT";
break;
case 59:
return "NECK_FRONT";
break;
case 60:
return "NECK_BACK";
break;
case 61:
return "NECK_LEFT_FULL";
break;
case 62:
return "NECK_LEFT_BACK";
break;
case 63:
return "NECK_RIGHT_FULL";
break;
case 64:
return "NECK_RIGHT_BACK";
break;
case 65:
return "LEG_LEFT_FULL_SLEEVE";
break;
case 66:
return "LEG_LEFT_FULL_FRONT";
break;
case 67:
return "LEG_LEFT_FULL_BACK";
break;
case 68:
return "LEG_LEFT_UPPER_SLEEVE";
break;
case 69:
return "LEG_LEFT_UPPER_FRONT";
break;
case 70:
return "LEG_LEFT_UPPER_BACK";
break;
case 71:
return "LEG_LEFT_UPPER_OUTER";
break;
case 72:
return "LEG_LEFT_UPPER_INNER";
break;
case 73:
return "LEG_LEFT_LOWER_SLEEVE";
break;
case 74:
return "LEG_LEFT_LOWER_FRONT";
break;
case 75:
return "LEG_LEFT_LOWER_BACK";
break;
case 76:
return "LEG_LEFT_LOWER_OUTER";
break;
case 77:
return "LEG_LEFT_LOWER_INNER";
break;
case 78:
return "LEG_LEFT_KNEE";
break;
case 79:
return "LEG_LEFT_ANKLE";
break;
case 80:
return "LEG_LEFT_CALF";
break;
case 81:
return "LEG_RIGHT_FULL_SLEEVE";
break;
case 82:
return "LEG_RIGHT_FULL_FRONT";
break;
case 83:
return "LEG_RIGHT_FULL_BACK";
break;
case 84:
return "LEG_RIGHT_UPPER_SLEEVE";
break;
case 85:
return "LEG_RIGHT_UPPER_FRONT";
break;
case 86:
return "LEG_RIGHT_UPPER_BACK";
break;
case 87:
return "LEG_RIGHT_UPPER_OUTER";
break;
case 88:
return "LEG_RIGHT_UPPER_INNER";
break;
case 89:
return "LEG_RIGHT_LOWER_SLEEVE";
break;
case 90:
return "LEG_RIGHT_LOWER_FRONT";
break;
case 91:
return "LEG_RIGHT_LOWER_BACK";
break;
case 92:
return "LEG_RIGHT_LOWER_OUTER";
break;
case 93:
return "LEG_RIGHT_LOWER_INNER";
break;
case 94:
return "LEG_RIGHT_KNEE";
break;
case 95:
return "LEG_RIGHT_ANKLE";
break;
case 96:
return "LEG_RIGHT_CALF";
break;
case 97:
return "FOOT_LEFT";
break;
case 98:
return "FOOT_RIGHT";
break;
}
return "";
}

int func_54(int iParam0, char* sParam1, int iParam2){
switch (iParam2){
case 1019352240:
case 2140335355:
case joaat("torsoDecal"):
return -1;
break;
}
switch (iParam2){
case joaat("ARM_LEFT_FULL_SLEEVE"):
return 0;
break;
case joaat("ARM_LEFT_SHORT_SLEEVE"):
return 1;
break;
case joaat("ARM_LEFT_LOWER_SLEEVE"):
return 2;
break;
case joaat("ARM_LEFT_LOWER_INNER"):
return 3;
break;
case joaat("ARM_LEFT_LOWER_OUTER"):
return 4;
break;
case joaat("ARM_LEFT_WRIST"):
return 5;
break;
case joaat("ARM_LEFT_UPPER_SLEEVE"):
return 6;
break;
case joaat("ARM_LEFT_UPPER_TRICEP"):
return 7;
break;
case joaat("ARM_LEFT_UPPER_SIDE"):
return 8;
break;
case joaat("ARM_LEFT_UPPER_BICEP"):
return 9;
break;
case joaat("ARM_LEFT_SHOULDER"):
return 10;
break;
case joaat("ARM_LEFT_ELBOW"):
return 11;
break;
case joaat("ARM_RIGHT_FULL_SLEEVE"):
return 12;
break;
case joaat("ARM_RIGHT_SHORT_SLEEVE"):
return 13;
break;
case joaat("ARM_RIGHT_LOWER_SLEEVE"):
return 14;
break;
case joaat("ARM_RIGHT_LOWER_INNER"):
return 15;
break;
case joaat("ARM_RIGHT_LOWER_OUTER"):
return 16;
break;
case joaat("ARM_RIGHT_WRIST"):
return 17;
break;
case joaat("ARM_RIGHT_UPPER_SLEEVE"):
return 18;
break;
case joaat("ARM_RIGHT_UPPER_TRICEP"):
return 19;
break;
case joaat("ARM_RIGHT_UPPER_SIDE"):
return 20;
break;
case joaat("ARM_RIGHT_UPPER_BICEP"):
return 21;
break;
case joaat("ARM_RIGHT_SHOULDER"):
return 22;
break;
case joaat("ARM_RIGHT_ELBOW"):
return 23;
break;
case joaat("HAND_LEFT"):
return 24;
break;
case joaat("HAND_RIGHT"):
return 25;
break;
case joaat("BACK_FULL"):
return 26;
break;
case joaat("BACK_FULL_ARMS_FULL_BACK"):
return 27;
break;
case joaat("BACK_FULL_SHORT"):
return 28;
break;
case joaat("BACK_MID"):
return 29;
break;
case joaat("BACK_UPPER"):
return 30;
break;
case joaat("BACK_UPPER_LEFT"):
return 31;
break;
case joaat("BACK_UPPER_RIGHT"):
return 32;
break;
case joaat("BACK_LOWER"):
return 33;
break;
case joaat("BACK_LOWER_LEFT"):
return 34;
break;
case joaat("BACK_LOWER_MID"):
return 35;
break;
case joaat("BACK_LOWER_RIGHT"):
return 36;
break;
case joaat("CHEST_FULL"):
return 37;
break;
case joaat("CHEST_STOM"):
return 38;
break;
case joaat("CHEST_STOM_FULL"):
return 39;
break;
case joaat("CHEST_LEFT"):
return 40;
break;
case joaat("CHEST_UPPER_LEFT"):
return 41;
break;
case joaat("CHEST_RIGHT"):
return 42;
break;
case joaat("CHEST_UPPER_RIGHT"):
return 43;
break;
case joaat("CHEST_MID"):
return 44;
break;
case joaat("TORSO_SIDE_RIGHT"):
return 45;
break;
case joaat("TORSO_SIDE_LEFT"):
return 46;
break;
case joaat("STOMACH_FULL"):
return 47;
break;
case joaat("STOMACH_UPPER"):
return 48;
break;
case joaat("STOMACH_UPPER_LEFT"):
return 49;
break;
case joaat("STOMACH_UPPER_RIGHT"):
return 50;
break;
case joaat("STOMACH_LOWER"):
return 51;
break;
case joaat("STOMACH_LOWER_LEFT"):
return 52;
break;
case joaat("STOMACH_LOWER_RIGHT"):
return 53;
break;
case joaat("STOMACH_LEFT"):
return 54;
break;
case joaat("STOMACH_RIGHT"):
return 55;
break;
case joaat("FACE"):
return 56;
break;
case joaat("HEAD_LEFT"):
return 57;
break;
case joaat("HEAD_RIGHT"):
return 58;
break;
case joaat("NECK_FRONT"):
return 59;
break;
case joaat("NECK_BACK"):
return 60;
break;
case joaat("NECK_LEFT_FULL"):
return 61;
break;
case joaat("NECK_LEFT_BACK"):
return 62;
break;
case joaat("NECK_RIGHT_FULL"):
return 63;
break;
case joaat("NECK_RIGHT_BACK"):
return 64;
break;
case joaat("LEG_LEFT_FULL_SLEEVE"):
return 65;
break;
case joaat("LEG_LEFT_FULL_FRONT"):
return 66;
break;
case joaat("LEG_LEFT_FULL_BACK"):
return 67;
break;
case joaat("LEG_LEFT_UPPER_SLEEVE"):
return 68;
break;
case joaat("LEG_LEFT_UPPER_FRONT"):
return 69;
break;
case joaat("LEG_LEFT_UPPER_BACK"):
return 70;
break;
case joaat("LEG_LEFT_UPPER_OUTER"):
return 71;
break;
case joaat("LEG_LEFT_UPPER_INNER"):
return 72;
break;
case joaat("LEG_LEFT_LOWER_SLEEVE"):
return 73;
break;
case joaat("LEG_LEFT_LOWER_FRONT"):
return 74;
break;
case joaat("LEG_LEFT_LOWER_BACK"):
return 75;
break;
case joaat("LEG_LEFT_LOWER_OUTER"):
return 76;
break;
case joaat("LEG_LEFT_LOWER_INNER"):
return 77;
break;
case joaat("LEG_LEFT_KNEE"):
return 78;
break;
case joaat("LEG_LEFT_ANKLE"):
return 79;
break;
case joaat("LEG_LEFT_CALF"):
return 80;
break;
case joaat("LEG_RIGHT_FULL_SLEEVE"):
return 81;
break;
case joaat("LEG_RIGHT_FULL_FRONT"):
return 82;
break;
case joaat("LEG_RIGHT_FULL_BACK"):
return 83;
break;
case joaat("LEG_RIGHT_UPPER_SLEEVE"):
return 84;
break;
case joaat("LEG_RIGHT_UPPER_FRONT"):
return 85;
break;
case joaat("LEG_RIGHT_UPPER_BACK"):
return 86;
break;
case joaat("LEG_RIGHT_UPPER_OUTER"):
return 87;
break;
case joaat("LEG_RIGHT_UPPER_INNER"):
return 88;
break;
case joaat("LEG_RIGHT_LOWER_SLEEVE"):
return 89;
break;
case joaat("LEG_RIGHT_LOWER_FRONT"):
return 90;
break;
case joaat("LEG_RIGHT_LOWER_BACK"):
return 91;
break;
case joaat("LEG_RIGHT_LOWER_OUTER"):
return 92;
break;
case joaat("LEG_RIGHT_LOWER_INNER"):
return 93;
break;
case joaat("LEG_RIGHT_KNEE"):
return 94;
break;
case joaat("LEG_RIGHT_ANKLE"):
return 95;
break;
case joaat("LEG_RIGHT_CALF"):
return 96;
break;
case joaat("FOOT_LEFT"):
return 97;
break;
case joaat("FOOT_RIGHT"):
return 98;
break;
}
switch (MISC::GET_HASH_KEY(sParam1)){
case 1948764112:
return -1;
break;
case joaat("TAT_FM_204"):
return 12;
break;
case joaat("TAT_FM_205"):
return 12;
break;
case joaat("TAT_FM_209"):
if(iParam0==joaat("mp_m_freemode_01")){
return 75;
}else{
return 65;
}
break;
case joaat("TAT_FM_221"):
return 26;
break;
case joaat("TAT_FM_219"):
return 47;
break;
case joaat("TAT_FM_201"):
return 1;
break;
case joaat("TAT_FM_222"):
return 75;
break;
case joaat("TAT_FM_202"):
return 1;
break;
case joaat("TAT_FM_210"):
return 89;
break;
case joaat("TAT_FM_211"):
return 73;
break;
case joaat("TAT_FM_247"):
return 22;
break;
case joaat("TAT_FM_223"):
return 91;
break;
case joaat("TAT_FM_213"):
return 26;
break;
case joaat("TAT_FM_224"):
return 73;
break;
case joaat("TAT_FM_225"):
return 38;
break;
case joaat("TAT_FM_218"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_214"):
return 31;
break;
case joaat("TAT_FM_226"):
return 42;
break;
case joaat("TAT_FM_220"):
return 47;
break;
case joaat("TAT_FM_227"):
return 75;
break;
case joaat("TAT_FM_228"):
return 20;
break;
case joaat("TAT_FM_215"):
return 32;
break;
case joaat("TAT_FM_229"):
return 14;
break;
case joaat("TAT_FM_230"):
return 52;
break;
case joaat("TAT_FM_231"):
return 30;
break;
case joaat("TAT_FM_232"):
return 6;
break;
case joaat("TAT_FM_233"):
return 80;
break;
case joaat("TAT_FM_207"):
return 13;
break;
case joaat("TAT_FM_234"):
if(iParam0==joaat("mp_m_freemode_01")){
return 67;
}else{
return 75;
}
break;
case joaat("TAT_FM_235"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_236"):
return 73;
break;
case joaat("TAT_FM_237"):
return 47;
break;
case joaat("TAT_FM_238"):
return 73;
break;
case joaat("TAT_FM_203"):
return 10;
break;
case joaat("TAT_FM_216"):
return 26;
break;
case joaat("TAT_FM_011"):
return 42;
break;
case joaat("TAT_FM_212"):
return 89;
break;
case joaat("TAT_FM_239"):
return 16;
break;
case joaat("TAT_FM_240"):
return 91;
break;
case joaat("TAT_FM_241"):
return 82;
break;
case joaat("TAT_FM_208"):
return 13;
break;
case joaat("TAT_FM_017"):
return 75;
break;
case joaat("TAT_FM_217"):
return 26;
break;
case joaat("TAT_FM_242"):
return 10;
break;
case joaat("TAT_FM_243"):
return 90;
break;
case joaat("TAT_FM_244"):
return 89;
break;
case joaat("TAT_FM_245"):
return 38;
break;
case joaat("TAT_FM_010"):
return 20;
break;
case joaat("TAT_FM_246"):
return 26;
break;
case joaat("TAT_FM_206"):
return 18;
break;
case joaat("TAT_FM_008"):
return 56;
break;
case joaat("TAT_FM_009"):
return 3;
break;
case joaat("TAT_FM_012"):
return 47;
break;
case joaat("TAT_FM_013"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_014"):
return 89;
break;
case joaat("TAT_FM_015"):
return 6;
break;
case joaat("TAT_FM_016"):
return 33;
break;
case joaat("TAT_FM_018"):
return 16;
break;
case joaat("TAT_FM_019"):
return 40;
break;
case joaat("TAT_FM_020"):
return 40;
break;
case joaat("TAT_FM_021"):
return 40;
break;
case joaat("TAT_FM_022"):
return 33;
break;
case joaat("TAT_FM_023"):
return 6;
break;
case joaat("TAT_FM_024"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_025"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_026"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_027"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case -1516865571:
return 44;
break;
case 2130586285:
return 32;
break;
case 386521802:
return 3;
break;
case 579924440:
return 33;
break;
case 741770527:
return 31;
break;
case 1173403795:
return 33;
break;
case -569087776:
return 45;
break;
case -1344959389:
return 89;
break;
case -211217527:
return 64;
break;
case 86488838:
return 53;
break;
case 705494964:
return 52;
break;
case -137684175:
return 30;
break;
case -979388709:
return 41;
break;
case 324653646:
return 43;
break;
case -518820414:
return 52;
break;
case -1361737401:
return 20;
break;
case 2010946386:
return 8;
break;
case -894811920:
return 10;
break;
case 165068612:
return 28;
break;
case 1549427782:
return 40;
break;
case -927613913:
return 42;
break;
case 385144996:
return 56;
break;
case -814626401:
return 57;
break;
case -1248225809:
return 52;
break;
case 1910378101:
return 8;
break;
case -2124501642:
return 91;
break;
case -1943747838:
return 20;
break;
case -1570115700:
return 75;
break;
case 931699147:
return 62;
break;
case 1019520067:
return 63;
break;
case joaat("TORSO_P2_4_4"):
return 20;
break;
case joaat("TORSO_P2_4_5"):
return 58;
break;
case joaat("TORSO_P2_4_6"):
return 47;
break;
case -1628534963:
return 37;
break;
case -1051898870:
return 33;
break;
case 1334929540:
return 80;
break;
case 1097124907:
return 64;
break;
case 747545215:
return 62;
break;
case 61892743:
return 96;
break;
case 501548332:
return 15;
break;
case -244169717:
return 48;
break;
case 421886905:
return 37;
break;
case -1398791504:
return 33;
break;
case -106152761:
return 3;
break;
case 125491300:
return 41;
break;
case -1576950557:
return 52;
break;
case -1815115649:
return 53;
break;
case -1043396870:
return 59;
break;
case -1388618285:
return 3;
break;
case -948484638:
return 48;
break;
case 643387405:
return 33;
break;
case 979630098:
return 64;
break;
case 211688583:
return 62;
break;
case 1343791995:
return 60;
break;
case 576309246:
return 20;
break;
case 949154944:
return 40;
break;
case -622511834:
return 42;
break;
case -275651969:
return 11;
break;
case -1256283855:
return 15;
break;
case 955525350:
return 40;
break;
case 1252641873:
return 22;
break;
case -2034766264:
return 40;
break;
case 1748021562:
return 22;
break;
case -657146050:
return 30;
break;
case -955835485:
return 19;
break;
case -1269959119:
return 40;
break;
case -1478763187:
return 4;
break;
case -1881592504:
return 15;
break;
case 2115996117:
return 62;
break;
case 1824417551:
return 45;
break;
case 1502068898:
return 24;
break;
case -2019287742:
return 22;
break;
case -1780827729:
return 80;
break;
case -1966497207:
return 25;
break;
case -2126999769:
return 30;
break;
case 2014772448:
return 30;
break;
case 1705760778:
return 44;
break;
case 497993745:
return 15;
break;
case 1142887665:
return 9;
break;
case 22777707:
return 3;
break;
case 799173624:
return 16;
break;
case -410297401:
return 17;
break;
case 214410819:
return 75;
break;
case -2098342992:
return 23;
break;
case -1280920283:
return 64;
break;
case -1501455653:
return 16;
break;
case 2117454408:
return 25;
break;
case -1945704982:
return 32;
break;
case -1581870771:
return 31;
break;
case -1350521631:
return 10;
break;
case -954508266:
return 5;
break;
case -716244867:
return 4;
break;
case 185361399:
return 52;
break;
case -1208107213:
return 35;
break;
case -812421538:
return 30;
break;
case -566096965:
return 32;
break;
case -316757644:
return 38;
break;
case -103496992:
return 24;
break;
case 391708136:
return 52;
break;
case 616667309:
return 20;
break;
case 870102755:
return 10;
break;
case 1093030262:
return 92;
break;
case 1378218869:
return 0;
break;
case 332555747:
return 80;
break;
case 1077526193:
return 34;
break;
case 1332632858:
return 91;
break;
case 1556379590:
return 10;
break;
case 1780093553:
return 22;
break;
case 2001284303:
return 14;
break;
case -2059941716:
return 30;
break;
case -1759875983:
return 40;
break;
case -1521153818:
return 24;
break;
}
if(iParam2==0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return -1;
}
switch (iParam2){
case joaat("rank"):
return -1;
break;
}
return -1;
}

int func_55(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_57(iParam0, iParam1);
iVar1=func_56(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}

int func_56(int iParam0){
return (iParam0 % 32);
}

int func_57(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_59(iParam0);
if(iVar0==14192){
if(func_20()==2 && func_58()==2){
return 0;
}else{
return 0;
}}
iVar1=func_16(iVar0, iParam1, 0);
return iVar1;
}

int func_58(){
return Global_32164;
}

int func_59(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_60(iVar0);
if((func_20()==0 || func_58()==0) || (func_20()==999 && func_58()==999)){
switch (iVar1){
case 0:
return 1049;
break;
case 1:
return 1050;
break;
case 2:
return 1051;
break;
case 3:
return 1052;
break;
case 4:
return 1053;
break;
case 5:
return 1054;
break;
case 6:
return 1488;
break;
case 7:
return 1489;
break;
case 8:
return 1490;
break;
case 9:
return 1491;
break;
case 10:
return 1949;
break;
case 11:
return 1950;
break;
case 12:
return 1951;
break;
case 13:
return 2425;
break;
case 14:
return 2445;
break;
case 15:
return 2448;
break;
case 16:
return 2451;
break;
case 17:
return 2615;
break;
case 18:
return 2618;
break;
case 19:
return 2621;
break;
case 20:
return 3787;
break;
case 21:
return 3790;
break;
case 22:
return 3865;
break;
case 23:
return 3868;
break;
case 24:
return 3871;
break;
case 25:
return 3874;
break;
case 26:
return 5365;
case 27:
return 5368;
break;
case 28:
return 5470;
break;
case 29:
return 5473;
break;
case 30:
return 6432;
break;
case 31:
return 6435;
break;
case 32:
return 7256;
break;
case 33:
return 7259;
break;
case 34:
return 7262;
break;
case 35:
return 7971;
break;
case 36:
return 7974;
break;
case 37:
return 7977;
break;
case 38:
return 7980;
break;
case 39:
return 8502;
break;
case 40:
return 8505;
break;
case 41:
return 8508;
break;
case 42:
return 8511;
break;
case 43:
return 8907;
break;
case 44:
return 8910;
break;
case 45:
return 8913;
break;
case 46:
return 10288;
break;
case 47:
return 10291;
break;
case 48:
return 10414;
break;
case 49:
return 10417;
break;
case 50:
return 11825;
break;
case 51:
return 11828;
break;
case 52:
break;
}
return 14192;
}
if(func_20()==2 && func_58()==2){
return 14192;
}
return 14192;
}

int func_60(int iParam0){
return (iParam0 / 32);
}

int func_61(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_140() && func_138(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar1=func_66(iParam0, 11, -1);
if(iVar1 >=237){
iVar2=func_62(joaat("mp_m_freemode_01"), iVar1, 11, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_11"), 0)){
return 1;
}elseif((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 83294665, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_27"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_1"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("x17_draw_6"), 0)){
return 1;
}}}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_140() && func_138(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar3=func_66(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_62(joaat("mp_f_freemode_01"), iVar3, 11, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
return 1;
}elseif((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
return 1;
}}}}}
return 0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_65(iParam0));
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
iVar4=(iParam1 - func_63(iParam0, func_64(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_64(iParam2));
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

int func_63(int iParam0, int iParam1){
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

int func_64(int iParam0){
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

int func_65(int iParam0){
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

int func_66(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_75(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_75(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_69(iParam0, iParam2);
}}else{
return func_67(iParam0, iParam1);
}}
return -99;
}

int func_67(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_64(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_68(iParam0, iVar1, iVar2, iParam1);
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_64(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}

int func_69(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_74(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_70(iParam0, iVar0, iVar1, iParam1);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_74(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_72(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_72(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
}}
iVar2=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
iVar4=0;
while (iVar4 <=(iVar2 - 1)){
iVar6=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
if(iVar4 !=iParam1){
iVar3=(iVar3 + iVar6);
}else{
iVar5=0;
while (iVar5 <=(iVar6 - 1)){
if(iVar4==iParam1 && iVar5==iParam2){
iVar3=(iVar3 + func_71(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_74(iParam3);
}

int func_71(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(uParam0);
switch (iVar0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 58;
break;
case 2:
return 112;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 82;
break;
case 2:
return 158;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 88;
break;
case 2:
return 154;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
}
return -99;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_73(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_65(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_64(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_63(iParam0, func_64(iParam2)) + iVar4);
}}
return -99;
}

int func_73(int iParam0){
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

int func_74(int iParam0){
switch (iParam0){
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
}
return 0;
}

int func_75(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
int iVar10;
var uVar11;
int iVar12;
int iVar13;
var uVar14;
var uVar15;
int iVar16;
struct<5> Var17;
var uVar18;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_91(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_87(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 < 7){
switch (iVar7){
case 0:
iVar4=1;
break;
case 1:
iVar4=4;
break;
case 2:
iVar4=6;
break;
case 3:
iVar4=7;
break;
case 4:
iVar4=8;
break;
case 5:
iVar4=11;
break;
case 6:
iVar4=13;
break;
}
if(uVar8[iVar4] !=-99){
if(!func_75(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_84(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_75(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78341[2 /*14*/]={
func_91(iVar0, 14, iVar6, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar5){
if(func_75(iParam0, 14, iVar6)){
if(!func_79(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}
}
}
iVar6++;
}}
iVar5++;
}}else{
iVar1=func_67(iParam0, iVar4);
Global_78341[2 /*14*/]={
func_91(iVar0, iVar4, iVar1, -1) 
};
if(!func_79(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_16(1759, Global_78338, 0) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_84(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_75(iParam0, 14, uVar11[iVar10])){
return 0;
}
iVar10++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}
if(((Global_78341[1 /*14*/].f_12==0 && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("helmet"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
iVar16=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
iVar12=0;
while (iVar12 < iVar16){
FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
if(iVar13 !=0 && iVar13 !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&Var17);
FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
if(Var17.f_3==PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1) && Var17.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)){
return 1;
}}
iVar12++;
}}}else{
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_64(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_64(iParam1))){
return 1;
}
if(iParam1==4){
Global_78340++;
if(Global_78340==1){
if(func_78(iVar0, 11, func_67(iParam0, 11), -1)){
if(func_77(iVar0, 4, iParam2, &uVar18)){
return func_75(iParam0, 4, uVar18);
}}elseif(func_76(iVar0, 4, iParam2, &uVar18)){
return func_75(iParam0, 4, uVar18);
}}
Global_78340=(Global_78340 - 1);
}}
return 0;
}

int func_76(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_62(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_72(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_62(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_72(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
var uVar0;
int iVar1;
if((*uParam4)[iParam2]==iParam3){
return 1;
}
if(((*uParam4)[iParam2]==-99 && iParam2 !=14) && iParam2 !=13){
return 1;
}
if(iParam2==13 || (iParam2==14 && (*uParam4)[13]==31)){
if((((((((iParam3==0 || iParam3==1) || iParam3==2) || iParam3==3) || iParam3==4) || iParam3==5) || iParam3==6) || iParam3==7) || iParam3==8){
return 1;
}}
if(iParam3==-99 || uParam5->f_1==-1){
return 1;
}
if(iParam2==14){
uVar0={
func_84(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_83(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_82(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_81(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=0){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_80(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_82(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_81(iParam0, iParam2, iParam3, -1)){
if((((iParam1==3 || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
if(iParam2==8){
if(iParam3==9){
if(iParam1==8 || iParam1==21){
return 1;
}}else{
return 0;
}}else{
return 0;
}}
if(iParam2==8){
if((*uParam4)[8] !=26){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=5 && iParam3 <=10){
return 0;
}}}elseif(iParam2==14){
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=26 && iParam3 <=39){
return 0;
}}}
return 1;
}elseif(func_80(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==3 || iParam1==3) || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
return 0;
}
return 1;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==2){
if(iParam2==14 && iParam3==0){
return 1;
}}
if(func_82(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_81(iParam0, iParam2, iParam3, -1)){
if(((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==45) || iParam1==12){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=15){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_80(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 14:
if(iParam2==16){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 14:
if((iParam2==40 || (iParam2 >=41 && iParam2 <=56)) || (iParam2 >=64 && iParam2 <=79)){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 14:
if((iParam2 >=17 && iParam2 <=18) || (iParam2 >=71 && iParam2 <=86)){
return 1;
}
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_62(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_62(iParam0, iParam2, 1, 3), -1842686353, 0));
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_62(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_62(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam0==joaat("player_zero")){
if(iParam1==6){
if(iParam2==10){
return 1;
}}elseif(iParam1==8){
if((iParam2==9 || iParam2==7) || iParam2==23){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=9 && iParam2 <=14){
return 1;
}}elseif(iParam1==14){
if((((((((((((((((iParam2==12 || iParam2==59) || iParam2==60) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37) || iParam2==38) || iParam2==39) || iParam2==40) || iParam2==41) || (iParam2 >=42 && iParam2 <=44)) || iParam2==54) || iParam2==55){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==2){
if(iParam2==20){
return 1;
}}elseif(iParam1==8){
if((iParam2==3 || iParam2==5) || iParam2==9){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=5 && iParam2 <=10){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==82 || iParam2==10) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || (iParam2 >=37 && iParam2 <=39)){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==8){
if(iParam2==14 || iParam2==7){
return 1;
}}elseif(iParam1==9){
if(((iParam2==8 || (iParam2 >=9 && iParam2 <=14)) || iParam2==15) || iParam2==16){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==88 || iParam2==12) || iParam2==47) || iParam2==48) || iParam2==49) || iParam2==50) || iParam2==51) || iParam2==52) || iParam2==53) || iParam2==54) || iParam2==55) || iParam2==56) || iParam2==57) || (iParam2 >=58 && iParam2 <=60)){
return 1;
}}}elseif(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 1, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==14){
if((((((((iParam2==58 || iParam2==61) || (iParam2 >=62 && iParam2 <=69)) || (iParam2 >=70 && iParam2 <=79)) || (iParam2 >=80 && iParam2 <=89)) || iParam2==90) || (iParam2 >=91 && iParam2 <=102)) || (iParam2 >=103 && iParam2 <=110)) || iParam2==111){
return 1;
}}
break;
case joaat("player_one"):
if(iParam1==14){
if(((((((((((iParam2 >=83 && iParam2 <=92) || iParam2==93) || iParam2==94) || (iParam2 >=95 && iParam2 <=101)) || (iParam2 >=102 && iParam2 <=111)) || (iParam2 >=112 && iParam2 <=121)) || (iParam2 >=122 && iParam2 <=131)) || (iParam2 >=132 && iParam2 <=139)) || (iParam2 >=140 && iParam2 <=149)) || (iParam2 >=150 && iParam2 <=156)) || iParam2==157){
return 1;
}}
break;
case joaat("player_two"):
if(iParam1==14){
if(((((((((iParam2==89 || (iParam2 >=90 && iParam2 <=99)) || (iParam2 >=100 && iParam2 <=109)) || iParam2==111) || iParam2==112) || (iParam2 >=113 && iParam2 <=122)) || (iParam2 >=123 && iParam2 <=132)) || (iParam2 >=133 && iParam2 <=142)) || (iParam2 >=143 && iParam2 <=152)) || iParam2==153){
return 1;
}}
break;
case joaat("mp_m_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 14, 3);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_62(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_83(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==15){
return 1;
}
break;
case 9:
if(iParam2==6){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==4){
return 1;
}
break;
}
break;
}
return 0;
}


struct<10> func_84(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_86(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_86(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_86(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_86(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_86(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_86(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_86(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_86(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_86(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_85(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_86(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_86(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_86(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_86(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_86(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_86(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_86(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_86(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_85(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_86(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_86(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_86(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_86(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_86(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_86(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_86(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_86(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_85(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_86(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_86(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_86(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_86(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_86(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_86(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_86(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_86(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_86(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_86(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_86(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_86(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_86(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_86(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_86(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_86(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_86(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_86(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_86(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_86(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_86(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_86(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_86(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_86(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_86(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_85(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_86(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_86(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_86(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_86(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_86(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_86(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_86(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_86(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_86(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_86(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_86(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_86(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_86(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_86(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_86(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_86(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_86(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_86(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_86(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_86(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_86(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_85(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_85(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var2;
int iVar3;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar3=0;
while (iVar3 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 !=-1){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
(*iParam0)[Var2.f_2]=func_72(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_87(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]){
func_90(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_90(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_90(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_90(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_90(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_90(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_90(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_90(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_90(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_90(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_90(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_90(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_90(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_90(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_90(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_90(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_90(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_90(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_90(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_90(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_90(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_90(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_90(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_90(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_90(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_90(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_90(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_90(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_90(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_90(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_90(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_90(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_90(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_90(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_90(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_90(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_90(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_90(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_90(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_90(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_90(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_90(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_90(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_90(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_90(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_90(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_90(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_90(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_90(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_90(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_90(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_90(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_90(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_90(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_88(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_90(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_90(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_90(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_90(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_90(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_90(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_90(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_90(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_90(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_90(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_90(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_90(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_90(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_90(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_90(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_90(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_90(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_90(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_90(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_90(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_90(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_90(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_90(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_90(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_90(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_90(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_90(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_90(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_90(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_90(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_90(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_90(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_90(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_90(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_90(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_90(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_90(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_90(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_90(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_90(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_90(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_90(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_90(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_90(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_90(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_90(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_90(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_88(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_90(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_90(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_90(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_90(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_90(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_90(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_90(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_90(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_90(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_90(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_90(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_90(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_90(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_90(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_90(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_90(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_90(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_90(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_90(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_90(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_90(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_90(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_90(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_90(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_90(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_90(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_90(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_90(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_90(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_90(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_90(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_90(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_90(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_90(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_90(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_90(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_90(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_90(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_90(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_90(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_90(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_90(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_90(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_90(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_90(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_90(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_90(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_90(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_88(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_90(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_90(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_90(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_90(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_90(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_90(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_90(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_90(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_90(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_90(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_90(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_90(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_90(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_90(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_90(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_90(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_90(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_90(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_90(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_90(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_90(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_90(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_90(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_90(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_90(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_90(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_88(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_90(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_90(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_90(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_90(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_90(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_90(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_90(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_90(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_90(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_90(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_90(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_90(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_90(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_90(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_90(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_90(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_90(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_90(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_90(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_90(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_90(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_90(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_90(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_90(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_90(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_90(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_90(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_90(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_88(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_88(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var2;
struct<2> Var3;
int iVar4;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar4=0;
while (iVar4 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2)){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
if(Var2.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
if(Var2.f_0 !=Var3.f_1){
uParam0->f_16=1;
}}
if(Var2.f_2==10 && uParam0->f_16){
(*uParam0)[func_89(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_89(Var2.f_2)]=func_72(iParam1, Var2.f_0, func_89(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_89(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_89(int iParam0){
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


void func_90(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}
struct<14> func_91(int iParam0, int iParam1, int iParam2, int iParam3){
func_137();
if(iParam0==joaat("mp_m_freemode_01")){
func_121(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_92(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_92(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_120(iParam1, iParam2);
break;
case 11:
func_119(iParam1, iParam2);
break;
case 8:
func_115(iParam1, iParam2);
break;
case 9:
func_114(iParam1, iParam2);
break;
case 3:
func_113(iParam1, iParam2);
break;
case 4:
func_112(iParam1, iParam2);
break;
case 6:
func_111(iParam1, iParam2);
break;
case 1:
func_110(iParam1, iParam2);
break;
case 7:
func_109(iParam1, iParam2);
break;
case 10:
func_108(iParam1, iParam2);
break;
case 14:
func_107(iParam1, iParam2);
break;
case 12:
func_106(iParam1, iParam2);
break;
case 5:
func_105(iParam1, iParam2);
break;
case 0:
func_103(iParam1, iParam2);
break;
case 13:
func_93(iParam1);
break;
}}


void func_93(int iParam0){
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_94(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
var uVar0;
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
uParam0->f_12=func_102(iParam8);
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
if(func_101(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_99(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_99(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_99(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_99(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_99(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_99(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_98(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_98(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_98(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_101(14)){
return;
}
uVar0=func_16(func_97(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_16(func_96(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_95(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_16(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
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


bool func_95(int iParam0, int iParam1, var uParam2){
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

int func_96(int iParam0, int iParam1){
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

int func_97(int iParam0, int iParam1){
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

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
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

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_100(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_16(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_100(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


bool func_101(int iParam0){
return Global_43257==iParam0;
}

int func_102(int iParam0){
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


void func_103(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_104(iVar0, iParam0, 0, iParam1);
}


void func_104(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_94(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_94(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 1, -1, -1);
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
func_94(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_94(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_64(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_94(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_105(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_106(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_107(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_108(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_109(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 55, iParam1);
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_110(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 26, iParam1);
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_111(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_112(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_113(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 16, iParam1);
return;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_114(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 36, iParam1);
return;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_115(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_116(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_116(87, -1)){
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_116(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_118(iParam0)==14192){
return 0;
}
uVar0=func_117(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_56(iVar1));
}


var func__117(var uParam0, int iParam1){
var uVar0;
uVar0=func_16(func_118(uParam0), iParam1, 0);
return uVar0;
}

int func_118(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_60(iVar0);
if((func_20()==0 || func_58()==0) || (func_20()==999 && func_58()==999)){
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


void func_119(int iParam0, int iParam1){
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
if(func_116(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_116(87, -1)){
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
func_104(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_120(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_121(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_136(iParam1, iParam2);
break;
case 11:
func_135(iParam1, iParam2);
break;
case 8:
func_134(iParam1, iParam2);
break;
case 9:
func_133(iParam1, iParam2);
break;
case 3:
func_132(iParam1, iParam2);
break;
case 4:
func_131(iParam1, iParam2);
break;
case 6:
func_130(iParam1, iParam2);
break;
case 1:
func_129(iParam1, iParam2);
break;
case 7:
func_128(iParam1, iParam2);
break;
case 10:
func_127(iParam1, iParam2);
break;
case 14:
func_126(iParam1, iParam2);
break;
case 12:
func_125(iParam1, iParam2);
break;
case 5:
func_124(iParam1, iParam2);
break;
case 0:
func_123(iParam1, iParam2);
break;
case 13:
func_122(iParam1);
break;
}}


void func_122(int iParam0){
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_123(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_104(iVar0, iParam0, 0, iParam1);
}


void func_124(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_125(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_126(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_21));
}}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_127(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_128(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 92, iParam1);
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_129(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 26, iParam1);
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
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_130(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_17));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_131(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_15));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_132(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_133(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_134(int iParam0, int iParam1){
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
if(func_116(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_116(87, -1)){
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
func_104(iVar7, iParam0, 241, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_135(int iParam0, int iParam1){
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
if(func_116(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_296940.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_16));
}elseif(iParam0==28){
if(func_116(87, -1)){
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
func_104(iVar7, iParam0, 237, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_136(int iParam0, int iParam1){
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
func_104(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_94(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_137(){
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


var func__138(int iParam0){
return func_139(iParam0, 10);
}


var func__139(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_140(){
return -1;
}

int func_141(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=func_16(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0 > 15){
iVar3=func_66(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_62(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Heist4_Tee_039_M"):
case joaat("MP_Heist4_Tee_041_M"):
case joaat("MP_Heist4_Tee_043_M"):
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_065_M"):
case -129339642:
case 887263619:
case -598443208:
case -619123295:
case -2139930425:
case 991513037:
case -675149090:
case -507124931:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
iVar2=func_16(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0==3){
if(iVar1==14){
return 1;
}}elseif(iVar0 > 15){
iVar5=func_66(iParam0, 11, -1);
if(iVar5 >=256){
iVar6=func_62(joaat("mp_f_freemode_01"), iVar5, 11, 4);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_F_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_F"):
case joaat("MP_Heist4_Tee_039_F"):
case joaat("MP_Heist4_Tee_041_F"):
case joaat("MP_Heist4_Tee_043_F"):
case joaat("MP_Heist4_Tee_049_F"):
case joaat("MP_Heist4_Tee_051_F"):
case joaat("MP_Heist4_Tee_055_F"):
case joaat("MP_Heist4_Tee_057_F"):
case joaat("MP_Heist4_Tee_059_F"):
case joaat("MP_Heist4_Tee_061_F"):
case joaat("MP_Heist4_Tee_063_F"):
case joaat("MP_Heist4_Tee_065_F"):
case 2021781367:
case -436866133:
case 457275657:
case -250832592:
case -798760789:
case -1634791241:
case -1227437948:
case -2045170715:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}}
return 0;
}

int func_142(int iParam0){
int iVar0;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
if(iVar0 !=-1 && iVar0 < 4){
if(func_143(iVar0) !=-1 && func_143(iVar0) !=0){
return 1;
}}}
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11)==15){
return 1;
}}}
return 0;
}

int func_143(int iParam0){
if(func_144(1)){
return Global_1665818;
}
if(iParam0 <=-1 || iParam0 >=4){
return -1;
}
return Global_2684801.f_6316[iParam0];
}

int func_144(bool bParam0){
if((func_148(bParam0) || func_146()) || func_145(Global_4718592.f_166301)){
return 1;
}
return 0;
}


bool func_145(int iParam0){
return iParam0==87;
}

int func_146(){
return func_147(Global_4718592.f_113724);
}

int func_147(int iParam0){
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


var func__148(bool bParam0){
if(bParam0){
return (MISC::IS_BIT_SET(Global_4718592.f_160050, 12) && func_149());
}
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_149(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}

int func_150(int iParam0, bool bParam1){
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
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
return 1;
break;
case 1:
case 7:
case 12:
iVar2=func_154(joaat("mp_m_freemode_01"), 11, func_66(iParam0, 11, -1), 0);
if(((iVar1==1 && iVar2==88) || (iVar1==7 && iVar2==89)) || (iVar1==12 && iVar2==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 9:
return 1;
break;
}
break;
case 5:
if(!bParam1){
if(func_55(13, -1)){
return 1;
}
elseif(func_55(14, -1)){
return 1;
}
elseif(func_55(15, -1)){
return 1;
}
elseif(func_55(16, -1)){
return 1;
}
elseif(func_55(71, -1)){
return 1;
}
elseif(func_55(72, -1)){
}
elseif(func_151(PLAYER::PLAYER_ID(), 1) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 !=0){
return 1;
}}
break;
default:
if(iVar0 > 15){
iVar3=func_66(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_62(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar5=func_66(iParam0, 8, -1);
if(iVar5 >=241){
iVar6=func_62(joaat("mp_m_freemode_01"), iVar5, 8, 3);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar7=func_154(joaat("mp_f_freemode_01"), 11, func_66(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar7==88) || (iVar1==4 && iVar7==89)) || (iVar1==9 && iVar7==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
break;
}
break;
case 3:
switch (iVar1){
case 14:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar8=func_66(iParam0, 11, -1);
if(iVar8 >=256){
iVar9=func_62(joaat("mp_f_freemode_01"), iVar8, 11, 4);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("heist_draw_13"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar10=func_154(joaat("mp_f_freemode_01"), 11, func_66(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar10==88) || (iVar1==4 && iVar10==89)) || (iVar1==9 && iVar10==87)){
return 1;
}
break;
}
break;
case 1:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar11=func_154(joaat("mp_f_freemode_01"), 11, func_66(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar11==88) || (iVar1==4 && iVar11==89)) || (iVar1==9 && iVar11==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar12=func_66(iParam0, 8, -1);
if(iVar12 >=136){
iVar13=func_62(joaat("mp_f_freemode_01"), iVar12, 8, 4);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}}
return 0;
}

int func_151(int iParam0, bool bParam1){
return func_152(iParam0, bParam1, 1);
}

int func_152(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_140()){
return 0;
}
if(!bParam1){
if(func_153(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_140() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_153(int iParam0, int iParam1){
if(iParam0 !=func_140()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_140()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
var uVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
var uVar22;
int iVar23;
if(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==23){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2==41){
return 86;
}elseif(iParam2 >=237){
iVar0=func_62(iParam0, iParam2, 11, 3);
if(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl_no_save"), 0)){
iVar1=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==10){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_155(iVar3, 3);
}else{
return uVar4;
}}
iVar2++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_16(1759, -1, 0);
}
return func_155(iParam3, 3);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==23){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2==33){
return 73;
}elseif(iParam2==35){
return 74;
}elseif(iParam2==37){
return 75;
}elseif(iParam2==39){
return 76;
}elseif(iParam2==36){
return 77;
}elseif(iParam2==40){
return 78;
}elseif(iParam2==43){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==227){
return 80;
}elseif(iParam2==229){
return 81;
}elseif(iParam2==230){
return 82;
}elseif(iParam2==232){
return 83;
}elseif(iParam2==228){
return 84;
}elseif(iParam2==238){
return 85;
}elseif(iParam2==231){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==225){
return 88;
}elseif(iParam2==236){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2 >=241){
iVar6=func_62(iParam0, iParam2, 8, 3);
if(iVar6 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
iVar7=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==10){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_155(iVar9, 3);
}else{
return uVar10;
}}
iVar8++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_16(1759, -1, 0);
}
return func_155(iParam3, 3);
}}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2==32){
return 78;
}elseif(iParam2==33){
return 79;
}elseif(iParam2==34){
return 80;
}elseif(iParam2==35){
return 81;
}elseif(iParam2==36){
return 82;
}elseif(iParam2==62){
return 76;
}elseif(iParam2==63){
return 83;
}elseif(iParam2==186){
return 84;
}elseif(iParam2==187){
return 85;
}elseif(iParam2==191){
return 74;
}elseif(iParam2 >=256){
iVar12=func_62(iParam0, iParam2, 11, 4);
if(iVar12 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl_no_save"), 0)){
iVar13=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
iVar14=0;
while (iVar14 < iVar13){
FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
if(iVar17==10){
if(iVar15 !=0 && iVar15 !=joaat("0")){
return func_155(iVar15, 4);
}else{
return uVar16;
}}
iVar14++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_16(1759, -1, 0);
}
return func_155(iParam3, 4);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2==17){
return 75;
}elseif(iParam2==18){
return 77;
}elseif(iParam2==20){
if(func_116(89, -1)){
return 89;
}}elseif(iParam2==23){
return 88;
}elseif(iParam2==25){
if(func_116(87, -1)){
return 87;
}}elseif(iParam2==81){
return 84;
}elseif(iParam2==82){
return 85;
}elseif(iParam2==86){
return 74;
}elseif(iParam2 >=136){
iVar18=func_62(iParam0, iParam2, 8, 4);
if(iVar18 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl_no_save"), 0)){
iVar19=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
iVar20=0;
while (iVar20 < iVar19){
FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
if(iVar23==10){
if(iVar21 !=0 && iVar21 !=joaat("0")){
return func_155(iVar21, 4);
}else{
return uVar22;
}}
iVar20++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_16(1759, -1, 0);
}
return func_155(iParam3, 4);
}}}}}
return -1;
}

int func_155(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_156(int iParam0){
if(PED::IS_PED_DEAD_OR_DYING(iParam0, 1)){
return 0;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("player_zero"):
return 0;
break;
case joaat("player_one"):
return 1;
break;
case joaat("player_two"):
return 2;
break;
case joaat("mp_m_freemode_01"):
return 3;
break;
case joaat("mp_f_freemode_01"):
return 4;
break;
}
return 0;
}


void func_157(){
int iVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_70.f_569){
iVar0=0;
while (iVar0 < 12){
if(iVar0 !=0){
PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_504.f_13[iVar0], Local_70.f_504[iVar0], Local_70.f_504.f_26[iVar0]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
if(Local_70.f_504.f_39[iVar0] !=-1){
PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_504.f_39[iVar0], Local_70.f_504.f_49[iVar0], NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
}else{
PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), iVar0, 1);
}
iVar0++;
}}}


void func_158(){
if(Local_71.f_0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_71.f_1);
Local_71.f_0=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2)){
PED::DELETE_PED(&(Local_71.f_2));
}
if(ENTITY::DOES_ENTITY_EXIST(Global_4539790)){
PED::DELETE_PED(&Global_4539790);
}}


void func_159(int iParam0, int iParam1){
char cVar0[64];
struct<13> Var1;
var uVar2;
StringCopy(&cVar0, func_163(iParam0, iParam1), 64);
if(MISC::GET_HASH_KEY(&cVar0)==joaat("crew_logo")){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_5(PLAYER::PLAYER_ID(), 0, 1)) && func_161()) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Var1={
func_160(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar2, 35, &Var1)){
NETWORK::NETWORK_CLAN_RELEASE_EMBLEM(uVar2);
}}}elseif(MISC::GET_HASH_KEY(&cVar0) !=0){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
}}
struct<13> func_160(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_161(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_162() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_162(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}


char* func_163(int iParam0, int iParam1){
switch (iParam0){
case 0:
return "ShopUI_Title_HighEndSalon";
break;
case 1:
case 4:
case 6:
return "ShopUI_Title_Barber";
break;
case 2:
return "ShopUI_Title_Barber2";
break;
case 3:
return "ShopUI_Title_Barber3";
break;
case 5:
return "ShopUI_Title_Barber4";
break;
case 7:
case 8:
case 10:
case 11:
case 13:
return "ShopUI_Title_LowEndFashion";
break;
case 9:
case 12:
return "ShopUI_Title_LowEndFashion2";
break;
case 14:
case 15:
case 16:
case 17:
return "ShopUI_Title_MidFashion";
break;
case 18:
case 19:
case 20:
return "ShopUI_Title_HighEndFashion";
break;
case 21:
return "ShopUI_Title_Movie_Masks";
break;
case 22:
return "ShopUI_Title_Tattoos";
break;
case 23:
case 24:
return "ShopUI_Title_Tattoos2";
break;
case 25:
return "ShopUI_Title_Tattoos3";
break;
case 26:
return "ShopUI_Title_Tattoos4";
break;
case 27:
return "ShopUI_Title_Tattoos5";
break;
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
return "ShopUI_Title_GunClub";
break;
case 39:
case 40:
case 41:
case 43:
return "ShopUI_Title_Carmod";
break;
case 42:
return "ShopUI_Title_Carmod2";
break;
case 44:
return "ShopUI_Title_Supermod";
break;
case 45:
switch (iParam1){
case 4:
case 5:
return "ShopUI_Title_ClubhouseMod";
break;
case 10:
return "ShopUI_Title_GR_GunMod";
break;
case 12:
return "ShopUI_Title_SM_Hangar";
case 13:
return "ShopUI_Title_GR_GunMod";
case 14:
return "ShopUI_Title_GR_GunMod";
case 15:
return "ShopUI_Title_GR_GunMod";
case 16:
return "ShopUI_Title_GR_GunMod";
case 17:
return "ShopUI_Title_ArenaWar";
case 18:
return "ShopUI_Title_Los_Santos_Car_Meet";
break;
case 19:
return "ShopUI_Title_Auto_Shop";
case 20:
return "SHOP_BANNER_CLINTON_PARTNER";
case 21:
return "ShopUI_Title_JuggaloWarehouse";
}
return "ShopUI_Title_IE_ModGarage";
break;
case 46:
case 47:
case 48:
case 49:
case 52:
case 53:
case 59:
return "ShopUI_Title_GR_GunMod";
case 50:
case 51:
return "ShopUI_Title_Casino";
case 54:
return "ShopUI_Title_Los_Santos_Car_Meet";
case 55:
return "ShopUI_Title_Los_Santos_Car_Meet";
case 56:
return "SHOP_BANNER_CLINTON_PARTNER";
break;
case 57:
return "SHOP_BANNER_RECORD_A_STUDIOS";
break;
case 58:
return "ShopUI_Title_GunVan";
break;
}
return "";
}


void func_164(bool bParam0, int iParam1){
int iVar0;
if(!func_166(&iVar0, 0, iParam1)){
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
func_165(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_165(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_166(var uParam0, bool bParam1, int iParam2){
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


void func_167(){
CAM::SET_WIDESCREEN_BORDERS(0, -1);
func_176();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
if(!Global_78558){
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}}
Global_102832=0;
func_168(0, 1, 1, 0, 0, 0, 0);
}


void func_168(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_175(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_174()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_178(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_175(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_178(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_172(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID(), 0)) && !func_169()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_172(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_169(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_170(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_171(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_171(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_18();
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

int func_172(int iParam0){
if(func_170(iParam0, 0)){
return 1;
}
if(func_173()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_173(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_174(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_175(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_176(){
if(Global_100733.f_5 && Global_100733.f_6==MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())){
HUD::CLEAR_HELP(1);
Global_100733.f_5=0;
}}


void func_177(bool bParam0){
if(!Global_2764562){
if(bParam0){
if(Global_78558){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
}}}}}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
if(Global_78558){
func_198();
}
if(func_197(1)){
if(uParam0->f_19){
}
if(Global_78558){
if(bParam3){
if(!func_195()){
}elseif((!func_194() && !func_249()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!bParam4){
func_185(PLAYER::PLAYER_ID(), 1, 8388608, 0);
}else{
func_185(PLAYER::PLAYER_ID(), 1, 0, 0);
}}elseif(!bParam4){
func_185(PLAYER::PLAYER_ID(), 0, 8454656, 0);
}else{
func_185(PLAYER::PLAYER_ID(), 0, 66048, 0);
}}}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
}
if(bParam2){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}
if(bParam1){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}
uParam0->f_30=1;
uParam0->f_28=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_29=NETWORK::GET_NETWORK_TIME();
}
if(Global_78558){
func_182();
func_180();
}
if(uParam0->f_33 !=0 || !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34))){
StringCopy(&(uParam0->f_34), "", 16);
uParam0->f_33=0;
}
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && uParam0->f_32 !=0){
if(!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING()){
NETWORK::NETWORK_END_TUTORIAL_SESSION();
uParam0->f_32=0;
}}}


void func_180(){
if(!Global_1574747){
return;
}
func_181();
}


void func_181(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}


void func_182(){
func_184(1);
func_183(4, 0, -1);
func_183(6, 0, -1);
func_183(7, 0, -1);
func_183(3, 0, -1);
func_183(1, 0, -1);
func_183(2, 0, -1);
func_183(11, 0, -1);
func_183(13, 0, -1);
func_183(14, 0, -1);
func_183(16, 0, -1);
}


void func_183(bool bParam0, bool bParam1, int iParam2){
switch (iParam0){
case 5:
if(iParam2 > -1){
Global_1653913.f_137[iParam2]=bParam1;
}
break;
default:
if(bParam1){
MISC::SET_BIT(&(Global_1653913.f_1046), iParam0);
}else{
MISC::CLEAR_BIT(&(Global_1653913.f_1046), bParam0);
}
break;
}}


void func_184(int iParam0){
Global_2793046.f_4628=iParam0;
}


void func_185(int iParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_193()){
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
if(!func_195()){
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
}elseif(bVar14 || (!func_170(PLAYER::PLAYER_ID(), 0) && !func_173())){
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
func_190(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_189(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
func_188();
func_187();
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
if(!func_189(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
if(func_186(Global_4718592.f_166301)){
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


bool func_186(int iParam0){
return iParam0==17;
}


void func_187(){
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


void func_188(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_189(int iParam0){
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


void func_190(int iParam0, int iParam1, int iParam2){
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
func_192();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_170(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_191(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_191(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_192(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), false);
}}}

int func_193(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}


bool func_194(){
return MISC::IS_BIT_SET(Global_2683864, 2);
}

int func_195(){
if(func_196()==0){
return 1;
}
return 0;
}

int func_196(){
return Global_1574632.f_18;
}


bool func_197(bool bParam0){
if(Global_78558){
return func_5(PLAYER::PLAYER_ID(), bParam0, !func_1023(1));
}
return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}


void func_198(){
if(Global_1574582.f_1==1){
func_199(7, 0, 1);
Global_1574582.f_1=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_9=0;
}}


void func_199(int iParam0, int iParam1, bool bParam2){
if(func_207()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_206(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_206(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_205(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_205(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_204()) && !func_200(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_200(int iParam0){
if(func_201(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_202(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_202(int iParam0){
return func_203(iParam0);
}


var func__203(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_204(){
return Global_2683864.f_841;
}


void func_205(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_207()){
if(func_5(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_5(PLAYER::PLAYER_ID(), 1, 1)){
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


void func_206(var uParam0, bool bParam1, bool bParam2){
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


bool func_207(){
return Global_1574582;
}


void func_208(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/])){
CAM::DESTROY_CAM((*uParam0)[iVar0 /*12*/], 0);
}
iVar0++;
}}


void func_209(var uParam0, int iParam1){
if(*uParam0==iParam1 && uParam0->f_7){
func_22("Unable to lock shop doors as player is inside the shop.", -1);
}else{
func_220(iParam1, 1, 0);
}
func_219(iParam1, 0);
func_218(iParam1, 0);
func_217(iParam1, 1, 1);
func_217(iParam1, 10, 1);
func_217(iParam1, 11, 1);
func_217(iParam1, 12, 1);
func_217(iParam1, 13, 1);
func_217(iParam1, 22, 1);
func_217(iParam1, 25, 1);
if(uParam0->f_1==1){
func_217(iParam1, 19, 1);
}
if(!func_1018(iParam1)){
func_22("Letting shop controller know to relaunch when in range.", -1);
func_215(iParam1, 17, 1);
}
func_214(iParam1);
func_211(iParam1);
func_210(PLAYER::PLAYER_ID(), iParam1);
func_176();
if(func_25(iParam1)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && !PED::IS_PED_INJURED(uParam0->f_12)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_12)){
PED::SET_PED_KEEP_TASK(uParam0->f_12, 1);
}}}else{
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
if(func_1010(uParam0, iParam1)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)){
PED::DELETE_PED(&(uParam0->f_12));
}}elseif(ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
}}}


void func_210(int iParam0, int iParam1){
if(iParam1==-1){}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_861, 4)){
MISC::CLEAR_BIT(&(Global_1853910[iParam0 /*862*/].f_861), 4);
Global_1853910[iParam0 /*862*/].f_203=0;
}}}


void func_211(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 4){
func_212(iParam0, iVar0);
iVar0++;
}}


void func_212(int iParam0, int iParam1){
if(iParam0 !=-1 && iParam1 !=0){
if(Global_100733.f_389[func_213(iParam0) /*5*/][iParam1]==2){
Global_100733.f_389[func_213(iParam0) /*5*/][iParam1]=4;
}else{
Global_100733.f_389[func_213(iParam0) /*5*/][iParam1]=0;
}
if(Global_100733.f_425[func_213(iParam0)]==iParam1){
Global_100733.f_425[func_213(iParam0)]=0;
}}}

int func_213(int iParam0){
switch (iParam0){
case 39:
return 1;
break;
case 40:
return 2;
break;
case 41:
return 3;
break;
case 42:
return 4;
break;
case 43:
return 5;
break;
case 44:
return 6;
break;
}
return 0;
}


void func_214(int iParam0){
Global_100733.f_202[iParam0]=1;
Global_100733.f_201=1;
}


void func_215(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_20()==0){
uVar0=func_16(func_19(iParam0), -1, 0);
MISC::SET_BIT(&uVar0, bParam1);
func_216(func_19(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::SET_BIT(&(Global_113648.f_668[iParam0]), bParam1);
}}


void func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_17(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_217(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_20()==0){
uVar0=func_16(func_19(iParam0), -1, 0);
MISC::CLEAR_BIT(&uVar0, bParam1);
func_216(func_19(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::CLEAR_BIT(&(Global_113648.f_668[iParam0]), bParam1);
}}


void func_218(int iParam0, bool bParam1){
if(bParam1){
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
if(!func_15(iParam0, 6, 1)){
func_215(iParam0, 6, 1);
Global_100733.f_388++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PLAYER::FORCE_CLEANUP(8);
}}}elseif(func_15(iParam0, 6, 1)){
func_217(iParam0, 6, 1);
if(Global_100733.f_388 > 0){
Global_100733.f_388=(Global_100733.f_388 - 1);
}
BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("act_cinema");
}}


void func_219(int iParam0, bool bParam1){
if(bParam1){
Global_100733.f_486=iParam0;
if(!func_15(iParam0, 5, 1)){
func_215(iParam0, 5, 1);
func_214(iParam0);
Global_100733.f_387++;
}}elseif(func_15(iParam0, 5, 1)){
func_217(iParam0, 5, 1);
func_214(iParam0);
if(Global_100733.f_387 > 0){
Global_100733.f_387=(Global_100733.f_387 - 1);
}}}


void func_220(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(iParam0==58){
return;
}
if(bParam1){
iVar0=1;
}else{
iVar0=0;
}
if(bParam2){
if(bParam1){
iVar0=4;
}else{
iVar0=3;
}}
iVar1=func_4(iParam0, 0);
if(iVar1 !=226){
func_221(iVar1, iVar0);
}
iVar1=func_4(iParam0, 1);
if(iVar1 !=226){
func_221(iVar1, iVar0);
}}


void func_221(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=226){
if(Global_78558){
iVar0=Global_42791[iParam0];
}else{
iVar0=Global_113648.f_7263[iParam0];
}
if(iVar0 !=iParam1 || MISC::IS_BIT_SET(Global_38617[(iParam0 / 32)], (iParam0 % 32))){
if((((iParam1==4 || iParam1==3) || iParam1==5) || iParam1==6) || iParam1==2){
MISC::SET_BIT(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
Global_39089[iParam0]=iParam1;
}elseif(Global_78558){
Global_42791[iParam0]=iParam1;
}else{
Global_113648.f_7263[iParam0]=iParam1;
}
MISC::SET_BIT(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
func_223(iParam0);
if(MISC::IS_BIT_SET(Global_38617[(iParam0 / 32)], (iParam0 % 32))){
func_222(iParam0);
}}}}


void func_222(int iParam0){
if(!MISC::IS_BIT_SET(Global_39560.f_228[(iParam0 / 32)], (iParam0 % 23))){
MISC::SET_BIT(&(Global_39560.f_228[(iParam0 / 32)]), (iParam0 % 23));
Global_39560[Global_39560.f_227]=iParam0;
Global_39560.f_227++;
}}


void func_223(int iParam0){
struct<7> Var0;
bool bVar1;
bool bVar2;
int iVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
if(!func_244()){
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
Var0={
func_3(iParam0) 
};
if(MISC::IS_BIT_SET(Var0.f_4, 2)){
func_230(iParam0, &Var0);
}
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5)){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}}
bVar1=false;
bVar2=false;
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
if((MISC::IS_BIT_SET(Global_38626[(iParam0 / 32)], (iParam0 % 32)) && Global_39089[iParam0]==2) && fVar4 > 210f){
MISC::CLEAR_BIT(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
Global_38635[iParam0]=0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning"))==0){
if(MISC::IS_BIT_SET(Global_38862[(iParam0 / 32)], (iParam0 % 32))){
if(fVar4 < 25f){
if(Global_100733.f_385==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Global_100733.f_385=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
}}
iVar5=Global_100733.f_385;
iVar6=INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
if(iVar5==iVar6 && iVar5 !=0){
MISC::SET_BIT(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
Global_39089[iParam0]=3;
MISC::SET_BIT(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
}}
MISC::CLEAR_BIT(&(Global_38862[(iParam0 / 32)]), (iParam0 % 32));
}}
if(MISC::IS_BIT_SET(Global_38626[(iParam0 / 32)], (iParam0 % 32))){
iVar3=Global_39089[iParam0];
}elseif(MISC::IS_BIT_SET(Var0.f_4, 0)){
if(Global_113648.f_9087){
iVar3=func_227(iParam0);
}else{
iVar3=0;
}
if(func_101(14)){
iVar3=0;
}}elseif(MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon"))==0){
if(func_224()){
iVar3=0;
}else{
iVar3=1;
}}else{
iVar3=Global_113648.f_7263[iParam0];
}
if(Global_39316[iParam0] !=iVar3){
bVar1=true;
}
if(MISC::IS_BIT_SET(Global_38617[(iParam0 / 32)], (iParam0 % 32))){
if(!MISC::IS_BIT_SET(Global_38626[(iParam0 / 32)], (iParam0 % 32)) || (Global_38635[iParam0]==0 && Global_39089[iParam0] !=2)){
bVar1=true;
}}
if(bVar1){
if(!Global_38616){
}else{
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5)){
OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
}
switch (iVar3){
case 1:
if(MISC::IS_BIT_SET(Var0.f_4, 3)){
bVar7=true;
}elseif(fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <=0.015f){
iVar8=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
iVar9=INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
if(iVar8 !=iVar9 || iVar8==0){
bVar7=true;
}}
if(bVar7){
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
}
break;
case 4:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
case 2:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
case 0:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
case 3:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
bVar2=true;
break;
case 5:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
case 6:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
default:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
bVar2=true;
break;
}}
if(bVar2){
MISC::CLEAR_BIT(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
Global_39316[iParam0]=iVar3;
}}
if(MISC::IS_BIT_SET(Global_38626[(iParam0 / 32)], (iParam0 % 32)) && Global_39089[iParam0] !=2){
MISC::SET_BIT(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
func_222(iParam0);
if(Global_38635[iParam0] < 2){
Global_38635[iParam0]++;
}}}

int func_224(){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (func_225()){
case 0:
if(Global_113648.f_9087.f_99.f_58[65]){
return 1;
}
break;
case 1:
if(Global_113648.f_9087.f_99.f_58[66]){
return 1;
}
break;
case 2:
if(Global_113648.f_9087.f_99.f_58[65]){
return 1;
}
break;
}
return 0;
}


bool func_225(){
func_226();
return Global_113648.f_2365.f_539.f_4321;
}


void func_226(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_48(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_47(PLAYER::PLAYER_PED_ID());
if(func_46(iVar0) && (!func_101(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_46(Global_113648.f_2365.f_539.f_4321)){
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

int func_227(int iParam0){
bool bVar0;
bVar0=func_225();
if(func_228(iParam0)){
return 1;
}
if(iParam0==49){
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113648.f_7231[5], 0) || MISC::IS_BIT_SET(Global_113648.f_7231[6], 0)){
return 0;
}}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[5], bVar0)){
return 0;
}}}
switch (iParam0){
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
case 45:
case 46:
if(bVar0==0){
if(MISC::IS_BIT_SET(Global_113648.f_7231[0], 0)){
return 0;
}}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[0], bVar0)){
if(iParam0 !=40){
return 0;
}else{
return 1;
}}}
break;
case 47:
case 48:
case 49:
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113648.f_7231[5], 0)){
return 0;
}}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[5], bVar0)){
return 0;
}}
break;
case 50:
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113648.f_7231[6], 0)){
return 0;
}}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[6], bVar0)){
return 0;
}}
break;
case 51:
case 52:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113648.f_7231[2], 0)){
return 0;
}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[2], bVar0)){
return 0;
}}}elseif(bVar0==0){
if(MISC::IS_BIT_SET(Global_113648.f_7231[1], 0)){
return 0;
}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[1], bVar0)){
return 0;
}}}
break;
case 53:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113648.f_7231[3], 0)){
return 0;
}}
if(func_46(bVar0)){
if(MISC::IS_BIT_SET(Global_95708[3], bVar0)){
return 0;
}}
break;
default:
return 0;
break;
}
return 1;
}

int func_228(int iParam0){
int iVar0;
if((iParam0==40 || iParam0==49) || iParam0==52){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=ENTITY::GET_ENTITY_MODEL(func_229(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
switch (iVar0){
case joaat("utillitruck"):
case joaat("monster"):
return 1;
break;
}}}}
return 0;
}


var func__229(var uParam0){
return uParam0;
}


void func_230(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(uParam1->f_4, 2)){
return;
}
iVar0=func_233();
iVar1=func_232(iVar0);
switch (iParam0){
case 133:
case 134:
case 201:
case 202:
if(func_231(iParam0)){
if(iVar1 < 19){
if(iVar1 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=19){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 199:
case 200:
case 203:
case 204:
if(func_231(iParam0)){
if(iVar1 < 18){
if(iVar1 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=18){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 141:
case 142:
if(func_231(iParam0)){
if((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0) && !Global_113648.f_9087.f_99.f_58[4]){
if(iVar1 < 21){
if(iVar1 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}}elseif(!Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0){
if(iVar1 >=21){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}}
break;
case 145:
case 146:
case 143:
case 144:
if(func_231(iParam0)){
if(iVar1 < 20){
if(iVar1 >=9){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=20){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(iVar1 < 9){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 147:
case 148:
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
if(!func_231(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet"))==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 158:
case 159:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 160:
case 161:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2"))==0){
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 70:
case 71:
case 72:
if(!func_231(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[26 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}else{
return;
}
break;
case 101:
case 102:
case 103:
case 104:
if(!func_231(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[43 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}
break;
case 190:
case 191:
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 193:
if(!func_231(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[93 /*34*/].f_6) > 0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}
break;
case 198:
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 80:
if(!func_231(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[8 /*34*/].f_6)==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[10 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}
break;
case 205:
case 206:
if(!func_231(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[47 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}else{
return;
}
break;
case 207:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 208:
case 209:
case 211:
case 210:
case 212:
case 213:
case 214:
case 215:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[48 /*34*/].f_6)==0){
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 99:
case 100:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[39 /*34*/].f_6)==0){
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}}
break;
case 216:
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 217:
case 218:
if(!func_231(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
case 219:
case 220:
case 221:
case 222:
if(func_231(iParam0)){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
}
break;
}}


bool func_231(int iParam0){
struct<7> Var0;
int iVar1;
Var0={
func_3(iParam0) 
};
iVar1=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
return ((iVar1==1 || iVar1==4) || iVar1==2);
}

int func_232(int iParam0){
return shift_right(iParam0, 9) & 31;
}


var func__233(){
var uVar0;
func_243(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_242(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_241(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_236(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_235(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_234(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_234(var uParam0, int iParam1){
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


void func_235(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_236(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_240(*uParam0);
iVar1=func_238(*uParam0);
if(iParam1 < 1 || iParam1 > func_237(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_237(int iParam0, int iParam1){
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


var func__238(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_239(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_239(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_240(int iParam0){
return iParam0 & 15;
}


void func_241(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_242(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_243(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_244(){
if((func_20()==-1 || func_20()==999) && !func_58()==0){
return 1;
}
return 0;
}


void func_245(var uParam0){
int iVar0;
if(*uParam0==-1){
return;
}
iVar0=func_246(*uParam0);
if(iVar0==-1){
*uParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
}

int func_246(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44000[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_247(){
Global_2683864.f_785.f_28=1;
Global_2683864.f_785.f_32=0;
Global_2683864.f_785.f_31=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
func_248(&(Global_2683864.f_785.f_29));
}


void func_248(var uParam0){
uParam0->f_1=0;
}


bool func_249(){
return Global_2683864.f_785.f_5;
}


void func_250(){
struct<3> Var0;
float fVar1;
struct<3> Var2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
if(func_1023(1)){
if(func_5(PLAYER::PLAYER_ID(), 0, 1)){
func_854();
func_853();
}elseif(!func_852()){
func_853();
}
return;
}
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(0);
func_793(&Local_70, &(Local_70.f_119), -1);
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(Local_70.f_12)) && !PED::IS_PED_INJURED(Local_70.f_12)){
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(Local_70.f_12, 1, 1);
}
if(Local_70.f_119.f_31 > 0 && Local_70.f_119.f_31 < 6){
func_788(0, 1, 1);
HUD::THEFEED_HIDE_THIS_FRAME();
}
func_782(0);
bVar3=false;
switch (Local_70.f_119.f_31){
case 0:
Local_140.f_19=0;
Local_140.f_18=0;
if(func_197(1)){
Local_70.f_119.f_19=1;
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_TATTOO_SHOP", 0, -1);
if(((func_780("TAT_MNU", Local_70.f_0, 1) && func_779(Local_70.f_0, 0)) && func_775()) && func_774()){
if(!Global_78558){
func_626(1);
}
Local_70.f_119.f_31=1;
}}
break;
case 1:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_625(60, -1)){
func_624(60, 1, -1);
}
MISC::SET_BIT(&Global_78807, 9);
func_29(1);
func_615(&(Local_70.f_119), 0);
func_614(0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::SET_MULTIPLAYER_WALLET_CASH();
HUD::SET_MULTIPLAYER_BANK_CASH();
}
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_70.f_187.f_31, 3f) && !Global_78558){
func_611(&Local_70);
}
if(!PED::IS_PED_INJURED(Local_70.f_12)){
Var2={
ENTITY::GET_ENTITY_COORDS(Local_70.f_12, 1) 
};
Local_70.f_187.f_31.f_2=Var2.f_2;
}
if(!Global_78558){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(((Var0.f_0 < (Local_70.f_187.f_31 - 0.1f) || Var0.f_0 > (Local_70.f_187.f_31 + 0.1f)) || Var0.f_1 < (Local_70.f_187.f_31.f_1 - 0.1f)) || Var0.f_1 > (Local_70.f_187.f_31.f_1 + 0.1f)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_70.f_187.f_31, 0, 0, 1);
MISC::CLEAR_AREA_OF_OBJECTS(Local_70.f_187.f_31, 1.1f, 0);
}
fVar1=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
if(fVar1 < (Local_70.f_187.f_34 - 2f) || fVar1 > (Local_70.f_187.f_34 + 2f)){
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_70.f_187.f_34);
}
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
Local_140.f_19=1;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2)){
ENTITY::SET_ENTITY_VISIBLE(Local_71.f_2, true, 0);
}
Local_143={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2)){
if(!PED::IS_PED_INJURED(Local_71.f_2)){
Local_143={
ENTITY::GET_ENTITY_COORDS(Local_71.f_2, 1) 
};
}}
if(iLocal_69 !=22){
if(ENTITY::DOES_ENTITY_EXIST(Local_70.f_12)){
if(!PED::IS_PED_INJURED(Local_70.f_12)){
Var0={
ENTITY::GET_ENTITY_COORDS(Local_70.f_12, 1) 
};
if(((Var0.f_0 < (Local_70.f_12.f_6 - 0.1f) || Var0.f_0 > (Local_70.f_12.f_6 + 0.1f)) || Var0.f_1 < (Local_70.f_12.f_6.f_1 - 0.1f)) || Var0.f_1 > (Local_70.f_12.f_6.f_1 + 0.1f)){
TASK::CLEAR_PED_TASKS(Local_70.f_12);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_70.f_12, Local_70.f_12.f_6, 0, 0, 1);
if(iLocal_69==22){
ENTITY::SET_ENTITY_HEADING(Local_70.f_12, Local_70.f_12.f_15);
}else{
ENTITY::SET_ENTITY_HEADING(Local_70.f_12, (Local_70.f_12.f_15 - 180f));
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_70.f_12, 0, 0);
TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
}}}}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
func_610(&Local_70, 1f);
Local_70.f_119.f_5=0;
Local_70.f_119.f_1=0;
Local_70.f_119.f_3=0;
Local_70.f_119.f_4=0;
Local_70.f_119.f_10=0;
Local_70.f_119.f_16=0;
StringCopy(&(Local_70.f_119.f_11), "", 16);
iLocal_181=0;
Local_70.f_119.f_17=0;
if(iLocal_175){
Local_70.f_119.f_3=Global_2683864.f_785.f_33[1];
if(Global_2683864.f_785.f_40){
Local_70.f_119.f_5=1;
Local_70.f_503=Global_2683864.f_785.f_33[0];
Local_70.f_119.f_1=Global_2683864.f_785.f_33[2];
Global_2683864.f_785.f_40=0;
Local_70.f_119.f_17=1;
iLocal_175=0;
}}
func_594(&bVar3);
func_280(&bVar3);
func_279();
func_273();
if(!Global_78558 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
func_272();
}
Local_70.f_119.f_31=2;
break;
case 2:
func_280(&bVar3);
func_273();
func_270();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
}
break;
case 6:
if(!bLocal_142){
Global_100733.f_1570=0;
if(!Global_78558 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_157();
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
}
Local_70.f_119.f_31=7;
}else{
func_280(&bVar3);
}
break;
case 7:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}
func_269(&(Local_70.f_54));
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_179(&(Local_70.f_119), 1, 1, 1, 1);
func_177(1);
func_167();
func_164(1, Local_70.f_0);
func_159(Local_70.f_0, 0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
func_158();
Local_140.f_19=0;
if(Global_4536680){
if(Global_78558){
func_267(1073358597, func_268(1, 1));
}}
if(Global_78558){
iVar4=func_67(PLAYER::PLAYER_PED_ID(), 11);
func_259(PLAYER::PLAYER_PED_ID(), 11, iVar4, 0, 0);
if(Local_70.f_570 !=-1){
func_256(Local_70.f_570, 1, -1);
}}
func_34(PLAYER::PLAYER_PED_ID());
func_28();
func_29(0);
MISC::CLEAR_BIT(&Global_78807, 9);
Local_70.f_119.f_19=0;
Local_70.f_11=3;
if(iLocal_68==54){
AUDIO::STOP_AUDIO_SCENE("Ls_Car_Meet_Tattoo_Shop_Scene");
}
break;
case 8:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}
func_269(&(Local_70.f_54));
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_178(0, 1, 1, 0);
func_179(&(Local_70.f_119), 1, 1, 1, 1);
Global_100733.f_1570=0;
if(!Global_78558 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_157();
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
}
func_177(1);
func_167();
func_164(1, Local_70.f_0);
func_159(Local_70.f_0, 0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
Local_140.f_19=0;
func_158();
if(Global_78558){
iVar5=func_67(PLAYER::PLAYER_PED_ID(), 11);
func_259(PLAYER::PLAYER_PED_ID(), 11, iVar5, 0, 0);
if(Local_70.f_570 !=-1){
func_256(Local_70.f_570, 1, -1);
}}
func_34(PLAYER::PLAYER_PED_ID());
func_29(0);
func_28();
if(Global_4536680){
if(Global_78558){
func_267(1073358597, func_268(1, 1));
}}
MISC::CLEAR_BIT(&Global_78807, 9);
Local_70.f_119.f_19=0;
Local_70.f_11=3;
break;
}
if(iLocal_177){
iVar6=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2)){
iVar6=Local_71.f_2;
}
func_626(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_254(iVar6, Local_70.f_503, 0, -1, 0);
}else{
func_34(iVar6);
}
func_251(iVar6, Local_70.f_503);
iLocal_177=0;
}
if(bVar3){
iLocal_177=1;
}
func_27(&Local_140, 1);
}


void func_251(int iParam0, int iParam1){
int iVar0;
struct<6> Var1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1 !=-1){
iVar0=func_156(iParam0);
if(func_36(&Var1, iParam1, iVar0, iParam0, -1)){
if(!func_252(iParam1)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
func_51(iParam0, Var1.f_4, Var1.f_5);
}}}}}

int func_252(int iParam0){
if(Global_78558){
return func_55(iParam0, -1);
}else{
return func_253(func_225(), iParam0);
}
return 0;
}

int func_253(bool bParam0, int iParam1){
struct<11> Var0;
if(func_46(bParam0)){
if(func_36(&Var0, iParam1, func_44(bParam0), 0, -1)){
return MISC::IS_BIT_SET(Global_113648.f_2365.f_493[bParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
}}
return 0;
}


void func_254(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4){
int iVar0;
struct<12> Var1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
bool bVar6;
bool bVar7;
int iVar8;
struct<8> Var9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
if(iParam3==-1){
iParam3=func_18();
}
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar2=func_156(iParam0);
func_36(&Var1, iParam1, iVar2, iParam0, -1);
iVar3=func_54(iVar0, &Var1, Var1.f_8);
bVar5=false;
bVar6=func_142(iParam0);
bVar7=func_141(iParam0, -1);
iVar4=0;
while (iVar4 < 127){
if(func_36(&Var1, iVar4, iVar2, iParam0, -1)){
if(func_55(Var1.f_11, iParam3)){
iVar8=func_54(iVar0, &Var1, Var1.f_8);
bVar5=false;
if(iVar3 !=-1 && iVar8 !=-1){
if(Var1.f_11 !=iParam1){
if(func_255(iVar8, iVar3)){
bVar5=true;
if(bParam2){
func_256(Var1.f_11, 0, -1);
}
}}}
if(!bVar5 && func_52(iParam0, &Var1, Var1.f_11, Var1.f_4, Var1.f_8, 0, bVar6, bParam4, bVar7)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
}}}
iVar4++;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_55(123, -1)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
}}
iVar12=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
iVar11=0;
while (iVar11 < iVar12){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar11, &Var9)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0)){
iVar10=(129 + iVar11);
if(func_55(iVar10, iParam3)){
iVar13=func_54(iVar0, &(Var9.f_7), Var9.f_6);
bVar5=false;
if(iVar3 !=-1 && iVar13 !=-1){
if(iVar10 !=iParam1){
if(Var9.f_6 !=0){
if(func_255(iVar13, iVar3)){
bVar5=true;
if(bParam2){
func_256(iVar10, 0, -1);
}
}}}
}
if(!bVar5 && func_52(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, 0, bVar6, bParam4, bVar7)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
func_51(iParam0, Var9.f_2, Var9.f_3);
}}}}
iVar11++;
}}}

int func_255(int iParam0, int iParam1){
if(iParam0==iParam1){
return 1;
}
if(iParam0==-1 || iParam1==-1){
return 0;
}
switch (iParam0){
case 0:
switch (iParam1){
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
case 27:
return 1;
default:
}
break;
case 1:
switch (iParam1){
case 0:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 11:
case 27:
return 1;
default:
}
break;
case 2:
switch (iParam1){
case 0:
case 1:
case 3:
case 4:
case 5:
case 11:
case 27:
return 1;
default:
}
break;
case 3:
switch (iParam1){
case 0:
case 1:
case 2:
case 5:
case 11:
return 1;
default:
}
break;
case 4:
switch (iParam1){
case 0:
case 1:
case 2:
case 11:
case 27:
return 1;
default:
}
break;
case 5:
switch (iParam1){
case 0:
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 6:
switch (iParam1){
case 0:
case 1:
case 7:
case 8:
case 9:
case 10:
case 11:
case 27:
return 1;
default:
}
break;
case 7:
switch (iParam1){
case 0:
case 1:
case 6:
case 8:
case 11:
case 27:
return 1;
default:
}
break;
case 8:
switch (iParam1){
case 0:
case 1:
case 6:
case 7:
case 10:
case 11:
case 27:
return 1;
default:
}
break;
case 9:
switch (iParam1){
case 0:
case 1:
case 6:
return 1;
default:
}
break;
case 10:
switch (iParam1){
case 0:
case 6:
case 8:
case 27:
return 1;
default:
}
break;
case 11:
switch (iParam1){
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 7:
case 8:
case 27:
return 1;
default:
}
break;
case 12:
switch (iParam1){
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 27:
return 1;
default:
}
break;
case 13:
switch (iParam1){
case 12:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 23:
case 27:
return 1;
default:
}
break;
case 14:
switch (iParam1){
case 12:
case 13:
case 15:
case 16:
case 17:
case 23:
case 27:
return 1;
default:
}
break;
case 15:
switch (iParam1){
case 12:
case 13:
case 14:
case 17:
case 23:
return 1;
default:
}
break;
case 16:
switch (iParam1){
case 12:
case 13:
case 14:
case 23:
case 27:
return 1;
default:
}
break;
case 17:
switch (iParam1){
case 12:
case 13:
case 14:
case 15:
return 1;
default:
}
break;
case 18:
switch (iParam1){
case 12:
case 13:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 27:
return 1;
default:
}
break;
case 19:
switch (iParam1){
case 12:
case 13:
case 18:
case 19:
case 20:
case 23:
case 27:
return 1;
default:
}
break;
case 20:
switch (iParam1){
case 12:
case 13:
case 18:
case 19:
case 20:
case 22:
case 23:
case 27:
return 1;
default:
}
break;
case 21:
switch (iParam1){
case 12:
case 13:
case 18:
case 21:
return 1;
default:
}
break;
case 22:
switch (iParam1){
case 12:
case 18:
case 20:
case 22:
case 27:
return 1;
default:
}
break;
case 23:
switch (iParam1){
case 12:
case 13:
case 14:
case 15:
case 16:
case 18:
case 19:
case 20:
case 23:
case 27:
return 1;
default:
}
break;
case 24:
switch (iParam1){
case 24:
return 1;
default:
}
break;
case 25:
switch (iParam1){
case 25:
return 1;
default:
}
break;
case 26:
switch (iParam1){
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
return 1;
default:
}
break;
case 27:
switch (iParam1){
case 27:
case 26:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 0:
case 1:
case 2:
case 4:
case 6:
case 7:
case 8:
case 10:
case 11:
case 12:
case 13:
case 14:
case 16:
case 18:
case 19:
case 20:
case 22:
case 23:
return 1;
default:
}
break;
case 28:
switch (iParam1){
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
return 1;
default:
}
break;
case 29:
switch (iParam1){
case 26:
case 27:
case 28:
case 29:
return 1;
default:
}
break;
case 30:
switch (iParam1){
case 26:
case 27:
case 28:
case 30:
case 31:
case 32:
return 1;
default:
}
break;
case 31:
switch (iParam1){
case 26:
case 27:
case 28:
case 30:
case 31:
return 1;
default:
}
break;
case 32:
switch (iParam1){
case 26:
case 27:
case 28:
case 30:
case 32:
return 1;
default:
}
break;
case 33:
switch (iParam1){
case 26:
case 27:
case 33:
case 34:
case 35:
case 36:
return 1;
default:
}
break;
case 34:
switch (iParam1){
case 26:
case 27:
case 33:
case 34:
return 1;
default:
}
break;
case 35:
switch (iParam1){
case 26:
case 27:
case 33:
case 35:
return 1;
default:
}
break;
case 36:
switch (iParam1){
case 26:
case 27:
case 33:
case 36:
return 1;
default:
}
break;
case 37:
switch (iParam1){
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
return 1;
default:
}
break;
case 38:
switch (iParam1){
case 37:
case 38:
case 39:
case 40:
case 42:
case 44:
case 47:
case 48:
case 49:
case 50:
return 1;
default:
}
break;
case 39:
switch (iParam1){
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
case 47:
case 54:
case 55:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
return 1;
default:
}
break;
case 40:
switch (iParam1){
case 37:
case 38:
case 39:
case 40:
case 41:
case 44:
return 1;
default:
}
break;
case 41:
switch (iParam1){
case 39:
case 37:
case 40:
case 41:
return 1;
default:
}
break;
case 42:
switch (iParam1){
case 37:
case 38:
case 39:
case 42:
case 43:
case 44:
return 1;
default:
}
break;
case 43:
switch (iParam1){
case 39:
case 37:
case 42:
case 43:
return 1;
default:
}
break;
case 44:
switch (iParam1){
case 37:
case 38:
case 39:
case 40:
case 42:
case 44:
return 1;
default:
}
break;
case 45:
switch (iParam1){
case 45:
return 1;
default:
}
break;
case 46:
switch (iParam1){
case 46:
return 1;
default:
}
break;
case 47:
switch (iParam1){
case 38:
case 39:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
return 1;
default:
}
break;
case 48:
switch (iParam1){
case 38:
case 39:
case 47:
case 48:
case 49:
case 50:
case 54:
case 55:
return 1;
default:
}
break;
case 49:
switch (iParam1){
case 38:
case 39:
case 47:
case 48:
case 49:
case 54:
return 1;
default:
}
break;
case 50:
switch (iParam1){
case 38:
case 39:
case 47:
case 48:
case 50:
case 55:
return 1;
default:
}
break;
case 51:
switch (iParam1){
case 39:
case 47:
case 51:
case 52:
case 53:
case 54:
case 55:
return 1;
default:
}
break;
case 52:
switch (iParam1){
case 39:
case 47:
case 51:
case 52:
case 54:
return 1;
default:
}
break;
case 53:
switch (iParam1){
case 39:
case 47:
case 51:
case 53:
case 55:
return 1;
default:
}
break;
case 54:
switch (iParam1){
case 39:
case 47:
case 51:
case 52:
case 48:
case 49:
return 1;
default:
}
break;
case 55:
switch (iParam1){
case 39:
case 47:
case 51:
case 53:
case 48:
case 50:
return 1;
default:
}
break;
case 56:
switch (iParam1){
case 56:
return 1;
default:
}
break;
case 57:
switch (iParam1){
case 57:
return 1;
default:
}
break;
case 58:
switch (iParam1){
case 58:
return 1;
default:
}
break;
case 59:
switch (iParam1){
case 59:
case 61:
case 63:
return 1;
default:
}
break;
case 60:
switch (iParam1){
case 60:
return 1;
default:
}
break;
case 61:
switch (iParam1){
case 59:
case 61:
case 62:
return 1;
default:
}
break;
case 62:
switch (iParam1){
case 61:
case 62:
return 1;
default:
}
break;
case 63:
switch (iParam1){
case 59:
case 63:
case 64:
return 1;
default:
}
break;
case 64:
switch (iParam1){
case 63:
case 64:
return 1;
default:
}
break;
case 65:
switch (iParam1){
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
return 1;
default:
}
break;
case 66:
switch (iParam1){
case 65:
case 66:
case 68:
case 69:
case 71:
case 72:
case 73:
case 74:
case 76:
case 77:
case 78:
case 79:
return 1;
default:
}
break;
case 67:
switch (iParam1){
case 65:
case 67:
case 68:
case 70:
case 71:
case 72:
case 73:
case 75:
case 76:
case 77:
case 79:
case 80:
return 1;
default:
}
break;
case 68:
switch (iParam1){
case 65:
case 66:
case 67:
case 68:
case 69:
case 70:
case 71:
case 72:
case 78:
return 1;
default:
}
break;
case 69:
switch (iParam1){
case 65:
case 66:
case 68:
case 69:
case 71:
case 72:
case 78:
return 1;
default:
}
break;
case 70:
switch (iParam1){
case 65:
case 67:
case 68:
case 70:
case 71:
case 72:
return 1;
default:
}
break;
case 71:
switch (iParam1){
case 65:
case 66:
case 67:
case 68:
case 69:
case 70:
case 71:
return 1;
default:
}
break;
case 72:
switch (iParam1){
case 65:
case 66:
case 67:
case 68:
case 69:
case 70:
case 72:
return 1;
default:
}
break;
case 73:
switch (iParam1){
case 65:
case 66:
case 67:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 1;
default:
}
break;
case 74:
switch (iParam1){
case 65:
case 66:
case 73:
case 74:
case 76:
case 77:
case 78:
case 79:
return 1;
default:
}
break;
case 75:
switch (iParam1){
case 65:
case 67:
case 73:
case 75:
case 76:
case 77:
case 79:
case 80:
return 1;
default:
}
break;
case 76:
switch (iParam1){
case 65:
case 66:
case 67:
case 73:
case 74:
case 75:
case 76:
case 80:
return 1;
default:
}
break;
case 77:
switch (iParam1){
case 65:
case 66:
case 67:
case 73:
case 74:
case 75:
case 77:
case 80:
return 1;
default:
}
break;
case 78:
switch (iParam1){
case 65:
case 66:
case 68:
case 69:
case 73:
case 74:
case 78:
return 1;
default:
}
break;
case 79:
switch (iParam1){
case 65:
case 66:
case 67:
case 73:
case 74:
case 75:
case 79:
return 1;
default:
}
break;
case 80:
switch (iParam1){
case 65:
case 67:
case 73:
case 75:
case 76:
case 77:
case 80:
return 1;
default:
}
break;
case 81:
switch (iParam1){
case 81:
case 82:
case 83:
case 84:
case 85:
case 86:
case 87:
case 88:
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
default:
}
break;
case 82:
switch (iParam1){
case 81:
case 82:
case 84:
case 85:
case 87:
case 88:
case 89:
case 90:
case 92:
case 93:
case 94:
case 95:
return 1;
default:
}
break;
case 83:
switch (iParam1){
case 81:
case 83:
case 84:
case 86:
case 87:
case 88:
case 89:
case 91:
case 92:
case 93:
case 95:
case 96:
return 1;
default:
}
break;
case 84:
switch (iParam1){
case 81:
case 82:
case 83:
case 84:
case 85:
case 86:
case 87:
case 88:
case 94:
return 1;
default:
}
break;
case 85:
switch (iParam1){
case 81:
case 82:
case 84:
case 85:
case 87:
case 88:
case 94:
return 1;
default:
}
break;
case 86:
switch (iParam1){
case 81:
case 83:
case 84:
case 86:
case 87:
case 88:
return 1;
default:
}
break;
case 87:
switch (iParam1){
case 81:
case 82:
case 83:
case 84:
case 85:
case 86:
case 87:
return 1;
default:
}
break;
case 88:
switch (iParam1){
case 81:
case 82:
case 83:
case 84:
case 85:
case 86:
case 88:
return 1;
default:
}
break;
case 89:
switch (iParam1){
case 81:
case 82:
case 83:
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
default:
}
break;
case 90:
switch (iParam1){
case 81:
case 82:
case 89:
case 90:
case 92:
case 93:
case 94:
case 95:
return 1;
default:
}
break;
case 91:
switch (iParam1){
case 81:
case 83:
case 89:
case 91:
case 92:
case 93:
case 95:
case 96:
return 1;
default:
}
break;
case 92:
switch (iParam1){
case 81:
case 82:
case 83:
case 89:
case 90:
case 91:
case 92:
case 96:
return 1;
default:
}
break;
case 93:
switch (iParam1){
case 81:
case 82:
case 83:
case 89:
case 90:
case 91:
case 93:
case 96:
return 1;
default:
}
break;
case 94:
switch (iParam1){
case 81:
case 82:
case 84:
case 85:
case 89:
case 90:
case 94:
return 1;
default:
}
break;
case 95:
switch (iParam1){
case 81:
case 82:
case 83:
case 89:
case 90:
case 91:
case 95:
return 1;
default:
}
break;
case 96:
switch (iParam1){
case 81:
case 83:
case 89:
case 91:
case 92:
case 93:
case 96:
return 1;
default:
}
break;
case 97:
switch (iParam1){
case 97:
return 1;
default:
}
break;
case 98:
switch (iParam1){
case 98:
return 1;
default:
}
break;
default:
break;
}
return 0;
}


void func_256(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_55(iParam0, iParam2)){
func_257(iParam0, 1, iParam2);
}}elseif(func_55(iParam0, iParam2)){
func_257(iParam0, 0, iParam2);
}}


void func_257(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_57(iParam0, iParam2);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_56(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_56(iVar1));
}
if(!func_258(0)){
iVar2=func_59(iParam0);
if(iVar2 !=14192){
func_216(iVar2, iVar0, iParam2, 1, 0);
}}}}


bool func_258(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
if(!PED::IS_PED_INJURED(iParam0)){
if(func_61(iParam0)){
return;
}
if(iParam1==11 || iParam1==8){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam1==11){
if(func_266(iVar0, iParam2, -1)){
iParam1=8;
iParam2=func_67(iParam0, iParam1);
}}elseif(iParam1==8){
iVar1=func_67(iParam0, 11);
if(!func_266(iVar0, iVar1, -1)){
return;
}}
func_265(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
if(iParam1==11){
if(((((!func_261(iVar0, iParam2, 13) && !func_261(iVar0, iParam2, 14)) && !func_261(iVar0, iParam2, 15)) && !func_261(iVar0, iParam2, 16)) && !func_261(iVar0, iParam2, 71)) && !func_261(iVar0, iParam2, 72)){
func_265(MISC::GET_HASH_KEY("crewLogo"), iParam0);
}}
iVar2=func_154(iVar0, iParam1, iParam2, iParam4);
if(iVar2 !=-1){
if(iParam3==1){
func_260(iParam0, iVar2, 0);
}else{
func_256(iVar2, 1, Global_78338);
}}}}}


void func_260(int iParam0, int iParam1, int iParam2){
int iVar0;
struct<6> Var1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1 !=-1){
iVar0=func_156(iParam0);
if(!func_55(iParam1, -1) || iParam2){
if(func_36(&Var1, iParam1, iVar0, iParam0, -1)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
func_51(iParam0, Var1.f_4, Var1.f_5);
}}}}}

int func_261(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!func_266(iParam0, iParam1, -1)){
if(iParam0==joaat("mp_m_freemode_01")){
iVar0=-1;
iVar1=-1;
if(iParam1 >=237){
iVar1=func_62(iParam0, iParam1, 11, 3);
iVar0=func_264(iVar1);
}
if(iVar1 !=-1 && func_263(iVar1, 0) !=-1){
return 0;
}
if(iVar1 !=-1 && func_262(iVar1, 0) !=-1){
return 0;
}
if(iVar1 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("no_crew_emblem"), 0)){
return 0;
}
if((iVar1==joaat("dlc_mp_val_m_jbib2_0") || iVar1==joaat("dlc_mp_val_m_jbib2_1")) || iVar1==joaat("dlc_mp_val_m_jbib2_2")){
return 0;
}
if((((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=16 && iParam1 <=31)) || (iParam1 >=124 && iParam1 <=139)) || iVar0==0) || iVar0==1) || iVar0==8){
if(iParam2==15){
return 1;
}elseif(iParam2==13 || iParam2==14){
if(func_154(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=80 && iParam1 <=95) || iVar0==5){
if((iParam2==16 || iParam2==71) || iParam2==72){
return 1;
}}elseif((iParam1 >=140 && iParam1 <=155) || iVar0==9){
if(iParam2==13 || iParam2==15){
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar2=-1;
iVar3=-1;
if(iParam1 >=256){
iVar3=func_62(iParam0, iParam1, 11, 4);
iVar2=func_264(iVar3);
}
if(iVar3 !=-1 && func_263(iVar3, 0) !=-1){
return 0;
}
if(iVar3 !=-1 && func_262(iVar3, 0) !=-1){
return 0;
}
if(iVar3 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("no_crew_emblem"), 0)){
return 0;
}
if((iParam1 >=0 && iParam1 <=15) || iVar2==0){
if(iParam2==13 || iParam2==15){
if(func_154(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=32 && iParam1 <=47) || iVar2==2){
if(iParam2==13 || iParam2==16){
if(func_154(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=64 && iParam1 <=79) || iVar2==4){
if(iParam2==13){
return 1;
}
if(iParam2==15){
if(iVar2 !=4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("tat_decl"), 0)){
return 1;
}}}elseif((iParam1 >=80 && iParam1 <=95) || iVar2==5){
if(iParam2==13){
return 1;
}}elseif((iParam1 >=144 && iParam1 <=159) || iVar2==9){
if(iParam2==14){
return 1;
}}}}
return 0;
}

int func_262(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 38465448, iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1469891622, iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -502321359, iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -792359778, iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 997614074, iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 748799057, iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 653048039, iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1685128312, iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1892460036, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -296738547, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_263(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_264(int iParam0){
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


void func_265(int iParam0, int iParam1){
struct<12> Var0;
int iVar1;
int iVar2;
int iVar3;
struct<7> Var4;
int iVar5;
int iVar6;
struct<7> Var7;
int iVar8;
int iVar9;
struct<7> Var10;
int iVar11;
int iVar12;
struct<7> Var13;
int iVar14;
if(!PED::IS_PED_INJURED(iParam1)){
iVar1=func_156(iParam1);
if(iParam0 !=0){
if(iVar1==3 || iVar1==4){
if(iParam0==1019352240){
func_256(13, 0, Global_78338);
func_256(14, 0, Global_78338);
func_256(15, 0, Global_78338);
func_256(16, 0, Global_78338);
func_256(71, 0, Global_78338);
func_256(72, 0, Global_78338);
return;
}elseif(iParam0==joaat("torsoDecal")){
if(iVar1==3){
func_256(73, 0, Global_78338);
func_256(74, 0, Global_78338);
func_256(75, 0, Global_78338);
func_256(76, 0, Global_78338);
func_256(77, 0, Global_78338);
func_256(78, 0, Global_78338);
func_256(79, 0, Global_78338);
func_256(80, 0, Global_78338);
func_256(81, 0, Global_78338);
func_256(82, 0, Global_78338);
func_256(83, 0, Global_78338);
func_256(84, 0, Global_78338);
func_256(85, 0, Global_78338);
func_256(86, 0, Global_78338);
func_256(90, 0, Global_78338);
func_256(91, 0, Global_78338);
func_256(124, 0, Global_78338);
func_256(125, 0, Global_78338);
func_256(87, 0, Global_78338);
func_256(88, 0, Global_78338);
func_256(89, 0, Global_78338);
iVar3=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
iVar2=0;
while (iVar2 < iVar3){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4)){
if(Var4.f_6==joaat("torsoDecal")){
func_256((129 + iVar2), 0, Global_78338);
}}
iVar2++;
}}else{
func_256(73, 0, Global_78338);
func_256(74, 0, Global_78338);
func_256(75, 0, Global_78338);
func_256(76, 0, Global_78338);
func_256(77, 0, Global_78338);
func_256(78, 0, Global_78338);
func_256(79, 0, Global_78338);
func_256(80, 0, Global_78338);
func_256(81, 0, Global_78338);
func_256(82, 0, Global_78338);
func_256(83, 0, Global_78338);
func_256(84, 0, Global_78338);
func_256(85, 0, Global_78338);
func_256(92, 0, Global_78338);
func_256(87, 0, Global_78338);
func_256(88, 0, Global_78338);
func_256(89, 0, Global_78338);
iVar6=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
iVar5=0;
while (iVar5 < iVar6){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7)){
if(Var7.f_6==joaat("torsoDecal")){
func_256((129 + iVar5), 0, Global_78338);
}}
iVar5++;
}}}elseif(iParam0==2140335355){
if(iVar1==3){
func_256(93, 0, Global_78338);
func_256(94, 0, Global_78338);
func_256(95, 0, Global_78338);
func_256(96, 0, Global_78338);
func_256(97, 0, Global_78338);
func_256(98, 0, Global_78338);
func_256(99, 0, Global_78338);
func_256(100, 0, Global_78338);
func_256(101, 0, Global_78338);
func_256(102, 0, Global_78338);
func_256(103, 0, Global_78338);
func_256(104, 0, Global_78338);
func_256(105, 0, Global_78338);
func_256(106, 0, Global_78338);
func_256(107, 0, Global_78338);
func_256(108, 0, Global_78338);
func_256(109, 0, Global_78338);
func_256(110, 0, Global_78338);
func_256(111, 0, Global_78338);
func_256(112, 0, Global_78338);
func_256(113, 0, Global_78338);
func_256(114, 0, Global_78338);
func_256(115, 0, Global_78338);
func_256(116, 0, Global_78338);
func_256(117, 0, Global_78338);
func_256(123, 0, Global_78338);
iVar9=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
iVar8=0;
while (iVar8 < iVar9){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10)){
if(Var10.f_6==2140335355){
func_256((129 + iVar8), 0, Global_78338);
}}
iVar8++;
}}else{
func_256(93, 0, Global_78338);
func_256(94, 0, Global_78338);
func_256(95, 0, Global_78338);
func_256(96, 0, Global_78338);
func_256(97, 0, Global_78338);
func_256(98, 0, Global_78338);
func_256(99, 0, Global_78338);
func_256(100, 0, Global_78338);
func_256(101, 0, Global_78338);
func_256(102, 0, Global_78338);
func_256(103, 0, Global_78338);
func_256(104, 0, Global_78338);
func_256(105, 0, Global_78338);
func_256(106, 0, Global_78338);
func_256(107, 0, Global_78338);
func_256(108, 0, Global_78338);
func_256(109, 0, Global_78338);
func_256(110, 0, Global_78338);
func_256(111, 0, Global_78338);
func_256(112, 0, Global_78338);
func_256(113, 0, Global_78338);
func_256(114, 0, Global_78338);
func_256(115, 0, Global_78338);
func_256(116, 0, Global_78338);
func_256(117, 0, Global_78338);
func_256(118, 0, Global_78338);
func_256(119, 0, Global_78338);
func_256(120, 0, Global_78338);
func_256(121, 0, Global_78338);
func_256(122, 0, Global_78338);
func_256(123, 0, Global_78338);
iVar12=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
iVar11=0;
while (iVar11 < iVar12){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13)){
if(Var13.f_6==2140335355){
func_256((129 + iVar11), 0, Global_78338);
}}
iVar11++;
}}
return;
}}
iVar14=0;
while (iVar14 < 127){
if(func_36(&Var0, iVar14, iVar1, iParam1, -1)){
if(Var0.f_8==iParam0){
func_256(Var0.f_11, 0, Global_78338);
}}
iVar14++;
}}}}

int func_266(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(((((iParam1 >=48 && iParam1 < 64) || (iParam1 >=64 && iParam1 < 80)) || (iParam1 >=96 && iParam1 < 108)) || (iParam1 >=108 && iParam1 < 124)) || (iParam1 >=156 && iParam1 < 172)){
return 1;
}
if(iParam2==-1 && iParam1 >=237){
iParam2=func_62(iParam0, iParam1, 11, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("jacket"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if(((((iParam1 >=16 && iParam1 < 32) || (iParam1 >=96 && iParam1 < 112)) || (iParam1 >=112 && iParam1 < 128)) || (iParam1 >=128 && iParam1 < 144)) || (iParam1 >=160 && iParam1 < 176)){
return 1;
}
if(iParam2==-1 && iParam1 >=256){
iParam2=func_62(iParam0, iParam1, 11, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("jacket"), 0)){
return 1;
}
break;
}
return 0;
}


void func_267(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_0=-1428749433;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);
if(!iParam1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 4, iParam1);
}}}

int func_268(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
int iVar2;
bVar1=false;
while (bVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_5(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_170(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


void func_269(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/])){
CAM::SET_CAM_ACTIVE((*uParam0)[iVar0 /*12*/], 0);
}
iVar0++;
}}


void func_270(){
int iVar0;
int iVar1;
int iVar2;
struct<9> Var3;
int iVar4;
int iVar5;
char* sVar6;
char* sVar7;
float fVar8;
float fVar9;
float fVar10;
struct<4> Var11;
float fVar12;
struct<4> Var13;
char cVar14[16];
int iVar15;
struct<6> Var16;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
iVar0=0;
iVar1=7;
iVar2=-1;
func_271(Local_70.f_119.f_3, &iVar1, &iVar2, 0, 0);
if(iVar1==2 || iVar1==3){
iVar4=func_156(PLAYER::PLAYER_PED_ID());
if(func_36(&Var3, Local_70.f_503, iVar4, PLAYER::PLAYER_PED_ID(), -1)){
iVar5=func_54(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var3, Var3.f_8);
if((iVar5==5 || iVar5==9) || iVar5==3){
iVar0=1;
}
if((iVar5==17 || iVar5==21) || iVar5==15){
iVar0=2;
}}}
if(iVar0 !=iLocal_194){
if(!STREAMING::DOES_ANIM_DICT_EXIST(sLocal_158)){
return;
}
STREAMING::REQUEST_ANIM_DICT(sLocal_158);
if(!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_158)){
return;
}
sVar6="";
sVar7="";
switch (iVar0){
case 0:
switch (iLocal_194){
case 1:
sVar6="LEFT_ARM_OUTRO";
break;
case 2:
sVar6="RIGHT_ARM_OUTRO";
break;
}
sVar7="";
break;
case 1:
switch (iLocal_194){
case 0:
sVar6="LEFT_ARM_INTRO";
break;
case 2:
sVar6="LEFT_ARM_INTRO";
break;
}
sVar7="LEFT_ARM_BASE";
break;
case 2:
switch (iLocal_194){
case 0:
sVar6="RIGHT_ARM_INTRO";
break;
case 1:
sVar6="RIGHT_ARM_INTRO";
break;
}
sVar7="RIGHT_ARM_BASE";
break;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar6)){
if(!MISC::ARE_STRINGS_EQUAL(&Local_195, sVar6)){
fVar8=4f;
fVar9=-2f;
TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, sVar6, fVar8, fVar9, -1, 2, 0, 0, 0, 0);
StringCopy(&Local_195, sVar6, 16);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_71.f_2, sLocal_158, sVar6, 3)){
fVar10=ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_71.f_2, sLocal_158, sVar6);
if(fVar10 >=0.95f){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar7)){
TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, sVar7, 8f, -8f, -1, 1, 0, 0, 0, 0);
}else{
TASK::CLEAR_PED_TASKS(Local_71.f_2);
STREAMING::REMOVE_ANIM_DICT(sLocal_158);
}
StringCopy(&Local_195, sVar7, 16);
iLocal_194=iVar0;
}}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&Local_195)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_71.f_2, sLocal_158, &Local_195, 3)){
Var11={
Local_195 
};
fVar12=ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_71.f_2, sLocal_158, &Var11);
iVar15=(HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_INTRO"));
StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
if(MISC::ARE_STRINGS_EQUAL(&cVar14, "_INTRO")){
StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
if(fVar12 >=0.95f && iLocal_194==0){
if(iVar1==2 || MISC::ARE_STRINGS_EQUAL(&Var13, "LEFT_ARM")){
iLocal_194=1;
}elseif(iVar1==3 || MISC::ARE_STRINGS_EQUAL(&Var13, "RIGHT_ARM")){
iLocal_194=2;
}}}elseif(MISC::ARE_STRINGS_EQUAL(&cVar14, "_OUTRO")){
StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
if(fVar12 >=0.95f && iLocal_194 !=0){
iLocal_194=0;
}}else{
iVar15=(HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_BASE"));
StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
if(!MISC::ARE_STRINGS_EQUAL(&cVar14, "_BASE")){
iVar15=(HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_IDLE_A"));
StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
}
StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
if(fVar12 >=0.95f){
MemCopy(&Var16,{
Var13
}
, 6);
if(!MISC::ARE_STRINGS_EQUAL(&cVar14, "_BASE")){
StringConCat(&Var16, "_BASE", 24);
}else{
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3)){
case 0:
StringConCat(&Var16, "_IDLE_A", 24);
break;
case 1:
StringConCat(&Var16, "_IDLE_B", 24);
break;
case 2:
StringConCat(&Var16, "_IDLE_C", 24);
break;
}}
MemCopy(&Local_195,{
Var16
}
, 4);
TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, &Var16, 8f, -8f, -1, 1, 0, 0, 0, 0);
}}}}}

int func_271(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
*iParam1=7;
*iParam2=-1;
switch (iParam0){
case 0:
*iParam1=0;
*iParam2=0;
return 1;
break;
case 1:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return iParam4;
}
*iParam1=0;
*iParam2=1;
return 1;
break;
case 2:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return iParam4;
}
*iParam1=0;
*iParam2=2;
return 1;
break;
case 3:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return iParam4;
}
*iParam1=0;
*iParam2=3;
return 1;
break;
case 4:
*iParam1=1;
return 1;
break;
case 5:
*iParam1=2;
return 1;
break;
case 6:
*iParam1=3;
return 1;
break;
case 7:
*iParam1=4;
return 1;
break;
case 8:
*iParam1=5;
return 1;
break;
}
if(!bParam3){}
return 0;
}


void func_272(){
int iVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_70.f_569){
iVar0=0;
while (iVar0 < 12){
if(iVar0 !=0){
PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_504.f_13[iVar0], Local_70.f_504[iVar0]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
if(Local_70.f_504.f_39[iVar0] !=-1){
PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_504.f_39[iVar0], Local_70.f_504.f_49[iVar0]);
}
iVar0++;
}}}


void func_273(){
bool bVar0;
struct<3> Var1;
int iVar2;
int iVar3;
struct<3> Var4;
var uVar5;
var uVar6;
int iVar7;
int iVar8;
struct<13> Var9;
int iVar10;
int iVar11;
int iVar12;
float fVar13;
struct<3> Var14;
float fVar15;
bVar0=((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_70.f_119.f_31 !=6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100733.f_1474);
if(!bVar0){
return;
}
Var1={
-0.1f, 1.3129f, 0.5072f 
};
if(Local_70.f_0==54){
Var1={
-0.1f, 1.4f, 0.506f 
};
}
iVar2=7;
iVar3=-1;
func_271(Local_70.f_119.f_3, &iVar2, &iVar3, 0, 0);
switch (iVar2){
case 4:
Var1={
Var1 + Vector(-0.8058f, 0f, 0f) 
};
break;
case 5:
Var1={
Var1 + Vector(-0.8058f, 0f, 0f) 
};
break;
}
Var4={
Local_144 
};
switch (iVar2){
case 4:
Var4={
Var4 + Vector(-0.8058f, 0f, 0f) 
};
break;
case 5:
Var4={
Var4 + Vector(-0.8058f, 0f, 0f) 
};
break;
}
if(!CAM::DOES_CAM_EXIST(Local_70.f_54[0 /*12*/])){
Local_70.f_54[0 /*12*/]=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
if(!CAM::IS_CAM_ACTIVE(Local_70.f_54[0 /*12*/])){
Local_70.f_54[0 /*12*/].f_7=52f;
fLocal_146=0f;
fLocal_147=0f;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Local_70.f_54[0 /*12*/].f_4.f_2=(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 0f);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2)){
if(!PED::IS_PED_INJURED(Local_71.f_2)){
Local_70.f_54[0 /*12*/].f_4.f_2=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
}}
while (Local_70.f_54[0 /*12*/].f_4.f_2 < -180f){
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 + 360f);
}
while (Local_70.f_54[0 /*12*/].f_4.f_2 > 180f){
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 - 360f);
}
fLocal_150=Local_70.f_54[0 /*12*/].f_4.f_2;
Local_70.f_54[0 /*12*/].f_1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_143, Local_70.f_54[0 /*12*/].f_4.f_2, Var1) 
};
Local_70.f_54[0 /*12*/].f_11=0;
Local_144={
Local_143 + Vector(0.25f, 0f, 0f) 
};
Local_145={
Local_144 
};
}else{
Local_145={
Local_145 + Var4 - Local_145 * Vector(0.25f, 0.25f, 0.25f) 
};
}
if(fLocal_147==0f || fLocal_147==1f){
func_278(&uVar5, &uVar6, &iVar7, &iVar8, 0);
if((iVar7 < 32 && iVar7 > -32) && (iVar8 < 32 && iVar8 > -32)){
if(iVar7 < 32 && iVar7 > -32){
iVar7=0;
}elseif(iVar7 < 0){
iVar7=(iVar7 - 32);
}else{
iVar7 +=32;
}
if(iVar8 < 32 && iVar8 > -32){
iVar8=0;
}elseif(iVar8 < 0){
iVar8=(iVar8 - 32);
}else{
iVar8 +=32;
}}
iVar7=(iVar7 * -1);
if(PAD::IS_LOOK_INVERTED()){
iVar8=(iVar8 * -1);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(func_277(1, -1, 1)){
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 - (Global_4541027 * 400f));
}}else{
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 + (IntToFloat(iVar7) * 0.05f));
}}
while (Local_70.f_54[0 /*12*/].f_4.f_2 < -180f){
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 + 360f);
}
while (Local_70.f_54[0 /*12*/].f_4.f_2 > 180f){
Local_70.f_54[0 /*12*/].f_4.f_2=(Local_70.f_54[0 /*12*/].f_4.f_2 - 360f);
}
while (fLocal_148 < -180f){
fLocal_148=(fLocal_148 + 360f);
}
while (fLocal_148 > 180f){
fLocal_148=(fLocal_148 - 360f);
}
iVar10=func_156(PLAYER::PLAYER_PED_ID());
if(((iVar2==0 || iVar2==2) || iVar2==3) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_36(&Var9, Local_70.f_503, iVar10, PLAYER::PLAYER_PED_ID(), -1)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!iLocal_151){
if(Var9.f_12==1){
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
fLocal_149=(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 190f);
}elseif(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2)){
if(!PED::IS_PED_INJURED(Local_71.f_2)){
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
}}
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_151=1;
}
else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_275(fLocal_148, fLocal_149, fLocal_147);
}}elseif(fLocal_147 !=0f && fLocal_147 !=1f){
fLocal_147=1f;
iLocal_151=1;
}}elseif(Var9.f_12 !=1){
if(fLocal_147==1f){
fLocal_148=fLocal_150;
fLocal_149=Local_70.f_54[0 /*12*/].f_4.f_2;
}
fLocal_147=(fLocal_147 - 0.05f);
if(fLocal_147 <=0f){
fLocal_147=0f;
iLocal_151=0;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_275(fLocal_148, fLocal_149, fLocal_147);
}}elseif(fLocal_147 !=0f && fLocal_147 !=1f){
fLocal_147=0f;
iLocal_151=0;
}}else{
if(iVar10==4){
if(Var9.f_12==4){
Var9.f_12=2;
}
if(Var9.f_12==6){
Var9.f_12=3;
}
iVar11=Var9.f_12;
switch (MISC::GET_HASH_KEY(&Var9)){
case 1334929540:
iVar11=1;
break;
case joaat("TAT_FM_017"):
iVar11=1;
break;
case joaat("TAT_FM_222"):
iVar11=1;
break;
case joaat("TAT_FM_227"):
iVar11=1;
break;
case joaat("TAT_FM_234"):
iVar11=1;
break;
case joaat("TAT_FM_236"):
iVar11=1;
break;
case joaat("TAT_FM_238"):
iVar11=1;
break;
case -1780827729:
iVar11=1;
break;
case 214410819:
iVar11=1;
break;
case 332555747:
iVar11=1;
break;
case 61892743:
iVar11=1;
break;
case joaat("TAT_FM_014"):
iVar11=1;
break;
case joaat("TAT_FM_223"):
iVar11=1;
break;
case joaat("TAT_FM_240"):
iVar11=1;
break;
case joaat("TAT_FM_241"):
iVar11=0;
break;
case joaat("TAT_FM_243"):
iVar11=2;
break;
case joaat("TAT_FM_244"):
iVar11=1;
break;
case 1093030262:
iVar11=3;
break;
case 1332632858:
iVar11=1;
break;
case -569087776:
iVar11=3;
break;
case joaat("TAT_FM_235"):
iVar11=0;
break;
case 1824417551:
iVar11=3;
break;
case 391708136:
iVar11=2;
break;
case 747545215:
iVar11=2;
break;
case 1097124907:
iVar11=3;
break;
case -1478763187:
iVar11=1;
break;
case -1350521631:
iVar11=2;
break;
case -716244867:
iVar11=1;
break;
case 22777707:
iVar11=0;
break;
case 1142887665:
iVar11=0;
break;
case joaat("TAT_FM_229"):
iVar11=3;
break;
case joaat("TAT_FM_247"):
iVar11=3;
break;
case -955835485:
iVar11=1;
break;
case -1881592504:
iVar11=0;
break;
case 497993745:
iVar11=0;
break;
case 799173624:
iVar11=1;
break;
case -2098342992:
iVar11=1;
break;
}
if(iVar11 !=Var9.f_12){
Var9.f_12=iVar11;
}}elseif(iVar10==3){
if(Var9.f_12==4 || Var9.f_12==5){
Var9.f_12=2;
}
if(Var9.f_12==6 || Var9.f_12==7){
Var9.f_12=3;
}
iVar12=Var9.f_12;
switch (MISC::GET_HASH_KEY(&Var9)){
case -1570115700:
iVar12=1;
break;
case joaat("TAT_FM_017"):
iVar12=1;
break;
case joaat("TAT_FM_209"):
iVar12=1;
break;
case joaat("TAT_FM_222"):
iVar12=1;
break;
case joaat("TAT_FM_224"):
iVar12=1;
break;
case joaat("TAT_FM_227"):
iVar12=1;
break;
case joaat("TAT_FM_233"):
iVar12=1;
break;
case joaat("TAT_FM_234"):
iVar12=1;
break;
case joaat("TAT_FM_236"):
iVar12=1;
break;
case joaat("TAT_FM_238"):
iVar12=1;
break;
case -1780827729:
iVar12=1;
break;
case 214410819:
iVar12=1;
break;
case 332555747:
iVar12=1;
break;
case 1824417551:
iVar12=3;
break;
case 979630098:
iVar12=3;
break;
case 211688583:
iVar12=2;
break;
case 1343791995:
iVar12=1;
break;
case -2124501642:
iVar12=1;
break;
case joaat("TAT_FM_014"):
iVar12=1;
break;
case joaat("TAT_FM_223"):
iVar12=1;
break;
case joaat("TAT_FM_240"):
iVar12=1;
break;
case joaat("TAT_FM_244"):
iVar12=1;
break;
case 1093030262:
iVar12=3;
break;
case 1332632858:
iVar12=1;
break;
case -1388618285:
iVar12=0;
break;
case -275651969:
iVar12=1;
break;
case -1478763187:
iVar12=1;
break;
case 1142887665:
iVar12=0;
break;
case 22777707:
iVar12=0;
break;
case -1350521631:
iVar12=2;
break;
case -716244867:
iVar12=1;
break;
case joaat("TAT_FM_229"):
iVar12=3;
break;
case joaat("TAT_FM_247"):
iVar12=3;
break;
case 799173624:
iVar12=1;
break;
case -1256283855:
iVar12=0;
break;
}
if(iVar12 !=Var9.f_12){
Var9.f_12=iVar12;
}}
if(fLocal_147==0f){
iLocal_154=0;
iLocal_153=Var9.f_12;
}elseif(fLocal_147==1f){
}elseif(iLocal_152 !=Var9.f_12){
iLocal_153=Var9.f_12;
}elseif(!iLocal_154){
iLocal_152=iLocal_153;
fLocal_147=0f;
iLocal_154=1;
}
switch (iLocal_152){
case 0:
switch (Var9.f_12){
case 0:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
}
if(fLocal_147 !=0f || iLocal_154){
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=0f;
iLocal_152=Var9.f_12;
}
else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}}
break;
case 1:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 2:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 3:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
default:
break;
}
break;
case 1:
switch (Var9.f_12){
case 0:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 1:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
}
if(fLocal_147 !=0f || iLocal_154){
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=0f;
iLocal_152=Var9.f_12;
}
else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}}
break;
case 2:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 3:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
default:
break;
}
break;
case 2:
switch (Var9.f_12){
case 0:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 1:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 2:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
}
if(fLocal_147 !=0f || iLocal_154){
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=0f;
iLocal_152=Var9.f_12;
}
else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}}
break;
case 3:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
default:
break;
}
break;
case 3:
switch (Var9.f_12){
case 0:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 1:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 2:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
}
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=1f;
iLocal_152=Var9.f_12;
}else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}
break;
case 3:
if(fLocal_147==0f){
fLocal_148=Local_70.f_54[0 /*12*/].f_4.f_2;
fLocal_149=(ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
}
if(fLocal_147 !=0f || iLocal_154){
fLocal_147=(fLocal_147 + 0.05f);
if(fLocal_147 >=1f){
fLocal_147=0f;
iLocal_152=Var9.f_12;
}
else{
Local_70.f_54[0 /*12*/].f_4.f_2=func_274(fLocal_148, fLocal_149, fLocal_147);
}}
break;
default:
break;
}
break;
default:
if(iLocal_152==-1){
switch (Var9.f_12){
case 0:
iLocal_152=1;
break;
case 1:
iLocal_152=0;
break;
case 2:
iLocal_152=3;
break;
case 3:
iLocal_152=2;
break;
default:
break;
}
}
else{
switch (Var9.f_12){
case 0:
break;
case 1:
break;
case 2:
break;
case 3:
break;
default:
break;
}
}
break;
}}}}else{
iLocal_154=0;
fLocal_147=0f;
iLocal_151=0;
iLocal_152=0;
iLocal_153=Var9.f_12;
}
fVar13=34f;
switch (iVar2){
case 4:
fVar13=38f;
break;
case 5:
fVar13=38f;
break;
case 3:
fVar13=36f;
break;
case 2:
fVar13=36f;
break;
case 1:
fVar13=30f;
break;
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_RELEASED(2, iLocal_184)){
iLocal_185=!iLocal_185;
}}else{
iLocal_185=0;
}
if(PAD::IS_CONTROL_PRESSED(2, iLocal_184) || iLocal_185){
if(fLocal_146 < 1f){
fLocal_146=(fLocal_146 + 0.05f);
}
if(fLocal_146 > 1f){
fLocal_146=1f;
}}else{
if(fLocal_146 > 0f){
fLocal_146=(fLocal_146 - 0.05f);
}
if(fLocal_146 < 0f){
fLocal_146=0f;
}}
Var14={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_143, Local_70.f_54[0 /*12*/].f_4.f_2, Var1) 
};
Local_70.f_54[0 /*12*/].f_1=Var14.f_0;
Local_70.f_54[0 /*12*/].f_1.f_1=Var14.f_1;
Local_70.f_54[0 /*12*/].f_1.f_2=(Local_70.f_54[0 /*12*/].f_1.f_2 + ((Var14.f_2 - Local_70.f_54[0 /*12*/].f_1.f_2) * 0.25f));
if(fLocal_146 !=0f){
if(iVar2==1){
fVar15=0.07f;
Local_70.f_54[0 /*12*/].f_1.f_2=func_275(Local_70.f_54[0 /*12*/].f_1.f_2, (Local_70.f_54[0 /*12*/].f_1.f_2 + fVar15), fLocal_146);
Local_145.f_2=func_275(Local_145.f_2, (Local_145.f_2 + fVar15), fLocal_146);
}
Local_70.f_54[0 /*12*/].f_7=func_275(52f, fVar13, fLocal_146);
}
CAM::SET_CAM_COORD(Local_70.f_54[0 /*12*/], Local_70.f_54[0 /*12*/].f_1);
CAM::SET_CAM_FOV(Local_70.f_54[0 /*12*/], Local_70.f_54[0 /*12*/].f_7);
CAM::POINT_CAM_AT_COORD(Local_70.f_54[0 /*12*/], Local_145);
CAM::SET_CAM_NEAR_CLIP(Local_70.f_54[0 /*12*/], 0.7f);
if(!Local_70.f_54[0 /*12*/].f_11){
CAM::SET_CAM_ACTIVE(Local_70.f_54[0 /*12*/], 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
Local_70.f_54[0 /*12*/].f_11=1;
func_178(1, 1, 1, 0);
}}


float func_274(float fParam0, float fParam1, float fParam2){
if(fParam0 > 360f){
fParam0=(fParam0 - 360f);
}elseif(fParam0 < 0f){
fParam0=(fParam0 + 360f);
}
if(fParam1 > (fParam0 + 180f)){
fParam1=(fParam1 - 360f);
}elseif(fParam1 < (fParam0 - 180f)){
fParam1=(fParam1 + 360f);
}
return func_275(fParam0, fParam1, fParam2);
}


float func_275(float fParam0, float fParam1, float fParam2){
float fVar0;
fVar0=((1f - cos(func_276((fParam2 * 3.141593f)))) * 0.5f);
return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}


float func_276(float fParam0){
return (fParam0 * 57.29578f);
}

int func_277(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541029==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541029=-1;
return 0;
}}
if(((Global_4541029 > -1 || Global_4541029==-3) || Global_4541029==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541029==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541029=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}


void func_278(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
*uParam0=floor((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
*uParam2=floor((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
if(bParam4){
if(IntToFloat(*uParam0)==0f && IntToFloat(*uParam1)==0f){
*uParam0=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
}
if(IntToFloat(*uParam2)==0f && IntToFloat(*uParam3)==0f){
*uParam2=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
}}}


void func_279(){
if(MISC::IS_PC_VERSION()){
PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
}}


void func_280(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
var uVar4;
var uVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
bool bVar11;
struct<4> Var12;
var uVar13;
char* sVar14;
int iVar15;
int iVar16;
char cVar17[16];
float fVar18;
float fVar19;
iVar0=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2)){
iVar0=Local_71.f_2;
}
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(iVar0)){
if(NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID())){
if(NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID())){
PED::SET_PED_RESET_FLAG(iVar0, 302, 1);
}}}
bVar1=false;
if(bLocal_176){
bVar1=true;
bLocal_176=false;
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iLocal_184=209;
}else{
iLocal_184=207;
}
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iLocal_141=1;
}
func_593(&(Local_70.f_409), 300);
func_278(&iVar2, &iVar3, &uVar4, &uVar5, 0);
if(Local_70.f_119.f_10 !=0){
if(timera() > 200 || (((iVar3 > -64 && iVar3 < 64) && iVar2 > -64) && iVar2 < 64)){
Local_70.f_119.f_10=0;
}else{
iVar2=0;
iVar3=0;
}}
bVar6=PAD::IS_CONTROL_JUST_PRESSED(2, 201);
bVar7=((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || func_592());
func_591();
if(bVar6 || bVar7){
Local_70.f_409.f_8=0;
Local_70.f_409.f_9=0;
}
bVar8=((iVar3 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_CONTROL_PRESSED(2, 188) && Local_70.f_409.f_8));
bVar9=((iVar3 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_CONTROL_PRESSED(2, 187) && Local_70.f_409.f_9));
bVar10=(iVar3 < -64 || iVar3 > 64);
bVar11=((((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_70.f_119.f_31 !=1) && Local_70.f_119.f_31 !=6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100733.f_1474) && !bVar1);
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
bVar6=false;
bVar7=false;
bVar8=false;
bVar9=false;
bVar10=false;
}
func_590();
if(func_589(&uLocal_186)){}elseif(bVar11 || Local_70.f_119.f_25){
if((MISC::IS_PC_VERSION() && bVar11) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
func_586(0, 0, 0, 1);
}
switch (Local_70.f_119.f_5){
case 0:
if(MISC::IS_PC_VERSION()){
if(func_585()){
if(Global_4541029==Local_70.f_119.f_3){
bVar6=true;
}
else{
Local_70.f_119.f_3=Global_4541029;
func_584(Local_70.f_119.f_3, 1, 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
Local_70.f_409.f_8=0;
Local_70.f_409.f_9=0;
}}
if(func_583()){
bVar7=true;
Local_70.f_409.f_8=0;
Local_70.f_409.f_9=0;
}
if(func_582(Local_70.f_409.f_8, 0, 0)){
bVar8=true;
}
if(func_581(Local_70.f_409.f_9, 0, 0)){
bVar9=true;
}}
if(bVar8){
if(func_580(&(Local_70.f_119.f_3), 1)){
func_584(Local_70.f_119.f_3, 1, 1);
}
if(bVar10){
settimera(0);
Local_70.f_119.f_10=1;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
Local_70.f_409.f_8=0;
Local_70.f_409.f_4=0;
Local_70.f_409.f_20=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Local_70.f_409.f_24=NETWORK::GET_NETWORK_TIME();
}}elseif(bVar9){
if(func_578(&(Local_70.f_119.f_3), 1)){
func_584(Local_70.f_119.f_3, 1, 1);
}
if(bVar10){
settimera(0);
Local_70.f_119.f_10=1;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
Local_70.f_409.f_9=0;
Local_70.f_409.f_4=0;
Local_70.f_409.f_20=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Local_70.f_409.f_24=NETWORK::GET_NETWORK_TIME();
}}elseif(bVar6){
if(Local_70.f_119.f_3 !=-1){
Local_70.f_119.f_5++;
StringCopy(&(Local_70.f_119.f_11), "", 16);
iLocal_181=0;
bVar1=true;
*iParam0=1;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
}elseif(bVar7){
Local_70.f_119.f_31=6;
iLocal_185=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
}
break;
case 1:
if(!func_576(Local_70.f_503) && func_575(Local_70.f_503, "")){
func_568(Local_70.f_503, 1);
Local_70.f_119.f_17=1;
iLocal_174=1;
}
if(MISC::IS_PC_VERSION() && bVar11){
if(func_585()){
if(Global_4541029==Local_70.f_119.f_1){
bVar6=true;
}
else{
if(func_567(&(Local_70.f_503))){
Local_70.f_119.f_1=Global_4541029;
*iParam0=1;
iLocal_141=1;
func_584(Local_70.f_119.f_1, 1, 1);
Local_70.f_119.f_2=func_566();
if(func_565() > 1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
}}
if(iLocal_174==1){
bVar1=true;
iLocal_174=0;
}
}}
if(func_583()){
bVar7=true;
}
if(func_582(Local_70.f_409.f_8, 0, 0)){
bVar8=true;
}
if(func_581(Local_70.f_409.f_9, 0, 0)){
bVar9=true;
}}
if(bVar6 || Local_70.f_119.f_25){
if(Local_70.f_503 !=-1){
if(!func_252(Local_70.f_503)){
if(!func_575(Local_70.f_503, "")){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_564("TAT_LOCK", 4000, 0);
}elseif(func_424() && !Local_70.f_119.f_25){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot", "TATTOOIST_SOUNDS", 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_423(Local_70.f_503);
if(Global_78558){
func_256(Local_70.f_503, 1, -1);
func_422(Local_70.f_503, 1, -1);
}else{
func_421(func_225(), Local_70.f_503, 1);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_420()){
func_22("HUMAN CANVAS", -1);
func_419(21, 1, -1);
}
func_417();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_254(iVar0, Local_70.f_503, 1, -1, 0);
}else{
func_34(iVar0);
}
Global_4536680=1;
iLocal_183=0;
if(iVar0 !=PLAYER::PLAYER_PED_ID()){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_254(PLAYER::PLAYER_PED_ID(), Local_70.f_503, 1, -1, 0);
}
else{
func_34(PLAYER::PLAYER_PED_ID());
}}
func_416(&(Local_70.f_239), 2, 2);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_503 >=129){
StringCopy(&(Local_70.f_119.f_11), "TAT_BUYDLC", 16);
iLocal_181=1;
}else{
StringCopy(&(Local_70.f_119.f_11), "TAT_BUY", 16);
iLocal_181=0;
}
Local_70.f_119.f_17=1;
bLocal_176=true;
iLocal_174=0;
}elseif(!Local_70.f_119.f_25){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Local_182)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_564("TAT_LOCK", 4000, 0);
}elseif(Local_70.f_119.f_24){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_564("TAT_LOCK", 4000, 0);
}elseif(Global_4536674){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_564("TAT_LCKPC", 4000, 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
func_564("TAT_AFF", 4000, 0);
func_414(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(Local_70.f_0, 0, 0)));
func_412(0, 10, 3);
}}
}
else{
if(Global_78558){
func_256(Local_70.f_503, 0, -1);
}else{
func_421(func_225(), Local_70.f_503, 0);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot_Remove", "TATTOOIST_SOUNDS", 1);
func_34(iVar0);
Global_4536680=1;
iLocal_183=0;
if(iVar0 !=PLAYER::PLAYER_PED_ID()){
func_34(PLAYER::PLAYER_PED_ID());
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_503 >=129){
StringCopy(&(Local_70.f_119.f_11), "TAT_REMDLC", 16);
iLocal_181=1;
}else{
StringCopy(&(Local_70.f_119.f_11), "TAT_REM", 16);
iLocal_181=0;
}
Local_70.f_119.f_17=1;
bVar1=true;
}}
iLocal_185=0;
}elseif(bVar9){
if(func_410(Local_70.f_503, &(Local_70.f_503), &(Local_70.f_119.f_1), 1)){
*iParam0=1;
iLocal_141=1;
func_584(Local_70.f_119.f_1, 1, 1);
Local_70.f_119.f_2=func_566();
if(func_565() > 1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
}}
if(bVar10){
settimera(0);
Local_70.f_119.f_10=1;
}
if(iLocal_174==1){
bVar1=true;
iLocal_174=0;
}
Local_70.f_409.f_9=0;
Local_70.f_409.f_4=0;
Local_70.f_409.f_20=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Local_70.f_409.f_24=NETWORK::GET_NETWORK_TIME();
}}elseif(bVar8){
if(func_408(Local_70.f_503, &(Local_70.f_503), &(Local_70.f_119.f_1), 1)){
*iParam0=1;
iLocal_141=1;
func_584(Local_70.f_119.f_1, 1, 1);
Local_70.f_119.f_2=func_566();
if(func_565() > 1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
}}
if(bVar10){
settimera(0);
Local_70.f_119.f_10=1;
}
if(iLocal_174==1){
bVar1=true;
iLocal_174=0;
}
Local_70.f_409.f_8=0;
Local_70.f_409.f_4=0;
Local_70.f_409.f_20=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Local_70.f_409.f_24=NETWORK::GET_NETWORK_TIME();
}}elseif(bVar7){
bVar1=true;
Local_70.f_503=-1;
func_626(0);
func_34(iVar0);
if(iVar0 !=PLAYER::PLAYER_PED_ID()){
func_34(PLAYER::PLAYER_PED_ID());
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
fLocal_147=0f;
Local_70.f_119.f_17=1;
Local_70.f_119.f_5=(Local_70.f_119.f_5 - 1);
}
break;
}}
if(bVar1){
if(!bLocal_176){
func_594(iParam0);
}}
func_360();
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_119.f_31==6){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}
if(iLocal_141){
func_359(-1);
if(Local_70.f_119.f_5==0){
if(Local_70.f_119.f_3 !=-1){
func_358(201, "ITEM_SELECT", -1, 0);
}
func_358(202, "ITEM_BACK", -1, 0);
if(Local_70.f_119.f_3 !=-1){
}
func_355(&uLocal_186);
func_354(21, "ITEM_MOV_CAM", -1);
func_358(iLocal_184, "ITEM_ZOOM", -1, 0);
}elseif(Local_70.f_119.f_5==1){
if(Local_70.f_119.f_1 !=-1){
if(func_252(Local_70.f_503)){
func_358(201, "ITEM_REM", -1, 0);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_352(Local_70.f_503, -1)){
func_358(201, "ITEM_SELECT", -1, 0);
}else{
func_358(201, "ITEM_BUY", -1, 0);
}}
func_358(202, "ITEM_BACK", -1, 0);
if(Local_70.f_119.f_1 !=-1){
}
func_355(&uLocal_186);
func_354(21, "ITEM_MOV_CAM", -1);
func_358(iLocal_184, "ITEM_ZOOM", -1, 0);
}
iLocal_141=0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Local_70.f_119.f_5 !=0){
func_36(&Var12, Local_70.f_503, func_156(iVar0), iVar0, -1);
func_351(&uVar13);
if(MISC::GET_HASH_KEY(&uVar13)==0){
if(Local_70.f_503 >=129){
if(Var12.f_8==joaat("HEAD_RIGHT") || Var12.f_8==joaat("HEAD_LEFT")){
func_564("BB_PACK_HEADTAT", 0, 0);
}elseif(func_350(&Var12)){
func_564("TAT_LCKCREW", 0, 0);
}elseif(func_349(&Var12, &sVar14)){
func_564(&sVar14, 0, 0);
}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(func_348(&Var12, 0))){
if(func_343(Var12)){
if(func_342(&Var12)){
func_564("SHOP_CES_PACK", 0, 0);
func_341(func_348(&Var12, 0));
}elseif(func_340(&Var12)){
func_564("SHOP_CES_PACK3", 0, 0);
func_341(func_348(&Var12, 0));
}elseif(func_339(&Var12)){
func_564("SHOP_CES_PACK4", 0, 0);
func_341(func_348(&Var12, 0));
}elseif(func_338(&Var12)){
func_564("SHOP_CES_PACK6", 0, 0);
func_341(func_348(&Var12, 0));
}elseif(func_337(&Var12)){
func_564("SHOP_CES_PACK7", 0, 0);
}else{
func_564("SHOP_CES_PACK2", 0, 0);
func_341(func_348(&Var12, 1));
}
}
elseif(func_342(&Var12)){
func_564("SHOP_DLC_PACK", 0, 0);
func_341(func_348(&Var12, 0));
}
elseif(func_340(&Var12)){
func_564("SHOP_DLC_PACK3", 0, 0);
func_341(func_348(&Var12, 0));
}
elseif(func_339(&Var12)){
func_564("SHOP_DLC_PACK4", 0, 0);
func_341(func_348(&Var12, 0));
}
elseif(func_338(&Var12)){
func_564("SHOP_DLC_PACK6", 0, 0);
func_341(func_348(&Var12, 0));
}
elseif(func_337(&Var12)){
func_564("SHOP_DLC_PACK7", 0, 0);
}
elseif(func_336(&Var12)){
func_564("SHOP_DLC_PACK8", 0, 0);
}
else{
func_564("SHOP_DLC_PACK2", 0, 0);
func_341(func_348(&Var12, 1));
}}}}
if(!func_575(Local_70.f_503, "")){
}else{
iVar15=7;
iVar16=-1;
func_271(Local_70.f_119.f_3, &iVar15, &iVar16, 0, 0);
StringCopy(&cVar17, "", 16);
func_335(&cVar17);
if(MISC::GET_HASH_KEY(&cVar17)==0 && func_334(Local_70.f_503, &Var12, iVar15, iVar16)){
func_333("TAT_SALE", 0, 0);
}}}}
if(func_315(&uLocal_186)){}else{
func_288(1, Local_70.f_0, 1, 0, 1, -1082130432, 0, 0, -1);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_262145.f_2461){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops")){
if(func_281(29, 1, 1, &fVar18, &fVar19, 0)){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_23269, fVar19, 0f, 255, 255, 255, 255, 0, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}}}}

int func_281(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_287(iParam0), 64);
StringCopy(&cVar1, func_285(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_283(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_282(iParam0) / fVar4);
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
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
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
if(*fParam3 > Global_23269){
*fParam4=(*fParam4 * (Global_23269 / *fParam3));
*fParam3=Global_23269;
}}
return 1;
}
return 0;
}


float func_282(int iParam0){
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


void func_283(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_284(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_284(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}


var func__285(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_160(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_286(&uVar1);
}}else{
return func_286(&(Global_23270.f_7488[iParam0 /*16*/]));
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


var func__286(var uParam0){
return uParam0;
}


char* func_287(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_160(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_286(&uVar0);
}else{
return func_286(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_288(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_166(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_312(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23270){
if(func_281(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar56=(fVar37 / fVar36);
}else{
Global_23270=0;
}}
if(fParam5==-1f){
fParam5=Global_23269;
}
fVar55=(fParam5 * fVar56);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar57=Global_23268;
}else{
fVar57=(((Global_23268 + fVar55) + 0.034722f) + 0f);
}
fVar60=1f;
func_283(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_308(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar61, func_287(29), 64);
StringCopy(&cVar62, func_285(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_307(Global_23267, Global_23268, fParam5, fVar55, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23270.f_8862){
iVar1=Global_23270.f_8858;
iVar2=Global_23270.f_8859;
iVar3=Global_23270.f_8860;
iVar4=Global_23270.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_307(Global_23267, (Global_23268 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23268 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_306();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23270.f_74){
if(Global_23270.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[iVar15]);
iVar15++;
}
elseif(Global_23270.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
iVar16++;
}
elseif(Global_23270.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23267 + 0.00390625f), ((Global_23268 + fVar55) + 0.00416664f), 0);
}
if(Global_23270.f_6178){
func_306();
func_304((((Global_23267 + fParam5) - 0.00390625f) - func_305("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_306();
func_304((((Global_23267 + fParam5) - 0.00390625f) - func_305("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
}}}
iVar6=Global_23270.f_6181;
iVar9=0;
fVar63=fVar49;
if(Global_23270.f_8872){
iVar1=Global_23270.f_8868;
iVar2=Global_23270.f_8869;
iVar3=Global_23270.f_8870;
iVar4=Global_23270.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23270.f_5668 && iVar6 <=Global_23270.f_5661){
if(iVar6 >=0){
if(Global_23270.f_5928[iVar6]){
if(Global_23270.f_5799[iVar6] && iVar6 !=Global_23270.f_6181){
fVar49=(fVar49 + 0.00277776f);
}
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
fVar49=(fVar49 + fVar54);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_8877){
iVar1=Global_23270.f_8873;
iVar2=Global_23270.f_8874;
iVar3=Global_23270.f_8875;
iVar4=Global_23270.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_307(Global_23267, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar60));
Var38.f_1=(Var38.f_1 * (0.5f / fVar60));
if(Global_23270.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar49=(fVar49 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_5081)) !=0 && Global_23270.f_5163 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_23270.f_5165 !=0){
func_281(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_307(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_23270.f_5165 !=0){
func_281(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_302(Global_23270.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_5165), func_285(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_307(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23270.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23270.f_5164) > Global_23270.f_5163){
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_307(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_281(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_307(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_303(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_4540953.f_67 !=0){
func_281(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_302(Global_4540953.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_287(Global_4540953.f_67), func_285(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_297(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23270.f_6171){
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
iVar64=Global_23270.f_5661;
if(Global_23270.f_6172){
iVar64=(Global_23270.f_6175 - 1);
}
fVar65=0f;
fVar66=0f;
iVar7=0;
while (iVar7 <=iVar64){
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
if(Global_23270.f_6172){
iVar6=Global_23270.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23270.f_6181 && iVar9 < Global_23270.f_5668){
bVar33=true;
if(Global_23270.f_6182==iVar6){
fVar66=fVar65;
}
if(Global_23270.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23270.f_6322[iVar6]=fVar35;
fVar34=(Global_23267 + 0.0046875f);
bVar39=false;
bVar32=Global_23270.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar68=255;
iVar69=255;
iVar70=255;
iVar71=255;
if(Global_23270.f_8884){
HUD::GET_HUD_COLOUR(Global_23270.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
}else{
HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
Global_23270.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23270.f_5669){
if(MISC::IS_BIT_SET(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_6172){
iVar19=Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar20=Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar21=Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar22=Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar23=Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
}
else{
Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar19;
Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar20;
Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar21;
Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar22;
Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar23;
}
iVar72=0;
bVar53=false;
if(Global_23270.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[0]){
bVar53=true;
iVar72=0;
}
}
if(Global_23270.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[1]){
bVar53=true;
iVar72=1;
}
}
if(Global_23270.f_5505[iVar8] !=-1f){
fVar34=((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23270.f_5505[iVar8 + 1]){
fVar44=(Global_23270.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar44=(((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
}
if((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32){
bVar52=true;
}
else{
bVar52=false;
}
switch (Global_23270.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23270.f_6172){
fVar41=0f;
fVar42=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_281(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
if(iVar14 > 0){
fVar42=(fVar42 - (0.00078125f * 4f));
}
if((Global_23270.f_4824[(iVar22 + iVar14)]==2 || Global_23270.f_4824[(iVar22 + iVar14)]==52) || Global_23270.f_4824[(iVar22 + iVar14)]==62){
fVar42=(fVar42 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
if(Global_23270.f_5526[iVar8]==2){
iVar67=(iVar8 - 1);
while (iVar67 >=0){
if(Global_23270.f_5526[iVar67]==2){
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)]=(Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)] - Global_23270.f_5511[iVar8]);
}
iVar67=(iVar67 + -1);
}
}
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_281(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_281(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(26), func_285(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_281(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_281(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(27), func_285(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_294(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23270.f_4824[(iVar22 + iVar28)]==2 || Global_23270.f_4824[(iVar22 + iVar28)]==52) || Global_23270.f_4824[(iVar22 + iVar28)]==62){
if(func_281(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_281(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_302(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[(iVar22 + iVar28)]), func_285(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[(iVar22 + iVar28)]), func_285(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
fVar40=(fVar40 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23270.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
if(func_293() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_295(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23270.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar40=(fVar40 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23270.f_4824[(iVar22 + iVar14)] !=2 && Global_23270.f_4824[(iVar22 + iVar14)] !=52) && Global_23270.f_4824[(iVar22 + iVar14)] !=62){
if(func_281(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_281(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_302(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[(iVar22 + iVar14)]), func_285(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[(iVar22 + iVar14)]), func_285(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[(iVar22 + iVar14)]), func_285(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23270.f_6172){
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_294(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[iVar20]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_281(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_281(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(26), func_285(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_281(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_281(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(27), func_285(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_292((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_294(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_281(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_281(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(26), func_285(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_281(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_281(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(27), func_285(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_295(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_291((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_281(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23270.f_6172){
fVar42=fVar36;
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
}elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_281(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_281(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(26), func_285(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_281(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_281(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_302(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_287(27), func_285(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_281(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_302(Global_23270.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_287(Global_23270.f_4824[iVar22]), func_285(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_290(Global_23270.f_4824[iVar22])), (fVar37 * func_290(Global_23270.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
if(Global_23270.f_5518[iVar8]){
if(func_281(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}
iVar8++;
}
if(bVar39){
if(bVar33){
Global_23270.f_8513[iVar9]=iVar6;
Global_23270.f_6183=iVar6;
iVar9++;
if(Global_23270.f_5799[iVar6]){
iVar13++;
}
if(Global_23270.f_6188[iVar6] !=0f){
fVar65=(fVar65 + Global_23270.f_6188[iVar6]);
}
else{
fVar65=(fVar65 + 0.034722f);
}}
if(!Global_23270.f_6171){
Global_23270.f_5928[iVar6]=1;
if(Global_23270.f_5670[iVar6]){
if(bVar32){
Global_23270.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23270.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23270.f_6171){
Global_23270.f_6173=((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
Global_23270.f_6176=iVar11;
Global_23270.f_6174=iVar10;
Global_23270.f_6171=1;
}}
if(!Global_23270.f_6172){
Global_23270.f_6175=iVar9;
Global_23270.f_6172=1;
}
iVar5++;
}
Global_23270.f_6319=fVar49;
Global_23270.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);
if(!Global_23270.f_8857){
func_782(0);
}
Global_23270.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_289(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_289(int iParam0){
Global_1655472.f_1163=iParam0;
}


float func_290(int iParam0){
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


void func_291(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_292(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


bool func_293(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_294(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_295(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_296(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_296(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_297(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_166(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_312(bParam4, bParam8)){
return;
}
if(func_300()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_170(PLAYER::PLAYER_ID(), 0)){
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
func_299(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_299(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_298(&(Global_23270.f_5393[iVar1 /*4*/]));
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
func_299(&Global_4540953);
if(Global_4540953.f_20==-1){
func_298(&(Global_4540953.f_16));
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


void func_298(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_299(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_300(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_301()){
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

int func_301(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_302(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_303(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_304(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_305(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_306();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_306(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23270.f_8867){
iVar0=Global_23270.f_8863;
iVar1=Global_23270.f_8864;
iVar2=Global_23270.f_8865;
iVar3=Global_23270.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_307(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_308(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=1){
while (Global_23270.f_5662 < 4 && iVar0 !=1){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23270.f_1616[Global_23270.f_5663]=bParam3;
Global_23270.f_1873[Global_23270.f_5663]=iParam4;
Global_23270.f_2130[Global_23270.f_5663]=iParam6;
Global_23270.f_5663++;
if(!bParam3){
func_311(Global_23270.f_5661, 1);
}else{
func_311(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_310(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_281(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_309(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=1;
Global_23270.f_6185=(Global_23270.f_5663 - 1);
Global_23270.f_6186=0;
Global_23270.f_6184=iParam2;
}


float func_309(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_310(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_295(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_311(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}

int func_312(bool bParam0, bool bParam1){
if(Global_2672505.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_314(8, -1) && func_313() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_313(){
return Global_1574993;
}


var func__314(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_315(var uParam0){
bool bVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
var uVar7;
int iVar8;
int iVar9;
if(uParam0->f_1){
if(*uParam0==0){
*uParam0++;
}elseif(*uParam0==1){
bVar0=false;
bVar1=false;
bVar2=false;
bVar3=false;
if(func_332()){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar4=2;
set_warning_message_with_header("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar4, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bVar1=true;
}}elseif(!NETWORK::IS_USER_OLD_ENOUGH_TO_ACCESS_STORE()){
iVar5=2;
if(func_331()){
NETWORK::NETWORK_CHECK_PRIVILEGES(0, 16384, 1);
NETWORK::NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED();
bVar1=true;
}
else{
set_warning_message_with_header("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar5, 0, false, -1, 0, 0, true, 0);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bVar1=true;
}}elseif(!NETWORK::IS_STORE_AVAILABLE_TO_USER()){
iVar6=2;
set_warning_message_with_header("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar6, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bVar1=true;
}}else{
bVar0=true;
}}else{
bVar2=true;
}}else{
bVar3=true;
}
if(bVar3){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_5=1;
}elseif(bVar2){
*uParam0=3;
}elseif(bVar0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2696078=1;
Global_2696079=1;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(uParam0->f_6, 0, 0)));
NETWORK::OPEN_COMMERCE_STORE("", "", func_329(uParam0->f_6));
*uParam0++;
}elseif(bVar1){
*uParam0++;
}}elseif(*uParam0==2){
if(!NETWORK::IS_COMMERCE_STORE_OPEN()){
*uParam0=0;
uParam0->f_1=0;
}}elseif(*uParam0==3){
if(func_316(&uVar7, 1)){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
*uParam0=4;
}else{
*uParam0=2;
}}}elseif(*uParam0==4){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2696078=1;
Global_2696079=1;
}
if(NETWORK::IS_STORE_AVAILABLE_TO_USER()){
NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(uParam0->f_6, 0, 0)));
NETWORK::OPEN_COMMERCE_STORE("", "", func_329(uParam0->f_6));
}
*uParam0=2;
}}else{
*uParam0=2;
}}
return 1;
}elseif(((uParam0->f_4 && !func_332()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || uParam0->f_5){
uParam0->f_5=1;
iVar8=2;
set_warning_message_with_header("PM_INF_QMFT", "STORE_CON_ONL", iVar8, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_PRESSED(2, 201)){
uParam0->f_4=func_332();
uParam0->f_5=0;
}
return 1;
}elseif(((uParam0->f_2 && !NETWORK::NETWORK_IS_SIGNED_ONLINE()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || uParam0->f_3){
uParam0->f_3=1;
iVar9=2;
set_warning_message_with_header("PM_INF_QMFT", "STORE_SGN_ONL2", iVar9, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_PRESSED(2, 201)){
uParam0->f_2=NETWORK::NETWORK_IS_SIGNED_ONLINE();
uParam0->f_3=0;
}
return 1;
}
return 0;
}

int func_316(var uParam0, bool bParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=2;
if(Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0){
func_248(&Global_2103068);
func_248(&(Global_2103068.f_49));
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
}
Global_2103068.f_2=MISC::GET_FRAME_COUNT();
iVar1=-1;
if(func_327()){
if(NETWORK::NETWORK_IS_NP_AVAILABLE()==0){
iVar1=NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
}}
if((func_327() && (((iVar1==4 || iVar1==2) || iVar1==1) || iVar1==5)) || (!func_325() && NETWORK::NETWORK_IS_SIGNED_ONLINE())){
if(NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS()){
func_322(&(Global_2103068.f_3), func_324(&(Global_2103068.f_3)));
if(!MISC::IS_BIT_SET(*uParam0, 4)){
MISC::SET_BIT(uParam0, 4);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_320(&(Global_2103068.f_3), 0);
}}else{
if(iVar1==4){
set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==2){
set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==1){
set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==5){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(!func_325()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, false);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_248(&(Global_2103068.f_49));
func_248(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
return 1;
}}}else{
func_322(&(Global_2103068.f_3), func_324(&(Global_2103068.f_3)));
if((func_319(&(Global_2103068.f_49)) && !func_317(&(Global_2103068.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE()){
MISC::SET_BIT(uParam0, 3);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_320(&(Global_2103068.f_3), 0);
}elseif(!MISC::IS_BIT_SET(*uParam0, 3)){
if(!MISC::IS_BIT_SET(*uParam0, 1)){
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
MISC::SET_BIT(uParam0, true);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_320(&(Global_2103068.f_3), 0);
}}
if(func_319(&Global_2103068)){
if(!func_317(&Global_2103068, 4000, 1)){
bVar2=true;
}}
if(!bVar2){
if(bParam1){
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, false);
}
}
elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_248(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
return 1;
}}}else{
func_248(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
return 1;
}}elseif(MISC::IS_BIT_SET(*uParam0, 3)){
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, false);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_248(&(Global_2103068.f_49));
func_248(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
return 1;
}}else{
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, false);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_248(&(Global_2103068.f_49));
func_248(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_328(0);
return 1;
}}}}}
return 0;
}

int func_317(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_318(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_318(var uParam0, bool bParam1, bool bParam2){
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


bool func_319(var uParam0){
return uParam0->f_1;
}


void func_320(var uParam0, bool bParam1){
func_321(uParam0);
if(bParam1){
func_328(0);
}
uParam0->f_35=1;
}


void func_321(var uParam0){
struct<46> Var0;
Var0.f_41=1;
*uParam0={
Var0 
};
}


void func_322(var uParam0, int iParam1){
if(iParam1==1){
*uParam0=0;
func_323(uParam0);
}
if(*uParam0==0){
if(uParam0->f_36){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_37){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_39){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_38){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_40){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}else{
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}
*uParam0=1;
}
if(*uParam0==1){}}


void func_323(var uParam0){
uParam0->f_35=0;
}

int func_324(var uParam0){
return uParam0->f_35;
}

int func_325(){
if(func_326()){
return 0;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==0){
return 0;
}
return 1;
}


bool func_326(){
return Global_2695033;
}


bool func_327(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_328(bool bParam0){
HUD::BUSYSPINNER_OFF();
if(bParam0){
HUD::PRELOAD_BUSYSPINNER();
}}

int func_329(int iParam0){
switch (func_330(iParam0)){
case 4:
return 10;
break;
case 1:
return 8;
break;
case 3:
return 7;
break;
case 0:
return 9;
break;
case 2:
return 11;
break;
case 5:
return 12;
break;
}
return 0;
}

int func_330(int iParam0){
switch (iParam0){
case -1:
return 6;
break;
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
case 4:
return 0;
break;
case 5:
return 0;
break;
case 6:
return 0;
break;
case 50:
return 0;
break;
case 7:
return 1;
break;
case 8:
return 1;
break;
case 9:
return 1;
break;
case 10:
return 1;
break;
case 11:
return 1;
break;
case 12:
return 1;
break;
case 13:
return 1;
break;
case 14:
return 1;
break;
case 15:
return 1;
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
return 2;
break;
case 23:
return 2;
break;
case 24:
return 2;
break;
case 25:
return 2;
break;
case 26:
return 2;
break;
case 27:
return 2;
break;
case 28:
return 3;
break;
case 29:
return 3;
break;
case 30:
return 3;
break;
case 31:
return 3;
break;
case 32:
return 3;
break;
case 33:
return 3;
break;
case 34:
return 3;
break;
case 35:
return 3;
break;
case 36:
return 3;
break;
case 37:
return 3;
break;
case 38:
return 3;
break;
case 39:
return 4;
break;
case 40:
return 4;
break;
case 41:
return 4;
break;
case 42:
return 4;
break;
case 43:
return 4;
break;
case 44:
return 4;
break;
case 45:
return 5;
break;
case 46:
return 3;
break;
case 47:
return 3;
break;
case 48:
return 3;
break;
case 49:
return 3;
break;
case 52:
return 3;
break;
case 51:
return 1;
break;
case 53:
return 3;
break;
case 54:
return 2;
break;
case 55:
return 1;
break;
case 56:
return 3;
break;
case 57:
return 1;
break;
case 58:
return 3;
break;
case 59:
return 3;
break;
}
return 6;
}


bool func_331(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_332(){
return NETWORK::NETWORK_IS_CABLE_CONNECTED();
}


void func_333(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_4540953.f_21), sParam0, 16);
Global_4540953.f_61=0;
Global_4540953.f_62=0;
Global_4540953.f_63=0;
Global_4540953.f_64=0;
Global_4540953.f_65=iParam1;
Global_4540953.f_66=MISC::GET_GAME_TIMER();
Global_4540953.f_67=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_4540953.f_25[iVar0]=0;
iVar0++;
}}

int func_334(int iParam0, char* sParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(func_252(iParam0)){
return 0;
}
if(Global_262145.f_15298){
return 1;
}
if(iParam2==0){
switch (iParam3){
case -1:
return 0;
break;
case 0:
if(Global_262145.f_15299){
return 1;
}
break;
case 1:
if(Global_262145.f_15300){
return 1;
}
break;
case 2:
if(Global_262145.f_15301){
return 1;
}
break;
case 3:
if(Global_262145.f_15302){
return 1;
}
break;
}}else{
if(iParam3 !=-1){
}
switch (iParam2){
case 1:
if(Global_262145.f_15303){
return 1;
}
break;
case 2:
if(Global_262145.f_15304){
return 1;
}
break;
case 3:
if(Global_262145.f_15305){
return 1;
}
break;
case 4:
if(Global_262145.f_15306){
return 1;
}
break;
case 5:
if(Global_262145.f_15307){
return 1;
}
break;
}}
iVar1=MISC::GET_HASH_KEY(sParam1);
iVar0=0;
while (iVar0 < Global_262145.f_15308){
if(Global_262145.f_15308[iVar0] !=0){
if(iVar1==Global_262145.f_15308[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}


void func_335(char[4] cParam0){
*cParam0={
Global_4540953.f_21 
};
}

int func_336(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case 0:
return 0;
break;
}
return 0;
}

int func_337(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case -1647080257:
case -1635032722:
return 1;
break;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
switch (iVar0){
case joaat("CC_MKUP_42"):
case joaat("CC_MKUP_43"):
case joaat("CC_MKUP_44"):
case joaat("CC_MKUP_45"):
case joaat("CC_MKUP_46"):
case joaat("CC_MKUP_47"):
case joaat("CC_MKUP_48"):
case joaat("CC_MKUP_49"):
case joaat("CC_MKUP_50"):
case joaat("CC_MKUP_51"):
case joaat("CC_MKUP_52"):
case joaat("CC_MKUP_53"):
case joaat("CC_MKUP_54"):
case joaat("CC_MKUP_55"):
case joaat("CC_MKUP_56"):
case joaat("CC_MKUP_57"):
case joaat("CC_MKUP_58"):
case joaat("CC_MKUP_59"):
case joaat("CC_MKUP_60"):
case joaat("CC_MKUP_61"):
case joaat("CC_MKUP_62"):
case joaat("CC_MKUP_63"):
case joaat("CC_MKUP_64"):
case joaat("CC_MKUP_65"):
case joaat("CC_MKUP_66"):
case joaat("CC_MKUP_67"):
case joaat("CC_MKUP_68"):
case joaat("CC_MKUP_69"):
case joaat("CC_MKUP_70"):
case joaat("CC_MKUP_71"):
return 1;
break;
}
return 0;
}

int func_338(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case -2115296325:
case -1917727053:
return 1;
break;
case 1310830821:
case -2080815574:
return 1;
break;
case 1264005900:
case -2124002991:
return 1;
break;
case -845498475:
return 1;
break;
case 1585373207:
return 1;
break;
case -32105449:
case -723723000:
return 1;
break;
case -2100506294:
return 1;
break;
case 982652206:
case 1960353061:
return 1;
break;
case 911341914:
case -1177833238:
return 1;
break;
case -33829882:
case -2114785687:
return 1;
break;
case 967837046:
case 1713900776:
return 1;
break;
case -1236923236:
case -374634807:
return 1;
break;
case 495538029:
case 1755484029:
return 1;
break;
case 843134448:
case 1237563348:
return 1;
break;
case 817135047:
case -1866897369:
return 1;
break;
case 751562226:
return 1;
break;
case 1068076045:
case -1417079707:
return 1;
break;
case 1976270828:
case 1024899158:
return 1;
break;
case -1043587080:
case 1556381710:
return 1;
break;
case -1453558291:
case 2000920079:
return 1;
break;
case 217574226:
case -1750609005:
return 1;
break;
case 685273531:
case -2060239386:
return 1;
break;
case -21147939:
case -1392640449:
return 1;
break;
case -592490042:
case 1663924395:
return 1;
break;
case -1509663423:
case 1864638416:
return 1;
break;
case 1930593842:
case -1256972905:
return 1;
break;
case -346131684:
case 1955966896:
return 1;
break;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
switch (iVar0){
case 1416268745:
case -708047258:
case 26371570:
case 621780057:
case 954254331:
case -1639280951:
case -780274385:
case -1031153849:
case -212322077:
case 1963703368:
case -2016091686:
case 2039498065:
case -1443879404:
case -1878067362:
case 705702754:
case 1012584439:
case 1147920409:
case -799016957:
case 1661443408:
case 1833284044:
case 2106937963:
case -34090190:
case 266827537:
case -474374046:
case 41606628:
case 1539608682:
return 1;
break;
case -81735992:
case 90628948:
case -1608542009:
case -1309590422:
case -801604532:
return 1;
break;
case -1433564204:
case -1193269127:
case -306966096:
case -9784035:
case 172018377:
case 468610596:
case -1799561165:
case 654836823:
case 1029842567:
return 1;
break;
case 739541996:
case 673283082:
case 378460389:
case -994167487:
case -1294560910:
case -508039372:
case -815576437:
case 2118920286:
case 1811874756:
case -1923299929:
case 990355698:
case 978558858:
case 1747352367:
case 902108793:
return 1;
break;
}
return 0;
}

int func_339(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case -680965302:
case 436097115:
case 927511879:
return 1;
break;
}
return 0;
}

int func_340(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case 2070857446:
return 1;
break;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "CC_MKUP_33")){
return 1;
}
return 0;
}


void func_341(char* sParam0){
if(Global_23270.f_5162 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=1;
Global_23270.f_5159++;
StringCopy(&(Global_23270.f_5110[Global_23270.f_5162 /*16*/]), sParam0, 64);
Global_23270.f_5162++;
}

int func_342(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 1;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) < 6){
return 1;
}
iVar0=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar0){
case -272077744:
case -217636000:
return 1;
break;
case -291739204:
case -1724452987:
return 0;
break;
case -680965302:
case 436097115:
case 927511879:
return 0;
break;
case -1376583914:
return 1;
break;
case 753969907:
return 0;
break;
case -1461214493:
case 469261390:
case 1454369070:
return 0;
break;
case 2070857446:
return 0;
break;
case 790660019:
return 0;
break;
case -1899372144:
return 0;
break;
case -1497129317:
return 0;
break;
case 1759048931:
return 0;
break;
case 2009248638:
case -434342601:
return 0;
break;
case 1974808259:
case -1053480147:
return 0;
break;
case -1647080257:
case -1635032722:
return 0;
break;
case -2115296325:
case -1917727053:
return 0;
break;
case 1310830821:
case -2080815574:
return 0;
break;
case 1264005900:
case -2124002991:
return 0;
break;
case -845498475:
return 0;
break;
case 111238245:
return 1;
break;
case 1585373207:
return 0;
break;
case -32105449:
case -723723000:
return 0;
break;
case -2100506294:
return 0;
break;
case 982652206:
case 1960353061:
return 0;
break;
case 911341914:
case -1177833238:
return 0;
break;
case -33829882:
case -2114785687:
return 0;
break;
case 967837046:
case 1713900776:
return 0;
break;
case -1236923236:
case -374634807:
return 0;
break;
case 843134448:
case 1237563348:
return 0;
break;
case 817135047:
case -1866897369:
return 0;
break;
case 751562226:
return 0;
break;
case 1068076045:
case -1417079707:
return 0;
break;
case 1976270828:
case 1024899158:
return 0;
break;
case -1043587080:
case 1556381710:
return 0;
break;
case -1453558291:
case 2000920079:
return 0;
break;
case 217574226:
case -1750609005:
return 0;
break;
case 685273531:
case -2060239386:
return 0;
break;
case -21147939:
case -1392640449:
return 0;
break;
case -592490042:
case 1663924395:
return 0;
break;
case -1509663423:
case 1864638416:
return 0;
break;
case 1930593842:
case -1256972905:
return 0;
break;
case -346131684:
case 1955966896:
return 0;
break;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
switch (iVar0){
case -915127147:
return 0;
break;
case joaat("CC_MKUP_42"):
case joaat("CC_MKUP_43"):
case joaat("CC_MKUP_44"):
case joaat("CC_MKUP_45"):
case joaat("CC_MKUP_46"):
case joaat("CC_MKUP_47"):
case joaat("CC_MKUP_48"):
case joaat("CC_MKUP_49"):
case joaat("CC_MKUP_50"):
case joaat("CC_MKUP_51"):
case joaat("CC_MKUP_52"):
case joaat("CC_MKUP_53"):
case joaat("CC_MKUP_54"):
case joaat("CC_MKUP_55"):
case joaat("CC_MKUP_56"):
case joaat("CC_MKUP_57"):
case joaat("CC_MKUP_58"):
case joaat("CC_MKUP_59"):
case joaat("CC_MKUP_60"):
case joaat("CC_MKUP_61"):
case joaat("CC_MKUP_62"):
case joaat("CC_MKUP_63"):
case joaat("CC_MKUP_64"):
case joaat("CC_MKUP_65"):
case joaat("CC_MKUP_66"):
case joaat("CC_MKUP_67"):
case joaat("CC_MKUP_68"):
case joaat("CC_MKUP_69"):
case joaat("CC_MKUP_70"):
case joaat("CC_MKUP_71"):
return 0;
break;
case 1416268745:
case -708047258:
case 26371570:
case 621780057:
case 954254331:
case -1639280951:
case -780274385:
case -1031153849:
case -212322077:
case 1963703368:
case -2016091686:
case 2039498065:
case -1443879404:
case -1878067362:
case 705702754:
case 1012584439:
case 1147920409:
case -799016957:
case 1661443408:
case 1833284044:
case 2106937963:
case -34090190:
case 266827537:
case -474374046:
case 41606628:
case 1539608682:
return 0;
break;
case -81735992:
case 90628948:
case -1608542009:
case -1309590422:
case -801604532:
return 0;
break;
case -1433564204:
case -1193269127:
case -306966096:
case -9784035:
case 172018377:
case 468610596:
case -1799561165:
case 654836823:
case 1029842567:
return 0;
break;
case 739541996:
case 673283082:
case 378460389:
case -994167487:
case -1294560910:
case -508039372:
case -815576437:
case 2118920286:
case 1811874756:
case -1923299929:
case 990355698:
case 978558858:
case 1747352367:
case 902108793:
return 0;
break;
}
return 1;
}


bool func_343(char[16] cParam0){
return func_344(cParam0) !=114;
}

int func_344(var uParam0, var uParam1, var uParam2, var uParam3){
if(func_345()){
switch (MISC::GET_HASH_KEY(&uParam0)){
case 1140903537:
return 75;
case 819603492:
return 74;
case 656151720:
return 108;
case -1787858611:
return 80;
case -1953735289:
return 113;
case 1609762389:
return 73;
case -835034398:
return 59;
case -351691644:
return 100;
case 1491073087:
return 58;
case 783197149:
return 83;
case 1576305536:
return 79;
case -935372780:
return 57;
case -1163543327:
return 92;
case -1531145969:
return 72;
case 385545610:
return 99;
case -384329280:
return 107;
case 1527446965:
return 91;
case 1147523179:
return 56;
case 916927726:
return 71;
case 568003414:
return 70;
case 1440872691:
return 90;
case -47691907:
return 55;
case 724509582:
return 112;
case 958545812:
return 69;
case 107698723:
return 89;
case 201876829:
return 88;
case -639336170:
return 68;
case -310990790:
return 106;
case -735677030:
return 111;
case -1527212225:
return 67;
case 892710863:
return 54;
case -1001566712:
return 78;
case 1864278956:
return 66;
case -1588295657:
return 98;
case -745378670:
return 65;
case 462912667:
return 87;
case 114643735:
return 105;
case -260266394:
return 104;
case -356672792:
return 82;
case -227923403:
return 77;
case 1519716805:
return 110;
case -912398367:
return 64;
case -1218165906:
return 97;
case 594549628:
return 53;
case 1234462660:
return 103;
case 2137019227:
return 86;
case 890289853:
return 96;
case 1998471915:
return 95;
case 763146153:
return 109;
case 1665375030:
return 94;
case -1496997031:
return 63;
case 1607112024:
return 81;
case -1851983620:
return 76;
case -1132343599:
return 84;
case 1845637575:
return 93;
case -2089591627:
return 85;
case 419137479:
return 102;
case 1608488334:
return 101;
case -1859258326:
return 62;
case -304893580:
return 60;
case -1180418982:
return 61;
}
default:
}
return 114;
}


bool func_345(){
return (func_347() || func_346());
}

int func_346(){
switch (NETWORK::GET_USER_STARTER_ACCESS()){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
return 0;
}

int func_347(){
switch (NETWORK::GET_USER_PREMIUM_ACCESS()){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
return 0;
}


char* func_348(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return "";
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) < 6){
return "";
}
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
switch (iVar1){
case -272077744:
case -217636000:
return "SHOP_CONTENT_1";
break;
case -291739204:
case -1724452987:
return "SHOP_CONTENT_2";
break;
case -680965302:
case 436097115:
case 927511879:
if(!bParam1){
return "SHOP_CONTENT_3";
}else{
return "SHOP_CONTENT_3b";
}
break;
case -1376583914:
return "SHOP_CONTENT_4";
break;
case 753969907:
return "SHOP_CONTENT_5";
break;
case -1461214493:
case 469261390:
case 1454369070:
if(!bParam1){
return "SHOP_CONTENT_6";
}else{
return "SHOP_CONTENT_6b";
}
break;
case -1497129317:
if(!bParam1){
return "SHOP_CONTENT_7";
}else{
return "SHOP_CONTENT_7b";
}
break;
case 2070857446:
if(!bParam1){
return "SHOP_CONTENT_8";
}else{
return "SHOP_CONTENT_8b";
}
break;
case 790660019:
return "SHOP_CONTENT_9";
break;
case -1899372144:
if(!bParam1){
return "SHOP_CONTENT_10";
}else{
return "SHOP_CONTENT_10b";
}
break;
case 2009248638:
case -434342601:
if(((((iVar0==-1357324997 || iVar0==64652989) || iVar0==1023408391) || iVar0==513852309) || iVar0==799565220) || iVar0==-1823527696){
return "SHOP_CONTENT_14";
}
return "SHOP_CONTENT_12";
break;
case 1759048931:
switch (iVar0){
case -1351684992:
case -1657386993:
case -1946409573:
case -170362538:
case -726555483:
case -372257055:
case -114397794:
case -1749374280:
return "";
break;
}
return "SHOP_CONTENT_13";
break;
case 1974808259:
case -1053480147:
return "SHOP_CONTENT_14";
break;
case -2115296325:
case -1917727053:
return "SHOP_CONTENT_15";
break;
case -1647080257:
case -1635032722:
return "SHOP_CONTENT_16";
break;
case -32105449:
case -723723000:
return "SHOP_CONTENT_17";
break;
case 1310830821:
case -2080815574:
return "SHOP_CONTENT_18";
break;
case 1264005900:
case -2124002991:
if(iVar0==-273286091 || iVar0==1363073245){
return "";
}
return "SHOP_CONTENT_19";
break;
case -845498475:
return "SHOP_CONTENT_26";
break;
case 1585373207:
return "SHOP_CONTENT_21";
break;
case -2100506294:
return "SHOP_CONTENT_22";
break;
case 982652206:
case 1960353061:
return "SHOP_CONTENT_23";
break;
case 911341914:
case -1177833238:
return "SHOP_CONTENT_24";
break;
case -33829882:
case -2114785687:
return "SHOP_CONTENT_25";
break;
case 967837046:
case 1713900776:
return "SHOP_CONTENT_27";
break;
case -1236923236:
case -374634807:
return "SHOP_CONTENT_28";
break;
case 495538029:
case 1755484029:
return "SHOP_CONTENT_29";
break;
case 843134448:
case 1237563348:
return "SHOP_CONTENT_30";
break;
case 817135047:
case -1866897369:
return "SHOP_CONTENT_31";
break;
case 751562226:
return "SHOP_CONTENT_32";
break;
case 1068076045:
case -1417079707:
if(!bParam1){
return "SHOP_CONTENT_33";
}else{
return "SHOP_CONTENT_33";
}
break;
case 1976270828:
case 1024899158:
if(iVar0==-2071198975){
return "";
}
if(((iVar0==1168285768 || iVar0==932073242) || iVar0==495988257) || iVar0==-1968412186){
return "";
}
return "SHOP_CONTENT_34";
break;
case -1043587080:
case 1556381710:
return "SHOP_CONTENT_35";
break;
case -1453558291:
case 2000920079:
return "SHOP_CONTENT_38";
break;
case 217574226:
case -1750609005:
return "SHOP_CONTENT_39";
break;
case 685273531:
case -2060239386:
return "SHOP_CONTENT_40";
break;
case -21147939:
case -1392640449:
return "SHOP_CONTENT_41";
break;
case -592490042:
case 1663924395:
return "SHOP_CONTENT_42";
break;
case -1509663423:
case 1864638416:
return "SHOP_CONTENT_44";
break;
case 1930593842:
case -1256972905:
return "SHOP_CONTENT_45";
break;
case -346131684:
case 1955966896:
return "SHOP_CONTENT_46";
break;
}
switch (iVar0){
case 1055949266:
case -1037727686:
case -1721400137:
case -1918079679:
return "SHOP_CONTENT_1";
break;
case -731173691:
case -1515172016:
case -1492180982:
case -1192311863:
return "SHOP_CONTENT_2";
break;
case 49831163:
return "SHOP_CONTENT_4";
break;
case 1305347725:
case 593441196:
case 482578589:
case -696417274:
if(!bParam1){
return "SHOP_CONTENT_6";
}else{
return "SHOP_CONTENT_6b";
}
break;
case 1084779582:
case 1229416868:
case -915127147:
if(!bParam1){
return "SHOP_CONTENT_8";
}else{
return "SHOP_CONTENT_8b";
}
break;
}
switch (iVar0){
case joaat("CC_MKUP_42"):
case joaat("CC_MKUP_43"):
case joaat("CC_MKUP_44"):
case joaat("CC_MKUP_45"):
case joaat("CC_MKUP_46"):
case joaat("CC_MKUP_47"):
case joaat("CC_MKUP_48"):
case joaat("CC_MKUP_49"):
case joaat("CC_MKUP_50"):
case joaat("CC_MKUP_51"):
case joaat("CC_MKUP_52"):
case joaat("CC_MKUP_53"):
case joaat("CC_MKUP_54"):
case joaat("CC_MKUP_55"):
case joaat("CC_MKUP_56"):
case joaat("CC_MKUP_57"):
case joaat("CC_MKUP_58"):
case joaat("CC_MKUP_59"):
case joaat("CC_MKUP_60"):
case joaat("CC_MKUP_61"):
case joaat("CC_MKUP_62"):
case joaat("CC_MKUP_63"):
case joaat("CC_MKUP_64"):
case joaat("CC_MKUP_65"):
case joaat("CC_MKUP_66"):
case joaat("CC_MKUP_67"):
case joaat("CC_MKUP_68"):
case joaat("CC_MKUP_69"):
case joaat("CC_MKUP_70"):
case joaat("CC_MKUP_71"):
return "SHOP_CONTENT_16";
break;
}
switch (iVar0){
case 1416268745:
case -708047258:
case 26371570:
case 621780057:
case 954254331:
case -1639280951:
case -780274385:
case -1031153849:
case -212322077:
case 1963703368:
case -2016091686:
case 2039498065:
case -1443879404:
case -1878067362:
case 705702754:
case 1012584439:
case 1147920409:
case -799016957:
case 1661443408:
case 1833284044:
case 2106937963:
case -34090190:
case 266827537:
case -474374046:
case 41606628:
case 1539608682:
return "SHOP_CONTENT_30";
break;
}
switch (iVar0){
case -81735992:
case 90628948:
case -1608542009:
case -1309590422:
case -801604532:
return "SHOP_CONTENT_31";
break;
}
switch (iVar0){
case -1433564204:
case -1193269127:
case -306966096:
case -9784035:
case 172018377:
case 468610596:
case -1799561165:
case 654836823:
case 1029842567:
return "SHOP_CONTENT_41";
break;
}
switch (iVar0){
case 739541996:
case 673283082:
case 378460389:
case -994167487:
case -1294560910:
case -508039372:
case -815576437:
case 2118920286:
case 1811874756:
case -1923299929:
case 990355698:
case 978558858:
case 1747352367:
case 902108793:
return "SHOP_CONTENT_44";
break;
}
return "";
}


bool func_349(char* sParam0, char* sParam1){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
StringCopy(sParam1, "", 16);
switch (iVar0){
case -254743660:
case -504148519:
case -1729856159:
case 531303152:
case 1629732254:
case 1924108767:
case 603600547:
case -1599080941:
StringCopy(sParam1, "CLO_BRAND_TOUR", 16);
break;
case 1450518601:
case 2141256344:
case 1658831126:
case 1322653955:
case 919562486:
case -586304140:
case -1923085975:
case 2139123114:
case 865261012:
case 1448778591:
case 1207107220:
case 1601088919:
case 721191542:
case 1563125459:
case -2011579213:
case -278754493:
case 563376038:
case 184369784:
case 841619717:
case 1164164984:
case -1911729970:
case 2067639087:
case -910964710:
case -604410715:
StringCopy(sParam1, "CLO_BRAND_EVENT", 16);
break;
case -902522358:
case -1534144833:
case 1380690490:
case -2130638940:
case -1362631887:
case 1809800545:
case 430455028:
case 1181454970:
case 1982755327:
case 69307871:
case -256272621:
case 511406742:
case 340024872:
case 902799678:
case joaat("id1_props_combo0103_19_lod"):
case 528208561:
case 1376106436:
case 979339384:
case 1284254933:
case 920453495:
case 1762846178:
case -1787216206:
case 2141655822:
case -1307117587:
case -438549866:
case -481739408:
case 1672986187:
case 1376066278:
case 14294258:
case -963172243:
case 372688811:
case 1810625300:
case 1237692104:
case 259176995:
case 1529631125:
case -2114412811:
case -1876083874:
case -1770895384:
case -163970345:
case 133408330:
case 1508723288:
case 1815342821:
case -929851004:
case 375141656:
case 604491887:
case 1941532625:
case 27069338:
case 1330358006:
case 1559839313:
case 1402285957:
case 1634061094:
case -1354340630:
case 1976347623:
case 1736380236:
case -478935244:
case -856958428:
StringCopy(sParam1, "CLO_BRAND_EVENT", 16);
break;
case -418887148:
case 366454706:
case 60687167:
case 775182443:
case -1375807486:
case -591383164:
case -897412855:
case -111219007:
case -1351208589:
case -2078483775:
case -1998855105:
case 1466433880:
case 1849569028:
case 992299215:
case 674833163:
case -1016433282:
case -1649792514:
case -506088876:
case -736684329:
case -1771791505:
case -2009137368:
case -1463271370:
case -1694522203:
case 1057298604:
case 1897856223:
case 1653104562:
case 196653588:
case -32827719:
case 389105925:
case -914477664:
StringCopy(sParam1, "CLO_BRAND_EVENT", 16);
break;
case joaat("REW_REDSK"):
case joaat("REW_RS"):
case joaat("CLO_HST_A_0"):
case joaat("CLO_HST_A_1"):
case joaat("CLO_HST_A_2"):
case -206758447:
case joaat("CLO_HST_A_4"):
case joaat("CLO_HST_A_5"):
case joaat("CLO_HST_A_6"):
case joaat("CLO_HST_A_7"):
case joaat("CLO_HST_A_8"):
case joaat("CLO_HST_A_9"):
case -2111578974:
case joaat("CLO_HST_F_A_1"):
case 1588663741:
case -1162359411:
case joaat("CLO_HST_F_A_4"):
case 1569493816:
case -884445522:
case -232178577:
case joaat("CLO_HST_F_A_8"):
case -1767373458:
StringCopy(sParam1, "CLO_BRAND_AWARD", 16);
break;
case 1363073245:
case -273286091:
StringCopy(sParam1, "CLO_BRAND_EXCL", 16);
break;
case -150388564:
case joaat("CLO_EXF_DECL_17"):
StringCopy(sParam1, "CLO_BRAND_DCTL", 16);
break;
}
switch (iVar0){
case -2071198975:
StringCopy(sParam1, "SHOP_CONTENT_36", 16);
break;
case 1168285768:
case 495988257:
case 932073242:
case -1968412186:
StringCopy(sParam1, "SHOP_CONTENT_37", 16);
break;
}
return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

int func_350(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(((MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_012") || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_013")) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_014")) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_015")){
return 1;
}}
return 0;
}


void func_351(var uParam0){
MemCopy(uParam0,{
Global_23270.f_5081
}
, 4);
}


bool func_352(int iParam0, int iParam1){
return func_625(func_353(iParam0), iParam1);
}

int func_353(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0 <=480){
iVar1=iParam0;
iVar0=(3112 + iVar1);
}elseif(iParam0 < 864){
iVar1=(iParam0 - 480);
iVar0=(6029 + iVar1);
}elseif(iParam0 < 1248){
iVar1=(iParam0 - 864);
iVar0=(15562 + iVar1);
}elseif(iParam0 < 1372){
iVar1=(iParam0 - 1248);
iVar0=(28355 + iVar1);
}elseif(iParam0 < 1500){
iVar1=(iParam0 - 1372);
iVar0=(30355 + iVar1);
}elseif(iParam0 < 1564){
iVar1=(iParam0 - 1500);
iVar0=(32411 + iVar1);
}elseif(iParam0 < 1628){
iVar1=(iParam0 - 1564);
iVar0=(41251 + iVar1);
}else{
iVar2=iParam0;
}
return iVar0;
}


void func_354(int iParam0, char* sParam1, int iParam2){
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


void func_355(var uParam0){
bool bVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_100733.f_1571){
bVar0=false;
switch (func_330(uParam0->f_6)){
case 4:
case 5:
if(Global_262145.f_19119 || func_357(uParam0->f_6, uParam0->f_7)){
bVar0=true;
}
break;
case 0:
bVar0=Global_262145.f_19120;
break;
case 2:
bVar0=Global_262145.f_19121;
break;
case 3:
bVar0=Global_262145.f_19122;
break;
case 1:
bVar0=Global_262145.f_19123;
break;
}
if(!bVar0){
if(func_327()){
func_356(204, "ITEM_PSSTORE", -1);
}elseif(func_331()){
func_356(204, "ITEM_MARKET", -1);
}elseif(MISC::IS_PC_VERSION()){
func_358(204, "ITEM_STORE", -1, 0);
}}
uParam0->f_2=NETWORK::NETWORK_IS_SIGNED_ONLINE();
uParam0->f_4=func_332();
}}


void func_356(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
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
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}

int func_357(int iParam0, int iParam1){
if(iParam0==45){
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
}
default:
}
return 0;
}


void func_358(int iParam0, char* sParam1, int iParam2, bool bParam3){
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


void func_359(int iParam0){
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
if(!func_166(&iVar1, 0, iParam0)){
return;
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23270.f_6103[iVar1 /*10*/])){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_360(){
var uVar0;
int iVar1;
int iVar2;
var uVar3;
struct<4> Var4;
char[] cVar5[8];
struct<4> Var6;
bool bVar7;
bool bVar8;
char* sVar9;
int iVar10;
struct<4> Var11;
var uVar12;
char* sVar13;
var uVar14;
int iVar15;
int iVar16;
char cVar17[16];
if(Local_70.f_119.f_31==6){}elseif(Local_70.f_119.f_5==0){
func_351(&uVar0);
if(MISC::GET_HASH_KEY(&uVar0)==0){
if(Local_70.f_119.f_3 !=-1){
iVar1=7;
iVar2=-1;
func_271(Local_70.f_119.f_3, &iVar1, &iVar2, 0, 0);
if(!func_393(iVar1, iVar2)){
func_564("TAT_UNLOCK_M", 0, 0);
}}}}elseif(!func_575(Local_70.f_503, "")){
func_351(&uVar3);
if(MISC::GET_HASH_KEY(&uVar3)==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (Local_70.f_503){
case 13:
case 14:
case 15:
case 16:
if(func_392(PLAYER::PLAYER_ID())){
func_564("TAT_CREW", 0, 0);
}
else{
func_564("TAT_CREWT", 0, 0);
}
func_391(32);
break;
case 9:
func_564("TAT_RANK1", 0, 0);
break;
case 10:
func_564("TAT_RANK2", 0, 0);
break;
case 11:
func_564("TAT_RANK3", 0, 0);
break;
case 0:
func_564("TAT_RHB", 0, 0);
break;
case 1:
func_564("TAT_RDM", 0, 0);
break;
case 2:
func_564("TAT_RGR", 0, 0);
break;
case 3:
func_564("TAT_RHU", 0, 0);
break;
case 4:
func_564("TAT_RFM", 0, 0);
break;
case 54:
func_564("TAT_RAL", 0, 0);
break;
case 5:
func_564("TAT_RBH", 0, 0);
break;
case 6:
func_564("TAT_RWR", 0, 0);
break;
case 55:
func_564("TAT_RSU", 0, 0);
break;
case 7:
func_564("TAT_RRK", 0, 0);
break;
case 8:
func_564("TAT_RRD", 0, 0);
break;
case 56:
func_564("TAT_RKC", 0, 0);
break;
case 12:
func_564("TAT_RTC", 0, 0);
break;
case 57:
func_564("TAT_HU1", 0, 0);
break;
case 58:
func_564("TAT_HU2", 0, 0);
break;
case 59:
func_564("TAT_HU3", 0, 0);
break;
case 60:
func_564("TAT_HU4", 0, 0);
break;
case 34:
case 45:
case 65:
case 48:
case 49:
case 46:
case 25:
func_564(func_390(Local_70.f_503, func_156(PLAYER::PLAYER_PED_ID())), 0, 0);
break;
default:
if(func_36(&Var6, Local_70.f_503, func_156(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1)){
Var4={
Var6 
};
}
if(func_350(&Var4)){
if(func_392(PLAYER::PLAYER_ID())){
func_564("TAT_CREW", 0, 0);
}else{
func_564("TAT_CREWT", 0, 0);
}
func_391(32);
}
elseif(func_349(&Var4, &cVar5)){
func_564(&Var4, 0, 0);
}
else{
bVar7=false;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_388()){
bVar8=false;
if(func_343(Var4)){
bVar8=true;
}
func_384(&sVar9, Var4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar8);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar9)){
bVar7=true;
}}
if(bVar7){
func_564("TAT_LCKPC", 0, 0);
}else{
iVar10=func_383(Local_70.f_503);
if(iVar10 > 0){
func_564("TAT_UNLOCK", 0, 0);
func_391(iVar10);
}else{
func_564("TAT_UNLOCK", 0, 0);
}}
}
break;
}}}}elseif(func_36(&Var11, Local_70.f_503, func_156(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1)){
if(!func_576(Local_70.f_503)){
func_351(&uVar12);
if(MISC::GET_HASH_KEY(&uVar12)==0){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_503 >=129) && !func_350(&Var11)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_348(&Var11, 0))){
if(func_343(Var11)){
if(func_349(&Var11, &sVar13)){
func_564(&sVar13, 4000, 0);
}
elseif(func_342(&Var11)){
func_564("SHOP_UNLOCKCES", 4000, 0);
func_341(func_348(&Var11, 0));
}
elseif(func_340(&Var11)){
func_564("SHOP_UNLOCKCES3", 4000, 0);
func_341(func_348(&Var11, 0));
}
elseif(func_339(&Var11)){
func_564("SHOP_UNLOCKCES4", 4000, 0);
func_341(func_348(&Var11, 0));
}
elseif(func_338(&Var11)){
func_564("SHOP_UNLOCKCES6", 4000, 0);
func_341(func_348(&Var11, 0));
}
elseif(func_337(&Var11)){
func_564("SHOP_UNLOCKCES7", 4000, 0);
}
else{
func_564("SHOP_UNLOCKCES2", 4000, 0);
func_341(func_348(&Var11, 1));
}}elseif(func_349(&Var11, &sVar13)){
func_564(&sVar13, 4000, 0);
}elseif(func_342(&Var11)){
func_564("SHOP_UNLOCKDLC", 4000, 0);
func_341(func_348(&Var11, 0));
}elseif(func_340(&Var11)){
func_564("SHOP_UNLOCKDLC3", 4000, 0);
func_341(func_348(&Var11, 0));
}elseif(func_339(&Var11)){
func_564("SHOP_UNLOCKDLC4", 4000, 0);
func_341(func_348(&Var11, 0));
}elseif(func_338(&Var11)){
func_564("SHOP_UNLOCKDLC6", 4000, 0);
func_341(func_348(&Var11, 0));
}elseif(func_337(&Var11)){
func_564("SHOP_UNLOCKDLC7", 4000, 0);
}elseif(func_336(&Var11)){
func_564("SHOP_UNLOCKDLC8", 4000, 0);
}else{
func_564("SHOP_UNLOCKDLC2", 4000, 0);
func_341(func_348(&Var11, 1));
}}else{
func_564("TAT_UNLOCK_N", 4000, 0);
}}}elseif(func_361() !=0){
func_351(&uVar14);
if(MISC::GET_HASH_KEY(&uVar14)==0){
func_564("TAT_DISC", 0, 0);
func_391(func_361());
}}
iVar15=7;
iVar16=-1;
func_271(Local_70.f_119.f_3, &iVar15, &iVar16, 0, 0);
StringCopy(&cVar17, "", 16);
func_335(&cVar17);
if(MISC::GET_HASH_KEY(&cVar17)==0 && func_334(Local_70.f_503, &Var11, iVar15, iVar16)){
func_333("TAT_SALE", 0, 0);
}}}

int func_361(){
int iVar0;
iVar0=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_362()){
iVar0=(iVar0 + Global_262145.f_133);
}}
return iVar0;
}

int func_362(){
int iVar0;
int iVar1;
float fVar2;
if(MISC::IS_PC_VERSION()){
return 0;
}
if(func_380()){
if(func_366()){
iVar0=func_364();
iVar1=func_363();
fVar2=((to_float(iVar1) / to_float(iVar0)) * 100f);
if(fVar2 > IntToFloat(Global_262145.f_132) && iVar0 >=8){
return 1;
}}}
return 0;
}

int func_363(){
int iVar0;
iVar0=(iVar0 + Global_1665499);
iVar0=(iVar0 + Global_1665502);
return iVar0;
}

int func_364(){
int iVar0;
iVar0=(iVar0 + Global_1665500);
iVar0=(iVar0 + Global_1665501);
iVar0=(iVar0 + Global_1665499);
iVar0=(iVar0 + Global_1665502);
iVar0=(iVar0 + Global_1665504);
iVar0=(iVar0 + Global_1665503);
iVar0=(iVar0 + func_365(joaat("mpply_exploits")));
iVar0=(iVar0 + func_365(joaat("mpply_vc_annoyingme")));
iVar0=(iVar0 + func_365(joaat("mpply_vc_hate")));
iVar0=(iVar0 + func_365(joaat("mpply_bad_crew_name")));
iVar0=(iVar0 + func_365(joaat("mpply_bad_crew_motto")));
iVar0=(iVar0 + func_365(joaat("mpply_bad_crew_status")));
iVar0=(iVar0 + func_365(joaat("mpply_bad_crew_emblem")));
iVar0=(iVar0 + func_365(joaat("mpply_playermade_title")));
iVar0=(iVar0 + func_365(joaat("mpply_playermade_desc")));
return iVar0;
}

int func_365(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_366(){
struct<7> Var0;
struct<7> Var1;
CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
Var1={
func_379(joaat("mpply_started_mp")) 
};
if(func_367(Var1, Var0, 7)){
return 1;
}
return 0;
}

int func_367(struct<7> Param0, struct<7> Param1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_377(Param1);
iVar1=func_373(Param0, iParam2);
if(iVar1==-15){
return 0;
}
if(func_368(iVar0, iVar1)==1){
return 1;
}
return 0;
}

int func_368(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_372(iParam1) || !func_372(iParam0)){
return 1;
}
iVar0=func_238(iParam0);
iVar1=func_238(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_240(iParam0);
iVar1=func_240(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_371(iParam0);
iVar1=func_371(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_232(iParam0);
iVar1=func_232(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_370(iParam0);
iVar1=func_370(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_369(iParam0);
iVar1=func_369(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_369(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_370(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_371(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_372(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_369(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_370(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_232(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_238(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_240(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_371(iParam0);
if(iVar5 < 1 || iVar5 > func_237(iVar4, iVar3)){
return 0;
}
return 1;
}


var func__373(struct<7> Param0, int iParam1){
var uVar0;
var uVar1;
var uVar2;
if(func_376(Param0)==0){
uVar0=func_377(Param0);
uVar1=uVar0;
func_374(&uVar1, 0, 0, 0, iParam1, 0, 0);
if(iParam1==0){
uVar1=uVar0;
}
return uVar1;
}
return uVar2;
}


void func_374(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_238(*uParam0);
iVar1=func_240(*uParam0);
iVar2=func_371(*uParam0);
iVar3=func_232(*uParam0);
iVar4=func_370(*uParam0);
iVar5=func_369(*uParam0);
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
iVar6=func_237(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_237(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_375(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_375(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_243(uParam0, iParam1);
func_242(uParam0, iParam2);
func_241(uParam0, iParam3);
func_235(uParam0, iParam5);
func_236(uParam0, iParam4);
func_234(uParam0, iParam6);
}

int func_376(struct<7> Param0){
if((((((Param0.f_0==0 && Param0.f_1==0) && Param0.f_2==0) && Param0.f_3==0) && Param0.f_4==0) && Param0.f_5==0) && Param0.f_6==0){
return 1;
}
return 0;
}


var func__377(struct<6> Param0, var uParam1){
var uVar0;
if(Param0.f_0 > 0){
func_234(&uVar0, Param0.f_0);
}
if(Param0.f_1 > 0){
func_235(&uVar0, func_378(Param0.f_1));
}
if(Param0.f_2 > 0){
func_236(&uVar0, Param0.f_2);
}
if(Param0.f_3 > 0){
func_241(&uVar0, Param0.f_3);
}
if(Param0.f_4 > 0){
func_242(&uVar0, Param0.f_4);
}
if(Param0.f_5 > 0){
func_243(&uVar0, Param0.f_5);
}
return uVar0;
}

int func_378(int iParam0){
if(iParam0 < 1){
return 0;
}
if(iParam0 > 12){
return 0;
}
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
}
return 0;
}


struct<7> func_379(int iParam0){
var uVar0;
struct<7> Var1;
struct<7> Var2;
uVar0=iParam0;
if(STATS::STAT_GET_DATE(uVar0, &Var2, 7, -1)){
return Var2;
}
return Var1;
}

int func_380(){
if(func_382() && func_381(0)){
return 1;
}
return 0;
}


var func__381(int iParam0){
return Global_1574538[iParam0];
}


var func__382(){
return func_381(func_18() + 1);
}

int func_383(int iParam0){
switch (iParam0){
case 17:
case 19:
case 22:
case 27:
case 62:
case 63:
case 29:
case 30:
case 33:
case 68:
case 47:
case 51:
return 0;
break;
case 18:
return 3;
break;
case 35:
return 12;
break;
case 20:
return 15;
break;
case 32:
return 18;
break;
case 70:
return 21;
break;
case 23:
return 24;
break;
case 37:
return 27;
break;
case 61:
return 30;
break;
case 21:
return 33;
break;
case 36:
return 36;
break;
case 67:
return 39;
break;
case 38:
return 42;
break;
case 40:
return 45;
break;
case 41:
return 48;
break;
case 28:
return 51;
break;
case 69:
return 84;
break;
case 43:
return 54;
break;
case 42:
return 57;
break;
case 26:
return 6;
break;
case 39:
return 60;
break;
case 64:
return 63;
break;
case 50:
return 66;
break;
case 53:
return 69;
break;
case 31:
return 72;
break;
case 52:
return 75;
break;
case 44:
return 78;
break;
case 24:
return 81;
break;
case 66:
return 9;
break;
}
return 0;
}


void func_384(char* sParam0, char[8] cParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11){
switch (MISC::GET_HASH_KEY(&cParam1)){
case 64715401:
case joaat("GSA_TYPE_R"):
StringCopy(&cParam1, "GSA_TYPE_R", 16);
break;
case -414529079:
case joaat("GSA_TYPE_C"):
StringCopy(&cParam1, "GSA_TYPE_C", 16);
break;
case 336264847:
case joaat("GSA_TYPE_RO"):
StringCopy(&cParam1, "GSA_TYPE_RO", 16);
break;
case 531395379:
case joaat("GSA_TYPE_CH"):
StringCopy(&cParam1, "GSA_TYPE_CH", 16);
break;
case 1034118160:
case joaat("GSA_TYPE_G"):
StringCopy(&cParam1, "GSA_TYPE_G", 16);
break;
case -218834291:
case joaat("GSA_TYPE_B"):
StringCopy(&cParam1, "GSA_TYPE_B", 16);
break;
case 1779531303:
case joaat("GSA_TYPE_FW"):
StringCopy(&cParam1, "GSA_TYPE_FW", 16);
break;
}
StringCopy(sParam0, "", 64);
switch (iParam5){
case 0:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_HA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 1:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_CL_", 64);
if(iParam6==12){
StringConCat(sParam0, "OUTFIT_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}
break;
case 2:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_TA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 3:
StringConCat(sParam0, "WP_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
break;
case 4:
if(iParam4==Global_75654){
StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
}elseif(iParam4==Global_75655){
StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
}elseif(iParam4==Global_75656){
StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
}elseif(iParam4==Global_75657){
StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
}elseif(iParam4==Global_75658){
StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
}elseif(iParam4==func_387()){
StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
}elseif(iParam4==func_386()){
if(iParam6==40){
StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
}elseif(iParam6==2){
StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
}elseif(iParam6==1){
StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
}else{
StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
}}elseif(iParam4==func_385()){
if(iParam6==1){
StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
}else{
StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
}}elseif(iParam4==0){
StringConCat(sParam0, "VEM_", 64);
if(iParam6==24 || iParam6==25){
if(iParam8==1){
StringConCat(sParam0, "COLOUR_1_", 64);
}elseif(iParam8==2){
StringConCat(sParam0, "COLOUR_2_", 64);
}elseif(iParam8==3){
StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
}
if(iParam9==5){
StringConCat(sParam0, "MCT_CHROME_", 64);
}elseif(iParam9==1){
StringConCat(sParam0, "MCT_CLASSIC_", 64);
}elseif(iParam9==0){
StringConCat(sParam0, "MCT_METALLIC_", 64);
}elseif(iParam9==4){
StringConCat(sParam0, "MCT_METALS_", 64);
}elseif(iParam9==3){
StringConCat(sParam0, "MCT_MATTE_", 64);
}elseif(iParam9==2){
StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
}elseif(iParam9==7){
StringConCat(sParam0, "MCT_NONE_", 64);
}
iParam8=-1;
}elseif(iParam6==38){
StringConCat(sParam0, "COLOUR_5_", 64);
}elseif(iParam6==65){
StringConCat(sParam0, "COLOUR_6_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}elseif(iParam6==22){
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1)==-515263000){
return;
}
StringConCat(sParam0, "VEM_INSURANCE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}}elseif(iParam6==40){
switch (iParam4){
case joaat("fcr2"):
StringCopy(&cParam1, "FCR2", 16);
break;
case joaat("diablous2"):
StringCopy(&cParam1, "DIABLOUS2", 16);
break;
case joaat("comet3"):
StringCopy(&cParam1, "COMET3", 16);
break;
default:
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1)){
return;
}
break;
}
StringConCat(sParam0, "VEU_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t0_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}else{
StringConCat(sParam0, "VE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}}
break;
}
if(bParam11){
StringConCat(sParam0, "_CESP", 64);
}}

int func_385(){
return joaat("manchez3");
}

int func_386(){
return joaat("brickade2");
}

int func_387(){
return joaat("kosatka");
}

int func_388(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_389()){
return 1;
}
return 0;
}

int func_389(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


char* func_390(int iParam0, int iParam1){
char* sVar0;
sVar0="";
if(iParam0==iParam0){}
if(iParam1==iParam1){}
switch (iParam0){
case 7:
return "TAT_FM_REVENKIL_D";
break;
case 6:
return "TAT_FM_RECHOLD_d";
break;
case 8:
return "TAT_FM_KIL3RACE_D";
break;
case 5:
return "TAT_FM_KILb_D";
break;
case 0:
return "TAT_FM_HEADBANG_D";
break;
case 12:
return "TAT_RACE50_D";
break;
case 2:
return "TAT_CLEAROUT_D";
break;
case 9:
return "TAT_FM_RANK1_D";
break;
case 10:
return "TAT_FM_RANK2_D";
break;
case 11:
return "TAT_FM_RANK3_D";
break;
case 4:
return "TAT_FM_HUST_D";
break;
case 1:
return "TAT_FM_SLAY_D";
break;
case 54:
return "TAT_FM_EVERMODE1_D";
break;
case 3:
return "TAT_FM_ARVANTAKE_D";
break;
case 56:
return "TAT_CHEATER_D";
break;
case 13:
return "TAT_CRANKA_D";
break;
case 14:
return "TAT_CRANKB_D";
break;
case 15:
return "TAT_CRANKC_D";
break;
case 16:
return "TAT_CRANKD_D";
break;
case 89:
return "TAT_FM_ROCKSTAR_D";
break;
case 87:
return "TAT_FM_REDSKULL_D";
break;
case 55:
return "TAT_FM_MODDED_D";
break;
}
switch (iParam0){
case 17:
return "TAT_RANK10_D";
break;
case 18:
return "TAT_RANK20_D";
break;
case 19:
return "TAT_RANK20_D";
break;
case 20:
return "TAT_RANK10_D";
break;
case 21:
return "TAT_RANK20_D";
break;
case 22:
return "TAT_RANK10_D";
break;
case 23:
return "TAT_RANK10_D";
break;
case 24:
return "TAT_RANK20_D";
break;
case 25:
return "TAT_TAT9U";
break;
case 26:
return "TAT_RANK20_D";
break;
case 27:
return "TAT_RANK20_D";
break;
case 28:
return "TAT_RANK10_D";
break;
case 61:
return "TAT_RANK10_D";
break;
case 62:
return "TAT_RANK10_D";
break;
case 63:
return "TAT_RANK10_D";
break;
case 64:
return "TAT_RANK10_D";
break;
case 65:
return "TAT_TAT17U";
break;
case 29:
return "TAT_RANK10_D";
break;
case 30:
return "TAT_RANK10_D";
break;
case 31:
return "TAT_RANK10_D";
break;
case 66:
return "TAT_RANK20_D";
break;
case 32:
return "TAT_RANK20_D";
break;
case 33:
return "TAT_RANK20_D";
break;
case 34:
return "TAT_TAT24U";
break;
case 35:
return "TAT_RANK20_D";
break;
case 36:
return "TAT_RANK20_D";
break;
case 37:
return "TAT_RANK20_D";
break;
case 38:
return "TAT_RANK20_D";
break;
case 39:
return "TAT_RANK20_D";
break;
case 40:
return "TAT_RANK20_D";
break;
case 67:
return "TAT_RANK20_D";
break;
case 41:
return "TAT_RANK20_D";
break;
case 68:
return "TAT_RANK20_D";
break;
case 42:
return "TAT_RANK20_D";
break;
case 43:
return "TAT_RANK20_D";
break;
case 44:
return "TAT_RANK20_D";
break;
case 45:
return "TAT_TAT37U";
break;
case 46:
return "TAT_TAT38U";
break;
case 47:
return "TAT_RANK20_D";
break;
case 48:
return "TAT_TAT40U";
break;
case 49:
return "TAT_TAT41U";
break;
case 50:
return "TAT_RANK20_D";
break;
case 51:
return "TAT_RANK20_D";
break;
case 52:
return "TAT_RANK20_D";
break;
case 53:
return "TAT_RANK20_D";
break;
case 69:
return "TAT_RANK20_D";
break;
case 57:
return "TAT_HOLDUP1V_D";
break;
case 58:
return "TAT_HOLDUP5V_D";
break;
case 59:
return "TAT_HOLDUP10V_D";
break;
case 60:
return "TAT_HOLDUP20V_D";
break;
}
return sVar0;
}


void func_391(int iParam0){
if(Global_23270.f_5160 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=2;
Global_23270.f_5159++;
Global_23270.f_5098[Global_23270.f_5160]=iParam0;
Global_23270.f_5160++;
}


bool func_392(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 22);
}

int func_393(int iParam0, int iParam1){
int iVar0;
bool bVar1;
struct<12> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
struct<8> Var8;
int iVar9;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar3=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
iVar4=func_156(PLAYER::PLAYER_PED_ID());
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar7=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
iVar6=0;
while (iVar6 < iVar7){
if((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8) && Var8.f_6 !=2140335355) && Var8.f_6 !=joaat("torsoDecal")){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3)==iParam0 && func_407(iVar3, &(Var8.f_7), Var8.f_6, iParam0, iParam1)){
iVar9=(129 + iVar6);
if(((!func_398(Var8.f_2, Var8.f_3, iVar9) && !func_397(iVar9, iVar4)) && func_396(iVar9, iVar4)) && !func_576(iVar9)){
return 0;
}
}}}
iVar6++;
}}
iVar0=0;
while (iVar0 < 4){
bVar1=false;
while (bVar1 < 32){
iVar5=func_45(iVar0, bVar1);
if(func_36(&Var2, func_45(iVar0, bVar1), iVar4, PLAYER::PLAYER_PED_ID(), -1)){
if(((!func_397(iVar5, iVar4) && !func_396(iVar5, iVar4)) && Var2.f_8 !=2140335355) && Var2.f_8 !=joaat("torsoDecal")){
if(func_394(Var2.f_11) && !func_576(Var2.f_11)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5)==iParam0 && func_407(iVar3, &Var2, Var2.f_8, iParam0, iParam1)){
return 0;
}
}}}
bVar1++;
}
iVar0++;
}}
return 1;
}

int func_394(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >=129){
return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return func_116(iParam0, -1);
}else{
return func_395(func_225(), iParam0);
}
return 0;
}

int func_395(bool bParam0, int iParam1){
struct<11> Var0;
if(func_46(bParam0)){
if(bParam0==0){
if(iParam1 >=21){
return 1;
}}elseif(bParam0==1){
if(iParam1 >=40){
return 1;
}}elseif(bParam0==2){
if(iParam1 >=34){
return 1;
}}
if(func_36(&Var0, iParam1, func_44(bParam0), 0, -1)){
return MISC::IS_BIT_SET(Global_113648.f_2365.f_493[bParam0 /*15*/][Var0.f_9], Var0.f_10);
}}
return 0;
}

int func_396(int iParam0, int iParam1){
return ((iParam1==3 || iParam1==4) && iParam0 >=129);
if(iParam1==iParam1 && iParam0==iParam0){}
return 0;
}

int func_397(int iParam0, int iParam1){
switch (iParam1){
case 3:
case 4:
switch (iParam0){
case 13:
case 14:
case 15:
case 16:
case 71:
case 72:
return 1;
break;
}
break;
}
return 0;
}

int func_398(int iParam0, int iParam1, int iParam2){
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
switch (iParam0){
case 1841427399:
switch (iParam1){
case -507124931:
case -2045170715:
if(func_625(36717, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-507124931);
break;
case -187038898:
case 524638244:
if(func_625(36767, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-187038898);
break;
case 1797082704:
case -757817895:
if(func_625(36766, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1797082704);
break;
case 1959890413:
case 1506629605:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1959890413);
break;
case 1167984459:
case 568901597:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1167984459);
break;
case 1006005360:
case 1403427788:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1006005360);
break;
case -1295693571:
case -1940685798:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1295693571);
break;
case -1825141795:
case 1441861967:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1825141795);
break;
case 61080464:
case -1941007133:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==61080464);
break;
case -1622071979:
case -1216457341:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1622071979);
break;
case -899024637:
case 141030546:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-899024637);
break;
case -569499773:
case 2065160600:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-569499773);
break;
case -665339429:
case 222569387:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-665339429);
break;
case 858185772:
case -1269669251:
if(Global_262145.f_34056){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==858185772);
break;
}
break;
}
switch (iParam0){
case 987639353:
switch (iParam1){
case 1529075272:
case 28812113:
if(func_625(34505, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1529075272);
break;
case 1769388797:
case 183205348:
if(func_625(34375, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1769388797);
break;
}
break;
}
switch (iParam0){
case joaat("mptuner_overlays"):
switch (iParam1){
case -129339642:
case 2021781367:
if(func_405(116, -1) >=func_404(116, 5, 9) || func_625(31760, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-129339642);
break;
case 887263619:
case -436866133:
if(func_403(123, -1) || func_625(31761, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==887263619);
break;
case -598443208:
case 457275657:
if(func_403(124, -1) || func_625(31762, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-598443208);
break;
case -619123295:
case -250832592:
if(func_403(125, -1) || func_625(31763, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-619123295);
break;
case -2139930425:
case -798760789:
if(func_403(126, -1) || func_625(31764, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-2139930425);
break;
case 991513037:
case -1634791241:
if(func_625(31768, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==991513037);
break;
case -675149090:
case -1227437948:
if(func_625(31769, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-675149090);
break;
case -1686814509:
case -1408179706:
if(func_625(31770, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1686814509);
break;
case 2138708412:
case -1894139601:
if(func_625(31771, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==2138708412);
break;
case 205793848:
case -786254870:
if(func_625(31772, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==205793848);
break;
case 1325175663:
case -773154515:
if(func_625(31773, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1325175663);
break;
case -368088972:
case 1778247767:
if(func_625(31774, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-368088972);
break;
case -1771053026:
case -648092145:
if(func_625(31775, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1771053026);
break;
}
break;
}
switch (iParam0){
case joaat("mpheist4_overlays"):
switch (iParam1){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
if(func_625(30533, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_030_M"));
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
if(func_625(30534, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_032_M"));
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
if(func_625(30535, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_028_M"));
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
if(func_625(30536, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_029_M"));
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
if(func_625(30537, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_031_M"));
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
if(func_625(30538, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_022_M"));
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
if(func_625(30539, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_023_M"));
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
if(func_625(30540, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_020_M"));
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
if(func_625(30541, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_021_M"));
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
if(func_625(30542, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_003_M"));
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
if(func_625(30543, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_004_M"));
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
if(func_625(30544, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_005_M"));
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
if(func_625(30545, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_006_M"));
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
if(func_625(30546, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_027_M"));
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
if(func_625(30547, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_026_M"));
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
if(func_625(30548, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_025_M"));
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
if(func_625(30549, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_024_M"));
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
if(func_625(30550, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_002_M"));
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
if(func_625(30551, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_001_M"));
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
if(func_625(30552, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_000_M"));
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
if(func_625(30553, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_007_M"));
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
if(func_625(30554, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_008_M"));
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
if(func_625(30555, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_009_M"));
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
if(func_625(30556, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_010_M"));
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
if(func_625(30557, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_011_M"));
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
if(func_625(30524, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_012_M"));
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
if(func_625(30525, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_013_M"));
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
if(func_625(30526, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_014_M"));
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
if(func_625(30527, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_015_M"));
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
if(func_625(30528, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_016_M"));
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
if(func_625(30529, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_017_M"));
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
if(func_625(30530, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_018_M"));
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
if(func_625(30531, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_019_M"));
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
if(func_625(30532, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_033_M"));
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
if(func_625(30570, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_045_M"));
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
if(func_625(30571, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_046_M"));
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
if(func_625(30568, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_048_M"));
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
if(func_625(30569, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_047_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_049_F"):
if(func_625(30634, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_049_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_051_F"):
if(func_625(30635, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_051_M"));
break;
case joaat("MP_Heist4_Tee_053_M"):
case joaat("MP_Heist4_Tee_053_F"):
if(func_625(30636, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_053_M"));
break;
case joaat("MP_Heist4_Tee_054_M"):
case joaat("MP_Heist4_Tee_054_F"):
if(func_625(30637, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_054_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
if(func_625(30703, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_055_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
if(func_625(30704, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_057_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
if(func_625(30700, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_059_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
if(func_625(30701, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_061_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
if(func_625(30702, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_063_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
if(func_625(30699, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_065_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -1265443416:
case 676807987:
if(func_625(30260, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1265443416);
break;
case 1888753218:
case 272160153:
if(func_625(30261, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1888753218);
break;
case -552467991:
case 1593344440:
if(func_625(30262, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-552467991);
break;
case -1655919948:
case 546222390:
if(func_625(30263, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1655919948);
break;
case -917106601:
case 1983375900:
if(func_625(30264, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-917106601);
break;
case 1595446967:
case -620589387:
if(func_625(30265, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1595446967);
break;
case -530593323:
case 383923929:
if(func_625(30266, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-530593323);
break;
case 561619447:
case -1703406594:
if(func_625(30267, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==561619447);
break;
case -1913656173:
case -398286533:
if(func_625(30268, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1913656173);
break;
case -1766901922:
case -80478106:
if(func_625(30269, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1766901922);
break;
case 2091781849:
case 1835331655:
if(func_625(30270, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==2091781849);
break;
case 1824588341:
case -1650596870:
if(func_625(30271, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1824588341);
break;
case 242597641:
case 1231926496:
if(func_625(30272, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==242597641);
break;
case 566785691:
case -1506181253:
if(func_625(30273, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==566785691);
break;
case -2091312957:
case -1737145605:
if(func_625(30274, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-2091312957);
break;
case -2079214831:
case 1673851512:
if(func_625(30275, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-2079214831);
break;
case 1359156274:
case 1023339598:
if(func_625(30276, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1359156274);
break;
case 1904247246:
case -163738770:
if(func_625(30277, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1904247246);
break;
case -1351518396:
case 1863218823:
if(func_625(30278, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1351518396);
break;
case -797874817:
case 333966447:
if(func_625(30279, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-797874817);
break;
case -385507297:
case 1412626052:
if(func_625(30280, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-385507297);
break;
case 2011910758:
case -39100956:
if(func_625(30281, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==2011910758);
break;
case -1953985443:
case 1631533003:
if(func_625(30282, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1953985443);
break;
case -1124222352:
case 1493430918:
if(func_625(30283, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1124222352);
break;
case -1806994767:
case -196693334:
if(func_625(30284, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1806994767);
break;
case -1445761968:
case 553507495:
if(func_625(30285, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1445761968);
break;
case -89186417:
case 2003474700:
if(func_625(30286, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-89186417);
break;
case -308083083:
case 1121792228:
if(func_625(30287, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-308083083);
break;
case 667714507:
case -1424651669:
if(func_625(30288, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==667714507);
break;
case -1610210252:
case -1454164346:
if(func_625(30289, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1610210252);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -417116499:
case -779574408:
if(func_625(28255, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-417116499);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case 1246110729:
case -1361908447:
if(func_403(89, -1) || func_625(30254, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==1246110729);
break;
case 461575135:
case 1250161120:
if(func_403(90, -1) || func_625(30255, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==461575135);
break;
case -386163163:
case 1288201657:
if(func_403(92, -1) || func_625(30256, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-386163163);
break;
case -1414541879:
case 111412152:
if((((func_403(89, -1) && func_403(90, -1)) && func_403(92, -1)) && func_403(91, -1)) || func_625(30257, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==-1414541879);
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_001_F"):
case joaat("mpHeist3_Tee_001_M"):
if(func_403(78, -1) || func_625(28199, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_001_M"));
break;
case joaat("mpHeist3_Tee_000_F"):
case joaat("mpHeist3_Tee_000_M"):
if(((func_403(77, -1) && func_403(78, -1)) && func_405(92, -1) >=func_404(92, 5, 9)) || func_625(28200, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_000_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_007_F"):
case joaat("mpHeist3_Tee_008_F"):
case joaat("mpHeist3_Tee_009_F"):
case joaat("mpHeist3_Tee_007_M"):
case joaat("mpHeist3_Tee_008_M"):
case joaat("mpHeist3_Tee_009_M"):
if(((func_405(93, -1) >=func_404(93, 5, 9) && func_403(79, -1)) && func_403(80, -1)) || func_625(28204, -1)){
return 0;
}
return !func_406(iParam2, iParam1, ((iParam1==joaat("mpHeist3_Tee_007_M") || iParam1==joaat("mpHeist3_Tee_008_M")) || iParam1==joaat("mpHeist3_Tee_009_M")));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_004_F"):
case joaat("mpHeist3_Tee_004_M"):
if(func_403(81, -1) || func_625(28206, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_004_M"));
break;
case joaat("mpHeist3_Tee_005_F"):
case joaat("mpHeist3_Tee_005_M"):
if(func_405(94, -1) >=func_404(94, 5, 9) || func_625(28207, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_005_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_006_F"):
case joaat("mpHeist3_Tee_006_M"):
if(((func_403(84, -1) && func_403(85, -1)) && func_405(97, -1) >=func_404(97, 5, 9)) || func_625(28212, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_006_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_002_F"):
case joaat("mpHeist3_Tee_002_M"):
if(func_625(28249, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_002_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_013_F"):
case joaat("mpHeist3_Tee_013_M"):
if(func_625(28183, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_013_M"));
break;
case joaat("mpHeist3_Tee_014_F"):
case joaat("mpHeist3_Tee_014_M"):
if(func_625(28182, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_014_M"));
break;
case joaat("mpHeist3_Tee_015_F"):
case joaat("mpHeist3_Tee_015_M"):
if(func_625(28184, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_015_M"));
break;
case joaat("mpHeist3_Tee_016_F"):
case joaat("mpHeist3_Tee_016_M"):
if(func_625(28181, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_016_M"));
break;
case joaat("mpHeist3_Tee_017_F"):
case joaat("mpHeist3_Tee_017_M"):
if(func_625(28178, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_017_M"));
break;
case joaat("mpHeist3_Tee_018_F"):
case joaat("mpHeist3_Tee_018_M"):
if(func_625(28177, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_018_M"));
break;
case joaat("mpHeist3_Tee_019_F"):
case joaat("mpHeist3_Tee_019_M"):
if(func_625(28176, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_019_M"));
break;
case joaat("mpHeist3_Tee_020_F"):
case joaat("mpHeist3_Tee_020_M"):
if(func_625(28180, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_020_M"));
break;
case joaat("mpHeist3_Tee_021_F"):
case joaat("mpHeist3_Tee_021_M"):
if(func_625(28179, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_021_M"));
break;
case joaat("mpHeist3_Tee_022_F"):
case joaat("mpHeist3_Tee_022_M"):
if(((((((((func_625(28176, -1) && func_625(28177, -1)) && func_625(28178, -1)) && func_625(28179, -1)) && func_625(28180, -1)) && func_625(28181, -1)) && func_625(28182, -1)) && func_625(28183, -1)) && func_625(28184, -1)) || func_625(28221, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_022_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_023_F"):
case joaat("mpHeist3_Tee_023_M"):
if(func_625(28191, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_023_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_011_F"):
case joaat("mpHeist3_Tee_011_M"):
if(func_625(28190, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_011_M"));
break;
case joaat("mpHeist3_Tee_012_F"):
case joaat("mpHeist3_Tee_012_M"):
if(func_625(28189, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_012_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_003_F"):
case joaat("mpHeist3_Tee_003_M"):
if(func_400(0, 1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_003_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_010_F"):
case joaat("mpHeist3_Tee_010_M"):
if((((((((((((((((((func_403(77, -1) && func_403(78, -1)) && func_405(92, -1) >=func_404(92, 5, 9)) && func_405(93, -1) >=func_404(93, 5, 9)) && func_403(79, -1)) && func_403(80, -1)) && func_403(81, -1)) && func_405(94, -1) >=func_404(94, 5, 9)) && func_405(95, -1) >=func_404(95, 5, 9)) && func_403(82, -1)) && func_403(83, -1)) && func_405(96, -1) >=func_404(96, 5, 9)) && func_403(84, -1)) && func_403(85, -1)) && func_405(97, -1) >=func_404(97, 5, 9)) && func_403(86, -1)) && func_403(87, -1)) && func_403(88, -1)) || func_625(28222, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_010_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpVinewood_overlays"):
switch (iParam1){
case joaat("MP_Vinewood_Tat_023_M"):
case joaat("MP_Vinewood_Tat_023_F"):
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_023_M"));
break;
case joaat("MP_Vinewood_Tat_030_M"):
case joaat("MP_Vinewood_Tat_030_F"):
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_030_M"));
break;
case joaat("CasinoTop_M_21"):
case joaat("CasinoTop_F_21"):
if(func_625(27109, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_21"));
break;
case joaat("CasinoTop_M_23"):
case joaat("CasinoTop_F_23"):
if(func_625(27110, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_23"));
break;
case joaat("CasinoTop_M_2"):
case joaat("CasinoTop_F_2"):
if(func_625(27111, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_2"));
break;
case joaat("CasinoTop_M_4"):
case joaat("CasinoTop_F_4"):
if(func_625(27112, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_4"));
break;
case joaat("CasinoTop_M_6"):
case joaat("CasinoTop_F_6"):
if(func_625(27113, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_6"));
break;
case joaat("CasinoTop_M_10"):
case joaat("CasinoTop_F_10"):
if(func_625(27114, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_10"));
break;
case joaat("CasinoTop_M_22"):
case joaat("CasinoTop_F_22"):
if(func_625(27115, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("CasinoTop_M_22"));
break;
}
break;
case joaat("mpChristmas2018_overlays"):
switch (iParam1){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
if(func_625(25032, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_000_M"));
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
if(func_625(25033, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_001_M"));
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
if(func_625(25034, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_002_M"));
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
if(func_625(25035, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_003_M"));
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
if(func_625(25036, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_004_M"));
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
if(func_625(25037, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_005_M"));
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
if(func_625(25038, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_006_M"));
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
if(func_625(25039, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_007_M"));
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
if(func_625(25040, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_008_M"));
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
if(func_625(25041, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_009_M"));
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
if(func_625(25042, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_010_M"));
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
if(func_625(25043, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_011_M"));
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
if(func_625(25044, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_012_M"));
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
if(func_625(25045, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_013_M"));
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
if(func_625(25046, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_014_M"));
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
if(func_625(25047, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_015_M"));
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
if(func_625(25048, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_016_M"));
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
if(func_625(25049, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_017_M"));
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
if(func_625(25050, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_018_M"));
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
if(func_625(25051, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_019_M"));
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
if(func_625(25052, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_020_M"));
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
if(func_625(25053, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_021_M"));
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
if(func_625(25054, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_022_M"));
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
if(func_625(25055, -1)){
return 0;
}
if(func_625(27077, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_023_M"));
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
if(func_625(25056, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_024_M"));
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
if(func_625(25057, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_025_M"));
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
if(func_625(25058, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_026_M"));
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
if(func_625(25059, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_027_M"));
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
if(func_625(25060, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_028_M"));
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
if(func_625(25061, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_029_M"));
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
if(func_625(25062, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_030_M"));
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
if(func_625(25063, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_031_M"));
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
if(func_625(25064, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_032_M"));
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
if(func_625(25065, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_033_M"));
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
if(func_625(25066, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_034_M"));
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
if(func_625(25067, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_035_M"));
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
if(func_625(25068, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_036_M"));
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
if(func_625(25069, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_037_M"));
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
if(func_625(25070, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_038_M"));
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
if(func_625(25071, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_039_M"));
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
if(func_625(25072, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_040_M"));
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
if(func_625(25073, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_041_M"));
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
if(func_625(25074, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_042_M"));
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
if(func_625(25075, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_043_M"));
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
if(func_625(25076, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_044_M"));
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
if(func_625(25077, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_045_M"));
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
if(func_625(25078, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_046_M"));
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
if(func_625(25079, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_047_M"));
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
if(func_625(25080, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_048_M"));
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
if(func_625(25081, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_049_M"));
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
if(func_625(25082, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_050_M"));
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
if(func_625(25083, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_051_M"));
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
if(func_625(25084, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_052_M"));
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
if(func_625(25085, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_053_M"));
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
if(func_625(25086, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_054_M"));
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
if(func_625(25087, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_055_M"));
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
if(func_625(25088, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_056_M"));
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
if(func_625(25089, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_057_M"));
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
if(func_625(25090, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_058_M"));
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
if(func_625(25091, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_059_M"));
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
if(func_625(25092, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_060_M"));
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
if(func_625(25093, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_061_M"));
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
if(func_625(25094, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_062_M"));
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
if(func_625(25095, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_063_M"));
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
if(func_625(25096, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_064_M"));
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
if(func_625(25097, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_065_M"));
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
if(func_625(25098, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_066_M"));
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
if(func_625(25099, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_067_M"));
break;
case joaat("MP_Christmas2018_Tat_000_M"):
case joaat("MP_Christmas2018_Tat_000_F"):
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tat_000_M"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam1){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
if(func_625(22108, -1) || func_625(25006, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_000_M"));
break;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
if(func_625(9481, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_002_M"));
break;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
if(func_625(9470, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_003_M"));
break;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
if(func_625(9475, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_004_M"));
break;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
if(func_625(9472, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_005_M"));
break;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
if(func_625(9465, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_006_M"));
break;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
if(func_625(9463, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_007_M"));
break;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
if(func_625(9464, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_008_M"));
break;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
if(func_625(9468, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_009_M"));
break;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
if(func_625(9469, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_010_M"));
break;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
if(func_625(9479, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_011_M"));
break;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
if(func_625(9473, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_012_M"));
break;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
if(func_625(9480, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_013_M"));
break;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
if(func_625(9476, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_014_M"));
break;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
if(func_625(9477, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_015_M"));
break;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
if(func_625(9471, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_016_M"));
break;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
if(func_625(9474, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_017_M"));
break;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
if(func_625(9467, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_018_M"));
break;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
if(func_625(9478, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_019_M"));
break;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
if(func_625(9462, -1)){
return 0;
}
if(iParam1==joaat("MP_Battle_Clothing_020_M")){
if(func_625(27085, -1)){
return 0;
}}elseif(func_625(27084, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_020_M"));
break;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
if(func_625(9466, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_021_M"));
break;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
if(func_625(22126, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_022_M"));
break;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
if(func_625(22127, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_023_M"));
break;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
if(func_625(22128, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_024_M"));
break;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
if(func_625(22124, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_025_M"));
break;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
if(func_625(22130, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_026_M"));
break;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
if(func_625(22125, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_027_M"));
break;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
if(func_625(22129, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_028_M"));
break;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
if(func_625(22131, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_029_M"));
break;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
if(func_625(22132, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_030_M"));
break;
}
switch (iParam1){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
if(func_625(22147, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_031_M"));
break;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
if(func_625(22148, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_032_M"));
break;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
if(func_625(22149, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_033_M"));
break;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
if(func_625(22150, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_034_M"));
break;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
if(func_625(22151, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_035_M"));
break;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
if(func_625(22152, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_036_M"));
break;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
if(func_625(22153, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_037_M"));
break;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
if(func_625(22154, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_038_M"));
break;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
if(func_625(22155, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_039_M"));
break;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
if(func_625(22156, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_040_M"));
break;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
if(func_625(22157, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_041_M"));
break;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
if(func_625(22158, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_042_M"));
break;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
if(func_625(22159, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_043_M"));
break;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
if(func_625(22160, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_044_M"));
break;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
if(func_625(22161, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_045_M"));
break;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
if(func_625(22162, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_046_M"));
break;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
if(func_625(22163, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_047_M"));
break;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
if(func_625(22164, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_048_M"));
break;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
if(func_625(22165, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_049_M"));
break;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
if(func_625(22166, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_050_M"));
break;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
if(func_625(22167, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_051_M"));
break;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
if(func_625(22168, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_052_M"));
break;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
if(func_625(22169, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_053_M"));
break;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
if(func_625(22170, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_054_M"));
break;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
if(func_625(22171, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_055_M"));
break;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
if(func_625(22172, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_056_M"));
break;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
if(func_625(22173, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_057_M"));
break;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
if(func_625(22174, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_058_M"));
break;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
if(func_625(22175, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_059_M"));
break;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
if(func_625(22176, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_060_M"));
break;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
if(func_625(22177, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_061_M"));
break;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
if(func_625(22178, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_062_M"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam1){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
if(func_625(15426, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_019_M"));
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
if(func_625(15422, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
if(func_625(15423, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M_ALT"));
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
if(func_625(15421, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_021_M"));
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
if(func_625(15427, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_022_M"));
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
if(func_625(15419, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_023_M"));
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
if(func_625(15420, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_024_M"));
break;
}
switch (iParam1){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
if(func_625(15394, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_000_M"));
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_001_M"));
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
if(func_625(15406, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_002_M"));
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
if(func_625(15395, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_003_M"));
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_004_M"));
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
if(func_625(15410, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_005_M"));
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
if(func_625(15407, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_006_M"));
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_007_M"));
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_008_M"));
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
if(func_625(15414, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_009_M"));
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
if(func_625(15415, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_010_M"));
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
if(func_625(15399, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_011_M"));
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
if(func_625(15404, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_012_M"));
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_013_M"));
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
if(func_625(15392, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_014_M"));
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
if(func_625(15390, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_015_M"));
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
if(func_625(15402, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_016_M"));
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
if(func_625(15416, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_017_M"));
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
if(func_399(209, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_018_M"));
break;
}
break;
case joaat("mpBiker_overlays"):
switch (iParam1){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
if(func_625(9366, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_022_M"));
break;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
if(func_625(9367, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_023_M"));
break;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
if(func_625(9369, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_024_M"));
break;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
if(func_625(9368, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_025_M"));
break;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
if(func_625(9365, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_047_M"));
break;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
if(func_625(9364, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_048_M"));
break;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
if(func_625(27078, -1)){
return 0;
}
if(func_625(9363, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_049_M"));
break;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
if(func_625(9362, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_050_M"));
break;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
if(func_625(9370, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_051_M"));
break;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
if(func_625(9371, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_052_M"));
break;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
if(func_625(9372, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_053_M"));
break;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
if(func_625(9373, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_054_M"));
break;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
if(func_625(9374, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_055_M"));
break;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
if(func_625(9384, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_000_M"));
break;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
if(func_625(9385, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_001_M"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam1){
case joaat("MP_exec_prizes_015_M"):
case joaat("MP_exec_prizes_015_F"):
if(func_625(7551, -1) || func_16(3792, -1, 0) >=Global_262145.f_16768){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_015_M"));
break;
case joaat("MP_exec_prizes_000_M"):
case joaat("MP_exec_prizes_000_F"):
if(func_625(7467, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_000_M"));
break;
case joaat("MP_exec_prizes_001_M"):
case joaat("MP_exec_prizes_001_F"):
if(func_625(7468, -1)){
return 0;
}
if(iParam1==joaat("MP_exec_prizes_001_M")){
if(func_625(27083, -1)){
return 0;
}}elseif(func_625(27086, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_001_M"));
break;
case joaat("MP_exec_prizes_002_M"):
case joaat("MP_exec_prizes_002_F"):
if(func_625(7469, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_002_M"));
break;
case joaat("MP_exec_prizes_003_M"):
case joaat("MP_exec_prizes_003_F"):
if(func_625(7470, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_003_M"));
break;
case joaat("MP_exec_prizes_004_M"):
case joaat("MP_exec_prizes_004_F"):
if(func_625(7471, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_004_M"));
break;
case joaat("MP_exec_prizes_005_M"):
case joaat("MP_exec_prizes_005_F"):
if(func_625(7472, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_005_M"));
break;
case joaat("MP_exec_prizes_006_M"):
case joaat("MP_exec_prizes_006_F"):
if(func_625(7473, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_006_M"));
break;
case joaat("MP_exec_prizes_007_M"):
case joaat("MP_exec_prizes_007_F"):
if(func_625(7474, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_007_M"));
break;
case joaat("MP_exec_prizes_008_M"):
case joaat("MP_exec_prizes_008_F"):
if(func_625(7475, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_008_M"));
break;
case joaat("MP_exec_prizes_009_M"):
case joaat("MP_exec_prizes_009_F"):
if(func_625(7476, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_009_M"));
break;
case joaat("MP_exec_prizes_010_M"):
case joaat("MP_exec_prizes_010_F"):
if(func_625(7477, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_010_M"));
break;
case joaat("MP_exec_prizes_011_M"):
case joaat("MP_exec_prizes_011_F"):
if(func_625(7478, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_011_M"));
break;
case joaat("MP_exec_prizes_012_M"):
case joaat("MP_exec_prizes_012_F"):
if(func_625(7479, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_012_M"));
break;
case joaat("MP_exec_prizes_013_M"):
case joaat("MP_exec_prizes_013_F"):
if(func_625(7480, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_013_M"));
break;
case joaat("MP_exec_prizes_014_M"):
case joaat("MP_exec_prizes_014_F"):
if(func_625(7481, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_014_M"));
break;
}
break;
case joaat("mpHalloween_overlays"):
switch (iParam1){
case joaat("HW_Tee_000_F"):
case joaat("HW_Tee_000_M"):
if(func_625(4260, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_000_M"));
break;
case joaat("HW_Tee_001_F"):
case joaat("HW_Tee_001_M"):
if(func_625(4257, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_001_M"));
break;
case joaat("HW_Tee_002_F"):
case joaat("HW_Tee_002_M"):
if(func_625(4269, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_002_M"));
break;
case joaat("HW_Tee_003_F"):
case joaat("HW_Tee_003_M"):
if(func_625(4261, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_003_M"));
break;
case joaat("HW_Tee_004_F"):
case joaat("HW_Tee_004_M"):
if(func_625(4259, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_004_M"));
break;
case joaat("HW_Tee_005_F"):
case joaat("HW_Tee_005_M"):
if(func_625(4268, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_005_M"));
break;
case joaat("HW_Tee_006_F"):
case joaat("HW_Tee_006_M"):
if(func_625(4265, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_006_M"));
break;
case joaat("HW_Tee_007_F"):
case joaat("HW_Tee_007_M"):
if(func_625(4258, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_007_M"));
break;
case joaat("HW_Tee_008_F"):
case joaat("HW_Tee_008_M"):
if(func_625(4264, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_008_M"));
break;
case joaat("HW_Tee_009_F"):
case joaat("HW_Tee_009_M"):
if(func_625(4267, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_009_M"));
break;
case joaat("HW_Tee_010_F"):
case joaat("HW_Tee_010_M"):
if(func_625(4262, -1)){
return 0;
}
if(func_625(27079, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_010_M"));
break;
case joaat("HW_Tee_011_F"):
case joaat("HW_Tee_011_M"):
if(func_625(4263, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_011_M"));
break;
case joaat("HW_Tee_012_F"):
case joaat("HW_Tee_012_M"):
if(func_625(4266, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("HW_Tee_012_M"));
break;
}
break;
case joaat("mpLowrider_overlays"):
switch (iParam1){
case joaat("MP_Bennys_000_M"):
case joaat("MP_Bennys_001_M"):
if(func_16(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_M")){
if(func_625(27068, -1)){
return 0;
}}
return !func_406(iParam2, iParam1, 1);
break;
case joaat("MP_Bennys_000_F"):
case joaat("MP_Bennys_001_F"):
if(func_16(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_F")){
if(func_625(27068, -1)){
return 0;
}}
return !func_406(iParam2, iParam1, 0);
break;
}
break;
case joaat("mpxmas_604490_overlays"):
switch (iParam1){
case joaat("MP_IHeartLC_000_M"):
case joaat("MP_IHeartLC_001_F"):
if(func_625(113, -1)){
return 0;
}
return !func_406(iParam2, iParam1, iParam1==joaat("MP_IHeartLC_000_M"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam1){
case joaat("MP_Award_M_Tshirt_004"):
case joaat("MP_Award_M_Tshirt_005"):
case joaat("MP_Award_M_Tshirt_006"):
case joaat("MP_Award_M_Tshirt_007"):
case joaat("MP_Award_M_Tshirt_008"):
case joaat("MP_Award_M_Tshirt_009"):
case joaat("MP_Award_M_Tshirt_010"):
case joaat("MP_Award_M_Tshirt_011"):
case joaat("MP_Award_M_Tshirt_012"):
case joaat("MP_Award_M_Tshirt_013"):
if(iParam1==joaat("MP_Award_M_Tshirt_004")){
if(func_625(27082, -1)){
return 0;
}
if(func_625(3770, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_005")){
if(func_625(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_006")){
if(func_625(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_007")){
if(func_625(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_008")){
if(func_625(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_009")){
if(func_625(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_010")){
if(func_625(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_011")){
if(func_625(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_012")){
if(func_625(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_013")){
if(func_625(3779, -1) || func_625(27084, -1)){
return 0;
}}
return !func_406(iParam2, iParam1, 1);
break;
case joaat("MP_Award_F_Tshirt_004"):
case joaat("MP_Award_F_Tshirt_005"):
case joaat("MP_Award_F_Tshirt_006"):
case joaat("MP_Award_F_Tshirt_007"):
case joaat("MP_Award_F_Tshirt_008"):
case joaat("MP_Award_F_Tshirt_009"):
case joaat("MP_Award_F_Tshirt_010"):
case joaat("MP_Award_F_Tshirt_011"):
case joaat("MP_Award_F_Tshirt_012"):
case joaat("MP_Award_F_Tshirt_013"):
if(iParam1==joaat("MP_Award_F_Tshirt_004")){
if(func_625(3770, -1)){
return 0;
}
if(func_625(27082, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_005")){
if(func_625(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_006")){
if(func_625(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_007")){
if(func_625(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_008")){
if(func_625(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_009")){
if(func_625(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_010")){
if(func_625(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_011")){
if(func_625(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_012")){
if(func_625(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_013")){
if(func_625(3779, -1) || func_625(27083, -1)){
return 0;
}}
return !func_406(iParam2, iParam1, 0);
break;
case joaat("MP_Elite_M_Tshirt"):
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Elite_F_Tshirt"):
case joaat("MP_Elite_F_Tshirt_1"):
if((((func_625(3765, -1) && func_625(3766, -1)) && func_625(3767, -1)) && func_625(3768, -1)) && func_625(3769, -1)){
return 0;
}
return 1;
break;
}
break;
case joaat("mpIndependence_overlays"):
switch (iParam1){
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return !func_625(3593, -1);
break;
}
if(!Global_262145.f_8259 && !func_406(iParam2, iParam1, 0)){
return 1;
}
break;
case joaat("mpHipster_overlays"):
switch (iParam1){
case 1443536758:
case 1333229624:
case -1665422117:
case 1100930183:
case -1595008258:
case 94055115:
case -627896761:
case 1873477305:
return 1;
break;
case 196632624:
case -1644428107:
case 1108198688:
case 810099095:
return 1;
break;
case 300677115:
case 262692161:
case -1684141219:
case 390655118:
case -479442624:
case -542924311:
case 1696910411:
case -1259058037:
return 1;
break;
case 1980445908:
case -1882429354:
case -1235341889:
case -1544517404:
return 1;
break;
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return (!func_399(152, -1) && !func_625(9440, -1));
break;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return (!func_399(151, -1) && !func_625(9430, -1));
break;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return (!func_116(iParam2, -1) && !func_625(9426, -1));
break;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return (!func_116(iParam2, -1) && !func_625(9427, -1));
break;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return (!func_116(iParam2, -1) && !func_625(9428, -1));
break;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return (!func_116(iParam2, -1) && !func_625(9431, -1));
break;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return (!func_116(iParam2, -1) && !func_625(9432, -1));
break;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return (!func_116(iParam2, -1) && !func_625(9433, -1));
break;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return (!func_116(iParam2, -1) && !func_625(9439, -1));
break;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return (!func_116(iParam2, -1) && !func_625(9434, -1));
break;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return (!func_116(iParam2, -1) && !func_625(9435, -1));
break;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return (!func_116(iParam2, -1) && !func_625(9436, -1));
break;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return (!func_116(iParam2, -1) && !func_625(9429, -1));
break;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return (!func_116(iParam2, -1) && !func_625(9437, -1));
break;
case joaat("FM_Rstar_M_Tshirt_000"):
case joaat("FM_Rstar_M_Tshirt_001"):
case joaat("FM_Rstar_M_Tshirt_002"):
case joaat("FM_Rstar_F_Tshirt_000"):
case joaat("FM_Rstar_F_Tshirt_001"):
case joaat("FM_Rstar_F_Tshirt_002"):
return !func_293();
break;
}
break;
case joaat("mpvalentines_overlays"):
if((!Global_262145.f_7059 && !func_116(iParam2, -1)) && !Global_262145.f_12034){
return 1;
}
break;
case joaat("mpPilot_overlays"):
switch (iParam1){
case joaat("MP_Fli_M_Tshirt_000"):
case joaat("MP_Fli_F_Tshirt_000"):
return !func_625(3608, -1);
break;
}
break;
case joaat("mpLTS_overlays"):
switch (iParam1){
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return (!func_625(3615, -1) && !func_625(9438, -1));
break;
}
break;
case joaat("mpLuxe_overlays"):
if(iParam1==joaat("MP_LUXE_VDG_006_F")){
return 1;
}
switch (iParam1){
case joaat("MP_FAKE_DIS_000_M"):
case joaat("MP_FAKE_DIS_000_F"):
return !func_625(3783, -1);
break;
case joaat("MP_FAKE_DIS_001_M"):
case joaat("MP_FAKE_DIS_001_F"):
return !func_625(3784, -1);
break;
case joaat("MP_FAKE_DS_000_M"):
case joaat("MP_FAKE_DS_000_F"):
return !func_625(3785, -1);
break;
case joaat("MP_FAKE_ENEMA_000_M"):
case joaat("MP_FAKE_ENEMA_000_F"):
return !func_625(3786, -1);
break;
case joaat("MP_FAKE_LB_000_M"):
case joaat("MP_FAKE_LB_000_F"):
return !func_625(3787, -1);
break;
case joaat("MP_FAKE_LC_000_M"):
case joaat("MP_FAKE_LC_000_F"):
return !func_625(3788, -1);
break;
case joaat("MP_FAKE_SC_000_M"):
case joaat("MP_FAKE_SC_000_F"):
if(func_625(27081, -1)){
return 0;
}
return !func_625(3789, -1);
break;
case joaat("MP_FAKE_Vap_000_M"):
case joaat("MP_FAKE_Vap_000_F"):
return !func_625(3790, -1);
break;
case joaat("MP_FAKE_Per_000_M"):
case joaat("MP_FAKE_Per_000_F"):
return !func_625(3791, -1);
break;
case joaat("MP_FAKE_SN_000_M"):
case joaat("MP_FAKE_SN_000_F"):
return !func_625(3792, -1);
break;
case joaat("MP_FILM_000_F"):
case joaat("MP_FILM_000_M"):
if(iParam1==joaat("MP_FILM_000_F")){
iVar0=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar0, 0)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_000_M")){
iVar1=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar1, 18)){
return 0;
}}
return !func_625(3793, -1);
break;
case joaat("MP_FILM_001_F"):
case joaat("MP_FILM_001_M"):
if(iParam1==joaat("MP_FILM_001_F")){
iVar2=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar2, 1)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_001_M")){
iVar3=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar3, 19)){
return 0;
}}
return !func_625(3794, -1);
break;
case joaat("MP_FILM_002_F"):
case joaat("MP_FILM_002_M"):
if(iParam1==joaat("MP_FILM_002_F")){
iVar4=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar4, 2)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_002_M")){
iVar5=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar5, 20)){
return 0;
}}
return !func_625(3795, -1);
break;
case joaat("MP_FILM_003_F"):
case joaat("MP_FILM_003_M"):
if(iParam1==joaat("MP_FILM_003_F")){
iVar6=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar6, 3)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_003_M")){
iVar7=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar7, 21)){
return 0;
}}
return !func_625(3796, -1);
break;
case joaat("MP_FILM_004_F"):
case joaat("MP_FILM_004_M"):
if(iParam1==joaat("MP_FILM_004_F")){
iVar8=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar8, 4)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_004_M")){
iVar9=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar9, 22)){
return 0;
}}
return !func_625(3797, -1);
break;
case joaat("MP_FILM_005_F"):
case joaat("MP_FILM_005_M"):
if(iParam1==joaat("MP_FILM_005_F")){
iVar10=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar10, 5)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_005_M")){
iVar11=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar11, 23)){
return 0;
}}
return !func_625(3798, -1);
break;
case joaat("MP_FILM_006_F"):
case joaat("MP_FILM_006_M"):
if(iParam1==joaat("MP_FILM_006_F")){
iVar12=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar12, 6)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_006_M")){
iVar13=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar13, 24)){
return 0;
}}
return !func_625(3799, -1);
break;
case joaat("MP_FILM_007_F"):
case joaat("MP_FILM_007_M"):
if(iParam1==joaat("MP_FILM_007_F")){
iVar14=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar14, 7)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_007_M")){
iVar15=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar15, 25)){
return 0;
}}
return !func_625(3800, -1);
break;
case joaat("MP_FILM_008_F"):
case joaat("MP_FILM_008_M"):
if(iParam1==joaat("MP_FILM_008_F")){
iVar16=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar16, 8)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_008_M")){
iVar17=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar17, 26)){
return 0;
}}
return !func_625(3801, -1);
break;
case joaat("MP_FILM_009_F"):
case joaat("MP_FILM_009_M"):
if(iParam1==joaat("MP_FILM_009_F")){
iVar18=func_16(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar18, 9)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_009_M")){
iVar19=func_16(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar19, 27)){
return 0;
}}
return !func_625(3802, -1);
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam1){
case joaat("MP_LUXE_TAT_030_M"):
case joaat("MP_LUXE_TAT_031_M"):
return 1;
break;
case joaat("MP_LUXE_TAT_030_F"):
case joaat("MP_LUXE_TAT_031_F"):
return 1;
break;
}
break;
case joaat("multiplayer_overlays"):
switch (iParam1){
case joaat("MP_FM_OGA_000_m"):
case joaat("MP_FM_OGA_001_m"):
case joaat("MP_FM_OGA_002_m"):
case joaat("MP_FM_OGA_003_m"):
case joaat("MP_FM_OGA_000_f"):
case joaat("MP_FM_OGA_001_f"):
case joaat("MP_FM_OGA_002_f"):
case joaat("MP_FM_OGA_003_f"):
return !func_40();
break;
}
break;
}
return 0;
}

int func_399(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_17(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_400(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=(20 - 1);
if(bParam1){
iVar0=13;
}
iVar1=0;
while (iVar1 < iVar0){
iVar2=iVar1;
if(!func_402(iVar2) || iParam0){
if(!func_401(PLAYER::PLAYER_ID(), iVar2, 0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_401(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_140()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_434, uVar0);
break;
}}
return 1;
}

int func_402(int iParam0){
switch (iParam0){
case 18:
case 17:
case 19:
return 1;
break;
}
return 0;
}

int func_403(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850651[iParam0 /*3*/][func_17(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_404(int iParam0, int iParam1, int iParam2){
if(iParam2==0){}
switch (iParam0){
case 53:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 39:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 51:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 52:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 60:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 30;
case 4:
return 60;
case 5:
return 120;
default:
}
break;
case 61:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 30;
default:
}
break;
case 62:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
default:
}
break;
case 63:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
default:
}
break;
case 16:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
default:
}
break;
case 0:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
default:
}
break;
case 12:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 11:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 19:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 15:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 17:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 21:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 14:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 20;
default:
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 3:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 4:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 5:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 6:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 7:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 8:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 9:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 10:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 20:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 22:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 23:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 24:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 25:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 26:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 27:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 28:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 29:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 30:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 31:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 32:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 33:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 34:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 35:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 36:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 37:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 38:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 40:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 41:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 42:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 43:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 44:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 45:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 47:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 49:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000;
case 3:
return 10000;
case 4:
return 25000;
case 5:
return 50000;
default:
}
break;
case 48:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 3;
case 3:
return 5;
case 4:
return 7;
case 5:
return 10;
default:
}
break;
case 54:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 55:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 56:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 250;
case 4:
return 500;
case 5:
return 1000;
default:
}
break;
case 57:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 58:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 59:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 46:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 134:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 135:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 136:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 137:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 138:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 128:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 129:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 130:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 131:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 132:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 133:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 139:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 140:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 141:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 142:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 143:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 144:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 145:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 146:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 67:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 147:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 148:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 149:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 150:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 151:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 70:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 71:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 72:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 73:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 74:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 75:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 76:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 77:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 78:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 79:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 80:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 81:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 82:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 20;
case 4:
return 30;
case 5:
return 50;
default:
}
break;
case 83:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 100000;
case 3:
return 250000;
case 4:
return 500000;
case 5:
return 1000000;
default:
}
break;
case 84:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 85:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000;
case 3:
return 3000;
case 4:
return 15000;
case 5:
return 55000;
default:
}
break;
case 86:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 87:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 88:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 40;
default:
}
break;
case 89:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 20;
default:
}
break;
case 90:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 25000;
case 3:
return 50000;
case 4:
return 75000;
case 5:
return 100000;
default:
}
break;
case 91:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 20;
case 4:
return 30;
case 5:
return 40;
default:
}
break;
case 92:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28684;
case 3:
return Global_262145.f_28685;
case 4:
return Global_262145.f_28686;
case 5:
return Global_262145.f_28687;
default:
}
break;
case 93:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28851;
case 3:
return Global_262145.f_28852;
case 4:
return Global_262145.f_28853;
case 5:
return Global_262145.f_28854;
default:
}
break;
case 94:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28885;
case 3:
return Global_262145.f_28886;
case 4:
return Global_262145.f_28887;
case 5:
return Global_262145.f_28888;
default:
}
break;
case 95:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28889;
case 3:
return Global_262145.f_28890;
case 4:
return Global_262145.f_28891;
case 5:
return Global_262145.f_28892;
default:
}
break;
case 96:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28580;
case 3:
return Global_262145.f_28581;
case 4:
return Global_262145.f_28582;
case 5:
return Global_262145.f_28583;
default:
}
break;
case 97:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28855;
case 3:
return Global_262145.f_28856;
case 4:
return Global_262145.f_28857;
case 5:
return Global_262145.f_28858;
default:
}
break;
case 99:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 100:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 101:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 50000;
case 3:
return 250000;
case 4:
return 750000;
case 5:
return 1000000;
default:
}
break;
case 102:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 103:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 104:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 105:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000000;
case 3:
return 5000000;
case 4:
return 10000000;
case 5:
return 20000000;
default:
}
break;
case 106:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 107:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 108:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 109:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 110:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 112:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 114:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 40;
default:
}
break;
case 115:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 116:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 30;
default:
}
break;
case 111:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 30;
case 3:
return 60;
case 4:
return 120;
case 5:
return 240;
default:
}
break;
case 113:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 117:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 118:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 119:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 120:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 5;
default:
}
break;
case 121:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 122:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 123:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 124:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 125:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 5;
default:
}
break;
case 126:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 127:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
}
return 999;
}

int func_405(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2850194[iParam0 /*3*/][func_17(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_406(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(bParam2){
iParam0=func_155(iParam1, 3);
}else{
iParam0=func_155(iParam1, 4);
}}
return (func_116(iParam0, -1) || func_352(iParam0, -1));
}

int func_407(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
if(iParam3==7){
return 0;
}
if(iParam3==0){
if(iParam4==-1){
return 0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam4==0){
return 1;
}
return 0;
}
iVar0=func_54(iParam0, sParam1, iParam2);
switch (iVar0){
case -1:
return 0;
break;
case 26:
case 27:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam4==1){
return 1;
}
return 0;
}else{
if(iParam4==0){
return 1;
}
return 0;
}
break;
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
if(iParam4==0){
return 1;
}
return 0;
break;
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
if(iParam4==2){
return 1;
}
return 0;
break;
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 45:
case 46:
if(iParam4==3){
return 1;
}
return 0;
break;
}
return 0;
}
if(iParam4 !=-1){
return 0;
}
return 1;
}

int func_408(int iParam0, var uParam1, var uParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
iVar0=-1;
iVar1=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=(1632 - 1);
while (iVar2 >=0){
iVar3=(iVar2 / 32);
bVar4=(iVar2 % 32);
if(MISC::IS_BIT_SET(Local_70.f_450[iVar3], bVar4)){
iVar5=(129 + iVar2);
if(iParam0==iVar5 && iVar0 !=-1){
*uParam2=iVar0;
*uParam1=iVar1;
return 1;
}
iVar0++;
iVar1=iVar5;
}
iVar2=(iVar2 + -1);
}}
iVar2=(71 - 1);
while (iVar2 >=0){
iVar3=(iVar2 / 32);
bVar4=(iVar2 % 32);
if(MISC::IS_BIT_SET(Local_70.f_445[iVar3], bVar4)){
if(iParam0==func_45(iVar3, bVar4) && iVar0 !=-1){
*uParam2=iVar0;
*uParam1=iVar1;
return 1;
}
iVar0++;
iVar1=func_45(iVar3, bVar4);
}
iVar2=(iVar2 + -1);
}
if(bParam3){
return func_409(uParam1, uParam2);
}
return 0;
}

int func_409(var uParam0, var uParam1){
int iVar0;
int iVar1;
bool bVar2;
*uParam1=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=(1632 - 1);
while (iVar0 >=0){
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(MISC::IS_BIT_SET(Local_70.f_450[iVar1], bVar2)){
*uParam1++;
*uParam0=(129 + iVar0);
}
iVar0=(iVar0 + -1);
}}
iVar0=(71 - 1);
while (iVar0 >=0){
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(MISC::IS_BIT_SET(Local_70.f_445[iVar1], bVar2)){
*uParam1++;
*uParam0=func_45(iVar1, bVar2);
}
iVar0=(iVar0 + -1);
}
if(*uParam1==-1){
*uParam0=-1;
return 0;
}
return 1;
}

int func_410(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
iVar0=-1;
iVar1=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=(1632 - 1);
while (iVar2 >=0){
iVar3=(iVar2 / 32);
bVar4=(iVar2 % 32);
if(MISC::IS_BIT_SET(Local_70.f_450[iVar3], bVar4)){
iVar5=(129 + iVar2);
if(iParam0==iVar1){
iVar0++;
iVar1=iVar5;
*iParam2=iVar0;
*iParam1=iVar1;
return 1;
}
iVar0++;
iVar1=iVar5;
}
iVar2=(iVar2 + -1);
}}
iVar2=(71 - 1);
while (iVar2 >=0){
iVar3=(iVar2 / 32);
bVar4=(iVar2 % 32);
if(MISC::IS_BIT_SET(Local_70.f_445[iVar3], bVar4)){
if(iParam0==iVar1){
iVar0++;
iVar1=func_45(iVar3, bVar4);
*iParam2=iVar0;
*iParam1=iVar1;
return 1;
}
iVar0++;
iVar1=func_45(iVar3, bVar4);
}
iVar2=(iVar2 + -1);
}
if(bParam3){
return func_411(iParam1, iParam2);
}
return 0;
}

int func_411(var uParam0, var uParam1){
int iVar0;
int iVar1;
bool bVar2;
*uParam1=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=(1632 - 1);
while (iVar0 >=0){
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(MISC::IS_BIT_SET(Local_70.f_450[iVar1], bVar2)){
*uParam1++;
*uParam0=(129 + iVar0);
return 1;
}
iVar0=(iVar0 + -1);
}}
iVar0=(71 - 1);
while (iVar0 >=0){
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(MISC::IS_BIT_SET(Local_70.f_445[iVar1], bVar2)){
*uParam1++;
*uParam0=func_45(iVar1, bVar2);
return 1;
}
iVar0=(iVar0 + -1);
}
*uParam0=-1;
return 0;
}


void func_412(int iParam0, int iParam1, int iParam2){
int iVar0;
if(!NETWORK::IS_STORE_AVAILABLE_TO_USER()){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_201(PLAYER::PLAYER_ID(), 1, 0)){
return;
}
if(PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199)){
return;
}
if(HUD::GET_PAUSE_MENU_STATE() !=0){
return;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return;
}
if(PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
return;
}
if(HUD::IS_WARNING_MESSAGE_ACTIVE()){
return;
}
if(func_413()){
return;
}
if(!func_325()){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0){
if(!Global_100733.f_1474 && !NETWORK::IS_COMMERCE_STORE_OPEN()){
iVar0=18;
set_warning_message_with_header("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
Global_2695714=iParam1;
Global_100733.f_1474=1;
Global_100733.f_1475=iParam2;
}}}


bool func_413(){
return Global_2695821;
}


void func_414(int iParam0, var uParam1, int iParam2){
Global_100733.f_1476=iParam0;
Global_100733.f_1477=uParam1;
Global_100733.f_1478=iParam2;
}


char* func_415(int iParam0, int iParam1, bool bParam2){
switch (iParam0){
case -1:
return "S_N_EM";
break;
case 0:
return "S_H_01";
break;
case 1:
return "S_H_02";
break;
case 2:
return "S_H_03";
break;
case 3:
return "S_H_04";
break;
case 4:
return "S_H_05";
break;
case 5:
return "S_H_06";
break;
case 6:
return "S_H_07";
break;
case 7:
return "S_CL_01";
break;
case 8:
return "S_CL_02";
break;
case 9:
return "S_CL_03";
break;
case 10:
return "S_CL_04";
break;
case 11:
return "S_CL_05";
break;
case 12:
return "S_CL_06";
break;
case 13:
return "S_CL_07";
break;
case 14:
return "S_CM_01";
break;
case 15:
return "S_CM_03";
break;
case 16:
return "S_CM_04";
break;
case 17:
return "S_CM_05";
break;
case 18:
return "S_CH_01";
break;
case 19:
return "S_CH_02";
break;
case 20:
return "S_CH_03";
break;
case 21:
return "S_CA_01";
break;
case 22:
return "S_T_01";
break;
case 23:
return "S_T_02";
break;
case 24:
return "S_T_03";
break;
case 25:
return "S_T_04";
break;
case 26:
return "S_T_05";
break;
case 27:
return "S_T_06";
break;
case 28:
return "S_G_01";
break;
case 29:
return "S_G_02";
break;
case 30:
return "S_G_03";
break;
case 31:
return "S_G_04";
break;
case 32:
return "S_G_05";
break;
case 33:
return "S_G_06";
break;
case 34:
return "S_G_07";
break;
case 35:
return "S_G_08";
break;
case 36:
return "S_G_09";
break;
case 37:
return "S_G_10";
break;
case 38:
return "S_G_11";
break;
case 39:
return "S_MO_01";
break;
case 40:
return "S_MO_05";
break;
case 41:
return "S_MO_06";
break;
case 42:
return "S_MO_07";
break;
case 43:
return "S_MO_08";
break;
case 44:
return "S_MO_09";
break;
case 45:
switch (iParam1){
case 4:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
}else{
return "S_MO_10";
}
break;
case 5:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
}else{
return "S_MO_10";
}
break;
case 11:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
}else{
return "S_MO_B";
}
break;
case 10:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
}else{
return "S_MO_T";
}
break;
case 12:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
}else{
return "S_MO_HA";
}
break;
case 13:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_AOC";
}else{
return "S_MO_AOC";
}
break;
case 14:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_BASE";
}else{
return "S_MO_AOC";
}
break;
case 15:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
}else{
return "S_MO_AOC";
}
break;
case 16:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
}else{
return "S_MO_AOC";
}
break;
case 17:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
}else{
return "S_MO_AOC";
}
break;
case 18:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
}else{
return "S_MO_AOC";
}
break;
case 19:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
}else{
return "S_MO_AOC";
}
break;
case 20:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
}else{
return "S_MO_AOC";
}
break;
case 21:
if(bParam2){
return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
}else{
return "S_MO_AOC";
}
break;
}
return "S_MO_11";
break;
case 46:
return "S_G_12";
break;
case 47:
return "S_G_13";
break;
case 48:
return "S_G_14";
break;
case 49:
return "S_G_15";
break;
case 52:
return "S_G_16";
break;
case 53:
return "S_G_17";
break;
case 50:
return "S_H_08";
break;
case 51:
return "S_CL_09";
break;
case 54:
return "S_T_07";
break;
case 55:
return "S_CL_10";
break;
case 56:
return "S_G_18";
break;
case 57:
return "S_CL_11";
break;
case 58:
return "S_G_19";
break;
case 59:
return "S_G_20";
break;
}
return "SHOP_NAME_EMPTY";
}

int func_416(var uParam0, int iParam1, int iParam2){
if(*uParam0 !=-1){
if(uParam0->f_4 > iParam2){
return 0;
}}
*uParam0=iParam1;
uParam0->f_4=iParam2;
return 1;
}


void func_417(){
int iVar0;
iVar0=func_418(14);
Global_2645068[iVar0 /*83*/]=14;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_418(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645068[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645068[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}


void func_419(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=Global_2850651[iParam0 /*3*/][func_17(iParam2)];
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}


bool func_420(){
int iVar0;
int iVar1;
bool bVar2;
struct<12> Var3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
struct<7> Var8;
int iVar9;
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, true);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=func_156(PLAYER::PLAYER_PED_ID());
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar7=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
iVar6=0;
while (iVar6 < iVar7){
if((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8) && Var8.f_6 !=2140335355) && Var8.f_6 !=joaat("torsoDecal")){
iVar9=(129 + iVar6);
if(func_55(iVar9, -1)){
MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3));
}}
iVar6++;
}}
iVar1=0;
while (iVar1 < 4){
bVar2=false;
while (bVar2 < 32){
iVar5=func_45(iVar1, bVar2);
if(!func_397(iVar5, iVar4) && !func_396(iVar5, iVar4)){
if((func_36(&Var3, func_45(iVar1, bVar2), iVar4, PLAYER::PLAYER_PED_ID(), -1) && Var3.f_8 !=2140335355) && Var3.f_8 !=joaat("torsoDecal")){
if(Global_78558){
if(func_55(Var3.f_11, -1)){
MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var3.f_4, Var3.f_5));
}
}
elseif(func_253(func_225(), Var3.f_11)){
return 1;
}}}
bVar2++;
}
iVar1++;
}}
return iVar0==0;
}


void func_421(bool bParam0, int iParam1, bool bParam2){
struct<11> Var0;
if(func_46(bParam0)){
if(func_36(&Var0, iParam1, func_44(bParam0), 0, -1)){
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_2365.f_493[bParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_2365.f_493[bParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
}}}}


void func_422(int iParam0, int iParam1, int iParam2){
func_624(func_353(iParam0), iParam1, iParam2);
}


void func_423(int iParam0){
struct<12> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
int iVar7;
int iVar8;
struct<8> Var9;
int iVar10;
int iVar11;
int iVar12;
iVar1=func_156(PLAYER::PLAYER_PED_ID());
iVar2=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
if(func_36(&Var0, iParam0, iVar1, PLAYER::PLAYER_PED_ID(), -1)){
if(Var0.f_8 !=0){
iVar3=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar3=func_54(iVar2, &Var0, Var0.f_8);
}
iVar4=Var0.f_8;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar8=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
iVar7=0;
while (iVar7 < iVar8){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar7, &Var9)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0)){
iVar10=(129 + iVar7);
iVar11=func_54(iVar2, &(Var9.f_7), Var9.f_6);
if(func_255(iVar11, iVar3) && iVar10 !=iParam0){
func_256(iVar10, 0, -1);
}
}}
iVar7++;
}}
iVar5=0;
while (iVar5 < 4){
bVar6=false;
while (bVar6 < 32){
if(!func_396(iParam0, iVar1)){
if(func_36(&Var0, func_45(iVar5, bVar6), iVar1, PLAYER::PLAYER_PED_ID(), -1)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar12=func_54(iVar2, &Var0, Var0.f_8);
if(func_255(iVar12, iVar3) && Var0.f_11 !=iParam0){
if(Global_78558){
func_256(Var0.f_11, 0, -1);
}
else{
func_421(func_225(), Var0.f_11, 0);
}}}elseif(Var0.f_8==iVar4 && Var0.f_11 !=iParam0){
if(Global_78558){
func_256(Var0.f_11, 0, -1);
}else{
func_421(func_225(), Var0.f_11, 0);
}}
}}
bVar6++;
}
iVar5++;
}}}}

int func_424(){
struct<8> Var0;
int iVar1;
bool bVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
var uVar7;
bool bVar8;
struct<16> Var9;
if(func_197(1)){
StringCopy(&Local_182, "", 64);
Local_70.f_119.f_24=0;
iVar1=func_156(PLAYER::PLAYER_PED_ID());
if(func_36(&Var0, Local_70.f_503, iVar1, PLAYER::PLAYER_PED_ID(), -1)){
bVar2=true;
bVar3=false;
iVar4=func_563(Var0.f_7, Var0);
if(iVar4==-1){
MemCopy(&Local_182,{
Var0
}
, 16);
return 0;
}
if(iVar4 !=Var0.f_7){
Var0.f_7=iVar4;
}
func_562(&(Var0.f_7), Var0);
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_352(Local_70.f_503, -1)) && !func_343(Var0)){
Var0.f_7=Global_262145.f_8262;
bVar2=true;
bVar3=true;
}
if(Local_70.f_119.f_25){
if(!func_557(Var0.f_7)){
Local_70.f_119.f_24=1;
return 0;
}elseif(!Local_70.f_119.f_25){
func_624(3, 1, -1);
func_553(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
func_480(Local_70.f_0, 1, 6, 0);
func_478(7);
func_472(func_476());
}
return 1;
}
iVar5=7;
iVar6=-1;
func_271(Local_70.f_119.f_3, &iVar5, &iVar6, 0, 0);
uVar7=func_334(Var0.f_11, &Var0, iVar5, iVar6);
func_471(Var0, Var0.f_7, 0, 1, 0, uVar7);
if(Global_78558){
if(Var0.f_7==0 || MONEY::NETWORK_CAN_SPEND_MONEY(Var0.f_7, 0, 1, 0, -1, 0)){
if(func_470(1) || iLocal_183){
iLocal_183=1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_388()){
bVar8=false;
if(func_343(Var0)){
bVar8=true;
}
func_384(&Var9, Var0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar8);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&Var9)){
Local_182={
Var9 
};
return 0;
}
if(iLocal_183){
Var0.f_7=0;
}
if(func_463(78225582, 1315680121, MISC::GET_HASH_KEY(&Var9), 537254313, 1, Var0.f_7, 1, 4, 0, 3)){
if(bVar3){
if(func_463(78225582, 1315680121, 814101910, 537254313, 1, Var0.f_7, 1, 4, MISC::GET_HASH_KEY(&Var9), 3)){
}else{
func_472(func_476());
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
Local_70.f_119.f_24=1;
return 0;
}}
if(iLocal_183){
if(func_463(78225582, 1315680121, -1914951697, 537254313, 1, 0, 1, 4, MISC::GET_HASH_KEY(&Var9), 3)){
}else{
func_472(func_476());
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
Local_70.f_119.f_24=1;
return 0;
}}
Local_70.f_119.f_24=0;
Local_70.f_119.f_25=1;
Local_70.f_119.f_26=0;
return 1;
}
else{
func_472(func_476());
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
Local_70.f_119.f_24=1;
return 0;
}}
if(Var0.f_7 > 0){
}
if(bVar2){
func_624(3, 1, -1);
func_553(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
func_480(Local_70.f_0, 1, 6, 0);
}
func_478(7);
if(func_343(Var0)){
func_455(func_344(Var0), 1);
}
func_472(func_476());
return 1;
}}elseif(func_454(func_225()) >=Var0.f_7){
if(Var0.f_7 > 0){
func_426(func_225(), func_453(Local_70.f_0), Var0.f_7);
}
func_425();
func_480(Local_70.f_0, 1, 6, 0);
return 1;
}}}
return 0;
}


void func_425(){
bool bVar0;
bVar0=func_47(PLAYER::PLAYER_PED_ID());
if(func_46(bVar0)){
Global_113648.f_2365.f_539.f_2344[bVar0]=MISC::GET_GAME_TIMER();
}}

int func_426(bool bParam0, int iParam1, int iParam2){
if(func_452(bParam0)==3){
return 0;
}
if(func_452(bParam0)==4){
return 0;
}
return func_427(func_452(bParam0), 0, iParam1, iParam2, 0);
}

int func_427(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_451();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_450(99, 1);
func_449(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_434(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_470(5)){
fVar0=0.9f;
bVar1=5;
}
break;
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_470(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
break;
}
break;
case 99:
case 100:
case 101:
case 102:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
case 112:
case 113:
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_470(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_449(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_449(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_449(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_433(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_450(95, iParam3);
break;
case 1:
func_450(97, iParam3);
break;
case 2:
func_450(96, iParam3);
break;
}
func_450(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_430(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_430(bVar1);
}
iVar5=(Global_60536[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60536[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60536[iVar2]=2147483647;
}else{
Global_60536[iVar2]=(Global_60536[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_449(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_449(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_449(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60536[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60536[iVar2];
Global_60536[iVar2]=(Global_60536[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113648.f_20566.f_233[iVar2 /*69*/]++;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
if(Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10){
Global_113648.f_20566.f_233[iVar2 /*69*/].f_1=0;
}}
func_429(iParam0);
if(Global_43257==15){
func_428(0);
}
return 1;
}


void func_428(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60544[iVar0 /*3*/][0]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][0]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][0]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][0]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][0]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][0]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][0]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][0]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][0]=Global_113648.f_20566.f_88[iVar0];
if(!bParam0){
Global_60544[iVar0 /*3*/][1]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][1]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][1]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][1]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][1]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][1]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][1]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][1]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][1]=Global_113648.f_20566.f_88[iVar0];
}
iVar0++;
}}


void func_429(int iParam0){
int iVar0;
iVar0=Global_60536[iParam0];
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
break;
}}


void func_430(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_624(129, 0, -1);
return;
}
if(bParam0==9){
func_624(135, 0, -1);
return;
}
if(bParam0==10){
func_624(136, 0, -1);
return;
}
if(bParam0==11){
func_624(137, 0, -1);
return;
}
if(bParam0==12){
func_216(8272, 0, -1, 1, 0);
return;
}
if(bParam0==13){
func_216(8273, 0, -1, 1, 0);
return;
}
if(bParam0==14){
func_216(8274, 0, -1, 1, 0);
return;
}
if(bParam0==15){
func_216(8275, 0, -1, 1, 0);
return;
}
if(bParam0==16){
func_216(8276, 0, -1, 1, 0);
return;
}
if(bParam0==17){
func_216(8277, 0, -1, 1, 0);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_432() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_432() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_431(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_431(bool bParam0){
switch (bParam0){
case 0:
return "COUP_HAIRC";
case 1:
return "COUP_TATTOO";
case 2:
return "COUP_WARSTOCK";
case 3:
return "COUP_MOSPORT";
case 4:
return "COUP_ELITAS";
case 5:
return "COUP_MEDSPENS";
case 6:
return "COUP_SPRUNK";
case 7:
return "COUP_RESPRAY";
case 8:
return "COUP_XMAS2017";
case 9:
return "COUP_CAR_XMAS2018";
case 10:
return "COUP_HELI_XMAS2018";
case 11:
return "COUP_CAR2_XMAS2018";
case 12:
return "COUP_CAS_ELITAS";
case 13:
return "COUP_CAS_DOCKTEASE";
case 14:
return "COUP_CAS_MOSPORT";
case 15:
return "COUP_CAS_SSASA";
case 16:
return "COUP_CAS_WARSTOCK";
case 17:
return "COUP_CAS_PANDM";
break;
default:
break;
}
return "";
}

int func_432(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_433(int iParam0){
func_450(93, iParam0);
func_450(29, iParam0);
func_450(30, iParam0);
}

int func_434(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27)){
return 0;
}
if(STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(bParam0){}
iVar2=0;
STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
if(iVar1 > 0 && (iVar2 / 2000000) !=(iVar1 / 2000000)){
STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
func_448(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_435(27, 1);
return 1;
}

int func_435(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_436(iParam0, iParam1);
}

int func_436(int iParam0, int iParam1){
if(func_101(14) && !func_447(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32414 !=0 && !Global_78558){
return 0;
}
if(func_446(&Global_4542597)){
if(func_444(&Global_4542597, iParam0)){
return 0;
}
if(func_437(&Global_4542597, iParam0)){
return 1;
}}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)){
return 1;
}
return 0;
}
return 0;
}

int func_437(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_101(14) && !func_447(iParam1)){
return 0;
}
if(func_444(uParam0, iParam1)){
return 0;
}
if(func_443(uParam0) < 0f){
func_442(uParam0, 0);
}
func_440(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_438(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_438(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_101(14) && !func_447(iParam1)){
return 0;
}
if(func_444(uParam0, iParam1)){
return 0;
}
if(func_443(uParam0) < 0f){
func_442(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_439(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_439(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_440(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_441(uParam0, iVar0);
iVar0++;
}
func_442(uParam0, (Global_4542596 - 0.5f));
}


void func_441(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_442(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_443(var uParam0){
return uParam0->f_80;
}


bool func_444(var uParam0, int iParam1){
return func_445(uParam0, iParam1) !=-1;
}

int func_445(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0]==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_446(var uParam0){
return uParam0->f_79==1;
}

int func_447(int iParam0){
switch (iParam0){
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
default:
}
return 0;
}

int func_448(int iParam0, int iParam1){
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


void func_449(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_450(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59104[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59104[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_451(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60536[0]==iVar0){
Global_60536[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60536[1]==iVar0){
Global_60536[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60536[2]==iVar0){
Global_60536[2]=iVar0;
}}}

int func_452(int iParam0){
return Global_2028[iParam0 /*29*/].f_17;
}

int func_453(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 - 0);
iVar1=41;
return (iVar0 + iVar1);
}

int func_454(bool bParam0){
var uVar0;
switch (bParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
return uVar0;
case 1:
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
return uVar0;
case 2:
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
return uVar0;
default:
}
return 0;
}


void func_455(int iParam0, bool bParam1){
bool bVar0;
int iVar1;
bVar0=func_462(iParam0);
if(iParam0==-1){}elseif(iParam0==114){}elseif(func_461(iParam0)){
iVar1=func_16(6422, -1, 0);
if(bParam1){
MISC::SET_BIT(&iVar1, bVar0);
}else{
MISC::CLEAR_BIT(&iVar1, bVar0);
}
func_216(6422, iVar1, -1, 1, 0);
if(func_460(iParam0)){
func_458(19);
}else{
func_458(20);
}}elseif(func_457(iParam0)){
if(func_456(iParam0)){
iVar1=func_16(6423, -1, 0);
if(bParam1){
MISC::SET_BIT(&iVar1, bVar0);
}else{
MISC::CLEAR_BIT(&iVar1, bVar0);
}
func_216(6423, iVar1, -1, 1, 0);
}else{
iVar1=func_16(6424, -1, 0);
if(bParam1){
MISC::SET_BIT(&iVar1, bVar0);
}else{
MISC::CLEAR_BIT(&iVar1, bVar0);
}
func_216(6424, iVar1, -1, 1, 0);
}
func_458(21);
}else{
iVar1=func_16(6157, -1, 0);
if(bParam1){
MISC::SET_BIT(&iVar1, bVar0);
}else{
MISC::CLEAR_BIT(&iVar1, bVar0);
}
func_216(6157, iVar1, -1, 1, 0);
}}

int func_456(int iParam0){
if(iParam0 >=53 && iParam0 <=83){
return 1;
}
return 0;
}

int func_457(int iParam0){
if(iParam0 >=53 && iParam0 <=113){
return 1;
}
return 0;
}


void func_458(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
iVar4=func_16(6157, -1, 0);
bVar5=true;
switch (iParam0){
case 19:
iVar0=22;
iVar1=42;
bVar3=func_462(19);
break;
case 20:
iVar0=43;
iVar1=52;
bVar3=func_462(20);
break;
case 21:
iVar0=53;
iVar1=113;
bVar3=func_462(21);
break;
}
iVar2=iVar0;
while (iVar2 <=iVar1){
iVar6=iVar2;
if(!func_459(iVar6)){
bVar5=false;
}
iVar2++;
}
if(bVar5){
if(!MISC::IS_BIT_SET(iVar4, bVar3)){
MISC::SET_BIT(&iVar4, bVar3);
func_216(6157, iVar4, -1, 1, 0);
}}elseif(MISC::IS_BIT_SET(iVar4, bVar3)){
MISC::CLEAR_BIT(&iVar4, bVar3);
func_216(6157, iVar4, -1, 1, 0);
}}

int func_459(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_462(iParam0);
iVar3=0;
if(iParam0==-1){
iVar3=1;
iVar2=0;
while (iVar2 < 114){
if(!func_459(iVar2)){
iVar3=0;
}
iVar2++;
}}elseif(iParam0==114){}elseif(func_461(iParam0)){
iVar1=func_16(6422, -1, 0);
iVar3=MISC::IS_BIT_SET(iVar1, iVar0);
}elseif(func_457(iParam0)){
if(func_456(iParam0)){
iVar1=func_16(6423, -1, 0);
}else{
iVar1=func_16(6424, -1, 0);
}
iVar3=MISC::IS_BIT_SET(iVar1, iVar0);
}else{
iVar1=func_16(6157, -1, 0);
iVar3=MISC::IS_BIT_SET(iVar1, iVar0);
}
return iVar3;
}

int func_460(int iParam0){
if(iParam0 >=22 && iParam0 <=42){
return 1;
}
return 0;
}

int func_461(int iParam0){
if(iParam0 >=22 && iParam0 <=52){
return 1;
}
return 0;
}

int func_462(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 14;
case 15:
return 15;
case 16:
return 16;
case 17:
return 17;
case 18:
return 18;
case 19:
return 19;
case 20:
return 20;
case 21:
return 21;
default:
}
switch (iParam0){
case 22:
return 0;
case 23:
return 1;
case 24:
return 2;
case 25:
return 3;
case 26:
return 4;
case 27:
return 5;
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
default:
}
switch (iParam0){
case 53:
return 0;
case 54:
return 1;
case 55:
return 2;
case 56:
return 3;
case 57:
return 4;
case 58:
return 5;
case 59:
return 6;
case 60:
return 7;
case 61:
return 8;
case 62:
return 9;
case 63:
return 10;
case 64:
return 11;
case 65:
return 12;
case 66:
return 13;
case 67:
return 14;
case 68:
return 15;
case 69:
return 16;
case 70:
return 17;
case 71:
return 18;
case 72:
return 19;
case 73:
return 20;
case 74:
return 21;
case 75:
return 22;
case 76:
return 23;
case 77:
return 24;
case 78:
return 25;
case 79:
return 26;
case 80:
return 27;
case 81:
return 28;
case 82:
return 29;
case 83:
return 30;
case 84:
return 0;
case 85:
return 1;
case 86:
return 2;
case 87:
return 3;
case 88:
return 4;
case 89:
return 5;
case 90:
return 6;
case 91:
return 7;
case 92:
return 8;
case 93:
return 9;
case 94:
return 10;
case 95:
return 11;
case 96:
return 12;
case 97:
return 13;
case 98:
return 14;
case 99:
return 15;
case 100:
return 16;
case 101:
return 17;
case 102:
return 18;
case 103:
return 19;
case 104:
return 20;
case 105:
return 21;
case 106:
return 22;
case 107:
return 23;
case 108:
return 24;
case 109:
return 25;
case 110:
return 26;
case 111:
return 27;
case 112:
return 28;
case 113:
return 29;
default:
}
return -1;
}

int func_463(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_389()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam1==1067618600 || iParam1==-1303831698){
Global_4536675=1;
return 0;
}}}
if(iParam2==0){
return 0;
}
iVar1=func_476();
if(iVar1==-1){
if(!func_465(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_464(iParam1)){
Var2.f_0=iParam8;
Var2.f_1=iParam2;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}else{
Var2.f_0=iParam2;
Var2.f_1=iParam8;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}
Global_4535172[iVar1 /*85*/].f_66.f_1=Var2.f_2;
Global_4535172[iVar1 /*85*/].f_66.f_15=Var2.f_0;
Global_4535172[iVar1 /*85*/].f_66.f_16=Var2.f_1;
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4)){
return 1;
}}
return 0;
}

int func_464(int iParam0){
switch (iParam0){
case -221807075:
case -1224924353:
case -2121967344:
case 1394405165:
case -2052814106:
case 1701289268:
case -1796535835:
case -1928802392:
case 581564040:
case 23048035:
case 2117376854:
case -1377881127:
case -504675202:
case 1906937290:
case -1616616027:
case -1799524201:
case 269396419:
case 69656641:
case -103880010:
case -1494913648:
return 1;
break;
}
return 0;
}

int func_465(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
int iVar3;
bVar0=false;
if(!func_389()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam2==1067618600 || iParam2==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar2=false;
iVar1=0;
while (iVar1 < 15){
if(Global_4535172[iVar1 /*85*/].f_66.f_2==0){
bVar2=true;
}elseif(Global_4535172[iVar1 /*85*/].f_66.f_5==1){
return 0;
}
iVar1++;
}
if(!bVar2){
return 0;
}
*iParam0=0;
if(!bVar0){
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE()){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, uParam3, uParam4)){
*iParam0=func_466(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_466(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_389()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=iParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=iParam2;
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
if(iParam1==-1135378931 && bParam10){
func_467(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_467(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_469(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_468();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_468(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__469(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_470(int iParam0){
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
if(iParam0==8){
return func_625(129, -1);
}
if(iParam0==9){
return func_625(135, -1);
}
if(iParam0==10){
return func_625(136, -1);
}
if(iParam0==11){
return func_625(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_16(8272, -1, 0);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_16(8273, -1, 0);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_16(8274, -1, 0);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_16(8275, -1, 0);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_16(8276, -1, 0);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_16(8277, -1, 0);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_432() /*5568*/].f_681.f_10, iParam0);
}


void func_471(char[16] cParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5){
Global_100733.f_1398={
cParam0 
};
Global_100733.f_1402=uParam1;
Global_100733.f_1403=iParam2;
Global_100733.f_1404=iParam3;
Global_100733.f_1405=iParam4;
Global_100733.f_1406=uParam5;
}


void func_472(int iParam0){
bool bVar0;
bVar0=false;
if(!func_389()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_475(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_473(&(Global_4535172[iParam0 /*85*/]));
}}


void func_473(var uParam0){
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
func_474(&(uParam0->f_14));
func_474(&(uParam0->f_14.f_13));
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


void func_474(var uParam0){
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

int func_475(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}

int func_476(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_477(iVar0) !=2147483647){
if(func_475(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_477(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_478(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
if(!Global_78558){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45)){
return 0;
}
if(!func_380()){
return 0;
}
iVar2=func_16(757, -1, 0);
MISC::SET_BIT(&iVar2, bParam0);
func_216(757, iVar2, -1, 1, 0);
iVar0=0;
while (iVar0 < 9){
if(func_479(iVar2, iVar0, 1)){
iVar1++;
}
iVar0++;
}
if(iVar1==9){
func_435(45, 1);
}
return 1;
}

int func_479(int iParam0, int iParam1, bool bParam2){
var uVar0;
uVar0=MISC::IS_BIT_SET(iParam0, iParam1);
if(!bParam2){
return uVar0;
}
switch (iParam1){
case 0:
return uVar0;
case 1:
return uVar0;
case 2:
return uVar0;
case 3:
return uVar0;
case 4:
return uVar0;
case 5:
return uVar0;
case 6:
return uVar0;
case 7:
return uVar0;
case 8:
return uVar0;
default:
}
return 0;
}


void func_480(int iParam0, bool bParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
bool bVar2;
if(bParam1){
if(!func_15(iParam0, 3, 0)){
func_215(iParam0, 3, 0);
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (func_330(iParam0)){
case 4:
func_549(305, 0, 0);
break;
case 1:
func_549(304, 0, 0);
break;
case 3:
func_549(308, 0, 0);
break;
case 0:
func_549(306, 0, 0);
break;
case 2:
func_549(307, 0, 0);
break;
}}
if(Global_100733.f_1402 >=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
bVar0=true;
if(iParam2==4){
if(func_470(0)){
func_430(0);
bVar0=false;
}}
if(iParam2==6){
if(func_470(1)){
func_430(1);
bVar0=false;
}}
if(bVar0){
bVar1=MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
bVar2=MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_100733.f_1402;
if((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592==0) || func_545(PLAYER::PLAYER_ID())==11){
if(iParam2==11){
MISC::SET_BIT(&Global_1574991, false);
}}
if(func_389()){
if(func_477(func_476()) > 0){
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_477(func_476()));
}}
if(iParam0==45 && iParam3==18){
func_483(13, -1, -1, MISC::GET_HASH_KEY(&(Global_100733.f_1398)), 1065353216);
func_483(3, -1, -1, MISC::GET_HASH_KEY(&(Global_100733.f_1398)), 1065353216);
}
if(iParam0==55 && func_481(PLAYER::PLAYER_ID())){
func_483(31, -1, -1, MISC::GET_HASH_KEY(&(Global_100733.f_1398)), 1065353216);
}
if(Global_100733.f_1406){
MONEY::NETWORK_SPEND_SET_DISCOUNT(1);
}else{
MONEY::NETWORK_SPEND_SET_DISCOUNT(0);
}
if(iParam2==1 && Global_100733.f_1403==-61829581){
MONEY::NETWORK_BUY_ITEM(Global_100733.f_1402, MISC::GET_HASH_KEY(&(Global_100733.f_1398)), 17, Global_100733.f_1404, bVar1, &(Global_100733.f_1398), MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405, bVar2);
}elseif(((iParam2==0 || iParam2==7) || iParam2==9) || iParam2==11){
MONEY::NETWORK_BUY_ITEM(Global_100733.f_1402, Global_100733.f_1403, iParam2, Global_100733.f_1404, bVar1, &(Global_100733.f_1398), MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405, bVar2);
}elseif((((iParam2==1 || iParam2==2) || iParam2==8) || iParam2==16) || iParam2==15){
if((iParam2==8 && (iParam0==45 && iParam3==21)) && MISC::ARE_STRINGS_EQUAL(&(Global_100733.f_1398), "CMOD_ACD_EQUIP")){
MONEY::_NETWORK_SPEND_UPGRADE_ACID_LAB_EQUIPMENT(Global_100733.f_1402, 0, 1, 1013460729);
}
else{
MONEY::NETWORK_BUY_ITEM(Global_100733.f_1402, Global_100733.f_1403, iParam2, Global_100733.f_1404, bVar1, &(Global_100733.f_1398), MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405, bVar2);
}}else{
MONEY::NETWORK_BUY_ITEM(Global_100733.f_1402, MISC::GET_HASH_KEY(&(Global_100733.f_1398)), iParam2, Global_100733.f_1404, bVar1, &(Global_100733.f_1398), MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405, bVar2);
}}}elseif(HUD::DOES_TEXT_LABEL_EXIST(&(Global_100733.f_1398))){
if(((iParam2==0 || iParam2==7) || iParam2==9) || iParam2==11){
if(Global_100733.f_1402 >=0){
STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405);
}}elseif((((iParam2==1 || iParam2==2) || iParam2==8) || iParam2==16) || iParam2==15){
if(Global_100733.f_1402 >=0){
STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), Global_100733.f_1403, Global_100733.f_1405);
}}elseif(Global_100733.f_1402 >=0){
STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_415(iParam0, iParam3, 1)), 0, Global_100733.f_1405);
}}}}elseif(func_15(iParam0, 3, 0)){
func_217(iParam0, 3, 0);
}}

int func_481(int iParam0){
if(iParam0 !=func_140()){
if(func_5(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_482(Global_2657589[iParam0 /*466*/].f_321.f_7)==23;
}}}
return 0;
}

int func_482(int iParam0){
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


void func_483(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4){
int iVar0;
if(!func_544(iParam0)){
return;
}
iVar0=func_543(iParam0, iParam1, iParam2);
if(iVar0==-1){
return;
}
switch (iParam0){
case 0:
if(!func_625(32249, -1)){
func_624(32249, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 1:
if(!func_625(32250, -1)){
func_624(32250, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 2:
if(!func_625(32251, -1)){
func_624(32251, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 3:
if(!func_625(32252, -1)){
func_624(32252, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 4:
if(!func_625(32253, -1)){
func_624(32253, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 5:
if(!func_625(32254, -1)){
func_624(32254, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 6:
if(!func_625(32255, -1)){
func_624(32255, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 7:
if(!func_625(32256, -1)){
func_624(32256, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 8:
if(!func_625(32257, -1)){
func_624(32257, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 9:
if(!func_625(32258, -1)){
func_624(32258, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 10:
if(func_625(32249, -1)){
if(!func_625(32259, -1)){
func_624(32259, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 11:
if(func_625(32250, -1)){
if(!func_625(32260, -1)){
func_624(32260, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 12:
if(func_625(32251, -1)){
if(!func_625(32261, -1)){
func_624(32261, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 13:
if(func_625(32252, -1)){
if(!func_625(32262, -1)){
func_624(32262, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 14:
if(func_625(32253, -1)){
if(!func_625(32263, -1)){
func_624(32263, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 15:
if(!func_625(32264, -1)){
func_624(32264, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}
break;
case 16:
if(func_625(32254, -1)){
if(!func_625(32265, -1)){
func_624(32265, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 17:
if(func_625(32255, -1)){
if(!func_625(32266, -1)){
func_624(32266, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 18:
if(func_625(32256, -1)){
if(!func_625(32267, -1)){
func_624(32267, 1, -1);
func_484(iVar0, iParam0, iParam3, 1065353216);
}}
break;
case 19:
case 20:
case 21:
case 22:
case 23:
func_484(iVar0, iParam0, iParam3, fParam4);
break;
case 24:
case 25:
case 26:
func_484(iVar0, iParam0, iParam3, 1065353216);
break;
case 27:
case 28:
case 29:
case 30:
case 31:
func_484(iVar0, iParam0, iParam3, 1065353216);
break;
case 32:
case 33:
case 34:
case 35:
func_484(iVar0, iParam0, iParam3, 1065353216);
break;
}}


void func_484(int iParam0, int iParam1, var uParam2, float fParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
if((((iParam0 <=0 || PLAYER::PLAYER_ID()==func_140()) || Global_262145.f_31090) || func_542() >=func_540()) || !func_539(PLAYER::PLAYER_ID())){
return;
}
if(fParam3 !=1f){
iParam0=round((to_float(iParam0) * fParam3));
}
iVar0=func_542();
iVar1=func_536(iVar0);
iVar2=(iVar0 + iParam0);
iVar3=func_540();
if(iVar2 > iVar3){
iVar2=iVar3;
}
bVar4=false;
iVar5=func_536(iVar2);
if(iVar5 > iVar1){
bVar4=true;
}
func_216(9834, iVar2, -1, 1, 0);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496.f_1=iVar2;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496.f_2=iVar5;
func_527(iParam0, iVar5, bVar4, iParam1, uParam2);
func_526(107, iVar5, -1);
if(bVar4){
func_485(iVar1, iVar5);
}}


void func_485(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=iParam0 + 1;
while (iVar0 <=iParam1){
func_525(&iVar1, &iVar2, iVar0);
if(func_521(iVar1)){
func_520(iVar1);
func_502(iVar1, 1);
func_501(iVar1);
}
if(func_521(iVar2)){
func_520(iVar2);
func_502(iVar2, 1);
func_501(iVar2);
}
func_495(iVar0);
func_491("CCR_INC_TCK", iVar0, 1);
iVar0++;
}
func_486();
}


void func_486(){
int iVar0;
iVar0=func_490(30513, -1);
if(!Global_1970516 && iVar0 < 3){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_489(PLAYER::PLAYER_ID())){
MISC::CLEAR_BIT(&(Global_1950108.f_9), true);
func_488(30513, iVar0 + 1, -1);
Global_1970516=1;
func_487("CCR_INC_HT", -1);
}elseif(!MISC::IS_BIT_SET(Global_1950108.f_9, 1)){
MISC::SET_BIT(&(Global_1950108.f_9), true);
}}}


void func_487(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_488(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_18();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_489(int iParam0){
if(iParam0 !=func_140() && func_5(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}


var func__490(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_18();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_491(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_492(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_492(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_492(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_293() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_170(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_493(iParam2);
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

int func_493(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_494(iVar0);
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


void func_494(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


void func_495(int iParam0){
int iVar0;
var uVar1;
iVar0=func_500(iParam0);
if(iVar0 !=-1){
if(func_389()){
func_496(1669058563, iVar0, &uVar1, 0, 0, 0);
}else{
MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(iVar0);
}}}


void func_496(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_389()){
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
func_497(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_497(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_497(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_497(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_497(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_389()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_466(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_499(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_498(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_498(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_472(iParam0);
}}


void func_499(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_500(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==Global_262145.f_31627){
iVar0=Global_262145.f_31622;
}elseif(iParam0 >=Global_262145.f_31625 + 1 && iParam0 <=Global_262145.f_31626){
iVar0=Global_262145.f_31621;
}elseif(iParam0 >=Global_262145.f_31624 + 1 && iParam0 <=Global_262145.f_31625){
iVar0=Global_262145.f_31620;
}elseif(iParam0 >=Global_262145.f_31623 + 1 && iParam0 <=Global_262145.f_31624){
iVar0=Global_262145.f_31619;
}elseif(iParam0 >=2 && iParam0 <=Global_262145.f_31623){
iVar0=Global_262145.f_31618;
}
return iVar0;
}


void func_501(int iParam0){
switch (iParam0){
case 12:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496), true);
break;
case 18:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496), 2);
break;
case 30:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496), 3);
break;
case 36:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_496), 4);
break;
}}


void func_502(int iParam0, bool bParam1){
int iVar0;
bool bVar1;
char* sVar2;
bool bVar3;
int iVar4;
int iVar5;
iVar0=func_519(iParam0);
if(!func_518(iVar0)){
return;
}
bVar1=!func_516();
sVar2="";
switch (iVar0){
case 7:
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
bVar3=14;
if(iVar4==1){
bVar3=15;
}
func_515(bVar3);
if(bParam1){
sVar2=func_512(iParam0, bVar1, iVar4, 0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
func_511("CCR_UNL_VD", sVar2, 0, 0, 0);
}}
break;
case 1:
iVar5=0;
if(func_503(&iVar5)){
if(bParam1){
sVar2=func_512(iParam0, bVar1, -1, iVar5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
func_511("CCR_UNL_TP", sVar2, 0, 0, 0);
}}}
break;
case 3:
if(iParam0==12){
MISC::SET_BIT(&(Global_1950108.f_9), 16);
func_487("CCR_INC_FA", -1);
}
break;
case 2:
if(iParam0==6){
MISC::SET_BIT(&(Global_1950108.f_9), 15);
MISC::SET_BIT(&(Global_1950108.f_9), 18);
}
break;
case 4:
if(iParam0==24){
MISC::SET_BIT(&(Global_1950108.f_9), 17);
MISC::SET_BIT(&(Global_1950108.f_9), 19);
}
break;
}}

int func_503(int iParam0){
int iVar0;
int iVar1;
var uVar2[17];
bool bVar3;
int iVar4;
int iVar5[17];
int iVar6;
int iVar7;
bVar3=true;
iVar0=0;
while (iVar0 < 17){
iVar1=func_510(iVar0);
uVar2[iVar0]=func_508(iVar1);
if(!uVar2[iVar0]){
bVar3=false;
}
iVar0++;
}
if(bVar3){
return 0;
}
iVar0=0;
while (iVar0 < 17){
iVar1=func_510(iVar0);
if(!func_507(iVar1)){
if(!func_506()){
iVar6=0;
}else{
iVar6=1;
}}else{
iVar6=1;
}
if(!uVar2[iVar0] && iVar6){
iVar5[iVar0]=iVar4;
iVar4++;
}else{
iVar5[iVar0]=-1;
}
iVar0++;
}
iVar7=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
iVar0=0;
while (iVar0 < 17){
if(iVar5[iVar0] > -1 && iVar5[iVar0]==iVar7){
iVar1=func_510(iVar0);
func_505(iVar1);
if(func_504(iVar1, -1)){
*iParam0=iVar1;
return 1;
}}
iVar0++;
}
return 0;
}

int func_504(int iParam0, int iParam1){
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


void func_505(int iParam0){
switch (iParam0){
case joaat("zr350"):
func_624(31810, 1, -1);
break;
case joaat("comet6"):
func_624(31811, 1, -1);
break;
case joaat("jester4"):
func_624(31812, 1, -1);
break;
case joaat("vectre"):
func_624(31813, 1, -1);
break;
case joaat("cypher"):
func_624(31814, 1, -1);
break;
case joaat("growler"):
func_624(31815, 1, -1);
break;
case joaat("calico"):
func_624(31816, 1, -1);
break;
case joaat("remus"):
func_624(31817, 1, -1);
break;
case joaat("dominator7"):
func_624(31818, 1, -1);
break;
case joaat("futo2"):
func_624(31819, 1, -1);
break;
case joaat("rt3000"):
func_624(31820, 1, -1);
break;
case joaat("warrener2"):
func_624(31821, 1, -1);
break;
case joaat("sultan3"):
func_624(31822, 1, -1);
break;
case joaat("dominator8"):
func_624(31823, 1, -1);
break;
case joaat("previon"):
func_624(31824, 1, -1);
break;
case joaat("kanjosj"):
func_624(34373, 1, -1);
break;
case joaat("postlude"):
func_624(34374, 1, -1);
break;
default:
break;
}}

int func_506(){
int iVar0;
bool bVar1;
int iVar2;
iVar2=0;
while (iVar2 < 17){
iVar0=func_510(iVar2);
if(func_507(iVar0)){
bVar1=func_508(iVar0);
if(!bVar1){
return 0;
}}
iVar2++;
}
return 1;
}

int func_507(int iParam0){
switch (iParam0){
case joaat("euros"):
case joaat("tailgater2"):
case joaat("rt3000"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("calico"):
case joaat("remus"):
case joaat("jester4"):
case joaat("futo2"):
case joaat("dominator8"):
return 1;
break;
}
return 0;
}

int func_508(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("euros"):
return func_539(PLAYER::PLAYER_ID());
case joaat("tailgater2"):
return func_509(PLAYER::PLAYER_ID());
case joaat("zr350"):
return func_625(31810, -1);
case joaat("comet6"):
return func_625(31811, -1);
case joaat("jester4"):
return func_625(31812, -1);
case joaat("vectre"):
return func_625(31813, -1);
case joaat("cypher"):
return func_625(31814, -1);
case joaat("growler"):
return func_625(31815, -1);
case joaat("calico"):
return func_625(31816, -1);
case joaat("remus"):
return func_625(31817, -1);
case joaat("dominator7"):
return func_625(31818, -1);
case joaat("futo2"):
return func_625(31819, -1);
case joaat("rt3000"):
return func_625(31820, -1);
case joaat("warrener2"):
return func_625(31821, -1);
case joaat("sultan3"):
return func_625(31822, -1);
case joaat("dominator8"):
return func_625(31823, -1);
case joaat("previon"):
return func_625(31824, -1);
case joaat("kanjosj"):
return func_625(34373, -1);
case joaat("postlude"):
return func_625(34374, -1);
default:
}
return 0;
}

int func_509(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_16(9618, -1, 0), 0);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_1, 0);
}
return 0;
}

int func_510(int iParam0){
switch (iParam0){
case 0:
return joaat("sultan3");
case 1:
return joaat("rt3000");
case 2:
return joaat("vectre");
case 3:
return joaat("zr350");
case 4:
return joaat("warrener2");
case 5:
return joaat("calico");
case 6:
return joaat("remus");
case 7:
return joaat("cypher");
case 8:
return joaat("dominator7");
case 9:
return joaat("jester4");
case 10:
return joaat("futo2");
case 11:
return joaat("dominator8");
case 12:
return joaat("previon");
case 13:
return joaat("growler");
case 14:
return joaat("comet6");
case 15:
return joaat("postlude");
case 16:
return joaat("kanjosj");
default:
}
return 0;
}

int func_511(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4){
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
func_160(PLAYER::PLAYER_ID()) 
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
func_492(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


char* func_512(int iParam0, bool bParam1, int iParam2, int iParam3){
switch (iParam0){
case 1:
return func_514(iParam3);
case 2:
return func_513(bParam1, "CLO_TRM_PH_1_9", "CLO_TRF_PH_1_9");
case 3:
return func_513(bParam1, "CLO_TRM_F_1_12", "CLO_TRF_F_1_12");
case 4:
return func_513(bParam1, "CLO_TRM_U_11_6", "CLO_TRF_U_11_6");
case 5:
return func_514(iParam3);
case 6:
return "CCR_UNL_PS";
case 7:
case 8: