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
int iLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
struct<9> Local_44={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
char* sLocal_45[46]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
bool bLocal_46=0;
var uLocal_47[2]={
0, 0 
};
float fLocal_48=0f;
var uLocal_49=0;
struct<3> Local_50={
0, 0, 0 
};
int iLocal_51=0;
struct<3> Local_52={
0, 0, 0 
};
float fLocal_53=0f;
struct<67> Local_54={
0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
int iLocal_66[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_67=0;
struct<261> Local_68[4];
char* sLocal_69[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
char* sLocal_70=NULL;
bool bLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
var uLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
char* sLocal_79=NULL;
var uLocal_80=16;
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
int iLocal_245=0;
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
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
iLocal_43=145;
bLocal_46=-1;
fLocal_48=0f;
Local_50={
0f, 0f, 0f 
};
Local_52={
0f, 0f, 0f 
};
fLocal_53=0f;
iLocal_67=1;
sLocal_70="";
iLocal_73=-1;
iLocal_76=-1;
iLocal_78=-1;
iLocal_245=-1;
if(!func_272(26)){
iLocal_37=Global_113648.f_10051.f_128;
if(iLocal_37==2){
MISC::SET_BIT(&uLocal_49, 10);
Local_52={
func_271(25) 
};
fLocal_53=func_270(25);
if(func_269(&Local_54, 25)){
if(!MISC::IS_BIT_SET(uLocal_49, 14)){
MISC::SET_BIT(&uLocal_49, 14);
}}}}else{
Global_113648.f_10051.f_128=iLocal_37;
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
if(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP()==2){
func_260(0);
func_258(26, 1);
}else{
func_258(26, 0);
}}
func_253(0);
while (true){
if(func_252(38)){
func_258(26, 0);
}
if(func_251(PLAYER::PLAYER_PED_ID())){
func_244();
func_236();
func_235();
func_224();
switch (iLocal_37){
case 0:
func_141();
break;
case 2:
func_140();
break;
case 3:
func_131();
break;
case 4:
func_16(45);
break;
case 5:
break;
default:
break;
}
func_7();
}else{
func_1(46, 1);
}
wait(0);
}}


void func_1(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 <=(46 - 1)){
if(iParam0 !=iVar0 && iParam0 !=46){
func_4(iVar0);
}
iVar0++;
}
if(bParam1){
if(iParam0 !=46){
if((!func_2(func_3(iParam0)) && !Global_112288) && !MISC::IS_BIT_SET(uLocal_49, 15)){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}}elseif((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112288) && !MISC::IS_BIT_SET(uLocal_49, 15)){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}}}


bool func_2(var uParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


var func__3(bool bParam0){
return sLocal_45[bParam0];
}


void func_4(bool bParam0){
bool bVar0;
bVar0=func_6(bParam0);
MISC::CLEAR_BIT(&(uLocal_47[func_5(bParam0)]), bVar0);
}

int func_5(int iParam0){
int iVar0;
if(iParam0 < 32){
iVar0=0;
}else{
iVar0=1;
}
return iVar0;
}

int func_6(int iParam0){
if(iParam0 > 31){
return (iParam0 - 32);
}
return iParam0;
}


void func_7(){
if(((MISC::IS_BIT_SET(uLocal_49, 0) && !MISC::IS_BIT_SET(uLocal_49, 1)) && !MISC::IS_BIT_SET(uLocal_49, 14)) && func_13()){
if(func_12(0, 172, 0) || func_12(0, 173, 0)){
iLocal_78=MISC::GET_GAME_TIMER();
}
if(iLocal_78 !=-1){
if((MISC::GET_GAME_TIMER() - iLocal_78) < 200){
iLocal_43=func_8();
}else{
iLocal_78=-1;
}}}else{
iLocal_43=145;
iLocal_78=-1;
}}

int func_8(){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar2=0;
iVar3=145;
if(Global_78558){
iVar3=145;
}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)==1){
if(func_11()){
if(func_10()){
iVar6=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uVar0=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iVar4=MISC::GET_GAME_TIMER();
while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0) && iVar6==0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)==1){
wait(0);
iVar5=MISC::GET_GAME_TIMER();
if((iVar5 - iVar4) > 1500){
iVar6=1;
}}
iVar1=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar0);
if(iVar1 > func_9() || iVar1 < 0){
iVar1=func_9();
}
iVar2=Global_20389[iVar1];
iVar3=iVar2;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)==0){
iVar3=145;
}
if(iVar6==1){
iVar3=145;
}}else{
iVar3=145;
}}else{
iVar3=145;
}}else{
iVar3=145;
}
return iVar3;
}

int func_9(){
if(Global_32163==0 || Global_32163==2){
return 190;
}
return 161;
}

int func_10(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}

int func_11(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0){
return 1;
}
return 0;
}

int func_12(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}

int func_13(){
if(func_15(0) && func_14()){
return 1;
}
return 0;
}

int func_14(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0){
return 1;
}
return 0;
}

int func_15(int iParam0){
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


void func_16(int iParam0){
func_111();
if(iLocal_40==0){
switch (iLocal_41){
case 0:
func_110(1);
uLocal_74=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
func_1(46, 1);
iLocal_75=MISC::GET_GAME_TIMER() + 3000;
if(!MISC::IS_BIT_SET(uLocal_49, 10)){
func_94();
}
func_93(iParam0, 1);
iLocal_41=1;
break;
case 1:
if(MISC::GET_GAME_TIMER() > iLocal_75){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_74)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_74, "SHOW_MISSION_PASSED_MESSAGE");
func_92("M_FB4P3_P");
func_92("M_FB4P3");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_75=MISC::GET_GAME_TIMER() + 10000;
func_90(0);
iLocal_41=2;
}}
break;
case 2:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_74) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI()){
if(MISC::GET_GAME_TIMER() < iLocal_75){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
}elseif(MISC::GET_GAME_TIMER() < iLocal_75 + 100){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_74, "TRANSITION_OUT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_75=(iLocal_75 - 100);
}elseif(MISC::GET_GAME_TIMER() < iLocal_75 + 500){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
}else{
iLocal_41=3;
}}
break;
case 3:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_74)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_74);
}
func_110(0);
if(iLocal_42==2){
func_89(108, 0);
}
if(func_87(iLocal_51)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 1);
}
func_83("M_FHPE", func_84());
func_80(2, 0);
break;
}}
func_17();
}


void func_17(){
int iVar0;
if(!MISC::IS_BIT_SET(uLocal_49, 2)){
if(!func_79(0f, 0f, 0f, Local_52, 0)){
if(func_78(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1) && !func_77()){
if(func_87(func_76(25))){
iLocal_51=func_76(25);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, 1, 1);
if(func_87(iLocal_51)){
if(!DECORATOR::DECOR_EXIST_ON(iLocal_51, "GetawayVehicleValid")){
if(DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 1)){
}
}
MISC::SET_BIT(&uLocal_49, false);
MISC::SET_BIT(&uLocal_49, 2);
}}elseif(!func_75(25, 0)){
if(!func_87(func_76(25))){
func_70(1);
}}}elseif(func_87(iLocal_51)){
if(!func_78(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1)){
}}}}else{
if(!func_79(0f, 0f, 0f, Local_52, 0)){
if(!func_78(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1)){
if(func_87(iLocal_51)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, 0)){
func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
MISC::CLEAR_BIT(&uLocal_49, 2);
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, 0);
func_20(&iLocal_51);
MISC::CLEAR_BIT(&uLocal_49, false);
}else{
func_70(0);
}}elseif(!func_75(25, 0)){
func_70(1);
}}elseif(!func_75(25, 0)){
if(!func_87(iLocal_51)){
func_70(1);
}}elseif(!func_87(iLocal_51)){
iVar0=func_76(25);
if(func_87(iVar0) && iVar0 !=iLocal_51){
iLocal_51=iVar0;
}}}
func_18();
}}


void func_18(){
if(MISC::IS_BIT_SET(uLocal_49, 2) && MISC::IS_BIT_SET(uLocal_49, 0)){
if(func_87(iLocal_51)){
if(func_19(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 1)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_51, 1), Local_52) >=100f){
func_70(0);
}}}elseif(!func_75(25, 0)){
if(func_87(iLocal_51)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, 0);
}
func_20(&iLocal_51);
func_70(1);
}}}


bool func_19(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}


void func_20(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}}}


void func_21(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
struct<60> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam3 !=24 && iParam3 !=25){
return;
}
if(iParam3==24){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], 0)){
if(Global_77348.f_484[25]==iParam0){
return;
}}}
if(!bParam4){
if((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tourbus")){
return;
}}
func_69(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_64(iParam0, &Var0);
if(func_79(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_58(iParam3, &Var0, Param1, fParam2, func_63(iParam0));
func_22(iParam3, iParam0, 0);
}}


void func_22(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_54(&(Global_77348.f_555[0 /*21*/]), iParam0)){
return;
}
if(!MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
if(Global_77348.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(iParam1)){
return;
}}
if(Global_78255 !=-1 && Global_78255 !=iParam0){
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
}
if(iParam0==24){
Global_113648.f_32751.f_4801=func_43();
}
if(iParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
iVar0=func_76(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_23(iVar0, 145);
}}
Global_78254=iParam1;
Global_78255=iParam0;
Global_78256=iParam2;
}}}}


void func_23(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_24(iParam0)){
return;
}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_zero")){
iParam1=0;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_one")){
iParam1=1;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_two")){
iParam1=2;
}}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iParam1=Global_113648.f_2365.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113648.f_32751.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113648.f_32751.f_5590=iParam1;
Global_78253=iParam0;
Global_113648.f_32751.f_5588=1;
func_64(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_24(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_41(iParam0, 0, 0)) || func_41(iParam0, 1, 0)) || func_41(iParam0, 2, 0)) || func_63(iParam0) !=145) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || !func_25(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_39(iParam0)){
}
if(func_39(iParam0)){
}
if(func_41(iParam0, 0, 0)){
}
if(func_41(iParam0, 1, 0)){
}
if(func_41(iParam0, 2, 0)){
}
if(func_63(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_25(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_26(iParam0, 0, -1)){
return 0;
}
if(((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)){
return 0;
}
switch (iParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return 0;
break;
}
return 1;
}

int func_26(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_36()){
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
if((((!func_35() && !func_34()) && !func_33()) && !func_32()) && !func_36()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_31() || MISC::IS_PC_VERSION()) || func_30()){
}elseif(!func_33()){
return 0;
}}
if(bParam1){
if(!func_29(iParam0, iParam2)){
return 0;
}}
if(!func_27(iParam0)){
return 0;
}
return 1;
}

