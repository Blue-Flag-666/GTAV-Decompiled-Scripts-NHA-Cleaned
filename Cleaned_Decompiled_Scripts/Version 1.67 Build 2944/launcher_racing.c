//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
int iLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
var uLocal_3=0;
var uLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
int iLocal_13=0;
int iLocal_14=0;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
int iLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
char* sLocal_21=NULL;
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
struct<4> Local_38[10];
bool bLocal_39=0;
int iLocal_40=0;
struct<6> Local_41={
10, 0, -1, 1000, -1, 0 
};
struct<3> Local_42={
0, 0, 0 
};
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
bool bLocal_50=0;
bool bLocal_51=0;
int iLocal_52=0;
bool bLocal_53=0;
var uLocal_54[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_55=0;
int iLocal_56=0;
struct<3> Local_57={
0, 0, 0 
};
float fLocal_58=0f;
int iLocal_59=0;
struct<3> Local_60={
0, 0, 0 
};
float fLocal_61=0f;
struct<3> Local_62[3];
float fLocal_63[3]={
0f, 0f, 0f 
};
struct<3> Local_64[7];
float fLocal_65[7]={
0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
int iLocal_66[3]={
0, 0, 0 
};
int iLocal_67[3]={
0, 0, 0 
};
int iLocal_68[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_69=0;
int iLocal_70=0;
char[] cLocal_71[8]=0;
char* sLocal_72[7]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
struct<3> Local_81={
0, 0, 0 
};
struct<3> Local_82={
0, 0, 0 
};
struct<3> Local_83={
0, 0, 0 
};
struct<3> Local_84={
0, 0, 0 
};
float fLocal_85=0f;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=8;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
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
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
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
var uLocal_129=0;
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
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=1;
struct<2> Local_236={
0, 5 
};
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=5;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
#endregion

void __EntryFunction__(){
iLocal_5=1;
iLocal_6=134;
iLocal_7=134;
iLocal_8=1;
iLocal_9=1;
iLocal_10=1;
iLocal_11=134;
iLocal_12=1;
iLocal_13=12;
iLocal_14=12;
fLocal_15=0.001f;
iLocal_18=-1;
sLocal_21="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_36=3;
iLocal_44=1;
bLocal_53=true;
iLocal_70=joaat("feltzer2");
iLocal_73=1;
Local_81={
0f, 0f, 0f 
};
Local_82={
1f, 1f, 1f 
};
Local_83={
0f, 0f, 0f 
};
Local_84={
0f, 0f, 0f 
};
fLocal_85=0f;
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(1);
Local_42={
ScriptParam_236.f_1[0 /*3*/] 
};
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)){
func_219(0);
}
func_216();
switch (Local_41.f_1){
case 1:
case 2:
if(!func_215(0, 8)){
func_219(0);
}
if(!func_214(Local_41.f_0)){
func_219(0);
}
break;
case 3:
if(!func_215(0, 7)){
func_219(0);
}
break;
case 0:
func_219(0);
break;
}
func_208();
if(!func_184()){
func_219(0);
}
func_178();
while (true){
func_175(&uLocal_88);
if(func_184()){
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
switch (iLocal_40){
case 0:
iLocal_40=1;
break;
case 1:
func_166();
func_135();
break;
case 2:
func_67();
break;
case 3:
func_1();
break;
}}else{
func_219(0);
}}else{
func_219(0);
}
wait(0);
}}


void func_1(){
if(!bLocal_51){
func_11();
}else{
func_2();
}}


void func_2(){
func_10(-1);
func_9(0);
func_8(Local_42);
func_7();
Global_1574510=1;
Global_1574510.f_1=Local_41.f_0;
StringCopy(&(Global_1574510.f_2), func_6(), 24);
StringCopy(&(Global_1574510.f_8), func_3(Local_41.f_0), 32);
Global_1574510.f_16={
Local_42 
};
Global_1575066=1;
func_219(1);
}


char* func_3(int iParam0){
char* sVar0;
if(MISC::IS_PS3_VERSION()){
switch (iParam0){
case 8:
sVar0="qLp8OsaeTkCjzhK0SZoRVA";
break;
case 6:
sVar0="JhV_7Ir4ekSQLafj22vFkg";
break;
case 7:
sVar0="Fuc2Yl2sukOrORoMo1YJ1A";
break;
case 5:
sVar0="aNlcpqEkhUytgK-8IMbTYQ";
break;
case 0:
sVar0="9aLp9VEnME25Mp_6XZaw0A";
break;
case 2:
sVar0="lT9gI2mfrkGDhiW1lSlhbw";
break;
case 3:
sVar0="YxiNucGMGEu4lCKqizI2lA";
break;
case 1:
sVar0="szYNFSberECI5goiWsh1bw";
break;
case 4:
sVar0="nZ4p_4_F0EOFyZa2yKEHGA";
break;
}}elseif(MISC::IS_XBOX360_VERSION()){
switch (iParam0){
case 0:
sVar0="dm_test_20";
break;
case 1:
sVar0="dm_test_18";
break;
case 2:
sVar0="dm_test_2";
break;
case 3:
sVar0="dm_test_4";
break;
case 4:
sVar0="dm_test_5";
break;
case 5:
sVar0="dm_test_16";
break;
case 6:
sVar0="dm_test_13";
break;
case 7:
sVar0="dm_test_15";
break;
case 8:
sVar0="dm_test_24";
break;
}}elseif(func_5()){
switch (iParam0){
case 8:
sVar0="qLp8OsaeTkCjzhK0SZoRVA";
break;
case 6:
sVar0="JhV_7Ir4ekSQLafj22vFkg";
break;
case 7:
sVar0="Fuc2Yl2sukOrORoMo1YJ1A";
break;
case 5:
sVar0="aNlcpqEkhUytgK-8IMbTYQ";
break;
case 0:
sVar0="9aLp9VEnME25Mp_6XZaw0A";
break;
case 2:
sVar0="lT9gI2mfrkGDhiW1lSlhbw";
break;
case 3:
sVar0="YxiNucGMGEu4lCKqizI2lA";
break;
case 1:
sVar0="szYNFSberECI5goiWsh1bw";
break;
case 4:
sVar0="nZ4p_4_F0EOFyZa2yKEHGA";
break;
}}elseif(func_4()){
switch (iParam0){
case 0:
sVar0="dm_test_20";
break;
case 1:
sVar0="dm_test_18";
break;
case 2:
sVar0="dm_test_2";
break;
case 3:
sVar0="dm_test_4";
break;
case 4:
sVar0="dm_test_5";
break;
case 5:
sVar0="dm_test_16";
break;
case 6:
sVar0="dm_test_13";
break;
case 7:
sVar0="dm_test_15";
break;
case 8:
sVar0="dm_test_24";
break;
}}elseif(MISC::IS_PC_VERSION()){
switch (iParam0){
case 0:
sVar0="dm_test_20";
break;
case 1:
sVar0="dm_test_18";
break;
case 2:
sVar0="dm_test_2";
break;
case 3:
sVar0="dm_test_4";
break;
case 4:
sVar0="dm_test_5";
break;
case 5:
sVar0="dm_test_16";
break;
case 6:
sVar0="dm_test_13";
break;
case 7:
sVar0="dm_test_15";
break;
case 8:
sVar0="dm_test_24";
break;
}}
return sVar0;
}


bool func_4(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_5(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


char* func_6(){
char* sVar0;
if(MISC::IS_PS3_VERSION()){
sVar0="SPRACE";
}elseif(MISC::IS_XBOX360_VERSION()){
sVar0="2535285330962926";
}elseif(func_5()){
sVar0="SPRACE";
}elseif(func_4()){
sVar0="2535285330962926";
}elseif(MISC::IS_PC_VERSION()){
sVar0="SPRACE";
}else{
sVar0="SPRACE";
}
return sVar0;
}


void func_7(){
MISC::SET_BIT(&Global_1574589, false);
}


void func_8(struct<3> Param0){
Global_1574589.f_6={
Param0 
};
}


void func_9(int iParam0){
Global_1574589.f_2=iParam0;
}


void func_10(int iParam0){
Global_1574589.f_1=iParam0;
}


void func_11(){
int iVar0;
int iVar1;
var uVar2;
Local_41.f_2=-1;
if(func_66(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
}}
while (!func_60()){
wait(0);
}
if(Local_41.f_1 !=3){
func_18(func_54(), 1, Local_41.f_3);
iVar0=MISC::GET_GAME_TIMER() + 1500;
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_16(iVar1)){
while (!func_14(iVar1, 3f, 2, 1056964608, 0, 1, 0) || MISC::GET_GAME_TIMER() < iVar0){
wait(0);
}}
uVar2=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(uVar2)){
PLAYER::SET_PLAYER_CONTROL(uVar2, 0, 0);
}}
func_12();
}


void func_12(){
if(!func_13(0)){
SCRIPT::REQUEST_SCRIPT("mission_Race");
while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race")){
SCRIPT::REQUEST_SCRIPT("mission_Race");
wait(0);
}
start_new_script_with_args("mission_Race", &Local_41, 6, 57500);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
func_219(1);
}

