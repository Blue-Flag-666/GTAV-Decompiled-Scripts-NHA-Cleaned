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
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=NULL;
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
struct<55> Local_63={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 
};
var uLocal_64=0;
struct<5> Local_65[32];
int iLocal_66=0;
int iLocal_67[3]={
0, 0, 0 
};
int iLocal_68=0;
bool bLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
struct<3> Local_73={
0, 0, 0 
};
var uLocal_74=0;
int iLocal_75=0;
bool bLocal_76=0;
int iLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=16;
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
var uLocal_235=0;
var uLocal_236=0;
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
var uLocal_252[16]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_253=0;
int iLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
struct<21> Local_257={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
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
sLocal_20="NULL";
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
bLocal_69=-1;
iLocal_72=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_562(ScriptParam_257);
}
while (true){
func_561();
if(func_554()){
func_551();
}
uLocal_74=NETWORK::GET_NETWORK_TIME();
func_542();
func_539();
func_534();
func_533();
switch (func_532(PLAYER::NETWORK_PLAYER_ID_TO_INT())){
case 0:
if(func_531()==1){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=1;
}elseif(func_531()==4){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=3;
}
break;
case 1:
if(func_531()==1){
func_525();
}elseif(func_531()==0){
func_519();
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=0;
}elseif(func_531()==4){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=3;
}
break;
case 3:
func_495();
func_493(&(Local_63.f_54));
if(func_492(&(Local_63.f_54))){
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
func_495();
iVar0++;
}
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=4;
}
break;
case 2:
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=4;
case 4:
func_265();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_263();
func_262();
func_261();
switch (func_531()){
case 0:
func_260();
if(func_256()){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_71), 0)){
func_254(PLAYER::GET_PLAYER_PED(iLocal_71));
}
else{
Local_63.f_36={
Local_73 
};
}
MISC::CLEAR_BIT(&(Local_63.f_2), 6);
Local_63.f_0=1;
}
break;
case 1:
if(func_65()){
func_64();
func_63();
}
func_45();
break;
case 4:
break;
}
func_1();
}}}


void func_1(){
int iVar0;
if(func_531() < 4){
if(func_22()){
iLocal_75=0;
iVar0=0;
while (iVar0 <=(func_491(bLocal_69) - 1)){
func_2();
iVar0++;
}
Local_63.f_0=4;
}}}


void func_2(){
var uVar0;
struct<14> Var1;
if(MISC::IS_BIT_SET(Local_63.f_10[iLocal_75 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_63.f_10[iLocal_75 /*7*/].f_2, 6)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iLocal_75 /*7*/])){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/]))){
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/]), 0)){
if(!MISC::IS_BIT_SET(Local_63.f_10[iLocal_75 /*7*/].f_2, 6)){
if(bLocal_69==0){
Local_63.f_48++;
if(!MISC::IS_BIT_SET(Local_63.f_2, 12)){
if(NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_63.f_10[iLocal_75 /*7*/], &uVar0)==iLocal_71){
MISC::SET_BIT(&(Local_63.f_2), 12);
}}
if((Local_63.f_42==iLocal_75 && !MISC::IS_BIT_SET(Local_63.f_2, 5)) || Local_63.f_48==func_491(bLocal_69)){
Var1.f_2=-368990008;
Var1.f_10=iLocal_71;
Var1.f_11=iLocal_70;
if(func_491(bLocal_69) > 1){
Var1.f_12=PLAYER::INT_TO_PLAYERINDEX(true);
}else{
Var1.f_12=PLAYER::INT_TO_PLAYERINDEX(false);
}
Var1.f_3=Local_63.f_43;
func_20(Var1, func_21(1));
if(Local_63.f_42==iLocal_75){
MISC::SET_BIT(&(Local_63.f_2), 5);
}}elseif(!MISC::IS_BIT_SET(Local_63.f_2, 5)){
Var1.f_2=-461851137;
Var1.f_11=iLocal_70;
func_20(Var1, func_21(1));
}
}
MISC::SET_BIT(&(Local_63.f_10[iLocal_75 /*7*/].f_2), 6);
}}else{
if(!MISC::IS_BIT_SET(Local_63.f_10[iLocal_75 /*7*/].f_2, 5)){
MISC::SET_BIT(&iLocal_66, 2);
}
MISC::SET_BIT(&iLocal_66, true);
}}}}else{
MISC::SET_BIT(&iLocal_66, true);
MISC::SET_BIT(&iLocal_66, 2);
}
func_3(iLocal_75);
iLocal_75++;
if(iLocal_75 >=func_491(bLocal_69)){
iLocal_75=0;
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(!MISC::IS_BIT_SET(iLocal_66, 1)){
if(!MISC::IS_BIT_SET(Local_63.f_1, 1)){
MISC::SET_BIT(&(Local_63.f_1), true);
}}
if(!MISC::IS_BIT_SET(iLocal_66, 2)){
if(!MISC::IS_BIT_SET(Local_63.f_1, 9)){
MISC::SET_BIT(&(Local_63.f_1), 9);
}}}
MISC::CLEAR_BIT(&iLocal_66, true);
MISC::CLEAR_BIT(&iLocal_66, 2);
}}


void func_3(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/])){
iVar0=NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 9)){
bVar2=false;
switch (Local_63.f_10[iParam0 /*7*/].f_1){
case 0:
if(func_19(iVar0, 3)){
bVar2=true;
}
break;
}
if(bVar2){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
}}
switch (Local_63.f_10[iParam0 /*7*/].f_5){
case 0:
break;
case 1:
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 7)){
if((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0)==2 || (Global_2657589[iLocal_71 /*466*/].f_246 !=-1 && func_18(Global_2657589[iLocal_71 /*466*/].f_246)==4)) || MISC::IS_BIT_SET(Global_1853910[iLocal_71 /*862*/].f_861, 14)) || func_16(iLocal_71, 0)) || func_9(iLocal_71)){
Local_63.f_10[iParam0 /*7*/].f_3=uLocal_74;
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
}}elseif((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) !=2 && Global_2657589[iLocal_71 /*466*/].f_246==-1) && !MISC::IS_BIT_SET(Global_1853910[iLocal_71 /*862*/].f_861, 14)) && !func_16(iLocal_71, 0)) && !func_9(iLocal_71)){
MISC::CLEAR_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
}elseif(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) !=2){
if(!MISC::IS_BIT_SET(Local_63.f_2, 10)){
MISC::SET_BIT(&(Local_63.f_2), 10);
Local_63.f_39={
func_8(iLocal_71) 
};
iVar1=0;
iVar1=0;
while (iVar1 < func_491(bLocal_69)){
func_7(iVar1, 3);
iVar1++;
}}}
if(MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 2)){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 3)){
if(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0)==3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
}}}
}
if(MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
func_7(iParam0, 3);
}
elseif(func_6(iLocal_71, 1, 1)){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 2)){
if(func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1), 625f)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
}}
if(func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::GET_PLAYER_PED(iLocal_71))){
func_7(iParam0, 2);
}
}
break;
case 2:
if(MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
func_7(iParam0, 3);
}
elseif(func_6(iLocal_71, 1, 1)){
if(!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::GET_PLAYER_PED(iLocal_71))){
func_7(iParam0, 1);
}
}
break;
case 3:
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 4)){
if(PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
}}
}
break;
case 4:
break;
}}}}}

int func_4(struct<3> Param0, struct<3> Param1){
struct<3> Var0;
struct<3> Var1;
if(MISC::ABSF((Param1.f_2 - Param0.f_2)) < 2f){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1;
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1;
if(func_5(Var0, Var1, 2f)){
return 1;
}}
return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2){
if(vdist2(Param0, Param1) < fParam2){
return 1;
}
return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2){
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


void func_7(int iParam0, int iParam1){
Local_63.f_10[iParam0 /*7*/].f_5=iParam1;
}


Vector3 func__8(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_9(int iParam0){
int iVar0;
int iVar1;
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(func_14(iParam0, 1)){
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
iVar1=func_11(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
if(PED::IS_PED_IN_VEHICLE(iVar0, iVar1, 0)){
return func_10(iVar1);
}}}}}
return 0;
}

int func_10(int iParam0){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
if(MISC::IS_BIT_SET(iVar0, 17)){
return 1;
}}}
return 0;
}

int func_11(int iParam0){
if(func_14(iParam0, 1)){
return Global_2793046.f_5225.f_226[func_12(iParam0)];
}
return 0;
}

int func_12(int iParam0){
if(iParam0 !=func_13()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_13();
}

int func_13(){
return -1;
}


bool func_14(int iParam0, bool bParam1){
if(!bParam1){
if(func_15(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_13();
}

int func_15(int iParam0){
if(iParam0 !=func_13()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_13()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_16(int iParam0, int iParam1){
int iVar0;
if(func_6(iParam0, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(PED::IS_PED_IN_ANY_VEHICLE(iVar0, iParam1)){
if(func_17(PED::GET_VEHICLE_PED_IS_IN(iVar0, iParam1), 1)){
return 1;
}}}
return 0;
}

int func_17(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}

int func_18(int iParam0){
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

int func_19(int iParam0, bool bParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage")){
if(MISC::IS_BIT_SET(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), bParam1)){
return 1;
}}}
return 0;
}


void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_21(int iParam0){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_6(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, iVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_22(){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(bLocal_69==1){
if(MISC::IS_BIT_SET(Local_63.f_1, 4)){
MISC::SET_BIT(&(Local_63.f_3), 11);
return 1;
}}elseif(MISC::IS_BIT_SET(Local_63.f_1, 1)){
MISC::SET_BIT(&(Local_63.f_3), false);
return 1;
}}elseif(MISC::IS_BIT_SET(Local_63.f_1, 2)){
MISC::SET_BIT(&(Local_63.f_3), true);
MISC::SET_BIT(&Global_1926701, bLocal_69);
return 1;
}
if(MISC::IS_BIT_SET(Local_63.f_3, 12)){
return 1;
}
if(bLocal_69==0){
if(MISC::IS_BIT_SET(Local_63.f_2, 2)){
MISC::SET_BIT(&(Local_63.f_3), 2);
return 1;
}
if(MISC::IS_BIT_SET(Local_63.f_2, 8)){
MISC::SET_BIT(&(Local_63.f_3), 8);
return 1;
}
if(MISC::IS_BIT_SET(Local_63.f_2, 5)){
MISC::SET_BIT(&(Local_63.f_3), 3);
return 1;
}
if(MISC::IS_BIT_SET(Local_63.f_2, 9)){
MISC::SET_BIT(&(Local_63.f_3), 9);
return 1;
}
if(MISC::IS_BIT_SET(Local_63.f_1, 15)){
MISC::SET_BIT(&(Local_63.f_3), 10);
return 1;
}}
if(!func_6(iLocal_71, 0, 1)){
if(bLocal_69 !=0 || !MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::SET_BIT(&(Local_63.f_3), 4);
return 1;
}}else{
if(func_43(iLocal_71, 129)){
MISC::SET_BIT(&(Local_63.f_2), 13);
MISC::SET_BIT(&(Local_63.f_3), 8);
return 1;
}
if(func_43(iLocal_71, 131) || MISC::IS_BIT_SET(Global_1894573[iLocal_71 /*608*/].f_1, 11)){
MISC::SET_BIT(&(Local_63.f_2), 13);
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_43(iLocal_71, 136) || (func_42(PLAYER::PLAYER_ID(), 24) && func_41(iLocal_71))){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_43(iLocal_71, 146)){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_40(PLAYER::PLAYER_ID()) && ((func_39(PLAYER::PLAYER_ID())==148 || func_39(PLAYER::PLAYER_ID())==142) || func_39(PLAYER::PLAYER_ID())==164)){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_39(PLAYER::PLAYER_ID())==153){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID())==170){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_39(PLAYER::PLAYER_ID())==167){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_39(PLAYER::PLAYER_ID())==168){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID())==238){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID())==249){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
switch (func_36(PLAYER::PLAYER_ID())){
case 6:
case 7:
if(func_35()){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
break;
}
if(func_34(iLocal_71)){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_33(iLocal_71)){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(func_39(iLocal_71)==276){
if(func_31(iLocal_71)==3){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}}
if(func_39(iLocal_71)==309){
MISC::SET_BIT(&(Local_63.f_2), 8);
return 1;
}
if(ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_71), 0)){
if(bLocal_69==1){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
MISC::SET_BIT(&(Local_63.f_3), 6);
return 1;
}}}else{
if(bLocal_69==1){
if(func_43(iLocal_71, 146)){
MISC::SET_BIT(&(Local_63.f_3), 7);
return 1;
}
if(!MISC::IS_BIT_SET(Local_63.f_1, 16)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_9) > func_30()){
MISC::SET_BIT(&(Local_63.f_3), 7);
return 1;
}}
if(func_27()){
MISC::SET_BIT(&(Local_63.f_3), 7);
return 1;
}
if(func_23(iLocal_71, func_12(iLocal_70), 1)){
MISC::SET_BIT(&(Local_63.f_3), 7);
return 1;
}}
if(iLocal_72 !=MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_71))){
MISC::SET_BIT(&(Local_63.f_3), 5);
return 1;
}}}
return 0;
}


bool func_23(int iParam0, int iParam1, bool bParam2){
return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3){
if(iParam1 !=func_13() && iParam0 !=func_13()){
if(!bParam2){
if(func_26(iParam0, iParam1, iParam3)){
return 0;
}}
if(Global_1894573[iParam0 /*608*/].f_10 !=func_13()){
if(iParam1==Global_1894573[iParam0 /*608*/].f_10){
return func_25(iParam1, iParam3);
}}}
return 0;
}

int func_25(int iParam0, int iParam1){
if(func_15(iParam0)){
return Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1;
}
return 0;
}

int func_26(int iParam0, int iParam1, int iParam2){
if(iParam1 !=func_13()){
if(iParam0 !=func_13()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_13()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
if(Global_1894573[iParam0 /*608*/].f_10.f_428==iParam2){
return iParam1==iParam0;
}}}}}
return 0;
}

int func_27(){
if(((func_29(iLocal_71, 1, 1) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)){
return 1;
}
return 0;
}


bool func_28(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192 !=0;
}

int func_29(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_13()){
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

int func_30(){
if(Local_63.f_52){
return 300000;
}
return 120000;
}

int func_31(int iParam0){
if(func_32(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_32(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_33(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_34(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return Global_2764907;
}else{
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
return 0;
}else{
return 1;
}}else{
return 0;
}}
return 0;
}


bool func_35(){
return Global_1835493;
}

int func_36(int iParam0){
if(func_39(iParam0)==243){
return func_31(iParam0);
}
return -1;
}

int func_37(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_38(iParam0, 9);
}
return 0;
}


var func__38(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_39(int iParam0){
if(func_32(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_40(int iParam0){
if(func_15(iParam0)){
if(func_37(iParam0)){
return 1;
}}
return 0;
}


var func__41(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 4);
}


var func__42(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_43(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/]==iParam1){
return func_44(iParam0);
}
return 0;
}

int func_44(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}


void func_45(){
func_56();
if(bLocal_69 !=1){
func_2();
}
func_46();
}


void func_46(){
int iVar0;
if(func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_76), 0, 1)){
if(bLocal_69==1){
if(PLAYER::INT_TO_PLAYERINDEX(bLocal_76)==iLocal_71){
if(!MISC::IS_BIT_SET(Local_63.f_1, 16)){
if(MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 3)){
MISC::SET_BIT(&(Local_63.f_1), 16);
}}}}else{
if(!MISC::IS_BIT_SET(Local_63.f_1, 11)){
if(func_52(PLAYER::INT_TO_PLAYERINDEX(bLocal_76))){
if(!MISC::IS_BIT_SET(Local_63.f_4, bLocal_76)){
MISC::SET_BIT(&(Local_63.f_1), 11);
MISC::SET_BIT(&(Local_63.f_4), bLocal_76);
}}elseif(MISC::IS_BIT_SET(Local_63.f_4, bLocal_76)){
MISC::SET_BIT(&(Local_63.f_1), 11);
MISC::CLEAR_BIT(&(Local_63.f_4), bLocal_76);
}}elseif(MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 2)){
MISC::CLEAR_BIT(&(Local_63.f_1), 11);
}
if(bLocal_69==0){
if(MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 0)){
if(Local_65[bLocal_76 /*5*/].f_2 !=-1){
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::SET_BIT(&(Local_63.f_2), true);
Local_63.f_42=Local_65[bLocal_76 /*5*/].f_2;
Local_63.f_43=Local_65[bLocal_76 /*5*/].f_3;
if(!func_51()){
func_50();
}
}}elseif(!MISC::IS_BIT_SET(Local_63.f_2, 9)){
if(!func_51()){
func_49();
}
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
func_7(iVar0, 3);
iVar0++;
}
MISC::SET_BIT(&(Local_63.f_2), 9);
MISC::SET_BIT(&(Local_63.f_2), true);
}}
if(func_51()){
if(!MISC::IS_BIT_SET(iLocal_66, 17)){
if(MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 5)){
func_50();
MISC::SET_BIT(&iLocal_66, 17);
}
elseif(MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 6)){
func_49();
MISC::SET_BIT(&iLocal_66, 17);
}}}
if(!MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 1)){
if(!MISC::IS_BIT_SET(iLocal_66, 3)){
MISC::SET_BIT(&iLocal_66, 3);
}}elseif(PLAYER::INT_TO_PLAYERINDEX(bLocal_76)==iLocal_71){
if(bLocal_69==0){
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
if(!MISC::IS_BIT_SET(Local_63.f_2, 6)){
MISC::SET_BIT(&(Local_63.f_2), 6);
}
}}}}}}
bLocal_76++;
if(bLocal_76 >=32){
bLocal_76=false;
if(bLocal_69==0){
if(!MISC::IS_BIT_SET(iLocal_66, 3)){
func_48();
}else{
func_47();
}
MISC::CLEAR_BIT(&iLocal_66, 3);
}}}


void func_47(){
if(MISC::IS_BIT_SET(Local_63.f_2, 3)){
MISC::CLEAR_BIT(&(Local_63.f_2), 3);
}}


void func_48(){
if(!MISC::IS_BIT_SET(Local_63.f_2, 3)){
Local_63.f_6=uLocal_74;
MISC::SET_BIT(&(Local_63.f_2), 3);
}}


void func_49(){
struct<14> Var0;
Var0.f_2=835963447;
Var0.f_10=iLocal_71;
Var0.f_11=iLocal_70;
func_20(Var0, func_21(1));
}


void func_50(){
struct<14> Var0;
Var0.f_2=244034214;
Var0.f_10=iLocal_71;
Var0.f_11=iLocal_70;
if(func_491(bLocal_69) > 1){
Var0.f_12=PLAYER::INT_TO_PLAYERINDEX(true);
}else{
Var0.f_12=PLAYER::INT_TO_PLAYERINDEX(false);
}
Var0.f_3=Local_63.f_43;
func_20(Var0, func_21(1));
}

int func_51(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_52(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return func_55();
}
return MISC::IS_BIT_SET(Global_1653913.f_241.f_136[func_54(10) /*33*/][iParam0], func_53(10));
}

int func_53(int iParam0){
return (iParam0 % 32);
}

int func_54(int iParam0){
return (iParam0 / 32);
}


var func__55(){
return Global_1574582;
}