int func_27(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_28()){
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

int func_28(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_29(int iParam0, int iParam1){
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
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_33973 && iVar1 < Global_262145.f_33957){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}
return iVar0;
}


var func__30(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__31(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_32(){
return 0;
}

int func_33(){
return 1;
}

int func_34(){
return 1;
}

int func_35(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_36(){
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

int func_37(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_26(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_38(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[iVar0])){
if(Global_98042[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_39(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[iVar0], 0)){
if(Global_98012[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_40(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24])){
if(iParam0==Global_77348.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_41(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_42(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_42(int iParam0, int iParam1, char* sParam2, var uParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*uParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return 1;
}
break;
}
return 0;
}


var func__43(){
var uVar0;
func_53(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_52(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_51(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_46(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_45(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_44(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_44(var uParam0, int iParam1){
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


void func_45(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_46(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_50(*uParam0);
iVar1=func_48(*uParam0);
if(iParam1 < 1 || iParam1 > func_47(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_47(int iParam0, int iParam1){
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


var func__48(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_49(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_49(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_50(var uParam0){
return uParam0 & 15;
}


void func_51(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_52(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_53(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_54(var uParam0, int iParam1){
int iVar0;
int iVar1;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
StringCopy(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831.8538f, 172.1154f, 69.9058f 
};
uParam0->f_3=157.5705f;
uParam0->f_4=func_55(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 1:
*uParam0={
1970.943f, 3801.684f, 31.1396f 
};
uParam0->f_3=301.3964f;
uParam0->f_4=func_55(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 2:
*uParam0={
-22.6297f, -1439.137f, 29.6549f 
};
uParam0->f_3=180.0808f;
uParam0->f_4=func_55(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 3:
*uParam0={
-22.5229f, -1434.699f, 29.6552f 
};
uParam0->f_3=141.6114f;
uParam0->f_4=func_55(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 4:
*uParam0={
10.9281f, 545.669f, 174.7951f 
};
uParam0->f_3=61.392f;
uParam0->f_4=func_55(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 5:
*uParam0={
6.1093f, 544.9742f, 174.2835f 
};
uParam0->f_3=92.1548f;
uParam0->f_4=func_55(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 6:
*uParam0={
1981.416f, 3808.131f, 31.1384f 
};
uParam0->f_3=117.2557f;
uParam0->f_4=func_55(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 7:
*uParam0={
-1158.488f, -1529.367f, 3.8995f 
};
uParam0->f_3=35.7505f;
uParam0->f_4=func_55(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 8:
*uParam0={
148.2868f, -1270.569f, 28.2252f 
};
uParam0->f_3=208.4685f;
uParam0->f_4=func_55(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 9:
*uParam0={
1459.509f, -1380.45f, 78.3259f 
};
uParam0->f_3=99.6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 10:
*uParam0={
-1518.947f, -1387.865f, -0.5134f 
};
uParam0->f_3=98.3867f;
uParam0->f_4=joaat("seashark");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353.0926f, 3577.593f, 32.351f 
};
uParam0->f_3=16.6205f;
uParam0->f_4=joaat("duster");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652.004f, -3142.348f, 12.9921f 
};
uParam0->f_3=329.1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271.649f, -3380.685f, 12.9451f 
};
uParam0->f_3=329.5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735.586f, 3294.531f, 40.1651f 
};
uParam0->f_3=194.9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846.27f, -1363.19f, 0.22f 
};
uParam0->f_3=108.78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849.47f, -1354.99f, 0.24f 
};
uParam0->f_3=109.84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852.47f, -1346.2f, 0.21f 
};
uParam0->f_3=108.76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745.857f, -1433.904f, 4.0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756.2952f, -1441.609f, 2.9184f 
};
uParam0->f_18={
-738.0606f, -1423.068f, 8.2835f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761.8486f, -1453.829f, 4.0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772.8158f, -1459.957f, 3.2894f 
};
uParam0->f_18={
-754.3353f, -1440.836f, 8.3334f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769.3f, 3244f, 41.1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 26:
case 27:
case 28:
iVar1=(iParam1 - 26);
uParam0->f_14=(12 + iVar1);
*uParam0={
196.2794f, -1020.479f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 29:
case 30:
case 31:
iVar1=(iParam1 - 29);
uParam0->f_14=(15 + iVar1);
*uParam0={
199.8872f, -1020.048f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 32:
case 33:
case 34:
iVar1=(iParam1 - 32);
uParam0->f_14=(18 + iVar1);
*uParam0={
203.6006f, -1019.776f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723.2515f, -632.0496f, 27.1484f 
};
uParam0->f_3=12.9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 35:
*uParam0={
-51.23f, 3111.9f, 24.95f 
};
uParam0->f_3=46.78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 36:
*uParam0={
-55.7984f, -1096.586f, 25.4223f 
};
uParam0->f_3=308.0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 37:
*uParam0={
-2892.93f, 3192.37f, 11.66f 
};
uParam0->f_3=-132.35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 38:
*uParam0={
1744.308f, 3270.673f, 40.2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 39:
*uParam0={
1751.44f, 3322.643f, 42.1855f 
};
uParam0->f_3=268.134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
iVar0=1;
break;
case 41:
*uParam0={
1377.104f, -2076.2f, 52f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 40:
*uParam0={
1380.42f, -2072.77f, 51.7607f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 42:
*uParam0={
1359.389f, 3618.441f, 33.8907f 
};
uParam0->f_3=108.2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 43:
*uParam0={
693.1154f, -1018.155f, 21.6387f 
};
uParam0->f_3=177.6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 44:
*uParam0={
-73.6963f, 495.124f, 143.5226f 
};
uParam0->f_3=155.5994f;
uParam0->f_4=joaat("vacca");
iVar0=1;
break;
case 45:
*uParam0={
-67.6314f, 891.8266f, 234.5348f 
};
uParam0->f_3=294.993f;
uParam0->f_4=joaat("surano");
iVar0=1;
break;
case 46:
*uParam0={
533.9048f, -169.2469f, 53.7005f 
};
uParam0->f_3=1.2998f;
uParam0->f_4=joaat("tornado2");
iVar0=1;
break;
case 47:
*uParam0={
-726.8914f, -408.6952f, 34.0416f 
};
uParam0->f_3=267.7392f;
uParam0->f_4=joaat("superd");
iVar0=1;
break;
case 48:
*uParam0={
-1321.519f, 261.3993f, 61.5709f 
};
uParam0->f_3=350.7697f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 49:
*uParam0={
-1267.999f, 451.6463f, 93.7071f 
};
uParam0->f_3=48.9311f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 50:
*uParam0={
-1062.076f, -226.7637f, 37.157f 
};
uParam0->f_3=234.2767f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 51:
*uParam0={
68.16914f, -1558.958f, 29.46904f 
};
uParam0->f_3=49.90575f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 52:
*uParam0={
589.4399f, 2736.708f, 42.03316f 
};
uParam0->f_3=-175.7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 53:
*uParam0={
-488.774f, -344.5721f, 34.36356f 
};
uParam0->f_3=82.4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 54:
*uParam0={
288.8808f, -585.4728f, 43.15428f 
};
uParam0->f_3=-20.80707f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 55:
*uParam0={
304.8294f, -1383.674f, 31.67744f 
};
uParam0->f_3=-41.11603f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 56:
*uParam0={
1126.194f, -1481.486f, 34.7016f 
};
uParam0->f_3=-91.43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 57:
*uParam0={
-1598.36f, 5252.84f, 0f 
};
uParam0->f_3=28.14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 58:
*uParam0={
-1602.62f, 5260.37f, 0.86f 
};
uParam0->f_3=25.32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 59:
*uParam0={
2116.571f, 4763.279f, 40.1596f 
};
uParam0->f_3=198.723f;
uParam0->f_4=joaat("bfinjection");
iVar0=1;
break;
case 60:
*uParam0={
1133.21f, 120.2f, 80.9f 
};
uParam0->f_3=134.4f;
if(func_36()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(func_36()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 62:
*uParam0={
1985.85f, 3828.96f, 31.98f 
};
uParam0->f_3=-16.58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 63:
*uParam0={
3870.75f, 4464.67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
iVar0=1;
break;
case 64:
*uParam0={
1257.729f, -2564.474f, 41.717f 
};
uParam0->f_3=284.5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 65:
*uParam0={
643.2823f, 3014.152f, 42.2733f 
};
uParam0->f_3=128.0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 66:
*uParam0={
38.9368f, 850.8677f, 196.3f 
};
uParam0->f_3=311.6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 67:
*uParam0={
1333.875f, 4262.226f, 30.78f 
};
uParam0->f_3=262.5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
}
if(MISC::IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_79(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_79(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_79(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_55(int iParam0, int iParam1){
struct<82> Var0;
if(func_57(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_56(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_56(int iParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (iParam0){
case 0:
iVar0=joaat("tailgater");
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]){
iVar0=joaat("premier");
}
switch (iVar0){
case joaat("tailgater"):
*uParam1=iVar0;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
StringCopy(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=iVar0;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
StringCopy(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
iVar0=joaat("bodhi2");
switch (iVar0){
case joaat("bodhi2"):
*uParam1=iVar0;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113648.f_9087.f_99.f_58[119]){
uParam1->f_11[1]=1;
}
break;
}
break;
case 1:
if(iParam2==1){
iVar0=joaat("buffalo2");
}elseif(iParam2==2){
iVar0=joaat("bagger");
}elseif(Global_113648.f_9087.f_99.f_58[118]){
iVar0=joaat("bagger");
}else{
iVar0=joaat("buffalo2");
}
switch (iVar0){
case joaat("bagger"):
*uParam1=iVar0;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=iVar0;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
StringCopy(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}}


bool func_57(int iParam0){
return iParam0 < 3;
}


void func_58(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4){
if(func_54(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_62(iParam0);
func_61(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 11)){
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=fParam3;
}else{
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=-1f;
}
Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_59(iParam0, 1);
}}}


void func_59(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_75(iParam0, 0)){
func_60(iParam0, 1, 0);
func_60(iParam0, 2, 0);
func_60(iParam0, 3, 0);
func_60(iParam0, 4, 0);
func_60(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_60(iParam0, 0, 0);
}}


void func_60(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}


void func_61(var uParam0, var uParam1){
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
}


void func_62(int iParam0){
if(iParam0==-1){
return;
}
if(func_54(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77348.f_139[iParam0]));
Global_77348.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)){
func_59(iParam0, 0);
}}}

int func_63(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
return Global_98022[iVar0];
}}
iVar0++;
}
return 145;
}


void func_64(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_68(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(iParam0);
StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(iParam0);
uParam1->f_69=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2)){
MISC::SET_BIT(&(uParam1->f_77), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3)){
MISC::SET_BIT(&(uParam1->f_77), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1)){
MISC::SET_BIT(&(uParam1->f_77), 31);
}
if(uParam1->f_65==-1 && !func_67(uParam1->f_66)){
uParam1->f_65=0;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 9);
}
if(VEHICLE::IS_VEHICLE_STOLEN(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 10);
}
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 12);
}
func_66(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_65(iVar0 + 1));
}
iVar0++;
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 11);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 11);
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave")){
MISC::SET_BIT(&(uParam1->f_77), 27);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}}}

int func_65(int iParam0){
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
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_66(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
(*uParam1)[iVar0]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
(*uParam1)[iVar0]=1;
}}elseif(iVar1==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0)){
case 255:
(*uParam1)[iVar0]=1;
break;
case 0:
(*uParam1)[iVar0]=2;
break;
case 1:
(*uParam1)[iVar0]=3;
break;
case 2:
(*uParam1)[iVar0]=4;
break;
case 3:
(*uParam1)[iVar0]=5;
break;
case 4:
(*uParam1)[iVar0]=6;
break;
case 5:
(*uParam1)[iVar0]=7;
break;
case 6:
(*uParam1)[iVar0]=8;
break;
case 7:
(*uParam1)[iVar0]=9;
break;
case 8:
(*uParam1)[iVar0]=10;
break;
case 9:
(*uParam1)[iVar0]=11;
break;
case 10:
(*uParam1)[iVar0]=12;
break;
case 11:
(*uParam1)[iVar0]=13;
break;
case 12:
(*uParam1)[iVar0]=14;
break;
case 13:
(*uParam1)[iVar0]=15;
break;
}}else{
(*uParam1)[iVar0]=0;
}}else{
(*uParam1)[iVar0]=VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
if(iVar0==23){
(*uParam2)[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}elseif(iVar0==24){
(*uParam2)[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}}
iVar0++;
}
return 1;
}

int func_67(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_68(var uParam0){
int iVar0;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
iVar0=0;
while (iVar0 < 49){
uParam0->f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_59[iVar0]=0;
iVar0++;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
}


void func_69(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_62(iParam0);
func_59(iParam0, 0);
}


void func_70(bool bParam0){
if(MISC::IS_BIT_SET(uLocal_49, 14)){
if(func_72(PLAYER::PLAYER_PED_ID())==0){
if(bParam0){
func_71(10);
}else{
func_71(12);
}}elseif(bParam0){
func_71(11);
}else{
func_71(13);
}
if(iLocal_42==0){
func_93(45, 0);
}elseif(iLocal_42==1){
func_93(12, 0);
}elseif(iLocal_42==2){
func_93(34, 0);
}
if(iLocal_42 !=2){
Local_50={
0f, 0f, 0f 
};
}
iLocal_40=0;
iLocal_41=0;
MISC::CLEAR_BIT(&uLocal_49, 6);
MISC::CLEAR_BIT(&uLocal_49, 7);
MISC::CLEAR_BIT(&uLocal_49, false);
MISC::CLEAR_BIT(&uLocal_49, true);
MISC::CLEAR_BIT(&uLocal_49, 8);
MISC::CLEAR_BIT(&uLocal_49, 12);
MISC::CLEAR_BIT(&uLocal_49, 2);
MISC::CLEAR_BIT(&uLocal_49, 14);
if(iLocal_37==4){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_74)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_74);
}
func_110(0);
}
func_80(0, 0);
}}


void func_71(int iParam0){
bool bVar0;
bVar0=func_6(iParam0);
MISC::SET_BIT(&(uLocal_47[func_5(iParam0)]), bVar0);
}

int func_72(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_73(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_73(int iParam0){
if(func_57(iParam0)){
return func_74(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__74(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_75(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_76(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77348.f_139[iParam0];
}

int func_77(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


bool func_78(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}


bool func_79(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_80(int iParam0, bool bParam1){
Global_113648.f_10051.f_128=iParam0;
iLocal_37=iParam0;
if(bParam1){
return;
}
func_81();
}

int func_81(){
if(func_82(0)){
return 0;
}
if(Global_100720.f_8){
if(Global_100720.f_10 > 0){
return 0;
}}elseif(Global_100720.f_10 > 1){
return 0;
}
Global_100720.f_10++;
return 1;
}

int func_82(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_83(char* sParam0, var uParam1){
STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, 1);
if(MISC::IS_BIT_SET(uParam1, 0)){
STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 2)){
STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, 1);
}}

int func_84(){
func_85();
switch (Global_113648.f_2365.f_539.f_4321){
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


void func_85(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_73(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_72(PLAYER::PLAYER_PED_ID());
if(func_57(iVar0) && (!func_86(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_57(Global_113648.f_2365.f_539.f_4321)){
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


bool func_86(int iParam0){
return Global_43257==iParam0;
}

int func_87(int iParam0){
if(func_88(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_88(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_89(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}


void func_90(bool bParam0){
char* sVar0;
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
switch (func_91()){
case 0:
if(bParam0){
sVar0="MICHAEL_SMALL_01";
}else{
sVar0="MICHAEL_BIG_01";
}
break;
case 1:
if(bParam0){
sVar0="FRANKLIN_SMALL_01";
}else{
sVar0="FRANKLIN_BIG_01";
}
break;
case 2:
if(bParam0){
sVar0="TREVOR_SMALL_01";
}else{
sVar0="TREVOR_BIG_01";
}
break;
}
AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}


bool func_91(){
func_85();
return Global_113648.f_2365.f_539.f_4321;
}


void func_92(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_93(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
}


void func_94(){
Global_113648.f_10018.f_21++;
if(iLocal_42==0){
STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_113648.f_10018.f_21, 1);
if(func_103()){
if(func_252(74) || (func_252(75) && func_102())){
func_93(46, 1);
}}}
func_95();
MISC::SET_BIT(&uLocal_49, 10);
}


void func_95(){
if(iLocal_42==0){
func_96(23, 0, 0);
}elseif(iLocal_42==1){}elseif(iLocal_42==2){}}


void func_96(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_100((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
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
func_97();
}}


void func_97(){
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
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (iVar0 < 321){
if(Global_113648.f_10196[iVar0 /*12*/].f_5==1){
switch (Global_113648.f_10196[iVar0 /*12*/].f_6){
case 1:
Global_113384++;
fVar1=(fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 3:
Global_113385++;
fVar2=(fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 5:
Global_113386++;
fVar3=(fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 7:
Global_113387++;
fVar4=(fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 9:
Global_113388++;
fVar5=(fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113389++;
fVar6=(fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 13:
Global_113390++;
fVar7=(fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113367 > 0){
if(Global_113384==Global_113367){
fVar1=55f;
}}
if(Global_113368 > 0){
if(Global_113385==Global_113368){
fVar2=10f;
}}
if(Global_113369 > 0){
if(Global_113386==Global_113369){
fVar3=0f;
}}
if(Global_113370 > 0){
if(Global_113387==Global_113370){
fVar4=10f;
}}
if(Global_113371 > 0){
if(((Global_113388==Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388==Global_113374){
if(!MISC::IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113372 > 0){
if(Global_113389==Global_113372){
fVar6=15f;
}}
if(Global_113373 > 0){
if(Global_113390==Global_113373){
fVar7=5f;
}}
Global_113648.f_10196.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113388 > Global_113374 || Global_113388==Global_113374){
iVar9=Global_113374;
}else{
iVar9=Global_113388;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113384, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113367, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113385, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113368, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113386, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113369, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113387, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113370, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113374, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
Global_113391=(Global_113384 * 100 / Global_113367);
Global_113393=((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
Global_113392=((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
Global_113394=((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113391, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113392, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113393, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113648.f_10196.f_3853)){
func_99(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_98()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_81();
}}}}}

int func_98(){
return Global_32163;
}

int func_99(int iParam0, int iParam1){
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


void func_100(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_101();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_101(){
return Global_1574918;
}

int func_102(){
if((func_252(41) && func_252(3)) && func_252(21)){
return 1;
}
return 0;
}

int func_103(){
if(iLocal_42==0){
return func_108();
}elseif(iLocal_42==1){
return func_107();
}elseif(iLocal_42==2){
return func_104();
}
return 0;
}

int func_104(){
if((func_252(79) && func_252(83)) && func_105(func_106())){
return 1;
}
return 0;
}

int func_105(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_106(){
if(iLocal_42==0){
return 45;
}elseif(iLocal_42==1){
return 12;
}elseif(iLocal_42==2){
return 34;
}
return -1;
}

int func_107(){
if(func_252(68)){
return 1;
}
return 0;
}

int func_108(){
if(func_109(33, 37) >=4){
return 1;
}
return 0;
}

int func_109(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar1=iParam0;
while (iVar1 <=iParam1){
if(func_252(iVar1)){
iVar0++;
}
iVar1++;
}
if(func_105(func_106())){
iVar0++;
}
return iVar0;
}


void func_110(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}


void func_111(){
struct<6> Var0;
if(iLocal_40 !=0){
Var0={
func_130() 
};
switch (iLocal_40){
case 1:
if(iLocal_42 !=2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0){
func_129("LOCAUD", Local_44.f_7);
func_128(1);
iLocal_40=2;
}
elseif(MISC::IS_BIT_SET(uLocal_49, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE()==0){
func_129("LOCAUD", Local_44.f_7);
func_128(1);
iLocal_40=2;
}}}else{
iLocal_40=0;
}
if(func_127()){
iLocal_40=3;
}
break;
case 2:
if(func_127()){
iLocal_40=3;
}
if(!MISC::IS_BIT_SET(uLocal_49, 10)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >=0){
func_120(Var0);
}}else{
iLocal_40=3;
}
break;
case 3:
if(!func_119()){
iLocal_40=4;
}
break;
case 4:
if(!func_15(0)){
if(iLocal_42==1){
func_116(Local_44.f_8);
}
iLocal_40=5;
}
break;
case 5:
if(func_91()==0){
if(iLocal_42==0){
if(func_103()){
if((func_252(74) || func_252(75)) && func_102()){
func_112(1);
iLocal_40=0;
}else{
func_112(0);
iLocal_40=0;
}
}
else{
iLocal_40=0;
}}else{
iLocal_40=0;
}}else{
if(iLocal_42==0){
if(func_103()){
if(!func_252(3)){
func_89(50, 0);
}
}}
iLocal_40=0;
}
break;
}}}


void func_112(bool bParam0){
if(bParam0){
func_113(1527885205, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
}elseif(!func_252(3)){
func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 50, -1, 0);
}else{
func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
}}

int func_113(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
struct<15> Var0;
int iVar1;
if(func_82(0)){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6 < 0){
return 0;
}
if(iParam7==76){
return 0;
}
if(iParam8==235){
return 0;
}
if(iParam3==bParam2){
return 0;
}
if(((bParam2 !=144 && bParam2 !=0) && bParam2 !=1) && bParam2 !=2){
return 0;
}
if(Global_113648.f_7690.f_136 < 9){
Var0.f_0=iParam0;
if(Global_113648.f_7690.f_911==Var0.f_0){
Global_113648.f_7690.f_911=-1;
}
Var0.f_3=func_115(iParam1);
Var0.f_5=iParam6;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam5);
Var0.f_1=iParam10;
iVar1=0;
MISC::SET_BIT(&iVar1, bParam2);
Var0.f_2=iVar1;
Var0.f_6=iParam3;
Var0.f_14=iParam4;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_7=iParam7;
Var0.f_8=iParam8;
Var0.f_9=iParam9;
MISC::SET_BIT(&(Var0.f_1), false);
MISC::CLEAR_BIT(&(Var0.f_1), true);
if(iParam1==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/]={
Var0 
};
Global_113648.f_7690.f_136++;
func_114(bParam2);
return 1;
}
return 0;
}


void func_114(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_57(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0)){
if(Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113648.f_7690[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113648.f_7690.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113648.f_7690.f_919[bParam0]=iVar1;
}

int func_115(int iParam0){
switch (iParam0){
case 0:
case 4:
return 5;
break;
case 7:
return 4;
break;
case 2:
return 3;
break;
case 1:
return 2;
break;
case 3:
return 1;
break;
case 5:
case 6:
return 0;
break;
}
return 7;
}


void func_116(int iParam0){
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_118(iParam0, 0, 0);
func_118(iParam0, 1, 0);
func_118(iParam0, 2, 0);
func_117(iParam0, 0, 0);
func_117(iParam0, 1, 0);
func_117(iParam0, 2, 0);
}}


void func_117(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_118(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_119(){
if(Global_21725==4){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
return 1;
}else{
return 0;
}}
return 0;
}


void func_120(struct<6> Param0){
if(iLocal_42==0){
func_125(Param0);
}elseif(iLocal_42==1){
func_121(Param0);
}}


void func_121(struct<6> Param0){
if(func_103()){
func_122(Param0, 1);
}else{
func_122(Param0, 0);
}}


void func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6){
struct<4> Var0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0)){
if(MISC::ARE_STRINGS_EQUAL(&uParam0, Local_44.f_7)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >=0){
if(iLocal_42==0){
Var0={
func_124(bParam6) 
};
func_93(46, 1);
func_129(sLocal_79, &Var0);
func_128(1);
}elseif(iLocal_42==1){
Var0={
func_123(bParam6) 
};
func_129(sLocal_79, &Var0);
func_128(1);
}
iLocal_40=3;
}}}}


struct<4> func_123(bool bParam0){
struct<4> Var0;
if(bParam0){
switch (func_91()){
case 1:
StringCopy(&Var0, "AHF_C8", 16);
break;
case 0:
StringCopy(&Var0, "AHF_C5", 16);
break;
}}else{
switch (func_91()){
case 1:
StringCopy(&Var0, "AHF_C9", 16);
break;
case 0:
StringCopy(&Var0, "AHF_C6", 16);
break;
}}
return Var0;
}


struct<4> func_124(bool bParam0){
struct<4> Var0;
if(bParam0){
switch (func_91()){
case 1:
StringCopy(&Var0, "FBI4_ISAGO", 16);
break;
case 2:
StringCopy(&Var0, "FBI4_ISAGO", 16);
break;
}}else{
switch (func_91()){
case 1:
StringCopy(&Var0, "FBI4_THATSIT", 16);
break;
case 2:
StringCopy(&Var0, "FBI4_THATSIT", 16);
break;
}}
return Var0;
}


void func_125(struct<6> Param0){
if(func_103()){
if(func_126()){
if(func_91() !=0){
func_122(Param0, 1);
}else{
iLocal_40=3;
}}elseif(func_91() !=0){
func_122(Param0, 0);
}else{
iLocal_40=3;
}}else{
iLocal_40=3;
}}

int func_126(){
if(iLocal_42==0){
if((func_252(74) || func_252(74)) && func_102()){
return 1;
}}elseif(iLocal_42==1){
if(func_252(68)){
return 1;
}}
return 0;
}

int func_127(){
if(Global_21774==1 || Global_22741==1){
return 1;
}
return 0;
}


void func_128(bool bParam0){
AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
if(bParam0){}}


void func_129(char* sParam0, char* sParam1){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
Global_21782=1;
StringCopy(&Global_21789, sParam0, 24);
StringCopy(&Global_21783, sParam1, 24);
}}


struct<6> func_130(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
return Global_21344;
}
return Var0;
}


void func_131(){
func_132();
}


void func_132(){
func_138();
func_133();
}


void func_133(){
if(func_137()==38){
if(func_136() && !func_75(25, 0)){
if(Local_54.f_66 !=0){
func_58(25, &Local_54, Local_52, fLocal_53, 145);
}}}elseif(func_137()==-1){
if(!MISC::IS_BIT_SET(uLocal_49, 1)){
if(!func_78(PLAYER::PLAYER_PED_ID(), Local_50, 5f, 1)){
if(func_135()){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(func_134()){
func_71(1);
}
elseif(Global_112703){
func_71(2);
}
else{
func_71(0);
}
iLocal_39=1;
fLocal_48=0f;
}}}}}}


bool func_134(){
return SCRIPT::IS_THREAD_ACTIVE(Global_113648.f_18105.f_395);
}

int func_135(){
if(func_13()){
if(func_91()==0){
if(iLocal_43==2 || iLocal_43==1){
return 1;
}}elseif(iLocal_43==0){
return 1;
}}
return 0;
}

int func_136(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}

int func_137(){
return Global_78821;
}


void func_138(){
if(!func_79(Local_52, 0f, 0f, 0f, 0) && func_137() !=func_139()){
if(func_78(PLAYER::PLAYER_PED_ID(), Local_52, 60f, 1)){
if(func_87(func_76(25))){
if(vdist2(ENTITY::GET_ENTITY_COORDS(func_76(25), 1), Local_52) >=100f){
func_70(0);
}}elseif(!func_75(25, 0)){
func_70(1);
}}}}

int func_139(){
if(iLocal_42==0){
return 38;
}elseif(iLocal_42==1){
return 69;
}elseif(iLocal_42==2){
return 85;
}
return -1;
}


void func_140(){
func_17();
func_111();
}


void func_141(){
int iVar0;
func_223();
func_210();
func_177();
func_111();
func_176();
if(func_172()){
if(func_142(&iVar0)){
func_260(0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
if(func_87(iLocal_51)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 2);
}
func_80(iVar0, 0);
}}}

int func_142(var uParam0){
char* sVar0;
if(MISC::IS_BIT_SET(uLocal_49, 0)){
func_161();
if(func_143()){
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
if(iLocal_42==2){
*uParam0=1;
}else{
*uParam0=4;
}}
return 1;
}}
return 0;
}

int func_143(){
if(func_145(&uLocal_80, Local_44.f_8, sLocal_79, Local_44.f_4, 9, 1, 0, 0, 0)){
iLocal_40=1;
func_144(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
return 1;
}
return 0;
}


void func_144(int iParam0, struct<3> Param1){
int iVar0;
if(HUD::DOES_BLIP_EXIST(Global_32543[iParam0 /*23*/].f_19)){
HUD::SET_BLIP_COORDS(Global_32543[iParam0 /*23*/].f_19, Param1);
}
iVar0=0;
iVar0=0;
while (iVar0 <=2){
Global_32543[iParam0 /*23*/][iVar0 /*3*/]={
Param1 
};
iVar0++;
}}


bool func_145(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_160(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
if(iParam5==1){
Global_21737=1;
}else{
Global_21737=0;
}
Global_2883585=0;
return func_146(sParam3, iParam4, bParam8);
}

int func_146(char* sParam0, int iParam1, bool bParam2){
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
func_159();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_158(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_157();
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
func_156();
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
if(func_155()){
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
if(func_154()){
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
func_153();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_152();
func_147();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_159();
}
return 0;
}


void func_147(){
if(!func_148()){
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

int func_148(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_151()){
return 0;
}
if(func_149(PLAYER::PLAYER_ID())){
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


bool func_149(int iParam0){
return func_150(iParam0, 20);
}


var func__150(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_151(){
return -1;
}


void func_152(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=1;
}


void func_153(){
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

int func_154(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_155(){
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


void func_156(){
if(func_86(14)){
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
Global_20383=func_91();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_157(){
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


bool func_158(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_159(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9) || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}}


void func_160(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21179={
*uParam0 
};
Global_7569=uParam1;
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


void func_161(){
bool bVar0;
bVar0=func_91();
func_162(bVar0, func_171(bVar0));
}


void func_162(bool bParam0, var uParam1){
int iVar0;
switch (bParam0){
case 0:
Local_44.f_0=0;
Local_44.f_1="MICHAEL";
if(iLocal_42==0){
Local_44.f_2=1;
Local_44.f_3="FRANKLIN";
Local_44.f_8=5;
}else{
Local_44.f_2=3;
Local_44.f_3="LESTER";
if(iLocal_42==1){
Local_44.f_8=6;
}else{
Local_44.f_8=12;
}}
Local_44.f_5="FBI_3_FRESP";
func_169(bParam0);
break;
case 1:
Local_44.f_0=1;
Local_44.f_1="FRANKLIN";
if(iLocal_42==0){
Local_44.f_2=0;
Local_44.f_3="MICHAEL";
Local_44.f_8=9;
}else{
Local_44.f_2=3;
Local_44.f_3="LESTER";
if(iLocal_42==1){
Local_44.f_8=7;
}else{
Local_44.f_8=12;
}}
Local_44.f_5="FBI_3_MRESP";
func_169(bParam0);
break;
case 2:
Local_44.f_0=2;
Local_44.f_1="TREVOR";
if(iLocal_42==0){
Local_44.f_2=0;
Local_44.f_3="MICHAEL";
Local_44.f_8=8;
}else{
Local_44.f_2=3;
Local_44.f_3="LESTER";
if(iLocal_42==1){
Local_44.f_8=7;
}else{
Local_44.f_8=12;
}}
Local_44.f_5="FBI_3_MRESP";
func_169(bParam0);
break;
}
if(iLocal_42==1){
if(bParam0==0){
iVar0=0;
}else{
iVar0=1;
}
func_164(Local_44.f_8, iVar0, 0);
}
func_163(&uLocal_80, Local_44.f_0, PLAYER::PLAYER_PED_ID(), Local_44.f_1, 0, 1);
func_163(&uLocal_80, Local_44.f_2, 0, Local_44.f_3, 0, 1);
Local_44.f_4=uParam1;
}


void func_163(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_164(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_156();
if(iParam1==4){
func_118(iParam0, 0, 1);
func_118(iParam0, 1, 1);
func_118(iParam0, 2, 1);
func_117(iParam0, 0, 1);
func_117(iParam0, 1, 1);
func_117(iParam0, 2, 1);
}else{
if(func_168(iParam0, iParam1)==1 && func_167(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_118(iParam0, iVar0, 1);
func_117(iParam0, iVar0, 1);
if(iParam0==172 && !Global_2793046.f_6891){
bParam2=false;
}
if(iParam0==171 && !Global_2793046.f_6890){
bParam2=false;
}
if(iParam0==173 && !Global_2793046.f_6890){
bParam2=false;
}}
if(bParam2){
if(!Global_78558){
if(iParam1 !=4){
if(Global_20383 !=iParam1){
Global_8912[iParam1 /*4*/]={
func_166(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_166(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_165();
}}else{
Global_8863[1 /*6*/]={
func_166(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_165();
}}else{
Global_8863[1 /*6*/]={
func_166(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_165();
}}}}


void func_165(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8863[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8863[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, false);
}


struct<4> func_166(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_167(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_168(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}


void func_169(int iParam0){
Local_44.f_6=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
func_170(iParam0);
}


void func_170(int iParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_44.f_6)){
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanAnd")){
if(iParam0==0){
Local_44.f_7="LOC_M77";
}elseif(iParam0==1){
Local_44.f_7="LOC_F78";
}else{
Local_44.f_7="LOC_T78";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alamo")){
if(iParam0==0){
Local_44.f_7="LOC_M101";
}elseif(iParam0==1){
Local_44.f_7="LOC_F1";
}else{
Local_44.f_7="LOC_T1";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alta")){
if(iParam0==0){
Local_44.f_7="LOC_M1";
}elseif(iParam0==1){
Local_44.f_7="LOC_F2";
}else{
Local_44.f_7="LOC_T2";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Airp")){
if(iParam0==0){
Local_44.f_7="LOC_M48";
}elseif(iParam0==1){
Local_44.f_7="LOC_F49";
}else{
Local_44.f_7="LOC_T49";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ArmyB")){
if(iParam0==0){
Local_44.f_7="LOC_M28";
}elseif(iParam0==1){
Local_44.f_7="LOC_F29";
}else{
Local_44.f_7="LOC_T29";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BhamCa")){
if(iParam0==0){
Local_44.f_7="LOC_M2";
}elseif(iParam0==1){
Local_44.f_7="LOC_F3";
}else{
Local_44.f_7="LOC_T3";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Banning")){
if(iParam0==0){
Local_44.f_7="LOC_M3";
}elseif(iParam0==1){
Local_44.f_7="LOC_F4";
}else{
Local_44.f_7="LOC_T4";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Baytre")){
if(iParam0==0){
Local_44.f_7="LOC_M4";
}elseif(iParam0==1){
Local_44.f_7="LOC_F5";
}else{
Local_44.f_7="LOC_T5";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Beach")){
if(iParam0==0){
Local_44.f_7="LOC_M93";
}elseif(iParam0==1){
Local_44.f_7="LOC_F94";
}else{
Local_44.f_7="LOC_T94";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradT")){
if(iParam0==0){
Local_44.f_7="LOC_M7";
}elseif(iParam0==1){
Local_44.f_7="LOC_F8";
}else{
Local_44.f_7="LOC_T8";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradP")){
if(iParam0==0){
Local_44.f_7="LOC_M6";
}elseif(iParam0==1){
Local_44.f_7="LOC_F7";
}else{
Local_44.f_7="LOC_T7";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Burton")){
if(iParam0==0){
Local_44.f_7="LOC_M8";
}elseif(iParam0==1){
Local_44.f_7="LOC_F9";
}else{
Local_44.f_7="LOC_T9";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CANNY")){
if(iParam0==0){
Local_44.f_7="LOC_M70";
}elseif(iParam0==1){
Local_44.f_7="LOC_F71";
}else{
Local_44.f_7="LOC_T71";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CCreak")){
if(iParam0==0){
Local_44.f_7="LOC_M10";
}elseif(iParam0==1){
Local_44.f_7="LOC_F11";
}else{
Local_44.f_7="LOC_T11";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CalafB")){
if(iParam0==0){
Local_44.f_7="LOC_M9";
}elseif(iParam0==1){
Local_44.f_7="LOC_F10";
}else{
Local_44.f_7="LOC_T10";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ChamH")){
if(iParam0==0){
Local_44.f_7="LOC_M11";
}elseif(iParam0==1){
Local_44.f_7="LOC_F12";
}else{
Local_44.f_7="LOC_T12";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHU")){
if(iParam0==0){
Local_44.f_7="LOC_M13";
}elseif(iParam0==1){
Local_44.f_7="LOC_F14";
}else{
Local_44.f_7="LOC_T14";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHIL")){
if(iParam0==0){
Local_44.f_7="LOC_M96";
}elseif(iParam0==1){
Local_44.f_7="LOC_F97";
}else{
Local_44.f_7="LOC_T97";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "COSI")){
if(iParam0==0){
Local_44.f_7="LOC_M14";
}elseif(iParam0==1){
Local_44.f_7="LOC_F15";
}else{
Local_44.f_7="LOC_T15";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CMSW")){
if(iParam0==0){
Local_44.f_7="LOC_M12";
}elseif(iParam0==1){
Local_44.f_7="LOC_F13";
}else{
Local_44.f_7="LOC_T13";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Cypre")){
if(iParam0==0){
Local_44.f_7="LOC_M15";
}elseif(iParam0==1){
Local_44.f_7="LOC_F16";
}else{
Local_44.f_7="LOC_T16";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Davis")){
if(iParam0==0){
Local_44.f_7="LOC_M16";
}elseif(iParam0==1){
Local_44.f_7="LOC_F17";
}else{
Local_44.f_7="LOC_T17";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Desrt")){
if(iParam0==0){
Local_44.f_7="LOC_M32";
}elseif(iParam0==1){
Local_44.f_7="LOC_F33";
}else{
Local_44.f_7="LOC_T33";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelBe")){
if(iParam0==0){
Local_44.f_7="LOC_M19";
}elseif(iParam0==1){
Local_44.f_7="LOC_F20";
}else{
Local_44.f_7="LOC_T20";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelPe")){
if(iParam0==0){
Local_44.f_7="LOC_M18";
}elseif(iParam0==1){
Local_44.f_7="LOC_F19";
}else{
Local_44.f_7="LOC_T19";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelSol")){
if(iParam0==0){
Local_44.f_7="LOC_M41";
}elseif(iParam0==1){
Local_44.f_7="LOC_F42";
}else{
Local_44.f_7="LOC_T42";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Downt")){
if(iParam0==0){
Local_44.f_7="LOC_M20";
}elseif(iParam0==1){
Local_44.f_7="LOC_F21";
}else{
Local_44.f_7="LOC_T21";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DTVine")){
if(iParam0==0){
Local_44.f_7="LOC_M21";
}elseif(iParam0==1){
Local_44.f_7="LOC_F22";
}else{
Local_44.f_7="LOC_T22";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Eclips")){
if(iParam0==0){
Local_44.f_7="LOC_M24";
}elseif(iParam0==1){
Local_44.f_7="LOC_F25";
}else{
Local_44.f_7="LOC_T25";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELSant")){
if(iParam0==0){
Local_44.f_7="LOC_M22";
}elseif(iParam0==1){
Local_44.f_7="LOC_F23";
}else{
Local_44.f_7="LOC_T23";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "EBuro")){
if(iParam0==0){
Local_44.f_7="LOC_M25";
}elseif(iParam0==1){
Local_44.f_7="LOC_F26";
}else{
Local_44.f_7="LOC_T26";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELGorl")){
if(iParam0==0){
Local_44.f_7="LOC_M26";
}elseif(iParam0==1){
Local_44.f_7="LOC_F27";
}else{
Local_44.f_7="LOC_T27";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Elysian")){
if(iParam0==0){
Local_44.f_7="LOC_M27";
}elseif(iParam0==1){
Local_44.f_7="LOC_F28";
}else{
Local_44.f_7="LOC_T28";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galli")){
if(iParam0==0){
Local_44.f_7="LOC_M31";
}elseif(iParam0==1){
Local_44.f_7="LOC_F32";
}else{
Local_44.f_7="LOC_T32";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galfish")){
if(iParam0==0){
Local_44.f_7="LOC_M29";
}elseif(iParam0==1){
Local_44.f_7="LOC_F30";
}else{
Local_44.f_7="LOC_T30";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Greatc")){
if(iParam0==0){
Local_44.f_7="LOC_M34";
}elseif(iParam0==1){
Local_44.f_7="LOC_F35";
}else{
Local_44.f_7="LOC_T35";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Golf")){
if(iParam0==0){
Local_44.f_7="LOC_M35";
}elseif(iParam0==1){
Local_44.f_7="LOC_F36";
}else{
Local_44.f_7="LOC_T36";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "GrapeS")){
if(iParam0==0){
Local_44.f_7="LOC_M33";
}elseif(iParam0==1){
Local_44.f_7="LOC_F34";
}else{
Local_44.f_7="LOC_T34";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Hawick")){
if(iParam0==0){
Local_44.f_7="LOC_M37";
}elseif(iParam0==1){
Local_44.f_7="LOC_F38";
}else{
Local_44.f_7="LOC_T38";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Harmo")){
if(iParam0==0){
Local_44.f_7="LOC_M36";
}elseif(iParam0==1){
Local_44.f_7="LOC_F37";
}else{
Local_44.f_7="LOC_T37";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Heart")){
if(iParam0==0){
Local_44.f_7="LOC_M38";
}elseif(iParam0==1){
Local_44.f_7="LOC_F39";
}else{
Local_44.f_7="LOC_T39";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HumLab")){
if(iParam0==0){
Local_44.f_7="LOC_M39";
}elseif(iParam0==1){
Local_44.f_7="LOC_F40";
}else{
Local_44.f_7="LOC_T40";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HORS")){
if(iParam0==0){
Local_44.f_7="LOC_M97";
}elseif(iParam0==1){
Local_44.f_7="LOC_F98";
}else{
Local_44.f_7="LOC_T98";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Koreat")){
if(iParam0==0){
Local_44.f_7="LOC_M46";
}elseif(iParam0==1){
Local_44.f_7="LOC_F47";
}else{
Local_44.f_7="LOC_T47";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Jail")){
if(iParam0==0){
Local_44.f_7="LOC_M5";
}elseif(iParam0==1){
Local_44.f_7="LOC_F6";
}else{
Local_44.f_7="LOC_T6";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LAct")){
if(iParam0==0){
Local_44.f_7="LOC_M45";
}elseif(iParam0==1){
Local_44.f_7="LOC_F46";
}else{
Local_44.f_7="LOC_T46";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LDam")){
if(iParam0==0){
Local_44.f_7="LOC_M44";
}elseif(iParam0==1){
Local_44.f_7="LOC_F45";
}else{
Local_44.f_7="LOC_T45";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Lago")){
if(iParam0==0){
Local_44.f_7="LOC_M43";
}elseif(iParam0==1){
Local_44.f_7="LOC_F44";
}else{
Local_44.f_7="LOC_T44";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LegSqu")){
if(iParam0==0){
Local_44.f_7="LOC_M";
}elseif(iParam0==1){
Local_44.f_7="LOC_F";
}else{
Local_44.f_7="LOC_T";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosSF")){
if(iParam0==0){
Local_44.f_7="LOC_M47";
}elseif(iParam0==1){
Local_44.f_7="LOC_F48";
}else{
Local_44.f_7="LOC_T48";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LMesa")){
if(iParam0==0){
Local_44.f_7="LOC_M40";
}elseif(iParam0==1){
Local_44.f_7="LOC_F41";
}else{
Local_44.f_7="LOC_T41";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPuer")){
if(iParam0==0){
Local_44.f_7="LOC_M41";
}elseif(iParam0==1){
Local_44.f_7="LOC_F42";
}else{
Local_44.f_7="LOC_T42";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPFy")){
if(iParam0==0){
Local_44.f_7="LOC_M42";
}elseif(iParam0==1){
Local_44.f_7="LOC_F43";
}else{
Local_44.f_7="LOC_T43";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LOSTMC")){
if(iParam0==0){
Local_44.f_7="LOC_M";
}elseif(iParam0==1){
Local_44.f_7="LOC_F";
}else{
Local_44.f_7="LOC_T";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Mirr")){
if(iParam0==0){
Local_44.f_7="LOC_M50";
}elseif(iParam0==1){
Local_44.f_7="LOC_F51";
}else{
Local_44.f_7="LOC_T51";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Morn")){
if(iParam0==0){
Local_44.f_7="LOC_M52";
}elseif(iParam0==1){
Local_44.f_7="LOC_F53";
}else{
Local_44.f_7="LOC_T53";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Murri")){
if(iParam0==0){
Local_44.f_7="LOC_M56";
}elseif(iParam0==1){
Local_44.f_7="LOC_F57";
}else{
Local_44.f_7="LOC_T57";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTChil")){
if(iParam0==0){
Local_44.f_7="LOC_M53";
}elseif(iParam0==1){
Local_44.f_7="LOC_F54";
}else{
Local_44.f_7="LOC_T54";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTJose")){
if(iParam0==0){
Local_44.f_7="LOC_M55";
}elseif(iParam0==1){
Local_44.f_7="LOC_F56";
}else{
Local_44.f_7="LOC_T56";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTGordo")){
if(iParam0==0){
Local_44.f_7="LOC_M54";
}elseif(iParam0==1){
Local_44.f_7="LOC_F55";
}else{
Local_44.f_7="LOC_T55";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Movie")){
if(iParam0==0){
Local_44.f_7="LOC_M72";
}elseif(iParam0==1){
Local_44.f_7="LOC_F73";
}else{
Local_44.f_7="LOC_T73";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "NCHU")){
if(iParam0==0){
Local_44.f_7="LOC_M57";
}elseif(iParam0==1){
Local_44.f_7="LOC_F58";
}else{
Local_44.f_7="LOC_T58";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Noose")){
if(iParam0==0){
Local_44.f_7="LOC_M84";
}elseif(iParam0==1){
Local_44.f_7="LOC_F85";
}else{
Local_44.f_7="LOC_T85";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Oceana")){
if(iParam0==0){
Local_44.f_7="LOC_M60";
}elseif(iParam0==1){
Local_44.f_7="LOC_F61";
}else{
Local_44.f_7="LOC_T61";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Observ")){
if(iParam0==0){
Local_44.f_7="LOC_M30";
}elseif(iParam0==1){
Local_44.f_7="LOC_F31";
}else{
Local_44.f_7="LOC_T31";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Palmpow")){
if(iParam0==0){
Local_44.f_7="LOC_M64";
}elseif(iParam0==1){
Local_44.f_7="LOC_F65";
}else{
Local_44.f_7="LOC_T65";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBOX")){
if(iParam0==0){
Local_44.f_7="LOC_M66";
}elseif(iParam0==1){
Local_44.f_7="LOC_F67";
}else{
Local_44.f_7="LOC_T67";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBluff")){
if(iParam0==0){
Local_44.f_7="LOC_M59";
}elseif(iParam0==1){
Local_44.f_7="LOC_F60";
}else{
Local_44.f_7="LOC_T60";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Paleto")){
if(iParam0==0){
Local_44.f_7="LOC_M61";
}elseif(iParam0==1){
Local_44.f_7="LOC_F62";
}else{
Local_44.f_7="LOC_T62";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalCov")){
if(iParam0==0){
Local_44.f_7="LOC_M62";
}elseif(iParam0==1){
Local_44.f_7="LOC_F63";
}else{
Local_44.f_7="LOC_T63";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalFor")){
if(iParam0==0){
Local_44.f_7="LOC_M63";
}elseif(iParam0==1){
Local_44.f_7="LOC_F64";
}else{
Local_44.f_7="LOC_T64";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalHigh")){
if(iParam0==0){
Local_44.f_7="LOC_M65";
}elseif(iParam0==1){
Local_44.f_7="LOC_F66";
}else{
Local_44.f_7="LOC_T66";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ProcoB")){
if(iParam0==0){
Local_44.f_7="LOC_M68";
}elseif(iParam0==1){
Local_44.f_7="LOC_F69";
}else{
Local_44.f_7="LOC_T69";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Prol")){
if(iParam0==0){
Local_44.f_7="LOC_M58";
}elseif(iParam0==1){
Local_44.f_7="LOC_F59";
}else{
Local_44.f_7="LOC_T59";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RTRAK")){
if(iParam0==0){
Local_44.f_7="LOC_M71";
}elseif(iParam0==1){
Local_44.f_7="LOC_F72";
}else{
Local_44.f_7="LOC_T72";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rancho")){
if(iParam0==0){
Local_44.f_7="LOC_M69";
}elseif(iParam0==1){
Local_44.f_7="LOC_F70";
}else{
Local_44.f_7="LOC_T70";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RGLEN")){
if(iParam0==0){
Local_44.f_7="LOC_M74";
}elseif(iParam0==1){
Local_44.f_7="LOC_F75";
}else{
Local_44.f_7="LOC_T75";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Richm")){
if(iParam0==0){
Local_44.f_7="LOC_M73";
}elseif(iParam0==1){
Local_44.f_7="LOC_F74";
}else{
Local_44.f_7="LOC_T74";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rockf")){
if(iParam0==0){
Local_44.f_7="LOC_M75";
}elseif(iParam0==1){
Local_44.f_7="LOC_F76";
}else{
Local_44.f_7="LOC_T76";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SANDY")){
if(iParam0==0){
Local_44.f_7="LOC_M79";
}elseif(iParam0==1){
Local_44.f_7="LOC_F80";
}else{
Local_44.f_7="LOC_T80";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaH")){
if(iParam0==0){
Local_44.f_7="LOC_M87";
}elseif(iParam0==1){
Local_44.f_7="LOC_F88";
}else{
Local_44.f_7="LOC_T88";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaV")){
if(iParam0==0){
Local_44.f_7="LOC_M88";
}elseif(iParam0==1){
Local_44.f_7="LOC_F89";
}else{
Local_44.f_7="LOC_T89";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "East_V")){
if(iParam0==0){
Local_44.f_7="LOC_M23";
}elseif(iParam0==1){
Local_44.f_7="LOC_F24";
}else{
Local_44.f_7="LOC_T24";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zenora")){
if(iParam0==0){
Local_44.f_7="LOC_M80";
}elseif(iParam0==1){
Local_44.f_7="LOC_F81";
}else{
Local_44.f_7="LOC_T81";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Slab")){
if(iParam0==0){
Local_44.f_7="LOC_M81";
}elseif(iParam0==1){
Local_44.f_7="LOC_F82";
}else{
Local_44.f_7="LOC_T82";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SKID")){
if(iParam0==0){
Local_44.f_7="LOC_M51";
}elseif(iParam0==1){
Local_44.f_7="LOC_F52";
}else{
Local_44.f_7="LOC_T52";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SLSant")){
if(iParam0==0){
Local_44.f_7="LOC_M82";
}elseif(iParam0==1){
Local_44.f_7="LOC_F83";
}else{
Local_44.f_7="LOC_T83";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Stad")){
if(iParam0==0){
Local_44.f_7="LOC_M49";
}elseif(iParam0==1){
Local_44.f_7="LOC_F50";
}else{
Local_44.f_7="LOC_T50";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Tatamo")){
if(iParam0==0){
Local_44.f_7="LOC_M84";
}elseif(iParam0==1){
Local_44.f_7="LOC_F85";
}else{
Local_44.f_7="LOC_T85";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Termina")){
if(iParam0==0){
Local_44.f_7="LOC_M85";
}elseif(iParam0==1){
Local_44.f_7="LOC_F86";
}else{
Local_44.f_7="LOC_T86";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TEXTI")){
if(iParam0==0){
Local_44.f_7="LOC_M86";
}elseif(iParam0==1){
Local_44.f_7="LOC_F87";
}else{
Local_44.f_7="LOC_T87";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WVine")){
if(iParam0==0){
Local_44.f_7="LOC_M99";
}elseif(iParam0==1){
Local_44.f_7="LOC_F100";
}else{
Local_44.f_7="LOC_T100";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "UtopiaG")){
if(iParam0==0){
Local_44.f_7="LOC_M89";
}elseif(iParam0==1){
Local_44.f_7="LOC_F90";
}else{
Local_44.f_7="LOC_T90";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vesp")){
if(iParam0==0){
Local_44.f_7="LOC_M92";
}elseif(iParam0==1){
Local_44.f_7="LOC_F93";
}else{
Local_44.f_7="LOC_T93";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "VCana")){
if(iParam0==0){
Local_44.f_7="LOC_M94";
}elseif(iParam0==1){
Local_44.f_7="LOC_F95";
}else{
Local_44.f_7="LOC_T95";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vine")){
if(iParam0==0){
Local_44.f_7="LOC_M95";
}elseif(iParam0==1){
Local_44.f_7="LOC_F96";
}else{
Local_44.f_7="LOC_T96";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WMirror")){
if(iParam0==0){
Local_44.f_7="LOC_M98";
}elseif(iParam0==1){
Local_44.f_7="LOC_F99";
}else{
Local_44.f_7="LOC_T99";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WindF")){
if(iParam0==0){
Local_44.f_7="LOC_M76";
}elseif(iParam0==1){
Local_44.f_7="LOC_F77";
}else{
Local_44.f_7="LOC_T77";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zancudo")){
if(iParam0==0){
Local_44.f_7="LOC_M100";
}elseif(iParam0==1){
Local_44.f_7="LOC_F101";
}else{
Local_44.f_7="LOC_T101";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanChia")){
if(iParam0==0){
Local_44.f_7="LOC_M78";
}elseif(iParam0==1){
Local_44.f_7="LOC_F79";
}else{
Local_44.f_7="LOC_T79";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "STRAW")){
if(iParam0==0){
Local_44.f_7="LOC_M83";
}elseif(iParam0==1){
Local_44.f_7="LOC_F84";
}else{
Local_44.f_7="LOC_T84";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "zQ_UAR")){
if(iParam0==0){
Local_44.f_7="LOC_M17";
}elseif(iParam0==1){
Local_44.f_7="LOC_F18";
}else{
Local_44.f_7="LOC_T18";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ZP_ORT")){
if(iParam0==0){
Local_44.f_7="LOC_M67";
}elseif(iParam0==1){
Local_44.f_7="LOC_F68";
}else{
Local_44.f_7="LOC_T68";
}
return;
}
if(iParam0==0){
Local_44.f_7="LOC_M";
}elseif(iParam0==1){
Local_44.f_7="LOC_M";
}else{
Local_44.f_7="LOC_M";
}}elseif(iParam0==0){
Local_44.f_7="LOC_M";
}elseif(iParam0==1){
Local_44.f_7="LOC_F";
}else{
Local_44.f_7="LOC_T";
}}


char* func_171(bool bParam0){
char* sVar0;
if(!MISC::IS_BIT_SET(uLocal_49, 10)){
if(iLocal_42==0){
sLocal_79="FBIPRAU";
}elseif(iLocal_42==1){
sLocal_79="AHFAUD";
}elseif(iLocal_42==2){
sLocal_79="FHFAUD";
}
if(iLocal_42==0){
if(bParam0==0){
sVar0="FBI_3_MDRPC";
}elseif(bParam0==1){
sVar0="FBI_3_FDRPC";
}elseif(bParam0==2){
sVar0="FBI_3_TDRPC";
}}elseif(iLocal_42==1){
if(bParam0==0){
sVar0="AH_MDRPC";
}elseif(bParam0==1){
sVar0="AH_FDRPC";
}elseif(bParam0==2){
sVar0="AH_TDRPC";
}}elseif(iLocal_42==2){
if(bParam0==0){
sVar0="FHP_PICKCM";
}elseif(bParam0==1){
sVar0="FHP_PICKCF";
}elseif(bParam0==2){
sVar0="FHP_PICKCT";
}}}else{
sLocal_79="FHFAUD";
if(bParam0==0){
sVar0="FHP_MOVEM";
}elseif(bParam0==1){
sVar0="FHP_MOVEF";
}elseif(bParam0==2){
sVar0="FHP_MOVET";
}}
return sVar0;
}

int func_172(){
if(MISC::IS_BIT_SET(uLocal_49, 0)){
if(func_87(iLocal_51)){
if(MISC::IS_BIT_SET(uLocal_49, 1)){
if((func_175(0) || func_175(2)) || func_175(1)){
func_1(46, 1);
func_173();
return 1;
}}}}
return 0;
}


void func_173(){
if(!MISC::IS_BIT_SET(uLocal_49, 6)){
if(func_87(iLocal_51)){
Local_52={
ENTITY::GET_ENTITY_COORDS(iLocal_51, 1) 
};
fLocal_53=ENTITY::GET_ENTITY_HEADING(iLocal_51);
MISC::SET_BIT(&uLocal_49, 6);
MISC::SET_BIT(&uLocal_49, 2);
func_64(iLocal_51, &Local_54);
func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
MISC::SET_BIT(&uLocal_49, 14);
func_174(iLocal_51);
}}}

int func_174(int iParam0){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_175(int iParam0){
if(Global_22840==0){
return 0;
}
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(Global_20383.f_1==10){
if(Global_7568==iParam0){
return 1;
}else{
return 0;
}}else{
return 0;
}}
return 0;
}


void func_176(){
if(MISC::IS_BIT_SET(uLocal_49, 0) && MISC::IS_BIT_SET(uLocal_49, 1)){
if(!MISC::IS_BIT_SET(uLocal_49, 11)){
func_260(1);
}}elseif(MISC::IS_BIT_SET(uLocal_49, 11)){
func_260(0);
}}


void func_177(){
if((MISC::IS_BIT_SET(uLocal_49, 0) && Global_43257==15) && !func_209()){
if(iLocal_38==0){
if(!MISC::IS_BIT_SET(uLocal_49, 1)){
if(!func_78(PLAYER::PLAYER_PED_ID(), Local_50, 5f, 1)){
if(MISC::IS_BIT_SET(uLocal_49, 20) || func_135()){
if((func_251(PLAYER::PLAYER_PED_ID()) && !MISC::IS_BIT_SET(uLocal_47[0], 17)) && !MISC::IS_BIT_SET(uLocal_47[1], 18)){
if(PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())){
func_208(24, 46);
if(MISC::IS_BIT_SET(uLocal_49, 0)){
if(!func_207() && func_187(ENTITY::GET_ENTITY_COORDS(iLocal_51, 1))){
if(func_184(iLocal_51)){
if(func_183(iLocal_51)){
MISC::SET_BIT(&uLocal_49, true);
if(func_72(PLAYER::PLAYER_PED_ID())==0){
func_71(7);
func_1(7, 1);
}else{
func_71(8);
func_1(8, 1);
}
Local_50={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
return;
}
}
}
if(MISC::IS_BIT_SET(uLocal_49, 20)){
func_1(46, 0);
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
}
Local_50={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_208(7, 8);
if(MISC::IS_BIT_SET(uLocal_49, 20)){
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
}else{
func_71(24);
}}
}}elseif(!func_13()){
if((PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_BIT_SET(uLocal_49, 20)){
if(iLocal_245 !=-1){
if((MISC::GET_GAME_TIMER() - iLocal_245) > 1000){
MISC::SET_BIT(&uLocal_49, 20);
}}else{
iLocal_245=MISC::GET_GAME_TIMER();
}
}
else{
MISC::CLEAR_BIT(&uLocal_49, 20);
}}}elseif(func_13()){
Local_50={
0f, 0f, 0f 
};
}}elseif(MISC::IS_BIT_SET(uLocal_49, 0)){
if(!func_78(PLAYER::PLAYER_PED_ID(), Local_50, 10f, 1)){
Local_50={
0f, 0f, 0f 
};
MISC::CLEAR_BIT(&uLocal_49, true);
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
}elseif(!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!MISC::IS_BIT_SET(uLocal_49, 20)){
func_71(24);
}
func_1(24, 1);
MISC::CLEAR_BIT(&uLocal_49, true);
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
Local_50={
0f, 0f, 0f 
};
}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_87(iLocal_51)){
if(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_51){
func_1(46, 0);
func_179(0);
func_178();
Local_50={
0f, 0f, 0f 
};
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
}}}elseif(!func_184(iLocal_51)){
func_1(35, 1);
MISC::CLEAR_BIT(&uLocal_49, true);
Local_50={
0f, 0f, 0f 
};
MISC::CLEAR_BIT(&uLocal_49, 20);
iLocal_245=-1;
}}}}}


void func_178(){
MISC::CLEAR_BIT(&uLocal_49, false);
MISC::CLEAR_BIT(&uLocal_49, 8);
MISC::CLEAR_BIT(&uLocal_49, 7);
}


void func_179(int iParam0){
if(func_182()){
return;
}
if(Global_20584){
if(func_181()){
func_180(1, 1);
}else{
func_180(0, 0);
}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}
Global_21725=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 30);
}else{
MISC::CLEAR_BIT(&Global_8253, 30);
}
if(!func_154()){
Global_20383.f_1=3;
}}


void func_180(bool bParam0, bool bParam1){
if(bParam0){
if(func_15(0)){
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


bool func_181(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_182(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_183(int iParam0){
struct<3> Var0;
if(ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0)){
func_71(39);
return 0;
}
if(!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, 0) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 0)){
func_71(37);
return 0;
}
if(ENTITY::IS_ENTITY_IN_WATER(iParam0)){
func_71(36);
return 0;
}
Var0={
ENTITY::GET_ENTITY_ROTATION(iParam0, 2) 
};
if(Var0.f_0 >=10f || Var0.f_0 <=-10f){
func_71(42);
return 0;
}elseif(Var0.f_1 >=15f || Var0.f_1 <=-15f){
func_71(43);
return 0;
}
return 1;
}

int func_184(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
iVar0=0;
if(iParam0 !=0){
if(func_87(iParam0)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
Var1={
Var1 + Vector(-1f, -1f, -2f) 
};
Var2={
Var2 + Vector(1f, 1f, 2f) 
};
if(!MISC::IS_AREA_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2), 0, 1, 0, 0, 0, iParam0, 0)){
iVar0++;
}elseif(func_13()){
func_71(38);
}
if(!func_186()){
iVar0++;
}elseif(func_13()){
func_71(35);
}
if(iVar0==2){
if(func_185(ENTITY::GET_ENTITY_COORDS(iParam0, 1))){
return 1;
}}}}
return 0;
}

int func_185(struct<3> Param0){
float fVar0;
float fVar1;
struct<3> Var2;
Var2={
Param0 + Vector(3.2f, 0f, 0f) 
};
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar0, 0, 0) && MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &fVar1, 0, 0)){
if(MISC::ABSF((fVar0 - fVar1)) < 0.9f){
return 1;
}}
if(func_13()){
func_71(37);
}
return 0;
}

int func_186(){
var uVar0[5];
int iVar1;
PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
iVar1=0;
while (iVar1 <=4){
if(func_251(uVar0[iVar1]) && uVar0[iVar1] !=PLAYER::PLAYER_PED_ID()){
if(vdist2(Local_50, ENTITY::GET_ENTITY_COORDS(uVar0[iVar1], 1)) <=16f){
return 1;
}}
iVar1++;
}
return 0;
}

int func_187(struct<3> Param0){
if(!func_203() && !func_202(Param0)){
if(!func_199()){
if(!func_195(Param0)){
if(!func_193(Param0) && !func_188(Param0)){
return 1;
}}else{
func_71(0);
}}}
return 0;
}

int func_188(struct<3> Param0){
if(func_191(Param0) || func_189(Param0)){
if(func_13()){
func_71(22);
}
return 1;
}
return 0;
}

int func_189(struct<3> Param0){
float fVar0;
fVar0=vdist2(Param0, Global_95820[func_190(Param0, 0) /*9*/].f_3);
if(fVar0 <=40000f){
return 1;
}
return 0;
}

int func_190(struct<3> Param0, bool bParam1){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=7;
iVar0=0;
while (iVar0 <=(7 - 1)){
if(Global_95820[iVar0 /*9*/].f_7 !=263){
if(!bParam1 || MISC::IS_BIT_SET(Global_113648.f_7231.f_17[iVar0], 0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95820[iVar0 /*9*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}

int func_191(struct<3> Param0){
float fVar0;
fVar0=vdist2(Param0, Global_95884[func_192(Param0, 0) /*9*/].f_3);
if(fVar0 <=40000f){
return 1;
}
return 0;
}

int func_192(struct<3> Param0, bool bParam1){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1E+07f;
iVar3=5;
iVar0=0;
while (iVar0 <=(5 - 1)){
if(Global_95884[iVar0 /*9*/].f_7 !=263){
if(!bParam1 || MISC::IS_BIT_SET(Global_113648.f_7231.f_11[iVar0], 0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95884[iVar0 /*9*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}

int func_193(struct<3> Param0){
struct<3> Var0;
float fVar1;
if(PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 1077936128, 0)){
fVar1=vdist2(Param0, Var0);
if(fVar1 >=400f || !func_194(Param0, Var0)){
return 0;
}elseif(fVar1 < 20f && fVar1 > 6f){
if(func_13()){
func_71(40);
}
return 1;
}else{
if(func_13()){
func_71(41);
}
return 1;
}}
return 0;
}

int func_194(struct<3> Param0, struct<3> Param1){
float fVar0;
fVar0=MISC::ABSF((Param0.f_2 - Param1.f_2));
if(fVar0 <=5f){
return 1;
}
return 0;
}

int func_195(struct<3> Param0){
if(!func_198(1)){
if(!func_198(0)){
if(func_196(Param0, 0)){
return 1;
}}elseif(func_196(Param0, 1)){
return 1;
}}
if(!func_198(7)){
if(!func_198(4)){
if(func_196(Param0, 4)){
return 1;
}}else{
if(func_196(Param0, 5)){
return 1;
}
if(func_196(Param0, 6)){
return 1;
}}}
if(func_196(Param0, 2)){
return 1;
}
if(func_196(Param0, 3)){
return 1;
}
if(!func_198(8)){
if(func_196(Param0, 8)){
return 1;
}}
if(!func_198(16)){
if(func_196(Param0, 16)){
return 1;
}
if(!func_198(15)){
if(func_196(Param0, 15)){
return 1;
}
if(!func_198(14)){
if(func_196(Param0, 14)){
return 1;
}
if(!func_198(13)){
if(func_196(Param0, 13)){
return 1;
}
if(!func_198(12)){
if(func_196(Param0, 12)){
return 1;
}
if(!func_198(11)){
if(func_196(Param0, 11)){
return 1;
}
if(!func_198(10)){
if(func_196(Param0, 10)){
return 1;
}
if(!func_198(9)){
if(func_196(Param0, 9)){
return 1;
}}}
}}}}}}
if(!func_198(20)){
if(func_196(Param0, 20)){
return 1;
}
if(!func_198(19)){
if(func_196(Param0, 19)){
return 1;
}
if(!func_198(18)){
if(func_196(Param0, 18)){
return 1;
}
if(!func_198(17)){
if(func_196(Param0, 17)){
return 1;
}}}}}
if(!func_198(21)){
if(func_196(Param0, 21)){
return 1;
}}
if(!func_198(22)){
if(func_196(Param0, 22)){
return 1;
}}
if(!func_198(23)){
if(func_196(Param0, 23)){
return 1;
}}
if(!func_198(24)){
if(func_196(Param0, 24)){
return 1;
}}
if(!func_198(26)){
if(!func_198(25)){
if(func_196(Param0, 25)){
return 1;
}}elseif(func_196(Param0, 26)){
return 1;
}}
if(!func_198(30)){
if(func_196(Param0, 30)){
return 1;
}
if(!func_198(29)){
if(func_196(Param0, 29)){
return 1;
}
if(!func_198(28)){
if(func_196(Param0, 28)){
return 1;
}
if(!func_198(27)){
if(func_196(Param0, 27)){
return 1;
}}}}}
if(!func_198(31)){
if(func_196(Param0, 31)){
return 1;
}}
if(!func_198(34)){
if(func_196(Param0, 34)){
return 1;
}
if(!func_198(33)){
if(func_196(Param0, 33)){
return 1;
}
if(!func_198(32)){
if(func_196(Param0, 32)){
return 1;
}}}}
if(!func_198(35)){
if(func_196(Param0, 35)){
return 1;
}}
if(!func_198(36)){
if(func_196(Param0, 36)){
return 1;
}}
if(!func_198(43)){
if(func_196(Param0, 43)){
return 1;
}
if(!func_198(42)){
if(func_196(Param0, 42)){
return 1;
}
if(!func_198(38)){
if(func_196(Param0, 42)){
return 1;
}}
if(!func_198(39)){
if(func_196(Param0, 42)){
return 1;
}}
if(!func_198(40)){
if(func_196(Param0, 42)){
return 1;
}}
if(!func_198(41)){
if(func_196(Param0, 42)){
return 1;
}}
if(!func_198(37)){
if(func_196(Param0, 42)){
return 1;
}}}}
if(!func_198(45)){
if(func_196(Param0, 45)){
return 1;
}
if(!func_198(44)){
if(func_196(Param0, 44)){
return 1;
}}}
if(!func_198(51)){
if(func_196(Param0, 51)){
return 1;
}
if(!func_198(48)){
if(func_196(Param0, 48)){
return 1;
}
if(!func_198(49)){
if(func_196(Param0, 49)){
return 1;
}}
if(!func_198(50)){
if(func_196(Param0, 50)){
return 1;
}}
if(!func_198(47)){
if(func_196(Param0, 47)){
return 1;
}
if(!func_198(46)){
if(func_196(Param0, 46)){
return 1;
}}}}}
if(!func_198(53)){
if(func_196(Param0, 53)){
return 1;
}
if(!func_198(56)){
if(func_196(Param0, 56)){
return 1;
}
if(!func_198(55)){
if(func_196(Param0, 55)){
return 1;
}}
if(!func_198(54)){
if(func_196(Param0, 54)){
return 1;
}}
if(!func_198(52)){
if(func_196(Param0, 52)){
return 1;
}}}}
if(!func_198(57)){
if(func_196(Param0, 57)){
return 1;
}}
if(!func_198(62)){
if(func_196(Param0, 62)){
return 1;
}
if(!func_198(61)){
if(func_196(Param0, 61)){
return 1;
}
if(!func_198(60)){
if(func_196(Param0, 60)){
return 1;
}
if(!func_198(59)){
if(func_196(Param0, 59)){
return 1;
}
if(!func_198(58)){
if(func_196(Param0, 58)){
return 1;
}}}}}}
return 0;
}

int func_196(struct<3> Param0, int iParam1){
float fVar0;
fVar0=vdist2(Param0, func_197(iParam1));
if(fVar0 <=625f){
return 1;
}
return 0;
}


Vector3 func__197(int iParam0){
struct<3> Var0;
if(iParam0==0){
Var0={
-1604.668f, 5239.1f, 3.01f 
};
}elseif(iParam0==1){
Var0={
-1592.84f, 5214.04f, 3.01f 
};
}elseif(iParam0==2){
Var0={
190.26f, -956.35f, 29.63f 
};
}elseif(iParam0==3){
Var0={
190.26f, -956.35f, 29.63f 
};
}elseif(iParam0==4){
Var0={
414f, -761f, 29f 
};
}elseif(iParam0==5){
Var0={
1199.27f, -1255.63f, 34.23f 
};
}elseif(iParam0==6){
Var0={
-468.9f, -1713.06f, 18.21f 
};
}elseif(iParam0==7){
Var0={
237.65f, -385.41f, 44.4f 
};
}elseif(iParam0==8){
Var0={
-1458.97f, 485.99f, 115.38f 
};
}elseif(iParam0==9){
Var0={
-1622.89f, 4204.87f, 83.3f 
};
}elseif(iParam0==10){
Var0={
242.7f, 362.7f, 104.74f 
};
}elseif(iParam0==11){
Var0={
1835.53f, 4705.86f, 38.1f 
};
}elseif(iParam0==12){
Var0={
1826.13f, 4698.88f, 38.92f 
};
}elseif(iParam0==13){
Var0={
637.02f, 119.7093f, 89.5f 
};
}elseif(iParam0==14){
Var0={
-2892.93f, 3192.37f, 11.66f 
};
}elseif(iParam0==15){
Var0={
524.43f, 3079.82f, 39.48f 
};
}elseif(iParam0==16){
Var0={
-697.75f, 45.38f, 43.03f 
};
}elseif(iParam0==17){
Var0={
-188.22f, 1296.1f, 302.86f 
};
}elseif(iParam0==18){
Var0={
-954.19f, -2760.05f, 14.64f 
};
}elseif(iParam0==19){
Var0={
-63.8f, -809.5f, 321.8f 
};
}elseif(iParam0==20){
Var0={
1731.41f, 96.96f, 170.39f 
};
}elseif(iParam0==21){
Var0={
-1877.82f, -440.649f, 45.05f 
};
}elseif(iParam0==22){
Var0={
809.66f, 1279.76f, 360.49f 
};
}elseif(iParam0==23){
Var0={
-915.6f, 6139.2f, 5.5f 
};
}elseif(iParam0==24){
Var0={
-72.29f, -1260.63f, 28.14f 
};
}elseif(iParam0==25){
Var0={
1804.32f, 3931.33f, 32.82f 
};
}elseif(iParam0==26){
Var0={
-684.17f, 5839.16f, 16.09f 
};
}elseif(iParam0==27){
Var0={
-1104.93f, 291.25f, 64.3f 
};
}elseif(iParam0==28){
Var0={
565.39f, -1772.88f, 29.77f 
};
}elseif(iParam0==29){
Var0={
565.39f, -1772.88f, 29.77f 
};
}elseif(iParam0==30){
Var0={
-1104.93f, 291.25f, 64.3f 
};
}elseif(iParam0==31){
Var0={
2726.1f, 4145f, 44.3f 
};
}elseif(iParam0==32){
Var0={
327.85f, 3405.7f, 35.73f 
};
}elseif(iParam0==33){
Var0={
18f, 4527f, 105f 
};
}elseif(iParam0==34){
Var0={
-303.82f, 6211.29f, 31.05f 
};
}elseif(iParam0==35){
Var0={
1972.59f, 3816.43f, 32.42f 
};
}elseif(iParam0==36){
Var0={
0f, 0f, 0f 
};
}elseif(iParam0==37){
Var0={
-1097.16f, 790.01f, 164.52f 
};
}elseif(iParam0==38){
Var0={
-558.65f, 284.49f, 90.86f 
};
}elseif(iParam0==39){
Var0={
-1034.15f, 366.08f, 80.11f 
};
}elseif(iParam0==40){
Var0={
-623.91f, -266.17f, 37.76f 
};
}elseif(iParam0==41){
Var0={
-1096.85f, 67.68f, 52.95f 
};
}elseif(iParam0==42){
Var0={
-1310.7f, -640.22f, 26.54f 
};
}elseif(iParam0==43){
Var0={
-44.75f, -1288.67f, 28.21f 
};
}elseif(iParam0==44){
Var0={
2468.51f, 3437.39f, 49.9f 
};
}elseif(iParam0==45){
Var0={
2319.44f, 2583.58f, 46.76f 
};
}elseif(iParam0==46){
Var0={
-149.75f, 285.81f, 93.67f 
};
}elseif(iParam0==47){
Var0={
-70.71f, 301.43f, 106.79f 
};
}elseif(iParam0==48){
Var0={
-257.22f, 292.85f, 90.63f 
};
}elseif(iParam0==49){
Var0={
305.52f, 157.19f, 102.94f 
};
}elseif(iParam0==50){
Var0={
1040.96f, -534.42f, 60.17f 
};
}elseif(iParam0==51){
Var0={
-484.2f, 229.68f, 82.21f 
};
}elseif(iParam0==52){
Var0={
908f, 3643.7f, 32.2f 
};
}elseif(iParam0==54){
Var0={
465.1f, -1849.3f, 27.8f 
};
}elseif(iParam0==55){
Var0={
-161f, -1669.7f, 33f 
};
}elseif(iParam0==56){
Var0={
-1298.2f, 2504.14f, 21.09f 
};
}elseif(iParam0==53){
Var0={
1181.5f, -400.1f, 67.5f 
};
}elseif(iParam0==57){
Var0={
-1298.98f, 4640.16f, 105.67f 
};
}elseif((iParam0==58 || iParam0==59) || iParam0==62){
Var0={
-14.39f, -1472.69f, 29.58f 
};
}elseif(iParam0==60){
Var0={
0f, 0f, 0f 
};
}elseif(iParam0==61){
Var0={
0f, 0f, 0f 
};
}
return Var0;
}

int func_198(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

int func_199(){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 <=(4 - 1)){
bVar1=false;
while (bVar1 <=(Local_68[iVar0 /*261*/].f_257 - 1)){
if(MISC::IS_BIT_SET(Local_68[iVar0 /*261*/].f_258, bVar1)){
if(func_201(sLocal_70)){
if(Local_68[iVar0 /*261*/].f_260==0){
if(func_13()){
func_71(21);
}}elseif(Local_68[iVar0 /*261*/].f_260==2){
if(func_13()){
func_71(22);
}}elseif(Local_68[iVar0 /*261*/].f_260==1){
if(func_13()){
func_71(23);
}}elseif(Local_68[iVar0 /*261*/].f_260==3){
if(func_13()){
func_71(20);
}}
return 1;
}
if(func_200(&(Local_68[iVar0 /*261*/][bVar1 /*8*/]))){
if(Local_68[iVar0 /*261*/].f_260==0){
if(func_13()){
func_71(21);
}}elseif(Local_68[iVar0 /*261*/].f_260==2){
if(func_13()){
func_71(22);
}}elseif(Local_68[iVar0 /*261*/].f_260==1){
if(func_13()){
func_71(23);
}}elseif(Local_68[iVar0 /*261*/].f_260==3){
if(func_13()){
func_71(20);
}}
return 1;
}}
bVar1++;
}
iVar0++;
}
return 0;
}

int func_200(var uParam0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 0)){
return 1;
}
return 0;
}

int func_201(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
iVar0=0;
while (iVar0 <=12){
if(!MISC::IS_STRING_NULL(sLocal_69[iVar0])){
if(MISC::ARE_STRINGS_EQUAL(sLocal_69[iVar0], sParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_202(struct<3> Param0){
if(Param0.f_2 < -90f){
return 1;
}
if((vdist2(Param0, -89.377f, 92.6583f, 71.2349f) <=400f || vdist2(Param0, -62.0307f, -1839.859f, 25.6787f) <=400f) || vdist2(Param0, -234.7648f, -1150.311f, 21.9224f) <=400f){
func_71(21);
return 1;
}
return 0;
}

int func_203(){
int iVar0;
float fVar1;
iVar0=func_205(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 1);
fVar1=vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_95719[iVar0 /*10*/].f_3);
if(fVar1 <=10000f){
if(func_13()){
func_204(iVar0);
}
return 1;
}
return 0;
}


void func_204(int iParam0){
if(iParam0==0 || iParam0==1){
func_71(32);
}elseif(iParam0==5 || iParam0==6){
func_71(33);
}elseif((iParam0==2 || iParam0==3) || iParam0==4){
func_71(34);
}}

int func_205(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95719[iVar0 /*10*/].f_7 !=263){
if(Global_95719[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_206(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95719[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__206(int iParam0){
return MISC::IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

int func_207(){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 855.7258f, -2344.491f, 29.33145f) <=52900f){
if(func_13()){
func_71(28);
}
return 1;
}elseif(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1383.21f, -2068.02f, 51.87057f) <=160000f){
if(func_13()){
func_71(29);
}
return 1;
}
return 0;
}


void func_208(bool bParam0, bool bParam1){
func_4(bParam0);
if(func_2(func_3(bParam0))){
HUD::CLEAR_HELP(1);
MISC::SET_BIT(&uLocal_49, 15);
}
if(bParam1 !=46){
func_4(bParam1);
if(func_2(func_3(bParam1))){
HUD::CLEAR_HELP(1);
MISC::SET_BIT(&uLocal_49, 15);
}}}

int func_209(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}


void func_210(){
int iVar0;
int iVar1;
if((Global_43257==15 && iLocal_38==0) && !func_209()){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!MISC::IS_BIT_SET(uLocal_49, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_221()){
if(!MISC::IS_BIT_SET(uLocal_49, 7)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_87(iVar0)){
if(!func_220(iVar0)){
if(!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched")){
if(func_214(iVar0) && !func_213()){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
if(func_72(PLAYER::PLAYER_PED_ID())==0){
func_71(17);
}else{
func_71(18);
}
iLocal_51=iVar0;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, 1, 1);
if(DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 1)){
}
MISC::SET_BIT(&uLocal_49, false);
MISC::SET_BIT(&uLocal_49, 8);
MISC::SET_BIT(&uLocal_49, 7);
return;
}else{
func_20(&iLocal_51);
MISC::CLEAR_BIT(&uLocal_49, 7);
MISC::CLEAR_BIT(&uLocal_49, false);
return;
}
}
}
if(DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", 0)){
}
MISC::SET_BIT(&uLocal_49, 7);
}elseif(func_212(iVar0)){
iLocal_51=iVar0;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, 1, 1);
MISC::SET_BIT(&uLocal_49, false);
MISC::SET_BIT(&uLocal_49, 8);
MISC::SET_BIT(&uLocal_49, 7);
return;
}}else{
func_20(&iLocal_51);
MISC::SET_BIT(&uLocal_49, 7);
MISC::CLEAR_BIT(&uLocal_49, false);
}
}
elseif(MISC::IS_BIT_SET(uLocal_49, 0)){
if(!func_87(iLocal_51)){
func_20(&iLocal_51);
MISC::SET_BIT(&uLocal_49, false);
MISC::SET_BIT(&uLocal_49, 8);
MISC::SET_BIT(&uLocal_49, 7);
}
}}}elseif(MISC::IS_BIT_SET(uLocal_49, 8)){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_87(iVar1)){
if(func_19(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched")){
iLocal_51=iVar1;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, 1, 1);
MISC::SET_BIT(&uLocal_49, false);
MISC::SET_BIT(&uLocal_49, 7);
}}}else{
MISC::CLEAR_BIT(&uLocal_49, 7);
}}elseif(func_87(iLocal_51)){
if(!func_19(PLAYER::PLAYER_PED_ID(), iLocal_51, 80f, 1)){
if(!DECORATOR::DECOR_EXIST_ON(iLocal_51, "Getaway_Winched")){
MISC::SET_BIT(&(uLocal_47[func_5(5)]), 5);
MISC::SET_BIT(&uLocal_49, 8);
}else{
MISC::CLEAR_BIT(&uLocal_49, 8);
}
func_20(&iLocal_51);
MISC::CLEAR_BIT(&uLocal_49, false);
MISC::CLEAR_BIT(&uLocal_49, 7);
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_51){
func_20(&iLocal_51);
func_208(17, 46);
func_208(18, 46);
func_208(14, 46);
func_178();
}elseif(func_221()){
func_20(&iLocal_51);
func_178();
}}elseif(!func_211(iLocal_51)){
if(DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 0)){
}
func_208(17, 46);
func_208(18, 46);
func_20(&iLocal_51);
func_178();
}}else{
func_20(&iLocal_51);
func_178();
}}}}

int func_211(int iParam0){
if(ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f){
func_71(6);
return 0;
}
return 1;
}

int func_212(int iParam0){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid")){
if(DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid")){
return 1;
}}
return 0;
}

int func_213(){
if(PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID())){
if((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0)==PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0)==PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}
return 0;
}

int func_214(int iParam0){
if(func_219() && func_215(iParam0)){
return 1;
}
return 0;
}

int func_215(int iParam0){
if((func_217(iParam0) && !func_216(iParam0)) && func_211(iParam0)){
return 1;
}
return 0;
}

int func_216(int iParam0){
int iVar0;
iVar0=func_63(iParam0);
if(iVar0==0){
func_71(25);
return 1;
}
if(iVar0==1){
func_71(26);
return 1;
}
if(iVar0==2){
func_71(27);
return 1;
}
if(func_38(iParam0)){
func_71(14);
return 1;
}
return 0;
}

int func_217(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(!func_218(iVar0)){
if(VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f){
return 1;
}}
func_71(14);
return 0;
}

int func_218(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=9){
if(iLocal_66[iVar0]==iParam0){
if(iVar0==0 && !func_252(33)){
MISC::SET_BIT(&uLocal_49, 3);
}elseif(iVar0==1 && !func_252(34)){
MISC::SET_BIT(&uLocal_49, 3);
}else{
MISC::CLEAR_BIT(&uLocal_49, 3);
}
return 1;
}
iVar0++;
}
return 0;
}

int func_219(){
if((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
func_71(14);
return 0;
}
return 1;
}

int func_220(int iParam0){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid")){
return 1;
}
return 0;
}

int func_221(){
int iVar0;
if(func_222(&iVar0)){
if(!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched")){
DECORATOR::DECOR_SET_BOOL(iVar0, "Getaway_Winched", 1);
func_71(16);
return 1;
}elseif(DECORATOR::DECOR_GET_BOOL(iVar0, "Getaway_Winched")){
return 0;
}}
return 0;
}

int func_222(var uParam0){
int iVar0;
int iVar1;
int iVar2;
if(func_251(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_87(iVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if((iVar1==joaat("cargobob") || iVar1==joaat("cargobob2")) || iVar1==joaat("cargobob3")){
if(VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0)){
iVar2=VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
*uParam0=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
if(func_87(*uParam0)){
return 1;
}}}}}}
return 0;
}


void func_223(){
switch (iLocal_67){
case 0:
if(MISC::IS_BIT_SET(uLocal_49, 0)){
if((MISC::GET_GAME_TIMER() - iLocal_73) > 500){
sLocal_70=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
iLocal_67=1;
}elseif(iLocal_73==-1){
iLocal_73=MISC::GET_GAME_TIMER();
}}
break;
case 1:
if((MISC::GET_GAME_TIMER() - Local_68[iLocal_72 /*261*/].f_259) > 500){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_70) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/])){
if(MISC::ARE_STRINGS_EQUAL(sLocal_70, Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/])){
MISC::SET_BIT(&(Local_68[iLocal_72 /*261*/].f_258), iLocal_71);
}else{
MISC::CLEAR_BIT(&(Local_68[iLocal_72 /*261*/].f_258), bLocal_71);
}}else{
sLocal_70=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
bLocal_71++;
if(bLocal_71 >=(Local_68[iLocal_72 /*261*/].f_257 - 1)){
bLocal_71=false;
Local_68[iLocal_72 /*261*/].f_259=MISC::GET_GAME_TIMER();
iLocal_72++;
if(iLocal_72 >=4){
iLocal_72=0;
iLocal_73=MISC::GET_GAME_TIMER();
iLocal_67=0;
}}}
break;
}}


void func_224(){
int iVar0;
bool bVar1;
if(((((((Global_43257==15 && iLocal_37 !=3) && MISC::IS_BIT_SET(uLocal_49, 5)) && !func_209()) && Global_78555==-1) && !func_234()) && !func_86(9)) || func_105(35)){
func_233();
func_231();
switch (iLocal_39){
case 0:
if(MISC::IS_BIT_SET(uLocal_49, 17)){
iVar0=-1;
while (iVar0 < (36 - 1)){
iVar0++;
if(iVar0 !=46){
func_230(uLocal_47[0], &iVar0);
}}
MISC::CLEAR_BIT(&uLocal_49, 17);
}else{
iVar0=31;
while (iVar0 < (46 - 1)){
iVar0++;
if(iVar0 !=46){
func_230(uLocal_47[1], &iVar0);
}}
MISC::SET_BIT(&uLocal_49, 17);
}
break;
case 1:
case 2:
case 3:
case 4:
func_225(bLocal_46, 1);
break;
}}elseif(((((((Global_43257 !=15 || Global_43257 !=0) || Global_43257 !=2) || Global_43257 !=4) || Global_43257 !=17) || func_209()) || Global_78555==-1) || Global_112703){
bVar1=false;
if(func_134()){
bVar1=true;
}elseif(Global_112703){
bVar1=2;
}
if(MISC::IS_BIT_SET(uLocal_47[func_5(bVar1)], bVar1)){
func_225(bVar1, 0);
}}}


void func_225(bool bParam0, bool bParam1){
switch (iLocal_39){
case 1:
if((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_228(func_91())) && !func_227()){
func_226(func_3(bParam0), 15000);
iLocal_39=2;
}
break;
case 2:
if(func_2(func_3(bParam0))){
fLocal_48=0f;
iLocal_39=3;
}else{
fLocal_48=(fLocal_48 + MISC::GET_FRAME_TIME());
if(fLocal_48 >=20f){
iLocal_39=4;
}elseif(MISC::IS_BIT_SET(uLocal_49, 15)){
func_4(bParam0);
MISC::CLEAR_BIT(&uLocal_49, 15);
iLocal_39=4;
}}
break;
case 3:
if(!func_2(func_3(bParam0))){
if(fLocal_48 >=7.5f || MISC::IS_BIT_SET(uLocal_49, 15)){
func_4(bParam0);
MISC::CLEAR_BIT(&uLocal_49, 15);
iLocal_39=4;
}elseif(bParam1){
iLocal_39=0;
}else{
iLocal_39=1;
fLocal_48=0f;
}}else{
fLocal_48=(fLocal_48 + MISC::GET_FRAME_TIME());
}
break;
case 4:
fLocal_48=0f;
iLocal_39=0;
break;
}}


void func_226(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_227(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_228(bool bParam0){
int iVar0;
if(func_57(bParam0)){
if(func_229(bParam0)){
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(Global_113648.f_7690[iVar0 /*15*/].f_3==5){
return 1;
}
iVar0++;
}}}
return 0;
}

int func_229(bool bParam0){
int iVar0;
if(!func_57(bParam0)){}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar0 /*14*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_866){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_765[iVar0 /*10*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
return 0;
}


void func_230(var uParam0, int iParam1){
bool bVar0;
bVar0=func_6(*iParam1);
if(MISC::IS_BIT_SET(uParam0, bVar0)){
if(!MISC::IS_BIT_SET(uLocal_49, 3)){
bLocal_46=*iParam1;
iLocal_39=1;
fLocal_48=0f;
func_4(44);
func_4(45);
iLocal_76=MISC::GET_GAME_TIMER();
*iParam1=46;
}elseif(14==bVar0){
func_4(bVar0);
*iParam1=46;
}else{
bLocal_46=*iParam1;
iLocal_39=1;
fLocal_48=0f;
*iParam1=46;
}}}


void func_231(){
if(iLocal_37==0 || iLocal_37==1){
switch (iLocal_38){
case 0:
if(func_232(func_3(3), 0, 0)){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_134()) && !Global_112288){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}
iLocal_38=1;
}
break;
case 1:
if(MISC::IS_BIT_SET(uLocal_49, 0)){
if(iLocal_42==2){
if(iLocal_37==1){
if(func_87(iLocal_51)){
func_71(3);
func_1(3, 1);
}
}
iLocal_38=2;
}else{
if(func_87(iLocal_51)){
func_71(3);
func_1(3, 1);
}
iLocal_38=2;
}}else{
iLocal_38=2;
}
break;
case 2:
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(func_2(func_3(3))){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}
iLocal_38=0;
}
break;
}}}


bool func_232(var uParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(uParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


void func_233(){
if((((!func_105(func_106()) && !func_105(35)) && !func_228(func_91())) && !func_227()) && !func_119()){
if(iLocal_77 < 2 && (MISC::GET_GAME_TIMER() - iLocal_76) > 480000){
if(iLocal_42 !=2){
func_71(44);
}else{
func_71(45);
}
iLocal_77++;
}}}

int func_234(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


void func_235(){
if(func_77()){
if(MISC::IS_BIT_SET(uLocal_49, 2)){
if(func_87(iLocal_51)){
func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
func_20(&iLocal_51);
}
MISC::CLEAR_BIT(&uLocal_49, 2);
}
func_1(46, 1);
func_260(0);
}}


void func_236(){
if(!func_241()){
if(!func_234()){
if(CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_238();
}}}}elseif(iLocal_37 !=3){
func_237();
}}


void func_237(){
if(iLocal_37 !=4){
if(iLocal_37 !=2){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112288){
MISC::SET_BIT(&uLocal_49, 15);
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_49, 0)){
if(func_87(iLocal_51)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, 0);
}
func_20(&iLocal_51);
func_178();
if(iLocal_42 !=2){
Local_50={
0f, 0f, 0f 
};
}
MISC::CLEAR_BIT(&uLocal_49, 8);
}}elseif(MISC::IS_BIT_SET(uLocal_49, 0)){
func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
if(func_87(iLocal_51)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, 0);
}
func_20(&iLocal_51);
func_178();
}
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5)){
HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
MISC::CLEAR_BIT(&uLocal_49, 4);
MISC::CLEAR_BIT(&uLocal_49, 5);
func_260(0);
if(func_134()){
func_1(1, 1);
}else{
func_1(0, 1);
}}
iLocal_37=3;
}}


void func_238(){
func_240();
if(MISC::IS_BIT_SET(uLocal_49, 4)){
if(!MISC::IS_BIT_SET(uLocal_49, 5) && !MISC::IS_BIT_SET(uLocal_49, 16)){
HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5)){
MISC::SET_BIT(&uLocal_49, 5);
}
if(MISC::IS_BIT_SET(uLocal_49, 5)){
func_239();
iLocal_39=0;
MISC::CLEAR_BIT(&uLocal_49, 7);
MISC::CLEAR_BIT(&uLocal_49, false);
MISC::CLEAR_BIT(&uLocal_49, true);
if(func_2(func_3(0))){
HUD::CLEAR_HELP(1);
}
func_4(0);
iLocal_37=Global_113648.f_10051.f_128;
}}}}


void func_239(){
if(!func_105(func_106())){
if(!MISC::IS_BIT_SET(uLocal_49, 12)){
if(func_103()){
if(iLocal_42 !=2){
func_71(44);
}else{
func_71(45);
}
MISC::SET_BIT(&uLocal_49, 12);
}}}}


void func_240(){
if(!HUD::IS_STREAMING_ADDITIONAL_TEXT(5)){
MISC::SET_BIT(&uLocal_49, 4);
}else{
MISC::CLEAR_BIT(&uLocal_49, 4);
}}

int func_241(){
if(iLocal_42 !=2){
if(iLocal_42==1 && func_91()==2){
if(!MISC::IS_BIT_SET(uLocal_49, 16)){
MISC::SET_BIT(&uLocal_49, 16);
}
return 1;
}elseif(MISC::IS_BIT_SET(uLocal_49, 16)){
MISC::CLEAR_BIT(&uLocal_49, 16);
}
if(func_242()){
return 0;
}}elseif(func_105(35)){
return 0;
}elseif(func_242()){
return 0;
}
return 1;
}

int func_242(){
if(((((Global_43257==15 && !func_209()) && Global_78555==-1) && !func_134()) && !func_243(1112014848)) && !Global_112703){
return 1;
}
return 0;
}

int func_243(float fParam0){
if(iLocal_42==1){
if(func_78(PLAYER::PLAYER_PED_ID(), Global_96627[1 /*15*/], fParam0, 1)){
return 1;
}}elseif(iLocal_42==2){
if(func_78(PLAYER::PLAYER_PED_ID(), Global_96627[0 /*15*/], fParam0, 1)){
return 1;
}}elseif(iLocal_42==0){
if(func_78(PLAYER::PLAYER_PED_ID(), Global_96627[3 /*15*/], fParam0, 1)){
return 1;
}}
return 0;
}


void func_244(){
if(!MISC::IS_BIT_SET(uLocal_49, 13)){
if(func_245()){
MISC::SET_BIT(&uLocal_49, 13);
}}elseif(!func_245()){
MISC::CLEAR_BIT(&uLocal_49, 7);
MISC::CLEAR_BIT(&uLocal_49, false);
MISC::CLEAR_BIT(&uLocal_49, true);
MISC::CLEAR_BIT(&uLocal_49, 13);
}}

int func_245(){
if(((((func_246(39) || func_246(40)) || func_246(41)) || func_246(42)) || func_246(43)) || func_246(44)){
return 1;
}
return 0;
}

int func_246(int iParam0){
return func_247(iParam0, 6, 1);
}

int func_247(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_98()==0){
return MISC::IS_BIT_SET(func_248(func_250(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_248(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_249(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_249(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_101();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_250(int iParam0){
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

int func_251(int iParam0){
if(func_88(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_252(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_253(int iParam0){
iLocal_42=iParam0;
if(iLocal_42==0){
sLocal_79="FBIPRAU";
}elseif(iLocal_42==1){
sLocal_79="AHFAUD";
}elseif(iLocal_42==2){
sLocal_79="FHFAUD";
}
iLocal_66[0]=joaat("trash");
iLocal_66[1]=joaat("towtruck");
iLocal_66[2]=joaat("ambulance");
iLocal_66[3]=joaat("barracks2");
iLocal_66[4]=joaat("stretch");
iLocal_66[5]=joaat("phantom");
iLocal_66[6]=joaat("packer");
iLocal_66[7]=joaat("blazer");
iLocal_66[8]=joaat("blazer2");
if(iLocal_42 !=0){
iLocal_66[9]=joaat("sentinel2");
}else{
iLocal_66[9]=0;
}
func_256();
func_254();
MISC::SET_BIT(&uLocal_49, 17);
iLocal_76=MISC::GET_GAME_TIMER();
}


void func_254(){
sLocal_45[0]="AM_H_FBIC1A";
sLocal_45[1]="AM_H_FBIC1B";
sLocal_45[2]="AM_H_FBIC1C";
sLocal_45[3]="PRC_WANT";
sLocal_45[4]="PRC_DROPOFF";
sLocal_45[5]="PRC_INVALVEH";
sLocal_45[6]="PRC_HEALTH";
sLocal_45[7]=func_255(7);
sLocal_45[8]=func_255(8);
sLocal_45[9]="PRC_USEFIRST";
sLocal_45[10]=func_255(10);
sLocal_45[11]=func_255(11);
sLocal_45[13]=func_255(13);
sLocal_45[12]=func_255(12);
sLocal_45[14]="PRC_UNUSE";
sLocal_45[15]="PRC_SEATS";
sLocal_45[16]="PRC_CBOBVAL";
sLocal_45[17]=func_255(17);
sLocal_45[18]=func_255(18);
sLocal_45[20]=func_255(20);
sLocal_45[21]="PRC_PUBAREA";
sLocal_45[22]="PRC_LAWAREA";
sLocal_45[23]="PRC_RESAREA";
sLocal_45[24]="PRC_STOP";
sLocal_45[25]="PRC_OWNEDM";
sLocal_45[26]="PRC_OWNEDF";
sLocal_45[27]="PRC_OWNEDT";
sLocal_45[28]="PRC_SECROUTE";
sLocal_45[29]="PRC_CLOSELOT";
sLocal_45[30]="PRC_CLOSELES";
sLocal_45[31]="PRC_CLSAGNT";
sLocal_45[32]="PRC_CLOSESAFE_M";
sLocal_45[33]="PRC_CLOSESAFE_F";
sLocal_45[34]="PRC_CLOSESAFE_T";
sLocal_45[35]="PRC_PEDS";
sLocal_45[36]="PRC_WATER";
sLocal_45[37]="PRC_OBST";
sLocal_45[38]="PRC_OBSTVEH";
sLocal_45[39]="PRC_UPDWN";
sLocal_45[40]="PRC_NEARROAD";
sLocal_45[41]="PRC_ONROAD";
sLocal_45[19]="PRC_PLAN";
sLocal_45[42]="PRC_TOOSTEEP";
sLocal_45[43]="PRC_UNEVEN";
sLocal_45[44]="PRC_REMIND";
sLocal_45[45]="PRC_REMINDA";
}


char* func_255(int iParam0){
char* sVar0;
if(iLocal_42==0){
if(iParam0==17){
sVar0="PRC_USEFT";
}elseif(iParam0==18){
sVar0="PRC_USEM";
}elseif(iParam0==10){
sVar0="PRC_PICKCARTF";
}elseif(iParam0==11){
sVar0="PRC_PICKCARM";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWM";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWTF";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFT";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITM";
}elseif(iParam0==20){
sVar0="PRC_INACC";
}}elseif(iLocal_42==1){
if(iParam0==17){
sVar0="PRC_USEFL";
}elseif(iParam0==18){
sVar0="PRC_USEML";
}elseif(iParam0==10){
sVar0="PRC_PICKCRFL";
}elseif(iParam0==11){
sVar0="PRC_PICKCRML";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWML";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWFL";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFL";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITML";
}elseif(iParam0==20){
sVar0="PRC_INACCF";
}}elseif(iLocal_42==2){
if(iParam0==17){
sVar0="PRC_USEL";
}elseif(iParam0==18){
sVar0="PRC_USEL";
}elseif(iParam0==10){
sVar0="PRC_PICKCARL";
}elseif(iParam0==11){
sVar0="PRC_PICKCARL";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWL";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWL";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFT";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITM";
}elseif(iParam0==20){
sVar0="PRC_INACCF";
}}
return sVar0;
}


void func_256(){
sLocal_69[0]="ARMYB";
sLocal_69[1]="AIRP";
sLocal_69[2]="STAD";
sLocal_69[3]="TERMINA";
sLocal_69[4]="MOVIE";
sLocal_69[5]="JAIL";
sLocal_69[6]="OCEANA";
sLocal_69[7]="GOLF";
sLocal_69[8]="HORS";
sLocal_69[9]="MTCHIL";
sLocal_69[10]="MTGORDO";
sLocal_69[11]="SANCHIA";
sLocal_69[12]="TATAMO";
Local_68[0 /*261*/][0 /*8*/]={
func_257("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) 
};
Local_68[0 /*261*/][1 /*8*/]={
func_257("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) 
};
Local_68[0 /*261*/][2 /*8*/]={
func_257("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) 
};
Local_68[0 /*261*/][3 /*8*/]={
func_257("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) 
};
Local_68[0 /*261*/][4 /*8*/]={
func_257("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) 
};
Local_68[0 /*261*/][5 /*8*/]={
func_257("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) 
};
Local_68[0 /*261*/][6 /*8*/]={
func_257("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) 
};
Local_68[0 /*261*/][7 /*8*/]={
func_257("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) 
};
Local_68[0 /*261*/][8 /*8*/]={
func_257("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) 
};
Local_68[0 /*261*/][9 /*8*/]={
func_257("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) 
};
Local_68[0 /*261*/][10 /*8*/]={
func_257("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) 
};
Local_68[0 /*261*/][11 /*8*/]={
func_257("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) 
};
Local_68[0 /*261*/][13 /*8*/]={
func_257("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) 
};
Local_68[0 /*261*/][14 /*8*/]={
func_257("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][15 /*8*/]={
func_257("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][16 /*8*/]={
func_257("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][17 /*8*/]={
func_257("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][18 /*8*/]={
func_257("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][19 /*8*/]={
func_257("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[0 /*261*/][20 /*8*/]={
func_257("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) 
};
Local_68[0 /*261*/][21 /*8*/]={
func_257("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) 
};
Local_68[0 /*261*/][22 /*8*/]={
func_257("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) 
};
Local_68[0 /*261*/][23 /*8*/]={
func_257("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) 
};
Local_68[0 /*261*/][24 /*8*/]={
func_257("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) 
};
Local_68[0 /*261*/][25 /*8*/]={
func_257("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) 
};
Local_68[0 /*261*/][26 /*8*/]={
func_257("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) 
};
Local_68[0 /*261*/][27 /*8*/]={
func_257("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) 
};
Local_68[0 /*261*/][28 /*8*/]={
func_257("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) 
};
Local_68[0 /*261*/][29 /*8*/]={
func_257("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) 
};
Local_68[0 /*261*/][30 /*8*/]={
func_257("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) 
};
Local_68[0 /*261*/][31 /*8*/]={
func_257("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) 
};
Local_68[0 /*261*/].f_260=0;
Local_68[0 /*261*/].f_257=32;
Local_68[2 /*261*/][0 /*8*/]={
func_257("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) 
};
Local_68[2 /*261*/][1 /*8*/]={
func_257("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) 
};
Local_68[2 /*261*/][2 /*8*/]={
func_257("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) 
};
Local_68[2 /*261*/][3 /*8*/]={
func_257("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) 
};
Local_68[2 /*261*/][4 /*8*/]={
func_257("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) 
};
Local_68[2 /*261*/][5 /*8*/]={
func_257("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[2 /*261*/][6 /*8*/]={
func_257("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[2 /*261*/].f_260=2;
Local_68[2 /*261*/].f_257=7;
Local_68[1 /*261*/][0 /*8*/]={
func_257("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) 
};
Local_68[1 /*261*/][1 /*8*/]={
func_257("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) 
};
Local_68[1 /*261*/][2 /*8*/]={
func_257("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) 
};
Local_68[1 /*261*/][3 /*8*/]={
func_257("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) 
};
Local_68[1 /*261*/][4 /*8*/]={
func_257("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) 
};
Local_68[1 /*261*/][5 /*8*/]={
func_257("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) 
};
Local_68[1 /*261*/][6 /*8*/]={
func_257("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) 
};
Local_68[1 /*261*/][7 /*8*/]={
func_257("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) 
};
Local_68[1 /*261*/][8 /*8*/]={
func_257("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) 
};
Local_68[1 /*261*/][9 /*8*/]={
func_257("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) 
};
Local_68[1 /*261*/][10 /*8*/]={
func_257("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) 
};
Local_68[1 /*261*/][11 /*8*/]={
func_257("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) 
};
Local_68[1 /*261*/][12 /*8*/]={
func_257("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) 
};
Local_68[1 /*261*/][13 /*8*/]={
func_257("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) 
};
Local_68[1 /*261*/][14 /*8*/]={
func_257("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) 
};
Local_68[1 /*261*/][15 /*8*/]={
func_257("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) 
};
Local_68[1 /*261*/][16 /*8*/]={
func_257("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) 
};
Local_68[1 /*261*/][17 /*8*/]={
func_257("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) 
};
Local_68[1 /*261*/][18 /*8*/]={
func_257("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) 
};
Local_68[1 /*261*/][19 /*8*/]={
func_257("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) 
};
Local_68[1 /*261*/][20 /*8*/]={
func_257("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) 
};
Local_68[1 /*261*/][21 /*8*/]={
func_257("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) 
};
Local_68[1 /*261*/].f_260=1;
Local_68[1 /*261*/].f_257=22;
Local_68[3 /*261*/][0 /*8*/]={
func_257("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[3 /*261*/][1 /*8*/]={
func_257("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[3 /*261*/][2 /*8*/]={
func_257("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[3 /*261*/][3 /*8*/]={
func_257("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_68[3 /*261*/][4 /*8*/]={
func_257("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) 
};
Local_68[3 /*261*/][5 /*8*/]={
func_257("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) 
};
Local_68[3 /*261*/][6 /*8*/]={
func_257("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) 
};
Local_68[3 /*261*/][7 /*8*/]={
func_257("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) 
};
Local_68[3 /*261*/][8 /*8*/]={
func_257("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) 
};
Local_68[3 /*261*/][9 /*8*/]={
func_257("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) 
};
Local_68[3 /*261*/][10 /*8*/]={
func_257("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) 
};
Local_68[3 /*261*/][11 /*8*/]={
func_257("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) 
};
Local_68[3 /*261*/][12 /*8*/]={
func_257("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) 
};
Local_68[3 /*261*/][13 /*8*/]={
func_257("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) 
};
Local_68[3 /*261*/][14 /*8*/]={
func_257("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) 
};
Local_68[3 /*261*/][15 /*8*/]={
func_257("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) 
};
Local_68[3 /*261*/][16 /*8*/]={
func_257("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) 
};
Local_68[3 /*261*/][17 /*8*/]={
func_257("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) 
};
Local_68[3 /*261*/][18 /*8*/]={
func_257("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) 
};
Local_68[3 /*261*/][19 /*8*/]={
func_257("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) 
};
Local_68[3 /*261*/][20 /*8*/]={
func_257("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) 
};
Local_68[3 /*261*/][21 /*8*/]={
func_257("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) 
};
Local_68[3 /*261*/][22 /*8*/]={
func_257("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) 
};
Local_68[3 /*261*/][23 /*8*/]={
func_257("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) 
};
Local_68[3 /*261*/][24 /*8*/]={
func_257("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) 
};
Local_68[3 /*261*/][25 /*8*/]={
func_257("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) 
};
Local_68[3 /*261*/][26 /*8*/]={
func_257("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) 
};
Local_68[3 /*261*/][27 /*8*/]={
func_257("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) 
};
Local_68[3 /*261*/][28 /*8*/]={
func_257("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) 
};
Local_68[3 /*261*/][29 /*8*/]={
func_257("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) 
};
Local_68[3 /*261*/][30 /*8*/]={
func_257("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) 
};
Local_68[3 /*261*/].f_260=3;
Local_68[3 /*261*/].f_257=31;
if(func_251(PLAYER::PLAYER_PED_ID())){
sLocal_70=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}}


struct<8> func_257(char* sParam0, struct<3> Param1, struct<3> Param2, float fParam3){
struct<8> Var0;
Var0.f_0=sParam0;
Var0.f_1={
Param1 
};
Var0.f_4={
Param2 
};
Var0.f_7=fParam3;
return Var0;
}


void func_258(int iParam0, bool bParam1){
if(func_87(iLocal_51)){
func_20(&iLocal_51);
}
if(!bParam1){
func_259(iParam0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_259(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}


void func_260(bool bParam0){
char* sVar0;
if(bParam0){
sVar0="PRC_MARK";
if(iLocal_42==2){
sVar0="PRC_MARKVEH";
func_268(sVar0);
}elseif(iLocal_42==0){
if(func_91()==0){
func_267(sVar0);
func_266(sVar0);
}elseif(func_91()==1){
func_265(sVar0);
}else{
func_265(sVar0);
}}elseif(iLocal_42==1){
if(func_91()==0){
func_267(sVar0);
func_268(sVar0);
}elseif(func_91()==1){
func_265(sVar0);
func_268(sVar0);
}else{
func_265(sVar0);
func_268(sVar0);
}}
MISC::SET_BIT(&uLocal_49, 11);
}elseif(MISC::IS_BIT_SET(uLocal_49, 11)){
func_264();
func_263();
func_262();
func_261();
MISC::CLEAR_BIT(&uLocal_49, 11);
}}


void func_261(){
StringCopy(&(Global_8091[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_262(){
StringCopy(&(Global_8091[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_263(){
StringCopy(&(Global_8091[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_264(){
StringCopy(&(Global_8091[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_265(char* sParam0){
StringCopy(&(Global_8091[0 /*16*/].f_8), sParam0, 32);
}


void func_266(char* sParam0){
StringCopy(&(Global_8091[2 /*16*/].f_8), sParam0, 32);
}


void func_267(char* sParam0){
StringCopy(&(Global_8091[1 /*16*/].f_8), sParam0, 32);
}


void func_268(char* sParam0){
StringCopy(&(Global_8091[3 /*16*/].f_8), sParam0, 32);
}

int func_269(var uParam0, int iParam1){
if(iParam1==-1){
return 0;
}
if(!func_54(&(Global_77348.f_555[0 /*21*/]), iParam1)){
return 0;
}else{
func_61(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
}
return 1;
}


float func_270(int iParam0){
if(iParam0==-1){
return 0f;
}
if(!func_54(&(Global_77348.f_555[0 /*21*/]), iParam0)){
return 0f;
}
return Global_77348.f_555[0 /*21*/].f_3;
}


Vector3 func__271(int iParam0){
if(iParam0==-1){
return 0f, 0f, 0f;
}
if(!func_54(&(Global_77348.f_555[0 /*21*/]), iParam0)){
return 0f, 0f, 0f;
}
return Global_77348.f_555[0 /*21*/];
}

int func_272(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}