int func_13(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_14(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
if(bParam5){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_15(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_15(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}

int func_16(int iParam0){
if(func_17(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_17(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_18(int iParam0, int iParam1, int iParam2){
if(func_53(iParam0)==3){
return 0;
}
if(func_53(iParam0)==4){
return 0;
}
return func_19(func_53(iParam0), 0, iParam1, iParam2, 0);
}

int func_19(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_52();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_51(99, 1);
func_50(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_34(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_31(5)){
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
func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_31(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
func_50(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_31(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_50(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_50(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_50(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_30(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_51(95, iParam3);
break;
case 1:
func_51(97, iParam3);
break;
case 2:
func_51(96, iParam3);
break;
}
func_51(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_22(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_22(bVar1);
}
iVar5=(Global_60659[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60659[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60659[iVar2]=2147483647;
}else{
Global_60659[iVar2]=(Global_60659[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_50(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_50(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_50(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60659[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60659[iVar2];
Global_60659[iVar2]=(Global_60659[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113810.f_20567.f_233[iVar2 /*69*/]++;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
if(Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10){
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1=0;
}}
func_21(iParam0);
if(Global_43377==15){
func_20(0);
}
return 1;
}


void func_20(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60667[iVar0 /*3*/][0]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][0]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][0]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][0]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][0]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][0]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][0]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][0]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][0]=Global_113810.f_20567.f_88[iVar0];
if(!bParam0){
Global_60667[iVar0 /*3*/][1]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][1]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][1]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][1]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][1]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][1]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][1]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][1]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][1]=Global_113810.f_20567.f_88[iVar0];
}
iVar0++;
}}


void func_21(int iParam0){
int iVar0;
iVar0=Global_60659[iParam0];
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


void func_22(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_29(129, 0, -1);
return;
}
if(bParam0==9){
func_29(135, 0, -1);
return;
}
if(bParam0==10){
func_29(136, 0, -1);
return;
}
if(bParam0==11){
func_29(137, 0, -1);
return;
}
if(bParam0==12){
func_25(8272, 0, -1, 1);
return;
}
if(bParam0==13){
func_25(8273, 0, -1, 1);
return;
}
if(bParam0==14){
func_25(8274, 0, -1, 1);
return;
}
if(bParam0==15){
func_25(8275, 0, -1, 1);
return;
}
if(bParam0==16){
func_25(8276, 0, -1, 1);
return;
}
if(bParam0==17){
func_25(8277, 0, -1, 1);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_24() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_24() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_23(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_23(bool bParam0){
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

int func_24(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_25(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_26(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__26(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_27(uParam1));
}

int func_27(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_28();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_28(){
return Global_1574918;
}


void func_29(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_28();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_30(int iParam0){
func_51(93, iParam0);
func_51(29, iParam0);
func_51(30, iParam0);
}

int func_31(int iParam0){
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
return func_33(129, -1);
}
if(iParam0==9){
return func_33(135, -1);
}
if(iParam0==10){
return func_33(136, -1);
}
if(iParam0==11){
return func_33(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_32(8272, -1);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_32(8273, -1);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_32(8274, -1);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_32(8275, -1);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_32(8276, -1);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_32(8277, -1);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_24() /*5568*/].f_681.f_10, iParam0);
}

int func_32(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_26(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__33(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_28();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_34(bool bParam0){
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
func_49(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_35(27, 1);
return 1;
}

int func_35(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_36(iParam0, iParam1);
}

int func_36(int iParam0, int iParam1){
if(func_48(14) && !func_47(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32534 !=0 && !Global_78689){
return 0;
}
if(func_46(&Global_4542602)){
if(func_44(&Global_4542602, iParam0)){
return 0;
}
if(func_37(&Global_4542602, iParam0)){
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

int func_37(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_48(14) && !func_47(iParam1)){
return 0;
}
if(func_44(uParam0, iParam1)){
return 0;
}
if(func_43(uParam0) < 0f){
func_42(uParam0, 0);
}
func_40(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_38(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_38(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_48(14) && !func_47(iParam1)){
return 0;
}
if(func_44(uParam0, iParam1)){
return 0;
}
if(func_43(uParam0) < 0f){
func_42(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_39(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_39(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_40(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_41(uParam0, iVar0);
iVar0++;
}
func_42(uParam0, (Global_4542601 - 0.5f));
}


void func_41(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_42(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_43(var uParam0){
return uParam0->f_80;
}


bool func_44(var uParam0, int iParam1){
return func_45(uParam0, iParam1) !=-1;
}

int func_45(var uParam0, int iParam1){
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


bool func_46(var uParam0){
return uParam0->f_79==1;
}

int func_47(int iParam0){
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


bool func_48(int iParam0){
return Global_43377==iParam0;
}

int func_49(int iParam0, int iParam1){
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


void func_50(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_51(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59227[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59227[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_52(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60659[0]==iVar0){
Global_60659[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60659[1]==iVar0){
Global_60659[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60659[2]==iVar0){
Global_60659[2]=iVar0;
}}}

int func_53(int iParam0){
return Global_2058[iParam0 /*29*/].f_17;
}

int func_54(){
func_55();
return Global_113810.f_2366.f_539.f_4321;
}


void func_55(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_58(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_57(PLAYER::PLAYER_PED_ID());
if(func_56(iVar0) && (!func_48(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_56(Global_113810.f_2366.f_539.f_4321)){
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


bool func_56(int iParam0){
return iParam0 < 3;
}

int func_57(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_58(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_58(int iParam0){
if(func_56(iParam0)){
return func_59(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__59(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_60(){
int iVar0;
iVar0=func_61(&(Local_41.f_2), 0, 9, 0, 0);
if(!iVar0==1){
return 0;
}
return 1;
}

int func_61(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_65(0)){
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
if(!func_63(iParam2)){
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
func_62(uParam0, iParam4);
}}
return 2;
}


void func_62(var uParam0, int iParam1){
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


bool func_63(int iParam0){
return func_64(iParam0, Global_43377);
}

int func_64(int iParam0, int iParam1){
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

int func_65(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_63(iParam0)){
return 0;
}
return 1;
}

int func_66(int iParam0){
if(func_17(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}


void func_67(){
var uVar0;
switch (iLocal_47){
case 0:
if(func_133(0, -1, 0)){
HUD::CLEAR_HELP(1);
func_125();
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
iLocal_52=1;
bLocal_50=false;
bLocal_51=false;
iLocal_47=1;
}
break;
case 1:
if(func_81()){
iLocal_47=2;
}
break;
case 2:
uVar0=PLAYER::GET_PLAYER_INDEX();
PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
PLAYER::SET_PLAYER_CONTROL(uVar0, 1, 0);
func_71(0, 1, 1, 0, 0, 0, 0);
func_68(1, -1);
iLocal_47=0;
if(bLocal_50){
iLocal_40=3;
}else{
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
iLocal_40=1;
}
break;
}}


void func_68(bool bParam0, int iParam1){
int iVar0;
if(!func_70(&iVar0, 0, iParam1)){
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
func_69(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_69(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_70(var uParam0, bool bParam1, int iParam2){
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


void func_71(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_80(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_79()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_78(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_80(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_78(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_76(PLAYER::PLAYER_ID())) && !func_73(PLAYER::PLAYER_ID(), 0)) && !func_72()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_76(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_72(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_73(int iParam0, int iParam1){
bool bVar0;
if(!func_75(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_74(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_74(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_28();
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

int func_75(var uParam0){
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

int func_76(int iParam0){
if(func_73(iParam0, 0)){
return 1;
}
if(func_77()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_77(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_78(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_79(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_80(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}

int func_81(){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
func_124(&iVar0, &iVar1, &uVar2, &uVar3, 0);
PAD::SET_INPUT_EXCLUSIVE(2, 201);
PAD::SET_INPUT_EXCLUSIVE(2, 202);
PAD::SET_INPUT_EXCLUSIVE(2, 188);
PAD::SET_INPUT_EXCLUSIVE(2, 187);
if(iLocal_49 !=0){
if(timera() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64)){
iLocal_49=0;
}else{
iVar0=0;
iVar1=0;
}}
bVar4=(iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
bVar5=(iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
bVar6=PAD::IS_CONTROL_JUST_PRESSED(2, 201);
bVar7=PAD::IS_CONTROL_JUST_PRESSED(2, 202);
bVar8=(iVar1 < -64 || iVar1 > 64);
if(bVar6){
if(iLocal_48==1){
bLocal_51=true;
}else{
bLocal_51=false;
}
bLocal_50=true;
return 1;
}elseif(bVar7){
iLocal_74=0;
bLocal_50=false;
return 1;
}else{
if(bVar5){
if(iLocal_48==0){
iLocal_48=1;
}elseif(iLocal_48==0){
}}elseif(bVar4){
if(iLocal_48==1){
iLocal_48=0;
}elseif(iLocal_48==1){
}}
if(bVar5 || bVar4){
if(bVar8){
settimera(0);
iLocal_49=1;
}
func_123(iLocal_48, 1, 1);
}}
func_82(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
return 0;
}


void func_82(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_70(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_120(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23390){
if(func_118(29, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_116(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23390.f_5661 <=1){
func_112(Global_23390.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23390.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23390.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23388;
}else{
if(Global_23390){
StringCopy(&cVar61, func_111(29), 64);
StringCopy(&cVar62, func_108(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_107(Global_23387, Global_23388, fParam5, fVar55, 0, 0, 0, 255);
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
func_107(Global_23387, (Global_23388 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23388 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1)) !=0){
func_106();
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
func_106();
func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180);
}elseif(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_6177 !=0){
func_106();
func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176);
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
func_107(Global_23387, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
func_118(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_118(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_102(Global_23390.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_5165), func_108(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_103(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_21)) !=0 && Global_4540958.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_4540958.f_67 !=0){
func_118(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_118(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_102(Global_4540958.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_4540958.f_67), func_108(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540958.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65){
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_65=-1;
}}}
func_97(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
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
if(func_118(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_118(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_118(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_118(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_118(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_94(bVar32);
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
if(func_118(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_118(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_93() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_95(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
if(func_118(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_118(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23390.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_94(bVar32);
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
if(func_118(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_118(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_118(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_118(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_92((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23390.f_6172){
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_94(bVar32);
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
if(func_118(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_118(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_118(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_118(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_95(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_91((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_118(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_118(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_118(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_118(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_118(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_118(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[iVar22]), func_108(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_90(Global_23390.f_4824[iVar22])), (fVar37 * func_90(Global_23390.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_118(26, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_84(0);
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
func_83(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_83(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_84(int iParam0){
if(func_89()){
return;
}
if(!Global_20500.f_1==1){
if(func_88(0)){
func_85(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_85(int iParam0){
if(func_89()){
return;
}
if(Global_20704){
if(func_87()){
func_86(1, 1);
}else{
func_86(0, 0);
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
if(!func_79()){
Global_20500.f_1=3;
}}


void func_86(bool bParam0, bool bParam1){
if(bParam0){
if(func_88(0)){
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


bool func_87(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_88(int iParam0){
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


bool func_89(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


float func_90(int iParam0){
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


void func_91(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_92(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


var func__93(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_94(bool bParam0){
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


void func_95(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_96(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_96(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_97(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_70(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_120(bParam4, bParam8)){
return;
}
if(func_100()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_73(PLAYER::PLAYER_ID(), 0)){
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
func_99(&(Global_23390.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_99(&(Global_23390.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23390.f_5450[iVar1]==-1){
func_98(&(Global_23390.f_5393[iVar1 /*4*/]));
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
func_99(&Global_4540958);
if(Global_4540958.f_20==-1){
func_98(&(Global_4540958.f_16));
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


void func_98(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_99(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_100(){
struct<3> Var0;
if(Global_20500.f_1 > 3){
return 1;
}
if(func_101()){
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

int func_101(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_102(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_103(float fParam0){
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


void func_104(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_105(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_106();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_106(){
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


void func_107(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__108(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_110(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_109(&uVar1);
}}else{
return func_109(&(Global_23390.f_7488[iParam0 /*16*/]));
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


var func__109(var uParam0){
return uParam0;
}
struct<13> func_110(var uParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}


char* func_111(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_110(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_109(&uVar0);
}else{
return func_109(&(Global_23390.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_112(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
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
func_115(Global_23390.f_5661, 1);
}else{
func_115(Global_23390.f_5661, 0);
}
if(iParam2==0){
fVar1=func_114(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(Global_23390.f_5518[Global_23390.f_5662]){
func_118(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23390.f_5511[Global_23390.f_5662]){
Global_23390.f_5511[Global_23390.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_113(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
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


float func_113(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_114(char* sParam0){
if(!MISC::IS_STRING_NULL(uParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_95(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_115(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_116(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_117(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_117(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

int func_118(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_111(iParam0), 64);
StringCopy(&cVar1, func_108(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_116(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_119(iParam0) / fVar4);
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


float func_119(int iParam0){
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

int func_120(bool bParam0, bool bParam1){
if(Global_2672524.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_122(8, -1) && func_121() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482){
return 0;
}
return 1;
}

int func_121(){
return Global_1574996;
}


var func__122(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_123(int iParam0, bool bParam1, int iParam2){
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


void func_124(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
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


void func_125(){
func_132(0, 0);
func_131(1, 0, 0, 0, 0);
func_130(1, 1, 1, 1, 1);
if(Local_41.f_1==3){
func_129("SEA_MENU");
}else{
func_129("STREET_MENU");
}
func_112(0, "RACES_OPT_SP", 0, 1, 0, 0, 0);
func_112(1, "RACES_OPT_MP", 0, 1, 0, 0, 0);
func_128(201, "ITEM_SELECT", -1);
func_128(202, "ITEM_EXIT", -1);
func_127(11, "ITEM_SCROLL", -1);
func_126(0);
func_123(0, 1, 1);
iLocal_48=0;
}


void func_126(int iParam0){
Global_23390.f_6181=iParam0;
}


void func_127(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
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
Global_23390.f_5465[Global_23390.f_5166]=363;
Global_23390.f_5480[Global_23390.f_5166]=iParam0;
Global_23390.f_5166++;
}


void func_128(int iParam0, char* sParam1, int iParam2){
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


void func_129(char* sParam0){
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


void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5526[0]=iParam0;
Global_23390.f_5526[1]=iParam1;
Global_23390.f_5526[2]=iParam2;
Global_23390.f_5526[3]=iParam3;
Global_23390.f_5526[4]=iParam4;
}


void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
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


void func_132(bool bParam0, bool bParam1){
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


bool func_133(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_70(&iVar0, 1, iParam1)){
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
bVar2=func_134(&(Global_23390.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_134(var uParam0){
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


void func_135(){
int iVar0;
if(func_165()){
if(func_148()){
iVar0=6;
if(Local_41.f_1==1){
iVar0=4;
}
func_146(iVar0);
if(func_66(uLocal_54[iVar0])){
if(bLocal_53){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_54[iVar0], cLocal_71, sLocal_72[iVar0], 3)){
TASK::STOP_ANIM_TASK(uLocal_54[iVar0], cLocal_71, sLocal_72[iVar0], -1056964608);
}
func_137(iVar0);
}}
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(PAD::IS_CONTROL_JUST_RELEASED(0, 51)){
iLocal_74=1;
HUD::CLEAR_HELP(1);
iLocal_40=3;
}}elseif(!iLocal_44){
CAM::STOP_GAMEPLAY_HINT(0);
iLocal_44=1;
}}else{
func_136();
if(!iLocal_44){
CAM::STOP_GAMEPLAY_HINT(0);
iLocal_44=1;
}}}


void func_136(){
if(iLocal_43 && MISC::GET_GAME_TIMER() > iLocal_46){
HUD::CLEAR_HELP(1);
iLocal_43=0;
}}


void func_137(int iParam0){
var uVar0;
if(!ENTITY::IS_ENTITY_DEAD(uLocal_54[iParam0], 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
switch (iLocal_75){
case 0:
if(vdist2(ENTITY::GET_ENTITY_COORDS(uLocal_54[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f){
iLocal_76=0;
iLocal_77=0;
iLocal_75=1;
}
break;
case 1:
TASK::OPEN_SEQUENCE_TASK(&uVar0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(uLocal_54[iParam0], uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
iLocal_75=2;
break;
case 2:
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_54[iParam0], joaat("script_task_perform_sequence")) !=1 || PED::IS_PED_FACING_PED(uLocal_54[iParam0], PLAYER::PLAYER_PED_ID(), 20f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_54[iParam0], PLAYER::PLAYER_PED_ID(), -1);
if(!iLocal_77){
func_144(uLocal_54[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
}else{
func_144(uLocal_54[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
}
iLocal_75=3;
}
break;
case 3:
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_54[iParam0])){
func_142(&uLocal_78);
TASK::TASK_PLAY_ANIM(uLocal_54[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
iLocal_75=4;
}
break;
case 4:
if(vdist2(ENTITY::GET_ENTITY_COORDS(uLocal_54[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f){
iLocal_75=0;
}
if(func_138(&uLocal_78) >=5f && !iLocal_76){
iLocal_76=1;
iLocal_75=1;
}elseif(func_138(&uLocal_78) >=10f && !iLocal_77){
iLocal_77=1;
iLocal_75=1;
}
break;
case 5:
break;
}}}


float func_138(var uParam0){
if(func_141(uParam0)){
if(func_140(uParam0)){
return uParam0->f_2;
}else{
return (func_139(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_139(bool bParam0){
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


bool func_140(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


bool func_141(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_142(var uParam0){
func_143(uParam0, 0f);
}


void func_143(var uParam0, float fParam1){
uParam0->f_1=(func_139(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, true);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


void func_144(var uParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_145(iParam3), 0);
}

int func_145(int iParam0){
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


void func_146(int iParam0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !func_147()){
if(func_66(uLocal_54[iParam0])){
if(iLocal_44 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f){
CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_54[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
iLocal_44=0;
}}}}

int func_147(){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
return 1;
}
return 0;
}

int func_148(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_164()){
return 0;
}
if(func_163(func_54()) < Local_41.f_3){
if(Local_41.f_1==3){
func_160("SEA_NA_CASH", Local_41.f_3);
}else{
func_160("STREET_NA_CASH", Local_41.f_3);
}
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_159(&iLocal_0);
iLocal_0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(!func_154()){
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
return 0;
}elseif((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <=200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_153()){
func_152("RACE_VehDmg");
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
return 0;
}elseif(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, -1, 0) !=PLAYER::PLAYER_PED_ID()){
func_149();
return 0;
}else{
if(func_88(0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
func_136();
return 0;
}
switch (Local_41.f_1){
case 1:
func_160("STREET_PLAY_B", Local_41.f_3);
break;
case 2:
func_160("STREET_PLAY_C", Local_41.f_3);
break;
case 3:
func_152("SEA_PLAY");
break;
}
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER();
return 1;
}}else{
func_159(&iLocal_0);
func_149();
return 0;
}}
return 0;
}


void func_149(){
char* sVar0;
if(Local_41.f_1==3){
if(func_16(iLocal_55)){
sVar0="SEA_NA_VEH";
}else{
sVar0="SEA_NA_VEH2";
}
if(!func_151(sVar0)){
func_150(sVar0);
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
}}elseif(Local_41.f_1==1){
if(!func_151("STREET_NA_BIKE")){
func_150("STREET_NA_BIKE");
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
}}elseif(!func_151("STREET_NA_CAR")){
func_150("STREET_NA_CAR");
iLocal_43=1;
iLocal_46=MISC::GET_GAME_TIMER() + 1000;
}}


void func_150(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


bool func_151(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_152(char* sParam0){
if(!func_151(sParam0)){
func_150(sParam0);
}}

int func_153(){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_0);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, 0)){
return 1;
}}elseif(VEHICLE::IS_THIS_MODEL_A_CAR(iVar0)){
if(((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, 0)){
return 1;
}}
return 0;
}

int func_154(){
int iVar0;
char* sVar1;
switch (Local_41.f_1){
case 1:
iVar0=func_158();
if(iVar0==1){
func_152("STREET_NA_COP");
return 0;
}elseif(iVar0==2){
func_152("STREET_NA_BIKE");
return 0;
}
break;
case 2:
iVar0=func_156();
if(iVar0==1){
func_152("STREET_NA_COP");
return 0;
}elseif(iVar0==2){
func_152("STREET_NA_CAR");
return 0;
}
break;
case 3:
if(!func_155()){
if(func_16(iLocal_55)){
sVar1="SEA_NA_VEH";
}else{
sVar1="SEA_NA_VEH2";
}
func_152(sVar1);
return 0;
}
break;
}
return 1;
}

int func_155(){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_0);
if(iVar0==joaat("seashark") || iVar0==joaat("seashark2")){
return 1;
}}}
return 0;
}

int func_156(){
int iVar0;
int iVar1;
int iVar2[83];
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_0);
if(func_157(iVar0)){
return 1;
}
if((((((((((iVar0==joaat("police4") || iVar0==joaat("policeold1")) || iVar0==joaat("policeold2")) || iVar0==joaat("fbi")) || iVar0==joaat("fbi2")) || iVar0==joaat("lguard")) || iVar0==joaat("sheriff")) || iVar0==joaat("sheriff2")) || iVar0==joaat("pranger")) || iVar0==joaat("ambulance")) || iVar0==joaat("firetruk")){
return 1;
}
if(((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
return 2;
}
iVar2[0]=joaat("ambulance");
iVar2[1]=joaat("benson");
iVar2[2]=joaat("biff");
iVar2[3]=joaat("bus");
iVar2[4]=joaat("firetruk");
iVar2[5]=joaat("forklift");
iVar2[6]=joaat("mule");
iVar2[7]=joaat("mule2");
iVar2[8]=joaat("packer");
iVar2[9]=joaat("phantom");
iVar2[10]=joaat("mower");
iVar2[11]=joaat("stockade");
iVar2[12]=joaat("squalo");
iVar2[13]=joaat("maverick");
iVar2[14]=joaat("polmav");
iVar2[15]=joaat("airtug");
iVar2[16]=joaat("boxville3");
iVar2[17]=joaat("annihilator");
iVar2[18]=joaat("dinghy");
iVar2[19]=0;
iVar2[20]=joaat("ripley");
iVar2[21]=joaat("trash");
iVar2[22]=joaat("burrito");
iVar2[23]=joaat("pony");
iVar2[24]=joaat("speedo");
iVar2[25]=joaat("marquis");
iVar2[26]=joaat("sanchez");
iVar2[27]=joaat("airtug");
iVar2[28]=joaat("taco");
iVar2[29]=joaat("barracks");
iVar2[30]=joaat("romero");
iVar2[31]=joaat("blazer");
iVar2[32]=joaat("blazer2");
iVar2[33]=joaat("bodhi2");
iVar2[34]=joaat("boxville2");
iVar2[35]=joaat("bulldozer");
iVar2[36]=joaat("caddy");
iVar2[37]=joaat("caddy2");
iVar2[38]=joaat("camper");
iVar2[39]=joaat("tiptruck");
iVar2[40]=joaat("tourbus");
iVar2[41]=joaat("towtruck");
iVar2[42]=joaat("towtruck2");
iVar2[43]=joaat("tractor");
iVar2[44]=joaat("tractor2");
iVar2[45]=joaat("utillitruck");
iVar2[46]=joaat("utillitruck2");
iVar2[47]=joaat("utillitruck3");
iVar2[48]=joaat("ratloader");
iVar2[49]=joaat("dloader");
iVar2[50]=joaat("docktug");
iVar2[51]=joaat("dump");
iVar2[52]=joaat("gburrito");
iVar2[53]=joaat("handler");
iVar2[54]=joaat("hauler");
iVar2[55]=joaat("journey");
iVar2[56]=joaat("rentalbus");
iVar2[57]=joaat("mixer");
iVar2[58]=joaat("rhino");
iVar2[59]=joaat("cutter");
iVar2[60]=joaat("pounder");
iVar2[61]=joaat("tiptruck2");
iVar2[62]=joaat("mixer2");
iVar2[63]=joaat("rubble");
iVar2[64]=joaat("scrap");
iVar2[65]=joaat("armytanker");
iVar2[66]=joaat("barracks2");
iVar2[67]=joaat("airbus");
iVar2[68]=joaat("coach");
iVar2[69]=joaat("pbus");
iVar2[70]=joaat("riot");
iVar2[71]=0;
iVar2[72]=joaat("stockade3");
iVar2[73]=joaat("flatbed");
iVar2[74]=joaat("boxville");
iVar2[75]=joaat("burrito2");
iVar2[76]=joaat("burrito3");
iVar2[77]=joaat("burrito4");
iVar2[78]=joaat("rumpo");
iVar2[79]=joaat("speedo2");
iVar2[80]=0;
iVar2[81]=joaat("blimp");
iVar2[82]=joaat("blimp2");
iVar1=0;
while (iVar1 < iVar2){
if(iVar0==iVar2[iVar1]){
return 2;
}
iVar1++;
}}}
return 0;
}

int func_157(int iParam0){
switch (iParam0){
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("polmav"):
case joaat("policeb"):
case joaat("policet"):
case joaat("policeold2"):
case joaat("policeold1"):
case joaat("sheriff"):
case joaat("sheriff2"):
return 1;
break;
}
return 0;
}

int func_158(){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_0);
if(iVar0==joaat("policeb")){
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0)){
return 0;
}}}
return 2;
}


void func_159(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}}}


void func_160(char* sParam0, var uParam1){
if(!func_162(sParam0, uParam1)){
func_161(sParam0, uParam1);
}}


void func_161(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


bool func_162(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_163(int iParam0){
var uVar0;
switch (iParam0){
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

int func_164(){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(func_17(iVar0)){
if(ENTITY::IS_ENTITY_IN_AIR(iVar0)){
if(Local_41.f_1==3 && ENTITY::IS_ENTITY_IN_WATER(iVar0)){
return 0;
}
return 1;
}else{
return 0;
}}}}
return 0;
}

int func_165(){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar0=20;
if(Local_41.f_1==3){
iVar0=40;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42, 1) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==0){
return 1;
}}
return 0;
}


void func_166(){
int iVar0;
int iVar1;
int iVar2;
if(func_171(&uLocal_88)){
if(Local_41.f_1==2){
if(func_168()){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
if(STREAMING::HAS_MODEL_LOADED(iLocal_69) && STREAMING::HAS_MODEL_LOADED(iLocal_69)){
iLocal_55=VEHICLE::CREATE_VEHICLE(iLocal_69, Local_57, fLocal_58, 1, 1, 0);
if(PED::CAN_CREATE_RANDOM_PED(1) && PED::CAN_CREATE_RANDOM_DRIVER()){
iLocal_56=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_55, 1);
TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_56, iLocal_55, 1, 99999999);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
PED::SET_PED_KEEP_TASK(iLocal_56, 1);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 1084227584);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_55, 1, 1, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_55, 1);
AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_55, 1);
AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
AUDIO::SET_VEH_RADIO_STATION(iLocal_55, AUDIO::GET_RADIO_STATION_NAME(10));
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_55, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
wait(0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_59)){
if(STREAMING::HAS_MODEL_LOADED(iLocal_70)){
iLocal_59=VEHICLE::CREATE_VEHICLE(iLocal_70, Local_60, fLocal_61, 1, 1, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_59, 0, 1, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_59, 1);
AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_59, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_59, 1084227584);
AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
AUDIO::SET_VEH_RADIO_STATION(iLocal_59, AUDIO::GET_RADIO_STATION_NAME(10));
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_59, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
wait(0);
}}
if(STREAMING::HAS_ANIM_DICT_LOADED(cLocal_71)){
if(iLocal_73){
iVar0=0;
while (iVar0 <=(iLocal_68 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_54[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_54[iVar0], 0) && !func_167(uLocal_54[iVar0], joaat("script_task_play_anim"))){
TASK::TASK_PLAY_ANIM(uLocal_54[iVar0], cLocal_71, sLocal_72[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_54[iVar0], 1);
}}elseif(STREAMING::HAS_MODEL_LOADED(iLocal_68[iVar0])){
uLocal_54[iVar0]=PED::CREATE_PED(25, iLocal_68[iVar0], Local_64[iVar0 /*3*/], fLocal_65[iVar0], 1, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_54[iVar0], Local_64[iVar0 /*3*/], 0, 0, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_54[iVar0], 1);
TASK::TASK_PLAY_ANIM(uLocal_54[iVar0], cLocal_71, sLocal_72[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_54[iVar0], 1);
}
iVar0++;
}
if((((((((func_66(uLocal_54[0]) && func_66(uLocal_54[1])) && func_66(uLocal_54[2])) && func_66(uLocal_54[3])) && func_66(uLocal_54[4])) && func_66(uLocal_54[5])) && func_66(uLocal_54[6])) && func_16(iLocal_55)) && func_16(iLocal_59)){
bLocal_53=true;
iVar0=0;
while (iVar0 <=(iLocal_68 - 1)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_68[iVar0]);
iVar0++;
}
iLocal_73=0;
}}}}}elseif(Local_41.f_1==1){
if(func_168()){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
if(STREAMING::HAS_MODEL_LOADED(iLocal_69)){
iLocal_55=VEHICLE::CREATE_VEHICLE(iLocal_69, Local_57, fLocal_58, 1, 1, 0);
if(PED::CAN_CREATE_RANDOM_PED(0) && PED::CAN_CREATE_RANDOM_BIKE_RIDER()){
iLocal_56=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_55, 1);
TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_56, iLocal_55, 1, 99999999);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
PED::SET_PED_KEEP_TASK(iLocal_56, 1);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_55, 1, 1, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_55, 1);
AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_55, 1);
AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
AUDIO::SET_VEH_RADIO_STATION(iLocal_55, AUDIO::GET_RADIO_STATION_NAME(10));
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_55, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
}}
if(STREAMING::HAS_ANIM_DICT_LOADED(cLocal_71)){
if(iLocal_73){
iVar1=0;
while (iVar1 <=(iLocal_68 - 3)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_54[iVar1])){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_54[iVar1], 0) && !func_167(uLocal_54[iVar1], joaat("script_task_play_anim"))){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_54[iVar1], Local_64[iVar1 /*3*/], 0, 0, 1);
if(iVar1 !=2 && iVar1 !=3){
TASK::TASK_PLAY_ANIM(uLocal_54[iVar1], cLocal_71, sLocal_72[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
}
else{
TASK::TASK_PLAY_ANIM(uLocal_54[iVar1], cLocal_71, sLocal_72[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
}
PED::SET_PED_KEEP_TASK(uLocal_54[iVar1], 1);
}}elseif(STREAMING::HAS_MODEL_LOADED(iLocal_68[iVar1])){
uLocal_54[iVar1]=PED::CREATE_PED(25, iLocal_68[iVar1], Local_64[iVar1 /*3*/], fLocal_65[iVar1], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_54[iVar1], 1);
}
iVar1++;
}
if((((func_66(uLocal_54[0]) && func_66(uLocal_54[1])) && func_66(uLocal_54[2])) && func_66(uLocal_54[3])) && func_66(uLocal_54[4])){
TASK::TASK_LOOK_AT_ENTITY(uLocal_54[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
iVar1=0;
while (iVar1 <=(iLocal_68 - 1)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_68[iVar1]);
iVar1++;
}
iLocal_73=0;
}}}}}elseif(Local_41.f_1==3){
if(func_168()){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
if(STREAMING::HAS_MODEL_LOADED(iLocal_69)){
iLocal_55=VEHICLE::CREATE_VEHICLE(iLocal_69, Local_57, fLocal_58, 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 1084227584);
VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_55, 0f);
VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_55, 0);
VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_55, 0);
if(VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_55)){
VEHICLE::SET_BOAT_ANCHOR(iLocal_55, 1);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_55, 0, 1, 0);
}}
iVar2=0;
iVar2=0;
while (iVar2 < 3){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_66[iVar2])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_67[iVar2])){
if(!PED::IS_PED_INJURED(iLocal_67[iVar2]) && func_16(iLocal_66[iVar2])){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_66[iVar2], -1, 0)){
PED::SET_PED_INTO_VEHICLE(iLocal_67[iVar2], iLocal_66[iVar2], -1);
}}
}
elseif(func_16(iLocal_66[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_jetski_01"))){
iLocal_67[iVar2]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_66[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
PED::SET_PED_DIES_IN_WATER(iLocal_67[iVar2], 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67[iVar2], 1);
}}elseif(STREAMING::HAS_MODEL_LOADED(iLocal_69)){
iLocal_66[iVar2]=VEHICLE::CREATE_VEHICLE(iLocal_69, Local_62[iVar2 /*3*/], fLocal_63[iVar2], 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_66[iVar2], 1084227584);
VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_66[iVar2], 0f);
VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_66[iVar2], 1);
VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_66[iVar2], 1);
if(VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_66[iVar2])){
VEHICLE::SET_BOAT_ANCHOR(iLocal_66[iVar2], 1);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_66[iVar2], 0, 1, 0);
}
iVar2++;
}
if(((ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_66[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_66[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_66[2])){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
}
if((ENTITY::DOES_ENTITY_EXIST(iLocal_67[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[2])){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_jetski_01"));
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
}}}}

int func_167(int iParam0, int iParam1){
if(func_66(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_168(){
if(!func_170()){
return 0;
}
if(func_66(PLAYER::PLAYER_PED_ID())){
if(!func_169(PLAYER::PLAYER_PED_ID(), Local_57, 100f, 1) || CAM::IS_SCREEN_FADED_OUT()){
return 1;
}}
return 0;
}


bool func_169(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}

int func_170(){
if(Local_41.f_1==3){
return 1;
}elseif(Local_41.f_1==1 || Local_41.f_1==2){
if(CLOCK::GET_CLOCK_HOURS() >=20 || CLOCK::GET_CLOCK_HOURS() < 5){
return 1;
}else{
return 0;
}}
return 1;
}

int func_171(var uParam0){
int iVar0;
if(!uParam0->f_145){
return 1;
}
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29)){
return 0;
}
if(!func_172(uParam0[iVar0 /*18*/])){
return 0;
}}
iVar0++;
}
uParam0->f_145=0;
return 1;
}


bool func_172(var uParam0){
return func_173(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_173(var uParam0, char[4] cParam1, int iParam2){
if(MISC::IS_BIT_SET(uParam0, 30)){
if(MISC::IS_BIT_SET(uParam0, 29)){
switch (func_174(uParam0)){
case 0:
return STREAMING::HAS_MODEL_LOADED(uParam2);
break;
case 1:
return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
break;
case 2:
return STREAMING::HAS_CLIP_SET_LOADED(cParam1);
break;
case 3:
return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(cParam1);
break;
case 4:
return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, cParam1);
break;
case 5:
return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cParam1);
break;
case 6:
return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cParam1, MISC::IS_BIT_SET(uParam0, 27), -1);
break;
case 7:
return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
break;
case 8:
return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
break;
case 9:
return STREAMING::HAS_PTFX_ASSET_LOADED();
break;
default:
break;
}}else{
return 0;
}}
return 0;
}

int func_174(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 10){
if(MISC::IS_BIT_SET(uParam0, bVar0)){
return bVar0;
}
bVar0++;
}
return -1;
}


void func_175(var uParam0){
int iVar0;
if(uParam0->f_145){
if((MISC::GET_FRAME_COUNT() >=(uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_100833.f_20, 2)) || MISC::IS_BIT_SET(Global_100833.f_20, 13)){
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29)){
func_176(uParam0[iVar0 /*18*/]);
uParam0->f_146=MISC::GET_FRAME_COUNT();
return;
}}
iVar0++;
}}}}


void func_176(var uParam0){
func_177(uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_177(var uParam0, char* sParam1, int iParam2){
if(MISC::IS_BIT_SET(*uParam0, 30)){
switch (func_174(*uParam0)){
case 0:
STREAMING::REQUEST_MODEL(uParam2);
break;
case 1:
STREAMING::REQUEST_ANIM_DICT(uParam1);
break;
case 2:
STREAMING::REQUEST_CLIP_SET(uParam1);
break;
case 3:
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
break;
case 4:
VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, sParam1);
break;
case 5:
TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
break;
case 6:
AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27), -1);
break;
case 7:
SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
break;
case 8:
HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
break;
case 9:
STREAMING::REQUEST_PTFX_ASSET();
break;
default:
break;
}
MISC::SET_BIT(uParam0, 29);
}}


void func_178(){
int iVar0;
if(Local_41.f_1==1 || Local_41.f_1==2){
switch (Local_41.f_0){
case 0:
Local_57={
-158.67f, -1555.16f, 34.63f 
};
fLocal_58=187.71f;
Local_60={
-155.15f, -1550.83f, 34.53f 
};
fLocal_61=213.13f;
Local_81={
-68.87878f, -1818.903f, 24.55311f 
};
Local_82={
-56.0098f, -1807.029f, 27.85417f 
};
Local_64[0 /*3*/]={
-157.19f, -1555.36f, 35.07f 
};
Local_64[1 /*3*/]={
-157.04f, -1557.57f, 35.11f 
};
Local_64[2 /*3*/]={
-159.83f, -1557.39f, 34.96f 
};
Local_64[3 /*3*/]={
-156.64f, -1551.96f, 34.92f 
};
Local_64[4 /*3*/]={
-156.25f, -1552.58f, 34.93f 
};
Local_64[5 /*3*/]={
-153.23f, -1553.05f, 34.93f 
};
Local_64[6 /*3*/]={
-155.3f, -1556.41f, 35.13f 
};
fLocal_65[0]=101.91f;
fLocal_65[1]=38.48f;
fLocal_65[2]=-36.7f;
fLocal_65[3]=-52.93f;
fLocal_65[4]=-75.07f;
fLocal_65[5]=33.13f;
fLocal_65[6]=-170.02f;
break;
case 1:
Local_57={
368.72f, 294.06f, 102.96f 
};
fLocal_58=25.17f;
Local_60={
373.71f, 290.72f, 102.89f 
};
fLocal_61=33.24f;
Local_81={
-523.5497f, 262.2986f, 80.01991f 
};
Local_82={
-509.1013f, 272.478f, 86.17713f 
};
Local_64[0 /*3*/]={
367.24f, 293.81f, 103.41f 
};
Local_64[1 /*3*/]={
368.73f, 296.89f, 103.41f 
};
Local_64[2 /*3*/]={
366.94f, 296.34f, 103.43f 
};
Local_64[3 /*3*/]={
375.21f, 291.85f, 103.25f 
};
Local_64[4 /*3*/]={
374.81f, 292.47f, 103.26f 
};
Local_64[5 /*3*/]={
371.51f, 291.85f, 103.31f 
};
Local_64[6 /*3*/]={
373.86f, 296.3f, 103.31f 
};
fLocal_65[0]=-64.83f;
fLocal_65[1]=-163.04f;
fLocal_65[2]=-118.77f;
fLocal_65[3]=127.18f;
fLocal_65[4]=105.04f;
fLocal_65[5]=-146.75f;
fLocal_65[6]=10.11f;
break;
case 2:
Local_57={
-807.98f, -2555.14f, 13.34f 
};
fLocal_58=3.35f;
Local_60={
-810.1f, -2560.85f, 13.38f 
};
fLocal_61=43.57f;
Local_81={
-1000.759f, -2436.092f, 17.16946f 
};
Local_82={
-986.7399f, -2424.87f, 22.16946f 
};
Local_64[0 /*3*/]={
-809.45f, -2554.82f, 13.76f 
};
Local_64[1 /*3*/]={
-808.47f, -2552.43f, 13.76f 
};
Local_64[2 /*3*/]={
-806.32f, -2552.87f, 13.76f 
};
Local_64[3 /*3*/]={
-808.59f, -2559.5f, 13.76f 
};
Local_64[4 /*3*/]={
-809.1f, -2558.97f, 13.76f 
};
Local_64[5 /*3*/]={
-812.82f, -2559.48f, 13.76f 
};
Local_64[6 /*3*/]={
-810.72f, -2555.37f, 13.76f 
};
fLocal_65[0]=-86.65f;
fLocal_65[1]=-130.05f;
fLocal_65[2]=150.04f;
fLocal_65[3]=137.51f;
fLocal_65[4]=115.37f;
fLocal_65[5]=-136.43f;
fLocal_65[6]=20.43f;
break;
case 3:
Local_57={
778.59f, -1160.2f, 28.35f 
};
fLocal_58=302.47f;
Local_60={
778.47f, -1164.01f, 28.25f 
};
fLocal_61=287.97f;
Local_81={
-1000.759f, -2436.092f, 17.16946f 
};
Local_82={
-986.7399f, -2424.87f, 22.16946f 
};
Local_64[0 /*3*/]={
778.16f, -1158.78f, 28.88f 
};
Local_64[1 /*3*/]={
780.82f, -1158.1f, 28.73f 
};
Local_64[2 /*3*/]={
781.52f, -1158.81f, 28.7f 
};
Local_64[3 /*3*/]={
779.16f, -1165.74f, 28.72f 
};
Local_64[4 /*3*/]={
779.86f, -1165.52f, 28.72f 
};
Local_64[5 /*3*/]={
780.75f, -1161.99f, 28.65f 
};
Local_64[6 /*3*/]={
783.8f, -1165.61f, 28.74f 
};
fLocal_65[0]=-147.53f;
fLocal_65[1]=171.51f;
fLocal_65[2]=104.94f;
fLocal_65[3]=21.91f;
fLocal_65[4]=-0.22f;
fLocal_65[5]=107.91f;
fLocal_65[6]=-95.23f;
break;
case 4:
Local_57={
-1066.59f, -1151.04f, 1.71f 
};
fLocal_58=258.32f;
Local_64[0 /*3*/]={
-1065.07f, -1151.02f, 2.16f 
};
Local_64[1 /*3*/]={
-1065.35f, -1149.36f, 2.16f 
};
Local_64[2 /*3*/]={
-1067.13f, -1151.68f, 2.16f 
};
Local_64[3 /*3*/]={
-1066.3f, -1149.38f, 2.16f 
};
Local_64[4 /*3*/]={
-1066.01f, -1152.26f, 2.16f 
};
fLocal_65[0]=75.06f;
fLocal_65[1]=134.25f;
fLocal_65[2]=-52.71f;
fLocal_65[3]=-93.39f;
fLocal_65[4]=-141.52f;
Local_81={
-1265.744f, -1057.199f, 5.410841f 
};
Local_82={
-1258.679f, -1049.919f, 9.443882f 
};
break;
}
func_183(Local_41.f_0, &Local_83, &Local_84, &fLocal_85);
iLocal_68[0]=joaat("a_f_y_hipster_02");
iLocal_68[1]=joaat("a_m_y_hipster_02");
iLocal_68[2]=joaat("a_m_y_hipster_02");
iLocal_68[3]=joaat("a_f_y_hipster_02");
iLocal_68[4]=joaat("a_m_y_hipster_02");
iLocal_68[5]=joaat("a_m_y_hipster_02");
iLocal_68[6]=joaat("a_m_y_hipster_02");
if(Local_41.f_1==1){
cLocal_71="random@street_race";
sLocal_72[0]="_car_b_chatting_female";
sLocal_72[1]="_car_b_chatting_male";
sLocal_72[2]="_car_b_chatting_male";
sLocal_72[3]="_car_b_chatting_female";
sLocal_72[4]="_car_b_lookout";
}else{
cLocal_71="random@street_race";
sLocal_72[0]="_car_a_flirt_girl";
sLocal_72[1]="_car_a_gawker_male_a";
sLocal_72[2]="_car_a_gawker_male_b";
sLocal_72[3]="_car_b_chatting_female";
sLocal_72[4]="_car_b_chatting_male";
sLocal_72[5]="_car_b_driver";
sLocal_72[6]="_car_b_lookout";
func_182(&uLocal_88, iLocal_70);
}
iLocal_69=func_181(Local_41.f_1);
iVar0=0;
while (iVar0 <=(iLocal_68 - 1)){
func_182(&uLocal_88, iLocal_68[iVar0]);
iVar0++;
}
func_182(&uLocal_88, iLocal_69);
func_179(&uLocal_88, cLocal_71);
PATHFIND::SET_PED_PATHS_IN_AREA(Local_81, Local_82, 0, 0);
PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_83, Local_84, fLocal_85, 0, 0, 1);
iLocal_45=1;
}elseif(Local_41.f_1==3){
switch (Local_41.f_0){
case 5:
Local_57={
3066.63f, 650.9f, 0.17f 
};
fLocal_58=351.81f;
Local_62[0 /*3*/]={
3073.57f, 648.09f, 0.01f 
};
fLocal_63[0]=5.72f;
Local_62[1 /*3*/]={
3071.53f, 648.79f, -0.09f 
};
fLocal_63[1]=351.33f;
Local_62[2 /*3*/]={
3068.73f, 645.53f, -0.07f 
};
fLocal_63[2]=348.18f;
break;
case 6:
Local_57={
3462.11f, 5192.15f, -0.04f 
};
fLocal_58=222.9f;
Local_62[0 /*3*/]={
3456.64f, 5195.91f, 0.12f 
};
fLocal_63[0]=211.54f;
Local_62[1 /*3*/]={
3453.19f, 5192.84f, -0.17f 
};
fLocal_63[1]=201.55f;
Local_62[2 /*3*/]={
3451.06f, 5189.43f, -0.3f 
};
fLocal_63[2]=221.55f;
break;
case 7:
Local_57={
194.64f, 3621.27f, 29.91f 
};
fLocal_58=163.95f;
Local_62[0 /*3*/]={
198.62f, 3620.46f, 29.91f 
};
fLocal_63[0]=175.4f;
Local_62[1 /*3*/]={
202.78f, 3619.69f, 29.87f 
};
fLocal_63[1]=163.69f;
Local_62[2 /*3*/]={
210.14f, 3618.88f, 29.87f 
};
fLocal_63[2]=175.31f;
break;
case 8:
Local_57={
627.58f, -2138.06f, -0.07f 
};
fLocal_58=180.09f;
Local_62[0 /*3*/]={
643.09f, -2146.11f, -0.09f 
};
fLocal_63[0]=143.89f;
Local_62[1 /*3*/]={
638.21f, -2145.3f, -0.1f 
};
fLocal_63[1]=172.41f;
Local_62[2 /*3*/]={
633.56f, -2143.83f, -0.04f 
};
fLocal_63[2]=191.97f;
break;
}
iLocal_69=joaat("seashark");
func_182(&uLocal_88, iLocal_69);
func_182(&uLocal_88, joaat("a_m_y_jetski_01"));
}}


void func_179(var uParam0, char* sParam1){
func_180(uParam0, 1, -1, sParam1, 0);
}


void func_180(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], bParam1)){
if(iParam2 !=-1){
if((uParam0[iVar0 /*18*/])->f_1==iParam2){
return;
}}
if(bParam1 !=4){
if(!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL")){
if(MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3)){
return;
}}}
if(bParam1==9){
return;
}}}
iVar0++;
}
if(!uParam0->f_145){
uParam0->f_145=1;
}
iVar0=0;
while (iVar0 < 8){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
(uParam0[iVar0 /*18*/])->f_1=iParam2;
(*uParam0)[iVar0 /*18*/]=iParam4;
MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
return;
}
iVar0++;
}}

int func_181(int iParam0){
int iVar0;
switch (iParam0){
case 1:
iVar0=joaat("bati");
break;
case 2:
iVar0=joaat("ninef");
break;
case 3:
iVar0=joaat("seashark");
break;
}
return iVar0;
}


void func_182(var uParam0, int iParam1){
func_180(uParam0, 0, iParam1, "NULL", 0);
}


void func_183(int iParam0, var uParam1, var uParam2, float fParam3){
switch (iParam0){
case 0:
*uParam1={
311.1262f, -1896.261f, 20.68329f 
};
*uParam2={
-295.0653f, -1405.53f, 35.3146f 
};
*fParam3=300f;
break;
case 1:
*uParam1={
273.185f, 335.2969f, 105.5704f 
};
*uParam2={
412.2877f, 299.2304f, 101.0724f 
};
*fParam3=20f;
break;
case 2:
*uParam1={
-823.7157f, -2588f, 13.7691f 
};
*uParam2={
-801.3356f, -2464.007f, 12.42913f 
};
*fParam3=30f;
break;
case 3:
*uParam1={
791.8257f, -1423.863f, 24.17954f 
};
*uParam2={
783.167f, -1015.648f, 50.24134f 
};
*fParam3=200f;
break;
case 4:
*uParam1={
-1084.03f, -1165.724f, 0.150211f 
};
*uParam2={
-1029.213f, -1134.581f, 2.174534f 
};
*fParam3=10f;
break;
}}

int func_184(){
var uVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
if(func_65(9)){
return 0;
}
if(func_48(6) || func_48(7)){
return 0;
}
if(Global_63479){
return 0;
}
if(func_207()){
return 0;
}
if(Local_41.f_1 !=3 && func_54() !=1){
return 0;
}
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
return 0;
}
if(func_66(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(((func_16(uVar0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0)) && !func_206(PLAYER::PLAYER_PED_ID(), uVar0, -1)) && ENTITY::GET_ENTITY_MODEL(uVar0) !=joaat("taxi")){
return 0;
}}
switch (Local_41.f_0){
case 0:
if(Global_113784[0]){
return 0;
}
break;
case 1:
if(Global_113784[1]){
return 0;
}
break;
case 2:
if(Global_113784[2]){
return 0;
}
break;
case 3:
if(Global_113784[3]){
return 0;
}
break;
case 4:
if(Global_113784[4]){
return 0;
}
break;
case 5:
if(Global_113774[0]){
return 0;
}
break;
case 6:
if(Global_113774[1]){
return 0;
}
break;
case 7:
if(Global_113774[2]){
return 0;
}
break;
case 8:
if(Global_113774[3]){
return 0;
}
break;
}
if(!func_170()){
iVar1=0;
while (iVar1 <=(iLocal_68 - 1)){
if(func_66(uLocal_54[iVar1])){
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_PAUSE(0, iVar1 * 100);
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(uLocal_54[iVar1], uVar2);
}
iVar1++;
}
iVar1=0;
while (iVar1 <=(iLocal_67 - 1)){
if(func_66(iLocal_67[iVar1])){
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_PAUSE(0, iVar1 * 110);
if(func_16(iLocal_66[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_67[iVar1], iLocal_66[iVar1], 0)){
TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_66[iVar1], 30f, 786597);
}else{
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
}
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(iLocal_67[iVar1], uVar2);
}
iVar1++;
}
if(func_66(iLocal_56)){
if(func_16(iLocal_55) && PED::IS_PED_IN_VEHICLE(iLocal_56, iLocal_55, 0)){
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_55, 30f, 786597);
}else{
TASK::TASK_WANDER_STANDARD(iLocal_56, 1193033728, 0);
}}
return 0;
}
if(func_186()){
iVar4=0;
while (iVar4 <=(iLocal_68 - 1)){
if(func_66(uLocal_54[iVar4])){
TASK::OPEN_SEQUENCE_TASK(&uVar3);
TASK::TASK_PAUSE(0, iVar4 * 50);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar3);
if((iVar4 % 2)==0){
func_185(uLocal_54[iVar4], 1);
}
TASK::TASK_PERFORM_SEQUENCE(uLocal_54[iVar4], uVar3);
}
iVar4++;
}
iVar4=0;
while (iVar4 <=(iLocal_67 - 1)){
if(func_16(iLocal_66[iVar4]) && Local_41.f_1==3){
VEHICLE::SET_BOAT_ANCHOR(iLocal_66[iVar4], 0);
}
if(func_66(iLocal_67[iVar4])){
TASK::OPEN_SEQUENCE_TASK(&uVar3);
TASK::TASK_PAUSE(0, iVar4 * 60);
if(func_16(iLocal_66[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_67[iVar4], iLocal_66[iVar4], 0)){
TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_66[iVar4], 50f, 786468);
}else{
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
}
TASK::CLOSE_SEQUENCE_TASK(uVar3);
TASK::TASK_PERFORM_SEQUENCE(iLocal_67[iVar4], uVar3);
if((iVar4 % 2)==0){
func_185(iLocal_67[iVar4], 1);
}}
iVar4++;
}
if(func_16(iLocal_55) && Local_41.f_1==3){
VEHICLE::SET_BOAT_ANCHOR(iLocal_55, 0);
}
if(func_66(iLocal_56)){
if(func_16(iLocal_55) && PED::IS_PED_IN_VEHICLE(iLocal_56, iLocal_55, 0)){
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_55, 50f, 786468);
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
}}
switch (Local_41.f_0){
case 0:
Global_113784[0]=1;
Global_113790[0]=MISC::GET_GAME_TIMER();
break;
case 1:
Global_113784[1]=1;
Global_113790[1]=MISC::GET_GAME_TIMER();
break;
case 2:
Global_113784[2]=1;
Global_113790[2]=MISC::GET_GAME_TIMER();
break;
case 3:
Global_113784[3]=1;
Global_113790[3]=MISC::GET_GAME_TIMER();
break;
case 4:
Global_113784[4]=1;
Global_113790[4]=MISC::GET_GAME_TIMER();
break;
case 5:
Global_113774[0]=1;
Global_113779[0]=MISC::GET_GAME_TIMER();
break;
case 6:
Global_113774[1]=1;
Global_113779[1]=MISC::GET_GAME_TIMER();
break;
case 7:
Global_113774[2]=1;
Global_113779[2]=MISC::GET_GAME_TIMER();
break;
case 8:
Global_113774[3]=1;
Global_113779[3]=MISC::GET_GAME_TIMER();
break;
}
return 0;
}
return 1;
}


void func_185(var uParam0, bool bParam1){
char* sVar0;
int iVar1;
int iVar2;
if(func_66(uParam0)){
iVar1=2;
if(bParam1){
iVar1=3;
}
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
if(iVar2==0){
sVar0="SCREAM_PANIC";
}elseif(iVar2==1){
sVar0="SCREAM_TERROR";
}else{
sVar0="SUPER_HIGH_FALL";
}
if(PED::IS_PED_MALE(uParam0)){
func_144(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
}else{
func_144(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
}}}

int func_186(){
int iVar0;
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
return 1;
}
if(Local_41.f_1==3){
iVar0=0;
while (iVar0 <=(iLocal_67 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_67[iVar0])){
if(PED::IS_PED_INJURED(iLocal_67[iVar0])){
return 1;
}elseif(func_187(iLocal_67[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_67[iVar0])){
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_66[iVar0])){
if(ENTITY::IS_ENTITY_DEAD(iLocal_66[iVar0], 0)){
return 1;
}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_66[iVar0], PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_66[iVar0]) < 900){
return 1;
}}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
if(ENTITY::IS_ENTITY_DEAD(iLocal_55, 0)){
return 1;
}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_55) < 900){
return 1;
}}
return 0;
}
if(func_169(PLAYER::PLAYER_PED_ID(), Local_42, 50f, 1) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_56)){
if(PED::IS_PED_INJURED(iLocal_56)){
return 1;
}elseif(func_187(iLocal_56, 1, 1116471296, 1126825984, 0, 0, 0, 0)){
return 1;
}elseif(PED::IS_PED_BEING_JACKED(iLocal_56)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
if(ENTITY::IS_ENTITY_DEAD(iLocal_55, 0)){
return 1;
}elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_59)){
if(ENTITY::IS_ENTITY_DEAD(iLocal_59, 0)){
return 1;
}elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_59, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}
iVar0=0;
while (iVar0 <=(iLocal_68 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_54[iVar0])){
if(PED::IS_PED_INJURED(uLocal_54[iVar0])){
return 1;
}elseif(func_187(uLocal_54[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_187(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
struct<3> Var0;
if(func_17(PLAYER::PLAYER_PED_ID()) && func_17(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
if(func_201(iParam0, bParam1, bParam5, bParam6, bParam7)){
return 1;
}
if(!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <=5f){
return func_200(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
}}}
if(bParam4){
return 0;
}elseif(func_188(iParam0, fParam3)){
return 1;
}}
return 0;
}

int func_188(int iParam0, float fParam1){
float fVar0;
if(func_17(PLAYER::PLAYER_PED_ID()) && func_17(iParam0)){
if(func_199(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)){
if(func_189(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_189(int iParam0, float fParam1){
return func_190(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_190(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_198(iParam0, iParam1);
if(!func_17(iParam0) || !func_17(iParam1)){
if(iVar2 !=-1){
func_197(&(Local_38[iVar2 /*4*/]));
}
return 0;
}
if(!func_194(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_193();
if(iVar2==-1){
return 0;
}
Local_38[iVar2 /*4*/].f_1=iParam0;
Local_38[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_191(&(Local_38[iVar2 /*4*/]), Var1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_191(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_17(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_192(iParam2, iParam5) 
};
*uParam0=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
return 0;
}
iVar4=SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
if(iVar4==0){
*uParam0=0;
return 0;
}elseif(iVar4==1){
return 0;
}
*uParam0=0;
if(ENTITY::IS_ENTITY_A_PED(iVar3)){
func_17(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_39){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_17(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_39){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__192(int iParam0, int iParam1){
int iVar0;
if(iParam1==7){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
iParam1=iVar0;
}
if(iParam1==0){
return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}elseif(iParam1==1){
return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
}elseif(iParam1==2){
return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
}elseif(iParam1==3){
return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
}elseif(iParam1==4){
return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
}elseif(iParam1==5){
return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
}elseif(iParam1==6){
return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
}
return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_193(){
int iVar0;
iVar0=0;
while (iVar0 < Local_38.f_0){
if((Local_38[iVar0 /*4*/]==0 && Local_38[iVar0 /*4*/].f_1==0) && Local_38[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_194(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_196(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
};
if(fParam2 < 0.1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var1={
func_196(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_195(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_195(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__196(struct<3> Param0){
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


void func_197(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_198(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_38.f_0){
if(Local_38[iVar0 /*4*/].f_1==iParam0 && Local_38[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_199(int iParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}


bool func_200(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_201(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
float fVar0;
float fVar1;
int iVar2;
fVar0=8f;
fVar1=15f;
if(bParam1==0){
fVar0=1.86f;
fVar1=1.86f;
}
if(bParam2){
fVar0=2f;
}
if(func_17(PLAYER::PLAYER_PED_ID()) && func_17(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_205(iParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_202(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}else{
if(WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1)){
return 1;
}}}else{
if(bParam1){
fVar0=1.86f;
fVar1=1.86f;
}
if(func_205(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_202(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_202(int iParam0, float fParam1, bool bParam2, bool bParam3){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var1={
Var0 
};
Var0.f_0=(Var0.f_0 - fParam1);
Var0.f_1=(Var0.f_1 - fParam1);
Var0.f_2=(Var0.f_2 - fParam1);
Var1.f_0=(Var1.f_0 + fParam1);
Var1.f_1=(Var1.f_1 + fParam1);
Var1.f_2=(Var1.f_2 + fParam1);
if(bParam2){
if(((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)){
if(bParam3){
if(func_203(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_203(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1)){
return 1;
}}
return 0;
}

int func_203(var uParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0)){
if(func_204(uParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_204(int iParam0, struct<3> Param1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_196(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) 
};
if(fParam2 < 0.1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var1={
func_196(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_195(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}

int func_205(int iParam0, bool bParam1, float fParam2, float fParam3){
if(bParam1){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)){
return 1;
}}}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1)){
return 1;
}
return 0;
}

int func_206(int iParam0, int iParam1, int iParam2){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, 0)==iParam0){
return 1;
}}}
return 0;
}

int func_207(){
switch (Local_41.f_0){
case 5:
return MISC::IS_BIT_SET(Global_113810.f_24979.f_2, 0);
break;
case 6:
return MISC::IS_BIT_SET(Global_113810.f_24979.f_2, 1);
break;
case 7:
return MISC::IS_BIT_SET(Global_113810.f_24979.f_2, 2);
break;
case 8:
return MISC::IS_BIT_SET(Global_113810.f_24979.f_2, 3);
break;
case 0:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_3, 0);
break;
case 1:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_3, 1);
break;
case 2:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_3, 2);
break;
case 3:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_3, 3);
break;
case 4:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_3, 4);
break;
}
return 0;
}


void func_208(){
iLocal_40=0;
iLocal_43=0;
bLocal_50=false;
bLocal_51=false;
iLocal_47=0;
iLocal_48=0;
iLocal_49=0;
func_210(1);
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 0);
if(Local_41.f_0==1){
uLocal_87=func_209(374.0083f, 279.5919f, 102.3306f, 40f);
MISC::CLEAR_AREA_OF_VEHICLES(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0, 0, 0);
}
if(Local_41.f_1==1 || Local_41.f_1==2){
uLocal_86=func_209(Local_42, 60f);
}}


var func__209(struct<3> Param0, float fParam1){
struct<3> Var0;
Var0={
(fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) 
};
return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}


void func_210(bool bParam0){
if(bParam0){
switch (Local_41.f_0){
case 0:
case 1:
case 2:
case 3:
func_182(&uLocal_88, joaat("banshee"));
func_182(&uLocal_88, joaat("feltzer2"));
func_182(&uLocal_88, joaat("sentinel"));
break;
case 4:
func_182(&uLocal_88, joaat("bati"));
func_182(&uLocal_88, joaat("ruffian"));
break;
case 5:
case 6:
case 7:
case 8:
func_182(&uLocal_88, joaat("seashark"));
break;
}}else{
func_211(&uLocal_88);
}}


void func_211(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
func_212(uParam0[iVar0 /*18*/]);
}
iVar0++;
}
uParam0->f_145=1;
}


void func_212(var uParam0){
func_213(*uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_213(var uParam0, char* sParam1, int iParam2){
if(MISC::IS_BIT_SET(uParam0, 30)){
switch (func_174(uParam0)){
case 0:
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
break;
case 1:
STREAMING::REMOVE_ANIM_DICT(uParam1);
break;
case 2:
STREAMING::REMOVE_CLIP_SET(uParam1);
break;
case 3:
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
break;
case 4:
VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
break;
case 5:
TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
break;
case 6:
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
break;
case 7:
SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
break;
case 8:
HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(uParam0, 26));
break;
case 9:
STREAMING::REMOVE_PTFX_ASSET();
break;
default:
break;
}}}

int func_214(int iParam0){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_1, 0);
break;
case 1:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_1, 1);
break;
case 2:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_1, 2);
break;
case 3:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_1, 3);
break;
case 4:
return MISC::IS_BIT_SET(Global_113810.f_24982.f_1, 4);
break;
}
return 0;
}

int func_215(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
return iVar0;
}


void func_216(){
if(func_217(func_218(86, 0), Local_42, 1f, 0)){
Local_41.f_0=0;
Local_41.f_1=2;
Local_41.f_3=100;
Local_41.f_4=20;
}elseif(func_217(func_218(87, 0), Local_42, 1f, 0)){
Local_41.f_0=1;
Local_41.f_1=2;
Local_41.f_3=500;
Local_41.f_4=18;
}elseif(func_217(func_218(88, 0), Local_42, 1f, 0)){
Local_41.f_0=2;
Local_41.f_1=2;
Local_41.f_3=1000;
Local_41.f_4=2;
}elseif(func_217(func_218(89, 0), Local_42, 1f, 0)){
Local_41.f_0=3;
Local_41.f_1=2;
Local_41.f_3=1250;
Local_41.f_4=4;
}elseif(func_217(func_218(90, 0), Local_42, 1f, 0)){
Local_41.f_0=4;
Local_41.f_1=1;
Local_41.f_3=1500;
Local_41.f_4=5;
}elseif(func_217(func_218(82, 0), Local_42, 1f, 0)){
Local_41.f_0=5;
Local_41.f_1=3;
Local_41.f_3=0;
Local_41.f_4=16;
}elseif(func_217(func_218(83, 0), Local_42, 1f, 0)){
Local_41.f_0=6;
Local_41.f_1=3;
Local_41.f_3=0;
Local_41.f_4=13;
}elseif(func_217(func_218(84, 0), Local_42, 1f, 0)){
Local_41.f_0=7;
Local_41.f_1=3;
Local_41.f_3=0;
Local_41.f_4=15;
Local_41.f_5=1;
}elseif(func_217(func_218(85, 0), Local_42, 1f, 0)){
Local_41.f_0=8;
Local_41.f_1=3;
Local_41.f_4=24;
Local_41.f_3=0;
Local_41.f_5=1;
}else{
func_219(0);
}}

int func_217(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
if(fParam2 < 0f){
fParam2=0f;
}
if(!bParam3){
if(MISC::ABSF((Param0.f_0 - Param1.f_0)) <=fParam2){
if(MISC::ABSF((Param0.f_1 - Param1.f_1)) <=fParam2){
if(MISC::ABSF((Param0.f_2 - Param1.f_2)) <=fParam2){
return 1;
}}}}elseif(MISC::ABSF((Param0.f_0 - Param1.f_0)) <=fParam2){
if(MISC::ABSF((Param0.f_1 - Param1.f_1)) <=fParam2){
return 1;
}}
return 0;
}


Vector3 func__218(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0f, 0f, 0f;
}
return Global_32663[iVar0 /*23*/][iParam1 /*3*/];
}


void func_219(bool bParam0){
int iVar0;
var uVar1;
if(!iLocal_44){
CAM::STOP_GAMEPLAY_HINT(0);
iLocal_44=1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(func_17(uLocal_54[iVar0])){
TASK::CLEAR_PED_TASKS(uLocal_54[iVar0]);
TASK::TASK_WANDER_STANDARD(uLocal_54[iVar0], 1193033728, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_54[iVar0], 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_54[iVar0]));
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 3){
if(func_17(iLocal_67[iVar0])){
if(func_17(iLocal_66[iVar0])){
TASK::CLEAR_PED_TASKS(iLocal_67[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_66[iVar0]))){
VEHICLE::SET_BOAT_ANCHOR(iLocal_66[iVar0], 0);
}
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_67[iVar0], iLocal_66[iVar0], 20f, 786599);
PED::SET_PED_KEEP_TASK(iLocal_67[iVar0], 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67[iVar0], 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_67[iVar0]));
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_66[iVar0]));
}}
iVar0++;
}
if(func_17(iLocal_56)){
if(func_17(iLocal_55)){
TASK::CLEAR_PED_TASKS(iLocal_56);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_56, 1, 1);
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_55, 15f, 786599);
PED::SET_PED_KEEP_TASK(iLocal_56, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_55);
}}
if(func_17(iLocal_59)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_59);
}
switch (Local_41.f_0){
case 5:
func_222(82, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24979.f_2), false);
break;
case 6:
func_222(83, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24979.f_2), true);
break;
case 7:
func_222(84, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24979.f_2), 2);
break;
case 8:
func_222(85, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24979.f_2), 3);
break;
case 0:
func_222(86, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24982.f_3), false);
break;
case 1:
func_222(87, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24982.f_3), true);
break;
case 2:
func_222(88, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24982.f_3), 2);
break;
case 3:
func_222(89, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24982.f_3), 3);
break;
case 4:
func_222(90, 0, 0);
MISC::SET_BIT(&(Global_113810.f_24982.f_3), 4);
break;
}
if(iLocal_43){
HUD::CLEAR_HELP(1);
}
AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 0);
if(iLocal_52){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
}
if(iLocal_74 && !bParam0){
uVar1=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(uVar1)){
if(!PLAYER::IS_PLAYER_CONTROL_ON(iVar1)){
PLAYER::SET_PLAYER_CONTROL(iVar1, 1, 0);
}}}
if(!bParam0){
func_210(0);
}
if(iLocal_45){
PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_81, Local_82, 1);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_83, Local_84, fLocal_85, 1);
iLocal_45=0;
}
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 1);
if(Local_41.f_0==1){
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_87, 0);
}
if(Local_41.f_1==1 || Local_41.f_1==2){
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_86, 0);
}else{
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
}
func_220(&uLocal_88, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_220(var uParam0, bool bParam1){
int iVar0;
if(!bParam1){
func_211(uParam0);
}
iVar0=0;
while (iVar0 < 8){
func_221(uParam0[iVar0 /*18*/]);
iVar0++;
}
uParam0->f_145=0;
uParam0->f_146=-1;
}


void func_221(var uParam0){
*uParam0=0;
uParam0->f_1=-1;
StringCopy(&(uParam0->f_2), "NULL", 64);
}


void func_222(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), false);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), false);
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}