void func_56(){
int iVar0;
if(bLocal_69==0){
if(MISC::IS_BIT_SET(Local_63.f_2, 3)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_6) > 10000){
if(MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::SET_BIT(&(Local_63.f_2), 2);
}}}
if(MISC::IS_BIT_SET(Local_63.f_1, 8)){
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
if(func_60()){
MISC::SET_BIT(&(Local_63.f_2), 6);
func_59();
}}}
if(!MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(func_6(iLocal_71, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(iLocal_71);
if(func_58(iVar0)){
func_254(iVar0);
}}}
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
if(!func_6(iLocal_71, 1, 1) || func_28(iLocal_71)){
MISC::SET_BIT(&(Local_63.f_1), 15);
}}}
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(MISC::IS_BIT_SET(Local_63.f_1, 5)){
if(!MISC::IS_BIT_SET(Local_63.f_1, 4)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_5) > 600000){
MISC::SET_BIT(&(Local_63.f_1), 4);
}}}
if(!MISC::IS_BIT_SET(Local_63.f_3, 12)){
if(func_57()){
MISC::SET_BIT(&(Local_63.f_3), 12);
}}}}

int func_57(){
switch (Local_63.f_10[0 /*7*/].f_1){
case 0:
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_800==0){
return 1;
}
break;
case 1:
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_800==1){
return 1;
}
break;
}
return 0;
}

int func_58(int iParam0){
if(PED::IS_PED_INJURED(iParam0)){}
if(MISC::IS_BIT_SET(Local_63.f_1, 17)){
if(!ENTITY::IS_ENTITY_IN_WATER(iParam0)){
return 1;
}}
if(!func_5(Local_63.f_36, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 625f)){
return 1;
}
return 0;
}


void func_59(){
func_519();
Local_63.f_0=0;
}

int func_60(){
if((((((((MISC::IS_BIT_SET(Local_63.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_71)) || func_29(iLocal_71, 1, 1)) || func_62(iLocal_71)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)) || Global_2657589[iLocal_71 /*466*/].f_248) || func_61(PLAYER::GET_PLAYER_PED(iLocal_71), joaat("titan"))){
return 1;
}
if(iLocal_71 !=-1){
if(MISC::IS_BIT_SET(Local_65[iLocal_71 /*5*/].f_1, 4)){
return 1;
}}
return 0;
}

int func_61(int iParam0, int iParam1){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==iParam1){
return 1;
}}}}}
return 0;
}

int func_62(int iParam0){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}


void func_63(){
if(!MISC::IS_BIT_SET(Local_63.f_1, 5)){
Local_63.f_5=uLocal_74;
MISC::SET_BIT(&(Local_63.f_1), 5);
}}


void func_64(){
if(MISC::IS_BIT_SET(Local_63.f_1, 5)){
MISC::CLEAR_BIT(&(Local_63.f_1), 5);
}}

int func_65(){
bool bVar0;
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
return 0;
}else{
bVar0=false;
if(func_256()){
if(bLocal_69==1){
bVar0=true;
}elseif(func_251()){
if(func_248()){
if(func_247()){
bVar0=true;
}elseif(func_245(func_246(bLocal_69))){
if(func_71()){
bVar0=true;
}}}}}
if(bVar0){
func_63();
if(func_66()){
return 1;
}}}
return 0;
}

int func_66(){
int iVar0;
iVar0=0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
return 1;
}else{
switch (bLocal_69){
case 0:
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/]) && !MISC::IS_BIT_SET(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_63.f_10[iVar0 /*7*/].f_2, 6)){
func_67(iVar0, func_70(bLocal_69), Local_63.f_32, Local_63.f_35);
}
iVar0++;
}
break;
}
if(bLocal_69 !=1){
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/])){
if(!MISC::IS_BIT_SET(Local_63.f_10[iVar0 /*7*/].f_2, 6)){
return 0;
}}
iVar0++;
}}
MISC::SET_BIT(&iLocal_66, true);
MISC::SET_BIT(&iLocal_66, 2);
MISC::SET_BIT(&iLocal_66, 3);
MISC::SET_BIT(&iLocal_66, 4);
MISC::SET_BIT(&(Local_63.f_1), false);
MISC::SET_BIT(&Global_1926702, bLocal_69);
return 1;
}}
return 0;
}


void func_67(int iParam0, var uParam1, struct<3> Param2, var uParam3){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/])){
if(NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
if(func_245(func_246(bLocal_69))){
if(func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_246(bLocal_69), Param2, uParam3, 1, 1, 1)){
Local_63.f_10[iParam0 /*7*/].f_1=bLocal_69;
Local_63.f_10[iParam0 /*7*/].f_4=uParam1;
func_68(iParam0);
}}}}}}}


void func_68(int iParam0){
char cVar0[16];
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 1)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0)){
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), Global_1837210);
TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1);
TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
}
ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 13, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 41, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 20, 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 132, 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 118, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 311, 1);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1);
StringCopy(&cVar0, "gang ", 16);
StringIntConCat(&cVar0, iParam0, 16);
PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), &cVar0);
switch (Local_63.f_10[iParam0 /*7*/].f_4){
case 0:
func_7(iParam0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, 0);
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0, -1, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 32, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 4, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1024, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 128, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 32, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 8, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 64, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 256, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 16, 1);
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 0)){
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
}
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 512, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, 0);
WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_71), -1, 0, 2);
NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_63.f_10[iParam0 /*7*/], 1);
break;
}
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), round((Global_262145.f_165 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]))))), 0);
if(!MISC::IS_BIT_SET(Local_63.f_1, 8)){
MISC::SET_BIT(&(Local_63.f_1), 8);
}
MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
}}}

int func_69(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
var uVar0;
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
uVar0=PED::CREATE_PED(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
*uParam0=NETWORK::PED_TO_NET(uVar0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar0, iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0)){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_70(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
}
return 0;
}

int func_71(){
struct<6> Var0;
if(MISC::IS_BIT_SET(Local_63.f_1, 3)){
return 1;
}else{
switch (bLocal_69){
case 0:
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_71) && func_6(iLocal_71, 1, 1)){
Var0.f_5=1115815936;
Var0.f_13=2;
Var0.f_20=2;
Var0.f_32=-1082130432;
Var0.f_34=1;
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1) 
};
Var0.f_5=20f;
if(func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0)){
MISC::SET_BIT(&(Local_63.f_1), 3);
return 1;
}}else{
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
if(Global_2635559.f_2472){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
Global_2635559.f_2472=0;
}}
break;
}}
return 0;
}

int func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4){
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
if(func_73(&Var1, uParam4, &Var0)){
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

int func_73(var uParam0, var uParam1, var uParam2){
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
if(((!Global_2635559.f_2466==*uParam0 || !Global_2635559.f_2466.f_1==uParam0->f_1) || !Global_2635559.f_2466.f_2==uParam0->f_2) || !Global_2635559.f_2469==uParam0->f_4){
bVar13=true;
}
break;
case 1:
if(((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2){
bVar13=true;
}
break;
case 2:
if((((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2) || !Global_2635559.f_2486==uParam0->f_14){
bVar13=true;
}
break;
}
if(Global_1574477){
if(!Global_2635559.f_2487==uParam0->f_7){
bVar13=true;
}
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473) && !Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
bVar13=true;
}}
if(bVar13){
if(Global_2635559.f_2464==1){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473)){
if(Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_244(0)){
return 0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_244(0)){
return 0;
}}
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_243();
}
Global_2635559.f_2464=0;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) > func_244(0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
func_237();
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
if(!Global_2635559.f_2464){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_243();
if(uParam1->f_7 && uParam0->f_7==0){
if(vmag(*uParam0) > 0f){
if(func_236(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
return 1;
}}}
if(!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
Global_2635559.f_2487=uParam0->f_7;
switch (uParam0->f_7){
case 0:
Global_2635559.f_2466={
*uParam0 
};
Global_2635559.f_2469=uParam0->f_4;
break;
case 1:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=0f;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
case 2:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=uParam0->f_14;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
if(!uParam1->f_8 && !uParam1->f_9){
func_235(Var6.f_0, Var6.f_1);
}
Global_2635559.f_2465=1;
Global_2635559.f_2464=1;
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2473=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
return 0;
}}
if(Global_2635559.f_2464){
if(Global_2635559.f_2465==1){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 5000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
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
if(func_234(Global_4718592.f_166301)){
Var14.f_9=1;
}
Var14.f_60=uParam0->f_30;
func_207(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
if((uParam1->f_7 && uParam1->f_9) && uParam0->f_7==0){
if(!func_206(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
}}
Global_2635559.f_2465=9;
}else{
Global_2635559.f_2465=2;
}}}
if(Global_2635559.f_2465==2){
if((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8)==0){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(uParam0->f_5 && !func_203(PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_2465=3;
}else{
Global_2635559.f_2465=4;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2475) > 7000){
func_202(Var6.f_0, Var6.f_1);
}}
if(Global_2635559.f_2465==3){
if(func_201() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 10000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=4;
}}
if(Global_2635559.f_2465==4){
if(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
}else{
iVar0=0;
func_237();
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
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 1:
func_200(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, uVar12, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 2:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
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
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_200(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}}}
if(Global_2635559.f_2465==5){
if(func_126(uParam2, uParam0, uParam1, 0)){
if(Global_2635559.f_2491.f_5){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=6;
}else{
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!uParam0->f_5){
if(!vmag(*uParam1)==0f){
Var1={
*uParam1 - *(uParam2[0 /*3*/]) 
};
uParam2->f_16[0]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}}
Global_2635559.f_2465=9;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==6){
iVar0=0;
Global_2635559.f_2491.f_1=0;
if(uParam1->f_3){
iVar0++;
}elseif(uParam0->f_7==0){
if(!func_125(uParam0->f_4)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6))){
iVar0++;
}}}elseif(!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14)){
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
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=7;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_200(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}
if(Global_2635559.f_2465==7){
if(func_126(uParam2, uParam0, uParam1, 1)){
if(vmag(*(uParam2[0 /*3*/]))==0f){
iVar9=0;
while (iVar9 < 3){
if(vmag(*(uParam2[0 /*3*/]))==0f){
if(!vmag(Global_2635559.f_2625[iVar9 /*3*/])==0f){
switch (uParam0->f_7){
case 0:
if(func_206(Global_2635559.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
};
}
break;
case 1:
if(func_122(Global_2635559.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
};
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635559.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
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
func_76(&Var1, 0, 1, 1, 0, uParam0, uParam1);
*(uParam2[0 /*3*/])={
Var1 
};
}}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!vmag(*uParam1)==0f){
iVar9=0;
while (iVar9 < 5){
Var1={
*uParam1 - *(uParam2[iVar9 /*3*/]) 
};
uParam2->f_16[iVar9]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
iVar9++;
}}
Global_2635559.f_2465=9;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==8){
if(uParam0->f_5){
if(func_75(Global_2635559.f_489)){
}}elseif(Global_2635559.f_2491.f_2){
func_74(uParam2, &(Global_2635559.f_2491.f_6));
}else{
if(uParam0->f_15){
bVar15=false;
}else{
bVar15=true;
}
*(uParam2[0 /*3*/])={
Global_2635559.f_2466 
};
func_76(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=9;
}
if(Global_2635559.f_2465==9){
Global_2635559.f_2464=0;
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_243();
return 1;
}
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
}
return 0;
}


void func_74(var uParam0, var uParam1){
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

int func_75(int iParam0){
if(iParam0==3 || iParam0==26){
return 1;
}
return 0;
}


void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6){
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
if(func_125(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 1:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_124(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 2:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
}}}else{
iVar6 +=4;
}}
if(func_90(*uParam0, &Var0, iVar6, iParam3, 1)){}else{
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
if(func_88(PLAYER::PLAYER_ID(), 0)){
Var2.f_9=1;
}
Var2.f_60=uParam5->f_30;
func_207(&Var0, &uVar1, &Var2);
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
if(!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10)){
if(func_90(*uParam0, &Var0, iVar6, iParam3, 0)){
if(!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10)){
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
}}}elseif(func_77(uParam0, 1, 1, 1, 1)){
func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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
Global_2635559.f_667=1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_86(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640505[iVar0 /*17*/].f_12){
*uParam0={
Global_2640505[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_78(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_77(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_78(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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


void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}


void func_79(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
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
func_81(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_80(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_80(Var2, Var1) >=0f){
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
func_81(0f, 0f, 1f, Var0) 
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
func_81(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_80(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_80(Var2, Var11) >=0f){
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


float func_80(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__81(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_82(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
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


void func_83(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
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
func_84(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_84(&Var0, 0f, 0f, fParam5);
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


void func_84(var uParam0, struct<3> Param1){
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


Vector3 func__85(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_83(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_82(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_79(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_206(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_122(Var1, Param1, Param2, 0, 0)){
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

int func_86(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_206(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_122(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_87(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4){
switch (iParam1){
case 0:
if(vdist(Param0, Param2) <=fParam4){
return 1;
}
break;
case 1:
return func_122(Param0, Param2, Param3, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param2, Param3, fParam4, 0, 1);
break;
}
return 0;
}

int func_88(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_13()){
if(func_6(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_13()){
return func_89(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_89(int iParam0){
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

int func_90(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4){
if(func_121(Param0, uParam1)){
if(func_91(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
if(PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam1, iParam2)){
if(func_91(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
return 0;
}

int func_91(struct<3> Param0, var uParam1, int iParam2, bool bParam3){
float fVar0;
var uVar1;
var uVar2;
fVar0=vdist(Param0, *uParam1);
if(fVar0 < 40f){
uVar1=2;
uVar2=2;
if((iParam2==1 && !func_107(Global_2635559.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2==0){
if(!func_95(*uParam1, 1056964608)){
if(!func_92(uParam1, 0)){
return 1;
}}}}
return 0;
}

int func_92(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
*uParam0 
};
iVar2=func_94(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar2]){
if(func_93(Var1, &(Global_2640710[iVar2 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_79(&Var1, Global_2640710[iVar2 /*155*/][iVar0 /*7*/], Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_93(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_79(&Var1, Global_2640710[8 /*155*/][iVar0 /*7*/], Global_2640710[8 /*155*/][iVar0 /*7*/].f_3, Global_2640710[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
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


bool func_93(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_94(struct<2> Param0, var uParam1){
if(Param0.f_1 > Global_2642117[0]){
return 0;
}
if(Param0.f_1 > Global_2642117[1]){
if(Param0.f_0 < Global_2642121[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642117[2]){
if(Param0.f_0 < Global_2642121[1]){
return 3;
}elseif(Param0.f_0 < Global_2642121[2]){
return 4;
}elseif(Param0.f_0 < Global_2642121[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_95(struct<3> Param0, float fParam1){
int iVar0;
if(func_104(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_96(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_96(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_96(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_96(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_96(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}

int func_96(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_103(iParam3, 1008981770)){
func_97(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_97(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_84(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_98(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
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


void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_101(iParam0);
if(iVar0 !=0){
func_99(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_99(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_100(iParam0, &Global_1577994);
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


void func_100(int iParam0, var uParam1){
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

int func_101(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_102(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_102(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


float func_103(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_98(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_104(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_105(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_105(int iParam0){
return func_106(iParam0);
}


var func__106(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_107(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_114(Param0)){
if(func_77(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_109(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_108(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_83(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_108(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(vdist(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam1){
return 1;
}
iVar0++;
}
return 0;
}

int func_109(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_111(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_78(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_111(Var2, &uVar1) || func_110(Var2)){
Var2={
*uParam0 
};
func_78(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}

int func_110(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}

int func_111(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_113()){
return 0;
}
iVar1=func_112();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_86(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_112(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635559.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_113(){
return Global_1950108.f_528;
}

int func_114(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_118(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_117(Param0, 1008981770)){
if(!func_77(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_77(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_116(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_115(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_77(&Var1, 0, 0, 0, 1)){
if(!func_77(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__115(var uParam0){
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

int func_116(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_86(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_117(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_86(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_118(int iParam0, bool bParam1){
if(func_120() !=0){
return func_119(iParam0) !=0;
}
return func_104(iParam0, bParam1, 0);
}

int func_119(int iParam0){
if(func_6(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_120(){
return Global_32163;
}

int func_121(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
iVar1=-1;
fVar2=999999.9f;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
fVar3=vdist(Global_2635559.f_2263[iVar0 /*4*/], Param0);
if(fVar3 < fVar2){
iVar1=iVar0;
fVar2=fVar3;
}
iVar0++;
}
if(!iVar1==-1){
*uParam1={
Global_2635559.f_2263[iVar1 /*4*/] 
};
return 1;
}}
return 0;
}

int func_122(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_123(&Param1, &Param2);
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


void func_123(var uParam0, var uParam1){
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

int func_124(struct<3> Param0, struct<3> Param1, float fParam2){
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

int func_125(float fParam0){
if(fParam0 > 50f){
return 1;
}
return 0;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
if(Global_2635559.f_2491.f_1==0 && Global_2635559.f_2491==0){
if(uParam1->f_5 && !bParam3){
switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635559.f_2491.f_1))){
case 0:
func_198(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
if(uParam2->f_7 && Global_2635559.f_555.f_7==0){
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
Global_2635559.f_2466 
};
}
if(uParam1->f_5 && func_75(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 1;
}}
break;
case 1:
func_198(uParam1, uParam2);
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
func_198(uParam1, uParam2);
Global_2635559.f_2491.f_1=PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
}else{
return 0;
}}else{
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_198(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
Global_2635559.f_2491.f_5=1;
return 1;
}}}else{
return 0;
}}
if(uParam1->f_5){
func_195(Global_2635559.f_555, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90));
}
if(uParam2->f_7 && !Global_2635559.f_2491.f_4){
Global_2635559.f_2491.f_4=1;
func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
}
iVar4=0;
if(uParam1->f_5){
iVar5=64;
}else{
iVar5=32;
}
if(Global_2635559.f_2491.f_1 > 0 || Global_2635559.f_2491 > 0){
if(uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
iVar2=0;
while (iVar2 < Global_2635559.f_2491.f_1){
if(iVar4 < iVar5){
if(iVar2 <=Global_2635559.f_2491.f_3){
iVar2=Global_2635559.f_2491.f_3 + 1;
}
if(iVar2 > (Global_2635559.f_2491.f_1 - 1)){
iVar2=(Global_2635559.f_2491.f_1 - 1);
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
func_134(Var0, fVar1, uParam1, uParam2, 0, iVar3);
iVar4++;
Global_2635559.f_2491.f_3=iVar2;
}else{
return 0;
}
iVar2++;
}}else{
iVar2=Global_2635559.f_2491.f_1;
}
if(Global_2635559.f_2491.f_1==iVar2){
if(uParam1->f_5 && Global_2635559.f_2889){
func_128(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}
if(uParam1->f_5 && func_75(Global_2635559.f_489)){
if(Global_2635559.f_2491.f_2){
func_74(uParam0, &(Global_2635559.f_2491.f_6));
func_127(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_127(*(uParam0[0 /*3*/]));
return 1;
}}elseif(Global_2635559.f_2491.f_2){
func_74(uParam0, &(Global_2635559.f_2491.f_6));
func_127(*(uParam0[0 /*3*/]));
return 1;
}elseif(uParam1->f_5){
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_2491.f_1);
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
if(!func_92(uParam0[0 /*3*/], 0)){
uParam0->f_16[0]=(uParam0->f_16[0] * 57.29578f);
func_127(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_127(*(uParam0[0 /*3*/]));
return 1;
}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_127(*(uParam0[0 /*3*/]));
return 1;
}}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
if(uParam1->f_5 && func_75(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
if(uParam1->f_15){
bVar6=false;
}else{
bVar6=true;
}
func_76(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_127(*(uParam0[0 /*3*/]));
return 1;
}
return 0;
}


void func_127(struct<3> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(iVar0 > 0){
Global_2635559.f_2625[(3 - iVar0) /*3*/]={
Global_2635559.f_2625[(3 - iVar0 + 1) /*3*/] 
};
}
iVar0++;
}
Global_2635559.f_2625[0 /*3*/]={
Param0 
};
}


void func_128(var uParam0, var uParam1, var uParam2){
if(func_75(Global_2635559.f_489) && func_133() < 4096){
func_132(uParam0, 0f);
func_132(uParam1, uParam0->f_2);
func_132(uParam2, uParam1->f_2);
}else{
func_131(uParam0);
func_130(uParam2, uParam0->f_4);
func_129(uParam1, uParam0->f_4, uParam2->f_4);
}}


void func_129(var uParam0, struct<3> Param1, struct<3> Param2){
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
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar3=vdist(Global_2638502[iVar0 /*10*/].f_4, Param2);
fVar4=(fVar2 + fVar3);
fVar4=(fVar4 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar4 > fVar1){
fVar1=fVar4;
Var5={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var5 
};
}


void func_130(var uParam0, struct<3> Param1){
int iVar0;
float fVar1;
float fVar2;
struct<10> Var3;
fVar1=-1f;
Var3.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar2=(fVar2 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar2 > fVar1){
fVar1=fVar2;
Var3={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var3 
};
}


void func_131(var uParam0){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=-1f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 > fVar1){
fVar1=Global_2638502[iVar0 /*10*/].f_1;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}


void func_132(var uParam0, float fParam1){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=999999.9f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_2 < fVar1 && Global_2638502[iVar0 /*10*/].f_2 > fParam1){
fVar1=Global_2638502[iVar0 /*10*/].f_2;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}

int func_133(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > iVar1){
iVar1=Global_2638502[iVar0 /*10*/];
}
iVar0++;
}
return iVar1;
}


void func_134(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5){
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
if(Global_2635559.f_489==1){
if(MISC::ABSF((Global_2635559.f_512.f_2 - Param0.f_2)) < 25f){
iVar8++;
}}else{
iVar8++;
}}else{
iVar8++;
}
if(uParam2->f_5){
if(func_192(PLAYER::PLAYER_ID())){
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
if(!func_191(Param0, 1084227584, 1123024896, 0)){
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
if(!func_190(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0)){
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
if(func_184(Param0, fParam1, uParam2->f_15, func_189(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0)){
iVar8 +=64;
iVar8 +=128;
}else{
iVar10=Global_2635559.f_3;
}}elseif(!func_181(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1)){
if(uParam2->f_15){
fVar1=3.5f;
}else{
fVar1=1f;
}
if(!func_177(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1)){
iVar8 +=128;
iVar8 +=64;
}elseif(!func_177(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1)){
iVar8 +=64;
}}
if(uParam2->f_5){
if(!Global_2635559.f_701){
Var12={
Global_2635559.f_512 
};
if(Global_2635559.f_489==26){
Var12={
Global_2635559.f_555.f_18 
};
}
if(!func_108(Param0, 0.5f)){
if(func_114(Var12)){
if(!func_77(&Param0, 0, 0, 0, 1) && !func_176(&Param0, 0)){
iVar8 +=512;
}}elseif(!func_176(&Param0, 0)){
iVar8 +=512;
}}}else{
iVar8 +=512;
}}elseif(!func_175(Param0, 2.5f, 3)){
iVar8 +=512;
}
if(uParam2->f_5){
if(!(func_174(PLAYER::PLAYER_ID()) && func_173(PLAYER::PLAYER_ID()))){
if(!func_172(&Param0, &(Global_2635559.f_2491.f_90), 0, 1065353216)){
iVar8 +=1024;
}}else{
iVar8 +=1024;
}}else{
iVar8 +=1024;
}
if(uParam2->f_5){
if(!func_173(PLAYER::PLAYER_ID())){
if(!func_171(Param0, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90), 1073741824)){
iVar8 +=2048;
}}else{
iVar8 +=2048;
}}else{
iVar8 +=2048;
}
if(func_170(Param0)){
if(uParam2->f_5){
if(func_75(Global_2635559.f_489)){
if(func_117(Param0, 0.01f)){
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}
if(uParam2->f_5){
if(func_169(Param0)){
iVar8 +=8192;
}}else{
iVar8 +=8192;
}
if(!Global_2635559.f_45.f_55){
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
if(!Global_2635559.f_701){
if(!func_109(&Param0, 0, 0)){
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}
if(!func_92(&Param0, 0)){
iVar8=(iVar8 + 65536);
}else{
iVar14=func_116(Param0, 1008981770);
if(iVar14 > -1){
func_168(Param0, &Var15, &Var16, &fVar17);
if(!func_163(&(Global_2635559.f_45[iVar14 /*12*/]), Var15, Var16, fVar17)){
iVar8=-1;
}}else{
iVar8=-1;
}}
if(func_95(Param0, 1056964608)){
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
if(uParam2->f_5){}elseif(func_162(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888)){
iVar8=0;
}
Var19.f_2=1176256410;
bVar20=false;
bVar21=false;
if(Global_2635559.f_2889 && uParam2->f_5){
if(iVar8 > 0){
if(bParam4){
uParam3->f_4=0;
bVar4=false;
}else{
bVar4=true;
}
if(uParam2->f_21){
fVar0=func_153(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}else{
fVar0=func_153(Param0, Global_2635559.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
if(func_75(Global_2635559.f_489) && iVar8 < 4096){
Var19.f_2=func_151(Param0);
}
uVar7=func_140(Param0, 1, 0, 0, 0, 0);
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_9=uVar7;
func_139(Var19);
Global_2635559.f_2491.f_2=1;
}}else{
iVar18=0;
while (iVar18 < 5){
if(iVar8 >=Global_2635559.f_2491.f_6[iVar18 /*10*/]){
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
fVar0=func_153(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
else{
fVar0=func_153(Param0, Global_2635559.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
bVar20=true;
}
if((func_75(Global_2635559.f_489) && iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096){
if(!bVar21){
fVar2=func_151(Param0);
bVar21=true;
}
if(fVar2 < Global_2635559.f_2491.f_6[iVar18 /*10*/].f_2){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_2=fVar2;
func_138(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}elseif(iVar8 > Global_2635559.f_2491.f_6[iVar18 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2635559.f_2491.f_6[iVar18 /*10*/].f_1)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
func_138(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}else{
if(!bVar20){
if(uParam2->f_15){
fVar1=3.5f;
}
else{
fVar1=1f;
}
fVar5=func_136(Param0, fVar1, 1, 1, 0, -1, 1);
fVar6=func_140(Param0, 1, 1, 1, 1, 0);
if(fVar5 > 15f && fVar6 > 5f){
fVar3=func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
}
else{
fVar3=func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
}
bVar20=true;
}
if(iVar8 > Global_2635559.f_2491.f_6[iVar18 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2635559.f_2491.f_6[iVar18 /*10*/].f_3)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_3=fVar3;
func_138(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}}
iVar18++;
}}}


float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
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


float func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
int iVar0;
int iVar1;
bool bVar2;
float fVar3;
float fVar4;
bVar2=false;
fVar3=1E+13f;
if(iParam2 && !bParam4){
if(func_6(PLAYER::PLAYER_ID(), 1, 1)){
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
if(func_6(iVar1, 1, 1)){
if(!func_203(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if(func_137(iVar1) || !bParam6){
if(!bParam4){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
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

int func_137(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657589[iParam0 /*466*/].f_255){
return 1;
}
return 0;
}


void func_138(struct<10> Param0, int iParam1){
struct<10> Var0;
Var0.f_2=1176256410;
Var0={
Global_2635559.f_2491.f_6[iParam1 /*10*/] 
};
Global_2635559.f_2491.f_6[iParam1 /*10*/]={
Param0 
};
if(iParam1 < 4){
func_138(Var0, iParam1 + 1);
}}


void func_139(struct<10> Param0){
int iVar0;
struct<10> Var1;
int iVar2;
float fVar3;
int iVar4;
Var1.f_2=1176256410;
iVar2=func_133();
if(Param0.f_0 > iVar2){
iVar2=Param0.f_0;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] < iVar2){
Global_2638502[iVar0 /*10*/]={
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
if(Global_2638502[iVar0 /*10*/]==0){
Global_2638502[iVar0 /*10*/]={
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
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 < fVar3){
fVar3=Global_2638502[iVar0 /*10*/].f_1;
iVar4=iVar0;
}}
iVar0++;
}
if(iVar4 > -1){
Global_2638502[iVar4 /*10*/]={
Param0 
};
}}


float func_140(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5){
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
if(func_6(iVar7, 1, 1) || (iParam5==1 && func_6(iVar7, 0, 0))){
if(!iVar7==PLAYER::PLAYER_ID() || iParam3==1){
bVar4=false;
if(bParam1){
if(func_141(iVar7)){
bVar4=true;
}}
if(bParam2){
if(PLAYER::GET_PLAYER_TEAM(iVar7)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(!PLAYER::GET_PLAYER_TEAM(iVar7)==-1 || !func_118(PLAYER::PLAYER_ID(), 1)){
bVar4=true;
}}}
if(bVar4){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar7) || !bParam4){
if(func_137(iVar7)){
Var5={
func_8(iVar7) 
};
if(!iVar7==PLAYER::PLAYER_ID()){
Var6={
NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(iVar7)) 
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

int func_141(int iParam0){
if(func_6(iParam0, 0, 1)){
if(!func_149(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_104(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_146(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_104(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_142(iParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_142(int iParam0){
if(func_145(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764203={
func_144(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_143(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_143(int iParam0, int iParam1){
int iVar0;
iVar0=func_12(iParam0);
if(!iVar0==func_13()){
if(iVar0==func_12(iParam1)){
return 1;
}}
return 0;
}
struct<13> func_144(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_145(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_144(iParam0) 
};
Global_2764216={
func_144(iParam1) 
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

int func_146(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0)){
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

int func_147(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_6(iVar1, 1, 1) || func_203(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_148(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(iVar1);
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


var func__148(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_149(int iParam0){
if(func_203(iParam0, 0)){
return 1;
}
if(func_150()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_150(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


float func_151(struct<3> Param0){
var uVar0;
return func_152(Param0, &(Global_2635559.f_45), &uVar0);
}


float func_152(struct<3> Param0, var uParam1, var uParam2){
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
fVar1=(fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635559.f_2735) * (uParam1[iVar0 /*12*/])->f_8)));
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


float func_153(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6){
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
fVar0=func_135(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
}
*uParam6=1E+07f;
fVar4=func_140(Param0, 1, 0, 0, 1, 0);
fVar0=func_135(fVar4, 0f, func_161(), func_159(), 0f, 0.3f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar4=func_157(Param0);
fVar0=func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar5=100f;
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !func_118(PLAYER::PLAYER_ID(), 1)){
fVar5=1f;
}
fVar4=func_155(Param0, PLAYER::PLAYER_ID(), 0);
fVar0=func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
if(bParam3){
if(func_154(Param0, &fVar2, &fVar3)){
if(fVar2 < 10f){
fVar2=10f;
}
if(fVar3 < 0.5f){
fVar3=0.5f;
}
fVar0=func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
fVar0=(fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
fVar0=(fVar0 * 0.5f);
fVar1=(fVar1 * (fVar0 * 0.85f));
}}
if(bParam4){
fVar0=func_135(vdist(Global_2635559.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.9f));
}
return fVar1;
}

int func_154(struct<3> Param0, var uParam1, var uParam2){
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


float func_155(struct<3> Param0, int iParam1, int iParam2){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=999999.9f;
if(func_6(iParam1, 0, 1)){
iVar2=0;
while (iVar2 < 32){
if(!iParam1==iVar2 || iParam2==1){
iVar3=iVar2;
if(func_6(iVar3, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar3) !=PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1)){
if(!func_156(iVar3, iParam1)){
if(Global_2648605.f_261[iVar2]){
fVar1=vdist(Global_2648605.f_131[iVar2 /*3*/], Param0);
if(fVar1 < fVar0){
fVar0=fVar1;
}}
}}}}
iVar2++;
}}
return fVar0;
}

int func_156(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=func_13() && iParam1 !=func_13()){
iVar0=func_12(iParam0);
if(iVar0 !=func_13()){
return iVar0==func_12(iParam1);
}}
return 0;
}


float func_157(struct<3> Param0){
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
if(func_158(uVar4[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}}}}
iVar2++;
}
if(Global_2635559.f_2934){
if(Global_1058070.f_267 > 0){
iVar2=0;
while (iVar2 < Global_1058070.f_267){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_152[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1058070.f_152[iVar2], 0)){
if(func_158(Global_1058070.f_152[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(Global_1058070.f_152[iVar2], 1) 
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

int func_158(var uParam0){
var uVar0;
int iVar1;
uVar0=PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, joaat("player"))){
case 3:
case 5:
return 1;
break;
}
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837175[PLAYER::PLAYER_ID()])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1837175[PLAYER::PLAYER_ID()])){
case 3:
case 5:
return 1;
break;
}}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0){
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(iVar1 > -1 && iVar1 < 4){
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836885[iVar1])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1836885[iVar1])){
case 3:
case 5:
return 1;
break;
}}}}
return 0;
}


float func_159(){
if(func_160()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 640f;
}else{
return 320f;
}}
return 160f;
}

int func_160(){
if(Global_2635559.f_45.f_65 && !Global_2635559.f_45.f_304){
if(!func_149(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


float func_161(){
if(func_160()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 320f;
}else{
return 160f;
}}
return 80f;
}

int func_162(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7){
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

int func_163(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3){
switch (uParam0->f_10){
case 0:
if(func_167(*uParam0, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
case 1:
if(func_166(*uParam0, uParam0->f_3, Param1, Param2, fParam3)){
return 1;
}
break;
case 2:
if(func_164(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
}
return 0;
}

int func_164(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5){
struct<3> Var0[8];
int iVar1;
func_165(Param0, Param1, fParam2, &Var0);
iVar1=0;
while (iVar1 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}


void func_165(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3){
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
func_81(Var0, Var0.f_0, Var0.f_1, 0f) 
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

int func_166(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4){
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

int func_167(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4){
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


void func_168(struct<3> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
Param0 
};
iVar2=func_94(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar2]){
if(func_93(Var1, &(Global_2640710[iVar2 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640710[iVar2 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_93(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640710[8 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640710[8 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640710[8 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}}

int func_169(struct<3> Param0){
var uVar0;
int iVar1;
if(Global_2635559.f_45.f_55){
if(INTERIOR::IS_VALID_INTERIOR(Global_2635559.f_45.f_56)){
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
uVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
iVar1=INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
if(!iVar1==Global_2635559.f_45.f_57){
return 0;
}}else{
return 0;
}}else{
return 0;
}}}
return 1;
}

int func_170(struct<3> Param0){
switch (Global_2635559.f_2487){
case 0:
return func_206(Param0, Global_2635559.f_2466, Global_2635559.f_2469, 0, 0);
break;
case 1:
return func_122(Param0, Global_2635559.f_2480, Global_2635559.f_2483, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635559.f_2480, Global_2635559.f_2483, Global_2635559.f_2486, 0, 1);
break;
}
return 0;
}

int func_171(struct<3> Param0, var uParam1, var uParam2, float fParam3){
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

int func_172(var uParam0, var uParam1, bool bParam2, float fParam3){
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
func_83(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
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

int func_173(int iParam0){
switch (func_120()){
case 0:
if(!func_28(iParam0)){
if(Global_1853910[iParam0 /*862*/]==0){
return 1;
}}
break;
}
return 0;
}

int func_174(int iParam0){
if(func_104(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_175(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < iParam2){
if(vdist2(Global_2635559.f_2625[iVar0 /*3*/], Param0) < (fParam1 * fParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_176(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_110(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_83(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_111(Var1, &uVar0) || func_110(Var1)){
Var1={
*uParam0 
};
func_83(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_177(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_6(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_178(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_6(iVar1, 1, 1)){
if(!func_203(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_137(iVar1) || !bParam8) && !Global_2657589[iVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_178(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_178(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__178(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_180() && Global_1853910[iVar0 /*862*/].f_832) && !func_179(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_8(iParam0);
}

int func_179(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__180(){
return Global_2683864.f_19;
}

int func_181(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
if(func_183(Param0, fParam1, iParam2, iParam3, 0) || func_182(Param0, iParam2, iParam4)){
return 1;
}
return 0;
}

int func_182(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam1==iVar0 || iParam2==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_96(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1)){
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

int func_183(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam2==iVar0 || iParam3==1){
iVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_8(iVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_6(iVar1, 0, 1)){
if(vdist(func_8(iVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_184(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13){
Global_2635559.f_3=0;
if(!func_181(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0)){
Global_2635559.f_3++;
if(bParam3){
if(func_236(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_188(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_95(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(!bParam2){
if(func_236(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_188(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_185(Param0, fParam1, fParam7, fParam8, 1084227584)){
Global_2635559.f_3++;
if(!func_95(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(func_236(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_188(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_185(Param0, fParam1, fParam7, fParam8, fParam9)){
Global_2635559.f_3++;
if(!func_95(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}
return 0;
}

int func_185(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(!PLAYER::PLAYER_ID()==iVar1){
if((func_6(iVar1, 1, 1) && func_137(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!func_187(PLAYER::PLAYER_ID(), iVar1, -2, 0)){
if(func_186(func_8(iVar1), Param0, fParam1, fParam2, fParam3, fParam4)){
return 1;
}}}}
iVar0++;
}
return 0;
}


bool func_186(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5){
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


bool func_187(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(iParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}

int func_188(struct<3> Param0, float fParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((func_6(iVar1, 1, 1) && func_137(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && PLAYER::GET_PLAYER_TEAM(iVar1)==-1) && !func_118(PLAYER::PLAYER_ID(), 1)){
return 0;
}elseif((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !PLAYER::PLAYER_ID()==iVar1) || !func_187(PLAYER::PLAYER_ID(), iVar1, -2, 0)){
if(vdist(Param0, func_8(iVar1)) < fParam1){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_189(int iParam0){
if((Global_2635559.f_489==9 || Global_2635559.f_489==9) || (Global_2635559.f_489==15 && iParam0==1)){
return 1;
}
return 0;
}

int func_190(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_6(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_137(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_142(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_191(struct<3> Param0, float fParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
iVar3=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(!iVar3==-1){
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_6(iVar1, 1, 1)){
if((!func_203(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && iVar1 !=PLAYER::PLAYER_ID()){
fVar2=iParam2;
if(fParam3 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam3;
}
}}
if(PLAYER::GET_PLAYER_TEAM(iVar1)==iVar3){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}
}}}}
iVar0++;
}}
return 0;
}

int func_192(int iParam0){
if(((func_118(iParam0, 1) || func_194(iParam0)) || func_32(iParam0, 0)) || func_193(iParam0)){
return 1;
}
return 0;
}

int func_193(int iParam0){
if(!func_6(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_194(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


void func_195(struct<3> Param0, var uParam1, var uParam2){
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
if(!MISC::IS_BIT_SET(Global_4543624[iVar1 /*26*/].f_12, 11)){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_4543624[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_4543624[iVar1 /*26*/].f_3 
};
Var3.f_3=Global_4543624[iVar1 /*26*/].f_6.f_2;
func_197(&Var3, uParam1, iVar0);
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
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6293[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6293[iVar1 /*3*/] 
};
Var3.f_3=3f;
func_197(&Var3, uParam1, iVar0);
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
while (iVar1 < 19){
iVar2=0;
while (iVar2 < 6){
iVar0=0;
while (iVar0 < *uParam1){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/] 
};
Var3.f_3=3f;
func_197(&Var3, uParam1, iVar0);
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
Global_4543300[iVar1 /*3*/] 
};
func_196(&Var4, uParam2, iVar0);
iVar0=*uParam2;
}
iVar0++;
}
iVar1++;
}}


void func_196(var uParam0, var uParam1, int iParam2){
Global_2643112={
*(uParam1[iParam2 /*10*/]) 
};
*(uParam1[iParam2 /*10*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_196(&Global_2643112, uParam1, iParam2 + 1);
}}


void func_197(var uParam0, var uParam1, int iParam2){
Global_2643108={
*(uParam1[iParam2 /*4*/]) 
};
*(uParam1[iParam2 /*4*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_197(&Global_2643108, uParam1, iParam2 + 1);
}}


void func_198(var uParam0, var uParam1){
int iVar0;
struct<3> Var1;
float fVar2;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
if(func_199(Global_2635559.f_2263[iVar0 /*4*/], uParam0)){
fVar2=Global_2635559.f_2263[iVar0 /*4*/].f_3;
if(vmag(*uParam1) > 0.01f){
Var1={
*uParam1 - Global_2635559.f_2263[iVar0 /*4*/] 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}
func_134(Global_2635559.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
Global_2635559.f_2491++;
}
iVar0++;
}}
if(uParam0->f_5 && Global_2635559.f_2889){
func_128(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}}

int func_199(struct<3> Param0, var uParam1){
switch (uParam1->f_7){
case 0:
return func_87(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
case 1:
case 2:
return func_87(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
default:
}
return 0;
}


void func_200(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4){
float fVar0;
func_123(&Param0, &Param1);
fVar0=(Param1.f_0 - Param0.f_0);
*uParam2=(Param0.f_0 + (fVar0 * 0.5f));
uParam2->f_1=Param0.f_1;
uParam2->f_2=Param0.f_2;
*uParam3=*uParam2;
uParam3->f_1=Param1.f_1;
uParam3->f_2=Param1.f_2;
*uParam4=(fVar0 * 0.5f);
}


var func__201(){
return Global_1573131.f_4;
}


void func_202(var uParam0, var uParam1){
func_243();
func_235(uParam0, uParam1);
}


bool func_203(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_204(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_204(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_205();
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

int func_205(){
return Global_1574918;
}


bool func_206(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
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


void func_207(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_229(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_208(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_208(var uParam0, var uParam1, var uParam2){
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
if(func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_228(uParam0, 1)){
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
Global_2643122.f_162=0;
Global_2643122.f_163=0;
Global_2643122.f_164=-99;
Global_2643122.f_165={
0f, 0f, 0f 
};
iVar14=0;
while (iVar14 < 40){
Global_2643122[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar14]=0f;
iVar14++;
}
iVar15=1;
if(func_101(uParam2->f_34) !=0){
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
if(Global_2643122.f_164==iVar6){
bVar10=true;
}
Global_2643122.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
if(vdist(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_176(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_227(Var1)){
Var1={
func_223(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_95(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_222(Var1, uParam2)){
if((uParam2->f_48 && !func_228(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_218(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_107(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_217(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_236(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_236(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_215(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_214(Var1, uParam2->f_54, &fVar23);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar22 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar22 < uParam2->f_53){
iVar14=0;
while (iVar14 < Global_2643122.f_162){
Global_2643122[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar14]=0f;
iVar14++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar22;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var1 
};
Global_2643122.f_121[0]=fVar2;
}
else{
iVar14=0;
while (iVar14 < Global_2643122.f_162 + 1){
if(iVar14 < 40){
if(vdist2(Var1, uParam2->f_35) < vdist2(Global_2643122[iVar14 /*3*/], uParam2->f_35)){
func_213(Var1, fVar2, iVar14);
iVar14=Global_2643122.f_162 + 1;
}
}
iVar14++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var1 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar2;
Global_2643122.f_162++;
if(func_222(Var1, uParam2)){
Global_2643122.f_163++;
}
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
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
if(Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_211(0, uParam2);
}
iVar24=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar24=0;
}
Var25={
Global_2643122[0 /*3*/] 
};
uVar26=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar24 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar24];
Global_2643122[iVar24 /*3*/]={
Var25 
};
Global_2643122.f_121[iVar24]=uVar26;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_210(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
if(func_107(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_228(&Var27, bVar29)){
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
func_209(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_209(var uParam0, var uParam1, var uParam2, struct<3> Param3){
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
if(!func_181(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
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


void func_210(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_223(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_227(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_211(int iParam0, var uParam1){
if(!func_222(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_212(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_211(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_211(iParam0 + 1, uParam1);
}}


void func_212(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_213(struct<3> Param0, float fParam1, int iParam2){
struct<3> Var0;
var uVar1;
Var0={
Global_2643122[iParam2 /*3*/] 
};
uVar1=Global_2643122.f_121[iParam2];
Global_2643122[iParam2 /*3*/]={
Param0 
};
Global_2643122.f_121[iParam2]=fParam1;
if(iParam2 <=Global_2643122.f_162 && iParam2 < 39){
if(vmag(Var0) > 0f){
func_213(Var0, uVar1, iParam2 + 1);
}}}

int func_214(struct<3> Param0, float fParam1, float fParam2){
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
if(func_141(iVar3)){
Var1={
func_8(iVar3) 
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

int func_215(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam7==0){
if(func_6(iVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_137(iVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_142(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_216(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_96(func_8(iVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_216(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_96(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_97(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_97(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_217(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
int iVar1;
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
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_216(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
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
if(func_216(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_218(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5){
if(func_221(Param0, fParam1, iParam2, iParam3, iParam4) || func_219(Param0, fParam1, iParam2, iParam3, iParam5)){
return 1;
}
return 0;
}

int func_219(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_220(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_216(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1)){
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

int func_220(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_103(iParam1, 1008981770);
fVar1=func_103(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_221(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar1=iVar0;
if(func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_96(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_96(func_8(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_96(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_6(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_96(func_8(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_222(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_206(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_122(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
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


Vector3 func__223(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
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
if(!func_226(Param0, *uParam1, Param4)){
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
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_225(Param0)){
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
fVar10=func_224(iParam7, 3.5f);
}else{
fVar10=func_224(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_226(Param0, *uParam1, Param4)){
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
fVar10=func_224(iParam7, 3.5f);
}else{
fVar10=func_224(iParam7, 1.5f);
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


float func_224(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_98(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_225(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_226(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_84(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_80(Var1, Var0) >=0f){
return 1;
}
return 0;
}

int func_227(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_94(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_93(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_93(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_228(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_206(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_122(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_85(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}

int func_229(var uParam0, var uParam1, var uParam2){
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
if(Global_2635559.f_1754 > 0){
iVar1=0;
iVar2=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_228(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643122.f_162=0;
Global_2643122.f_163=0;
iVar5=0;
while (iVar5 < 40){
Global_2643122[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar5]=0f;
iVar5++;
}
if(uParam2->f_30){
func_232(*uParam0);
}elseif(uParam2->f_29){
func_231();
}else{
func_230();
}
iVar1=0;
while (iVar1 < Global_2635559.f_1754){
iVar2=Global_2635559.f_2160[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635559.f_1755[iVar2 /*4*/] 
};
fVar4=Global_2635559.f_1755[iVar2 /*4*/].f_3;
if(vmag(Var3) > 0f){
if((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_218(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_107(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_217(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_236(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_236(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_215(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_214(Var3, uParam2->f_54, &fVar12);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar11 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar11 < uParam2->f_53){
iVar5=0;
while (iVar5 < Global_2643122.f_162){
Global_2643122[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar5]=0f;
iVar5++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar11;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var3 
};
Global_2643122.f_121[0]=fVar4;
}
else{
iVar5=0;
while (iVar5 < Global_2643122.f_162 + 1){
if(iVar5 < 40){
if(vdist2(Var3, uParam2->f_35) < vdist2(Global_2643122[iVar5 /*3*/], uParam2->f_35)){
func_213(Var3, fVar4, iVar5);
iVar5=Global_2643122.f_162 + 1;
}
}
iVar5++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var3 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar4;
Global_2643122.f_162++;
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
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
if(Global_2643122.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_211(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
Var13={
Global_2643122[0 /*3*/] 
};
uVar14=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar0 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar0];
Global_2643122[iVar0 /*3*/]={
Var13 
};
Global_2643122.f_121[iVar0]=uVar14;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635559.f_1754 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
*uParam0={
Global_2635559.f_1755[iVar0 /*4*/] 
};
*uParam1=Global_2635559.f_1755[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_230(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_231(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
uVar3=Global_2635559.f_2160[iVar1];
Global_2635559.f_2160[iVar1]=Global_2635559.f_2160[iVar2];
Global_2635559.f_2160[iVar2]=uVar3;
iVar0++;
}}


void func_232(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_233(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_233(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635559.f_1754){
fVar2=vdist2(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam1){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam2=fVar1;
return iVar0;
}


bool func_234(int iParam0){
return iParam0==50;
}


void func_235(var uParam0, var uParam1){
PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
Global_2635559.f_2474=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_2472=1;
Global_2635559.f_2475=NETWORK::GET_NETWORK_TIME();
}

int func_236(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_190(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_177(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}


void func_237(){
func_242();
func_241();
func_240();
func_239();
func_238();
}


void func_238(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 128){
Global_2638502[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_239(){
struct<10> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 4){
Global_2635559.f_2491.f_90[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_240(){
struct<4> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 8){
Global_2635559.f_2491.f_57[iVar1 /*4*/]={
Var0 
};
iVar1++;
}}


void func_241(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 5){
Global_2635559.f_2491.f_6[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_242(){
struct<6> Var0;
Var0.f_3=-1;
Global_2635559.f_2491={
Var0 
};
}


void func_243(){
if(Global_2635559.f_2472){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_2474){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}else{
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
Global_2635559.f_2472=0;
}}

int func_244(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}

int func_245(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_246(int iParam0){
switch (iParam0){
case 0:
return Local_63.f_49;
break;
}
return 0;
}

int func_247(){
if(bLocal_69==0){
if(MISC::IS_BIT_SET(Local_63.f_2, 4)){
return 1;
}}
return 0;
}

int func_248(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
var uVar9;
if(!MISC::IS_BIT_SET(Local_63.f_2, 0)){
MISC::SET_BIT(&(Local_63.f_2), false);
if(bLocal_69 !=0){
return 1;
}elseif(func_6(iLocal_71, 1, 1)){
if(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(0)) >=func_491(bLocal_69){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(func_491(bLocal_69))){
iVar0=0;
iVar1=0;
iVar2=PLAYER::GET_PLAYER_PED(iLocal_71);
iVar3=PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_252, -1);
bVar4=true;
iVar0=0;
while (iVar0 < iVar3){
if(bVar4){
iVar5=-1;
bVar4=false;
iVar1=0;
while (iVar1 < func_491(bLocal_69)){
if(iVar5==-1){
if(((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar1 /*7*/]) && !MISC::IS_BIT_SET(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !MISC::IS_BIT_SET(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !MISC::IS_BIT_SET(Local_63.f_10[iVar1 /*7*/].f_2, 8)){
iVar5=iVar1;
bVar4=true;
}}
iVar1++;
}
if(iVar5 !=-1){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_252[iVar0], 0)){
if(!PED::IS_PED_A_PLAYER(uLocal_252[iVar0])){
if(func_250(ENTITY::GET_ENTITY_MODEL(uLocal_252[iVar0]))){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[iVar0])){
if(!PED::IS_PED_IN_ANY_VEHICLE(uLocal_252[iVar0], 0)){
if(func_5(ENTITY::GET_ENTITY_COORDS(uLocal_252[iVar0], 1), ENTITY::GET_ENTITY_COORDS(iVar2, 1), 625f)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_252[iVar0], 1, 0);
Local_63.f_10[iVar5 /*7*/].f_6=iVar0;
MISC::SET_BIT(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
if(!MISC::IS_BIT_SET(Local_63.f_1, 12)){
Local_63.f_8=uLocal_74;
MISC::SET_BIT(&(Local_63.f_1), 12);
}
}
}}}
}
}}}
}
iVar0++;
}}}}}elseif(MISC::IS_BIT_SET(Local_63.f_1, 12)){
iVar6=0;
iVar7=0;
bVar8=false;
iVar6=0;
while (iVar6 < func_491(bLocal_69)){
if(MISC::IS_BIT_SET(Local_63.f_10[iVar6 /*7*/].f_2, 1) || MISC::IS_BIT_SET(Local_63.f_10[iVar6 /*7*/].f_2, 6)){
iVar7++;
}elseif(MISC::IS_BIT_SET(Local_63.f_10[iVar6 /*7*/].f_2, 8)){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], 0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6])){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6])){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
bVar8=true;
}
else{
WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], 1);
Local_63.f_10[iVar6 /*7*/]=NETWORK::PED_TO_NET(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_63.f_10[iVar6 /*7*/], 1);
MISC::SET_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
Local_63.f_10[iVar6 /*7*/].f_1=bLocal_69;
Local_63.f_10[iVar6 /*7*/].f_4=func_70(bLocal_69);
func_68(iVar6);
MISC::CLEAR_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
iVar7++;
}}else{
bVar8=true;
}}}
iVar6++;
}
if(!bVar8 || NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_8) > 5000){
if(iVar7 >=func_491(bLocal_69)){
MISC::SET_BIT(&(Local_63.f_2), 4);
}
iVar6=0;
while (iVar6 < 16){
uLocal_252[iVar6]=uVar9;
iVar6++;
}
iVar6=0;
while (iVar6 < func_491(bLocal_69)){
if(MISC::IS_BIT_SET(Local_63.f_10[iVar6 /*7*/].f_2, 8)){
func_249(&(Local_63.f_10[iVar6 /*7*/]));
MISC::CLEAR_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
}
iVar6++;
}
MISC::CLEAR_BIT(&(Local_63.f_1), 12);
return 1;
}}else{
return 1;
}
return 0;
}


void func_249(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_250(int iParam0){
if((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0==joaat("mp_m_freemode_01") || iParam0==joaat("mp_m_fibsec_01")) || iParam0==joaat("mp_s_m_armoured_01")) || iParam0==joaat("s_f_y_airhostess_01")) || iParam0==joaat("s_f_y_baywatch_01")) || iParam0==joaat("s_f_y_cop_01")) || iParam0==joaat("s_f_y_ranger_01")) || iParam0==joaat("s_f_y_scrubs_01")) || iParam0==joaat("s_f_y_sheriff_01")) || iParam0==joaat("s_m_m_armoured_01")) || iParam0==joaat("s_m_m_armoured_02")) || iParam0==joaat("s_m_m_bouncer_01")) || iParam0==joaat("s_m_m_ciasec_01")) || iParam0==joaat("s_m_m_chemsec_01")) || iParam0==joaat("s_m_m_doctor_01")) || iParam0==joaat("s_m_m_fiboffice_01")) || iParam0==joaat("s_m_m_fiboffice_02")) || iParam0==joaat("s_m_m_highsec_01")) || iParam0==joaat("s_m_m_highsec_02")) || iParam0==joaat("s_m_m_janitor")) || iParam0==joaat("s_m_m_lsmetro_01")) || iParam0==joaat("s_m_m_marine_01")) || iParam0==joaat("s_m_m_marine_02")) || iParam0==joaat("s_m_m_paramedic_01")) || iParam0==joaat("s_m_m_pilot_01")) || iParam0==joaat("s_m_m_pilot_02")) || iParam0==joaat("s_m_m_postal_01")) || iParam0==joaat("s_m_m_postal_02")) || iParam0==joaat("s_m_m_prisguard_01")) || iParam0==joaat("s_m_m_scientist_01")) || iParam0==joaat("s_m_m_security_01")) || iParam0==joaat("s_m_m_ups_01")) || iParam0==joaat("s_m_m_ups_02")) || iParam0==joaat("s_m_y_airworker")) || iParam0==joaat("s_m_y_armymech_01")) || iParam0==joaat("s_m_y_baywatch_01")) || iParam0==joaat("s_m_y_blackops_01")) || iParam0==joaat("s_m_y_blackops_02")) || iParam0==joaat("s_m_y_cop_01")) || iParam0==joaat("s_m_y_doorman_01")) || iParam0==joaat("s_m_y_fireman_01")) || iParam0==joaat("s_m_y_garbage")) || iParam0==joaat("s_m_y_hwaycop_01")) || iParam0==joaat("s_m_y_marine_01")) || iParam0==joaat("s_m_y_marine_02")) || iParam0==joaat("s_m_y_marine_03")) || iParam0==joaat("s_m_y_pilot_01")) || iParam0==joaat("s_m_y_ranger_01")) || iParam0==joaat("s_m_y_sheriff_01")) || iParam0==joaat("s_m_y_swat_01")) || iParam0==joaat("s_m_y_uscg_01")) || iParam0==joaat("s_m_y_valet_01")) || iParam0==joaat("s_m_y_waiter_01")) || iParam0==joaat("u_m_m_jewelsec_01")) || iParam0==joaat("s_m_y_casino_01")){
return 0;
}
return 1;
}

int func_251(){
if(MISC::IS_BIT_SET(Local_63.f_1, 6)){
return 1;
}elseif(bLocal_69==0){
Local_63.f_49=func_252(Local_63.f_36, 1);
MISC::SET_BIT(&(Local_63.f_1), 6);
return 1;
}else{
MISC::SET_BIT(&(Local_63.f_1), 6);
return 1;
}
return 0;
}

int func_252(struct<3> Param0, int iParam1){
int iVar0;
if(func_253(Param0, 1301f, -1696f, 300f, 350f, 0)){
return joaat("g_m_y_mexgoon_01");
}elseif(func_253(Param0, 1100f, -196f, 300f, 350f, 0) || func_253(Param0, 77f, 3657f, 100f, 150f, 0)){
return joaat("g_m_y_lost_01");
}elseif(func_253(Param0, 208f, -1835f, 200f, 250f, 0)){
return joaat("g_m_y_ballaorig_01");
}elseif(func_253(Param0, -26f, -1450f, 200f, 250f, 0)){
return joaat("g_m_y_famca_01");
}elseif(func_253(Param0, -654f, -922f, 300f, 350f, 0)){
return joaat("g_m_y_korean_02");
}elseif(func_253(Param0, 1840f, 3657f, 450f, 500f, 0)){
return joaat("a_m_m_hillbilly_02");
}elseif(func_253(Param0, 550f, -1885f, 200f, 250f, 0)){
return joaat("g_m_y_salvagoon_01");
}elseif(iParam1==1){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 33){
return joaat("mp_g_m_pros_01");
}elseif(iVar0 >=66){
return joaat("g_m_m_armgoon_01");
}else{
return joaat("g_m_m_chigoon_01");
}
if(Param0.f_1 > 800f){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 33){
return joaat("a_m_m_hillbilly_02");
}}}
return joaat("mp_g_m_pros_01");
}


bool func_253(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3){
return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, iParam3) <=fParam2;
}


void func_254(int iParam0){
if(PED::IS_PED_INJURED(iParam0)){}
Local_63.f_36={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(func_255(iParam0, 0)){
MISC::SET_BIT(&(Local_63.f_1), 17);
}else{
MISC::CLEAR_BIT(&(Local_63.f_1), 17);
}}

int func_255(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1){
if(ENTITY::IS_ENTITY_IN_WATER(iParam0)){
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >=0.7f){
return 1;
}}}}
return 0;
}

int func_256(){
bool bVar0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(MISC::IS_BIT_SET(Local_63.f_1, 7)){
return 1;
}else{
bVar0=false;
switch (bLocal_69){
case 0:
if(MISC::IS_BIT_SET(Local_63.f_2, 11)){
if(func_6(iLocal_71, 1, 1)){
if(vdist2(func_8(iLocal_71), Local_63.f_39) > 625f){
MISC::CLEAR_BIT(&(Local_63.f_2), 11);
MISC::CLEAR_BIT(&iLocal_66, 8);
}
}}else{
if(func_6(iLocal_71, 1, 1)){
bVar0=true;
if(func_259()){
bVar0=false;
}
}
if(bVar0){
func_63();
}
else{
func_64();
}
if(MISC::IS_BIT_SET(Local_63.f_1, 5)){
if(func_258()){
func_64();
MISC::SET_BIT(&(Local_63.f_1), 7);
}
}}
break;
case 1:
if(func_6(iLocal_71, 1, 1)){
bVar0=true;
if(func_257()){
bVar0=false;
}}
if(bVar0){
func_63();
}else{
func_64();
}
if(MISC::IS_BIT_SET(Local_63.f_1, 5)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_5) > 30000){
func_64();
MISC::SET_BIT(&(Local_63.f_1), 7);
}}
break;
}}}
return 0;
}

int func_257(){
int iVar0;
iVar0=PLAYER::GET_PLAYER_PED(iLocal_71);
if(((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_71, 1, 1)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)){
return 1;
}
if(func_118(iLocal_71, 1)){
if(iLocal_71 > -1){
if(Global_1853910[iLocal_71 /*862*/] !=1){
return 1;
}}}
return 0;
}

int func_258(){
if(!MISC::IS_BIT_SET(Local_63.f_1, 18)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_5) > 5000){
MISC::SET_BIT(&(Local_63.f_1), 18);
return 1;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_5) > 60000){
return 1;
}
return 0;
}

int func_259(){
int iVar0;
iVar0=PLAYER::GET_PLAYER_PED(iLocal_71);
if(((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_71, 1, 1)) || func_62(iLocal_71)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)) || Global_2657589[iLocal_71 /*466*/].f_248) || func_61(PLAYER::GET_PLAYER_PED(iLocal_71), joaat("titan"))){
return 1;
}
if(func_118(iLocal_71, 1)){
if(iLocal_71 > -1){
if(Global_1853910[iLocal_71 /*862*/] !=1){
return 1;
}}}
if(iLocal_71 !=-1){
if(MISC::IS_BIT_SET(Local_65[iLocal_71 /*5*/].f_1, 4)){
return 1;
}}
return 0;
}


void func_260(){
if(!MISC::IS_BIT_SET(Local_63.f_1, 14)){
Local_63.f_9=uLocal_74;
MISC::SET_BIT(&(Local_63.f_1), 14);
}}


void func_261(){
if(Local_63.f_44 !=Local_65[iLocal_70 /*5*/].f_4){
Local_63.f_44=Local_65[iLocal_70 /*5*/].f_4;
}}


void func_262(){
if(!MISC::IS_BIT_SET(Local_63.f_1, 10)){
Local_63.f_45=func_491(bLocal_69);
Local_63.f_46=0;
Local_63.f_47=0;
MISC::SET_BIT(&(Local_63.f_1), 10);
}}


void func_263(){
func_264();
if(!MISC::IS_BIT_SET(Local_63.f_1, 8)){
if(MISC::IS_BIT_SET(Local_63.f_2, 7)){
if(NETWORK::GET_TIME_DIFFERENCE(uLocal_74, Local_63.f_7) > 300000){
MISC::SET_BIT(&(Local_63.f_2), 8);
}}}}


void func_264(){
if(!MISC::IS_BIT_SET(Local_63.f_2, 7)){
Local_63.f_7=uLocal_74;
MISC::SET_BIT(&(Local_63.f_2), 7);
}}


void func_265(){
int iVar0;
int iVar1;
int iVar2;
MISC::SET_BIT(&iLocal_66, 7);
if(MISC::IS_BIT_SET(Local_63.f_3, 1)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 2)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 3)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 9)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 4)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 5)){}
if(MISC::IS_BIT_SET(Local_63.f_3, 11)){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(Local_63.f_50 || Local_63.f_52){
MISC::SET_BIT(&iLocal_66, 7);
}elseif(func_385("MPCT_MERts", "FM_MERRYWEATHER", 85)){
MISC::SET_BIT(&iLocal_66, 7);
}}}
if(MISC::IS_BIT_SET(Local_63.f_3, 6)){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(Local_63.f_50 || Local_63.f_52){
MISC::SET_BIT(&iLocal_66, 7);
}elseif(func_385("MPCT_MERtd", "FM_MERRYWEATHER", 85)){
MISC::SET_BIT(&iLocal_66, 7);
}}}
if(MISC::IS_BIT_SET(Local_63.f_3, 7)){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(func_345()){
if(!Local_63.f_50){
if(Local_63.f_52){
iLocal_253=func_344(Local_63.f_53);
}else{
iLocal_253=func_340(12);
}
if(iLocal_253 > 0){
func_338(iLocal_253, 1, 0, 0f);
func_323(iLocal_253, 4, 1, 1);
}
MISC::SET_BIT(&iLocal_66, 7);
}else{
MISC::SET_BIT(&iLocal_66, 7);
}}}}
if(MISC::IS_BIT_SET(Local_63.f_3, 0)){
if(PLAYER::PLAYER_ID()==iLocal_70){
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(func_385("MPCT_mugfail", "LAMAR", 19)){
MISC::SET_BIT(&iLocal_66, 7);
}}}elseif(PLAYER::PLAYER_ID()==iLocal_71){
if(MISC::IS_BIT_SET(Local_63.f_2, 1)){
if(MISC::IS_BIT_SET(Local_63.f_2, 12)){
iVar0=round((IntToFloat(Global_262145.f_7102) * Global_262145.f_4304));
func_281(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
func_267(47, 1);
}}}}
if(MISC::IS_BIT_SET(Local_63.f_3, 8)){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(func_345()){
if(bLocal_69==0){
iLocal_253=(func_340(2) * func_491(bLocal_69));
iVar1=3;
}else{
if(Local_63.f_52){
iLocal_253=func_344(Local_63.f_53);
}else{
iLocal_253=func_340(12);
}
iVar1=4;
}
if(!Local_63.f_50){
if(iLocal_253 > 0){
func_338(iLocal_253, 1, 0, 0f);
func_323(iLocal_253, iVar1, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 7);
}else{
MISC::SET_BIT(&iLocal_66, 7);
}}}}
if(MISC::IS_BIT_SET(Local_63.f_3, 10)){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::CLEAR_BIT(&iLocal_66, 7);
if(func_345()){
if(bLocal_69==0){
iLocal_253=(func_340(2) * func_491(bLocal_69));
iVar2=3;
}else{
if(Local_63.f_52){
iLocal_253=func_344(Local_63.f_53);
}else{
iLocal_253=func_340(12);
}
iVar2=4;
}
if(!Local_63.f_50){
if(iLocal_253 > 0){
func_338(iLocal_253, 1, 0, 0f);
func_323(iLocal_253, iVar2, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 7);
}else{
MISC::SET_BIT(&iLocal_66, 7);
}}}}
if(MISC::IS_BIT_SET(iLocal_66, 7)){
func_266();
}}


void func_266(){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*862*/].f_140), bLocal_69);
Global_1853910[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*862*/].f_141=-1;
if(bLocal_69==1){
if(MISC::IS_INCIDENT_VALID(uLocal_251)){
MISC::DELETE_INCIDENT(uLocal_251);
}}
func_519();
func_551();
}

int func_267(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_268(iParam0, iParam1);
}

int func_268(int iParam0, int iParam1){
if(func_280(14) && !func_279(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32414 !=0 && !Global_78558){
return 0;
}
if(func_278(&Global_4542597)){
if(func_276(&Global_4542597, iParam0)){
return 0;
}
if(func_269(&Global_4542597, iParam0)){
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

int func_269(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_280(14) && !func_279(iParam1)){
return 0;
}
if(func_276(uParam0, iParam1)){
return 0;
}
if(func_275(uParam0) < 0f){
func_274(uParam0, 0);
}
func_272(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_270(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_270(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_280(14) && !func_279(iParam1)){
return 0;
}
if(func_276(uParam0, iParam1)){
return 0;
}
if(func_275(uParam0) < 0f){
func_274(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_271(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_271(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_272(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_273(uParam0, iVar0);
iVar0++;
}
func_274(uParam0, (Global_4542596 - 0.5f));
}


void func_273(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_274(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_275(var uParam0){
return uParam0->f_80;
}


bool func_276(var uParam0, int iParam1){
return func_277(uParam0, iParam1) !=-1;
}

int func_277(var uParam0, int iParam1){
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


bool func_278(var uParam0){
return uParam0->f_79==1;
}

int func_279(int iParam0){
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


bool func_280(int iParam0){
return Global_43257==iParam0;
}


var func__281(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
return func_282(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}


var func__282(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_283(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_283(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_316();
if(func_315(uParam2)){}
if(func_314()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_312(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_311(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_309(0, &iVar1);
break;
case 3:
func_309(1, &iVar1);
break;
case 1:
func_307(&iVar1);
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
func_304(1165, iVar1, -1);
if(iParam1==0){
func_293((func_303(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_304(1166, iVar1, -1);
}
func_288(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_284((func_286(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_284((func_286(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_284(int iParam0){
if(func_314()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_285(joaat("mpply_globalxp"), iParam0);
}}


void func_285(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}}

int func_286(int iParam0){
if(iParam0 > -1){
if(func_6(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_287(joaat("mpply_globalxp"));
}else{
return Global_1853910[iParam0 /*862*/].f_205.f_5;
}}else{
return func_287(joaat("mpply_globalxp"));
}}
return 0;
}

int func_287(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_288(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_144(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_291(func_292(&Var0));
if(iVar1==0){
func_290(&Global_1665493, iParam0);
func_289(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_290(&Global_1665494, iParam0);
func_289(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_290(&Global_1665495, iParam0);
func_289(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_290(&Global_1665496, iParam0);
func_289(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_290(&Global_1665497, iParam0);
func_289(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_289(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=uParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=uParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=uParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=uParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=uParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=uParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=uParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=uParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=uParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=uParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=uParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=uParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=uParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=uParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=uParam1;
break;
default:
break;
}}


void func_290(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_291(int iParam0){
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

int func_292(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}


void func_293(int iParam0, int iParam1, int iParam2){
if(func_314()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_302(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_302(-1)]){
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
if(func_301(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_299(iParam0, 1);
}
func_298(640, iParam0, -1, 1);
func_297(641, func_299(iParam0, 1), -1, 1, 0);
Global_1665638[func_302(-1)]=iParam0;
func_294(-1109644434, 7, 0);
}}


void func_294(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_296(iParam1, iParam2)){
iVar0=func_295();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_295(){
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

int func_296(int iParam0, var uParam1){
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


void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_302(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_298(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_302(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_302(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_302(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_302(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_302(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_302(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_302(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_302(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_302(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_302(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_302(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_302(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_302(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_302(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_302(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_302(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_302(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_302(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_302(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_302(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_302(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_302(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_302(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_302(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_302(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_302(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_302(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_302(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_302(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_302(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_302(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_302(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_302(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_302(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_302(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_302(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_302(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_302(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_302(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_302(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_302(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_302(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_302(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_302(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_302(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_302(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_302(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_302(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_302(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_302(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_302(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_302(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_302(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_302(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_302(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_302(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_302(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_302(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_302(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_302(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_302(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_302(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_302(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_302(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_302(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_302(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_302(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_302(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_302(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_302(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_302(iParam2)]=iParam1;
break;
default:
break;
}}

int func_299(int iParam0, bool bParam1){
if(bParam1){}
return func_300(iParam0, 0);
}

int func_300(int iParam0, int iParam1){
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

int func_301(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}

int func_302(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_205();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_303(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_302(-1)];
}elseif(func_301(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_302(-1)];
}
return 0;
}


void func_304(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_306(iParam0, func_302(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_305(iParam0)){
func_297(iParam0, iVar0, iParam2, 1, 0);
}else{
func_298(iParam0, iVar0, iParam2, 1);
}}

int func_305(int iParam0){
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

int func_306(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_302(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_307(int iParam0){
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
if(PLAYER::GET_PLAYER_TEAM(iVar5)==iVar1 || func_146(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1)){
iVar2++;
if(iVar5 !=PLAYER::PLAYER_ID()){
if(func_145(PLAYER::PLAYER_ID(), iVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_308(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_308(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_308(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_309(bool bParam0, int iParam1){
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
if(func_6(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_145(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_6(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_310(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_145(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_308(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_308(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_310(int iParam0, int iParam1){
return vdist(func_8(iParam0), func_8(iParam1));
return 0f;
}

int func_311(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_308(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_312(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_303(PLAYER::PLAYER_ID())){
iParam0=-func_303(PLAYER::PLAYER_ID());
}}
if(func_313(8000, 0, 0) > 0){
if(func_313(8000, 0, 0) < (iParam0 + func_303(PLAYER::PLAYER_ID()))){
iParam0=(func_313(8000, 0, 0) - func_303(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_313(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297010[iParam0];
}

int func_314(){
return 1;
}

int func_315(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_316(){
int iVar0;
if(func_322(PLAYER::PLAYER_ID()) || func_321(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_319() || func_317(PLAYER::PLAYER_ID())){
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

int func_317(int iParam0){
return func_318(func_39(iParam0));
}

int func_318(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_319(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_180();
}
return func_320(Global_4718592.f_113724);
}

int func_320(int iParam0){
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


bool func_321(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_322(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


void func_323(int iParam0, int iParam1, int iParam2, bool bParam3){
struct<4> Var0;
struct<8> Var1;
int iVar2;
int iVar3;
StringCopy(&Var0, func_337(iParam1), 16);
StringCopy(&Var1, func_336(iParam2), 32);
switch (iParam1){
case 0:
iVar2=1287308202;
break;
case 1:
iVar2=691372038;
break;
case 2:
iVar2=1480707108;
break;
case 3:
iVar2=1512499951;
break;
case 4:
iVar2=562283735;
break;
case 5:
iVar2=-154732333;
break;
case 6:
iVar2=-1362660491;
break;
case 7:
iVar2=645708827;
break;
case 8:
iVar2=767907967;
break;
case 9:
iVar2=-1970151306;
break;
case 10:
iVar2=718859568;
break;
case 11:
iVar2=-1955564771;
break;
case 12:
iVar2=892388724;
break;
case 13:
iVar2=-1426920838;
break;
case 14:
iVar2=-664597565;
break;
case 15:
iVar2=1864522104;
break;
case 16:
iVar2=215608230;
break;
case 17:
iVar2=-1100963799;
break;
}
if(func_51()){
func_324(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
Global_4535172[iVar3 /*85*/].f_14.f_40={
Var0 
};
Global_4535172[iVar3 /*85*/].f_14.f_44={
Var1 
};
}else{
MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
}}


void func_324(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_51()){
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
func_325(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_325(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_325(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_325(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_51()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_205()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_332(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_331(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_326(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_326(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_327(iParam0);
}}


void func_327(int iParam0){
bool bVar0;
bVar0=false;
if(!func_51()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_330(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_328(&(Global_4535172[iParam0 /*85*/]));
}}


void func_328(var uParam0){
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
func_329(&(uParam0->f_14));
func_329(&(uParam0->f_14.f_13));
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


void func_329(var uParam0){
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

int func_330(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_331(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_332(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_51()){
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
func_333(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_333(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_335(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_334();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_334(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__335(bool bParam0){
var uVar0;
if(iParam0 !=-1){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}


char* func_336(int iParam0){
switch (iParam0){
case 0:
return "NOTREACHTARGET";
break;
case 1:
return "TARGET_ESCAPE";
break;
case 2:
return "DELIVERY_FAIL";
break;
case 3:
return "NOT_USED";
break;
case 4:
return "TEAM_QUIT";
break;
case 5:
return "SERVER_ERROR";
break;
case 6:
return "RECEIVE_LJ_L";
break;
case 8:
return "CHALLENGE_PLAYER_LEFT";
break;
}
return "DEFAULT";
}


char* func_337(int iParam0){
switch (iParam0){
case 0:
return "BACKUP_VAGOS";
case 1:
return "BACKUP_LOST";
case 2:
return "BACKUP_FAMILIES";
case 3:
return "HIRE_MUGGER";
case 4:
return "HIRE_MERCENARY";
case 5:
return "BUY_CARDROPOFF";
case 6:
return "HELI_PICKUP";
case 7:
return "BOAT_PICKUP";
case 8:
return "CLEAR_WANTED";
case 9:
return "HEAD_2_HEAD";
case 10:
return "CHALLENGE";
case 11:
return "SHARE_LAST_JOB";
case 13:
return "REFUNDAPPEA";
case 14:
return "AMMO_DROP_REF";
case 15:
return "ORBITAL_MANUAL";
case 16:
return "ORBITAL_AUTO";
case 17:
return "ARENA_SPEC_BOX";
default:
}
return "DEFAULT";
}


void func_338(int iParam0, int iParam1, int iParam2, float fParam3){
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
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_4=iVar1;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3=(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 + iVar1);
if(iParam2==1){
func_339(iVar1, 0);
}}


void func_339(int iParam0, bool bParam1){
if(bParam1){}
iParam0=iParam0;
}

int func_340(int iParam0){
int iVar0;
iVar0=0;
if(func_343(iParam0) >=0){
iVar0=func_343(iParam0);
}else{
iVar0=func_341(iParam0);
}
return iVar0;
}

int func_341(int iParam0){
switch (iParam0){
case 1:
return 1000;
break;
case 10:
return 5000;
break;
case 11:
return 8000;
break;
case 8:
return 1000;
break;
case 0:
return 500;
break;
case 9:
return 250;
break;
case 13:
return 1000;
break;
case 12:
return 7500;
break;
case 2:
return 1000;
break;
case 14:
return 500;
break;
case 20:
if(func_342()){
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==1){
return 200;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==2){
return 400;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==3){
return 600;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==4){
return 800;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==5){
return 1000;
}
break;
case 6:
return 500;
break;
case 22:
return 200;
break;
case 23:
return 400;
break;
case 24:
return 700;
break;
case 25:
return 100;
break;
case 26:
return 1000;
break;
case 57:
return 700;
break;
case 35:
return 5000;
break;
case 15:
return 0;
break;
case 17:
return 0;
break;
case 18:
return 0;
break;
case 19:
return 0;
break;
case 21:
return 0;
break;
case 36:
return 0;
break;
case 39:
return 200;
break;
case 40:
return 1000;
case 41:
return 750;
case 42:
return 0;
}
return 0;
}


bool func_342(){
return MISC::IS_BIT_SET(func_306(6427, -1, 0), 19);
}

int func_343(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_7105;
break;
case 10:
return Global_262145.f_4128;
break;
case 11:
return Global_262145.f_4129;
break;
case 8:
return Global_262145.f_4126;
break;
case 0:
return Global_262145.f_4112;
break;
case 9:
return Global_262145.f_4127;
break;
case 13:
return Global_262145.f_4131;
break;
case 12:
return Global_262145.f_4130;
break;
case 2:
return Global_262145.f_4122;
break;
case 14:
return Global_262145.f_4132;
break;
case 20:
if(func_342()){
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==1){
return Global_262145.f_7112;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==2){
return Global_262145.f_7113;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==3){
return Global_262145.f_7114;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==4){
return Global_262145.f_7115;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==5){
return Global_262145.f_7116;
}
break;
case 6:
return Global_262145.f_4125;
break;
case 22:
return Global_262145.f_4138;
break;
case 23:
return Global_262145.f_4139;
break;
case 24:
return Global_262145.f_4140;
break;
case 25:
return Global_262145.f_4141;
break;
case 26:
return Global_262145.f_4142;
break;
case 35:
return Global_262145.f_7681;
break;
case 15:
return Global_262145.f_7106;
break;
case 17:
return Global_262145.f_7106;
break;
case 18:
return Global_262145.f_7106;
break;
case 19:
return Global_262145.f_7106;
break;
case 21:
return Global_262145.f_7106;
break;
case 36:
return Global_262145.f_8148;
break;
case 39:
return -1;
break;
case 40:
return Global_262145.f_13359;
break;
case 41:
return Global_262145.f_13360;
break;
case 42:
return Global_262145.f_13361;
break;
case 43:
return Global_262145.f_15888;
break;
case 44:
return Global_262145.f_15890;
break;
case 57:
return Global_262145.f_4140;
break;
case 58:
return Global_262145.f_25788;
break;
case 62:
return Global_262145.f_25789;
break;
case 63:
return Global_262145.f_29259;
break;
case 64:
return Global_262145.f_7106;
break;
case 72:
return Global_262145.f_25789;
break;
case 73:
return Global_262145.f_31774;
break;
case 74:
return Global_262145.f_31776;
break;
case 75:
return Global_262145.f_31778;
break;
}
return 0;
}

int func_344(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_23964;
case 2:
return Global_262145.f_23965;
case 3:
return Global_262145.f_23966;
default:
}
return 9999999;
}

int func_345(){
char* sVar0;
char* sVar1;
int iVar2;
if(Local_63.f_50 || Local_63.f_52){
if(!Local_63.f_51){
if(!MISC::IS_BIT_SET(Local_63.f_3, 7)){
func_346("HS_UNABLE", iLocal_71, 0, 0, 0, 1, 0);
}}
return 1;
}
switch (bLocal_69){
case 0:
sVar0="MPCT_muglost";
sVar1="LAMAR";
iVar2=19;
break;
case 1:
sVar0="MPCT_MERloc";
sVar1="FM_MERRYWEATHER";
iVar2=85;
break;
}
if(func_385(sVar0, sVar1, iVar2)){
return 1;
}
return 0;
}

int func_346(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
struct<16> Var2;
int iVar3;
int iVar4;
iVar0=-1;
iVar1=PLAYER::GET_PLAYER_TEAM(iParam1);
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3){
if(!bParam2){
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}else{
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if((iVar1 !=-1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4){
if(Global_4718592.f_108449[iVar1] !=-1){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_383(iVar1, iParam1, 0));
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_354(iParam1, -2, 1, 0, 0));
}}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_354(iParam1, -2, 1, 0, 0));
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_352(&Var2));
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764203={
func_144(iParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764133, 35, &Global_2764203)){
iVar3=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764133.f_22), "Leader") && Global_2764133.f_30==0){
iVar3=1;
}
if(Global_2764133.f_21 > 0){
iVar4=0;
}else{
iVar4=1;
}
if(bParam5){
if(bParam6){
Var2={
func_351(&Var2) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar3, 0, Global_2764133, &Var2, Global_1576217, Global_1576218, Global_1576219);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar3, 0, Global_2764133, Global_1576217, Global_1576218, Global_1576219);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_347(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_347(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_350() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_203(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_348(iParam2);
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

int func_348(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_349(iVar0);
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


void func_349(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_350(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_351(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}


var func__352(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_353(&cVar0);
}


var func__353(char[4] cParam0){
return cParam0;
}

int func_354(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_149(iParam0) && !bParam4){
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
if(((func_149(PLAYER::PLAYER_ID()) || (func_382() && func_381())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
uVar1=func_380();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_383(iParam1, iParam0, 0);
}else{
return func_366(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_366(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_383(iParam1, iParam0, 0);
}else{
return func_355(0, -1, 0);
}}else{
return func_355(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_383(iParam1, iParam0, 0);
}else{
return func_366(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_366(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_355(bool bParam0, int iParam1, bool bParam2){
return func_356(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_356(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if((func_365() || (func_364() && func_362())) && Global_1665699.f_1){
if(bParam1){
return func_361(iParam2, iVar0);
}else{
return func_361(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_146(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_360(1);
}else{
return func_360(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_357(iVar0, iParam2, 1, 4);
}else{
return func_357(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_360(1);
}
return func_360(0);
}

int func_357(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_359(iParam0, iParam1, iParam3);
if(func_358(Global_4718592.f_113724, 1)){
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

int func_358(int iParam0, bool bParam1){
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

int func_359(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_146(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_360(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_361(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_359(iParam1, iParam0, 4);
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

int func_362(){
if(func_363()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_363(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_364(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_365(){
if(func_363() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_366(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
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
iVar2=iParam0;
if(iVar2 > -1){
if(Global_1853910[iVar2 /*862*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_371()){
iVar3=func_370(iParam0);
if(!iVar3==-1){
return func_368(iVar3);
}}
if((func_187(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_146(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_360(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_367(1);
}else{
return func_356(iParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/]==0){
if(iParam0==iParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_360(1);
}else{
return func_356(iParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==iParam0){
return 28;
}}
iVar4=func_370(iParam0);
if(!iVar4==-1){
return func_368(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_367(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}

int func_368(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_369(iParam0);
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


var func__369(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_370(int iParam0){
if(!iParam0==func_13()){
if(func_14(iParam0, 1)){
return Global_2648605.f_818.f_11[func_12(iParam0)];
}}
return -1;
}

int func_371(){
if((((((func_379() || func_378()) || func_180()) || func_377()) || func_376()) || func_374()) || func_372()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_372(){
return func_373(Global_4718592.f_113724);
}

int func_373(int iParam0){
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

int func_374(){
return func_375(Global_4718592.f_113724);
}

int func_375(int iParam0){
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


var func__376(){
return Global_2683864.f_24;
}


var func__377(){
return Global_2683864.f_21;
}


var func__378(){
return Global_2683864.f_18;
}


var func__379(){
return Global_2683864.f_17;
}


var func__380(){
return Global_2621446.f_2;
}


var func__381(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__382(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_383(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_371()){
iVar2=func_370(iParam1);
if(!iVar2==-1){
return func_368(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_13()){
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
iVar0=func_356(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_384(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_146(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_367(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_384(int iParam0){
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

int func_385(char* sParam0, char* sParam1, int iParam2){
if(!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL")){
if(!MISC::IS_BIT_SET(iLocal_68, 0)){
func_490(&uLocal_86, 3, 0, sParam1, 0, 1);
if(func_387(&uLocal_86, iParam2, "CT_AUD", sParam0, 0, 0)){
MISC::SET_BIT(&iLocal_68, false);
}}elseif(!MISC::IS_BIT_SET(iLocal_68, 1)){
if(func_386(0)){
MISC::SET_BIT(&iLocal_68, true);
}}elseif(!func_386(0)){
iLocal_68=0;
return 1;
}}
return 0;
}

int func_386(int iParam0){
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

int func_387(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5){
char* sVar0;
bool bVar1;
int iVar2;
if(func_488()){
return 0;
}
if(func_487()){
return 0;
}
sVar0=0;
bVar1=false;
iVar2=-99;
return func_388(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_388(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12){
int iVar0;
int iVar1;
int iVar2;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15){
return 0;
}
iVar0=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
iVar1=func_486(sParam2, sParam3);
iVar2=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
iVar2=MISC::GET_HASH_KEY(iParam7);
}
if(func_485(iVar0, iVar1, iVar2)){
return 1;
}
if(!func_480(uParam6)){
return 0;
}
if(func_477(iVar0, iVar1, iVar2)){
if(func_476()){
return 0;
}
func_475();
return func_395(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
}
if(!func_394(iParam4)){
return 0;
}
func_389(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
return 0;
}


void func_389(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6){
Global_1649046.f_40.f_1=iParam0;
Global_1649046.f_40.f_2=iParam1;
Global_1649046.f_40.f_3=iParam2;
StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
Global_1649046.f_40.f_8=iParam4;
Global_1649046.f_40.f_9=iParam5;
Global_1649046.f_40.f_14=uParam6;
func_390(iParam4);
func_475();
Global_1649046.f_40.f_13=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}


void func_390(int iParam0){
if(func_393(iParam0)){
func_392();
return;
}
func_391();
}


void func_391(){
Global_1649046.f_40.f_10=0;
}


void func_392(){
Global_1649046.f_40.f_10=1;
}

int func_393(int iParam0){
switch (iParam0){
case 4:
case 5:
return 1;
case 0:
case 1:
case 7:
case 8:
case 2:
case 3:
return 0;
default:
}
return 0;
}


bool func_394(int iParam0){
return iParam0 > Global_1649046.f_40.f_8;
}

int func_395(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12){
struct<2> Var0;
func_474();
if(iParam6==5){
iParam6=0;
}
if(iParam5==8){
return func_471(uParam0, sParam3, sParam4);
}
if(iParam5==4){
StringCopy(&Var0, "CELL_226", 16);
return func_468(uParam0, iParam1, sParam3, sParam4, &Var0);
}
if(iParam5==1 || iParam5==7){
if(iParam6==2){
return func_471(uParam0, sParam3, sParam4);
}
return func_450(uParam0, iParam1, sParam3, sParam4, uParam7);
}
if(iParam5==5){
return func_449(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==2){
return func_437(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==3){
return func_436(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==6){
return func_396(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
return 0;
}

int func_396(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_435();
bVar0=true;
if(func_398(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8)){
func_397(120000);
return 1;
}
return 0;
}


void func_397(int iParam0){
Global_1649046.f_40.f_11=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
Global_1649046.f_40.f_12=1;
}

int func_398(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
char* sVar4;
var uVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bool bVar12;
iVar0=func_13();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_429(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649046.f_40.f_13)){
return 0;
}}}else{
sVar2="";
}
iVar3=0;
sVar4=func_428(uParam5, bParam6, &iVar3);
uVar5=func_426(iParam7, &iVar3);
iVar6=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
iVar6++;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
iVar6++;
}}
if(MISC::ARE_STRINGS_EQUAL(sVar4, " ")){
sVar4="";
}
bVar7=true;
iVar8=0;
iVar9=0;
iVar10=1;
iVar11=0;
if(bParam3){
iVar9=1;
iVar10=2;
iVar11=1;
if(MISC::IS_BIT_SET(uParam4, 1)){
iVar8=1;
}}
if(MISC::IS_BIT_SET(uParam4, 2)){
iVar10=2;
}
bVar12=false;
if(!iVar3==0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
bVar12=func_425(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_402(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_401();
}
func_435();
func_400();
func_399();
return 1;
}


void func_399(){
Global_1649046.f_57=0;
Global_1649046.f_57.f_1=0;
}


void func_400(){
Global_1649046.f_40=3;
}


void func_401(){
MISC::SET_BIT(&Global_8253, 8);
}

int func_402(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_403(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_8960=iParam6;
MISC::SET_BIT(&Global_4542297, false);
}
return 1;
}
return 0;
}

int func_403(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_418();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20383==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20383==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20383==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_4542282==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0){
return 0;
}}
if(func_417()==0){
func_415();
return 0;
}
func_414(Global_4542281);
StringCopy(&(Global_4541032[Global_4542281 /*104*/]), sParam1, 64);
Global_4541032[Global_4542281 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_4541032[Global_4542281 /*104*/].f_24=iParam2;
}
Global_4541032[Global_4542281 /*104*/].f_25=iParam7;
Global_4541032[Global_4542281 /*104*/].f_26=uParam8;
Global_4541032[Global_4542281 /*104*/].f_29=uParam9;
Global_4541032[Global_4542281 /*104*/].f_30=uParam12;
Global_4541032[Global_4542281 /*104*/].f_31=uParam11;
Global_4541032[Global_4542281 /*104*/].f_28=0;
Global_4541032[Global_4542281 /*104*/].f_32=iParam3;
StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_33), sParam4, 64);
Global_4541032[Global_4542281 /*104*/].f_49=iParam6;
StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_50), sParam5, 64);
Global_4541032[Global_4542281 /*104*/].f_66=iParam13;
StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_83), sParam15, 64);
func_418();
switch (iParam16){
case 3:
Global_4541032[Global_4542281 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_4541032[Global_4542281 /*104*/].f_99[0]=1;
break;
case 2:
Global_4541032[Global_4542281 /*104*/].f_99[2]=1;
break;
case 1:
Global_4541032[Global_4542281 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case 0:
func_413(0);
break;
case 1:
func_413(1);
break;
case 2:
func_413(2);
break;
case 3:
func_413(3);
break;
default:
break;
}}
if(iParam7==1){
switch (iParam16){
case 3:
Global_4542282=1;
break;
case 0:
Global_4542282=1;
break;
case 2:
Global_4542282=1;
break;
case 1:
Global_4542282=1;
break;
}}
Global_22794[Global_4542281]=0;
if(bParam10){
func_418();
if(Global_20326){
StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1){
if(!func_412()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, 1);
}}}
if(!Global_20585){
if(Global_20383.f_1==6){
func_411(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_408(1);
func_411(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527){
bVar1=true;
}
func_404(iParam0, sParam1, bVar1, func_407(PLAYER::PLAYER_ID()));
return 1;
}


void func_404(int iParam0, char* sParam1, bool bParam2, var uParam3){
if(!func_405()){
return;
}
STATS::PLAYSTATS_NPC_PHONE(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2){
Global_1977527=-1;
}}

int func_405(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_13()){
return 0;
}
if(func_406(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_406(int iParam0){
return func_38(iParam0, 20);
}


var func__407(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}


void func_408(int iParam0){
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
Global_22793=0;
Global_8858=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8822[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_280(14)){
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar2=42;
Global_20588=1;
}else{
iVar2=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113648.f_14143[iVar3 /*104*/].f_24 !=0){
if(Global_113648.f_14143[iVar3 /*104*/].f_28==0){
if(Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383]==1){
Global_22793++;
}
}
}
iVar3++;
}
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78558){
iVar4=0;
iVar4=Global_4541031;
iVar5=0;
while (iVar5 < 12){
if(Global_4541032[iVar5 /*104*/].f_24 !=0){
if(Global_4541032[iVar5 /*104*/].f_28==0){
if(Global_4541032[iVar5 /*104*/].f_99[Global_20383]==1){
iVar4++;
}}
}
iVar5++;
}
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
iVar6=Global_44457;
break;
case 1:
iVar6=Global_44458;
break;
case 2:
iVar6=Global_44459;
break;
default:
break;
}
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar8=42;
Global_20588=1;
}else{
iVar8=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_410(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_409(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_409(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_410(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_410(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_410(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_410(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_410(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_410(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_411(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_412(){
return Global_1575060;
}


void func_413(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113648.f_14053[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_414(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_4541032[iParam0 /*104*/].f_18=uVar0;
Global_4541032[iParam0 /*104*/].f_18.f_1=uVar1;
Global_4541032[iParam0 /*104*/].f_18.f_2=uVar2;
Global_4541032[iParam0 /*104*/].f_18.f_3=uVar3;
Global_4541032[iParam0 /*104*/].f_18.f_4=uVar4;
Global_4541032[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_415(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=10;
iVar2=iVar0;
Global_4542281=11;
Global_4541032[Global_4542281 /*104*/].f_18=-1;
Global_4541032[Global_4542281 /*104*/].f_18.f_1=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_2=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_3=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_416(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18)){
Global_4542281=iVar2;
}
iVar2++;
}
Global_4541032[Global_4542281 /*104*/].f_24=1;
}

int func_416(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_417(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=10;
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_4541032[iVar2 /*104*/].f_24==0){
Global_4542281=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_4542281=11;
Global_4541032[Global_4542281 /*104*/].f_18=-1;
Global_4541032[Global_4542281 /*104*/].f_18.f_1=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_2=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_3=0;
Global_4541032[Global_4542281 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_4541032[iVar2 /*104*/].f_24==0 || Global_4541032[iVar2 /*104*/].f_24==1){
if(!func_416(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18)){
Global_4542281=iVar2;
}}
iVar2++;
}
if(Global_4542281==11){
return 0;
}
Global_4541032[Global_4542281 /*104*/].f_99[0]=0;
Global_4541032[Global_4542281 /*104*/].f_99[1]=0;
Global_4541032[Global_4542281 /*104*/].f_99[2]=0;
return 1;
}


void func_418(){
if(func_280(14)){
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
Global_20383=func_419();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__419(){
func_420();
return Global_113648.f_2365.f_539.f_4321;
}


void func_420(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_423(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_422(PLAYER::PLAYER_PED_ID());
if(func_421(iVar0) && (!func_280(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_421(Global_113648.f_2365.f_539.f_4321)){
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


bool func_421(int iParam0){
return iParam0 < 3;
}

int func_422(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_423(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_423(int iParam0){
if(func_421(iParam0)){
return func_424(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__424(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_425(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
int iVar0;
switch (iParam14){
case 0:
sParam15="NULL";
sParam16="NULL";
break;
case 1:
sParam16="NULL";
break;
case 2:
break;
default:
break;
}
iVar0=3;
if(func_403(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_8960=iParam10;
MISC::SET_BIT(&Global_4542297, false);
}
return 1;
}
return 0;
}

int func_426(int iParam0, int iParam1){
if(iParam0==-99){
return -99;
}
func_427(2, iParam1);
return iParam0;
}


void func_427(int iParam0, var uParam1){
bool bVar0;
bool bVar1;
if(iParam0==0){
return;
}
bVar0=false;
bVar1=false;
switch (iParam0){
case 1:
bVar0=true;
break;
case 2:
bVar1=true;
break;
default:
return;
}
if(bVar0){
switch (*uParam1){
case 1:
case 3:
break;
case 0:
*uParam1=1;
break;
case 2:
*uParam1=3;
break;
default:
return;
}
return;
}
if(bVar1){
switch (*uParam1){
case 2:
case 3:
break;
case 0:
*uParam1=2;
break;
case 1:
*uParam1=3;
break;
default:
return;
}
return;
}}


var func__428(char* sParam0, bool bParam1, int iParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return sLocal_20;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_20)){
return sLocal_20;
}
func_427(1, iParam2);
if(bParam1){
return sParam0;
}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_429(int iParam0){
int iVar0;
iVar0=func_432(iParam0);
if(iVar0==-1){
func_430(iParam0, 1);
return 0;
}
Global_1666668[iVar0 /*5*/].f_4=1;
return Global_1666668[iVar0 /*5*/].f_2;
}


void func_430(int iParam0, bool bParam1){
if(!func_6(iParam0, 0, 1)){
return;
}
if(func_432(iParam0) !=-1){
return;
}
if(Global_1666831){
if(iParam0==Global_1666831.f_1){
return;
}}
if(func_431(iParam0)){
return;
}
if(Global_1666869 >=32){
return;
}
Global_1666836[Global_1666869]=iParam0;
Global_1666869++;
if(bParam1){}}

int func_431(int iParam0){
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

int func_432(int iParam0){
int iVar0;
if(!func_6(iParam0, 0, 1)){
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
func_433(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_433(int iParam0){
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
func_434(&(Global_1666668[iVar2 /*5*/]));
Global_1666829=(Global_1666829 - 1);
}


void func_434(var uParam0){
*uParam0=0;
uParam0->f_1=func_13();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


void func_435(){
Global_1649046.f_40.f_9=4;
}

int func_436(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_435();
bVar0=false;
return func_398(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_437(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
bVar0=false;
return func_438(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_438(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
char* sVar4;
var uVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bool bVar12;
iVar0=func_13();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_429(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649046.f_40.f_13)){
return 0;
}}
Global_22786=iVar1;
}else{
sVar2="";
}
iVar3=0;
sVar4=func_428(uParam5, bParam6, &iVar3);
uVar5=func_426(iParam7, &iVar3);
iVar6=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
iVar6++;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
iVar6++;
}}
if(MISC::ARE_STRINGS_EQUAL(sVar4, " ")){
sVar4="";
}
bVar7=true;
iVar8=0;
iVar9=0;
iVar10=1;
iVar11=0;
if(bParam3){
iVar9=1;
iVar10=2;
iVar11=1;
if(MISC::IS_BIT_SET(uParam4, 1)){
iVar8=1;
}}
if(MISC::IS_BIT_SET(uParam4, 2)){
iVar10=2;
}
bVar12=false;
if(!iVar3==0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
bVar12=func_448(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_440(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_401();
}
func_439();
func_400();
func_399();
return 1;
}


void func_439(){
Global_1649046.f_40.f_9=3;
}

int func_440(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
MISC::CLEAR_BIT(&Global_8253, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_442(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_8960=iParam6;
Global_8863[3 /*6*/]={
func_441(iParam0) 
};
Global_8940=iParam0;
MISC::SET_BIT(&Global_8253, true);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}


struct<4> func_441(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_442(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_418();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20383==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20383==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20383==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_447()==0){
func_445();
return 0;
}
func_444(Global_22792);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/]), sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=uParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=uParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=uParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=uParam11;
Global_113648.f_14143[Global_22792 /*104*/].f_28=0;
Global_113648.f_14143[Global_22792 /*104*/].f_32=iParam3;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=iParam6;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_413(0);
func_413(2);
func_413(1);
}else{
func_418();
switch (iParam16){
case 3:
Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
break;
case 2:
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
break;
case 1:
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case 0:
func_413(0);
Global_8959=0;
break;
case 1:
func_413(1);
Global_8959=1;
break;
case 2:
func_413(2);
Global_8959=2;
break;
case 3:
func_413(3);
Global_8959=3;
break;
default:
Global_8959=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14053[0 /*20*/].f_17=1;
Global_113648.f_14053[1 /*20*/].f_17=1;
Global_113648.f_14053[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113648.f_14053[Global_20383 /*20*/].f_17=1;
break;
case 0:
Global_113648.f_14053[0 /*20*/].f_17=1;
break;
case 2:
Global_113648.f_14053[2 /*20*/].f_17=1;
break;
case 1:
Global_113648.f_14053[1 /*20*/].f_17=1;
break;
}}}
Global_22794[Global_22792]=0;
if(bParam10){
func_418();
if(Global_20326){
StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1){
if(!func_412()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, 1);
}}}
if(!Global_20585){
if(Global_20383.f_1==6){
func_411(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_408(1);
func_411(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527){
bVar1=true;
}
func_443(iParam0, sParam1, bVar1, func_407(PLAYER::PLAYER_ID()));
return 1;
}


void func_443(int iParam0, char* sParam1, bool bParam2, var uParam3){
if(!func_405()){
return;
}
STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2){
Global_1977527=-1;
}}


void func_444(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_113648.f_14143[iParam0 /*104*/].f_18=uVar0;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_1=uVar1;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_2=uVar2;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_3=uVar3;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_445(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_446(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}
iVar2++;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
}

int func_446(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_447(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0){
Global_22792=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0 || Global_113648.f_14143[iVar2 /*104*/].f_24==1){
if(!func_446(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}}
if(Global_113648.f_14143[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22792==34){
return 0;
}
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}

int func_448(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
int iVar0;
switch (iParam14){
case 0:
sParam15="NULL";
sParam16="NULL";
break;
case 1:
sParam16="NULL";
break;
case 2:
break;
default:
break;
}
MISC::CLEAR_BIT(&Global_8253, 10);
iVar0=3;
if(func_442(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_8960=iParam10;
Global_8863[3 /*6*/]={
func_441(iParam0) 
};
Global_8940=iParam0;
StringCopy(&Global_8941, sParam5, 64);
MISC::SET_BIT(&Global_8253, true);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}

int func_449(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
func_439();
bVar0=true;
if(func_438(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8)){
func_397(120000);
return 1;
}
return 0;
}

int func_450(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}}
bVar0=false;
iVar1=12;
if(MISC::IS_BIT_SET(uParam4, 7)){
iVar1=9;
}
if(MISC::IS_BIT_SET(uParam4, 4)){
bVar0=func_467(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}else{
bVar0=func_456(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}
if(bVar0){
if(MISC::IS_BIT_SET(uParam4, 3)){
func_455(1);
}
if(MISC::IS_BIT_SET(uParam4, 5)){
func_454(1);
}
func_453();
func_400();
func_452();
func_451();
return 1;
}
return 0;
}


void func_451(){
Global_2803164=0;
}


void func_452(){
Global_1649046.f_57=1;
Global_1649046.f_57.f_1=0;
}


void func_453(){
Global_1649046.f_40.f_9=1;
}


void func_454(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8255, false);
}else{
MISC::CLEAR_BIT(&Global_8255, false);
}}


void func_455(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 20);
}else{
MISC::CLEAR_BIT(&Global_8253, 20);
}}

int func_456(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_466(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
Global_21773=0;
Global_21732=1;
Global_21739=0;
Global_21734=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_21730=0;
Global_21777=0;
Global_21779=0;
Global_2883585=0;
return func_457(sParam3, iParam4, bParam7);
}

int func_457(char* sParam0, int iParam1, bool bParam2){
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=0;
Global_20382=0;
}else{
func_465();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_464(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_463();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, false);
if(bParam2){
func_418();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_462()){
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
if(!Global_78558){
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
if(func_461()){
return 0;
}else{
switch (Global_20383.f_1){
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
if(MISC::IS_BIT_SET(Global_8253, 9)){
return 0;
}}
func_460();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_459();
func_458();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_465();
}
return 0;
}


void func_458(){
if(!func_405()){
return;
}
if(Global_21731){
MemCopy(&(Global_1977511.f_1),{
Global_21344
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}}


void func_459(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_460(){
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_461(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_462(){
int iVar0;
int iVar1;
if(Global_78558){
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


void func_463(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21014[iVar0 /*10*/]=0;
StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
Global_21014[iVar0 /*10*/].f_7=0;
Global_21014[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
}


bool func_464(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_465(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9) || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21725=6;
return;
}}


void func_466(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=iParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}}

int func_467(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_466(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
Global_21773=1;
Global_21732=1;
Global_21739=0;
Global_21734=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_21730=0;
Global_21777=0;
Global_21779=0;
Global_2883585=0;
return func_457(sParam3, iParam4, bParam7);
}

int func_468(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_470(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1)){
func_469();
func_453();
func_400();
func_452();
func_451();
return 1;
}
return 0;
}


void func_469(){
Global_22743=0;
}


bool func_470(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8){
func_466(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
Global_21773=0;
Global_21732=1;
Global_21739=0;
Global_21734=1;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_21730=0;
Global_21777=1;
Global_21779=0;
StringCopy(&Global_21873, sParam5, 24);
Global_2883585=0;
return func_457(sParam3, iParam4, bParam8);
}

int func_471(var uParam0, char* sParam1, char* sParam2){
if(func_473(uParam0, sParam1, sParam2, 12, 0, 0, 0)){
func_472();
func_400();
func_452();
return 1;
}
return 0;
}


void func_472(){
Global_1649046.f_40.f_9=2;
}


bool func_473(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_466(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_457(sParam2, iParam3, 0);
}


void func_474(){
Global_1649046.f_55=Global_1649046.f_40.f_1;
Global_1649046.f_55.f_1=Global_1649046.f_40.f_10;
}


void func_475(){
Global_1649046.f_40=1;
}


bool func_476(){
return Global_1649046.f_40==1;
}

int func_477(int iParam0, int iParam1, int iParam2){
if(!func_478(iParam0)){
return 0;
}
if(Global_1649046.f_40.f_2 !=iParam1){
return 0;
}
if(iParam2 !=0){
if(Global_1649046.f_40.f_3 !=iParam2){
return 0;
}}
return 1;
}

int func_478(int iParam0){
if(!func_479()){
return 0;
}
if(!Global_1649046.f_40.f_1==iParam0){
return 0;
}
return 1;
}

int func_479(){
if(Global_1649046.f_40==0){
return 0;
}
return 1;
}

int func_480(var uParam0){
if(func_484()){
return 0;
}
if(func_483()){
return 0;
}
if(func_386(0)){
return 0;
}
if(Global_1574632.f_18 !=0){
return 0;
}
if(Global_1935176 || func_482()){
return 0;
}
if(!MISC::IS_BIT_SET(uParam0, 6)){
if(func_481()){
return 0;
}}
return 1;
}


bool func_481(){
return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665292);
}

int func_482(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}


bool func_483(){
return Global_1649046.f_40==3;
}


bool func_484(){
return func_461();
}

int func_485(int iParam0, int iParam1, int iParam2){
if(!func_483()){
return 0;
}
return func_477(iParam0, iParam1, iParam2);
}

int func_486(char* sParam0, char* sParam1){
char cVar0[64];
StringCopy(&cVar0, sParam0, 64);
StringConCat(&cVar0, sParam1, 64);
return MISC::GET_HASH_KEY(&cVar0);
}


bool func_487(){
return Global_2800025.f_1;
}

int func_488(){
if(Global_1649234.f_2){
return 1;
}
return func_489();
}


bool func_489(){
return func_484();
}


void func_490(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(iParam2)){
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

int func_491(bool bParam0){
switch (bParam0){
case 0:
return 1;
break;
}
return 0;
}

int func_492(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_493(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_494(uParam0, 0, 0);
}}}


void func_494(var uParam0, bool bParam1, bool bParam2){
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


void func_495(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63.f_10[iLocal_77 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50625f)){
if(!MISC::IS_BIT_SET(iLocal_66, 4)){
MISC::SET_BIT(&iLocal_66, 4);
}}elseif(!MISC::IS_BIT_SET(iLocal_66, 5)){
if(Local_63.f_42 !=-1){
if(iLocal_77==Local_63.f_42){
if(!MISC::IS_BIT_SET(iLocal_66, 5)){
MISC::SET_BIT(&iLocal_66, 5);
}}}}}}
func_496(iLocal_77);
iLocal_77++;
if(iLocal_77 >=func_491(bLocal_69)){
if((!MISC::IS_BIT_SET(iLocal_66, 4) && MISC::IS_BIT_SET(Local_63.f_1, 8)) || MISC::IS_BIT_SET(iLocal_66, 5)){
if(!MISC::IS_BIT_SET(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1)){
MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), true);
}}elseif(MISC::IS_BIT_SET(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1)){
MISC::CLEAR_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), true);
}
MISC::CLEAR_BIT(&iLocal_66, 4);
MISC::CLEAR_BIT(&iLocal_66, 5);
iLocal_77=0;
}}


void func_496(int iParam0){
int iVar0;
var uVar1;
int iVar2;
struct<3> Var3;
bool bVar4;
float fVar5;
int iVar6;
var uVar7;
int iVar8;
iVar2=0;
Var3={
0f, 0f, 0f 
};
bVar4=false;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/])){
iVar0=NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
if(bLocal_69==0){
if(PLAYER::PLAYER_ID()==iLocal_71){
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
if(Local_63.f_10[iParam0 /*7*/].f_5==2){
bVar4=true;
}}}}
if(PLAYER::PLAYER_ID()==iLocal_70){
if(MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 1)){
if(!MISC::IS_BIT_SET(iLocal_67[iParam0], 0)){
MISC::SET_BIT(&Global_1835490, false);
MISC::SET_BIT(&(iLocal_67[iParam0]), false);
}
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 9)){
if(!MISC::IS_BIT_SET(iLocal_67[iParam0], 1)){
bVar4=true;
}}elseif(MISC::IS_BIT_SET(iLocal_67[iParam0], 1)){
MISC::CLEAR_BIT(&(iLocal_67[iParam0]), true);
}}}
if(bVar4){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/])){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/])){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]);
}}}
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/])){
if(PLAYER::PLAYER_ID()==iLocal_70){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !MISC::IS_BIT_SET(iLocal_67[iParam0], 1)){
if(NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar0, PLAYER::PLAYER_ID())){
switch (Local_63.f_10[iParam0 /*7*/].f_1){
case 0:
func_518(iVar0, 3);
break;
}
MISC::SET_BIT(&(iLocal_67[iParam0]), true);
}}}
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !PED::IS_PED_INJURED(iVar0)){
switch (Local_63.f_10[iParam0 /*7*/].f_5){
case 0:
break;
case 1:
PED::SET_PED_RESET_FLAG(iVar0, 187, 1);
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
if(MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 2)){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 3)){
TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
}}
}
if(PLAYER::PLAYER_ID()==iLocal_71 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1), 25f)){
MISC::SET_BIT(&(Global_2793046.f_4688), false);
}
else{
MISC::CLEAR_BIT(&(Global_2793046.f_4688), false);
}
if(!PED::IS_PED_FLEEING(iVar0)){
if(!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29)){
if(func_6(iLocal_71, 1, 1)){
if(!MISC::IS_BIT_SET(Local_63.f_2, 13)){
if(func_517(iLocal_71) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_71))){
if(!func_516(iVar0, joaat("script_task_enter_vehicle"))){
if(func_515(iVar0)){
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_71), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
}
if(!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_514(PLAYER::GET_PLAYER_PED(iLocal_71), 0))){
TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_513(PLAYER::GET_PLAYER_PED(iLocal_71), iVar1), func_512(iParam0), 1179977, 0);
}
}}}
}
elseif(!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::GET_PLAYER_PED(iLocal_71)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1)){
if(func_516(iVar0, joaat("script_task_enter_vehicle"))){
TASK::CLEAR_PED_TASKS(iVar0);
}
if(!func_516(iVar0, joaat("script_task_go_to_entity"))){
if(func_515(iVar0)){
TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), -1, 0f, func_512(iParam0), 1073741824, 0);
}}else{
PED::SET_PED_RESET_FLAG(iVar0, 151, 1);
}
}
}}}
}
break;
case 2:
if(PLAYER::PLAYER_ID()==iLocal_71 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), 1), 25f)){
MISC::SET_BIT(&(Global_2793046.f_4688), false);
}
else{
MISC::CLEAR_BIT(&(Global_2793046.f_4688), false);
}
if(PLAYER::PLAYER_ID()==iLocal_71){
if(!MISC::IS_BIT_SET(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::PLAYER_PED_ID())){
iVar2=func_510(PLAYER::PLAYER_ID());
fVar5=(to_float(Global_262145.f_7110) / 100f);
iVar2=round((to_float(iVar2) * fVar5));
iVar6=func_407(PLAYER::PLAYER_ID());
if(iVar6 > 100){
iVar6=100;
}
if(iVar2 > (iVar6 * Global_262145.f_7111)){
iVar2=(iVar6 * Global_262145.f_7111);
}
if(iVar2 > 0){
MISC::SET_BIT(&iLocal_66, 16);
}
TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
if(!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::GET_PLAYER_PED(iLocal_71))){
Var3={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
Var3={
func_509(Var3) 
};
Var3.f_0=(Var3.f_0 * 3f);
Var3.f_1=(Var3.f_1 * 3f);
Var3.f_2=(Var3.f_2 * 3f);
ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
}
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 1);
if(((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && func_507(iVar0)) && func_514(iVar0, 0)==-1){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 1);
}
else{
TASK::CLEAR_PED_TASKS(iVar0);
TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 1, 0);
}
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3=iVar2;
if(iVar2 > 0){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2=iParam0;
}
else{
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2=-1;
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837215);
MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), false);
MISC::SET_BIT(&(Global_2793046.f_4688), 2);
}}}
}
break;
case 3:
if(PED::GET_PED_RESET_FLAG(iVar0, 187)){
PED::SET_PED_RESET_FLAG(iVar0, 187, 0);
}
if(Local_63.f_10[iParam0 /*7*/].f_4==0){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 4)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
PED::SET_PED_CONFIG_FLAG(iVar0, 118, 1);
}
}
if(!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0)==PLAYER::GET_PLAYER_PED(iLocal_71))){
if(!PED::IS_PED_FLEEING(iVar0)){
if(func_515(iVar0)){
if((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && !MISC::IS_BIT_SET(Local_63.f_2, 10)){
if(!func_516(iVar0, joaat("script_task_vehicle_drive_wander")) && !func_516(iVar0, joaat("script_task_vehicle_mission"))){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0)){
uVar7=PED::GET_VEHICLE_PED_IS_IN(iVar0, 1);
iVar8=ENTITY::GET_ENTITY_MODEL(uVar7);
if(MISC::IS_BIT_SET(Local_63.f_2, 13)){
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 0);
}elseif(VEHICLE::IS_THIS_MODEL_A_HELI(iVar8)){
TASK::TASK_HELI_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8)){
TASK::TASK_PLANE_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
}elseif(ENTITY::GET_ENTITY_MODEL(iVar7)==joaat("taxi")){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), 10000f, -1, 1, 0);
}else{
TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, 1), 60f, 786468);
}}
}
}
elseif(!func_516(iVar0, joaat("script_task_smart_flee_ped"))){
if(func_6(iLocal_71, 1, 1)){
TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), 10000f, -1, 1, 0);
}
}}}
}
break;
case 4:
func_505(Local_63.f_10[iParam0 /*7*/], 0);
break;
}
if(MISC::IS_BIT_SET(Local_63.f_2, 13)){
TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]));
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 6, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, 0);
}
func_497(iVar0);
}}}}


void func_497(int iParam0){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(iLocal_66, 16)){
iVar0=Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
iVar1=func_498(iVar0);
if(iVar1==1){
MISC::CLEAR_BIT(&iLocal_66, 15);
MISC::CLEAR_BIT(&iLocal_66, 16);
if(!func_51()){
MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, 0, 0, 0);
}
if(iVar0 > Global_262145.f_8529){
iVar0=Global_262145.f_8529;
}
PED::SET_PED_MONEY(iParam0, iVar0);
MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
}elseif(iVar1==0){
MISC::CLEAR_BIT(&iLocal_66, 15);
MISC::CLEAR_BIT(&iLocal_66, 16);
MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
}else{
return;
}}}

int func_498(int iParam0){
if(func_51()){
if(func_501(uParam0)){
if(func_500(iLocal_254)==2){
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_499(iLocal_254));
MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(uParam0, 0, 0, 0);
func_327(iLocal_254);
return 1;
}else{
func_327(iLocal_254);
return 0;
}}}else{
return 1;
}
return -1;
}

int func_499(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_500(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_501(var uParam0){
if(!MISC::IS_BIT_SET(iLocal_66, 15)){
func_325(&iLocal_254, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
func_504(&uLocal_255, 0, 0);
MISC::SET_BIT(&iLocal_66, 15);
}elseif(func_503(iLocal_254) || func_502(&uLocal_255, 10000, 0)){
return 1;
}
return 0;
}

int func_502(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_494(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}

int func_503(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}


void func_504(var uParam0, bool bParam1, bool bParam2){
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


void func_505(var uParam0, bool bParam1){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0)){
if(!func_506(uParam0)){
if(MISC::IS_BIT_SET(Local_63.f_2, 13)){
TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(uParam0));
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 6, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 1, 0);
}else{
if(bParam1){
TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(uParam0));
}
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 6, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 1, 1);
}}}
func_249(&uParam0);
}}

int func_506(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}

int func_507(int iParam0){
var uVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
}
if(PED::IS_PED_JACKING(iParam0)){
uVar0=PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
}
if(!ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(func_517(iLocal_71)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_71), 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(func_508(iVar0)){
return 0;
}
if(PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0))){
if(!ENTITY::IS_ENTITY_IN_WATER(iVar0)){
return 0;
}}
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("trailersmall2")){
return 0;
}}
return 1;
}

int func_508(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}else{
return 1;
}
return 0;
}


Vector3 func__509(struct<3> Param0){
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

int func_510(int iParam0){
var uVar0;
uVar0=func_511(iParam0);
return uVar0;
}

int func_511(int iParam0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
}elseif(func_301(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_3;
}else{
return 0;
}}
return 0;
}


float func_512(int iParam0){
if(!MISC::IS_BIT_SET(Local_63.f_10[iParam0 /*7*/].f_2, 2)){
return 1f;
}
return 3f;
}

int func_513(int iParam0, int iParam1){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0)==iParam0){
return -1;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0)==iParam0){
return 0;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0)==iParam0){
return 1;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0)==iParam0){
return 2;
}}}
return -2;
}

int func_514(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
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

int func_515(int iParam0){
if((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0)){
return 1;
}
return 0;
}

int func_516(int iParam0, int iParam1){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}
return 0;
}

int func_517(int iParam0){
if(PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iParam0)){
return 0;
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0))){
return 1;
}
return 0;
}


void func_518(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
if(DECORATOR::DECOR_EXIST_ON(uParam0, "AttributeDamage")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
}
MISC::SET_BIT(&iVar0, iParam1);
DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}


void func_519(){
bool bVar0;
bool bVar1;
bool bVar2;
int iVar3;
bVar0=MISC::IS_BIT_SET(Local_63.f_2, 6);
bVar1=MISC::IS_BIT_SET(Local_63.f_2, 10);
func_524();
if(bLocal_69 !=1){
if(MISC::IS_BIT_SET(Local_63.f_3, 12)){
func_521();
}}
if(HUD::DOES_BLIP_EXIST(uLocal_78)){
func_520(&uLocal_78);
}
iVar3=0;
while (iVar3 < func_491(bLocal_69)){
iLocal_67[iVar3]=0;
iVar3++;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_63.f_42=-1;
Local_63.f_5=uLocal_74;
Local_63.f_6=uLocal_74;
Local_63.f_7=uLocal_74;
Local_63.f_1=0;
Local_63.f_4=0;
Local_63.f_2=0;
iVar3=0;
while (iVar3 < func_491(bLocal_69)){
bVar2=MISC::IS_BIT_SET(Local_63.f_10[iVar3 /*7*/].f_2, 6);
Local_63.f_10[iVar3 /*7*/].f_2=0;
Local_63.f_10[iVar3 /*7*/].f_6=-1;
if(bVar2){
MISC::SET_BIT(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
}
iVar3++;
}}
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1=0;
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2=-1;
iLocal_66=0;
if(bVar0){
MISC::SET_BIT(&(Local_63.f_2), 6);
}
if(bVar1){
MISC::SET_BIT(&(Local_63.f_2), 11);
MISC::SET_BIT(&iLocal_66, 8);
}
MISC::SET_BIT(&iLocal_66, 4);
MISC::SET_BIT(&iLocal_66, 11);
}


void func_520(var uParam0){
bool bVar0;
struct<8> Var1;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
bVar0=true;
}
if(HUD::DOES_BLIP_EXIST(uParam0->f_1)){
HUD::REMOVE_BLIP(&(uParam0->f_1));
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_7)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0)){
if(HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7)){
HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
}}
bVar0=true;
}
if(bVar0){
*uParam0={
Var1 
};
}}


void func_521(){
switch (bLocal_69){
case 0:
func_523(&(Global_1837223[3]));
break;
case 1:
func_522();
break;
}}


void func_522(){
int iVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=0;
while (iVar0 < 32){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837175[iVar0], -1467815081);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1837175[iVar0]);
iVar0++;
}}}


void func_523(var uParam0){
int iVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=0;
while (iVar0 < 32){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837175[iVar0], *uParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837175[iVar0]);
iVar0++;
}}}


void func_524(){
int iVar0;
bool bVar1;
iVar0=0;
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
bVar1=false;
if(bLocal_69==0){
if(!MISC::IS_BIT_SET(Local_63.f_2, 1)){
bVar1=true;
}}
func_505(Local_63.f_10[iVar0 /*7*/], bVar1);
iVar0++;
}}


void func_525(){
func_526();
if(bLocal_69 !=1){
func_495();
}}


void func_526(){
int iVar0;
var uVar1;
iVar0=0;
while (iVar0 < func_491(bLocal_69)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iVar0 /*7*/])){
uVar1=NETWORK::NET_TO_PED(Local_63.f_10[iVar0 /*7*/]);
if(!ENTITY::IS_ENTITY_DEAD(uVar1, 0)){
PED::SET_PED_RESET_FLAG(iVar1, 151, 1);
}}}
iVar0++;
}
if(Global_2793046.f_1796){}
if(bLocal_69==1){
if(PLAYER::PLAYER_ID()==iLocal_71){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(!MISC::IS_INCIDENT_VALID(uLocal_251)){
if(func_6(iLocal_71, 1, 1)){
if(Local_63.f_50){
MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &uLocal_251, -1467815081, 0);
}
elseif(Local_63.f_52){
MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &uLocal_251, -1467815081, Local_63.f_53);
}
else{
MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &uLocal_251, 0, 0);
}}}
if(Global_2793046.f_1796){
if(!MISC::IS_BIT_SET(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3)){
MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
}}}}}elseif(bLocal_69==0){
if(Local_63.f_42 !=-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63.f_10[Local_63.f_42 /*7*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_530(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/]))){
if(Local_63.f_10[Local_63.f_42 /*7*/].f_5==3){
func_527(Local_63.f_10[Local_63.f_42 /*7*/], &uLocal_78, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
if(HUD::DOES_BLIP_EXIST(uLocal_78)){
if(!MISC::IS_BIT_SET(iLocal_66, 6)){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_78, "FM_MGR_BLP");
MISC::SET_BIT(&iLocal_66, 6);
}
}}}elseif(HUD::DOES_BLIP_EXIST(uLocal_78)){
func_520(&uLocal_78);
}}
if(PLAYER::PLAYER_ID()==iLocal_70){
if(!MISC::IS_BIT_SET(iLocal_66, 14)){
if(func_385("MPCT_mugsuc", "LAMAR", 19)){
MISC::SET_BIT(&iLocal_66, 14);
}}}}}}


void func_527(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
if(func_529(0)){
Global_2672505=PLAYER::PLAYER_ID();
}
if(bParam3){
func_528(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}else{
func_528(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}}elseif(HUD::DOES_BLIP_EXIST(*uParam1)){
func_520(uParam1);
}}

int func_528(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12){
bool bVar0;
if(iParam3==0){
iParam3=PLAYER::GET_PLAYER_INDEX();
}
if(fParam6 < 0f){
fParam6=100f;
}
if(!PED::IS_PED_INJURED(uParam0)){
if(!HUD::DOES_PED_HAVE_AI_BLIP(iParam0)){
bVar0=true;
if(PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11){
bVar0=false;
}
if(bVar0){
if(iParam8==-1){
HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
}else{
HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, 1, iParam8);
}
uParam1->f_7=iParam0;
HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
if(HUD::DOES_BLIP_EXIST(*uParam1)){
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}}
if(!iParam9==-1){
HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
}
HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, uParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, uParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
if(!iParam9==-1 || uParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
}
HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
}
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}
if(!MISC::IS_BIT_SET(uParam1->f_6, 2)){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
MISC::SET_BIT(&(uParam1->f_6), 2);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
uParam1->f_1=HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
if(!MISC::IS_BIT_SET(uParam1->f_6, 3)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
}
HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
}
HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
MISC::SET_BIT(&(uParam1->f_6), 3);
}}elseif(!HUD::DOES_BLIP_EXIST(uParam1->f_1)){
uParam1->f_1=0;
MISC::CLEAR_BIT(&(uParam1->f_6), 3);
}}elseif(HUD::DOES_BLIP_EXIST(uParam1->f_1)){
uParam1->f_1=0;
MISC::CLEAR_BIT(&(uParam1->f_6), 3);
}}else{
return 1;
}
return 0;
}


bool func_529(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_530(int iParam0){
var uVar0;
var uVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset")){
uVar1=DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
}
if(MISC::IS_BIT_SET(uVar1, 12)){
return 1;
}}}}
return 0;
}

int func_531(){
return Local_63.f_0;
}

int func_532(int iParam0){
return Local_65[iParam0 /*5*/];
}


void func_533(){
if(PLAYER::PLAYER_ID()==iLocal_71){
if(Global_32315){
if(!MISC::IS_BIT_SET(Local_65[bLocal_76 /*5*/].f_1, 4)){
MISC::SET_BIT(&(Local_65[bLocal_76 /*5*/].f_1), 4);
}}else{
MISC::CLEAR_BIT(&(Local_65[bLocal_76 /*5*/].f_1), 4);
}}}


void func_534(){
bool bVar0;
bVar0=false;
if(PLAYER::PLAYER_ID()==iLocal_70){
if(MISC::IS_BIT_SET(Global_1835490, 0)){
MISC::CLEAR_BIT(&Global_1835490, false);
bVar0=true;
}
if(!MISC::IS_BIT_SET(Local_65[iLocal_70 /*5*/].f_1, 2)){
if(MISC::IS_BIT_SET(Local_63.f_1, 11)){
MISC::SET_BIT(&(Local_65[iLocal_70 /*5*/].f_1), 2);
bVar0=true;
}}elseif(!MISC::IS_BIT_SET(Local_63.f_1, 11)){
MISC::CLEAR_BIT(&(Local_65[iLocal_70 /*5*/].f_1), 2);
}
if(bVar0){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4=func_538();
func_535(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
}}elseif(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 !=Local_63.f_44){
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4=Local_63.f_44;
func_535(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
bVar0=true;
}}


void func_535(var uParam0){
switch (bLocal_69){
case 0:
func_537(&(Global_1837223[3]), uParam0);
break;
case 1:
func_536(uParam0);
break;
}}


void func_536(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 32){
if(MISC::IS_BIT_SET(uParam0, bVar0)){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837175[bVar0], -1467815081);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1837175[bVar0]);
}else{
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837175[bVar0], -1467815081);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1837175[bVar0]);
}
bVar0++;
}}


void func_537(var uParam0, var uParam1){
bool bVar0;
bVar0=false;
while (bVar0 < 32){
if(MISC::IS_BIT_SET(uParam1, bVar0)){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837175[bVar0], *uParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1837175[bVar0]);
}else{
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837175[bVar0], *uParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837175[bVar0]);
}
bVar0++;
}}

int func_538(){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < 32){
if(bLocal_69==1 || bLocal_69==0){
if(iLocal_70==PLAYER::INT_TO_PLAYERINDEX(iVar1)){
MISC::SET_BIT(&iVar0, bVar1);
}}elseif(PLAYER::PLAYER_ID()==PLAYER::INT_TO_PLAYERINDEX(bVar1)){
MISC::SET_BIT(&iVar0, bVar1);
}elseif(func_6(PLAYER::INT_TO_PLAYERINDEX(bVar1), 0, 1)){
if(func_52(PLAYER::INT_TO_PLAYERINDEX(bVar1))){
MISC::SET_BIT(&iVar0, bVar1);
}}
bVar1++;
}
return iVar0;
}


void func_539(){
switch (bLocal_69){
case 0:
if(!MISC::IS_BIT_SET(iLocal_66, 11)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 1, 1)){
func_346("GC_TCK_60", iLocal_71, 0, 0, 0, 1, 0);
MISC::SET_BIT(&iLocal_66, 11);
}}}
if(!MISC::IS_BIT_SET(iLocal_66, 12)){
if(MISC::IS_BIT_SET(Local_63.f_1, 8)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 1, 1)){
func_346("GC_TCK_62", iLocal_71, 0, 0, 0, 1, 0);
MISC::SET_BIT(&iLocal_66, 12);
}}}}
if(MISC::IS_BIT_SET(Local_63.f_2, 10)){
if(!MISC::IS_BIT_SET(iLocal_66, 8)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 1, 1)){
func_346("GC_TCK_65", iLocal_71, 0, 0, 0, 1, 0);
MISC::SET_BIT(&iLocal_66, 8);
}}}}elseif(!MISC::IS_BIT_SET(iLocal_66, 13)){
if(!MISC::IS_BIT_SET(Local_63.f_2, 11)){
if(MISC::IS_BIT_SET(Local_63.f_1, 8)){
if(MISC::IS_BIT_SET(Local_63.f_2, 6)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 1, 1)){
func_346("GC_TCK_63", iLocal_71, 0, 0, 0, 1, 0);
MISC::SET_BIT(&iLocal_66, 13);
}}
}}}}
break;
case 1:
if(!MISC::IS_BIT_SET(iLocal_66, 11)){
if(PLAYER::PLAYER_ID()==iLocal_70){
if(func_6(iLocal_71, 1, 1) && PLAYER::PLAYER_ID() !=iLocal_71){
if(Local_63.f_50){
func_346("HS_SUCC", iLocal_71, 0, 0, 0, 1, 0);
}
elseif(Local_63.f_52){
func_346("GO_ASS_SUCC", iLocal_71, 0, 0, 0, 1, 0);
}
else{
func_346("GC_TCK_70", iLocal_71, 0, 0, 0, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 11);
}}elseif(PLAYER::PLAYER_ID()==iLocal_71){
if(func_6(iLocal_70, 1, 1)){
if(Local_63.f_50){
if(Local_63.f_51){
func_541("HS_A_SUCC", 0);
}else{
func_346("HS_SENT", iLocal_70, 0, 0, 0, 1, 0);
}
}
elseif(Local_63.f_52){
func_346("GO_ASS_SENT", iLocal_70, 0, 0, 0, 1, 0);
}
else{
func_346("GC_TCK_71", iLocal_70, 0, 0, 0, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 11);
}}}
if(!MISC::IS_BIT_SET(iLocal_66, 10)){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(MISC::IS_BIT_SET(Local_63.f_3, 6)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 0, 1)){
func_540(-1, 1);
if(Local_63.f_50){
if(!Local_63.f_51){
func_346("HS_KILLED", iLocal_71, 0, 0, 0, 1, 0);
}}elseif(Local_63.f_52){
func_346("GO_ASS_KILL", iLocal_71, 0, 0, 0, 1, 0);
}else{
func_346("GC_TCK_73", iLocal_71, 0, 0, 0, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 10);
}
}}}}
if(!MISC::IS_BIT_SET(iLocal_66, 9)){
if(MISC::IS_BIT_SET(Local_63.f_1, 0)){
if(MISC::IS_BIT_SET(Local_63.f_3, 7)){
if(PLAYER::PLAYER_ID()==iLocal_70 && PLAYER::PLAYER_ID() !=iLocal_71){
if(func_6(iLocal_71, 0, 1)){
if(Local_63.f_50){
func_346("HS_ESCAPED", iLocal_71, 0, 0, 0, 1, 0);
}elseif(Local_63.f_52){
func_346("GO_ASS_ESC", iLocal_71, 0, 0, 0, 1, 0);
}else{
func_346("GC_TCK_75", iLocal_71, 0, 0, 0, 1, 0);
}
MISC::SET_BIT(&iLocal_66, 9);
}
}}}}
break;
}}


void func_540(bool bParam0, int iParam1){
if(Global_1836587){
if(Global_1836591 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=148){
if(Global_1836078.f_14==PLAYER::INT_TO_PLAYERINDEX(iParam0)){
Global_1889700=(Global_1889700 + iParam1);
}}else{
Global_1889700=(Global_1889700 + iParam1);
}}}

int func_541(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_347(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_542(){
if(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) !=Local_63.f_45){
if(func_550(Local_63.f_45, 0, 1)){
if(NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <=Local_63.f_45){
NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_63.f_45);
}}}
if(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) !=Local_63.f_46){
if(func_549(Local_63.f_45, 0, 1)){
if(NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <=Local_63.f_46){
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_63.f_46);
}}}
if(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) !=Local_63.f_47){
if(func_543(Local_63.f_45, 0, 1)){
if(NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(0) <=Local_63.f_47){
NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_63.f_47);
}}}}


bool func_543(int iParam0, bool bParam1, bool bParam2){
return func_544(2, iParam0, 1, bParam1, bParam2);
}

int func_544(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666891, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_548(iParam0) - func_547(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_547(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_548(iParam0) - func_546(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_547(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_548(iParam0) - func_547(iParam0, 1));
}
if(!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=3){
iVar1=(iVar1 - func_545(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_545(int iParam0){
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

int func_546(int iParam0){
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

int func_547(int iParam0, bool bParam1){
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

int func_548(int iParam0){
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


bool func_549(int iParam0, bool bParam1, bool bParam2){
return func_544(1, iParam0, 1, bParam1, bParam2);
}


bool func_550(int iParam0, bool bParam1, bool bParam2){
return func_544(0, iParam0, 1, bParam1, bParam2);
}


void func_551(){
if(Local_63.f_50){
if(PLAYER::PLAYER_ID()==iLocal_70){
func_553(3);
}elseif(PLAYER::PLAYER_ID()==iLocal_71){
func_553(4);
}}elseif(Local_63.f_52){}
func_552();
}


void func_552(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_553(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_5), iParam0);
}

int func_554(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_560()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_559()){
return 1;
}
if(func_558(159)){
if(!func_557()){
return 1;
}}
if(func_558(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_555() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_555())==0){
return 1;
}}
return 0;
}

int func_555(){
switch (func_120()){
case 0:
return func_556();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_556(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_557(){
return Global_2683864.f_698;
}

int func_558(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_559(){
return Global_2694526;
}


bool func_560(){
return Global_2683864.f_693;
}


void func_561(){
wait(0);
}


void func_562(struct<21> Param0){
func_568(32, Param0);
func_567(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_63, 56, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_65, 161, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(!func_566()){
func_266();
}
bLocal_69=Param0.f_16;
iLocal_70=PLAYER::INT_TO_PLAYERINDEX(Param0.f_17);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_70)){}
iLocal_71=PLAYER::INT_TO_PLAYERINDEX(Param0.f_18);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_71)){
iLocal_72=MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_71));
}
if(func_565(iLocal_70, 3) && bLocal_69==1){
Local_63.f_50=1;
if(func_565(iLocal_71, 4)){
Local_63.f_51=1;
}}
if(bLocal_69==1){
if(func_564(iLocal_70)){
Local_63.f_52=1;
Local_63.f_53=func_563(iLocal_70);
}}
Local_73={
Param0.f_10 
};
if(bLocal_69==1){
if(PLAYER::PLAYER_ID()==iLocal_70){
MISC::SET_BIT(&Global_1835490, false);
}}
Global_1926701=0;
Global_1926702=0;
if(bLocal_69==1){
Global_2793046.f_1796=0;
}
Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/]=0;
}


var func__563(int iParam0){
return Global_1853910[iParam0 /*862*/].f_180.f_4;
}


bool func_564(int iParam0){
return Global_1853910[iParam0 /*862*/].f_180 !=func_13();
}


bool func_565(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}

int func_566(){
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
if(func_560()){
return 0;
}
if(func_558(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_567(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_552();
}else{
return 0;
}}
if(!func_529(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_552();
}else{
return 0;
}}
if(func_560()){
if(!bParam2){
func_552();
}else{
return 0;
}}
if(func_558(157)){
if(!bParam2){
func_552();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_552();
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
func_552();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_552();
}else{
return 0;
}}
return 1;
}


void func_568(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_552();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}