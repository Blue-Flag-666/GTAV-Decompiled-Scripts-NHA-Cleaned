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
float fLocal_62=0f;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
struct<5> Local_66={
0, 0, 0, 0, 60 
};
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
struct<3> Local_127[32];
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
int iLocal_136=0;
int iLocal_137=0;
int iLocal_138=0;
int iLocal_139=0;
float fLocal_140=0f;
bool bLocal_141=0;
bool bLocal_142=0;
int iLocal_143=0;
struct<530> Local_144={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=12;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=12;
var uLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=12;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=9;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=9;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=2;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=2;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=-1;
var uLocal_346=0;
struct<4> Local_347={
0, 0, 0, 0 
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
iLocal_18=3;
sLocal_19="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_41=1;
iLocal_42=65;
iLocal_43=49;
iLocal_44=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_136=207;
iLocal_139=AUDIO::GET_SOUND_ID();
fLocal_140=-1f;
iLocal_143=-99;
Local_144.f_1=ScriptParam_347.f_1;
Local_144.f_3=-1;
Local_144.f_529=ScriptParam_347.f_0;
if(!Local_144.f_1){
MISC::SET_BIT(&(Global_100733.f_1407[ScriptParam_347.f_0]), 16);
}
Local_144.f_483=941293;
Local_144.f_484=941132;
Local_144.f_485=842757;
Local_144.f_486=842717;
Local_144.f_487=842677;
Local_144.f_488=830617;
Local_144.f_489=830577;
Local_144.f_490=737764;
Local_144.f_491=594178;
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, ScriptParam_347.f_3);
if(!func_1135(0, -1, 1)){
func_1125(&Local_144, 0);
}
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_66, 65, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_127, 97, 0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(!func_1124()){
func_1125(&Local_144, 0);
}
func_1123(Local_144.f_529);
func_1122(&uLocal_128, Local_144.f_529, 0);
while (true){
wait(0);
func_1(&Local_144);
}}


void func_1(var uParam0){
int iVar0;
func_1121(&(uParam0->f_12));
if(uParam0->f_7){
GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
}
if(func_1118(uParam0->f_529) && !func_1110(uParam0, uParam0->f_529)){
if(func_1109(uParam0)){
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(0);
func_1108(uParam0->f_529);
if(!uParam0->f_11==2 && !func_1107(uParam0)){
iVar0=0;
func_1097(uParam0, &iVar0, 0, 0);
}
func_1088(uParam0, &(uParam0->f_119));
if(uParam0->f_9){
if(!func_1087(*uParam0)){
func_1074(uParam0, &(uParam0->f_119), uParam0->f_599);
}else{
func_1073(uParam0);
if(!uParam0->f_11==2 && !func_1107(uParam0)){
func_1072(uParam0);
}}}
func_1071(uParam0);
func_1061(uParam0);
if(*uParam0==50){
func_1060();
}
func_1052(uParam0);
switch (uParam0->f_11){
case 0:
func_1032(uParam0);
break;
case 1:
func_1028(0);
func_1027(uParam0);
func_1026(uParam0);
if(func_1025(uParam0)){
if(uParam0->f_11==2){
uParam0->f_598=1;
func_995(uParam0);
}}else{
func_989(uParam0);
}
break;
case 2:
func_995(uParam0);
func_984(uParam0, &(uParam0->f_119));
break;
case 3:
func_983(uParam0, 1);
func_989(uParam0);
func_970(uParam0);
func_944(uParam0);
func_933(uParam0);
break;
case 4:
func_22(uParam0);
func_984(uParam0, &(uParam0->f_119));
break;
case 5:
uParam0->f_11=3;
break;
}}}else{
func_1125(uParam0, 0);
}
if(func_15(uParam0)){
func_9(uParam0);
}
func_2(uParam0);
}


void func_2(var uParam0){
bool bVar0;
int iVar1;
if(uParam0->f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Local_127[PLAYER::PLAYER_ID() /*3*/]=Global_100733.f_1407[*uParam0];
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_7(*uParam0);
if(uParam0->f_718){
if(NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_719)){
bVar0=true;
if((!MISC::IS_BIT_SET(Global_100733.f_1407[*uParam0], 0) && !MISC::IS_BIT_SET(Global_100733.f_1407[*uParam0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12))){
iVar1=0;
while (iVar1 < 32){
if(func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1)){
if(MISC::IS_BIT_SET(Local_127[iVar1 /*3*/], 5)){
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
func_3(*uParam0, bVar0, 0, 1);
uParam0->f_718=0;
}}else{
uParam0->f_719=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
uParam0->f_718=1;
}}else{
uParam0->f_719=NETWORK::GET_NETWORK_TIME();
uParam0->f_718=1;
}}}


void func_3(int iParam0, bool bParam1, bool bParam2, int iParam3){
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
iVar3=func_5(iParam0, iVar2);
if(iVar3 !=226){
Var4={
func_4(iVar3) 
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


struct<7> func_4(int iParam0){
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

int func_5(int iParam0, int iParam1){
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

int func_7(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=1;
iVar2=0;
while (iVar2 < 2){
iVar1=func_8(iParam0, iVar2);
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

int func_8(int iParam0, int iParam1){
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


void func_9(var uParam0){
func_1125(uParam0, 1);
func_10(uParam0);
}


void func_10(var uParam0){
func_14(&(uParam0->f_119));
func_13(uParam0);
func_12(&(uParam0->f_279));
func_11(&(uParam0->f_187));
uParam0->f_275=0;
uParam0->f_449.f_3=0;
uParam0->f_449.f_6={
0f, 0f, 0f 
};
uParam0->f_449.f_22={
0f, 0f, 0f 
};
uParam0->f_449.f_15=0f;
uParam0->f_449.f_25=0f;
uParam0->f_449.f_26=0;
}


void func_11(var uParam0){
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


void func_12(var uParam0){
*uParam0=-1;
uParam0->f_1=-1;
uParam0->f_2=0;
uParam0->f_4=0;
}


void func_13(var uParam0){
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


void func_14(var uParam0){
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

int func_15(var uParam0){
if(uParam0->f_9){
if(func_16(*uParam0, 10, 1)){
return 1;
}
if(uParam0->f_1==1){
if(func_16(*uParam0, 19, 1)){
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

int func_16(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_21()==0){
return MISC::IS_BIT_SET(func_17(func_20(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_17(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_18(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_18(int iParam0){
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

int func_19(){
return Global_1574918;
}

int func_20(int iParam0){
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

int func_21(){
return Global_32163;
}


void func_22(var uParam0){
var uVar0;
float fVar1;
float fVar2;
float fVar3;
int iVar4;
int iVar5;
struct<3> Var6;
struct<3> Var7;
struct<10> Var8;
var uVar9;
struct<2> Var10;
char cVar11[16];
var uVar12;
struct<11> Var13;
bool bVar14;
char* sVar15;
var uVar16;
float fVar17;
struct<2> Var18;
char cVar19[16];
float fVar20;
float fVar21;
var uVar22;
int iVar23;
int iVar24;
func_932(1);
func_931(1);
if(func_930(1)){
if(func_6(PLAYER::PLAYER_ID(), 0, 1)){
func_929();
func_928();
}elseif(!func_927()){
func_928();
}
return;
}
if(func_926()){
func_925();
func_923(uParam0);
}
func_872(uParam0, &(uParam0->f_119), -1);
if(*uParam0==50 && !func_871(PLAYER::PLAYER_ID(), uParam0->f_529, 0)){
uParam0->f_119.f_31=8;
}
Global_4540729=1;
func_866(0, 1, 1);
func_860(0);
fVar3=0f;
if(!PED::IS_PED_INJURED(uParam0->f_12)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_492, "keeper_idle_a", 3)){
fVar1=0.29f;
fVar2=0.474f;
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_492, "keeper_idle_b", 3)){
fVar1=0.33f;
fVar2=0.59f;
}else{
fVar1=0.3f;
fVar2=0.5f;
}}
switch (uParam0->f_119.f_31){
case 0:
uParam0->f_509.f_19=0;
uParam0->f_509.f_18=0;
if(*uParam0 !=50){
func_859(PLAYER::PLAYER_ID(), uParam0->f_529);
}else{
func_858(PLAYER::PLAYER_ID(), uParam0->f_529);
}
if(func_857(1)){
if((((((((func_983(uParam0, 1) && func_856(uParam0)) && func_855("HAR_MNU", *uParam0, 1)) && func_853(uParam0)) && func_852(*uParam0, 0)) && func_841(uParam0, 1)) && ((func_840(PLAYER::PLAYER_ID(), uParam0->f_529, 1) && *uParam0 !=50) || (func_871(PLAYER::PLAYER_ID(), uParam0->f_529, 1) && *uParam0==50))) && func_932(1)) && func_931(1)){
func_837(1);
if(!Global_78558){
iVar4=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_646.f_2) && !PED::IS_PED_INJURED(uParam0->f_646.f_2)){
iVar4=uParam0->f_646.f_2;
}
iVar4=iVar4;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)){
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, Global_1837212);
}
func_828(&(uParam0->f_119), 0);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
uParam0->f_498=0;
uParam0->f_499=0;
uParam0->f_500=0;
uParam0->f_506=0;
uParam0->f_595=0;
uParam0->f_596=1;
uParam0->f_600=0;
uParam0->f_601=0;
uParam0->f_275=-1;
uParam0->f_276=-1;
uParam0->f_617=-1;
uParam0->f_278=1f;
uParam0->f_119.f_19=1;
uParam0->f_119.f_18=0;
uParam0->f_119.f_15=0;
uParam0->f_119.f_23=0;
uParam0->f_119.f_22=0;
StringCopy(&(uParam0->f_119.f_11), "", 16);
uParam0->f_119.f_5=0;
uParam0->f_731=0;
uParam0->f_531=0;
uParam0->f_119.f_31=1;
uParam0->f_505=0;
}elseif((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_728)) > 8000) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_729) > 8000)){
uParam0->f_119.f_31=8;
}}
break;
case 1:
func_818(uParam0);
break;
case 6:
func_817(uParam0);
break;
case 5:
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())){
func_816(uParam0);
}}else{
func_816(uParam0);
}
break;
case 2:
func_815();
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iLocal_136=209;
}else{
iLocal_136=207;
}
iVar5=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_646.f_2) && !PED::IS_PED_INJURED(uParam0->f_646.f_2)){
iVar5=uParam0->f_646.f_2;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PED::SET_PED_CONFIG_FLAG(iVar5, 240, 1);
}
if((func_857(1) && !PED::IS_PED_INJURED(iVar5)) && !PED::IS_PED_INJURED(uParam0->f_12)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID())){
if(NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID())){
PED::SET_PED_RESET_FLAG(iVar5, 302, 1);
}}}
if(!uParam0->f_119.f_22 && uParam0->f_119.f_15){
Global_4540729=0;
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_814()) && func_809(uParam0)){
}elseif(!func_808(uParam0, uParam0->f_494)){
func_804(*uParam0, &Var6, &Var7);
if(func_803(uParam0)){
uParam0->f_495=func_802(uParam0);
}
else{
uParam0->f_495="player_base";
}
TASK::TASK_PLAY_ANIM_ADVANCED(iVar5, uParam0->f_492, uParam0->f_495, Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar5, 0, 0);
uParam0->f_494=func_801(uParam0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_492, uParam0->f_494, Var6, Var7, 1000f, -1000f, -1, 5640, 0f, 2, 1);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_66.f_1), func_800(uParam0->f_494), uParam0->f_492, 1000f, 0, 1, 1, 0f, 0);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_66.f_1));
func_799(uParam0);
func_798(uParam0, 1, 0);
func_797(uParam0, uParam0->f_12, uParam0->f_494, 69, 4f, -998637568);
func_797(uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_495, 64, 4f, -998637568);
func_796(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), func_800(uParam0->f_494), 64, 1148846080, -998637568);
func_795(uParam0);
if(func_931(1)){
if((((((uParam0->f_531==3 || uParam0->f_531==8) || uParam0->f_531==10) || uParam0->f_531==11) || uParam0->f_531==13) || uParam0->f_531==14) || uParam0->f_531==15){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), false, 0);
}else{
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), true, 0);
}}
}
else{
func_794(uParam0, uParam0->f_494, 0, 0, 1, -1056964608);
}
func_792(uParam0, func_793(uParam0, 3, uParam0->f_494));
if(CAM::DOES_CAM_EXIST(uParam0->f_54[1 /*12*/])){
CAM::SET_CAM_ACTIVE(uParam0->f_54[1 /*12*/], 0);
CAM::DESTROY_CAM(uParam0->f_54[1 /*12*/], 0);
}}else{
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
if(func_791(&(uParam0->f_535), &(uParam0->f_537))==1f){
uParam0->f_119.f_15=0;
uParam0->f_119.f_23=0;
uParam0->f_119.f_22=0;
uParam0->f_494="";
uParam0->f_596=1;
uParam0->f_597=1;
if(func_790() || func_789()){
if(uParam0->f_531==1){
uParam0->f_531=0;
uParam0->f_119.f_1=0;
}elseif(uParam0->f_531==2){
uParam0->f_531=0;
uParam0->f_119.f_1=1;
}elseif(uParam0->f_531==3){
uParam0->f_531=3;
if(func_790()){
uParam0->f_119.f_1=2;
}
else{
uParam0->f_119.f_1=1;
}}elseif(func_788(uParam0->f_531)){
}}
func_779(uParam0, iVar5);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_799(uParam0);
func_798(uParam0, 0, 1);
func_797(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
func_796(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), func_800("keeper_base"), 64, 1148846080, -998637568);
func_795(uParam0);
}else{
func_794(uParam0, "keeper_base", 0, 1, 0, -1056964608);
}
func_759(uParam0, 0);
}
elseif(func_791(&(uParam0->f_535), &(uParam0->f_537)) > 0.6f){
if(!uParam0->f_119.f_23){
func_664(uParam0);
}
}
elseif(func_791(&(uParam0->f_535), &(uParam0->f_537)) > fVar2){
if(uParam0->f_562 !=0){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_562, 0);
uParam0->f_562=0;
}
if(uParam0->f_505){
uParam0->f_495=func_802(uParam0);
func_804(*uParam0, &Var6, &Var7);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_536=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var6, Var7, 2, 0, 1, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_536, uParam0->f_492, uParam0->f_495, 8f, -8f, 0, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_536);
}else{
TASK::OPEN_SEQUENCE_TASK(&uVar0);
TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_492, uParam0->f_495, Var6, Var7, 8f, -8f, -1, 5640, 0f, 2, 1);
TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_492, "player_base", Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(iVar5, uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}
AUDIO::STOP_SOUND(uParam0->f_563);
AUDIO::STOP_SOUND(uParam0->f_564);
AUDIO::STOP_SOUND(uParam0->f_565);
uParam0->f_505=0;
}
}
elseif(func_791(&(uParam0->f_535), &(uParam0->f_537)) > 0.4f){
if(!uParam0->f_119.f_23){
func_664(uParam0);
}
if(uParam0->f_531==1){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Call_Loc(uParam0->f_483);
if(!StackVal){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
if(Global_78558){
func_663(385, Global_4538683[uParam0->f_119.f_1], -1);
func_648(8);
func_647(753, Global_4538683[uParam0->f_119.f_1], -1, 1, 0);
func_647(2053, Global_4538683[uParam0->f_119.f_1], -1, 1, 0);
}}
if(PLAYER::PLAYER_PED_ID() !=iVar5){
Stack.Push(iVar5);
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}}elseif(uParam0->f_531==2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_644(PLAYER::PLAYER_PED_ID(), 1, (func_645(uParam0->f_119.f_1) - 1), uParam0->f_640, 0, 0, uParam0->f_278, 1);
if(PLAYER::PLAYER_PED_ID() !=iVar5){
func_644(iVar5, 1, (func_645(uParam0->f_119.f_1) - 1), uParam0->f_640, 0, 0, uParam0->f_278, 1);
}
func_648(8);
func_663(448, (func_645(uParam0->f_119.f_1) - 1), -1);
func_643(88, 1f, -1, 1);
uParam0->f_276=func_645(uParam0->f_119.f_1);
uParam0->f_278=1f;
}else{
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Call_Loc(uParam0->f_483);
if(!StackVal){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
uParam0->f_276=Global_4538683[uParam0->f_119.f_1];
}
if(PLAYER::PLAYER_PED_ID() !=iVar5){
Stack.Push(iVar5);
Stack.Push(Global_4538683.f_126[uParam0->f_119.f_1]);
Stack.Push(Global_4538683[uParam0->f_119.f_1]);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}}}elseif(uParam0->f_531==3){
if(Global_78558){
uParam0->f_617=uParam0->f_119.f_1;
func_644(PLAYER::PLAYER_PED_ID(), 4, (uParam0->f_617 - 1), uParam0->f_640, 0, 0, 1f, 1);
func_663(451, (uParam0->f_617 - 1), -1);
func_643(91, 1f, -1, 1);
if((uParam0->f_617 - 1)==-1 || (uParam0->f_617 - 1) > 15){
func_644(PLAYER::PLAYER_PED_ID(), 2, func_642(449, func_19()), uParam0->f_640, 0, 0, 1f, 1);
func_643(89, 1f, -1, 1);
}
else{
func_644(PLAYER::PLAYER_PED_ID(), 2, func_642(449, func_19()), uParam0->f_640, 0, 0, 0f, 1);
func_643(89, 0f, -1, 1);
}
func_643(func_641(4), 1f, -1, 1);
func_648(8);
if(PLAYER::PLAYER_PED_ID() !=iVar5){
func_644(iVar5, 4, (uParam0->f_617 - 1), uParam0->f_640, 0, 0, 1f, 1);
if((uParam0->f_617 - 1)==-1 || (uParam0->f_617 - 1) > 15){
func_644(iVar5, 2, func_642(449, func_19()), uParam0->f_640, 0, 0, 1f, 1);
}
else{
func_644(iVar5, 2, func_642(449, func_19()), uParam0->f_640, 0, 0, 0f, 1);
}
}}}elseif(func_788(uParam0->f_531)){
if(func_634(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_531, uParam0->f_119.f_1, &Var8, func_640(uParam0->f_529))){
if(Var8.f_9==0){
if(!func_633(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var8, uParam0)){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(2);
Stack.Push(Var8.f_8);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(uParam0->f_640);
Stack.Push(uParam0->f_641);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
if(Global_78558){
func_663(385, Var8.f_8, -1);
func_648(8);
func_647(753, Var8.f_8, -1, 1, 0);
func_647(2053, Var8.f_8, -1, 1, 0);
func_647(2153, uParam0->f_640, -1, 1, 0);
func_647(2160, uParam0->f_641, -1, 1, 0);
Global_78341[1 /*14*/]={
func_1184(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, Var8.f_8, -1) 
};
func_663(389, Global_78341[1 /*14*/].f_4, -1);
func_663(401, Global_78341[1 /*14*/].f_3, -1);
}
}
if(PLAYER::PLAYER_PED_ID() !=iVar5){
Stack.Push(iVar5);
Stack.Push(2);
Stack.Push(Var8.f_8);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(uParam0->f_640);
Stack.Push(uParam0->f_641);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
}
elseif(Var8.f_9==1 || Var8.f_9==2){
func_644(PLAYER::PLAYER_PED_ID(), Var8.f_5, Var8.f_6, uParam0->f_640, uParam0->f_641, uParam0->f_643, uParam0->f_645, 1);
if(Global_78558){
if(Var8.f_5==7){
func_643(157, to_float(Var8.f_6), -1, 1);
uParam0->f_640=-1;
uParam0->f_641=-1;
uParam0->f_642=uParam0->f_641;
}else{
func_663(func_632(Var8.f_5), Var8.f_6, -1);
if(uParam0->f_640 >=0){
if(Var8.f_5==5 && uParam0->f_643==0){
uParam0->f_643=2;
}
elseif(Var8.f_5==4 && uParam0->f_643==2){
uParam0->f_643=0;
}
func_630(Var8.f_5, uParam0->f_640, uParam0->f_643, -1, 1);
}
if(uParam0->f_641 >=0){
func_647(func_629(Var8.f_5), uParam0->f_641, -1, 1, 0);
}
func_643(func_641(Var8.f_5), uParam0->f_645, -1, 1);
if(uParam0->f_531==11){
if(Var8.f_5==4){
func_663(func_632(5), 255, -1);
}
elseif(Var8.f_5==5){
func_663(func_632(4), 255, -1);
}}}
}
if(PLAYER::PLAYER_PED_ID() !=iVar5){
func_644(iVar5, Var8.f_5, Var8.f_6, uParam0->f_640, uParam0->f_641, uParam0->f_643, uParam0->f_645, 1);
}
}}}
}
elseif(func_791(&(uParam0->f_535), &(uParam0->f_537)) > fVar1){
if(uParam0->f_502 && uParam0->f_562==0){
if(uParam0->f_531==1){
uParam0->f_562=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_barbers_haircut", iVar5, 0f, 0f, 0.1f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
}}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_562)){
GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_562, 0f, 0f, 0f, 0);
}
if(!uParam0->f_505){
if(uParam0->f_531==1 || uParam0->f_531==6){
if(AUDIO::HAS_SOUND_FINISHED(uParam0->f_563)){
AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_563, "Scissors", iVar5, "Barber_Sounds", 0, 0);
}}elseif(((uParam0->f_531==2 || uParam0->f_531==7) || uParam0->f_531==9) || uParam0->f_531==8){
if(AUDIO::HAS_SOUND_FINISHED(uParam0->f_564)){
AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_563, "Scissors", iVar5, "Barber_Sounds", 0, 0);
}}elseif(uParam0->f_531==10){
}elseif(AUDIO::HAS_SOUND_FINISHED(uParam0->f_565)){
AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_565, "Makeup", iVar5, "Barber_Sounds", 0, 0);
}
uParam0->f_505=1;
}
}}}
if(uParam0->f_596){
func_624(iVar5);
func_779(uParam0, iVar5);
}
if(func_623(&uLocal_128)){
}elseif(!uParam0->f_119.f_22 && !uParam0->f_119.f_15){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
uVar9=uParam0->f_119.f_1;
uParam0->f_596=1;
func_624(iVar5);
func_779(uParam0, iVar5);
uParam0->f_119.f_1=uVar9;
func_622(uParam0->f_119.f_1, 1, 1);
uParam0->f_731=func_621();
}elseif((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100733.f_1474) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
func_759(uParam0, 1);
switch (uParam0->f_531){
case 0:
func_620(uParam0, iVar5);
break;
case 4:
func_619(uParam0, iVar5);
break;
case 1:
func_595(uParam0, iVar5);
break;
case 2:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_556(uParam0, iVar5);
}else{
func_595(uParam0, iVar5);
}
break;
case 3:
func_553(uParam0, iVar5);
break;
default:
if(func_788(uParam0->f_531)){
func_470(uParam0, iVar5);
}
break;
}}
if(func_634(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_531, uParam0->f_119.f_1, &Var10, func_640(uParam0->f_529))){
if(func_469(&(Var10.f_1), uParam0->f_531, Var10.f_0) && !func_633(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var10, uParam0)){
StringCopy(&cVar11, "", 16);
func_468(&cVar11);
if(MISC::GET_HASH_KEY(&cVar11)==0){
func_467("HAIR_SALE", 0, 0);
}
}}}
if(uParam0->f_498){
if(uParam0->f_119.f_1 >=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_466(&uVar12);
if(MISC::GET_HASH_KEY(&uVar12)==0){
if(uParam0->f_531==1){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_464(Global_4538683[uParam0->f_119.f_1]));
}elseif(uParam0->f_531==2){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_461(func_462(func_645(uParam0->f_119.f_1))));
}elseif(uParam0->f_531==3){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_461(func_460(uParam0->f_119.f_1)));
}elseif(func_788(uParam0->f_531)){
if(func_634(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_531, uParam0->f_119.f_1, &Var13, func_640(uParam0->f_529))){
bVar14=true;
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_814()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Var13.f_1))){
func_455(&sVar15, uParam0->f_531, Var13.f_1, 0, 0);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar15)){
bVar14=false;
}
}
if(bVar14){
if(Var13.f_9==0){
if(Var13.f_8==-99){
bVar14=false;
}elseif(func_464(Var13.f_8)==0){
bVar14=false;
}}elseif(Var13.f_9==1 || Var13.f_9==2){
if(Var13.f_10==-1){
bVar14=false;
}elseif(func_461(Var13.f_10)==0){
bVar14=false;
}}
}
if(!bVar14){
if(Var13.f_9==0){
func_465("HAIR_LCKPC", 0, 0);
}elseif(Var13.f_9==1 || Var13.f_9==2){
if(Var13.f_5==1){
func_465("HAIR_LCKPC", 0, 0);
}elseif(Var13.f_5==4){
func_465("HAIR_LCKPC", 0, 0);
}}
}
elseif(Var13.f_9==0){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_464(Var13.f_8));
}
elseif(Var13.f_9==1 || Var13.f_9==2){
if(Var13.f_5==1){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_461(Var13.f_10));
}elseif(Var13.f_5==4){
func_465("HAIR_UNLOCK", 0, 0);
func_463(func_461(Var13.f_10));
}
}
}}}
}}}elseif(uParam0->f_531==0){
if(uParam0->f_119.f_1 >=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_466(&uVar12);
if(MISC::GET_HASH_KEY(&uVar12)==0){
if(uParam0->f_119.f_1==0){
if(func_399(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 1)){
func_465("HAIR_UNLOCK_M", 0, 0);
}}elseif(uParam0->f_119.f_1==1){
if(func_399(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 2)){
func_465("HAIR_UNLOCK_M", 0, 0);
}}elseif(uParam0->f_119.f_1==2){
if(func_399(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 3)){
func_465("HAIR_UNLOCK_M", 0, 0);
}}}
}}}elseif(uParam0->f_531==5){
}elseif(uParam0->f_531==4){
if(uParam0->f_721 > -1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_466(&uVar12);
if(MISC::GET_HASH_KEY(&uVar12)==0){
if(MISC::IS_BIT_SET(uParam0->f_725[(uParam0->f_721 / 32)], (uParam0->f_721 % 32))){
func_465("HAIR_UNLOCK_M", 0, 0);
}}
}}}elseif((uParam0->f_531 !=0 && uParam0->f_499) && !uParam0->f_506){
if(uParam0->f_119.f_1 >=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_466(&uVar12);
if(MISC::GET_HASH_KEY(&uVar12)==0){
if(uParam0->f_500){
if(func_398(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC", 4000, 0);
func_396(func_397(&(uParam0->f_572), 0));
}
elseif(func_395(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC3", 4000, 0);
func_396(func_397(&(uParam0->f_572), 0));
}
elseif(func_394(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC4", 4000, 0);
func_396(func_397(&(uParam0->f_572), 0));
}
elseif(func_393(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC6", 4000, 0);
func_396(func_397(&(uParam0->f_572), 0));
}
elseif(func_392(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC7", 4000, 0);
}
elseif(func_391(&(uParam0->f_572))){
func_465("SHOP_UNLOCKDLC8", 4000, 0);
}
else{
func_465("SHOP_UNLOCKDLC2", 4000, 0);
func_396(func_397(&(uParam0->f_572), 1));
}}else{
func_465("HAIR_UNLOCK_N", 4000, 0);
}
uParam0->f_506=1;
}
}}}
if(func_371(&uLocal_128)){
}elseif(!uParam0->f_119.f_15 || uParam0->f_119.f_22){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iLocal_138){
HUD::SET_MULTIPLAYER_WALLET_CASH();
HUD::SET_MULTIPLAYER_BANK_CASH();
iLocal_138=1;
}
if((((uParam0->f_531==1 || uParam0->f_531==2) || uParam0->f_531==3) || uParam0->f_531==6) || uParam0->f_531==11){
func_466(&uVar16);
if(MISC::GET_HASH_KEY(&uVar16)==0){
if(uParam0->f_500 && !MISC::IS_STRING_NULL_OR_EMPTY(func_397(&(uParam0->f_572), 0))){
if(func_398(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_395(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK3", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_394(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK4", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_393(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK6", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_392(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK7", 0, 0);
}elseif(func_391(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK8", 0, 0);
}else{
func_465("SHOP_DLC_PACK2", 0, 0);
func_396(func_397(&(uParam0->f_572), 1));
}}
}}
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
func_345(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
fVar3=0f;
if(MISC::IS_PC_VERSION()){
if(!func_344(uParam0)){
fVar3=0.4f;
}
if(MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(0) - 1.6f)) < 0.1f){
fVar17=0.013f;
}
elseif(MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(0) - 1.777778f)) < 0.1f){
fVar17=0f;
}
elseif(MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(0) - 1.333333f)) < 0.1f){
fVar17=0.038f;
}
else{
fVar17=0f;
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_620, (0.113f + fVar17), (0.255f + func_343()), Global_23269, 0.5972f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_630, ((0.113f + fVar17) + fVar3), (0.255f + func_343()), Global_23269, 0.5972f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(((uParam0->f_531==1 || uParam0->f_531==2) || uParam0->f_531==6) || uParam0->f_531==11){
func_466(&uVar16);
if(MISC::GET_HASH_KEY(&uVar16)==0){
if(uParam0->f_500 && !MISC::IS_STRING_NULL_OR_EMPTY(func_397(&(uParam0->f_572), 0))){
if(func_398(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_395(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK3", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_394(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK4", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_393(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK6", 0, 0);
func_396(func_397(&(uParam0->f_572), 0));
}elseif(func_392(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK7", 0, 0);
}elseif(func_391(&(uParam0->f_572))){
func_465("SHOP_DLC_PACK8", 0, 0);
}else{
func_465("SHOP_DLC_PACK2", 0, 0);
func_396(func_397(&(uParam0->f_572), 1));
}}
}}
if(func_634(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_531, uParam0->f_119.f_1, &Var18, func_640(uParam0->f_529))){
if(func_469(&(Var18.f_1), uParam0->f_531, Var18.f_0) && !func_633(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var18, uParam0)){
StringCopy(&cVar19, "", 16);
func_468(&cVar19);
if(MISC::GET_HASH_KEY(&cVar19)==0){
func_467("HAIR_SALE", 0, 0);
}
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::SET_MULTIPLAYER_WALLET_CASH();
HUD::SET_MULTIPLAYER_BANK_CASH();
if(Global_262145.f_2464){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops")){
if(func_336(29, 1, 1, &fVar20, &fVar21, 0)){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_23269, fVar21, 0f, 255, 255, 255, 255, 0, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
}}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_138){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
iLocal_138=0;
}}
break;
case 7:
PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 104, 1);
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, 1);
if(uParam0->f_119.f_19){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_330(uParam0);
}else{
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
}
if(!PED::IS_PED_INJURED(uParam0->f_12)){
TASK::CLEAR_PED_TASKS(uParam0->f_12);
func_325(uParam0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, 1);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_324();
func_799(uParam0);
}
func_322(1, *uParam0);
func_320(uParam0);
func_315(*uParam0, 0);
func_138(uParam0);
func_137(1);
uParam0->f_509.f_19=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_134(PLAYER::PLAYER_PED_ID())){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(2);
Stack.Push(-1);
Call_Loc(uParam0->f_484);
uVar22=StackVal;
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(2);
Stack.Push(uVar22);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar23=func_133(2153, -1, 0);
iVar24=func_133(2160, -1, 0);
PED::SET_PED_HAIR_TINT(PLAYER::PLAYER_PED_ID(), iVar23, iVar24);
}
if(uParam0->f_730 !=-1){
func_130(uParam0->f_730, 1, -1);
uParam0->f_730=-1;
}
func_624(PLAYER::PLAYER_PED_ID());
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}
func_101(&(uParam0->f_119), 0, 0, 1, 1);
func_92();
func_837(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_88(1) && func_86(PLAYER::PLAYER_ID())){
}else{
func_80(PLAYER::PLAYER_PED_ID(), -1);
}}
if(*uParam0 !=50 && func_840(PLAYER::PLAYER_ID(), uParam0->f_529, 1)){
func_79(PLAYER::PLAYER_ID(), uParam0->f_529);
}
if(*uParam0==50 && func_871(PLAYER::PLAYER_ID(), uParam0->f_529, 0)){
func_78(PLAYER::PLAYER_ID(), uParam0->f_529);
}
if(!Global_78558){
func_66(PLAYER::PLAYER_PED_ID(), 1);
}
if(Global_4536680){
if(Global_78558){
func_62(1073358597, func_63(1, 1));
func_29(func_61(*uParam0), -1452332184, 0);
}}
settimerb(0);
uParam0->f_119.f_9=MISC::GET_GAME_TIMER();
uParam0->f_119.f_19=0;
uParam0->f_119.f_18=1;
uParam0->f_119.f_23=0;
uParam0->f_119.f_22=0;
}elseif(uParam0->f_119.f_18){
func_27(&(uParam0->f_239), 300);
if(((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))==7 || uParam0->f_239 < -75) || uParam0->f_239 > 75) || uParam0->f_239.f_1 < -75) || uParam0->f_239.f_1 > 75) || MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1.5f, 0f), 0.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0)){
func_92();
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && func_932(0)){
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 1);
if(uParam0->f_501){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_530);
}}
if(uParam0->f_507){
func_25();
}
uParam0->f_598=0;
uParam0->f_119.f_17=0;
uParam0->f_507=0;
uParam0->f_11=5;
}}else{
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && func_932(0)){
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 1);
if(uParam0->f_501){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_530);
}}
if(uParam0->f_507){
func_25();
}
uParam0->f_598=0;
uParam0->f_119.f_17=0;
uParam0->f_507=0;
uParam0->f_11=5;
}
break;
case 8:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}
func_24(&(uParam0->f_54));
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_322(1, *uParam0);
func_320(uParam0);
func_315(*uParam0, 0);
func_138(uParam0);
uParam0->f_509.f_19=0;
func_330(uParam0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}
func_101(&(uParam0->f_119), 1, 1, 1, 1);
func_137(1);
func_92();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_324();
func_799(uParam0);
uParam0->f_494="";
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_66.f_1)){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), false, 0);
ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_66.f_1), false, 0);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_66.f_1), true);
}}}else{
PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
}
if(!PED::IS_PED_INJURED(uParam0->f_12)){
TASK::CLEAR_PED_TASKS(uParam0->f_12);
func_325(uParam0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, 1);
}
if(Global_4536680){
if(Global_78558){
func_62(1073358597, func_63(1, 1));
func_29(func_61(*uParam0), -1452332184, 0);
}}
func_837(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_88(1) && func_86(PLAYER::PLAYER_ID())){
}else{
func_80(PLAYER::PLAYER_PED_ID(), -1);
}}
if(*uParam0 !=50 && func_840(PLAYER::PLAYER_ID(), uParam0->f_529, 1)){
func_79(PLAYER::PLAYER_ID(), uParam0->f_529);
}
if(*uParam0==50 && func_871(PLAYER::PLAYER_ID(), uParam0->f_529, 0)){
func_78(PLAYER::PLAYER_ID(), uParam0->f_529);
}
if(!Global_78558){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
}
uParam0->f_598=0;
uParam0->f_119.f_17=0;
uParam0->f_119.f_19=0;
uParam0->f_11=3;
break;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((ENTITY::DOES_ENTITY_EXIST(uParam0->f_646.f_2) && !PED::IS_PED_INJURED(uParam0->f_646.f_2)) && ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_646.f_2)){
NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(0);
}}
func_23(&(uParam0->f_509), 1);
}


void func_23(var uParam0, bool bParam1){
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


void func_24(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/])){
CAM::SET_CAM_ACTIVE((*uParam0)[iVar0 /*12*/], 0);
}
iVar0++;
}}


void func_25(){
int iVar0;
iVar0=func_26(23);
Global_2645068[iVar0 /*83*/]=23;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_26(int iParam0){
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


void func_27(var uParam0, int iParam1){
float fVar0;
func_28(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 1);
fVar0=1f;
if(fVar0==1f){
if((!uParam0->f_4 || !uParam0->f_9) || !uParam0->f_8){
if(uParam0->f_28 <=0){
uParam0->f_28=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_32=NETWORK::GET_NETWORK_TIME();
}}
if(uParam0->f_28 > 0){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_32, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_28) > iParam1 * 3)){
fVar0=0.25f;
}}}else{
uParam0->f_28=0;
}}
if(fVar0==1f){
if((!uParam0->f_5 || !uParam0->f_10) || !uParam0->f_11){
if(uParam0->f_29 <=0){
uParam0->f_29=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_33=NETWORK::GET_NETWORK_TIME();
}}
if(uParam0->f_29 > 0){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_33, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_29) > iParam1 * 3)){
fVar0=0.25f;
}}}else{
uParam0->f_29=0;
}}
if(fVar0==1f){
if(!uParam0->f_6){
if(uParam0->f_30 <=0){
uParam0->f_30=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_34=NETWORK::GET_NETWORK_TIME();
}}
if(uParam0->f_30 > 0){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_34, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_30) > iParam1 * 3)){
fVar0=0.25f;
}}}else{
uParam0->f_30=0;
}}
if(fVar0==1f){
if(!uParam0->f_7){
if(uParam0->f_31 <=0){
uParam0->f_31=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_35=NETWORK::GET_NETWORK_TIME();
}}
if(uParam0->f_31 > 0){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_35, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_31) > iParam1 * 3)){
fVar0=0.25f;
}}}else{
uParam0->f_31=0;
}}
if(fVar0==1f){
if(((!uParam0->f_12 || !uParam0->f_13) || !uParam0->f_14) || !uParam0->f_15){
if(uParam0->f_18 <=0){
uParam0->f_18=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_19=NETWORK::GET_NETWORK_TIME();
}}
if(uParam0->f_18 > 0){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_19, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_18) > iParam1 * 3)){
fVar0=0.25f;
}}}else{
uParam0->f_18=0;
}}
iParam1=floor((to_float(iParam1) * fVar0));
if(!uParam0->f_4){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1)) || (uParam0->f_1 < 75 && uParam0->f_1 > -75)){
uParam0->f_4=1;
}}
if(!uParam0->f_5){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1)) || (*uParam0 < 75 && *uParam0 > -75)){
uParam0->f_5=1;
}}
if(!uParam0->f_6){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_26, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_22) > iParam1)) || (uParam0->f_3 < 75 && uParam0->f_3 > -75)){
uParam0->f_6=1;
}}
if(!uParam0->f_7){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_27, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_23) > iParam1)) || (uParam0->f_2 < 75 && uParam0->f_2 > -75)){
uParam0->f_7=1;
}}
if(!uParam0->f_8){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1)){
uParam0->f_8=1;
}}
if(!uParam0->f_9){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1)){
uParam0->f_9=1;
}}
if(!uParam0->f_10){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1)){
uParam0->f_10=1;
}}
if(!uParam0->f_11){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1)){
uParam0->f_11=1;
}}
if(!uParam0->f_12){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1)){
uParam0->f_12=1;
}}
if(!uParam0->f_13){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1)){
uParam0->f_13=1;
}}
if(!uParam0->f_14){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1)){
uParam0->f_14=1;
}}
if(!uParam0->f_15){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1)){
uParam0->f_15=1;
}}}


void func_28(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
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


void func_29(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
char* sVar6;
int iVar7;
if(iParam0==-1){
return;
}
if(iParam1==-1){
return;
}
Global_2792090.f_3.f_3=0;
Global_2792090.f_3.f_4=0;
Global_2792090.f_3.f_5=0;
Global_2792090.f_3.f_6=0;
Global_2792090.f_3.f_7=0;
Global_2792090.f_3.f_8=0;
Global_2792090.f_3.f_9=0;
Global_2792090.f_3.f_10=0;
Global_2792090.f_3.f_11=0;
Global_2792090.f_3.f_12=0;
Global_2792090.f_3.f_13=0;
Global_2792090.f_3.f_14=0;
Global_2792090.f_3.f_15=0;
Global_2792090.f_3.f_16=0;
Global_2792090.f_3.f_17=0;
Global_2792090.f_3.f_18=0;
Global_2792090.f_3=iParam0;
Global_2792090.f_3.f_1=iParam1;
Global_2792090.f_3.f_2=func_59();
iVar3=PLAYER::PLAYER_PED_ID();
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
iVar1=0;
while (iVar1 < 9){
iVar7=PED::GET_PED_PROP_INDEX(iVar3, iVar1, 1);
if(iVar7 !=-1){
iVar2=func_51(iVar3, iVar1);
if(iVar2 !=-99){
Global_78341[1 /*14*/]={
func_1184(iVar4, 14, iVar2, -1) 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_78341[1 /*14*/].f_8)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_78341[1 /*14*/].f_8))){
if(iVar1==0){
Global_2792090.f_3.f_14=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar1==1){
Global_2792090.f_3.f_15=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar1==2){
Global_2792090.f_3.f_16=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar1==6){
Global_2792090.f_3.f_17=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar1==7){
Global_2792090.f_3.f_18=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}}}}
iVar1++;
}
iVar0=0;
while (iVar0 < 12){
iVar7=PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), iVar0);
if(((iVar0==7 && iVar7==0) || (iVar0==1 && iVar7==0)) || (iVar0==10 && iVar7==0)){
}else{
iVar2=func_48(iVar3, iVar0);
if(iVar2 !=-99){
Global_78341[1 /*14*/]={
func_1184(iVar4, iVar0, iVar2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("multi_decal"), 0)){
iVar5=func_46(func_17(1759, -1, 0), func_47(iVar3));
if(iVar5 !=-1 && func_38(&sVar6, iVar5, func_47(iVar3), PLAYER::PLAYER_PED_ID(), -1)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&sVar6) && HUD::DOES_TEXT_LABEL_EXIST(&sVar6)){
if(iVar0==11){
Global_2792090.f_3.f_8=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==8){
Global_2792090.f_3.f_9=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_78341[1 /*14*/].f_8)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_78341[1 /*14*/].f_8))){
if(iVar0==11){
Global_2792090.f_3.f_8=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==8){
Global_2792090.f_3.f_9=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==2){
Global_2792090.f_3.f_3=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==5){
Global_2792090.f_3.f_4=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==3){
Global_2792090.f_3.f_5=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==4){
Global_2792090.f_3.f_6=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==6){
Global_2792090.f_3.f_7=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==1){
Global_2792090.f_3.f_10=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==9){
Global_2792090.f_3.f_11=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==7){
Global_2792090.f_3.f_12=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}elseif(iVar0==10){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && func_37(Global_2883588, 11, -1)){
Global_2792090.f_3.f_8=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}
else{
Global_2792090.f_3.f_13=MISC::GET_HASH_KEY(&(Global_78341[1 /*14*/].f_8));
}}}}}
iVar0++;
}
if(Global_2792090.f_3.f_13==0){
if(iVar4==joaat("mp_m_freemode_01")){
if(func_31(13, -1)){
Global_2792090.f_3.f_13=88709071;
}elseif(func_31(14, -1)){
Global_2792090.f_3.f_13=-341842824;
}elseif(func_31(15, -1)){
Global_2792090.f_3.f_13=1111461887;
}elseif(func_31(16, -1)){
Global_2792090.f_3.f_13=88709071;
}elseif(func_31(71, -1)){
Global_2792090.f_3.f_13=-341842824;
}elseif(func_31(72, -1)){
Global_2792090.f_3.f_13=1111461887;
}}elseif(iVar4==joaat("mp_f_freemode_01")){
if(func_31(13, -1)){
Global_2792090.f_3.f_13=88709071;
}elseif(func_31(14, -1)){
Global_2792090.f_3.f_13=88709071;
}elseif(func_31(15, -1)){
Global_2792090.f_3.f_13=-341842824;
}elseif(func_31(16, -1)){
Global_2792090.f_3.f_13=-341842824;
}}}
switch (func_30()){
case 1:
Global_2792090.f_3.f_13=joaat("WT_BA_0");
break;
case 2:
Global_2792090.f_3.f_13=-424862475;
break;
case 3:
Global_2792090.f_3.f_13=-902241183;
break;
case 4:
Global_2792090.f_3.f_13=-1199161092;
break;
case 5:
Global_2792090.f_3.f_13=-278942034;
break;
}
if(iParam2 !=0){
Global_2792090.f_3.f_8=iParam2;
}
Global_2792090.f_1=NETWORK::GET_NETWORK_TIME();
Global_2792090.f_2=1;
}

int func_30(){
if(PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) !=0){
if(PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9)==0){
return 1;
}elseif(PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9)==4){
return 2;
}elseif(PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9)==1){
return 3;
}elseif(PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9)==2){
return 4;
}elseif(PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9)==3){
return 5;
}}
return 0;
}

int func_31(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_33(iParam0, iParam1);
iVar1=func_32(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}

int func_32(int iParam0){
return (iParam0 % 32);
}

int func_33(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_35(iParam0);
if(iVar0==14192){
if(func_21()==2 && func_34()==2){
return 0;
}else{
return 0;
}}
iVar1=func_17(iVar0, iParam1, 0);
return iVar1;
}

int func_34(){
return Global_32164;
}

int func_35(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_36(iVar0);
if((func_21()==0 || func_34()==0) || (func_21()==999 && func_34()==999)){
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
if(func_21()==2 && func_34()==2){
return 14192;
}
return 14192;
}

int func_36(int iParam0){
return (iParam0 / 32);
}

int func_37(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
int iVar4;
if(iParam0 !=-1){
iVar0=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
iVar1=0;
while (iVar1 < iVar0){
FILES::GET_FORCED_COMPONENT(iParam0, iVar1, &iVar2, &uVar3, &iVar4);
if(iVar4==iParam1 && (iParam2==-1 || iParam2==iVar2)){
return 1;
}
iVar1++;
}}
return 0;
}


bool func_38(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
func_45(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam3);
}
switch (iParam2){
case 0:
switch (iParam1){
case 0:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
break;
case 1:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
break;
case 2:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
break;
case 3:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
break;
case 4:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
break;
case 5:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
break;
case 6:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
break;
case 7:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
break;
case 8:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
break;
case 9:
if(func_44() || func_43()){
iVar1=400;
if(func_42() && (func_41() || func_40())){
iVar1=0;
}
func_45(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
}
break;
case 10:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
break;
case 11:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
break;
case 12:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
break;
case 13:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
break;
case 14:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
break;
case 15:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
break;
case 16:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
break;
case 17:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
break;
case 18:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
break;
case 19:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
break;
case 20:
func_45(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
break;
default:
func_39(sParam0, iParam2, iParam1, 21);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_44() || func_43()){
iVar1=450;
if(func_42() && (func_41() || func_40())){
iVar1=0;
}
func_45(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
}
break;
case 1:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
break;
case 2:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
break;
case 3:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
break;
case 4:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
break;
case 5:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
break;
case 6:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
break;
case 7:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
break;
case 8:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
break;
case 9:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
break;
case 10:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
break;
case 11:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
break;
case 12:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
break;
case 13:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
break;
case 14:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
break;
case 15:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
break;
case 16:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
break;
case 17:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
break;
case 18:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
break;
case 19:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
break;
case 20:
break;
case 21:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
break;
case 22:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
break;
case 23:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
break;
case 24:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
break;
case 25:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
break;
case 26:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
break;
case 27:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
break;
case 28:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
break;
case 29:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
break;
case 30:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
break;
case 31:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
break;
case 32:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
break;
case 33:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
break;
case 34:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
break;
case 35:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
break;
case 36:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
break;
case 37:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
break;
case 38:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
break;
case 39:
func_45(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
break;
default:
func_39(sParam0, iParam2, iParam1, 40);
break;
}
break;
case 2:
switch (iParam1){
case 0:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
break;
case 1:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
break;
case 2:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
break;
case 3:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
break;
case 4:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
break;
case 5:
if(func_44() || func_43()){
iVar1=380;
if(func_42() && (func_41() || func_40())){
iVar1=0;
}
func_45(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
}
break;
case 6:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
break;
case 7:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
break;
case 8:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
break;
case 9:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
break;
case 10:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
break;
case 11:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
break;
case 12:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
break;
case 13:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
break;
case 14:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
break;
case 15:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
break;
case 16:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
break;
case 17:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
break;
case 18:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
break;
case 19:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
break;
case 20:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
break;
case 21:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
break;
case 22:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
break;
case 23:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
break;
case 24:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
break;
case 25:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
break;
case 26:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
break;
case 27:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
break;
case 28:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
break;
case 29:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
break;
case 30:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
break;
case 31:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
break;
case 32:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
break;
case 33:
func_45(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
break;
default:
func_39(sParam0, iParam2, iParam1, 34);
break;
}
break;
case 3:
case 4:
switch (iParam1){
case 0:
func_45(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2917)), 0);
break;
case 1:
func_45(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2918)), 2);
break;
case 2:
func_45(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2919)), 3);
break;
case 3:
func_45(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2920)), 0);
break;
case 4:
func_45(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2921)), 0);
break;
case 54:
func_45(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2922)), 1);
break;
case 5:
func_45(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2923)), 0);
break;
case 6:
func_45(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2924)), 2);
break;
case 55:
func_45(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2925)), 1);
break;
case 7:
func_45(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2926)), 0);
break;
case 8:
func_45(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2927)), 7);
break;
case 9:
func_45(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2928)), 0);
break;
case 10:
func_45(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2929)), 0);
break;
case 11:
func_45(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2930)), 0);
break;
case 56:
func_45(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2931)), 1);
break;
case 12:
func_45(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2932)), 2);
break;
case 57:
func_45(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2933)), 1);
break;
case 58:
func_45(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2934)), 1);
break;
case 59:
func_45(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2935)), 1);
break;
case 60:
func_45(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 1);
break;
case 17:
func_45(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2941)), 2);
break;
case 18:
func_45(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2942)), 2);
break;
case 19:
func_45(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2943)), 2);
break;
case 20:
func_45(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2944)), 3);
break;
case 21:
func_45(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2945)), 3);
break;
case 22:
func_45(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2946)), 3);
break;
case 23:
func_45(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2947)), 3);
break;
case 24:
func_45(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2948)), 3);
break;
case 25:
func_45(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2949)), 2);
break;
case 26:
func_45(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2950)), 3);
break;
case 27:
func_45(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2951)), 3);
break;
case 28:
func_45(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2952)), 3);
break;
case 61:
func_45(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2953)), 1);
break;
case 62:
func_45(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2954)), 1);
break;
case 63:
func_45(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2955)), 1);
break;
case 64:
func_45(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2956)), 1);
break;
case 65:
func_45(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2957)), 1);
break;
case 29:
func_45(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2958)), 0);
break;
case 30:
func_45(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2959)), 0);
break;
case 31:
func_45(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2960)), 0);
break;
case 66:
func_45(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2961)), 1);
break;
case 32:
func_45(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2962)), 2);
break;
case 33:
func_45(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2963)), 3);
break;
case 34:
func_45(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2964)), 2);
break;
case 35:
func_45(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2965)), 0);
break;
case 36:
func_45(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2966)), 0);
break;
case 37:
func_45(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2967)), 0);
break;
case 38:
func_45(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2968)), 3);
break;
case 39:
func_45(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2969)), 2);
break;
case 40:
func_45(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2970)), 0);
break;
case 67:
func_45(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2971)), 1);
break;
case 41:
func_45(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2972)), 2);
break;
case 68:
func_45(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2973)), 1);
break;
case 42:
func_45(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2974)), 0);
break;
case 43:
func_45(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2975)), 2);
break;
case 44:
func_45(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2976)), 0);
break;
case 45:
func_45(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2977)), 0);
break;
case 46:
func_45(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2978)), 0);
break;
case 47:
func_45(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2979)), 3);
break;
case 48:
func_45(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2980)), 3);
break;
case 49:
func_45(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2981)), 3);
break;
case 50:
func_45(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2982)), 2);
break;
case 51:
func_45(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2983)), 3);
break;
case 52:
func_45(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2984)), 3);
break;
case 53:
func_45(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2985)), 0);
break;
case 69:
func_45(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2986)), 1);
break;
case 70:
func_45(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2987)), 2);
break;
}
if(iVar0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 73:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
break;
case 86:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
break;
case 90:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
break;
case 91:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
break;
case 124:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
break;
case 125:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_45(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_45(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2938)), 0);
break;
case 15:
func_45(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_45(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2940)), 0);
break;
case 71:
func_45(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
case 72:
func_45(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}elseif(iVar0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 73:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
break;
case 92:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 118:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 119:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 120:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 121:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 122:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_45(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_45(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_45(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2938)), 0);
break;
case 15:
func_45(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_45(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}
break;
}
if((iParam2==3 || iParam2==4) && iParam1 >=129){
func_39(sParam0, iParam2, iParam1, 129);
}
if(iParam4==22){
sParam0->f_7 *=2;
}
return sParam0->f_11 !=-1;
}


void func_39(char* sParam0, int iParam1, int iParam2, int iParam3){
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

int func_40(){
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

int func_41(){
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

int func_42(){
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

int func_43(){
return 1;
}

int func_44(){
return 1;
}


void func_45(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9){
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

int func_46(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_47(int iParam0){
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

int func_48(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
uVar0=func_50(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_49(iParam0, iVar1, iVar2, iParam1);
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
uVar0=func_50(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, uVar0);
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

int func_50(int iParam0){
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

int func_51(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_58(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_52(iParam0, iVar0, iVar1, iParam1);
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_58(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_54(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_54(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
iVar3=(iVar3 + func_53(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_58(iParam3);
}

int func_53(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_57(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_56(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_50(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_55(iParam0, func_50(iParam2)) + iVar4);
}}
return -99;
}

int func_55(int iParam0, int iParam1){
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

int func_56(int iParam0){
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

int func_57(int iParam0){
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

int func_58(int iParam0){
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


bool func_59(){
return func_60(PLAYER::PLAYER_ID());
}

int func_60(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_61(int iParam0){
switch (iParam0){
case 0:
return -26191430;
break;
case 1:
return -1910175268;
break;
case 2:
return -161350060;
break;
case 3:
return -446467379;
break;
case 4:
return 705104738;
break;
case 5:
return 1702346515;
break;
case 6:
return 182855192;
break;
case 7:
return -1682380981;
break;
case 8:
return 933985871;
break;
case 9:
return -1318797967;
break;
case 10:
return -1595574489;
break;
case 11:
return -1043314686;
break;
case 12:
return 353142109;
break;
case 13:
return -1603618707;
break;
case 14:
return 205441371;
break;
case 15:
return -1061218292;
break;
case 16:
return 649996293;
break;
case 17:
return -1356579343;
break;
case 18:
return 2141748341;
break;
case 19:
return 1349601245;
break;
case 20:
return -1171936867;
break;
case 21:
return 1883082905;
break;
case 28:
return -1089681218;
break;
case 29:
return -779170549;
break;
case 30:
return -1488958097;
break;
case 31:
return 47734120;
break;
case 32:
return -475692008;
break;
case 33:
return -462506000;
break;
case 34:
return -1643445193;
break;
case 35:
return -924208277;
break;
case 36:
return 938954428;
break;
case 37:
return -1160678640;
break;
case 38:
return -79418350;
break;
case 50:
return -193825821;
break;
case 51:
return 1703382804;
break;
case 55:
return -641866930;
break;
case 56:
return -1136998638;
break;
case 57:
return -1425517578;
break;
}
return -1;
}


void func_62(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_0=-1428749433;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);
if(!iParam1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 4, iParam1);
}}}

int func_63(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_6(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_64(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_64(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_65(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_65(int iParam0, bool bParam1){
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


void func_66(int iParam0, int iParam1){
bool bVar0;
struct<27> Var1;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_75(iParam0);
if(func_74(bVar0)){
Var1=12;
Var1.f_13=12;
Var1.f_26=12;
Var1.f_39=9;
Var1.f_49=9;
func_70(iParam0, &Var1, 1, -1);
func_663(1306, Var1[0], -1);
func_663(1307, Var1[1], -1);
func_663(1308, Var1[2], -1);
func_663(1318, Var1.f_13[0], -1);
func_663(1319, Var1.f_13[1], -1);
func_663(1320, Var1.f_13[2], -1);
func_663(1330, Var1.f_26[0], -1);
func_663(1331, Var1.f_26[1], -1);
func_663(1332, Var1.f_26[2], -1);
Global_100406[bVar0 /*65*/][0]=Var1[0];
Global_100406[bVar0 /*65*/][1]=Var1[1];
Global_100406[bVar0 /*65*/][2]=Var1[2];
Global_100406[bVar0 /*65*/].f_13[0]=Var1.f_13[0];
Global_100406[bVar0 /*65*/].f_13[1]=Var1.f_13[1];
Global_100406[bVar0 /*65*/].f_13[2]=Var1.f_13[2];
Global_100406[bVar0 /*65*/].f_26[0]=Var1.f_26[0];
Global_100406[bVar0 /*65*/].f_26[1]=Var1.f_26[1];
Global_100406[bVar0 /*65*/].f_26[2]=Var1.f_26[2];
if(!func_67(0) || iParam1){
Global_113648.f_2365.f_539[bVar0 /*65*/][0]=Var1[0];
Global_113648.f_2365.f_539[bVar0 /*65*/][1]=Var1[1];
Global_113648.f_2365.f_539[bVar0 /*65*/][2]=Var1[2];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_13[0]=Var1.f_13[0];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_13[1]=Var1.f_13[1];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_13[2]=Var1.f_13[2];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_26[0]=Var1.f_26[0];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_26[1]=Var1.f_26[1];
Global_113648.f_2365.f_539[bVar0 /*65*/].f_26[2]=Var1.f_26[2];
}}}}

int func_67(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_68(iParam0)){
return 0;
}
return 1;
}


bool func_68(int iParam0){
return func_69(iParam0, Global_43257);
}

int func_69(int iParam0, int iParam1){
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


void func_70(int iParam0, var uParam1, int iParam2, int iParam3){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_75(iParam0);
iVar1=0;
while (iVar1 < 12){
func_73(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_72(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_74(bVar0)){
uParam1->f_59=Global_113648.f_2365.f_539[bVar0 /*65*/].f_59;
uParam1->f_60=Global_113648.f_2365.f_539[bVar0 /*65*/].f_60;
uParam1->f_61=Global_113648.f_2365.f_539[bVar0 /*65*/].f_61;
uParam1->f_62=Global_113648.f_2365.f_539[bVar0 /*65*/].f_62;
uParam1->f_63=Global_113648.f_2365.f_539[bVar0 /*65*/].f_63;
uParam1->f_64=Global_113648.f_2365.f_539[bVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_71(161, iParam3)){
uParam1->f_59=func_17(2053, iParam3, 0);
}else{
uParam1->f_59=func_17(753, iParam3, 0);
}
uParam1->f_60=func_17(754, iParam3, 0);
uParam1->f_61=func_17(755, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_71(161, iParam3)){
uParam1->f_59=func_17(2053, iParam3, 0);
}else{
uParam1->f_59=func_17(753, iParam3, 0);
}}}}

int func_71(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_18(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_72(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_75(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
}else{
iVar0=iParam5;
}
if(iParam4==0){
return;
}
if(iParam1==0){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
if(iParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
}}}}
switch (iVar0){
case 0:
if(iParam1==0){
if(*uParam2==7){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(iParam1==1){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 1:
if(iParam1==0){
if(*uParam2==2){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 2:
if(iParam1==0){
if(*uParam2==9){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif((*uParam2 >=14 && *uParam2 <=20) || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}}


void func_73(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_75(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
}else{
iVar0=iParam6;
}
if(iParam5==0){
return;
}
switch (iVar0){
case 0:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(iParam1==9){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case 1:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case 2:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}}


bool func_74(bool bParam0){
return bParam0 < 3;
}

int func_75(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_76(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_76(int iParam0){
if(func_74(iParam0)){
return func_77(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__77(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_78(int iParam0, int iParam1){
if(iParam1==-1){}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Local_127[iParam0 /*3*/].f_2){
Local_127[iParam0 /*3*/].f_2=0;
Local_127[iParam0 /*3*/].f_1=0;
}}}


void func_79(int iParam0, int iParam1){
if(iParam1==-1){}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_861, 4)){
MISC::CLEAR_BIT(&(Global_1853910[iParam0 /*862*/].f_861), 4);
Global_1853910[iParam0 /*862*/].f_203=0;
}}}


void func_80(int iParam0, int iParam1){
struct<65> Var0;
if(!PED::IS_PED_INJURED(iParam0)){
Var0=12;
Var0.f_13=12;
Var0.f_26=12;
Var0.f_39=9;
Var0.f_49=9;
func_70(iParam0, &Var0, 1, iParam1);
func_81(iParam0, Var0, iParam1);
}}


void func_81(int iParam0, struct<50> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17){
int iVar0;
int iVar1;
int iVar2;
if(Global_2695845==0){
iVar1=0;
iVar0=0;
while (iVar0 <=11){
if(Param1.f_13[iVar0] !=0){
iVar1=1;
iVar0=12;
}
iVar0++;
}
if(iVar1==0){
return;
}}
if(Global_2695846==0){
iVar2=0;
while (iVar2 <=11){
if(Param1.f_13[iVar2] !=0 && Param1.f_13[iVar2] >=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar2)){
Param1.f_13[iVar2]=0;
}
iVar2++;
}
iVar2=0;
while (iVar2 <=11){
if(Param1[iVar2] !=0 && Param1[iVar2] >=PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar2, Param1.f_13[iVar2])){
Param1[iVar2]=0;
}
iVar2++;
}}
func_663(387, Param1[0], iParam17);
func_663(388, Param1[1], iParam17);
func_663(389, Param1[2], iParam17);
func_663(390, Param1[3], iParam17);
func_663(391, Param1[4], iParam17);
func_663(392, Param1[5], iParam17);
func_663(393, Param1[6], iParam17);
func_663(394, Param1[7], iParam17);
func_663(395, Param1[8], iParam17);
func_663(396, Param1[9], iParam17);
func_663(397, Param1[10], iParam17);
func_663(398, Param1[11], iParam17);
func_663(399, Param1.f_13[0], iParam17);
func_663(401, Param1.f_13[2], iParam17);
func_663(403, Param1.f_13[4], iParam17);
func_663(404, Param1.f_13[5], iParam17);
func_663(405, Param1.f_13[6], iParam17);
func_663(406, Param1.f_13[7], iParam17);
func_663(408, Param1.f_13[9], iParam17);
func_663(409, Param1.f_13[10], iParam17);
func_85(Param1.f_13[1], iParam17);
func_84(Param1.f_13[3], iParam17);
func_83(Param1.f_13[8], iParam17);
func_82(Param1.f_13[11], iParam17);
func_663(411, Param1.f_26[0], iParam17);
func_663(412, Param1.f_26[1], iParam17);
func_663(413, Param1.f_26[2], iParam17);
func_663(414, Param1.f_26[3], iParam17);
func_663(415, Param1.f_26[4], iParam17);
func_663(416, Param1.f_26[5], iParam17);
func_663(417, Param1.f_26[6], iParam17);
func_663(418, Param1.f_26[7], iParam17);
func_663(419, Param1.f_26[8], iParam17);
func_663(420, Param1.f_26[9], iParam17);
func_663(421, Param1.f_26[10], iParam17);
func_663(422, Param1.f_26[11], iParam17);
func_663(423, Param1.f_39[0], iParam17);
func_663(424, Param1.f_39[1], iParam17);
func_663(425, Param1.f_39[2], iParam17);
func_663(426, Param1.f_39[3], iParam17);
func_663(427, Param1.f_39[4], iParam17);
func_663(428, Param1.f_39[5], iParam17);
func_663(429, Param1.f_39[6], iParam17);
func_663(430, Param1.f_39[7], iParam17);
func_663(431, Param1.f_39[8], iParam17);
func_663(432, Param1.f_49[0], iParam17);
func_663(433, Param1.f_49[1], iParam17);
func_663(434, Param1.f_49[2], iParam17);
func_663(435, Param1.f_49[3], iParam17);
func_663(436, Param1.f_49[4], iParam17);
func_663(437, Param1.f_49[5], iParam17);
func_663(438, Param1.f_49[6], iParam17);
func_663(439, Param1.f_49[7], iParam17);
func_663(440, Param1.f_49[8], iParam17);
}


void func_82(bool bParam0, int iParam1){
if(bParam0 > 255){
func_663(410, 255, iParam1);
func_663(18095, (bParam0 - 255), iParam1);
}else{
func_663(410, bParam0, iParam1);
func_663(18095, 0, iParam1);
}}


void func_83(bool bParam0, int iParam1){
if(bParam0 > 255){
func_663(407, 255, iParam1);
func_663(18094, (bParam0 - 255), iParam1);
}else{
func_663(407, bParam0, iParam1);
func_663(18094, 0, iParam1);
}}


void func_84(bool bParam0, int iParam1){
if(bParam0 > 255){
func_663(402, 255, iParam1);
func_663(18093, (bParam0 - 255), iParam1);
}else{
func_663(402, bParam0, iParam1);
func_663(18093, 0, iParam1);
}}


void func_85(bool bParam0, int iParam1){
if(bParam0 > 255){
func_663(400, 255, iParam1);
func_663(18092, (bParam0 - 255), iParam1);
}else{
func_663(400, bParam0, iParam1);
func_663(18092, 0, iParam1);
}}


var func__86(int iParam0){
return func_87(iParam0, 10);
}


var func__87(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_88(bool bParam0){
return func_89(PLAYER::PLAYER_ID(), bParam0);
}


bool func_89(int iParam0, bool bParam1){
if(!bParam1){
if(func_91(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_90();
}

int func_90(){
return -1;
}

int func_91(int iParam0){
if(iParam0 !=func_90()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_90()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}


void func_92(){
CAM::SET_WIDESCREEN_BORDERS(0, -1);
func_100();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
if(!Global_78558){
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}}
Global_102832=0;
func_93(0, 1, 1, 0, 0, 0, 0);
}


void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_99(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_98()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_97(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_99(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_97(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_95(PLAYER::PLAYER_ID())) && !func_64(PLAYER::PLAYER_ID(), 0)) && !func_94()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_95(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_94(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_95(int iParam0){
if(func_64(iParam0, 0)){
return 1;
}
if(func_96()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_96(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_97(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_98(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_99(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_100(){
if(Global_100733.f_5 && Global_100733.f_6==MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())){
HUD::CLEAR_HELP(1);
Global_100733.f_5=0;
}}


void func_101(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
if(Global_78558){
func_120();
}
if(func_857(1)){
if(uParam0->f_19){
}
if(Global_78558){
if(bParam3){
if(!func_118()){
}elseif((!func_117() && !func_116()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!bParam4){
func_107(PLAYER::PLAYER_ID(), 1, 8388608, 0);
}else{
func_107(PLAYER::PLAYER_ID(), 1, 0, 0);
}}elseif(!bParam4){
func_107(PLAYER::PLAYER_ID(), 0, 8454656, 0);
}else{
func_107(PLAYER::PLAYER_ID(), 0, 66048, 0);
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
func_104();
func_102();
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


void func_102(){
if(!Global_1574747){
return;
}
func_103();
}


void func_103(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}


void func_104(){
func_106(1);
func_105(4, 0, -1);
func_105(6, 0, -1);
func_105(7, 0, -1);
func_105(3, 0, -1);
func_105(1, 0, -1);
func_105(2, 0, -1);
func_105(11, 0, -1);
func_105(13, 0, -1);
func_105(14, 0, -1);
func_105(16, 0, -1);
}


void func_105(bool bParam0, bool bParam1, int iParam2){
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


void func_106(int iParam0){
Global_2793046.f_4628=iParam0;
}


void func_107(int iParam0, bool bParam1, int iParam2, int iParam3){
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
int iVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}}
if(func_115()){
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
if(!func_118()){
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
iVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || (!func_64(PLAYER::PLAYER_ID(), 0) && !func_96())){
ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657589[iParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_112(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_111(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
func_110();
func_109();
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
if(!func_111(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
if(func_108(Global_4718592.f_166301)){
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


bool func_108(int iParam0){
return iParam0==17;
}


void func_109(){
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


void func_110(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_111(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_112(int iParam0, int iParam1, int iParam2){
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
func_114();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_64(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_113(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_113(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_114(){
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

int func_115(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}


bool func_116(){
return Global_2683864.f_785.f_5;
}


bool func_117(){
return MISC::IS_BIT_SET(Global_2683864, 2);
}

int func_118(){
if(func_119()==0){
return 1;
}
return 0;
}

int func_119(){
return Global_1574632.f_18;
}


void func_120(){
if(Global_1574582.f_1==1){
func_121(7, 0, 1);
Global_1574582.f_1=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_9=0;
}}


void func_121(int iParam0, int iParam1, bool bParam2){
if(func_129()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_128(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_128(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_127(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_127(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_126()) && !func_122(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_122(int iParam0){
if(func_123(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_123(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_124(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_124(int iParam0){
return func_125(iParam0);
}


var func__125(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_126(){
return Global_2683864.f_841;
}


void func_127(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_129()){
if(func_6(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_6(PLAYER::PLAYER_ID(), 1, 1)){
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


void func_128(var uParam0, bool bParam1, bool bParam2){
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


bool func_129(){
return Global_1574582;
}


void func_130(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_31(iParam0, iParam2)){
func_131(iParam0, 1, iParam2);
}}elseif(func_31(iParam0, iParam2)){
func_131(iParam0, 0, iParam2);
}}


void func_131(int iParam0, bool bParam1, int iParam2){
var uVar0;
int iVar1;
int iVar2;
uVar0=func_33(iParam0, iParam2);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&uVar0, func_32(iVar1));
}else{
MISC::CLEAR_BIT(&uVar0, func_32(iVar1));
}
if(!func_132(0)){
iVar2=func_35(iParam0);
if(iVar2 !=14192){
func_647(iVar2, uVar0, iParam2, 1, 0);
}}}}


bool func_132(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_133(int iParam0, int iParam1, int iParam2){
if(iParam0==-1){
return -1;
}
return func_17(iParam0, iParam1, iParam2);
}

int func_134(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=0;
while (iVar1 <=8){
iVar2=iVar1;
iVar4=func_51(iParam0, iVar2);
if(func_135(iVar5, 14, iVar4, -1)){
return 1;
}
iVar1++;
}
iVar0=0;
while (iVar0 <=14){
iVar3=iVar0;
if((iVar3 !=12 && iVar3 !=13) && iVar3 !=14){
iVar4=func_48(iParam0, iVar3);
if(func_135(iVar5, iVar3, iVar4, -1)){
return 1;
}}
iVar0++;
}}else{
iVar6=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
if(iVar6 > 0){
iVar7=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("hat"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("hair_shrink"), 0)){
return 1;
}}}
return 0;
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_136(iParam0, iParam2, 1, 3);
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
iParam3=func_136(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_56(iParam0));
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
iVar4=(iParam1 - func_55(iParam0, func_50(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_50(iParam2));
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


void func_137(bool bParam0){
if(!Global_2764562){
if(bParam0){
if(Global_78558){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
}}}}}


void func_138(var uParam0){
if(uParam0->f_646){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_646.f_1);
uParam0->f_646=0;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_646.f_2)){
PED::DELETE_PED(&(uParam0->f_646.f_2));
}
if(ENTITY::DOES_ENTITY_EXIST(Global_4539790)){
PED::DELETE_PED(&Global_4539790);
}
func_139(uParam0);
}

int func_139(var uParam0){
int iVar0;
iVar0=func_314();
if(uParam0->f_646.f_68 !=iVar0){
if(iVar0==0){
func_261(0);
func_143(PLAYER::PLAYER_PED_ID(), 1);
func_140(0);
uParam0->f_646.f_68=0;
}
return 1;
}
return 0;
}


void func_140(bool bParam0){
if(bParam0){
func_142(10);
}else{
func_141(10);
}}


void func_141(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


void func_142(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


void func_143(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<65> Var2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_75(iParam0);
if(func_74(bVar0)){
if(bVar0==2){
iVar1=func_260(iParam0, 4, -1);
if(iVar1==93){
func_259(bVar0);
func_153(iParam0, &(Global_113648.f_2365.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
}}
Var2=12;
Var2.f_13=12;
Var2.f_26=12;
Var2.f_39=9;
Var2.f_49=9;
func_70(iParam0, &Var2, 1, -1);
Global_100406[bVar0 /*65*/]={
Var2 
};
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_147();
}
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4"))==0)){
if(iParam1 || ((((((!func_146(0) && !func_146(1)) && !func_146(2)) && !func_146(3)) && !func_146(4)) && !func_146(9)) && !func_146(10))){
Global_113648.f_2365.f_539[bVar0 /*65*/]={
Var2 
};
Global_113648.f_2365.f_539.f_2391[bVar0]=func_145(iParam0);
iVar3=0;
while (iVar3 < 12){
Global_113648.f_2365.f_539.f_204[iVar3 /*4*/][bVar0]=func_48(iParam0, func_144(iVar3));
iVar3++;
}
iVar3=0;
while (iVar3 < 12){
Global_113648.f_2365.f_539.f_204[iVar3 /*4*/][bVar0]=func_48(iParam0, func_144(iVar3));
iVar3++;
}
if(bVar0==0){
if(Global_113648.f_9087.f_99.f_58[121]){
Global_113648.f_9087.f_99.f_58[122]=1;
}}}}}}}

int func_144(int iParam0){
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

int func_145(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
iVar0=0;
iVar1=0;
while (iVar1 < 12){
iVar4=iVar1;
iVar3=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
iVar2=0;
while (iVar2 < iVar3){
iVar0=(iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
iVar2++;
}
iVar1++;
}
iVar5=0;
while (iVar5 < 9){
iVar8=iVar5;
iVar7=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
iVar6=0;
while (iVar6 < iVar7){
iVar0=(iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
iVar6++;
}
iVar5++;
}
return iVar0;
}


bool func_146(int iParam0){
return Global_43257==iParam0;
}


void func_147(){
struct<50> Var0;
if((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_74(func_151())) || !func_148()){
return;
}
Var0=12;
Var0.f_13=12;
Var0.f_26=12;
Var0.f_39=9;
Var0.f_49=9;
func_70(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
func_663(1306, Var0[0], -1);
func_663(1307, Var0[1], -1);
func_663(1308, Var0[2], -1);
func_663(1309, Var0[3], -1);
func_663(1310, Var0[4], -1);
func_663(1311, Var0[5], -1);
func_663(1312, Var0[6], -1);
func_663(1313, Var0[7], -1);
func_663(1314, Var0[8], -1);
func_663(1315, Var0[9], -1);
func_663(1316, Var0[10], -1);
func_663(1317, Var0[11], -1);
func_663(1318, Var0.f_13[0], -1);
func_663(1319, Var0.f_13[1], -1);
func_663(1320, Var0.f_13[2], -1);
func_663(1321, Var0.f_13[3], -1);
func_663(1322, Var0.f_13[4], -1);
func_663(1323, Var0.f_13[5], -1);
func_663(1324, Var0.f_13[6], -1);
func_663(1325, Var0.f_13[7], -1);
func_663(1326, Var0.f_13[8], -1);
func_663(1327, Var0.f_13[9], -1);
func_663(1328, Var0.f_13[10], -1);
func_663(1329, Var0.f_13[11], -1);
func_663(1330, Var0.f_26[0], -1);
func_663(1331, Var0.f_26[1], -1);
func_663(1332, Var0.f_26[2], -1);
func_663(1333, Var0.f_26[3], -1);
func_663(1334, Var0.f_26[4], -1);
func_663(1335, Var0.f_26[5], -1);
func_663(1336, Var0.f_26[6], -1);
func_663(1337, Var0.f_26[7], -1);
func_663(1338, Var0.f_26[8], -1);
func_663(1339, Var0.f_26[9], -1);
func_663(1340, Var0.f_26[10], -1);
func_663(1341, Var0.f_26[11], -1);
func_663(1342, Var0.f_39[0], -1);
func_663(1343, Var0.f_39[1], -1);
func_663(1344, Var0.f_39[2], -1);
func_663(1345, Var0.f_39[3], -1);
func_663(1346, Var0.f_39[4], -1);
func_663(1347, Var0.f_39[5], -1);
func_663(1348, Var0.f_39[6], -1);
func_663(1349, Var0.f_39[7], -1);
func_663(1350, Var0.f_39[8], -1);
func_663(1351, Var0.f_49[0], -1);
func_663(1352, Var0.f_49[1], -1);
func_663(1353, Var0.f_49[2], -1);
func_663(1354, Var0.f_49[3], -1);
func_663(1355, Var0.f_49[4], -1);
func_663(1356, Var0.f_49[5], -1);
func_663(1357, Var0.f_49[6], -1);
func_663(1358, Var0.f_49[7], -1);
func_663(1359, Var0.f_49[8], -1);
func_663(1360, func_151(), -1);
STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
Global_113648.f_2365.f_539.f_4315=1;
}

int func_148(){
if(func_150() && func_149(0)){
return 1;
}
return 0;
}


var func__149(int iParam0){
return Global_1574538[iParam0];
}


var func__150(){
return func_149(func_19() + 1);
}


bool func_151(){
func_152();
return Global_113648.f_2365.f_539.f_4321;
}


void func_152(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_76(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_75(PLAYER::PLAYER_PED_ID());
if(func_74(iVar0) && (!func_146(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_74(Global_113648.f_2365.f_539.f_4321)){
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


void func_153(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
struct<5> Var12;
if(!PED::IS_PED_INJURED(iParam0) || iParam5){
bVar0=func_75(iParam0);
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=0;
while (iVar3 < 12){
if(iVar3 !=1 || (iVar3==1 && !bParam2)){
if(bParam4){
if(uParam1->f_13[iVar3] !=0 && uParam1->f_13[iVar3] >=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_13[iVar3]=0;
}
if((*uParam1)[iVar3] !=0 && (*uParam1)[iVar3] >=PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3])){
(*uParam1)[iVar3]=0;
}}
PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
}
iVar3++;
}
iVar3=0;
while (iVar3 < 9){
if(bParam4){
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
if(uParam1->f_39[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_39[iVar3]=-1;
}elseif(uParam1->f_49[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3])){
uParam1->f_49[iVar3]=0;
}}}
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false, 1);
}else{
PED::CLEAR_PED_PROP(iParam0, iVar3, 1);
}
iVar3++;
}
if(func_74(bVar0)){
Global_113648.f_2365.f_539[bVar0 /*65*/].f_59=uParam1->f_59;
Global_113648.f_2365.f_539[bVar0 /*65*/].f_60=uParam1->f_60;
Global_113648.f_2365.f_539[bVar0 /*65*/].f_61=uParam1->f_61;
if(func_258(iParam0, iVar1, &iVar2, 0)){
func_240(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_113648.f_2365.f_539[bVar0 /*65*/].f_62=uParam1->f_62;
Global_113648.f_2365.f_539[bVar0 /*65*/].f_63=uParam1->f_63;
Global_113648.f_2365.f_539[bVar0 /*65*/].f_64=uParam1->f_64;
if(func_161(iParam0, iVar1, &iVar2)){
func_240(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
bVar4=func_160(iParam0);
func_647(754, uParam1->f_60, Global_78338, 1, 0);
func_647(755, uParam1->f_61, Global_78338, 1, 0);
iVar5=func_49(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
if(iVar5 !=-99){
iVar6=-99;
if(iVar1==joaat("mp_m_freemode_01")){
iVar6=func_158(iVar5);
}elseif(iVar1==joaat("mp_f_freemode_01")){
iVar6=func_156(iVar5);
}
if(iVar6 !=-99 && iVar5 !=iVar6){
iVar5=iVar6;
}}
func_1227(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
if(!bParam2){
iVar7=func_49(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
func_1227(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}
if(!bParam3){
iVar8=func_52(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
func_1227(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
iVar9=uParam1->f_59;
if(iVar1==joaat("mp_m_freemode_01")){
iVar9=func_158(iVar9);
}else{
iVar9=func_156(iVar9);
}
func_647(753, iVar9, Global_78338, 1, 0);
func_647(2053, iVar9, Global_78338, 1, 0);
func_154(161, 1, -1, 1);
}
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
iVar10=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
iVar11=FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0") || iVar10==joaat("dlc_mp_arena_f_berd_13_0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
FILES::INIT_SHOP_PED_PROP(&Var12);
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0")){
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_m_peyes_0_0"), &Var12);
}else{
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_f_peyes_0_0"), &Var12);
}
PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
PED::CLEAR_PED_PROP(iParam0, 1, 1);
}}}}


void func_154(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_155()){
iVar0=Global_2848282[iParam0 /*3*/][func_18(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_155(){
return 1;
return 0;
}

int func_156(int iParam0){
if(Global_103222){
return func_157(iParam0);
}
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 148;
break;
case 7:
return 149;
break;
case 13:
return 150;
break;
case 18:
return 151;
break;
case 24:
return 152;
break;
case 30:
return 153;
break;
case 35:
return 154;
break;
case 41:
return 155;
break;
case 47:
return 156;
break;
case 53:
return 157;
break;
case 60:
return 158;
break;
case 67:
return 159;
break;
case 73:
return 160;
break;
case 79:
return 161;
break;
case 85:
return 162;
break;
case 92:
return 163;
break;
case 97:
return 164;
break;
case 102:
return 165;
break;
case 108:
return 166;
break;
case 113:
return 167;
break;
case 118:
return 168;
break;
case 123:
return 169;
break;
case 128:
return 170;
break;
case 134:
return 171;
break;
case 135:
return 172;
break;
case 136:
return 173;
break;
case 137:
return 174;
break;
case 138:
return 175;
break;
case 139:
return 176;
break;
case 140:
return 177;
break;
case 141:
return 178;
break;
case 142:
return 179;
break;
case 143:
return 180;
break;
case 144:
return 181;
break;
case 145:
return 182;
break;
case 146:
return 183;
break;
case 147:
return 184;
break;
}
return iParam0;
}

int func_157(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==1){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_0_0"), 2, 4);
}elseif(iParam0==7){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_1_0"), 2, 4);
}elseif(iParam0==13){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_2_0"), 2, 4);
}elseif(iParam0==18){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_3_0"), 2, 4);
}elseif(iParam0==24){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_4_0"), 2, 4);
}elseif(iParam0==30){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_5_0"), 2, 4);
}elseif(iParam0==35){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_6_0"), 2, 4);
}elseif(iParam0==41){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_7_0"), 2, 4);
}elseif(iParam0==47){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_8_0"), 2, 4);
}elseif(iParam0==53){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_9_0"), 2, 4);
}elseif(iParam0==60){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_10_0"), 2, 4);
}elseif(iParam0==67){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_11_0"), 2, 4);
}elseif(iParam0==73){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_12_0"), 2, 4);
}elseif(iParam0==79){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_13_0"), 2, 4);
}elseif(iParam0==85){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_14_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair00"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_15_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair05"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_16_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_18_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair1_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_19_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_val_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_17_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_20_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair1_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_21_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_ind_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_22_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_23_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair1_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_24_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair2_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_25_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair3_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_26_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_27_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair1_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_28_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair2_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_29_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_0_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_30_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_1_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_31_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_2_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_32_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_3_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_33_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_4_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_34_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_5_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_35_0"), 2, 4);
}elseif(iParam0==func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_6_0"), 2, 4)){
return func_54(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_36_0"), 2, 4);
}
return iParam0;
}

int func_158(int iParam0){
if(Global_103222){
return func_159(iParam0);
}
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 140;
break;
case 7:
return 141;
break;
case 13:
return 142;
break;
case 19:
return 143;
break;
case 26:
return 144;
break;
case 32:
return 145;
break;
case 38:
return 146;
break;
case 45:
return 147;
break;
case 50:
return 148;
break;
case 57:
return 149;
break;
case 63:
return 150;
break;
case 69:
return 151;
break;
case 74:
return 152;
break;
case 80:
return 153;
break;
case 85:
return 154;
break;
case 91:
return 155;
break;
case 96:
return 156;
break;
case 101:
return 157;
break;
case 106:
return 158;
break;
case 111:
return 159;
break;
case 116:
return 160;
break;
case 121:
return 161;
break;
case 126:
return 126;
break;
case 127:
return 162;
break;
case 128:
return 163;
break;
case 129:
return 164;
break;
case 130:
return 165;
break;
case 131:
return 166;
break;
case 132:
return 167;
break;
case 133:
return 168;
break;
case 134:
return 169;
break;
case 135:
return 170;
break;
case 136:
return 171;
break;
case 137:
return 172;
break;
case 138:
return 173;
break;
case 139:
return 174;
break;
}
return iParam0;
}

int func_159(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==1){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_0_0"), 2, 3);
}elseif(iParam0==7){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_1_0"), 2, 3);
}elseif(iParam0==13){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_2_0"), 2, 3);
}elseif(iParam0==19){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_3_0"), 2, 3);
}elseif(iParam0==26){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_4_0"), 2, 3);
}elseif(iParam0==32){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_5_0"), 2, 3);
}elseif(iParam0==38){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_6_0"), 2, 3);
}elseif(iParam0==45){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_7_0"), 2, 3);
}elseif(iParam0==50){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_8_0"), 2, 3);
}elseif(iParam0==57){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_9_0"), 2, 3);
}elseif(iParam0==63){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_10_0"), 2, 3);
}elseif(iParam0==69){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_11_0"), 2, 3);
}elseif(iParam0==74){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_12_0"), 2, 3);
}elseif(iParam0==80){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_13_0"), 2, 3);
}elseif(iParam0==85){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_14_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair00"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_15_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair05"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_16_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_17_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair1_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_18_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_19_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair1_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_20_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_ind_m_hair0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_21_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_22_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair1_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_23_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair2_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_24_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair3_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_25_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_26_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair1_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_27_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair2_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_28_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_0_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_29_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_1_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_30_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_2_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_31_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_3_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_32_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_4_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_33_0"), 2, 3);
}elseif(iParam0==func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_5_0"), 2, 3)){
return func_54(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_34_0"), 2, 3);
}
return iParam0;
}

int func_160(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_90() && func_86(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar1=func_1274(iParam0, 11, -1);
if(iVar1 >=237){
iVar2=func_136(joaat("mp_m_freemode_01"), iVar1, 11, 3);
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
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_90() && func_86(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar3=func_1274(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_136(joaat("mp_f_freemode_01"), iVar3, 11, 4);
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

int func_161(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_239(iParam1);
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_63 !=-99){
if(!func_162(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_64, Global_113648.f_2365.f_539[iVar0 /*65*/].f_63)){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=1;
return 1;
}}
return 0;
}

int func_162(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
var uVar8;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_173(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_170(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_162(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_167(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_162(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_173(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_162(iParam0, 14, iVar4)){
if(!func_163(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_48(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_173(iVar0, iVar2, iVar1, -1) 
};
if(!func_163(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_167(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_162(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_50(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_50(iParam1))){
return 1;
}
return 0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_167(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_166(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_165(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_135(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_164(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_165(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_135(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_164(iParam0, iParam2, iParam3, -1)){
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
if(func_165(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_135(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_164(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_164(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_136(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_136(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_136(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_136(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_136(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_136(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_136(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_136(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_165(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_136(iParam0, iParam2, 14, 3);
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
iParam3=func_136(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_166(int iParam0, int iParam1, int iParam2){
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


struct<10> func_167(int iParam0, int iParam1){
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
func_169(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_169(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_169(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_169(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_169(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_169(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_169(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_169(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_169(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_169(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_169(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_168(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_169(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_169(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_169(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_169(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_169(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_169(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_169(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_169(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_169(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_169(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_168(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_169(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_169(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_169(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_169(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_169(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_169(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_169(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_169(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_169(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_169(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_168(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_169(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_169(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_169(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_169(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_169(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_169(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_169(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_169(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_169(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_169(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_169(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_169(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_169(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_169(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_169(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_169(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_169(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_169(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_169(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_169(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_169(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_169(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_169(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_169(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_169(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_169(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_168(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_169(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_169(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_169(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_169(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_169(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_169(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_169(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_169(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_169(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_169(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_169(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_169(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_169(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_169(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_169(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_169(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_169(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_169(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_169(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_169(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_169(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_169(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_169(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_169(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_169(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_168(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_168(int iParam0, int iParam1, int iParam2, int iParam3){
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
(*iParam0)[Var2.f_2]=func_54(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
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
struct<17> func_170(int iParam0, int iParam1){
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
func_172(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_172(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_172(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_172(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_172(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_172(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_172(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_172(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_172(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_172(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_172(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_172(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_172(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_172(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_172(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_172(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_172(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_172(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_172(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_172(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_172(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_172(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_172(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_172(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_172(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_172(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_172(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_172(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_172(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_172(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_172(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_172(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_172(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_172(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_172(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_172(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_172(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_172(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_172(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_172(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_172(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_172(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_172(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_172(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_172(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_172(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_172(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_172(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_172(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_172(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_172(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_172(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_172(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_172(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_171(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_172(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_172(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_172(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_172(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_172(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_172(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_172(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_172(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_172(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_172(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_172(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_172(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_172(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_172(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_172(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_172(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_172(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_172(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_172(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_172(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_172(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_172(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_172(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_172(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_172(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_172(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_172(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_172(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_172(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_172(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_172(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_172(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_172(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_172(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_172(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_172(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_172(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_172(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_172(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_172(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_172(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_172(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_172(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_172(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_172(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_172(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_172(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_171(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_172(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_172(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_172(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_172(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_172(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_172(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_172(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_172(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_172(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_172(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_172(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_172(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_172(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_172(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_172(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_172(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_172(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_172(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_172(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_172(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_172(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_172(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_172(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_172(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_172(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_172(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_172(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_172(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_172(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_172(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_172(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_172(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_172(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_172(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_172(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_172(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_172(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_172(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_172(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_172(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_172(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_172(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_172(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_172(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_172(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_172(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_172(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_172(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_171(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_172(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_172(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_172(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_172(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_172(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_172(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_172(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_172(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_172(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_172(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_172(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_172(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_172(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_172(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_172(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_172(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_172(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_172(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_172(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_172(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_172(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_172(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_172(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_172(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_172(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_172(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_171(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_172(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_172(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_172(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_172(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_172(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_172(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_172(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_172(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_172(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_172(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_172(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_172(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_172(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_172(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_172(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_172(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_172(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_172(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_172(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_172(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_172(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_172(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_172(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_172(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_172(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_172(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_172(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_172(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_171(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_171(var uParam0, int iParam1, int iParam2, int iParam3){
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
(*uParam0)[func_144(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_144(Var2.f_2)]=func_54(iParam1, Var2.f_0, func_144(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_144(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}


void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
struct<14> func_173(int iParam0, int iParam1, int iParam2, int iParam3){
func_238();
if(iParam0==joaat("player_zero")){
func_220(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_201(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_174(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_174(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_200(iParam1);
break;
case 2:
func_199(iParam1);
break;
case 3:
func_196(iParam1);
break;
case 4:
func_195(iParam1);
break;
case 6:
func_194(iParam1);
break;
case 5:
func_193(iParam1);
break;
case 8:
func_192(iParam1);
break;
case 9:
func_191(iParam1);
break;
case 10:
func_190(iParam1);
break;
case 1:
func_189(iParam1);
break;
case 7:
func_188(iParam1);
break;
case 11:
func_187(iParam1);
break;
case 12:
func_186(iParam1);
break;
case 13:
func_185(iParam1);
break;
case 14:
func_175(iParam1);
break;
}}


void func_175(int iParam0){
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
iVar7=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 154:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 88:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P2_E1", 16);
iVar3=1;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P2_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P2_E2_1", 16);
iVar3=2;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P2_E2_2", 16);
iVar3=2;
iVar4=2;
iVar1=55;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P2_E2_3", 16);
iVar3=2;
iVar4=3;
iVar1=52;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P2_E2_4", 16);
iVar3=2;
iVar4=4;
iVar1=54;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P2_E2_5", 16);
iVar3=2;
iVar4=5;
iVar1=54;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P2_E2_6", 16);
iVar3=2;
iVar4=6;
iVar1=55;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P2_E2_7", 16);
iVar3=2;
iVar4=7;
iVar1=55;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P2_E2_8", 16);
iVar3=2;
iVar4=8;
iVar1=58;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P2_E2_9", 16);
iVar3=2;
iVar4=9;
iVar1=58;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P2_E3", 16);
iVar3=3;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P2_E3_1", 16);
iVar3=3;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P2_E3_2", 16);
iVar3=3;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P2_E3_3", 16);
iVar3=3;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P2_E3_4", 16);
iVar3=3;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P2_E3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P2_E3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P2_E3_7", 16);
iVar3=3;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P2_E3_8", 16);
iVar3=3;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P2_E3_9", 16);
iVar3=3;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P2_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=60;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P2_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P2_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=50;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P2_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=59;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P2_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=55;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P2_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=55;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P2_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P2_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=59;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P2_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=79;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P2_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=79;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P2_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=150;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P2_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P2_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=170;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P2_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=175;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P2_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P2_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P2_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P2_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=195;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P2_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=210;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P2_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=215;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P2_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P2_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=165;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P2_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=169;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P2_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=169;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P2_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P2_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=175;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P2_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=175;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P2_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=189;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P2_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=195;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P2_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=195;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P2_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=49;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P2_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P2_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=52;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P2_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=55;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P2_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P2_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=58;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P2_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=60;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P2_E10_7", 16);
iVar3=10;
iVar4=7;
iVar1=63;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P2_E10_8", 16);
iVar3=10;
iVar4=8;
iVar1=65;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P2_E10_9", 16);
iVar3=10;
iVar4=9;
iVar1=68;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P2_H2_0", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "PROPS_P2_H7_0", 16);
iVar3=7;
iVar4=0;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "PROPS_P2_H7_1", 16);
iVar3=7;
iVar4=1;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=7;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=8;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=9;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=10;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=11;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=12;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=13;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=14;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=15;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H26_0", 16);
iVar3=26;
iVar4=0;
iVar1=20;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H26_1", 16);
iVar3=26;
iVar4=1;
iVar1=25;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H26_2", 16);
iVar3=26;
iVar4=2;
iVar1=25;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H26_3", 16);
iVar3=26;
iVar4=3;
iVar1=22;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H26_4", 16);
iVar3=26;
iVar4=4;
iVar1=20;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H26_5", 16);
iVar3=26;
iVar4=5;
iVar1=25;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H26_6", 16);
iVar3=26;
iVar4=6;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H26_7", 16);
iVar3=26;
iVar4=7;
iVar1=24;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H26_8", 16);
iVar3=26;
iVar4=8;
iVar1=25;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "PROPS_P1_H26_9", 16);
iVar3=26;
iVar4=9;
iVar1=22;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "PROPS_P1_H26_10", 16);
iVar3=26;
iVar4=10;
iVar1=18;
iVar5=0;
break;
case 82:
StringCopy(&Var2, "PROPS_P1_H26_11", 16);
iVar3=26;
iVar4=11;
iVar1=20;
iVar5=0;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_H26_12", 16);
iVar3=26;
iVar4=12;
iVar1=24;
iVar5=0;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_H26_13", 16);
iVar3=26;
iVar4=13;
iVar1=22;
iVar5=0;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_H26_14", 16);
iVar3=26;
iVar4=14;
iVar1=25;
iVar5=0;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_H26_15", 16);
iVar3=26;
iVar4=15;
iVar1=25;
iVar5=0;
break;
case 87:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
default:
func_184(iVar7, iParam0, 155, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_176(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_183(iParam8);
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
if(func_146(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_181(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_181(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_181(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_181(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_181(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_181(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_180(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_180(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_180(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_146(14)){
return;
}
uVar0=func_17(func_179(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_17(func_178(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_177(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_17(iVar1, Global_78338, 0);
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


bool func_177(int iParam0, int iParam1, var uParam2){
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

int func_178(int iParam0, int iParam1){
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

int func_179(int iParam0, int iParam1){
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

int func_180(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
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

int func_181(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_182(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_17(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_182(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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

int func_183(int iParam0){
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


void func_184(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_176(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_176(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_176(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_176(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_50(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_176(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_185(int iParam0){
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
iVar7=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 9, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_186(int iParam0){
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
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P2_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P2_5", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P2_6", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P2_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P2_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P2_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P2_10", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P2_13", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P2_14", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P2_15", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P2_16", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P2_17", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P2_18", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P2_19", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P2_20", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P2_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P2_22", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P2_23", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P2_24", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P2_25", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P2_26", 16);
iVar3=0;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P2_27", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P2_28", 16);
iVar3=0;
iVar4=0;
iVar1=119;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P2_29", 16);
iVar3=0;
iVar4=0;
iVar1=99;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P2_30", 16);
iVar3=0;
iVar4=0;
iVar1=129;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P2_44", 16);
iVar3=0;
iVar4=0;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P2_45", 16);
iVar3=0;
iVar4=0;
iVar1=120;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P2_46", 16);
iVar3=0;
iVar4=0;
iVar1=139;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P2_47", 16);
iVar3=0;
iVar4=0;
iVar1=149;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P2_48", 16);
iVar3=0;
iVar4=0;
iVar1=145;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P2_49", 16);
iVar3=0;
iVar4=0;
iVar1=140;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P2_50", 16);
iVar3=0;
iVar4=0;
iVar1=135;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P2_31", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P2_32", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P2_33", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P2_34", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P2_35", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P2_36", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P2_37", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P2_38", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P2_39", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P2_40", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P2_41", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P2_42", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P2_43", 16);
iVar3=0;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 48, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_187(int iParam0){
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
iVar7=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 1, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_188(int iParam0){
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
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 1, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_189(int iParam0){
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
iVar7=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "BERD_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 6, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_190(int iParam0){
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
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=9;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=6;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
default:
func_184(iVar7, iParam0, 33, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_191(int iParam0){
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
iVar7=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=6;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=6;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=6;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=6;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=6;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=6;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=7;
iVar4=0;
iVar1=270;
break;
case 16:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=7;
iVar4=1;
iVar1=270;
break;
default:
func_184(iVar7, iParam0, 17, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_192(int iParam0){
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
iVar7=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "SPEC_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "SPEC_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 18, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_193(int iParam0){
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
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 7, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_194(int iParam0){
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
iVar7=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=22;
break;
case 2:
StringCopy(&Var2, "FEET_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=45;
break;
case 3:
StringCopy(&Var2, "FEET_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=65;
break;
case 4:
StringCopy(&Var2, "FEET_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=58;
break;
case 5:
StringCopy(&Var2, "FEET_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=72;
break;
case 6:
StringCopy(&Var2, "FEET_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=68;
break;
case 7:
StringCopy(&Var2, "FEET_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=60;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "FEET_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "FEET_P2_8_0", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "FEET_P2_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "FEET_P2_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=680;
break;
case 18:
StringCopy(&Var2, "FEET_P2_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=650;
break;
case 19:
StringCopy(&Var2, "FEET_P2_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=670;
break;
case 20:
StringCopy(&Var2, "FEET_P2_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=700;
break;
case 21:
StringCopy(&Var2, "FEET_P2_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=680;
break;
case 22:
StringCopy(&Var2, "FEET_P2_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=720;
break;
case 23:
StringCopy(&Var2, "FEET_P2_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=740;
break;
case 24:
StringCopy(&Var2, "FEET_P2_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=760;
break;
case 25:
StringCopy(&Var2, "FEET_P2_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=780;
break;
case 26:
StringCopy(&Var2, "FEET_P2_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=750;
break;
case 27:
StringCopy(&Var2, "FEET_P2_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=700;
break;
case 28:
StringCopy(&Var2, "FEET_P2_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "FEET_P2_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 37:
StringCopy(&Var2, "FEET_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 38:
StringCopy(&Var2, "FEET_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 39:
StringCopy(&Var2, "FEET_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 40:
StringCopy(&Var2, "FEET_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 41:
StringCopy(&Var2, "FEET_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 42:
StringCopy(&Var2, "FEET_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 43:
StringCopy(&Var2, "FEET_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 44:
StringCopy(&Var2, "FEET_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 45:
StringCopy(&Var2, "FEET_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 46:
StringCopy(&Var2, "FEET_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 47:
StringCopy(&Var2, "FEET_P2_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 48:
StringCopy(&Var2, "FEET_P2_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 49:
StringCopy(&Var2, "FEET_P2_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 50:
StringCopy(&Var2, "FEET_P2_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 51:
StringCopy(&Var2, "FEET_P2_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 52:
StringCopy(&Var2, "FEET_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 53:
StringCopy(&Var2, "FEET_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 54:
StringCopy(&Var2, "FEET_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 55:
StringCopy(&Var2, "FEET_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 56:
StringCopy(&Var2, "FEET_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 57:
StringCopy(&Var2, "FEET_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 58:
StringCopy(&Var2, "FEET_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 59:
StringCopy(&Var2, "FEET_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 60:
StringCopy(&Var2, "FEET_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 61:
StringCopy(&Var2, "FEET_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 62:
StringCopy(&Var2, "FEET_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 63:
StringCopy(&Var2, "FEET_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 64:
StringCopy(&Var2, "FEET_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 65:
StringCopy(&Var2, "FEET_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 66:
StringCopy(&Var2, "FEET_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 67:
StringCopy(&Var2, "FEET_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 68:
StringCopy(&Var2, "FEET_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 69:
StringCopy(&Var2, "FEET_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 70:
StringCopy(&Var2, "FEET_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "FEET_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 73:
StringCopy(&Var2, "FEET_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 74:
StringCopy(&Var2, "FEET_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 75:
StringCopy(&Var2, "FEET_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 76:
StringCopy(&Var2, "FEET_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 77:
StringCopy(&Var2, "FEET_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 78:
StringCopy(&Var2, "FEET_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 79:
StringCopy(&Var2, "FEET_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 80:
StringCopy(&Var2, "FEET_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 81:
StringCopy(&Var2, "FEET_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 83:
StringCopy(&Var2, "FEET_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
default:
func_184(iVar7, iParam0, 84, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_195(int iParam0){
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
iVar7=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=95;
break;
case 2:
StringCopy(&Var2, "LEGS_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=129;
break;
case 3:
StringCopy(&Var2, "LEGS_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=115;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "LEGS_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "LEGS_P2_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=750;
break;
case 20:
StringCopy(&Var2, "LEGS_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=650;
break;
case 21:
StringCopy(&Var2, "LEGS_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 22:
StringCopy(&Var2, "LEGS_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=850;
break;
case 23:
StringCopy(&Var2, "LEGS_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=750;
break;
case 24:
StringCopy(&Var2, "LEGS_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=690;
break;
case 25:
StringCopy(&Var2, "LEGS_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=820;
break;
case 26:
StringCopy(&Var2, "LEGS_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=650;
break;
case 27:
StringCopy(&Var2, "LEGS_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=690;
break;
case 28:
StringCopy(&Var2, "LEGS_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=690;
break;
case 29:
StringCopy(&Var2, "LEGS_P2_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=820;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "LEGS_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "LEGS_P2_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "LEGS_P2_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "LEGS_P2_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=58;
break;
case 36:
StringCopy(&Var2, "LEGS_P2_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=68;
break;
case 37:
StringCopy(&Var2, "LEGS_P2_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=65;
break;
case 38:
StringCopy(&Var2, "LEGS_P2_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=60;
break;
case 39:
StringCopy(&Var2, "LEGS_P2_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=65;
break;
case 40:
StringCopy(&Var2, "LEGS_P2_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=63;
break;
case 41:
StringCopy(&Var2, "LEGS_P2_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=60;
break;
case 42:
StringCopy(&Var2, "LEGS_P2_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=58;
break;
case 43:
StringCopy(&Var2, "LEGS_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "LEGS_P2_18_1", 16);
iVar3=18;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "LEGS_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=99;
break;
case 46:
StringCopy(&Var2, "LEGS_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=105;
break;
case 47:
StringCopy(&Var2, "LEGS_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=110;
break;
case 48:
StringCopy(&Var2, "LEGS_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=110;
break;
case 49:
StringCopy(&Var2, "LEGS_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=99;
break;
case 50:
StringCopy(&Var2, "LEGS_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=110;
break;
case 51:
StringCopy(&Var2, "LEGS_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=110;
break;
case 52:
StringCopy(&Var2, "LEGS_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=105;
break;
case 53:
StringCopy(&Var2, "LEGS_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=105;
break;
case 54:
StringCopy(&Var2, "LEGS_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=15;
break;
case 55:
StringCopy(&Var2, "LEGS_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=15;
break;
case 56:
StringCopy(&Var2, "LEGS_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=15;
break;
case 57:
StringCopy(&Var2, "LEGS_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=15;
break;
case 58:
StringCopy(&Var2, "LEGS_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=15;
break;
case 59:
StringCopy(&Var2, "LEGS_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=15;
break;
case 60:
StringCopy(&Var2, "LEGS_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=15;
break;
case 61:
StringCopy(&Var2, "LEGS_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=15;
break;
case 62:
StringCopy(&Var2, "LEGS_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=600;
break;
case 63:
StringCopy(&Var2, "LEGS_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=600;
break;
case 64:
StringCopy(&Var2, "LEGS_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=600;
break;
case 65:
StringCopy(&Var2, "LEGS_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=600;
break;
case 66:
StringCopy(&Var2, "LEGS_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=600;
break;
case 67:
StringCopy(&Var2, "LEGS_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=600;
break;
case 68:
StringCopy(&Var2, "LEGS_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=600;
break;
case 69:
StringCopy(&Var2, "LEGS_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=600;
break;
case 70:
StringCopy(&Var2, "LEGS_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=600;
break;
case 71:
StringCopy(&Var2, "LEGS_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=80;
break;
case 72:
StringCopy(&Var2, "LEGS_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=80;
break;
case 73:
StringCopy(&Var2, "LEGS_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=80;
break;
case 74:
StringCopy(&Var2, "LEGS_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 75:
StringCopy(&Var2, "LEGS_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=80;
break;
case 76:
StringCopy(&Var2, "LEGS_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 77:
StringCopy(&Var2, "LEGS_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=80;
break;
case 78:
StringCopy(&Var2, "LEGS_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=80;
break;
case 79:
StringCopy(&Var2, "LEGS_P2_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=80;
break;
case 80:
StringCopy(&Var2, "LEGS_P2_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=80;
break;
case 81:
StringCopy(&Var2, "LEGS_P2_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=12;
break;
case 83:
StringCopy(&Var2, "LEGS_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=12;
break;
case 84:
StringCopy(&Var2, "LEGS_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=22;
break;
case 85:
StringCopy(&Var2, "LEGS_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=18;
break;
case 86:
StringCopy(&Var2, "LEGS_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=20;
break;
case 87:
StringCopy(&Var2, "LEGS_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=30;
break;
case 88:
StringCopy(&Var2, "LEGS_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=30;
break;
case 89:
StringCopy(&Var2, "LEGS_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=30;
break;
case 90:
StringCopy(&Var2, "LEGS_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=30;
break;
case 91:
StringCopy(&Var2, "LEGS_P2_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "LEGS_P2_24_0", 16);
iVar3=24;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
break;
case 95:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=1;
break;
case 96:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=2;
break;
case 97:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=3;
break;
case 98:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=4;
break;
case 99:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=5;
break;
case 100:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=6;
break;
case 101:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=7;
break;
case 102:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=8;
break;
case 103:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=9;
break;
default:
func_184(iVar7, iParam0, 104, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_196(int iParam0){
if(iParam0 < 136){
func_198(iParam0);
}else{
func_197(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_184(3, iParam0, 242, -1);
}}


void func_197(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
StringCopy(&Var2, "TORSO_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=32;
break;
case 137:
StringCopy(&Var2, "TORSO_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=39;
break;
case 138:
StringCopy(&Var2, "TORSO_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=40;
break;
case 139:
StringCopy(&Var2, "TORSO_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=42;
break;
case 140:
StringCopy(&Var2, "TORSO_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=45;
break;
case 141:
StringCopy(&Var2, "TORSO_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=48;
break;
case 142:
StringCopy(&Var2, "TORSO_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=52;
break;
case 143:
StringCopy(&Var2, "TORSO_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=55;
break;
case 144:
StringCopy(&Var2, "TORSO_P2_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=390;
break;
case 145:
StringCopy(&Var2, "TORSO_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=390;
break;
case 146:
StringCopy(&Var2, "TORSO_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=560;
break;
case 147:
StringCopy(&Var2, "TORSO_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=390;
break;
case 148:
StringCopy(&Var2, "TORSO_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=390;
break;
case 149:
StringCopy(&Var2, "TORSO_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=390;
break;
case 150:
StringCopy(&Var2, "TORSO_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=560;
break;
case 151:
StringCopy(&Var2, "TORSO_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=390;
break;
case 152:
StringCopy(&Var2, "TORSO_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=390;
break;
case 153:
StringCopy(&Var2, "TORSO_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=390;
break;
case 154:
StringCopy(&Var2, "TORSO_P2_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=390;
break;
case 155:
StringCopy(&Var2, "TORSO_P2_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=3950;
break;
case 156:
StringCopy(&Var2, "TORSO_P2_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=150;
break;
case 157:
StringCopy(&Var2, "TORSO_P2_23_1", 16);
iVar3=23;
iVar4=1;
break;
case 158:
StringCopy(&Var2, "TORSO_P2_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=150;
break;
case 159:
StringCopy(&Var2, "TORSO_P2_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=150;
break;
case 160:
StringCopy(&Var2, "TORSO_P2_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=160;
break;
case 161:
StringCopy(&Var2, "TORSO_P2_23_5", 16);
iVar3=23;
iVar4=5;
break;
case 162:
StringCopy(&Var2, "TORSO_P2_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=19;
break;
case 163:
StringCopy(&Var2, "TORSO_P2_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=20;
break;
case 164:
StringCopy(&Var2, "TORSO_P2_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=19;
break;
case 165:
StringCopy(&Var2, "TORSO_P2_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=22;
break;
case 166:
StringCopy(&Var2, "TORSO_P2_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=20;
break;
case 167:
StringCopy(&Var2, "TORSO_P2_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=28;
break;
case 168:
StringCopy(&Var2, "TORSO_P2_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=28;
break;
case 169:
StringCopy(&Var2, "TORSO_P2_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=25;
break;
case 170:
StringCopy(&Var2, "TORSO_P2_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=22;
break;
case 171:
StringCopy(&Var2, "TORSO_P2_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=19;
break;
case 172:
StringCopy(&Var2, "TORSO_P2_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=22;
break;
case 173:
StringCopy(&Var2, "TORSO_P2_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=19;
break;
case 174:
StringCopy(&Var2, "TORSO_P2_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=20;
break;
case 175:
StringCopy(&Var2, "TORSO_P2_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=25;
break;
case 176:
StringCopy(&Var2, "TORSO_P2_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=20;
break;
case 177:
StringCopy(&Var2, "TORSO_P2_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=28;
break;
case 178:
StringCopy(&Var2, "TORSO_P2_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=35;
break;
case 179:
StringCopy(&Var2, "TORSO_P2_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=40;
break;
case 180:
StringCopy(&Var2, "TORSO_P2_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=45;
break;
case 181:
StringCopy(&Var2, "TORSO_P2_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=45;
break;
case 182:
StringCopy(&Var2, "TORSO_P2_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=49;
break;
case 183:
StringCopy(&Var2, "TORSO_P2_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=820;
break;
case 184:
StringCopy(&Var2, "TORSO_P2_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=790;
break;
case 185:
StringCopy(&Var2, "TORSO_P2_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=820;
break;
case 186:
StringCopy(&Var2, "TORSO_P2_25_8", 16);
iVar3=25;
iVar4=8;
iVar1=929;
break;
case 187:
StringCopy(&Var2, "TORSO_P2_25_9", 16);
iVar3=25;
iVar4=9;
iVar1=40;
break;
case 188:
StringCopy(&Var2, "TORSO_P2_25_10", 16);
iVar3=25;
iVar4=10;
iVar1=850;
break;
case 189:
StringCopy(&Var2, "TORSO_P2_25_11", 16);
iVar3=25;
iVar4=11;
iVar1=790;
break;
case 190:
StringCopy(&Var2, "TORSO_P2_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 191:
StringCopy(&Var2, "TORSO_P2_26_1", 16);
iVar3=26;
iVar4=1;
break;
case 192:
StringCopy(&Var2, "TORSO_P2_26_2", 16);
iVar3=26;
iVar4=2;
break;
case 193:
StringCopy(&Var2, "TORSO_P2_26_3", 16);
iVar3=26;
iVar4=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P2_26_4", 16);
iVar3=26;
iVar4=4;
break;
case 195:
StringCopy(&Var2, "TORSO_P2_26_5", 16);
iVar3=26;
iVar4=5;
break;
case 196:
StringCopy(&Var2, "TORSO_P2_26_6", 16);
iVar3=26;
iVar4=6;
break;
case 197:
StringCopy(&Var2, "TORSO_P2_26_7", 16);
iVar3=26;
iVar4=7;
break;
case 198:
StringCopy(&Var2, "TORSO_P2_26_8", 16);
iVar3=26;
iVar4=8;
break;
case 199:
StringCopy(&Var2, "TORSO_P2_26_9", 16);
iVar3=26;
iVar4=9;
break;
case 200:
StringCopy(&Var2, "TORSO_P2_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=2200;
break;
case 201:
StringCopy(&Var2, "TORSO_P2_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=2500;
break;
case 202:
StringCopy(&Var2, "TORSO_P2_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=2500;
break;
case 203:
StringCopy(&Var2, "TORSO_P2_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=2200;
break;
case 204:
StringCopy(&Var2, "TORSO_P2_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=2500;
break;
case 205:
StringCopy(&Var2, "TORSO_P2_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=2500;
break;
case 206:
StringCopy(&Var2, "TORSO_P2_27_6", 16);
iVar3=27;
iVar4=6;
iVar1=2200;
break;
case 207:
StringCopy(&Var2, "TORSO_P2_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=1100;
break;
case 208:
StringCopy(&Var2, "TORSO_P2_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=1200;
break;
case 209:
StringCopy(&Var2, "TORSO_P2_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=1220;
break;
case 210:
StringCopy(&Var2, "TORSO_P2_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=1250;
break;
case 211:
StringCopy(&Var2, "TORSO_P2_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=1300;
break;
case 212:
StringCopy(&Var2, "TORSO_P2_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=1360;
break;
case 213:
StringCopy(&Var2, "TORSO_P2_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=35;
break;
case 214:
StringCopy(&Var2, "TORSO_P2_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=38;
break;
case 215:
StringCopy(&Var2, "TORSO_P2_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=40;
break;
case 216:
StringCopy(&Var2, "TORSO_P2_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=42;
break;
case 217:
StringCopy(&Var2, "TORSO_P2_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=50;
break;
case 218:
StringCopy(&Var2, "TORSO_P2_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=45;
break;
case 219:
StringCopy(&Var2, "TORSO_P2_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=45;
break;
case 220:
StringCopy(&Var2, "TORSO_P2_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=44;
break;
case 221:
StringCopy(&Var2, "TORSO_P2_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=46;
break;
case 222:
StringCopy(&Var2, "TORSO_P2_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=52;
break;
case 223:
StringCopy(&Var2, "TORSO_P2_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=3200;
break;
case 224:
StringCopy(&Var2, "TORSO_P2_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=3200;
break;
case 225:
StringCopy(&Var2, "TORSO_P2_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=2550;
break;
case 226:
StringCopy(&Var2, "TORSO_P2_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=2750;
break;
case 227:
StringCopy(&Var2, "TORSO_P2_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=2590;
break;
case 228:
StringCopy(&Var2, "TORSO_P2_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=2750;
break;
case 229:
StringCopy(&Var2, "TORSO_P2_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=2550;
break;
case 230:
StringCopy(&Var2, "TORSO_P2_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=2590;
break;
case 231:
StringCopy(&Var2, "TORSO_P2_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=2720;
break;
case 232:
StringCopy(&Var2, "TORSO_P2_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=2750;
break;
case 233:
StringCopy(&Var2, "TORSO_P2_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=3250;
break;
case 234:
StringCopy(&Var2, "TORSO_P2_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=2950;
break;
case 235:
StringCopy(&Var2, "TORSO_P2_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=3100;
break;
case 236:
StringCopy(&Var2, "TORSO_P2_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=3150;
break;
case 237:
StringCopy(&Var2, "TORSO_P2_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=3240;
break;
case 238:
StringCopy(&Var2, "TORSO_P2_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=3350;
break;
case 239:
StringCopy(&Var2, "TORSO_P2_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=3400;
break;
case 240:
StringCopy(&Var2, "TORSO_P2_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=3280;
break;
case 241:
StringCopy(&Var2, "TORSO_P2_31_0", 16);
iVar3=31;
iVar4=0;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_198(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=25;
break;
case 2:
StringCopy(&Var2, "TORSO_P2_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "TORSO_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=15;
break;
case 4:
StringCopy(&Var2, "TORSO_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=25;
break;
case 5:
StringCopy(&Var2, "TORSO_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=25;
break;
case 6:
StringCopy(&Var2, "TORSO_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=22;
break;
case 7:
StringCopy(&Var2, "TORSO_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P2_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P2_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=20;
break;
case 10:
StringCopy(&Var2, "TORSO_P2_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=24;
break;
case 11:
StringCopy(&Var2, "TORSO_P2_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=26;
break;
case 12:
StringCopy(&Var2, "TORSO_P2_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=28;
break;
case 13:
StringCopy(&Var2, "TORSO_P2_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=29;
break;
case 14:
StringCopy(&Var2, "TORSO_P2_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=22;
break;
case 15:
StringCopy(&Var2, "TORSO_P2_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=20;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "TORSO_P2_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=35;
break;
case 19:
StringCopy(&Var2, "TORSO_P2_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "TORSO_P2_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P2_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=38;
break;
case 22:
StringCopy(&Var2, "TORSO_P2_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "TORSO_P2_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=40;
break;
case 24:
StringCopy(&Var2, "TORSO_P2_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "TORSO_P2_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "TORSO_P2_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=40;
break;
case 27:
StringCopy(&Var2, "TORSO_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "TORSO_P2_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=500;
break;
case 29:
StringCopy(&Var2, "TORSO_P2_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=560;
break;
case 30:
StringCopy(&Var2, "TORSO_P2_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=600;
break;
case 31:
StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
iVar3=4;
iVar4=4;
iVar1=650;
break;
case 32:
StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
iVar3=4;
iVar4=5;
iVar1=500;
break;
case 33:
StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
iVar3=4;
iVar4=6;
iVar1=560;
break;
case 34:
StringCopy(&Var2, "TORSO_P2_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=500;
break;
case 35:
StringCopy(&Var2, "TORSO_P2_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=650;
break;
case 36:
StringCopy(&Var2, "TORSO_P2_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=540;
break;
case 37:
StringCopy(&Var2, "TORSO_P2_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=690;
break;
case 38:
StringCopy(&Var2, "TORSO_P2_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=560;
break;
case 39:
StringCopy(&Var2, "TORSO_P2_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=590;
break;
case 40:
StringCopy(&Var2, "TORSO_P2_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=690;
break;
case 41:
StringCopy(&Var2, "TORSO_P2_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=540;
break;
case 42:
StringCopy(&Var2, "TORSO_P2_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=500;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "TORSO_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 55:
StringCopy(&Var2, "TORSO_P2_11_1", 16);
iVar3=11;
iVar4=1;
break;
case 56:
StringCopy(&Var2, "TORSO_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "TORSO_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "TORSO_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=22;
break;
case 59:
StringCopy(&Var2, "TORSO_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=350;
break;
case 60:
StringCopy(&Var2, "TORSO_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=27;
break;
case 61:
StringCopy(&Var2, "TORSO_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=370;
break;
case 62:
StringCopy(&Var2, "TORSO_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=25;
break;
case 63:
StringCopy(&Var2, "TORSO_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=22;
break;
case 64:
StringCopy(&Var2, "TORSO_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=25;
break;
case 65:
StringCopy(&Var2, "TORSO_P2_11_11", 16);
iVar3=11;
iVar4=11;
break;
case 66:
StringCopy(&Var2, "TORSO_P2_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=22;
break;
case 67:
StringCopy(&Var2, "TORSO_P2_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=27;
break;
case 68:
StringCopy(&Var2, "TORSO_P2_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=25;
break;
case 69:
StringCopy(&Var2, "TORSO_P2_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=27;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 71:
StringCopy(&Var2, "TORSO_P2_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 72:
StringCopy(&Var2, "TORSO_P2_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=39;
break;
case 73:
StringCopy(&Var2, "TORSO_P2_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=42;
break;
case 74:
StringCopy(&Var2, "TORSO_P2_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=49;
break;
case 75:
StringCopy(&Var2, "TORSO_P2_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=35;
break;
case 76:
StringCopy(&Var2, "TORSO_P2_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=50;
break;
case 77:
StringCopy(&Var2, "TORSO_P2_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=50;
break;
case 78:
StringCopy(&Var2, "TORSO_P2_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=50;
break;
case 79:
StringCopy(&Var2, "TORSO_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 80:
StringCopy(&Var2, "TORSO_P2_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=88;
break;
case 81:
StringCopy(&Var2, "TORSO_P2_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=60;
break;
case 82:
StringCopy(&Var2, "TORSO_P2_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=80;
break;
case 83:
StringCopy(&Var2, "TORSO_P2_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=70;
break;
case 84:
StringCopy(&Var2, "TORSO_P2_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=80;
break;
case 85:
StringCopy(&Var2, "TORSO_P2_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=70;
break;
case 86:
StringCopy(&Var2, "TORSO_P2_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=90;
break;
case 87:
StringCopy(&Var2, "TORSO_P2_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=95;
break;
case 88:
StringCopy(&Var2, "TORSO_P2_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 89:
StringCopy(&Var2, "TORSO_P2_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=95;
break;
case 90:
StringCopy(&Var2, "TORSO_P2_14_11", 16);
iVar3=14;
iVar4=11;
iVar1=110;
break;
case 91:
StringCopy(&Var2, "TORSO_P2_14_12", 16);
iVar3=14;
iVar4=12;
iVar1=98;
break;
case 92:
StringCopy(&Var2, "TORSO_P2_14_13", 16);
iVar3=14;
iVar4=13;
iVar1=88;
break;
case 93:
StringCopy(&Var2, "TORSO_P2_14_14", 16);
iVar3=14;
iVar4=14;
iVar1=98;
break;
case 94:
StringCopy(&Var2, "TORSO_P2_14_15", 16);
iVar3=14;
iVar4=15;
iVar1=110;
break;
case 95:
StringCopy(&Var2, "TORSO_P2_15_0", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "TORSO_P2_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 97:
StringCopy(&Var2, "TORSO_P2_17_0", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "TORSO_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 99:
StringCopy(&Var2, "TORSO_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=520;
break;
case 100:
StringCopy(&Var2, "TORSO_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=490;
break;
case 101:
StringCopy(&Var2, "TORSO_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=450;
break;
case 102:
StringCopy(&Var2, "TORSO_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=420;
break;
case 103:
StringCopy(&Var2, "TORSO_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=420;
break;
case 104:
StringCopy(&Var2, "TORSO_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=85;
break;
case 105:
StringCopy(&Var2, "TORSO_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=85;
break;
case 106:
StringCopy(&Var2, "TORSO_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "TORSO_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=68;
break;
case 108:
StringCopy(&Var2, "TORSO_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=68;
break;
case 109:
StringCopy(&Var2, "TORSO_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=78;
break;
case 110:
StringCopy(&Var2, "TORSO_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=85;
break;
case 111:
StringCopy(&Var2, "TORSO_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=68;
break;
case 112:
StringCopy(&Var2, "TORSO_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=75;
break;
case 113:
StringCopy(&Var2, "TORSO_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=75;
break;
case 114:
StringCopy(&Var2, "TORSO_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=78;
break;
case 115:
StringCopy(&Var2, "TORSO_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=75;
break;
case 116:
StringCopy(&Var2, "TORSO_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=75;
break;
case 117:
StringCopy(&Var2, "TORSO_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=75;
break;
case 118:
StringCopy(&Var2, "TORSO_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=78;
break;
case 119:
StringCopy(&Var2, "TORSO_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=78;
break;
case 120:
StringCopy(&Var2, "TORSO_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=40;
break;
case 121:
StringCopy(&Var2, "TORSO_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=32;
break;
case 122:
StringCopy(&Var2, "TORSO_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=32;
break;
case 123:
StringCopy(&Var2, "TORSO_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=32;
break;
case 124:
StringCopy(&Var2, "TORSO_P2_20_4", 16);
iVar3=20;
iVar4=4;
break;
case 125:
StringCopy(&Var2, "TORSO_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=38;
break;
case 126:
StringCopy(&Var2, "TORSO_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=35;
break;
case 127:
StringCopy(&Var2, "TORSO_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=38;
break;
case 128:
StringCopy(&Var2, "TORSO_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=29;
break;
case 129:
StringCopy(&Var2, "TORSO_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=32;
break;
case 130:
StringCopy(&Var2, "TORSO_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=29;
break;
case 131:
StringCopy(&Var2, "TORSO_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=35;
break;
case 132:
StringCopy(&Var2, "TORSO_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=32;
break;
case 133:
StringCopy(&Var2, "TORSO_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=35;
break;
case 134:
StringCopy(&Var2, "TORSO_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=32;
break;
case 135:
StringCopy(&Var2, "TORSO_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=40;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_199(int iParam0){
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
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "HAIR_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "HAIR_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "HAIR_P2_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "HAIR_P2_7_0", 16);
iVar3=7;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 9, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_200(int iParam0){
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
iVar7=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_184(iVar7, iParam0, 7, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_201(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_219(iParam1);
break;
case 2:
func_218(iParam1);
break;
case 3:
func_214(iParam1);
break;
case 4:
func_213(iParam1);
break;
case 6:
func_212(iParam1);
break;
case 5:
func_211(iParam1);
break;
case 8:
func_210(iParam1);
break;
case 9:
func_209(iParam1);
break;
case 10:
func_208(iParam1);
break;
case 1:
func_207(iParam1);
break;
case 7:
func_206(iParam1);
break;
case 11:
func_205(iParam1);
break;
case 12:
func_204(iParam1);
break;
case 13:
func_203(iParam1);
break;
case 14:
func_202(iParam1);
break;
}}


void func_202(int iParam0){
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
iVar7=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 158:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 159:
StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
iVar3=1;
iVar4=0;
iVar1=4590;
iVar5=2;
break;
case 160:
StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
iVar3=1;
iVar4=1;
iVar1=4100;
iVar5=2;
break;
case 161:
StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
iVar3=1;
iVar4=2;
iVar1=3850;
iVar5=2;
break;
case 162:
StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
iVar3=1;
iVar4=3;
iVar1=1850;
iVar5=2;
break;
case 163:
StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
iVar3=1;
iVar4=4;
iVar1=5250;
iVar5=2;
break;
case 164:
StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
iVar3=1;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 165:
StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
iVar3=1;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 166:
StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
iVar3=1;
iVar4=7;
iVar1=5050;
iVar5=2;
break;
case 167:
StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
iVar3=2;
iVar4=0;
iVar1=2500;
iVar5=2;
break;
case 168:
StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
iVar3=2;
iVar4=1;
iVar1=1950;
iVar5=2;
break;
case 169:
StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
iVar3=2;
iVar4=2;
iVar1=3900;
iVar5=2;
break;
case 170:
StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
iVar3=2;
iVar4=3;
iVar1=3550;
iVar5=2;
break;
case 171:
StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
iVar3=2;
iVar4=4;
iVar1=4500;
iVar5=2;
break;
case 172:
StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
iVar3=2;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 173:
StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
iVar3=2;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 174:
StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
iVar3=2;
iVar4=7;
iVar1=2950;
iVar5=2;
break;
case 82:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_E1_0", 16);
iVar3=1;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_E1_1", 16);
iVar3=1;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_E1_2", 16);
iVar3=1;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_E1_3", 16);
iVar3=1;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P1_E1_4", 16);
iVar3=1;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P1_E1_5", 16);
iVar3=1;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P1_E1_6", 16);
iVar3=1;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P1_E1_7", 16);
iVar3=1;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P1_E1_8", 16);
iVar3=1;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P1_E1_9", 16);
iVar3=1;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P1_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P1_E3", 16);
iVar3=3;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P1_E4_0", 16);
iVar3=4;
iVar4=0;
iVar1=120;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P1_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=128;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P1_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=130;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P1_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=140;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P1_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=145;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P1_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=135;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P1_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=138;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P1_E5_0", 16);
iVar3=5;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P1_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=112;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P1_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=115;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P1_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=118;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P1_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P1_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=125;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P1_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=128;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P1_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=138;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P1_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=140;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "PROPS_P1_E5_9", 16);
iVar3=5;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "PROPS_P1_E6_0", 16);
iVar3=6;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P1_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=55;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P1_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=58;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P1_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=58;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P1_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P1_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=62;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P1_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P1_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P1_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=68;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P1_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=72;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P1_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=145;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P1_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=149;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P1_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=139;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P1_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=149;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P1_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=135;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P1_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=138;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P1_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=140;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P1_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=145;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P1_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=159;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P1_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P1_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=198;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P1_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=210;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P1_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=185;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P1_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=220;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P1_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=190;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P1_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=200;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P1_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=208;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P1_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=210;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P1_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P1_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=185;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P1_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=190;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P1_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=178;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P1_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P1_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=168;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P1_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=170;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P1_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=175;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P1_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=170;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P1_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=178;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P1_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=140;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P1_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=145;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P1_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=150;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "PROPS_P1_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=165;
iVar5=10;
break;
case 154:
StringCopy(&Var2, "PROPS_P1_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=168;
iVar5=10;
break;
case 155:
StringCopy(&Var2, "PROPS_P1_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=178;
iVar5=10;
break;
case 156:
StringCopy(&Var2, "PROPS_P1_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=160;
iVar5=10;
break;
case 157:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "PROPS_P1_H0_0", 16);
iVar3=0;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "PROPS_P1_H3_0", 16);
iVar3=3;
iVar4=0;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=8;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=8;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=9;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=9;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=10;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=10;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=11;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=12;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=12;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=13;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=13;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=14;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=14;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=14;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=16;
iVar4=0;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=16;
iVar4=1;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=16;
iVar4=2;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=16;
iVar4=3;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=16;
iVar4=4;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=16;
iVar4=5;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=16;
iVar4=6;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=16;
iVar4=7;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=16;
iVar4=8;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=16;
iVar4=9;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=16;
iVar4=10;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=16;
iVar4=11;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=16;
iVar4=12;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=16;
iVar4=13;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=16;
iVar4=14;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=16;
iVar4=15;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=1;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=2;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=3;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=4;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=5;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=19;
iVar4=0;
iVar1=30;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=19;
iVar4=1;
iVar1=30;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=19;
iVar4=2;
iVar1=32;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=19;
iVar4=3;
iVar1=35;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=19;
iVar4=4;
iVar1=38;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=19;
iVar4=5;
iVar1=42;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=19;
iVar4=6;
iVar1=42;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=19;
iVar4=7;
iVar1=40;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=19;
iVar4=8;
iVar1=45;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=19;
iVar4=9;
iVar1=48;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=19;
iVar4=10;
iVar1=25;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=19;
iVar4=11;
iVar1=25;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=19;
iVar4=12;
iVar1=28;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=19;
iVar4=13;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=19;
iVar4=14;
iVar1=30;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=19;
iVar4=15;
iVar1=35;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
default:
func_184(iVar7, iParam0, 175, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_203(int iParam0){
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
iVar7=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 9, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_204(int iParam0){
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
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P1_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P1_2", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P1_4", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P1_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P1_11", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P1_12", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P1_13", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P1_15", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P1_16", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P1_17", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P1_18", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P1_19", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P1_20", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P1_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P1_22", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P1_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P1_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P1_25", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P1_26", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P1_27", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P1_28", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P1_29", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P1_30", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P1_31", 16);
iVar3=0;
iVar4=0;
iVar1=4650;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P1_32", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P1_33", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P1_34", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P1_35", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P1_36", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P1_37", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P1_38", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P1_39", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P1_40", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P1_41", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P1_42", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P1_43", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P1_47", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P1_48", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P1_49", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P1_50", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P1_51", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P1_52", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P1_53", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P1_54", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 47, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_205(int iParam0){
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
iVar7=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "JBIB_P1_1_0", 16);
iVar3=2;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "JBIB_P1_1_1", 16);
iVar3=2;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "JBIB_P1_1_2", 16);
iVar3=2;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "JBIB_P1_1_3", 16);
iVar3=2;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=3;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=3;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=3;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=3;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=3;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=3;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=3;
iVar4=7;
break;
case 17:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=3;
iVar4=8;
break;
case 18:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=3;
iVar4=9;
break;
case 19:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=3;
iVar4=10;
break;
case 20:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=3;
iVar4=11;
break;
case 21:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=3;
iVar4=12;
break;
case 22:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=3;
iVar4=13;
break;
case 23:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=3;
iVar4=14;
break;
case 24:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=3;
iVar4=15;
break;
case 25:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=4;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=4;
iVar4=1;
break;
case 27:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=4;
iVar4=2;
break;
case 28:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=4;
iVar4=3;
break;
case 29:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=4;
iVar4=4;
break;
case 30:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=4;
iVar4=5;
break;
case 31:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=4;
iVar4=6;
break;
case 32:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=4;
iVar4=7;
break;
case 33:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=4;
iVar4=8;
break;
case 34:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=4;
iVar4=9;
break;
case 35:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=4;
iVar4=10;
break;
case 36:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=4;
iVar4=11;
break;
case 37:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=4;
iVar4=12;
break;
case 38:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=4;
iVar4=13;
break;
case 39:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=4;
iVar4=14;
break;
case 40:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=4;
iVar4=15;
break;
case 41:
StringCopy(&Var2, "JBIB_P1_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "JBIB_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "JBIB_P1_6_1", 16);
iVar3=6;
iVar4=1;
break;
case 44:
StringCopy(&Var2, "JBIB_P1_7_0", 16);
iVar3=7;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "JBIB_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "JBIB_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "JBIB_P1_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "JBIB_P1_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=48;
break;
case 49:
StringCopy(&Var2, "JBIB_P1_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=35;
break;
case 50:
StringCopy(&Var2, "JBIB_P1_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=32;
break;
case 51:
StringCopy(&Var2, "JBIB_P1_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=35;
break;
case 52:
StringCopy(&Var2, "JBIB_P1_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=48;
break;
case 53:
StringCopy(&Var2, "JBIB_P1_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=52;
break;
case 54:
StringCopy(&Var2, "JBIB_P1_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=38;
break;
case 55:
StringCopy(&Var2, "JBIB_P1_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=42;
break;
case 56:
StringCopy(&Var2, "JBIB_P1_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=38;
break;
case 57:
StringCopy(&Var2, "JBIB_P1_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=35;
break;
case 58:
StringCopy(&Var2, "JBIB_P1_10_11", 16);
iVar3=10;
iVar4=11;
iVar1=48;
break;
case 59:
StringCopy(&Var2, "JBIB_P1_10_12", 16);
iVar3=10;
iVar4=12;
iVar1=42;
break;
case 60:
StringCopy(&Var2, "JBIB_P1_10_13", 16);
iVar3=10;
iVar4=13;
iVar1=45;
break;
case 61:
StringCopy(&Var2, "JBIB_P1_10_14", 16);
iVar3=10;
iVar4=14;
iVar1=45;
break;
case 62:
StringCopy(&Var2, "JBIB_P1_10_15", 16);
iVar3=10;
iVar4=15;
iVar1=49;
break;
default:
func_184(iVar7, iParam0, 63, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_206(int iParam0){
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
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 1, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_207(int iParam0){
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
iVar7=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P1_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P1_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 5, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_208(int iParam0){
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
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=5;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=6;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=7;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=8;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=9;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=10;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=11;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=12;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=13;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=14;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=15;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 53, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_209(int iParam0){
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
iVar7=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=5;
iVar4=0;
iVar1=125;
break;
case 6:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=5;
iVar4=1;
iVar1=150;
break;
case 7:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=5;
iVar4=2;
iVar1=175;
break;
case 8:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=5;
iVar4=3;
iVar1=85;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=5;
iVar4=4;
iVar1=150;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=5;
iVar4=5;
iVar1=175;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 12, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_210(int iParam0){
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
iVar7=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "SPEC_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=195;
break;
case 12:
StringCopy(&Var2, "SPEC_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=195;
break;
case 13:
StringCopy(&Var2, "SPEC_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=195;
break;
case 14:
StringCopy(&Var2, "SPEC_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=250;
break;
case 15:
StringCopy(&Var2, "SPEC_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=250;
break;
case 16:
StringCopy(&Var2, "SPEC_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "SPEC_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=195;
break;
case 18:
StringCopy(&Var2, "SPEC_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=250;
break;
case 19:
StringCopy(&Var2, "SPEC_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=250;
break;
case 20:
StringCopy(&Var2, "SPEC_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=250;
break;
case 21:
StringCopy(&Var2, "SPEC_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=250;
break;
case 22:
StringCopy(&Var2, "SPEC_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=195;
break;
case 23:
StringCopy(&Var2, "SPEC_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=250;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 29:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 30:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 31:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 32:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 33:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 34:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 35:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 36:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 37:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 38:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 39:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 40:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 41:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 42:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 43:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=16;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=16;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=16;
iVar4=2;
break;
case 46:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=16;
iVar4=3;
break;
case 47:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=16;
iVar4=4;
break;
case 48:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=16;
iVar4=5;
break;
case 49:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=16;
iVar4=6;
break;
case 50:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=16;
iVar4=7;
break;
case 51:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=16;
iVar4=8;
break;
case 52:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=16;
iVar4=9;
break;
case 53:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=16;
iVar4=10;
break;
case 54:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=16;
iVar4=11;
break;
case 55:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=16;
iVar4=12;
break;
case 56:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=16;
iVar4=13;
break;
case 57:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=16;
iVar4=14;
break;
case 58:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=16;
iVar4=15;
break;
case 59:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=17;
iVar4=0;
break;
case 60:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=17;
iVar4=1;
break;
case 61:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=17;
iVar4=2;
break;
case 62:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=17;
iVar4=3;
break;
case 63:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=17;
iVar4=4;
break;
case 64:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=17;
iVar4=5;
break;
case 65:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=17;
iVar4=6;
break;
case 66:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=17;
iVar4=7;
break;
case 67:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=17;
iVar4=8;
break;
case 68:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=17;
iVar4=9;
break;
case 69:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=17;
iVar4=10;
break;
case 70:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=17;
iVar4=11;
break;
case 71:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=17;
iVar4=12;
break;
case 72:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=17;
iVar4=13;
break;
case 73:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=17;
iVar4=14;
break;
case 74:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=17;
iVar4=15;
break;
case 75:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 77, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_211(int iParam0){
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
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 7, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_212(int iParam0){
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
iVar7=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P1_00_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P1_00_1", 16);
iVar3=0;
iVar4=1;
iVar1=80;
break;
case 2:
StringCopy(&Var2, "FEET_P1_00_2", 16);
iVar3=0;
iVar4=2;
iVar1=80;
break;
case 3:
StringCopy(&Var2, "FEET_P1_00_3", 16);
iVar3=0;
iVar4=3;
iVar1=89;
break;
case 4:
StringCopy(&Var2, "FEET_P1_00_4", 16);
iVar3=0;
iVar4=4;
iVar1=45;
break;
case 5:
StringCopy(&Var2, "FEET_P1_00_5", 16);
iVar3=0;
iVar4=5;
iVar1=35;
break;
case 6:
StringCopy(&Var2, "FEET_P1_00_6", 16);
iVar3=0;
iVar4=6;
iVar1=89;
break;
case 7:
StringCopy(&Var2, "FEET_P1_00_7", 16);
iVar3=0;
iVar4=7;
iVar1=95;
break;
case 8:
StringCopy(&Var2, "FEET_P1_00_8", 16);
iVar3=0;
iVar4=8;
iVar1=115;
break;
case 9:
StringCopy(&Var2, "FEET_P1_00_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "FEET_P1_00_10", 16);
iVar3=0;
iVar4=10;
iVar1=145;
break;
case 11:
StringCopy(&Var2, "FEET_P1_00_11", 16);
iVar3=0;
iVar4=11;
iVar1=145;
break;
case 12:
StringCopy(&Var2, "FEET_P1_01_0", 16);
iVar3=1;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "FEET_P1_06_0", 16);
iVar3=6;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "FEET_P1_06_1", 16);
iVar3=6;
iVar4=1;
iVar1=180;
break;
case 20:
StringCopy(&Var2, "FEET_P1_06_2", 16);
iVar3=6;
iVar4=2;
iVar1=80;
break;
case 21:
StringCopy(&Var2, "FEET_P1_06_3", 16);
iVar3=6;
iVar4=3;
iVar1=200;
break;
case 22:
StringCopy(&Var2, "FEET_P1_06_4", 16);
iVar3=6;
iVar4=4;
iVar1=220;
break;
case 23:
StringCopy(&Var2, "FEET_P1_06_5", 16);
iVar3=6;
iVar4=5;
iVar1=235;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "FEET_P1_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=870;
break;
case 26:
StringCopy(&Var2, "FEET_P1_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=870;
break;
case 27:
StringCopy(&Var2, "FEET_P1_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=870;
break;
case 28:
StringCopy(&Var2, "FEET_P1_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=1275;
break;
case 29:
StringCopy(&Var2, "FEET_P1_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=1275;
break;
case 30:
StringCopy(&Var2, "FEET_P1_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=1275;
break;
case 31:
StringCopy(&Var2, "FEET_P1_08_6", 16);
iVar3=8;
iVar4=6;
iVar1=1275;
break;
case 32:
StringCopy(&Var2, "FEET_P1_08_7", 16);
iVar3=8;
iVar4=7;
iVar1=1275;
break;
case 33:
StringCopy(&Var2, "FEET_P1_08_8", 16);
iVar3=8;
iVar4=8;
iVar1=1275;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "FEET_P1_10_0", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "FEET_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "FEET_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=50;
break;
case 38:
StringCopy(&Var2, "FEET_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=50;
break;
case 39:
StringCopy(&Var2, "FEET_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=50;
break;
case 40:
StringCopy(&Var2, "FEET_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=50;
break;
case 41:
StringCopy(&Var2, "FEET_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=50;
break;
case 42:
StringCopy(&Var2, "FEET_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=50;
break;
case 43:
StringCopy(&Var2, "FEET_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=50;
break;
case 44:
StringCopy(&Var2, "FEET_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=50;
break;
case 45:
StringCopy(&Var2, "FEET_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=50;
break;
case 46:
StringCopy(&Var2, "FEET_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=50;
break;
case 47:
StringCopy(&Var2, "FEET_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=50;
break;
case 48:
StringCopy(&Var2, "FEET_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=50;
break;
case 49:
StringCopy(&Var2, "FEET_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=50;
break;
case 50:
StringCopy(&Var2, "FEET_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=50;
break;
case 51:
StringCopy(&Var2, "FEET_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=50;
break;
case 52:
StringCopy(&Var2, "FEET_P1_12_0", 16);
iVar3=12;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "FEET_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=25;
break;
case 54:
StringCopy(&Var2, "FEET_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=20;
break;
case 55:
StringCopy(&Var2, "FEET_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=24;
break;
case 56:
StringCopy(&Var2, "FEET_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "FEET_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "FEET_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=29;
break;
case 59:
StringCopy(&Var2, "FEET_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=27;
break;
case 60:
StringCopy(&Var2, "FEET_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=25;
break;
case 61:
StringCopy(&Var2, "FEET_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=30;
break;
case 62:
StringCopy(&Var2, "FEET_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=28;
break;
case 63:
StringCopy(&Var2, "FEET_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=30;
break;
case 64:
StringCopy(&Var2, "FEET_P1_13_0", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "FEET_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=155;
break;
case 66:
StringCopy(&Var2, "FEET_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=155;
break;
case 67:
StringCopy(&Var2, "FEET_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=165;
break;
case 68:
StringCopy(&Var2, "FEET_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=170;
break;
case 69:
StringCopy(&Var2, "FEET_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=160;
break;
case 70:
StringCopy(&Var2, "FEET_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=165;
break;
case 71:
StringCopy(&Var2, "FEET_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=170;
break;
case 72:
StringCopy(&Var2, "FEET_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=160;
break;
case 73:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "FEET_P1_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=720;
break;
case 75:
StringCopy(&Var2, "FEET_P1_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=680;
break;
case 76:
StringCopy(&Var2, "FEET_P1_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=650;
break;
case 77:
StringCopy(&Var2, "FEET_P1_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=670;
break;
case 78:
StringCopy(&Var2, "FEET_P1_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=700;
break;
case 79:
StringCopy(&Var2, "FEET_P1_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=680;
break;
case 80:
StringCopy(&Var2, "FEET_P1_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=720;
break;
case 81:
StringCopy(&Var2, "FEET_P1_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=740;
break;
case 82:
StringCopy(&Var2, "FEET_P1_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=760;
break;
case 83:
StringCopy(&Var2, "FEET_P1_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=780;
break;
case 84:
StringCopy(&Var2, "FEET_P1_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=750;
break;
case 85:
StringCopy(&Var2, "FEET_P1_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=700;
break;
case 86:
StringCopy(&Var2, "FEET_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=790;
break;
case 87:
StringCopy(&Var2, "FEET_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
break;
case 88:
StringCopy(&Var2, "FEET_P1_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=860;
break;
case 89:
StringCopy(&Var2, "FEET_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=750;
break;
case 90:
StringCopy(&Var2, "FEET_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=790;
break;
case 91:
StringCopy(&Var2, "FEET_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=840;
break;
case 92:
StringCopy(&Var2, "FEET_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=820;
break;
case 93:
StringCopy(&Var2, "FEET_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=800;
break;
case 94:
StringCopy(&Var2, "FEET_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=850;
break;
case 95:
StringCopy(&Var2, "FEET_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=870;
break;
case 96:
StringCopy(&Var2, "FEET_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=720;
break;
case 97:
StringCopy(&Var2, "FEET_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=740;
break;
case 98:
StringCopy(&Var2, "FEET_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=800;
break;
case 99:
StringCopy(&Var2, "FEET_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=750;
break;
case 100:
StringCopy(&Var2, "FEET_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=770;
break;
case 101:
StringCopy(&Var2, "FEET_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=860;
break;
case 102:
StringCopy(&Var2, "FEET_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=850;
break;
case 103:
StringCopy(&Var2, "FEET_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=800;
break;
case 104:
StringCopy(&Var2, "FEET_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=780;
break;
case 105:
StringCopy(&Var2, "FEET_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=890;
break;
case 106:
StringCopy(&Var2, "FEET_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=820;
break;
case 107:
StringCopy(&Var2, "FEET_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 108:
StringCopy(&Var2, "FEET_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=870;
break;
case 109:
StringCopy(&Var2, "FEET_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=930;
break;
case 110:
StringCopy(&Var2, "FEET_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=880;
break;
case 111:
StringCopy(&Var2, "FEET_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=900;
break;
case 112:
StringCopy(&Var2, "FEET_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=920;
break;
case 113:
StringCopy(&Var2, "FEET_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=970;
break;
case 114:
StringCopy(&Var2, "FEET_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=990;
break;
case 115:
StringCopy(&Var2, "FEET_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=960;
break;
case 116:
StringCopy(&Var2, "FEET_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=980;
break;
case 117:
StringCopy(&Var2, "FEET_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=950;
break;
case 118:
StringCopy(&Var2, "FEET_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=110;
break;
case 119:
StringCopy(&Var2, "FEET_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=115;
break;
case 120:
StringCopy(&Var2, "FEET_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=120;
break;
case 121:
StringCopy(&Var2, "FEET_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=110;
break;
case 122:
StringCopy(&Var2, "FEET_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=125;
break;
case 123:
StringCopy(&Var2, "FEET_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=128;
break;
case 124:
StringCopy(&Var2, "FEET_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=135;
break;
case 125:
StringCopy(&Var2, "FEET_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=130;
break;
case 126:
StringCopy(&Var2, "FEET_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=145;
break;
case 127:
StringCopy(&Var2, "FEET_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "FEET_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=120;
break;
case 129:
StringCopy(&Var2, "FEET_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=150;
break;
case 130:
StringCopy(&Var2, "FEET_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=125;
break;
case 131:
StringCopy(&Var2, "FEET_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=120;
break;
case 132:
StringCopy(&Var2, "FEET_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=130;
break;
case 133:
StringCopy(&Var2, "FEET_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=110;
break;
default:
func_184(iVar7, iParam0, 134, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_213(int iParam0){
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
iVar7=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P1_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=32;
break;
case 2:
StringCopy(&Var2, "LEGS_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=38;
break;
case 3:
StringCopy(&Var2, "LEGS_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=44;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "LEGS_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "LEGS_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "LEGS_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=690;
break;
case 16:
StringCopy(&Var2, "LEGS_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=720;
break;
case 17:
StringCopy(&Var2, "LEGS_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=850;
break;
case 18:
StringCopy(&Var2, "LEGS_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "LEGS_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=740;
break;
case 20:
StringCopy(&Var2, "LEGS_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=750;
break;
case 21:
StringCopy(&Var2, "LEGS_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=790;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "LEGS_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "LEGS_P1_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=145;
break;
case 26:
StringCopy(&Var2, "LEGS_P1_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=140;
break;
case 27:
StringCopy(&Var2, "LEGS_P1_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=148;
break;
case 28:
StringCopy(&Var2, "LEGS_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 29:
StringCopy(&Var2, "LEGS_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=154;
break;
case 30:
StringCopy(&Var2, "LEGS_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=158;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "LEGS_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=820;
break;
case 34:
StringCopy(&Var2, "LEGS_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=820;
break;
case 35:
StringCopy(&Var2, "LEGS_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=850;
break;
case 36:
StringCopy(&Var2, "LEGS_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 37:
StringCopy(&Var2, "LEGS_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=920;
break;
case 38:
StringCopy(&Var2, "LEGS_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=950;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "LEGS_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 41:
StringCopy(&Var2, "LEGS_P1_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=45;
break;
case 42:
StringCopy(&Var2, "LEGS_P1_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=48;
break;
case 43:
StringCopy(&Var2, "LEGS_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=45;
break;
case 44:
StringCopy(&Var2, "LEGS_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=48;
break;
case 45:
StringCopy(&Var2, "LEGS_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "LEGS_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=55;
break;
case 47:
StringCopy(&Var2, "LEGS_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=58;
break;
case 48:
StringCopy(&Var2, "LEGS_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=60;
break;
case 49:
StringCopy(&Var2, "LEGS_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "LEGS_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=62;
break;
case 51:
StringCopy(&Var2, "LEGS_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=65;
break;
case 52:
StringCopy(&Var2, "LEGS_P1_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "LEGS_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 54:
StringCopy(&Var2, "LEGS_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 55:
StringCopy(&Var2, "LEGS_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 56:
StringCopy(&Var2, "LEGS_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 57:
StringCopy(&Var2, "LEGS_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 58:
StringCopy(&Var2, "LEGS_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 59:
StringCopy(&Var2, "LEGS_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 60:
StringCopy(&Var2, "LEGS_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 61:
StringCopy(&Var2, "LEGS_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 62:
StringCopy(&Var2, "LEGS_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 63:
StringCopy(&Var2, "LEGS_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 64:
StringCopy(&Var2, "LEGS_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 65:
StringCopy(&Var2, "LEGS_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 66:
StringCopy(&Var2, "LEGS_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 67:
StringCopy(&Var2, "LEGS_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 68:
StringCopy(&Var2, "LEGS_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 69:
StringCopy(&Var2, "LEGS_P1_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P1_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=160;
break;
case 74:
StringCopy(&Var2, "LEGS_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=180;
break;
case 75:
StringCopy(&Var2, "LEGS_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=180;
break;
case 76:
StringCopy(&Var2, "LEGS_P1_18_4", 16);
iVar3=18;
iVar4=4;
break;
case 77:
StringCopy(&Var2, "LEGS_P1_18_5", 16);
iVar3=18;
iVar4=5;
break;
case 78:
StringCopy(&Var2, "LEGS_P1_19_0", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "LEGS_P1_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=118;
break;
case 80:
StringCopy(&Var2, "LEGS_P1_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=120;
break;
case 81:
StringCopy(&Var2, "LEGS_P1_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=128;
break;
case 82:
StringCopy(&Var2, "LEGS_P1_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=128;
break;
case 83:
StringCopy(&Var2, "LEGS_P1_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=130;
break;
case 84:
StringCopy(&Var2, "LEGS_P1_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=145;
break;
case 85:
StringCopy(&Var2, "LEGS_P1_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=138;
break;
case 86:
StringCopy(&Var2, "LEGS_P1_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=132;
break;
case 87:
StringCopy(&Var2, "LEGS_P1_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=148;
break;
case 88:
StringCopy(&Var2, "LEGS_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=118;
break;
case 89:
StringCopy(&Var2, "LEGS_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=118;
break;
case 90:
StringCopy(&Var2, "LEGS_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=118;
break;
case 91:
StringCopy(&Var2, "LEGS_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=129;
break;
case 92:
StringCopy(&Var2, "LEGS_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=135;
break;
case 93:
StringCopy(&Var2, "LEGS_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=135;
break;
case 94:
StringCopy(&Var2, "LEGS_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=118;
break;
case 95:
StringCopy(&Var2, "LEGS_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=118;
break;
case 96:
StringCopy(&Var2, "LEGS_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=118;
break;
case 97:
StringCopy(&Var2, "LEGS_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=55;
break;
case 98:
StringCopy(&Var2, "LEGS_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=55;
break;
case 99:
StringCopy(&Var2, "LEGS_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=59;
break;
case 100:
StringCopy(&Var2, "LEGS_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=59;
break;
case 101:
StringCopy(&Var2, "LEGS_P1_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=65;
break;
case 102:
StringCopy(&Var2, "LEGS_P1_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=65;
break;
case 103:
StringCopy(&Var2, "LEGS_P1_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=69;
break;
case 104:
StringCopy(&Var2, "LEGS_P1_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=69;
break;
case 105:
StringCopy(&Var2, "LEGS_P1_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=75;
break;
case 106:
StringCopy(&Var2, "LEGS_P1_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "LEGS_P1_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=65;
break;
case 108:
StringCopy(&Var2, "LEGS_P1_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=65;
break;
case 109:
StringCopy(&Var2, "LEGS_P1_22_12", 16);
iVar3=22;
iVar4=12;
iVar1=65;
break;
case 110:
StringCopy(&Var2, "LEGS_P1_22_13", 16);
iVar3=22;
iVar4=13;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P1_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=38;
break;
case 112:
StringCopy(&Var2, "LEGS_P1_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=38;
break;
case 113:
StringCopy(&Var2, "LEGS_P1_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=28;
break;
case 114:
StringCopy(&Var2, "LEGS_P1_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=34;
break;
case 115:
StringCopy(&Var2, "LEGS_P1_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=36;
break;
case 116:
StringCopy(&Var2, "LEGS_P1_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=32;
break;
default:
func_184(iVar7, iParam0, 117, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_214(int iParam0){
if(iParam0 < 107){
func_217(iParam0);
}elseif(iParam0 < 227){
func_216(iParam0);
}else{
func_215(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_184(3, iParam0, 318, -1);
}}


void func_215(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=23;
iVar4=0;
iVar6=3;
break;
case 228:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=23;
iVar4=1;
iVar6=3;
break;
case 229:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=23;
iVar4=2;
iVar6=3;
break;
case 230:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=23;
iVar4=3;
iVar6=3;
break;
case 231:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=23;
iVar4=4;
iVar6=3;
break;
case 232:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=23;
iVar4=5;
iVar6=3;
break;
case 233:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=23;
iVar4=6;
iVar6=3;
break;
case 234:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=23;
iVar4=7;
iVar6=3;
break;
case 235:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=23;
iVar4=8;
iVar6=3;
break;
case 236:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=23;
iVar4=9;
iVar6=3;
break;
case 237:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=23;
iVar4=10;
iVar6=3;
break;
case 238:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=23;
iVar4=11;
iVar6=3;
break;
case 239:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=23;
iVar4=12;
iVar6=3;
break;
case 240:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=23;
iVar4=13;
iVar6=3;
break;
case 241:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=23;
iVar4=14;
iVar6=3;
break;
case 242:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=23;
iVar4=15;
iVar6=3;
break;
case 243:
StringCopy(&Var2, "TORSO_P1_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=2200;
iVar6=3;
break;
case 244:
StringCopy(&Var2, "TORSO_P1_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=2200;
iVar6=3;
break;
case 245:
StringCopy(&Var2, "TORSO_P1_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=2200;
iVar6=3;
break;
case 246:
StringCopy(&Var2, "TORSO_P1_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=2200;
iVar6=3;
break;
case 247:
StringCopy(&Var2, "TORSO_P1_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=2200;
iVar6=3;
break;
case 248:
StringCopy(&Var2, "TORSO_P1_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=2200;
iVar6=3;
break;
case 249:
StringCopy(&Var2, "TORSO_P1_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=2200;
iVar6=3;
break;
case 250:
StringCopy(&Var2, "TORSO_P1_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=2200;
iVar6=3;
break;
case 251:
StringCopy(&Var2, "TORSO_P1_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=2200;
iVar6=3;
break;
case 252:
StringCopy(&Var2, "TORSO_P1_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=2200;
iVar6=3;
break;
case 253:
StringCopy(&Var2, "TORSO_P1_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=2200;
iVar6=3;
break;
case 254:
StringCopy(&Var2, "TORSO_P1_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=2200;
iVar6=3;
break;
case 255:
StringCopy(&Var2, "TORSO_P1_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=2200;
iVar6=3;
break;
case 256:
StringCopy(&Var2, "TORSO_P1_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=2200;
iVar6=3;
break;
case 257:
StringCopy(&Var2, "TORSO_P1_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=2200;
iVar6=3;
break;
case 258:
StringCopy(&Var2, "TORSO_P1_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=2200;
iVar6=3;
break;
case 259:
StringCopy(&Var2, "TORSO_P1_25_0", 16);
iVar3=25;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 260:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar6=1;
break;
case 261:
StringCopy(&Var2, "TORSO_P1_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=150;
break;
case 262:
StringCopy(&Var2, "TORSO_P1_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=160;
break;
case 263:
StringCopy(&Var2, "TORSO_P1_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=150;
break;
case 264:
StringCopy(&Var2, "TORSO_P1_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=150;
break;
case 265:
StringCopy(&Var2, "TORSO_P1_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=160;
break;
case 266:
StringCopy(&Var2, "TORSO_P1_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=160;
break;
case 267:
StringCopy(&Var2, "TORSO_P1_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=88;
break;
case 268:
StringCopy(&Var2, "TORSO_P1_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=60;
break;
case 269:
StringCopy(&Var2, "TORSO_P1_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=70;
break;
case 270:
StringCopy(&Var2, "TORSO_P1_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=80;
break;
case 271:
StringCopy(&Var2, "TORSO_P1_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=90;
break;
case 272:
StringCopy(&Var2, "TORSO_P1_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=80;
break;
case 273:
StringCopy(&Var2, "TORSO_P1_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=70;
break;
case 274:
StringCopy(&Var2, "TORSO_P1_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=95;
break;
case 275:
StringCopy(&Var2, "TORSO_P1_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=105;
break;
case 276:
StringCopy(&Var2, "TORSO_P1_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=95;
break;
case 277:
StringCopy(&Var2, "TORSO_P1_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=110;
break;
case 278:
StringCopy(&Var2, "TORSO_P1_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=98;
break;
case 279:
StringCopy(&Var2, "TORSO_P1_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=88;
break;
case 280:
StringCopy(&Var2, "TORSO_P1_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=98;
break;
case 281:
StringCopy(&Var2, "TORSO_P1_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=110;
break;
case 282:
StringCopy(&Var2, "TORSO_P1_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=98;
break;
case 283:
StringCopy(&Var2, "TORSO_P1_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=250;
break;
case 284:
StringCopy(&Var2, "TORSO_P1_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=270;
break;
case 285:
StringCopy(&Var2, "TORSO_P1_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=280;
break;
case 286:
StringCopy(&Var2, "TORSO_P1_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=275;
break;
case 287:
StringCopy(&Var2, "TORSO_P1_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=290;
break;
case 288:
StringCopy(&Var2, "TORSO_P1_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=35;
break;
case 289:
StringCopy(&Var2, "TORSO_P1_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=35;
break;
case 290:
StringCopy(&Var2, "TORSO_P1_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=35;
break;
case 291:
StringCopy(&Var2, "TORSO_P1_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=295;
break;
case 292:
StringCopy(&Var2, "TORSO_P1_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=35;
break;
case 293:
StringCopy(&Var2, "TORSO_P1_29_10", 16);
iVar3=29;
iVar4=10;
iVar1=35;
break;
case 294:
StringCopy(&Var2, "TORSO_P1_29_11", 16);
iVar3=29;
iVar4=11;
iVar1=35;
break;
case 295:
StringCopy(&Var2, "TORSO_P1_29_12", 16);
iVar3=29;
iVar4=12;
break;
case 296:
StringCopy(&Var2, "TORSO_P1_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=1750;
break;
case 297:
StringCopy(&Var2, "TORSO_P1_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=1920;
break;
case 298:
StringCopy(&Var2, "TORSO_P1_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=1890;
break;
case 299:
StringCopy(&Var2, "TORSO_P1_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=1850;
break;
case 300:
StringCopy(&Var2, "TORSO_P1_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=1750;
break;
case 301:
StringCopy(&Var2, "TORSO_P1_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=1990;
break;
case 302:
StringCopy(&Var2, "TORSO_P1_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=1820;
break;
case 303:
StringCopy(&Var2, "TORSO_P1_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=1990;
break;
case 304:
StringCopy(&Var2, "TORSO_P1_30_8", 16);
iVar3=30;
iVar4=8;
iVar1=1920;
break;
case 305:
StringCopy(&Var2, "TORSO_P1_30_9", 16);
iVar3=30;
iVar4=9;
iVar1=1850;
break;
case 306:
StringCopy(&Var2, "TORSO_P1_30_10", 16);
iVar3=30;
iVar4=10;
iVar1=1990;
break;
case 307:
StringCopy(&Var2, "TORSO_P1_30_11", 16);
iVar3=30;
iVar4=11;
iVar1=1790;
break;
case 308:
StringCopy(&Var2, "TORSO_P1_30_12", 16);
iVar3=30;
iVar4=12;
iVar1=1790;
break;
case 309:
StringCopy(&Var2, "TORSO_P1_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=69;
break;
case 310:
StringCopy(&Var2, "TORSO_P1_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=75;
break;
case 311:
StringCopy(&Var2, "TORSO_P1_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=75;
break;
case 312:
StringCopy(&Var2, "TORSO_P1_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=79;
break;
case 313:
StringCopy(&Var2, "TORSO_P1_31_4", 16);
iVar3=31;
iVar4=4;
iVar1=79;
break;
case 314:
StringCopy(&Var2, "TORSO_P1_31_5", 16);
iVar3=31;
iVar4=5;
iVar1=89;
break;
case 315:
StringCopy(&Var2, "TORSO_P1_31_6", 16);
iVar3=31;
iVar4=6;
iVar1=85;
break;
case 316:
StringCopy(&Var2, "TORSO_P1_31_7", 16);
iVar3=31;
iVar4=7;
iVar1=85;
break;
case 317:
StringCopy(&Var2, "TORSO_P1_31_8", 16);
iVar3=31;
iVar4=8;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_216(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
StringCopy(&Var2, "TORSO_P1_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=195;
break;
case 108:
StringCopy(&Var2, "TORSO_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=420;
break;
case 109:
StringCopy(&Var2, "TORSO_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=390;
break;
case 110:
StringCopy(&Var2, "TORSO_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=450;
break;
case 111:
StringCopy(&Var2, "TORSO_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=400;
break;
case 112:
StringCopy(&Var2, "TORSO_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=390;
break;
case 113:
StringCopy(&Var2, "TORSO_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=570;
break;
case 114:
StringCopy(&Var2, "TORSO_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=390;
break;
case 115:
StringCopy(&Var2, "TORSO_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=470;
break;
case 116:
StringCopy(&Var2, "TORSO_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=390;
break;
case 117:
StringCopy(&Var2, "TORSO_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=520;
break;
case 118:
StringCopy(&Var2, "TORSO_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=490;
break;
case 119:
StringCopy(&Var2, "TORSO_P1_12_12", 16);
iVar3=12;
iVar4=12;
iVar1=490;
break;
case 120:
StringCopy(&Var2, "TORSO_P1_12_13", 16);
iVar3=12;
iVar4=13;
iVar1=590;
break;
case 121:
StringCopy(&Var2, "TORSO_P1_12_14", 16);
iVar3=12;
iVar4=14;
iVar1=560;
break;
case 122:
StringCopy(&Var2, "TORSO_P1_12_15", 16);
iVar3=12;
iVar4=15;
iVar1=520;
break;
case 123:
StringCopy(&Var2, "TORSO_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 124:
StringCopy(&Var2, "TORSO_P1_13_1", 16);
iVar3=13;
iVar4=1;
break;
case 125:
StringCopy(&Var2, "TORSO_P1_13_2", 16);
iVar3=13;
iVar4=2;
break;
case 126:
StringCopy(&Var2, "TORSO_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=90;
break;
case 127:
StringCopy(&Var2, "TORSO_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=85;
break;
case 128:
StringCopy(&Var2, "TORSO_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "TORSO_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=90;
break;
case 130:
StringCopy(&Var2, "TORSO_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=47;
break;
case 131:
StringCopy(&Var2, "TORSO_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=45;
break;
case 132:
StringCopy(&Var2, "TORSO_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=48;
break;
case 133:
StringCopy(&Var2, "TORSO_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=45;
break;
case 134:
StringCopy(&Var2, "TORSO_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=85;
break;
case 135:
StringCopy(&Var2, "TORSO_P1_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=45;
break;
case 136:
StringCopy(&Var2, "TORSO_P1_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=47;
break;
case 137:
StringCopy(&Var2, "TORSO_P1_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=45;
break;
case 138:
StringCopy(&Var2, "TORSO_P1_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=48;
break;
case 139:
StringCopy(&Var2, "TORSO_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=290;
break;
case 140:
StringCopy(&Var2, "TORSO_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=290;
break;
case 141:
StringCopy(&Var2, "TORSO_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=290;
break;
case 142:
StringCopy(&Var2, "TORSO_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=290;
break;
case 143:
StringCopy(&Var2, "TORSO_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=290;
break;
case 144:
StringCopy(&Var2, "TORSO_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=290;
break;
case 145:
StringCopy(&Var2, "TORSO_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=65;
break;
case 146:
StringCopy(&Var2, "TORSO_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=65;
break;
case 147:
StringCopy(&Var2, "TORSO_P1_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
break;
case 148:
StringCopy(&Var2, "TORSO_P1_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=220;
break;
case 149:
StringCopy(&Var2, "TORSO_P1_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=220;
break;
case 150:
StringCopy(&Var2, "TORSO_P1_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 151:
StringCopy(&Var2, "TORSO_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 152:
StringCopy(&Var2, "TORSO_P1_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=250;
break;
case 153:
StringCopy(&Var2, "TORSO_P1_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=260;
break;
case 154:
StringCopy(&Var2, "TORSO_P1_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=40;
break;
case 155:
StringCopy(&Var2, "TORSO_P1_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=50;
break;
case 156:
StringCopy(&Var2, "TORSO_P1_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=45;
break;
case 157:
StringCopy(&Var2, "TORSO_P1_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=40;
break;
case 158:
StringCopy(&Var2, "TORSO_P1_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=55;
break;
case 159:
StringCopy(&Var2, "TORSO_P1_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 160:
StringCopy(&Var2, "TORSO_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=40;
break;
case 161:
StringCopy(&Var2, "TORSO_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=50;
break;
case 162:
StringCopy(&Var2, "TORSO_P1_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 163:
StringCopy(&Var2, "TORSO_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=50;
break;
case 164:
StringCopy(&Var2, "TORSO_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=50;
break;
case 165:
StringCopy(&Var2, "TORSO_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=50;
break;
case 166:
StringCopy(&Var2, "TORSO_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=50;
break;
case 167:
StringCopy(&Var2, "TORSO_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=50;
break;
case 168:
StringCopy(&Var2, "TORSO_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=50;
break;
case 169:
StringCopy(&Var2, "TORSO_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=50;
break;
case 170:
StringCopy(&Var2, "TORSO_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=50;
break;
case 171:
StringCopy(&Var2, "TORSO_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=50;
break;
case 172:
StringCopy(&Var2, "TORSO_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=50;
break;
case 173:
StringCopy(&Var2, "TORSO_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=50;
break;
case 174:
StringCopy(&Var2, "TORSO_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=50;
break;
case 175:
StringCopy(&Var2, "TORSO_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=50;
break;
case 176:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar6=3;
break;
case 177:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar6=3;
break;
case 178:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar6=3;
break;
case 179:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar6=3;
break;
case 180:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar6=3;
break;
case 181:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar6=3;
break;
case 182:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar6=3;
break;
case 183:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar6=3;
break;
case 184:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar6=3;
break;
case 185:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar6=3;
break;
case 186:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar6=3;
break;
case 187:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar6=3;
break;
case 188:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar6=3;
break;
case 189:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar6=3;
break;
case 190:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar6=3;
break;
case 191:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar6=3;
break;
case 192:
StringCopy(&Var2, "TORSO_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=480;
iVar6=3;
break;
case 193:
StringCopy(&Var2, "TORSO_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=440;
iVar6=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=440;
iVar6=3;
break;
case 195:
StringCopy(&Var2, "TORSO_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=520;
iVar6=3;
break;
case 196:
StringCopy(&Var2, "TORSO_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=440;
iVar6=3;
break;
case 197:
StringCopy(&Var2, "TORSO_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=440;
iVar6=3;
break;
case 198:
StringCopy(&Var2, "TORSO_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=480;
iVar6=3;
break;
case 199:
StringCopy(&Var2, "TORSO_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=480;
iVar6=3;
break;
case 200:
StringCopy(&Var2, "TORSO_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=480;
iVar6=3;
break;
case 201:
StringCopy(&Var2, "TORSO_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=480;
iVar6=3;
break;
case 202:
StringCopy(&Var2, "TORSO_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=480;
iVar6=3;
break;
case 203:
StringCopy(&Var2, "TORSO_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=480;
iVar6=3;
break;
case 204:
StringCopy(&Var2, "TORSO_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=520;
iVar6=3;
break;
case 205:
StringCopy(&Var2, "TORSO_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=520;
iVar6=3;
break;
case 206:
StringCopy(&Var2, "TORSO_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=520;
iVar6=3;
break;
case 207:
StringCopy(&Var2, "TORSO_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=440;
iVar6=3;
break;
case 208:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 209:
StringCopy(&Var2, "TORSO_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=220;
break;
case 210:
StringCopy(&Var2, "TORSO_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=200;
break;
case 211:
StringCopy(&Var2, "TORSO_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=240;
break;
case 212:
StringCopy(&Var2, "TORSO_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=240;
break;
case 213:
StringCopy(&Var2, "TORSO_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=260;
break;
case 214:
StringCopy(&Var2, "TORSO_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=275;
break;
case 215:
StringCopy(&Var2, "TORSO_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=275;
break;
case 216:
StringCopy(&Var2, "TORSO_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=280;
break;
case 217:
StringCopy(&Var2, "TORSO_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=280;
break;
case 218:
StringCopy(&Var2, "TORSO_P1_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=280;
break;
case 219:
StringCopy(&Var2, "TORSO_P1_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=280;
break;
case 220:
StringCopy(&Var2, "TORSO_P1_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=280;
break;
case 221:
StringCopy(&Var2, "TORSO_P1_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=280;
break;
case 222:
StringCopy(&Var2, "TORSO_P1_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=280;
break;
case 223:
StringCopy(&Var2, "TORSO_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=3100;
iVar6=3;
break;
case 224:
StringCopy(&Var2, "TORSO_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=2800;
iVar6=3;
break;
case 225:
StringCopy(&Var2, "TORSO_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=2500;
iVar6=3;
break;
case 226:
StringCopy(&Var2, "TORSO_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3000;
iVar6=3;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_217(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=180;
break;
case 3:
StringCopy(&Var2, "TORSO_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=22;
break;
case 4:
StringCopy(&Var2, "TORSO_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=20;
break;
case 5:
StringCopy(&Var2, "TORSO_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=18;
break;
case 6:
StringCopy(&Var2, "TORSO_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=19;
break;
case 7:
StringCopy(&Var2, "TORSO_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=19;
break;
case 10:
StringCopy(&Var2, "TORSO_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=19;
break;
case 11:
StringCopy(&Var2, "TORSO_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=18;
break;
case 12:
StringCopy(&Var2, "TORSO_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=20;
break;
case 13:
StringCopy(&Var2, "TORSO_P1_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=22;
break;
case 14:
StringCopy(&Var2, "TORSO_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=19;
break;
case 15:
StringCopy(&Var2, "TORSO_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=22;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
iVar6=4;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
iVar6=4;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
iVar6=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
iVar6=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
iVar6=4;
break;
case 22:
StringCopy(&Var2, "TORSO_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 24:
StringCopy(&Var2, "TORSO_P1_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=20;
iVar6=2;
break;
case 25:
StringCopy(&Var2, "TORSO_P1_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=22;
iVar6=2;
break;
case 26:
StringCopy(&Var2, "TORSO_P1_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=20;
iVar6=2;
break;
case 27:
StringCopy(&Var2, "TORSO_P1_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=25;
iVar6=2;
break;
case 28:
StringCopy(&Var2, "TORSO_P1_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=23;
iVar6=2;
break;
case 29:
StringCopy(&Var2, "TORSO_P1_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=25;
iVar6=2;
break;
case 30:
StringCopy(&Var2, "TORSO_P1_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=28;
iVar6=2;
break;
case 31:
StringCopy(&Var2, "TORSO_P1_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=26;
iVar6=2;
break;
case 32:
StringCopy(&Var2, "TORSO_P1_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=24;
iVar6=2;
break;
case 33:
StringCopy(&Var2, "TORSO_P1_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=27;
iVar6=2;
break;
case 34:
StringCopy(&Var2, "TORSO_P1_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=29;
iVar6=2;
break;
case 35:
StringCopy(&Var2, "TORSO_P1_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=28;
iVar6=2;
break;
case 36:
StringCopy(&Var2, "TORSO_P1_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=25;
iVar6=2;
break;
case 37:
StringCopy(&Var2, "TORSO_P1_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=22;
iVar6=2;
break;
case 38:
StringCopy(&Var2, "TORSO_P1_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=27;
iVar6=2;
break;
case 39:
StringCopy(&Var2, "TORSO_P1_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=29;
iVar6=2;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 41:
StringCopy(&Var2, "TORSO_P1_6_0", 16);
iVar3=6;
iVar4=0;
iVar6=3;
break;
case 42:
StringCopy(&Var2, "TORSO_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=1270;
iVar6=3;
break;
case 43:
StringCopy(&Var2, "TORSO_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=1270;
iVar6=3;
break;
case 44:
StringCopy(&Var2, "TORSO_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=1270;
iVar6=3;
break;
case 45:
StringCopy(&Var2, "TORSO_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1090;
iVar6=3;
break;
case 46:
StringCopy(&Var2, "TORSO_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=1090;
iVar6=3;
break;
case 47:
StringCopy(&Var2, "TORSO_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=1120;
iVar6=3;
break;
case 48:
StringCopy(&Var2, "TORSO_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=1120;
iVar6=3;
break;
case 49:
StringCopy(&Var2, "TORSO_P1_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=1290;
iVar6=3;
break;
case 50:
StringCopy(&Var2, "TORSO_P1_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=1290;
iVar6=3;
break;
case 51:
StringCopy(&Var2, "TORSO_P1_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=1320;
iVar6=3;
break;
case 52:
StringCopy(&Var2, "TORSO_P1_6_11", 16);
iVar3=6;
iVar4=11;
iVar1=1320;
iVar6=3;
break;
case 53:
StringCopy(&Var2, "TORSO_P1_6_12", 16);
iVar3=6;
iVar4=12;
iVar1=1590;
iVar6=3;
break;
case 54:
StringCopy(&Var2, "TORSO_P1_6_13", 16);
iVar3=6;
iVar4=13;
iVar1=1590;
iVar6=3;
break;
case 55:
StringCopy(&Var2, "TORSO_P1_6_14", 16);
iVar3=6;
iVar4=14;
iVar1=1590;
iVar6=3;
break;
case 56:
StringCopy(&Var2, "TORSO_P1_6_15", 16);
iVar3=6;
iVar4=15;
iVar1=1320;
iVar6=3;
break;
case 57:
StringCopy(&Var2, "TORSO_P1_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=98;
break;
case 58:
StringCopy(&Var2, "TORSO_P1_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=98;
break;
case 59:
StringCopy(&Var2, "TORSO_P1_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=110;
break;
case 60:
StringCopy(&Var2, "TORSO_P1_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=110;
break;
case 61:
StringCopy(&Var2, "TORSO_P1_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=118;
break;
case 62:
StringCopy(&Var2, "TORSO_P1_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=120;
break;
case 63:
StringCopy(&Var2, "TORSO_P1_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=120;
break;
case 64:
StringCopy(&Var2, "TORSO_P1_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=129;
break;
case 65:
StringCopy(&Var2, "TORSO_P1_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=125;
break;
case 66:
StringCopy(&Var2, "TORSO_P1_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=125;
break;
case 67:
StringCopy(&Var2, "TORSO_P1_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=129;
break;
case 68:
StringCopy(&Var2, "TORSO_P1_7_11", 16);
iVar3=7;
iVar4=11;
iVar1=129;
break;
case 69:
StringCopy(&Var2, "TORSO_P1_7_12", 16);
iVar3=7;
iVar4=12;
iVar1=135;
break;
case 70:
StringCopy(&Var2, "TORSO_P1_7_13", 16);
iVar3=7;
iVar4=13;
iVar1=139;
break;
case 71:
StringCopy(&Var2, "TORSO_P1_7_14", 16);
iVar3=7;
iVar4=14;
iVar1=145;
break;
case 72:
StringCopy(&Var2, "TORSO_P1_7_15", 16);
iVar3=7;
iVar4=15;
iVar1=145;
break;
case 73:
StringCopy(&Var2, "TORSO_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "TORSO_P1_8_1", 16);
iVar3=8;
iVar4=1;
break;
case 75:
StringCopy(&Var2, "TORSO_P1_8_2", 16);
iVar3=8;
iVar4=2;
break;
case 76:
StringCopy(&Var2, "TORSO_P1_8_3", 16);
iVar3=8;
iVar4=3;
break;
case 77:
StringCopy(&Var2, "TORSO_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=30;
break;
case 78:
StringCopy(&Var2, "TORSO_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=38;
break;
case 79:
StringCopy(&Var2, "TORSO_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=32;
break;
case 80:
StringCopy(&Var2, "TORSO_P1_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=30;
break;
case 81:
StringCopy(&Var2, "TORSO_P1_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=33;
break;
case 82:
StringCopy(&Var2, "TORSO_P1_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=35;
break;
case 83:
StringCopy(&Var2, "TORSO_P1_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=35;
break;
case 84:
StringCopy(&Var2, "TORSO_P1_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=38;
break;
case 85:
StringCopy(&Var2, "TORSO_P1_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=33;
break;
case 86:
StringCopy(&Var2, "TORSO_P1_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=35;
break;
case 87:
StringCopy(&Var2, "TORSO_P1_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=38;
break;
case 88:
StringCopy(&Var2, "TORSO_P1_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=32;
break;
case 89:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "TORSO_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "TORSO_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=59;
break;
case 93:
StringCopy(&Var2, "TORSO_P1_11_2", 16);
iVar3=11;
iVar4=2;
break;
case 94:
StringCopy(&Var2, "TORSO_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=25;
break;
case 95:
StringCopy(&Var2, "TORSO_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=29;
break;
case 96:
StringCopy(&Var2, "TORSO_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=27;
break;
case 97:
StringCopy(&Var2, "TORSO_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=25;
break;
case 98:
StringCopy(&Var2, "TORSO_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=27;
break;
case 99:
StringCopy(&Var2, "TORSO_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=28;
break;
case 100:
StringCopy(&Var2, "TORSO_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=30;
break;
case 101:
StringCopy(&Var2, "TORSO_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=29;
break;
case 102:
StringCopy(&Var2, "TORSO_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=27;
break;
case 103:
StringCopy(&Var2, "TORSO_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=29;
break;
case 104:
StringCopy(&Var2, "TORSO_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=32;
break;
case 105:
StringCopy(&Var2, "TORSO_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=30;
break;
case 106:
StringCopy(&Var2, "TORSO_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=28;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_218(int iParam0){
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
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P1_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "HAIR_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar6=3;
break;
case 4:
StringCopy(&Var2, "HAIR_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar6=3;
break;
case 5:
StringCopy(&Var2, "HAIR_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar6=3;
break;
case 6:
StringCopy(&Var2, "HAIR_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar6=3;
break;
case 7:
StringCopy(&Var2, "HAIR_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar6=3;
break;
case 8:
StringCopy(&Var2, "HAIR_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar6=3;
break;
case 9:
StringCopy(&Var2, "HAIR_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar6=3;
break;
case 10:
StringCopy(&Var2, "HAIR_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar6=3;
break;
case 11:
StringCopy(&Var2, "HAIR_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar6=3;
break;
case 12:
StringCopy(&Var2, "HAIR_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar6=3;
break;
case 13:
StringCopy(&Var2, "HAIR_P1_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "HAIR_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar6=3;
break;
case 15:
StringCopy(&Var2, "HAIR_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar6=3;
break;
case 16:
StringCopy(&Var2, "HAIR_P1_1_0", 16);
iVar3=1;
iVar4=0;
iVar6=3;
break;
case 17:
StringCopy(&Var2, "HAIR_P1_2_0", 16);
iVar3=2;
iVar4=0;
iVar6=3;
break;
case 18:
StringCopy(&Var2, "HAIR_P1_3_0", 16);
iVar3=3;
iVar4=0;
iVar6=3;
break;
case 19:
StringCopy(&Var2, "HAIR_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 21, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_219(int iParam0){
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
iVar7=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=9;
break;
default:
func_184(iVar7, iParam0, 10, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_220(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_237(iParam1);
break;
case 2:
func_236(iParam1);
break;
case 3:
func_233(iParam1);
break;
case 4:
func_232(iParam1);
break;
case 6:
func_231(iParam1);
break;
case 5:
func_230(iParam1);
break;
case 8:
func_229(iParam1);
break;
case 9:
func_228(iParam1);
break;
case 10:
func_227(iParam1);
break;
case 1:
func_226(iParam1);
break;
case 7:
func_225(iParam1);
break;
case 11:
func_224(iParam1);
break;
case 12:
func_223(iParam1);
break;
case 13:
func_222(iParam1);
break;
case 14:
func_221(iParam1);
break;
}}


void func_221(int iParam0){
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
iVar7=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "PROPS_P0_H1", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P0_H2", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=11;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P0_H12", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=28;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P0_E0", 16);
iVar3=0;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 61:
StringCopy(&Var2, "PROPS_P0_E3", 16);
iVar3=3;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 62:
StringCopy(&Var2, "PROPS_P0_E4", 16);
iVar3=4;
iVar4=0;
iVar1=58;
iVar5=10;
break;
case 63:
StringCopy(&Var2, "PROPS_P0_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=56;
iVar5=10;
break;
case 64:
StringCopy(&Var2, "PROPS_P0_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=60;
iVar5=10;
break;
case 65:
StringCopy(&Var2, "PROPS_P0_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=65;
iVar5=10;
break;
case 66:
StringCopy(&Var2, "PROPS_P0_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=62;
iVar5=10;
break;
case 67:
StringCopy(&Var2, "PROPS_P0_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=10;
break;
case 68:
StringCopy(&Var2, "PROPS_P0_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=68;
iVar5=10;
break;
case 69:
StringCopy(&Var2, "PROPS_P0_E4_7", 16);
iVar3=4;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 70:
StringCopy(&Var2, "PROPS_P0_E5", 16);
iVar3=5;
iVar4=0;
iVar1=65;
iVar5=10;
break;
case 71:
StringCopy(&Var2, "PROPS_P0_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 72:
StringCopy(&Var2, "PROPS_P0_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=72;
iVar5=10;
break;
case 73:
StringCopy(&Var2, "PROPS_P0_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=70;
iVar5=10;
break;
case 74:
StringCopy(&Var2, "PROPS_P0_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=74;
iVar5=10;
break;
case 75:
StringCopy(&Var2, "PROPS_P0_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=78;
iVar5=10;
break;
case 76:
StringCopy(&Var2, "PROPS_P0_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=82;
iVar5=10;
break;
case 77:
StringCopy(&Var2, "PROPS_P0_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=85;
iVar5=10;
break;
case 78:
StringCopy(&Var2, "PROPS_P0_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=85;
iVar5=10;
break;
case 79:
StringCopy(&Var2, "PROPS_P0_E5_9", 16);
iVar3=5;
iVar4=9;
iVar5=10;
break;
case 80:
StringCopy(&Var2, "PROPS_P0_E6", 16);
iVar3=6;
iVar4=0;
iVar1=69;
iVar5=10;
break;
case 81:
StringCopy(&Var2, "PROPS_P0_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 82:
StringCopy(&Var2, "PROPS_P0_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=69;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P0_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=69;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P0_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=69;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P0_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=69;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P0_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=69;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P0_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=69;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P0_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=69;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P0_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=69;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P0_E7", 16);
iVar3=7;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P0_E8", 16);
iVar3=8;
iVar4=0;
iVar1=170;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P0_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=175;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P0_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=180;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P0_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=185;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P0_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=189;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P0_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=195;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P0_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=235;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P0_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=245;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P0_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=250;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P0_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=275;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P0_E8_10", 16);
iVar3=8;
iVar4=10;
iVar1=280;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P0_E8_11", 16);
iVar3=8;
iVar4=11;
iVar1=295;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P0_E9", 16);
iVar3=9;
iVar4=0;
iVar1=179;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P0_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=159;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P0_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=165;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P0_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=155;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P0_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P0_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P0_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P0_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=225;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
default:
func_184(iVar7, iParam0, 113, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_222(int iParam0){
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
iVar7=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 10, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_223(int iParam0){
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
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P0_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P0_1", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P0_4", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P0_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P0_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P0_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P0_12", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P0_14", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P0_18", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P0_19", 16);
iVar3=0;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P0_20", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P0_22", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P0_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P0_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P0_26", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P0_28", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P0_29", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P0_30", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P0_31", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P0_32", 16);
iVar3=0;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P0_33", 16);
iVar3=0;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P0_34", 16);
iVar3=0;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P0_35", 16);
iVar3=0;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P0_36", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P0_37", 16);
iVar3=0;
iVar4=0;
iVar1=840;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P0_38", 16);
iVar3=0;
iVar4=0;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P0_39", 16);
iVar3=0;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P0_40", 16);
iVar3=0;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P0_41", 16);
iVar3=0;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P0_42", 16);
iVar3=0;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P0_43", 16);
iVar3=0;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P0_44", 16);
iVar3=0;
iVar4=0;
iVar1=3900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P0_45", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P0_46", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P0_47", 16);
iVar3=0;
iVar4=0;
iVar1=4600;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P0_48", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P0_49", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P0_50", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P0_51", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P0_52", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P0_53", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P0_54", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 48:
StringCopy(&Var2, "OUTFIT_P0_55", 16);
iVar3=0;
iVar4=0;
break;
case 49:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 53, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_224(int iParam0){
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
iVar7=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "JBIB_P0_02_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "JBIB_P0_02_1", 16);
iVar3=2;
iVar4=1;
break;
case 4:
StringCopy(&Var2, "JBIB_P0_02_2", 16);
iVar3=2;
iVar4=2;
break;
case 5:
StringCopy(&Var2, "JBIB_P0_02_3", 16);
iVar3=2;
iVar4=3;
break;
case 6:
StringCopy(&Var2, "JBIB_P0_02_4", 16);
iVar3=2;
iVar4=4;
break;
case 7:
StringCopy(&Var2, "JBIB_P0_02_5", 16);
iVar3=2;
iVar4=5;
break;
case 8:
StringCopy(&Var2, "JBIB_P0_03_0", 16);
iVar3=3;
iVar4=0;
iVar1=390;
break;
case 9:
StringCopy(&Var2, "JBIB_P0_03_1", 16);
iVar3=3;
iVar4=1;
iVar1=390;
break;
case 10:
StringCopy(&Var2, "JBIB_P0_03_2", 16);
iVar3=3;
iVar4=2;
iVar1=420;
break;
case 11:
StringCopy(&Var2, "JBIB_P0_03_3", 16);
iVar3=3;
iVar4=3;
iVar1=420;
break;
case 12:
StringCopy(&Var2, "JBIB_P0_03_4", 16);
iVar3=3;
iVar4=4;
iVar1=490;
break;
case 13:
StringCopy(&Var2, "JBIB_P0_03_5", 16);
iVar3=3;
iVar4=5;
iVar1=490;
break;
case 14:
StringCopy(&Var2, "JBIB_P0_03_6", 16);
iVar3=3;
iVar4=6;
iVar1=540;
break;
case 15:
StringCopy(&Var2, "JBIB_P0_03_7", 16);
iVar3=3;
iVar4=7;
iVar1=540;
break;
case 16:
StringCopy(&Var2, "JBIB_P0_03_8", 16);
iVar3=3;
iVar4=8;
iVar1=550;
break;
case 17:
StringCopy(&Var2, "JBIB_P0_03_9", 16);
iVar3=3;
iVar4=9;
iVar1=540;
break;
case 18:
StringCopy(&Var2, "JBIB_P0_04_0", 16);
iVar3=4;
iVar4=0;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "JBIB_P0_04_1", 16);
iVar3=4;
iVar4=1;
iVar1=850;
break;
case 20:
StringCopy(&Var2, "JBIB_P0_04_2", 16);
iVar3=4;
iVar4=2;
iVar1=890;
break;
case 21:
StringCopy(&Var2, "JBIB_P0_04_3", 16);
iVar3=4;
iVar4=3;
iVar1=890;
break;
case 22:
StringCopy(&Var2, "JBIB_P0_04_4", 16);
iVar3=4;
iVar4=4;
iVar1=920;
break;
case 23:
StringCopy(&Var2, "JBIB_P0_04_5", 16);
iVar3=4;
iVar4=5;
iVar1=920;
break;
case 24:
StringCopy(&Var2, "JBIB_P0_04_6", 16);
iVar3=4;
iVar4=6;
iVar1=950;
break;
case 25:
StringCopy(&Var2, "JBIB_P0_04_7", 16);
iVar3=4;
iVar4=7;
iVar1=980;
break;
case 26:
StringCopy(&Var2, "JBIB_P0_04_8", 16);
iVar3=4;
iVar4=8;
iVar1=1050;
break;
case 27:
StringCopy(&Var2, "JBIB_P0_04_9", 16);
iVar3=4;
iVar4=9;
iVar1=1100;
break;
case 28:
StringCopy(&Var2, "JBIB_P0_05_0", 16);
iVar3=5;
iVar4=0;
iVar1=1890;
break;
case 29:
StringCopy(&Var2, "JBIB_P0_05_1", 16);
iVar3=5;
iVar4=1;
iVar1=1820;
break;
case 30:
StringCopy(&Var2, "JBIB_P0_05_2", 16);
iVar3=5;
iVar4=2;
iVar1=1820;
break;
case 31:
StringCopy(&Var2, "JBIB_P0_05_3", 16);
iVar3=5;
iVar4=3;
iVar1=1850;
break;
case 32:
StringCopy(&Var2, "JBIB_P0_05_4", 16);
iVar3=5;
iVar4=4;
iVar1=1850;
break;
case 33:
StringCopy(&Var2, "JBIB_P0_05_5", 16);
iVar3=5;
iVar4=5;
iVar1=1900;
break;
case 34:
StringCopy(&Var2, "JBIB_P0_05_6", 16);
iVar3=5;
iVar4=6;
iVar1=1920;
break;
case 35:
StringCopy(&Var2, "JBIB_P0_05_7", 16);
iVar3=5;
iVar4=7;
iVar1=1980;
break;
case 36:
StringCopy(&Var2, "JBIB_P0_05_8", 16);
iVar3=5;
iVar4=8;
iVar1=2100;
break;
case 37:
StringCopy(&Var2, "JBIB_P0_05_9", 16);
iVar3=5;
iVar4=9;
iVar1=2120;
break;
case 38:
StringCopy(&Var2, "JBIB_P0_05_10", 16);
iVar3=5;
iVar4=10;
iVar1=2000;
break;
case 39:
StringCopy(&Var2, "JBIB_P0_05_11", 16);
iVar3=5;
iVar4=11;
iVar1=2200;
break;
case 40:
StringCopy(&Var2, "JBIB_P0_05_12", 16);
iVar3=5;
iVar4=12;
iVar1=2280;
break;
case 41:
StringCopy(&Var2, "JBIB_P0_05_13", 16);
iVar3=5;
iVar4=13;
iVar1=2300;
break;
case 42:
StringCopy(&Var2, "JBIB_P0_05_14", 16);
iVar3=5;
iVar4=14;
iVar1=2350;
break;
case 43:
StringCopy(&Var2, "JBIB_P0_05_15", 16);
iVar3=5;
iVar4=15;
iVar1=2280;
break;
case 44:
StringCopy(&Var2, "JBIB_P0_06_0", 16);
iVar3=6;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 45, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_225(int iParam0){
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
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 1, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_226(int iParam0){
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
iVar7=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 5, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_227(int iParam0){
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
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=2;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=3;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=4;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=5;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=6;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=7;
break;
case 36:
StringCopy(&Var2, "DECL_P0_10_8", 16);
iVar3=10;
iVar4=8;
break;
case 37:
StringCopy(&Var2, "DECL_P0_10_9", 16);
iVar3=10;
iVar4=9;
break;
case 38:
StringCopy(&Var2, "DECL_P0_10_10", 16);
iVar3=10;
iVar4=10;
break;
case 39:
StringCopy(&Var2, "DECL_P0_10_11", 16);
iVar3=10;
iVar4=11;
break;
case 40:
StringCopy(&Var2, "DECL_P0_10_12", 16);
iVar3=10;
iVar4=12;
break;
case 41:
StringCopy(&Var2, "DECL_P0_10_13", 16);
iVar3=10;
iVar4=13;
break;
case 42:
StringCopy(&Var2, "DECL_P0_10_14", 16);
iVar3=10;
iVar4=14;
break;
case 43:
StringCopy(&Var2, "DECL_P0_10_15", 16);
iVar3=10;
iVar4=15;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
break;
default:
func_184(iVar7, iParam0, 48, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_228(int iParam0){
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
iVar7=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 20, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_229(int iParam0){
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
iVar7=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "SPEC_P0_10", 16);
iVar3=10;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "SPEC_P0_16", 16);
iVar3=16;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 24, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_230(int iParam0){
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
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
default:
func_184(iVar7, iParam0, 14, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_231(int iParam0){
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
iVar7=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P0_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=665;
break;
case 2:
StringCopy(&Var2, "FEET_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=620;
break;
case 3:
StringCopy(&Var2, "FEET_P0_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=540;
break;
case 4:
StringCopy(&Var2, "FEET_P0_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=580;
break;
case 5:
StringCopy(&Var2, "FEET_P0_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=650;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "FEET_P0_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "FEET_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "FEET_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=64;
break;
case 22:
StringCopy(&Var2, "FEET_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=56;
break;
case 23:
StringCopy(&Var2, "FEET_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=69;
break;
case 24:
StringCopy(&Var2, "FEET_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=59;
break;
case 25:
StringCopy(&Var2, "FEET_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=62;
break;
case 26:
StringCopy(&Var2, "FEET_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=74;
break;
case 27:
StringCopy(&Var2, "FEET_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=68;
break;
case 28:
StringCopy(&Var2, "FEET_P0_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=72;
break;
case 29:
StringCopy(&Var2, "FEET_P0_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=70;
break;
case 30:
StringCopy(&Var2, "FEET_P0_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=48;
break;
case 31:
StringCopy(&Var2, "FEET_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 32:
StringCopy(&Var2, "FEET_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=55;
break;
case 33:
StringCopy(&Var2, "FEET_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=75;
break;
case 34:
StringCopy(&Var2, "FEET_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=65;
break;
case 35:
StringCopy(&Var2, "FEET_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=68;
break;
case 36:
StringCopy(&Var2, "FEET_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 37:
StringCopy(&Var2, "FEET_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=68;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "FEET_P0_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 40:
StringCopy(&Var2, "FEET_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 41:
StringCopy(&Var2, "FEET_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 42:
StringCopy(&Var2, "FEET_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 43:
StringCopy(&Var2, "FEET_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 44:
StringCopy(&Var2, "FEET_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 45:
StringCopy(&Var2, "FEET_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 46:
StringCopy(&Var2, "FEET_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 47:
StringCopy(&Var2, "FEET_P0_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 48:
StringCopy(&Var2, "FEET_P0_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 49:
StringCopy(&Var2, "FEET_P0_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 50:
StringCopy(&Var2, "FEET_P0_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 51:
StringCopy(&Var2, "FEET_P0_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 52:
StringCopy(&Var2, "FEET_P0_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 53:
StringCopy(&Var2, "FEET_P0_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 54:
StringCopy(&Var2, "FEET_P0_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 55:
StringCopy(&Var2, "FEET_P0_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 56:
StringCopy(&Var2, "FEET_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 57:
StringCopy(&Var2, "FEET_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 58:
StringCopy(&Var2, "FEET_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 59:
StringCopy(&Var2, "FEET_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 60:
StringCopy(&Var2, "FEET_P0_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 61:
StringCopy(&Var2, "FEET_P0_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 62:
StringCopy(&Var2, "FEET_P0_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 63:
StringCopy(&Var2, "FEET_P0_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 64:
StringCopy(&Var2, "FEET_P0_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 65:
StringCopy(&Var2, "FEET_P0_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 66:
StringCopy(&Var2, "FEET_P0_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 67:
StringCopy(&Var2, "FEET_P0_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 68:
StringCopy(&Var2, "FEET_P0_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 69:
StringCopy(&Var2, "FEET_P0_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 70:
StringCopy(&Var2, "FEET_P0_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 71:
StringCopy(&Var2, "FEET_P0_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 73:
StringCopy(&Var2, "FEET_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "FEET_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 75:
StringCopy(&Var2, "FEET_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 76:
StringCopy(&Var2, "FEET_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 77:
StringCopy(&Var2, "FEET_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 78:
StringCopy(&Var2, "FEET_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 79:
StringCopy(&Var2, "FEET_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 80:
StringCopy(&Var2, "FEET_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 81:
StringCopy(&Var2, "FEET_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 83:
StringCopy(&Var2, "FEET_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 84:
StringCopy(&Var2, "FEET_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 85:
StringCopy(&Var2, "FEET_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 86:
StringCopy(&Var2, "FEET_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
case 87:
StringCopy(&Var2, "FEET_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=720;
break;
case 88:
StringCopy(&Var2, "FEET_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=680;
break;
case 89:
StringCopy(&Var2, "FEET_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=650;
break;
case 90:
StringCopy(&Var2, "FEET_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=670;
break;
case 91:
StringCopy(&Var2, "FEET_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=700;
break;
case 92:
StringCopy(&Var2, "FEET_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=680;
break;
case 93:
StringCopy(&Var2, "FEET_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=720;
break;
case 94:
StringCopy(&Var2, "FEET_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=740;
break;
case 95:
StringCopy(&Var2, "FEET_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=760;
break;
case 96:
StringCopy(&Var2, "FEET_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=780;
break;
case 97:
StringCopy(&Var2, "FEET_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=750;
break;
case 98:
StringCopy(&Var2, "FEET_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=700;
break;
default:
func_184(iVar7, iParam0, 99, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_232(int iParam0){
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
iVar7=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "LEGS_P0_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "LEGS_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "LEGS_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "LEGS_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "LEGS_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "LEGS_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "LEGS_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "LEGS_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "LEGS_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "LEGS_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "LEGS_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "LEGS_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "LEGS_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "LEGS_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "LEGS_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=115;
break;
case 24:
StringCopy(&Var2, "LEGS_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 25:
StringCopy(&Var2, "LEGS_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=128;
break;
case 26:
StringCopy(&Var2, "LEGS_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=118;
break;
case 27:
StringCopy(&Var2, "LEGS_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "LEGS_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=128;
break;
case 29:
StringCopy(&Var2, "LEGS_P0_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=128;
break;
case 30:
StringCopy(&Var2, "LEGS_P0_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=125;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "LEGS_P0_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=68;
break;
case 42:
StringCopy(&Var2, "LEGS_P0_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=68;
break;
case 43:
StringCopy(&Var2, "LEGS_P0_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=68;
break;
case 44:
StringCopy(&Var2, "LEGS_P0_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=68;
break;
case 45:
StringCopy(&Var2, "LEGS_P0_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=68;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "LEGS_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "LEGS_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=550;
break;
case 49:
StringCopy(&Var2, "LEGS_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=650;
break;
case 50:
StringCopy(&Var2, "LEGS_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=875;
break;
case 51:
StringCopy(&Var2, "LEGS_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=820;
break;
case 52:
StringCopy(&Var2, "LEGS_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=720;
break;
case 53:
StringCopy(&Var2, "LEGS_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=750;
break;
case 54:
StringCopy(&Var2, "LEGS_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=850;
break;
case 55:
StringCopy(&Var2, "LEGS_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 56:
StringCopy(&Var2, "LEGS_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 57:
StringCopy(&Var2, "LEGS_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=48;
break;
case 58:
StringCopy(&Var2, "LEGS_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=38;
break;
case 59:
StringCopy(&Var2, "LEGS_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=38;
break;
case 60:
StringCopy(&Var2, "LEGS_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=42;
break;
case 61:
StringCopy(&Var2, "LEGS_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 62:
StringCopy(&Var2, "LEGS_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=46;
break;
case 63:
StringCopy(&Var2, "LEGS_P0_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=46;
break;
case 64:
StringCopy(&Var2, "LEGS_P0_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=46;
break;
case 65:
StringCopy(&Var2, "LEGS_P0_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=68;
break;
case 66:
StringCopy(&Var2, "LEGS_P0_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=58;
break;
case 67:
StringCopy(&Var2, "LEGS_P0_16_12", 16);
iVar3=16;
iVar4=12;
iVar1=50;
break;
case 68:
StringCopy(&Var2, "LEGS_P0_16_13", 16);
iVar3=16;
iVar4=13;
iVar1=68;
break;
case 69:
StringCopy(&Var2, "LEGS_P0_16_14", 16);
iVar3=16;
iVar4=14;
iVar1=68;
break;
case 70:
StringCopy(&Var2, "LEGS_P0_16_15", 16);
iVar3=16;
iVar4=15;
iVar1=42;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P0_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=250;
break;
case 74:
StringCopy(&Var2, "LEGS_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=250;
break;
case 75:
StringCopy(&Var2, "LEGS_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=290;
break;
case 76:
StringCopy(&Var2, "LEGS_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=270;
break;
case 77:
StringCopy(&Var2, "LEGS_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=270;
break;
case 78:
StringCopy(&Var2, "LEGS_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=15;
break;
case 79:
StringCopy(&Var2, "LEGS_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=12;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "LEGS_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=118;
break;
case 83:
StringCopy(&Var2, "LEGS_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=110;
break;
case 84:
StringCopy(&Var2, "LEGS_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 85:
StringCopy(&Var2, "LEGS_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=95;
break;
case 86:
StringCopy(&Var2, "LEGS_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=95;
break;
case 87:
StringCopy(&Var2, "LEGS_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=98;
break;
case 88:
StringCopy(&Var2, "LEGS_P0_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=140;
break;
case 89:
StringCopy(&Var2, "LEGS_P0_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 90:
StringCopy(&Var2, "LEGS_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=150;
break;
case 91:
StringCopy(&Var2, "LEGS_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=130;
break;
case 92:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "LEGS_P0_27_0", 16);
iVar3=27;
iVar4=0;
break;
case 96:
StringCopy(&Var2, "LEGS_P0_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=45;
break;
case 97:
StringCopy(&Var2, "LEGS_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=48;
break;
case 98:
StringCopy(&Var2, "LEGS_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=48;
break;
case 99:
StringCopy(&Var2, "LEGS_P0_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=52;
break;
case 100:
StringCopy(&Var2, "LEGS_P0_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=52;
break;
case 101:
StringCopy(&Var2, "LEGS_P0_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=55;
break;
case 102:
StringCopy(&Var2, "LEGS_P0_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=55;
break;
case 103:
StringCopy(&Var2, "LEGS_P0_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=55;
break;
case 104:
StringCopy(&Var2, "LEGS_P0_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=58;
break;
case 105:
StringCopy(&Var2, "LEGS_P0_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=58;
break;
case 106:
StringCopy(&Var2, "LEGS_P0_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=60;
break;
case 107:
StringCopy(&Var2, "LEGS_P0_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=60;
break;
case 108:
StringCopy(&Var2, "LEGS_P0_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=62;
break;
case 109:
StringCopy(&Var2, "LEGS_P0_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=62;
break;
case 110:
StringCopy(&Var2, "LEGS_P0_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P0_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=65;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=29;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 113, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_233(int iParam0){
if(iParam0 < 60){
func_235(iParam0);
}else{
func_234(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_184(3, iParam0, 181, -1);
}}


void func_234(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "TORSO_P0_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "TORSO_P0_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=120;
break;
case 72:
StringCopy(&Var2, "TORSO_P0_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=120;
break;
case 73:
StringCopy(&Var2, "TORSO_P0_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "TORSO_P0_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=120;
break;
case 75:
StringCopy(&Var2, "TORSO_P0_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=120;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "TORSO_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 78:
StringCopy(&Var2, "TORSO_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=20;
break;
case 79:
StringCopy(&Var2, "TORSO_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=24;
break;
case 80:
StringCopy(&Var2, "TORSO_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=22;
break;
case 81:
StringCopy(&Var2, "TORSO_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=25;
break;
case 82:
StringCopy(&Var2, "TORSO_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=25;
break;
case 83:
StringCopy(&Var2, "TORSO_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=22;
break;
case 84:
StringCopy(&Var2, "TORSO_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=27;
break;
case 85:
StringCopy(&Var2, "TORSO_P0_17_0", 16);
iVar3=17;
iVar4=0;
break;
case 86:
StringCopy(&Var2, "TORSO_P0_17_1", 16);
iVar3=17;
iVar4=1;
break;
case 87:
StringCopy(&Var2, "TORSO_P0_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 88:
StringCopy(&Var2, "TORSO_P0_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=48;
break;
case 89:
StringCopy(&Var2, "TORSO_P0_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=40;
break;
case 90:
StringCopy(&Var2, "TORSO_P0_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=45;
break;
case 91:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "TORSO_P0_19_0", 16);
iVar3=19;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "TORSO_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=190;
break;
case 94:
StringCopy(&Var2, "TORSO_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=190;
break;
case 95:
StringCopy(&Var2, "TORSO_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=190;
break;
case 96:
StringCopy(&Var2, "TORSO_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=210;
break;
case 97:
StringCopy(&Var2, "TORSO_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 98:
StringCopy(&Var2, "TORSO_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 99:
StringCopy(&Var2, "TORSO_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=55;
break;
case 100:
StringCopy(&Var2, "TORSO_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 101:
StringCopy(&Var2, "TORSO_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=99;
break;
case 102:
StringCopy(&Var2, "TORSO_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=49;
break;
case 103:
StringCopy(&Var2, "TORSO_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=120;
break;
case 104:
StringCopy(&Var2, "TORSO_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=45;
break;
case 105:
StringCopy(&Var2, "TORSO_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=115;
break;
case 106:
StringCopy(&Var2, "TORSO_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=105;
break;
case 107:
StringCopy(&Var2, "TORSO_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=90;
break;
case 108:
StringCopy(&Var2, "TORSO_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=95;
break;
case 109:
StringCopy(&Var2, "TORSO_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=39;
break;
case 110:
StringCopy(&Var2, "TORSO_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=95;
break;
case 111:
StringCopy(&Var2, "TORSO_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=35;
break;
case 112:
StringCopy(&Var2, "TORSO_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=95;
break;
case 113:
StringCopy(&Var2, "TORSO_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 114:
StringCopy(&Var2, "TORSO_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=60;
break;
case 115:
StringCopy(&Var2, "TORSO_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=70;
break;
case 116:
StringCopy(&Var2, "TORSO_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 117:
StringCopy(&Var2, "TORSO_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=90;
break;
case 118:
StringCopy(&Var2, "TORSO_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 119:
StringCopy(&Var2, "TORSO_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=70;
break;
case 120:
StringCopy(&Var2, "TORSO_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=95;
break;
case 121:
StringCopy(&Var2, "TORSO_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=105;
break;
case 122:
StringCopy(&Var2, "TORSO_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=95;
break;
case 123:
StringCopy(&Var2, "TORSO_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=110;
break;
case 124:
StringCopy(&Var2, "TORSO_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=98;
break;
case 125:
StringCopy(&Var2, "TORSO_P0_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=88;
break;
case 126:
StringCopy(&Var2, "TORSO_P0_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=98;
break;
case 127:
StringCopy(&Var2, "TORSO_P0_21_14", 16);
iVar3=21;
iVar4=14;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "TORSO_P0_21_15", 16);
iVar3=21;
iVar4=15;
iVar1=98;
break;
case 129:
StringCopy(&Var2, "TORSO_P0_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 130:
StringCopy(&Var2, "TORSO_P0_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=4950;
break;
case 131:
StringCopy(&Var2, "TORSO_P0_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=4195;
break;
case 132:
StringCopy(&Var2, "TORSO_P0_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3195;
break;
case 133:
StringCopy(&Var2, "TORSO_P0_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=2950;
break;
case 134:
StringCopy(&Var2, "TORSO_P0_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=3950;
break;
case 135:
StringCopy(&Var2, "TORSO_P0_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=3200;
break;
case 136:
StringCopy(&Var2, "TORSO_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=3200;
break;
case 137:
StringCopy(&Var2, "TORSO_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=3200;
break;
case 138:
StringCopy(&Var2, "TORSO_P0_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=3200;
break;
case 139:
StringCopy(&Var2, "TORSO_P0_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=3200;
break;
case 140:
StringCopy(&Var2, "TORSO_P0_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=3200;
break;
case 141:
StringCopy(&Var2, "TORSO_P0_23_6", 16);
iVar3=23;
iVar4=6;
iVar1=3200;
break;
case 142:
StringCopy(&Var2, "TORSO_P0_23_7", 16);
iVar3=23;
iVar4=7;
iVar1=3200;
break;
case 143:
StringCopy(&Var2, "TORSO_P0_23_8", 16);
iVar3=23;
iVar4=8;
iVar1=3200;
break;
case 144:
StringCopy(&Var2, "TORSO_P0_23_9", 16);
iVar3=23;
iVar4=9;
iVar1=3200;
break;
case 145:
StringCopy(&Var2, "TORSO_P0_23_10", 16);
iVar3=23;
iVar4=10;
iVar1=3200;
break;
case 146:
StringCopy(&Var2, "TORSO_P0_23_11", 16);
iVar3=23;
iVar4=11;
iVar1=3200;
break;
case 147:
StringCopy(&Var2, "TORSO_P0_23_12", 16);
iVar3=23;
iVar4=12;
iVar1=3200;
break;
case 148:
StringCopy(&Var2, "TORSO_P0_23_13", 16);
iVar3=23;
iVar4=13;
iVar1=3200;
break;
case 149:
StringCopy(&Var2, "TORSO_P0_23_14", 16);
iVar3=23;
iVar4=14;
iVar1=3200;
break;
case 150:
StringCopy(&Var2, "TORSO_P0_23_15", 16);
iVar3=23;
iVar4=15;
iVar1=3200;
break;
case 151:
StringCopy(&Var2, "TORSO_P0_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=1350;
break;
case 152:
StringCopy(&Var2, "TORSO_P0_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=1400;
break;
case 153:
StringCopy(&Var2, "TORSO_P0_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=1200;
break;
case 154:
StringCopy(&Var2, "TORSO_P0_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=1250;
break;
case 155:
StringCopy(&Var2, "TORSO_P0_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=1350;
break;
case 156:
StringCopy(&Var2, "TORSO_P0_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=1300;
break;
case 157:
StringCopy(&Var2, "TORSO_P0_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=1380;
break;
case 158:
StringCopy(&Var2, "TORSO_P0_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=1340;
break;
case 159:
StringCopy(&Var2, "TORSO_P0_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=1380;
break;
case 160:
StringCopy(&Var2, "TORSO_P0_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=1250;
break;
case 161:
StringCopy(&Var2, "TORSO_P0_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=840;
break;
case 162:
StringCopy(&Var2, "TORSO_P0_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=840;
break;
case 163:
StringCopy(&Var2, "TORSO_P0_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=840;
break;
case 164:
StringCopy(&Var2, "TORSO_P0_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=840;
break;
case 165:
StringCopy(&Var2, "TORSO_P0_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=840;
break;
case 166:
StringCopy(&Var2, "TORSO_P0_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=840;
break;
case 167:
StringCopy(&Var2, "TORSO_P0_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=840;
break;
case 168:
StringCopy(&Var2, "TORSO_P0_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=840;
break;
case 169:
StringCopy(&Var2, "TORSO_P0_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 170:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "TORSO_P0_28_0", 16);
iVar3=28;
iVar4=0;
break;
case 172:
StringCopy(&Var2, "TORSO_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=130;
break;
case 173:
StringCopy(&Var2, "TORSO_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=110;
break;
case 174:
StringCopy(&Var2, "TORSO_P0_29_0", 16);
iVar3=29;
iVar4=0;
bVar0=true;
break;
case 175:
StringCopy(&Var2, "TORSO_P0_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=290;
break;
case 176:
StringCopy(&Var2, "TORSO_P0_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=320;
break;
case 177:
StringCopy(&Var2, "TORSO_P0_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=59;
break;
case 178:
StringCopy(&Var2, "TORSO_P0_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=55;
break;
case 179:
StringCopy(&Var2, "TORSO_P0_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=59;
break;
case 180:
StringCopy(&Var2, "TORSO_P0_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=49;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_235(int iParam0){
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
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=3500;
break;
case 3:
StringCopy(&Var2, "TORSO_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "TORSO_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "TORSO_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "TORSO_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "TORSO_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "TORSO_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "TORSO_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "TORSO_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "TORSO_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "TORSO_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "TORSO_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "TORSO_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "TORSO_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
iVar1=20;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
iVar1=18;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=2;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=3;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P0_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=19;
break;
case 22:
StringCopy(&Var2, "TORSO_P0_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=20;
break;
case 23:
StringCopy(&Var2, "TORSO_P0_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=22;
break;
case 24:
StringCopy(&Var2, "TORSO_P0_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=18;
break;
case 25:
StringCopy(&Var2, "TORSO_P0_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=39;
break;
case 26:
StringCopy(&Var2, "TORSO_P0_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=32;
break;
case 27:
StringCopy(&Var2, "TORSO_P0_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=35;
break;
case 28:
StringCopy(&Var2, "TORSO_P0_2_11", 16);
iVar3=2;
iVar4=11;
iVar1=35;
break;
case 29:
StringCopy(&Var2, "TORSO_P0_2_12", 16);
iVar3=2;
iVar4=12;
iVar1=210;
break;
case 30:
StringCopy(&Var2, "TORSO_P0_2_13", 16);
iVar3=2;
iVar4=13;
iVar1=250;
break;
case 31:
StringCopy(&Var2, "TORSO_P0_2_14", 16);
iVar3=2;
iVar4=14;
iVar1=290;
break;
case 32:
StringCopy(&Var2, "TORSO_P0_2_15", 16);
iVar3=2;
iVar4=15;
iVar1=310;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "TORSO_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 39:
StringCopy(&Var2, "TORSO_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=160;
break;
case 40:
StringCopy(&Var2, "TORSO_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=150;
break;
case 41:
StringCopy(&Var2, "TORSO_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=150;
break;
case 42:
StringCopy(&Var2, "TORSO_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=160;
break;
case 43:
StringCopy(&Var2, "TORSO_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=160;
break;
case 44:
StringCopy(&Var2, "TORSO_P0_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "TORSO_P0_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "TORSO_P0_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=52;
break;
case 47:
StringCopy(&Var2, "TORSO_P0_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=55;
break;
case 48:
StringCopy(&Var2, "TORSO_P0_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=55;
break;
case 49:
StringCopy(&Var2, "TORSO_P0_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "TORSO_P0_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=58;
break;
case 51:
StringCopy(&Var2, "TORSO_P0_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=62;
break;
case 52:
StringCopy(&Var2, "TORSO_P0_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=65;
break;
case 53:
StringCopy(&Var2, "TORSO_P0_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=65;
break;
case 54:
StringCopy(&Var2, "TORSO_P0_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=68;
break;
case 55:
StringCopy(&Var2, "TORSO_P0_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=68;
break;
case 56:
StringCopy(&Var2, "TORSO_P0_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=55;
break;
case 57:
StringCopy(&Var2, "TORSO_P0_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=62;
break;
case 58:
StringCopy(&Var2, "TORSO_P0_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=58;
break;
case 59:
StringCopy(&Var2, "TORSO_P0_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=58;
break;
default:
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_236(int iParam0){
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
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "HAIR_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
default:
func_184(iVar7, iParam0, 6, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_237(int iParam0){
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
iVar7=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_184(iVar7, iParam0, 7, -1);
return;
break;
}
func_176(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_238(){
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

int func_239(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 0;
break;
case joaat("player_one"):
return 1;
break;
case joaat("player_two"):
return 2;
break;
default:
break;
}
return 145;
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
var uVar11;
var uVar12;
var uVar13;
struct<14> Var14;
var uVar15;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
Global_78339++;
iVar5=-99;
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam5==0){
Global_78341[1 /*14*/]={
func_173(iVar10, iParam1, iParam2, -1) 
};
if(!func_257(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
func_255(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(iVar10==joaat("player_one")){
iVar5=func_48(iParam0, 8);
if(iVar5 !=9){
iVar5=-99;
}}
iVar6=func_48(iParam0, 9);
if(iVar10==joaat("player_zero")){
if(iVar6 >=9 && iVar6 <=14){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_one")){
if(iVar6 >=5 && iVar6 <=10){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_two")){
if((iVar6 >=9 && iVar6 <=14) || (iVar6 >=15 && iVar6 <=16)){
}else{
iVar6=-99;
}}
iVar7=func_51(iParam0, 1);
if(!func_165(iVar10, 14, iVar7, -1)){
iVar7=-99;
}
iVar8=func_51(iParam0, 0);
if(!func_135(iVar10, 14, iVar8, -1) && !func_164(iVar10, 14, iVar8, -1)){
iVar8=-99;
}
if(iVar10==joaat("player_one")){
iVar9=func_51(iParam0, 2);
}}
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar11=15;
if(iParam5==1){
uVar11={
Global_78384 
};
}else{
uVar11={
func_170(iVar10, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar11[iVar0] !=-99){
Global_78341[1 /*14*/]={
func_173(iVar10, iVar0, uVar11[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
if(iVar0==13){
uVar12=9;
if(iParam5==1){
uVar12={
Global_78401 
};
}
else{
uVar12={
func_167(iVar10, uVar11[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_173(iVar10, 14, uVar12[iVar1], -1) 
};
func_253(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_255(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_245(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_240(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iVar0 !=14 && iVar0 !=12){
if((iVar10==joaat("player_one") && iVar0==2) && uVar11[iVar0]==20){
func_244(iVar10, 2, 20, &iVar4);
}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_50(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_50(iVar0)));
}
else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_50(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
func_255(iVar0);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_245(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
if(iVar3 !=-99){
func_240(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_173(iVar10, iVar0, func_260(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
if(iVar0==2){
if(iVar10==joaat("player_one")){
if(func_258(iParam0, iVar10, &iVar4, 1)){
func_240(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}else{
uVar13={
func_170(iVar10, 0) 
};
func_240(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
iVar0++;
}
if(iParam7==1){
Var14={
func_173(iVar10, 8, iVar5, -1) 
};
if(iVar5 !=-99){
if(func_163(iVar10, iParam2, 8, iVar5, &uVar11, &Var14)){
func_240(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_173(iVar10, 9, iVar6, -1) 
};
if(iVar6 !=-99){
if(func_163(iVar10, iParam2, 9, iVar6, &uVar11, &Var14)){
func_240(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_173(iVar10, 14, iVar7, -1) 
};
if(iVar7 !=-99){
if(func_163(iVar10, iParam2, 14, iVar7, &uVar11, &Var14)){
func_240(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_173(iVar10, 14, iVar8, -1) 
};
if(iVar8 !=-99){
if(func_163(iVar10, iParam2, 14, iVar8, &uVar11, &Var14)){
func_240(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_173(iVar10, 14, iVar9, -1) 
};
if(iVar9 !=-99){
if(func_163(iVar10, iParam2, 14, iVar9, &uVar11, &Var14)){
func_240(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==13){
uVar15={
func_167(iVar10, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_173(iVar10, 14, uVar15[iVar1], -1) 
};
func_253(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_255(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_245(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_240(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iParam1==14){
func_253(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_255(iParam1);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_245(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_240(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}else{
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_50(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_50(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_50(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_245(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_240(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
if(iParam6==0){
func_241(iVar10, iParam1, iParam2);
}}
if(Global_78339==1){
if(func_258(iParam0, iVar10, &iVar4, 0)){
func_240(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_161(iParam0, iVar10, &iVar4)){
func_240(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
Global_78339=(Global_78339 - 1);
return 1;
}


void func_241(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam0==joaat("player_zero")){
iVar0=5;
}elseif(iParam0==joaat("player_one")){
iVar0=2;
}elseif(iParam0==joaat("player_two")){
iVar0=4;
}
if(func_243(iParam0, 12, iVar0)){
if(func_242(iParam0, iParam1, iParam2)){
iVar1=func_239(iParam0);
if(iParam1==3){
Global_113648.f_2365.f_539.f_196[iVar1]=iParam2;
}elseif(iParam1==4){
Global_113648.f_2365.f_539.f_200[iVar1]=iParam2;
}}}}

int func_242(int iParam0, int iParam1, int iParam2){
if(iParam0==joaat("player_zero")){
if(iParam1==4){
if(iParam2 >=47 && iParam2 <=54){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=77 && iParam2 <=84){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==4){
if(iParam2 >=14 && iParam2 <=21){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=41 && iParam2 <=56){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==4){
if(iParam2 >=18 && iParam2 <=29){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=54 && iParam2 <=69){
return 1;
}}}
return 0;
}


bool func_243(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_173(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==7 || iParam2==23){
*iParam3=1;
}
break;
case 9:
if(iParam2==8 || (iParam2 >=9 && iParam2 <=14)){
*iParam3=1;
}
break;
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=1;
}
break;
case 14:
if((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=40 && iParam2 <=41)) || iParam2==46){
*iParam3=1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 2:
if(iParam2==20){
*iParam3=20;
}
break;
case 8:
if(iParam2==4){
*iParam3=19;
}
break;
case 9:
if(iParam2 >=5 && iParam2 <=10){
*iParam3=19;
}
break;
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=19;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=19;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==7){
*iParam3=2;
}
break;
case 9:
if((iParam2 >=9 && iParam2 <=14) || (iParam2 >=15 && iParam2 <=16)){
*iParam3=2;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=2;
}
break;
case 14:
if((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=56 && iParam2 <=57)) || iParam2==62){
*iParam3=2;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_239(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
iVar0=-99;
if(iParam4==0){
switch (iParam2){
case 2:
iVar1=func_48(iParam0, 1);
iVar0=func_252(iParam1, iParam3, iVar1);
break;
case 1:
iVar2=func_48(iParam0, 2);
iVar0=func_252(iParam1, iVar2, iParam3);
break;
}}elseif(iParam4==2){
func_244(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==1){
func_251(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==6){
if(iParam2==4){
if(func_250(iParam1, iParam3, &iVar0)){
}}}else{
switch (iParam1){
case joaat("player_zero"):
switch (iParam4){
case 3:
switch (iParam2){
case 10:
switch (iParam3){
case 36:
iVar0=17;
break;
case 37:
iVar0=17;
break;
case 38:
iVar0=18;
break;
case 39:
iVar0=18;
break;
case 40:
iVar0=19;
break;
case 41:
iVar0=19;
break;
case 42:
iVar0=20;
break;
case 43:
iVar0=20;
break;
}
break;
case 11:
if(iParam3 >=2 && iParam3 <=7){
if(!func_249(iParam0, 3, 44, 59)){
iVar0=44;
}}elseif(((iParam3 >=8 && iParam3 <=17) || (iParam3 >=18 && iParam3 <=27)) || (iParam3 >=28 && iParam3 <=43)){
if(!func_249(iParam0, 3, 135, 150)){
iVar0=func_248(iParam1, 3, 135, 150);
}}
break;
}
break;
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 63:
iVar0=4;
break;
case 61:
iVar0=3;
break;
case 16:
iVar0=1;
break;
case 114:
iVar0=15;
break;
case 115:
iVar0=17;
break;
case 116:
iVar0=16;
break;
case 117:
iVar0=18;
break;
case 118:
iVar0=20;
break;
case 119:
iVar0=19;
break;
case 125:
iVar0=21;
break;
case 120:
iVar0=22;
break;
case 124:
iVar0=23;
break;
case 126:
iVar0=24;
break;
case 121:
iVar0=25;
break;
case 127:
iVar0=26;
break;
case 128:
iVar0=27;
break;
case 85:
iVar0=6;
break;
case 77:
iVar0=7;
break;
case 78:
iVar0=8;
break;
case 79:
iVar0=9;
break;
case 80:
iVar0=10;
break;
case 81:
iVar0=11;
break;
case 82:
iVar0=12;
break;
case 83:
iVar0=13;
break;
case 84:
iVar0=14;
break;
case 21:
iVar0=31;
break;
case 22:
iVar0=30;
break;
case 23:
iVar0=29;
break;
case 24:
iVar0=28;
break;
case 25:
iVar0=33;
break;
case 26:
iVar0=35;
break;
case 27:
iVar0=34;
break;
case 28:
iVar0=32;
break;
default:
if(iParam3 >=17 && iParam3 <=20){
}
else{
iVar0=0;
}
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 11:
if(iParam2==3){
if((iParam3 >=44 && iParam3 <=59) || (iParam3 >=135 && iParam3 <=150)){
}else{
iVar0=0;
}
}
elseif(iParam2==10){
if(iParam3 >=36 && iParam3 <=43){
iVar0=0;
}
}
break;
}
break;
case joaat("player_one"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 17:
iVar0=2;
break;
case 90:
iVar0=1;
break;
case 268:
iVar0=3;
break;
case 269:
iVar0=5;
break;
case 270:
iVar0=4;
break;
case 271:
iVar0=6;
break;
case 272:
iVar0=8;
break;
case 273:
iVar0=7;
break;
case 279:
iVar0=9;
break;
case 274:
iVar0=10;
break;
case 278:
iVar0=11;
break;
case 280:
iVar0=12;
break;
case 275:
iVar0=13;
break;
case 281:
iVar0=14;
break;
case 282:
iVar0=15;
break;
case 107:
iVar0=16;
break;
case 108:
iVar0=17;
break;
case 109:
iVar0=18;
break;
case 110:
iVar0=19;
break;
case 111:
iVar0=20;
break;
case 112:
iVar0=21;
break;
case 113:
iVar0=22;
break;
case 114:
iVar0=23;
break;
case 115:
iVar0=24;
break;
case 116:
iVar0=25;
break;
case 117:
iVar0=52;
break;
case 118:
iVar0=27;
break;
case 119:
iVar0=28;
break;
case 120:
iVar0=29;
break;
case 121:
iVar0=30;
break;
case 122:
iVar0=31;
break;
case 296:
iVar0=32;
break;
case 297:
iVar0=33;
break;
case 298:
iVar0=34;
break;
case 299:
iVar0=35;
break;
case 300:
iVar0=36;
break;
case 301:
iVar0=37;
break;
case 302:
iVar0=38;
break;
case 309:
iVar0=39;
break;
case 310:
iVar0=40;
break;
case 311:
iVar0=41;
break;
case 312:
iVar0=42;
break;
case 313:
iVar0=43;
break;
case 314:
iVar0=44;
break;
case 315:
iVar0=45;
break;
case 316:
iVar0=46;
break;
case 317:
iVar0=51;
break;
default:
iVar0=0;
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 3:
switch (iParam2){
case 11:
if(iParam3 >=47 && iParam3 <=62){
if(!func_249(iParam0, 3, 209, 222)){
iVar0=func_248(iParam1, 3, 209, 222);
}}elseif((iParam3 >=1 && iParam3 <=4) || (iParam3 >=5 && iParam3 <=8)){
if(!func_249(iParam0, 3, 243, 258)){
if(iParam3==1 || iParam3==5){
iVar0=func_248(iParam1, 3, 243, 246);
}
elseif(iParam3==2 || iParam3==6){
iVar0=func_248(iParam1, 3, 247, 250);
}
elseif(iParam3==3 || iParam3==7){
iVar0=func_248(iParam1, 3, 251, 254);
}
elseif(iParam3==4 || iParam3==8){
iVar0=func_248(iParam1, 3, 255, 258);
}
}}elseif(iParam3==41 || iParam3==42){
if(!func_249(iParam0, 3, 176, 191) && !func_249(iParam0, 3, 227, 242)){
iVar0=func_248(iParam1, 3, 176, 191);
}}
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
iVar5=iParam3;
iVar4=func_48(iParam0, 3);
}elseif(iParam2==3){
iVar4=iParam3;
iVar5=func_48(iParam0, 11);
iVar5=func_247(iParam1, iVar4, iVar5, 0);
}
iVar3=func_48(iParam0, 8);
if(((iVar5 >=5 && iVar5 <=8) || (iVar5 >=25 && iVar5 <=40)) || (iVar5 >=42 && iVar5 <=43)){
if(!func_246(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)){
if(iVar6 !=-99){
iVar0=iVar6;
}}}elseif(((iVar3 >=27 && iVar3 <=42) || (iVar3 >=43 && iVar3 <=58)) || (iVar3 >=59 && iVar3 <=74)){
iVar0=26;
}
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=209 && iParam3 <=222){
}elseif(((iParam3 >=176 && iParam3 <=191) || (iParam3 >=227 && iParam3 <=242)) || (iParam3 >=243 && iParam3 <=258)){
iVar7=func_48(iParam0, 8);
iVar8=func_48(iParam0, 11);
if(((iVar7 >=27 && iVar7 <=42) || (iVar7 >=43 && iVar7 <=58)) || (iVar7 >=59 && iVar7 <=74)){
iVar0=func_247(iParam1, iParam3, iVar8, 0);
}else{
iVar0=func_247(iParam1, iParam3, iVar8, 1);
}}elseif(iParam3 >=41 && iParam3 <=56){
iVar0=45;
}elseif(iParam3 >=223 && iParam3 <=226){
iVar0=44;
}else{
iVar0=0;
}
}
elseif(iParam2==8){
if(((iParam3 >=27 && iParam3 <=42) || (iParam3 >=43 && iParam3 <=58)) || (iParam3 >=59 && iParam3 <=74)){
iVar9=func_48(iParam0, 11);
iVar0=func_247(iParam1, -99, iVar9, 0);
}
}
break;
}
break;
case joaat("player_two"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 50:
iVar0=3;
break;
case 81:
iVar0=5;
break;
case 82:
iVar0=6;
break;
case 83:
iVar0=7;
break;
case 84:
iVar0=10;
break;
case 85:
iVar0=9;
break;
case 86:
iVar0=8;
break;
case 92:
iVar0=22;
break;
case 87:
iVar0=23;
break;
case 91:
iVar0=24;
break;
case 93:
iVar0=25;
break;
case 88:
iVar0=26;
break;
case 94:
iVar0=27;
break;
case 120:
iVar0=11;
break;
case 121:
iVar0=13;
break;
case 122:
iVar0=14;
break;
case 124:
iVar0=12;
break;
case 126:
iVar0=18;
break;
case 128:
iVar0=17;
break;
case 130:
iVar0=19;
break;
case 131:
iVar0=16;
break;
case 134:
iVar0=15;
break;
case 135:
iVar0=20;
break;
default:
iVar0=0;
break;
}
break;
}
break;
}
break;
}}
return iVar0;
}

int func_246(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4){
int iVar0;
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
*uParam4=0;
if(iParam1 >=27 && iParam1 <=42){
if(iParam2 !=-99){
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
}else{
if(iParam2 >=42 && iParam2 <=43){
if(iParam3 >=176 && iParam3 <=191){
iVar0=(iParam1 - 27);
*uParam4=(59 + iVar0);
}elseif(iParam3 >=227 && iParam3 <=242){
iVar0=(iParam1 - 27);
*uParam4=(43 + iVar0);
}
}
return 0;
}}
if(iParam3 !=-99){
if(((iParam3 >=227 && iParam3 <=242) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=243 && iParam3 <=258)){
}else{
return 0;
}}}elseif(iParam1 >=43 && iParam1 <=58){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 43);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242){
}else{
if(iParam3 >=176 && iParam3 <=191){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 43);
*uParam4=(59 + iVar0);
}
}
return 0;
}}}elseif(iParam1 >=59 && iParam1 <=74){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=176 && iParam3 <=191){
}else{
if(iParam3 >=227 && iParam3 <=242){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 59);
*uParam4=(43 + iVar0);
}
}
elseif((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}}
break;
case joaat("player_two"):
if(iParam1==12){
if(iParam3 !=241){
return 0;
}}
break;
}
return 1;
}

int func_247(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam1 >=243 && iParam1 <=246){
if(iParam3==1){
return 1;
}else{
return 5;
}}elseif(iParam1 >=247 && iParam1 <=250){
if(iParam3==1){
return 2;
}else{
return 6;
}}elseif(iParam1 >=251 && iParam1 <=254){
if(iParam3==1){
return 3;
}else{
return 7;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif((iParam1 >=176 && iParam1 <=191) || (iParam1 >=227 && iParam1 <=242)){
if(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
if(iParam3==1){
iParam2=func_248(iParam0, 11, 9, 24);
}else{
iParam2=func_248(iParam0, 11, 25, 40);
}
if(iParam2==-99){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
return iParam2;
}}}elseif(iParam2 >=1 && iParam2 <=4){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 1);
iParam2=(5 + iVar0);
return iParam2;
}}elseif(iParam2 >=5 && iParam2 <=8){
if(iParam3==1){
iVar0=(iParam2 - 5);
iParam2=(1 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}
return -99;
}

int func_248(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=iParam2;
while (iVar0 <=(iParam3 - 1)){
iVar1=iVar0;
if(func_243(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar0++;
}
return -99;
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_48(iParam0, iParam1);
if(iVar0 >=iParam2 && iVar0 <=iParam3){
return 1;
}
return 0;
}

int func_250(int iParam0, int iParam1, int iParam2){
*iParam2=-99;
switch (iParam0){
case joaat("player_zero"):
if((((((((((((((((((iParam1==16 || iParam1==17) || iParam1==21) || iParam1==22) || iParam1==32) || (iParam1 >=34 && iParam1 <=39)) || (iParam1 >=41 && iParam1 <=45)) || iParam1==46) || (iParam1 >=47 && iParam1 <=54)) || (iParam1 >=55 && iParam1 <=70)) || (iParam1 >=72 && iParam1 <=79)) || iParam1==80) || (iParam1 >=81 && iParam1 <=83)) || (iParam1 >=84 && iParam1 <=87)) || iParam1==88) || (iParam1 >=89 && iParam1 <=91)) || iParam1==95) || (iParam1 >=96 && iParam1 <=111)) || iParam1==112){
*iParam2=6;
return 1;
}
break;
case joaat("player_one"):
if((((((iParam1==12 || (iParam1 >=14 && iParam1 <=21)) || iParam1==32) || iParam1==52) || (iParam1 >=69 && iParam1 <=70)) || iParam1==71) || (iParam1 >=72 && iParam1 <=77)){
*iParam2=17;
return 1;
}
break;
case joaat("player_two"):
if(((((((((((((((iParam1==4 || iParam1==5) || iParam1==6) || iParam1==7) || iParam1==14) || (iParam1 >=18 && iParam1 <=29)) || iParam1==31) || iParam1==32) || iParam1==33) || iParam1==34) || (iParam1 >=35 && iParam1 <=42)) || (iParam1 >=43 && iParam1 <=53)) || (iParam1 >=54 && iParam1 <=61)) || (iParam1 >=71 && iParam1 <=80)) || (iParam1 >=81 && iParam1 <=90)) || (iParam1 >=94 && iParam1 <=103)){
*iParam2=8;
return 1;
}
break;
}
return 0;
}

int func_251(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=38 && iParam2 <=39)) || (iParam2 >=40 && iParam2 <=41)) || (iParam2 >=42 && iParam2 <=44)){
*iParam3=0;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=0;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=0;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 9:
if(iParam2 >=15 && iParam2 <=16){
*iParam3=0;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=54 && iParam2 <=55)) || (iParam2 >=56 && iParam2 <=57)) || (iParam2 >=58 && iParam2 <=60)){
*iParam3=0;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_239(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_252(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==1){
if(iParam2==0){
return 1;
}elseif(iParam2==4){
return 5;
}else{
return 3;
}}elseif(iParam2==0){
return 0;
}elseif(iParam2==4){
return 4;
}else{
return 2;
}
break;
case joaat("player_one"):
if(iParam1 >=0 && iParam1 <=15){
if(iParam2==0){
return 0;
}else{
return 3;
}}elseif(iParam1 >=16 && iParam1 <=17){
if(iParam2==0){
return 2;
}else{
return 5;
}}elseif(iParam1==18){
if(iParam2==0){
return 6;
}else{
return 7;
}}elseif(iParam1==19){
if(iParam2==0){
return 1;
}else{
return 4;
}}elseif(iParam2==0){
return 1;
}else{
return 4;
}
break;
case joaat("player_two"):
if(iParam1==2){
if(iParam2==0){
return 2;
}else{
return 3;
}}elseif(iParam1==3){
if(iParam2==0){
return 4;
}else{
return 6;
}}elseif(iParam1==8){
return 5;
}elseif(iParam2==0){
return 0;
}else{
return 1;
}
break;
}
return -99;
}


void func_253(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam2==-1){
PED::CLEAR_PED_PROP(iParam0, iParam1, 1);
if(iParam1==0){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}else{
PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
if(iParam1==0){
iVar0=func_52(iParam0, iParam2, iParam3, iParam1);
if(func_254(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}}}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_136(iParam0, iParam2, 14, 3);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_136(iParam0, iParam2, 14, 4);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
}
return 0;
}


void func_255(int iParam0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
func_180(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_256(Global_2883588, 2, 1, 1, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_256(Global_2883588, 2, 1, 1, -1);
}else{
func_256(Global_2883588, 2, 1, 1, -1);
}}}


void func_256(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_182(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3)){
uVar3=func_17(iVar2, iVar0, 0);
MISC::SET_BIT(&uVar3, iVar1);
func_647(iVar2, uVar3, iVar0, 1, 0);
}}

int func_257(int iParam0){
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam0==1){
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2)){
return 0;
}}
return 1;
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_239(iParam1);
if(iVar0 >=3 || iVar0 < 0){
return 0;
}
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_60 !=-99){
if(!func_162(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_61, Global_113648.f_2365.f_539[iVar0 /*65*/].f_60) || iParam3==1){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=2;
return 1;
}}
return 0;
}


void func_259(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < 12){
Global_113648.f_2365.f_539[bParam0 /*65*/].f_13[iVar0]=0;
Global_113648.f_2365.f_539[bParam0 /*65*/][iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
Global_113648.f_2365.f_539[bParam0 /*65*/].f_39[iVar0]=-1;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_49[iVar0]=-1;
iVar0++;
}
switch (bParam0){
case 0:
Global_113648.f_2365.f_539[bParam0 /*65*/].f_59=0;
break;
case 1:
Global_113648.f_2365.f_539[1 /*65*/].f_13[3]=8;
Global_113648.f_2365.f_539[1 /*65*/].f_13[4]=8;
Global_113648.f_2365.f_539[1 /*65*/].f_13[6]=6;
Global_113648.f_2365.f_539[1 /*65*/].f_13[8]=14;
Global_113648.f_2365.f_539[1 /*65*/].f_13[2]=0;
Global_113648.f_2365.f_539[1 /*65*/][2]=0;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_59=0;
break;
case 2:
Global_113648.f_2365.f_539[2 /*65*/].f_13[3]=0;
Global_113648.f_2365.f_539[2 /*65*/].f_13[4]=23;
Global_113648.f_2365.f_539[2 /*65*/].f_13[6]=10;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_59=0;
break;
}
Global_113648.f_2365.f_539[bParam0 /*65*/].f_60=-99;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_61=2;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_62=0;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[bParam0 /*65*/].f_64=1;
Global_100406[0 /*65*/]={
Global_113648.f_2365.f_539[0 /*65*/] 
};
Global_100406[1 /*65*/]={
Global_113648.f_2365.f_539[1 /*65*/] 
};
Global_100406[2 /*65*/]={
Global_113648.f_2365.f_539[2 /*65*/] 
};
}

int func_260(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_162(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_162(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_51(iParam0, iParam2);
}}else{
return func_48(iParam0, iParam1);
}}
return -99;
}


void func_261(int iParam0){
struct<50> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
float fVar5;
int iVar6;
int iVar7;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
Var0=12;
Var0.f_13=12;
Var0.f_26=12;
Var0.f_39=9;
Var0.f_49=9;
PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false, 1);
PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
if(PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}
PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID(), 1);
func_309(&Var0, -1);
func_153(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("shrink_head"), 0)){
iVar2=func_17(2100, -1, 0);
iVar3=func_17(2101, -1, 0);
iVar4=func_17(2102, -1, 0);
fVar5=func_308(135, -1);
iVar6=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
if(iVar6==joaat("mp_m_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
}elseif(iVar6==joaat("mp_f_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 21, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
}
iVar7=0;
while (iVar7 < 20){
PED::SET_PED_MICRO_MORPH(PLAYER::PLAYER_PED_ID(), iVar7, 0f);
iVar7++;
}}else{
func_297(PLAYER::PLAYER_PED_ID(), -1);
}
func_296(0);
func_262(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
func_62(1073358597, func_63(1, 1));
}}


void func_262(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
struct<9> Var1;
int iVar2;
bool bVar3;
bool bVar4;
bool bVar5;
int iVar6;
int iVar7;
int iVar8;
struct<8> Var9;
int iVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=Global_78338;
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
iVar2=func_47(iParam0);
bVar3=func_291(iParam0, 0);
bVar4=func_283(iParam0);
bVar5=func_282(iParam0, iParam3);
if(bParam1){
bVar4=true;
}
if(bParam2){
bVar4=false;
}
iVar6=0;
while (iVar6 < 127){
if(func_31(iVar6, iVar0)){
if(func_38(&Var1, iVar6, iVar2, iParam0, -1)){
if(func_279(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
}}}
iVar6++;
}
if(func_31(123, iVar0)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
}}
iVar8=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
iVar7=0;
while (iVar7 < iVar8){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0)){
iVar10=(129 + iVar7);
if(func_31(iVar10, iVar0)){
if(func_279(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5)){
if(!func_264(Var9.f_2, Var9.f_3, iVar10)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
func_263(iParam0, Var9.f_2, Var9.f_3);
}
}}}}
iVar7++;
}}}


void func_263(int iParam0, int iParam1, int iParam2){
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

int func_264(int iParam0, int iParam1, int iParam2){
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
if(func_278(36717, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-507124931);
break;
case -187038898:
case 524638244:
if(func_278(36767, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-187038898);
break;
case 1797082704:
case -757817895:
if(func_278(36766, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1797082704);
break;
case 1959890413:
case 1506629605:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1959890413);
break;
case 1167984459:
case 568901597:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1167984459);
break;
case 1006005360:
case 1403427788:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1006005360);
break;
case -1295693571:
case -1940685798:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1295693571);
break;
case -1825141795:
case 1441861967:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1825141795);
break;
case 61080464:
case -1941007133:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==61080464);
break;
case -1622071979:
case -1216457341:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1622071979);
break;
case -899024637:
case 141030546:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-899024637);
break;
case -569499773:
case 2065160600:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-569499773);
break;
case -665339429:
case 222569387:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-665339429);
break;
case 858185772:
case -1269669251:
if(Global_262145.f_34056){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==858185772);
break;
}
break;
}
switch (iParam0){
case 987639353:
switch (iParam1){
case 1529075272:
case 28812113:
if(func_278(34505, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1529075272);
break;
case 1769388797:
case 183205348:
if(func_278(34375, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1769388797);
break;
}
break;
}
switch (iParam0){
case joaat("mptuner_overlays"):
switch (iParam1){
case -129339642:
case 2021781367:
if(func_274(116, -1) >=func_273(116, 5, 9) || func_278(31760, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-129339642);
break;
case 887263619:
case -436866133:
if(func_272(123, -1) || func_278(31761, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==887263619);
break;
case -598443208:
case 457275657:
if(func_272(124, -1) || func_278(31762, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-598443208);
break;
case -619123295:
case -250832592:
if(func_272(125, -1) || func_278(31763, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-619123295);
break;
case -2139930425:
case -798760789:
if(func_272(126, -1) || func_278(31764, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-2139930425);
break;
case 991513037:
case -1634791241:
if(func_278(31768, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==991513037);
break;
case -675149090:
case -1227437948:
if(func_278(31769, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-675149090);
break;
case -1686814509:
case -1408179706:
if(func_278(31770, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1686814509);
break;
case 2138708412:
case -1894139601:
if(func_278(31771, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==2138708412);
break;
case 205793848:
case -786254870:
if(func_278(31772, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==205793848);
break;
case 1325175663:
case -773154515:
if(func_278(31773, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1325175663);
break;
case -368088972:
case 1778247767:
if(func_278(31774, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-368088972);
break;
case -1771053026:
case -648092145:
if(func_278(31775, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1771053026);
break;
}
break;
}
switch (iParam0){
case joaat("mpheist4_overlays"):
switch (iParam1){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
if(func_278(30533, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_030_M"));
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
if(func_278(30534, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_032_M"));
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
if(func_278(30535, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_028_M"));
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
if(func_278(30536, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_029_M"));
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
if(func_278(30537, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_031_M"));
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
if(func_278(30538, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_022_M"));
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
if(func_278(30539, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_023_M"));
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
if(func_278(30540, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_020_M"));
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
if(func_278(30541, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_021_M"));
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
if(func_278(30542, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_003_M"));
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
if(func_278(30543, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_004_M"));
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
if(func_278(30544, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_005_M"));
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
if(func_278(30545, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_006_M"));
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
if(func_278(30546, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_027_M"));
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
if(func_278(30547, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_026_M"));
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
if(func_278(30548, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_025_M"));
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
if(func_278(30549, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_024_M"));
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
if(func_278(30550, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_002_M"));
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
if(func_278(30551, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_001_M"));
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
if(func_278(30552, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_000_M"));
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
if(func_278(30553, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_007_M"));
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
if(func_278(30554, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_008_M"));
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
if(func_278(30555, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_009_M"));
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
if(func_278(30556, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_010_M"));
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
if(func_278(30557, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_011_M"));
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
if(func_278(30524, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_012_M"));
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
if(func_278(30525, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_013_M"));
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
if(func_278(30526, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_014_M"));
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
if(func_278(30527, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_015_M"));
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
if(func_278(30528, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_016_M"));
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
if(func_278(30529, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_017_M"));
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
if(func_278(30530, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_018_M"));
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
if(func_278(30531, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_019_M"));
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
if(func_278(30532, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_033_M"));
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
if(func_278(30570, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_045_M"));
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
if(func_278(30571, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_046_M"));
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
if(func_278(30568, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_048_M"));
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
if(func_278(30569, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_047_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_049_F"):
if(func_278(30634, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_049_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_051_F"):
if(func_278(30635, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_051_M"));
break;
case joaat("MP_Heist4_Tee_053_M"):
case joaat("MP_Heist4_Tee_053_F"):
if(func_278(30636, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_053_M"));
break;
case joaat("MP_Heist4_Tee_054_M"):
case joaat("MP_Heist4_Tee_054_F"):
if(func_278(30637, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_054_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
if(func_278(30703, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_055_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
if(func_278(30704, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_057_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
if(func_278(30700, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_059_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
if(func_278(30701, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_061_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
if(func_278(30702, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_063_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
if(func_278(30699, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_065_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -1265443416:
case 676807987:
if(func_278(30260, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1265443416);
break;
case 1888753218:
case 272160153:
if(func_278(30261, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1888753218);
break;
case -552467991:
case 1593344440:
if(func_278(30262, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-552467991);
break;
case -1655919948:
case 546222390:
if(func_278(30263, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1655919948);
break;
case -917106601:
case 1983375900:
if(func_278(30264, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-917106601);
break;
case 1595446967:
case -620589387:
if(func_278(30265, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1595446967);
break;
case -530593323:
case 383923929:
if(func_278(30266, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-530593323);
break;
case 561619447:
case -1703406594:
if(func_278(30267, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==561619447);
break;
case -1913656173:
case -398286533:
if(func_278(30268, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1913656173);
break;
case -1766901922:
case -80478106:
if(func_278(30269, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1766901922);
break;
case 2091781849:
case 1835331655:
if(func_278(30270, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==2091781849);
break;
case 1824588341:
case -1650596870:
if(func_278(30271, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1824588341);
break;
case 242597641:
case 1231926496:
if(func_278(30272, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==242597641);
break;
case 566785691:
case -1506181253:
if(func_278(30273, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==566785691);
break;
case -2091312957:
case -1737145605:
if(func_278(30274, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-2091312957);
break;
case -2079214831:
case 1673851512:
if(func_278(30275, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-2079214831);
break;
case 1359156274:
case 1023339598:
if(func_278(30276, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1359156274);
break;
case 1904247246:
case -163738770:
if(func_278(30277, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1904247246);
break;
case -1351518396:
case 1863218823:
if(func_278(30278, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1351518396);
break;
case -797874817:
case 333966447:
if(func_278(30279, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-797874817);
break;
case -385507297:
case 1412626052:
if(func_278(30280, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-385507297);
break;
case 2011910758:
case -39100956:
if(func_278(30281, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==2011910758);
break;
case -1953985443:
case 1631533003:
if(func_278(30282, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1953985443);
break;
case -1124222352:
case 1493430918:
if(func_278(30283, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1124222352);
break;
case -1806994767:
case -196693334:
if(func_278(30284, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1806994767);
break;
case -1445761968:
case 553507495:
if(func_278(30285, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1445761968);
break;
case -89186417:
case 2003474700:
if(func_278(30286, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-89186417);
break;
case -308083083:
case 1121792228:
if(func_278(30287, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-308083083);
break;
case 667714507:
case -1424651669:
if(func_278(30288, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==667714507);
break;
case -1610210252:
case -1454164346:
if(func_278(30289, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1610210252);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -417116499:
case -779574408:
if(func_278(28255, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-417116499);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case 1246110729:
case -1361908447:
if(func_272(89, -1) || func_278(30254, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==1246110729);
break;
case 461575135:
case 1250161120:
if(func_272(90, -1) || func_278(30255, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==461575135);
break;
case -386163163:
case 1288201657:
if(func_272(92, -1) || func_278(30256, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-386163163);
break;
case -1414541879:
case 111412152:
if((((func_272(89, -1) && func_272(90, -1)) && func_272(92, -1)) && func_272(91, -1)) || func_278(30257, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==-1414541879);
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_001_F"):
case joaat("mpHeist3_Tee_001_M"):
if(func_272(78, -1) || func_278(28199, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_001_M"));
break;
case joaat("mpHeist3_Tee_000_F"):
case joaat("mpHeist3_Tee_000_M"):
if(((func_272(77, -1) && func_272(78, -1)) && func_274(92, -1) >=func_273(92, 5, 9)) || func_278(28200, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_000_M"));
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
if(((func_274(93, -1) >=func_273(93, 5, 9) && func_272(79, -1)) && func_272(80, -1)) || func_278(28204, -1)){
return 0;
}
return !func_275(iParam2, iParam1, ((iParam1==joaat("mpHeist3_Tee_007_M") || iParam1==joaat("mpHeist3_Tee_008_M")) || iParam1==joaat("mpHeist3_Tee_009_M")));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_004_F"):
case joaat("mpHeist3_Tee_004_M"):
if(func_272(81, -1) || func_278(28206, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_004_M"));
break;
case joaat("mpHeist3_Tee_005_F"):
case joaat("mpHeist3_Tee_005_M"):
if(func_274(94, -1) >=func_273(94, 5, 9) || func_278(28207, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_005_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_006_F"):
case joaat("mpHeist3_Tee_006_M"):
if(((func_272(84, -1) && func_272(85, -1)) && func_274(97, -1) >=func_273(97, 5, 9)) || func_278(28212, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_006_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_002_F"):
case joaat("mpHeist3_Tee_002_M"):
if(func_278(28249, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_002_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_013_F"):
case joaat("mpHeist3_Tee_013_M"):
if(func_278(28183, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_013_M"));
break;
case joaat("mpHeist3_Tee_014_F"):
case joaat("mpHeist3_Tee_014_M"):
if(func_278(28182, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_014_M"));
break;
case joaat("mpHeist3_Tee_015_F"):
case joaat("mpHeist3_Tee_015_M"):
if(func_278(28184, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_015_M"));
break;
case joaat("mpHeist3_Tee_016_F"):
case joaat("mpHeist3_Tee_016_M"):
if(func_278(28181, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_016_M"));
break;
case joaat("mpHeist3_Tee_017_F"):
case joaat("mpHeist3_Tee_017_M"):
if(func_278(28178, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_017_M"));
break;
case joaat("mpHeist3_Tee_018_F"):
case joaat("mpHeist3_Tee_018_M"):
if(func_278(28177, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_018_M"));
break;
case joaat("mpHeist3_Tee_019_F"):
case joaat("mpHeist3_Tee_019_M"):
if(func_278(28176, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_019_M"));
break;
case joaat("mpHeist3_Tee_020_F"):
case joaat("mpHeist3_Tee_020_M"):
if(func_278(28180, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_020_M"));
break;
case joaat("mpHeist3_Tee_021_F"):
case joaat("mpHeist3_Tee_021_M"):
if(func_278(28179, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_021_M"));
break;
case joaat("mpHeist3_Tee_022_F"):
case joaat("mpHeist3_Tee_022_M"):
if(((((((((func_278(28176, -1) && func_278(28177, -1)) && func_278(28178, -1)) && func_278(28179, -1)) && func_278(28180, -1)) && func_278(28181, -1)) && func_278(28182, -1)) && func_278(28183, -1)) && func_278(28184, -1)) || func_278(28221, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_022_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_023_F"):
case joaat("mpHeist3_Tee_023_M"):
if(func_278(28191, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_023_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_011_F"):
case joaat("mpHeist3_Tee_011_M"):
if(func_278(28190, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_011_M"));
break;
case joaat("mpHeist3_Tee_012_F"):
case joaat("mpHeist3_Tee_012_M"):
if(func_278(28189, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_012_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_003_F"):
case joaat("mpHeist3_Tee_003_M"):
if(func_269(0, 1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_003_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_010_F"):
case joaat("mpHeist3_Tee_010_M"):
if((((((((((((((((((func_272(77, -1) && func_272(78, -1)) && func_274(92, -1) >=func_273(92, 5, 9)) && func_274(93, -1) >=func_273(93, 5, 9)) && func_272(79, -1)) && func_272(80, -1)) && func_272(81, -1)) && func_274(94, -1) >=func_273(94, 5, 9)) && func_274(95, -1) >=func_273(95, 5, 9)) && func_272(82, -1)) && func_272(83, -1)) && func_274(96, -1) >=func_273(96, 5, 9)) && func_272(84, -1)) && func_272(85, -1)) && func_274(97, -1) >=func_273(97, 5, 9)) && func_272(86, -1)) && func_272(87, -1)) && func_272(88, -1)) || func_278(28222, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_010_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpVinewood_overlays"):
switch (iParam1){
case joaat("MP_Vinewood_Tat_023_M"):
case joaat("MP_Vinewood_Tat_023_F"):
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_023_M"));
break;
case joaat("MP_Vinewood_Tat_030_M"):
case joaat("MP_Vinewood_Tat_030_F"):
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_030_M"));
break;
case joaat("CasinoTop_M_21"):
case joaat("CasinoTop_F_21"):
if(func_278(27109, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_21"));
break;
case joaat("CasinoTop_M_23"):
case joaat("CasinoTop_F_23"):
if(func_278(27110, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_23"));
break;
case joaat("CasinoTop_M_2"):
case joaat("CasinoTop_F_2"):
if(func_278(27111, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_2"));
break;
case joaat("CasinoTop_M_4"):
case joaat("CasinoTop_F_4"):
if(func_278(27112, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_4"));
break;
case joaat("CasinoTop_M_6"):
case joaat("CasinoTop_F_6"):
if(func_278(27113, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_6"));
break;
case joaat("CasinoTop_M_10"):
case joaat("CasinoTop_F_10"):
if(func_278(27114, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_10"));
break;
case joaat("CasinoTop_M_22"):
case joaat("CasinoTop_F_22"):
if(func_278(27115, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("CasinoTop_M_22"));
break;
}
break;
case joaat("mpChristmas2018_overlays"):
switch (iParam1){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
if(func_278(25032, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_000_M"));
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
if(func_278(25033, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_001_M"));
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
if(func_278(25034, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_002_M"));
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
if(func_278(25035, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_003_M"));
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
if(func_278(25036, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_004_M"));
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
if(func_278(25037, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_005_M"));
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
if(func_278(25038, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_006_M"));
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
if(func_278(25039, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_007_M"));
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
if(func_278(25040, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_008_M"));
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
if(func_278(25041, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_009_M"));
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
if(func_278(25042, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_010_M"));
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
if(func_278(25043, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_011_M"));
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
if(func_278(25044, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_012_M"));
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
if(func_278(25045, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_013_M"));
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
if(func_278(25046, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_014_M"));
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
if(func_278(25047, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_015_M"));
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
if(func_278(25048, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_016_M"));
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
if(func_278(25049, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_017_M"));
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
if(func_278(25050, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_018_M"));
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
if(func_278(25051, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_019_M"));
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
if(func_278(25052, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_020_M"));
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
if(func_278(25053, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_021_M"));
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
if(func_278(25054, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_022_M"));
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
if(func_278(25055, -1)){
return 0;
}
if(func_278(27077, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_023_M"));
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
if(func_278(25056, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_024_M"));
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
if(func_278(25057, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_025_M"));
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
if(func_278(25058, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_026_M"));
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
if(func_278(25059, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_027_M"));
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
if(func_278(25060, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_028_M"));
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
if(func_278(25061, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_029_M"));
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
if(func_278(25062, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_030_M"));
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
if(func_278(25063, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_031_M"));
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
if(func_278(25064, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_032_M"));
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
if(func_278(25065, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_033_M"));
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
if(func_278(25066, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_034_M"));
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
if(func_278(25067, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_035_M"));
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
if(func_278(25068, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_036_M"));
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
if(func_278(25069, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_037_M"));
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
if(func_278(25070, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_038_M"));
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
if(func_278(25071, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_039_M"));
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
if(func_278(25072, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_040_M"));
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
if(func_278(25073, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_041_M"));
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
if(func_278(25074, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_042_M"));
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
if(func_278(25075, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_043_M"));
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
if(func_278(25076, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_044_M"));
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
if(func_278(25077, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_045_M"));
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
if(func_278(25078, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_046_M"));
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
if(func_278(25079, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_047_M"));
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
if(func_278(25080, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_048_M"));
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
if(func_278(25081, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_049_M"));
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
if(func_278(25082, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_050_M"));
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
if(func_278(25083, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_051_M"));
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
if(func_278(25084, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_052_M"));
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
if(func_278(25085, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_053_M"));
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
if(func_278(25086, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_054_M"));
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
if(func_278(25087, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_055_M"));
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
if(func_278(25088, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_056_M"));
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
if(func_278(25089, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_057_M"));
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
if(func_278(25090, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_058_M"));
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
if(func_278(25091, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_059_M"));
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
if(func_278(25092, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_060_M"));
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
if(func_278(25093, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_061_M"));
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
if(func_278(25094, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_062_M"));
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
if(func_278(25095, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_063_M"));
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
if(func_278(25096, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_064_M"));
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
if(func_278(25097, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_065_M"));
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
if(func_278(25098, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_066_M"));
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
if(func_278(25099, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_067_M"));
break;
case joaat("MP_Christmas2018_Tat_000_M"):
case joaat("MP_Christmas2018_Tat_000_F"):
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tat_000_M"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam1){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
if(func_278(22108, -1) || func_278(25006, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_000_M"));
break;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
if(func_278(9481, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_002_M"));
break;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
if(func_278(9470, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_003_M"));
break;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
if(func_278(9475, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_004_M"));
break;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
if(func_278(9472, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_005_M"));
break;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
if(func_278(9465, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_006_M"));
break;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
if(func_278(9463, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_007_M"));
break;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
if(func_278(9464, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_008_M"));
break;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
if(func_278(9468, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_009_M"));
break;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
if(func_278(9469, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_010_M"));
break;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
if(func_278(9479, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_011_M"));
break;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
if(func_278(9473, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_012_M"));
break;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
if(func_278(9480, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_013_M"));
break;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
if(func_278(9476, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_014_M"));
break;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
if(func_278(9477, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_015_M"));
break;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
if(func_278(9471, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_016_M"));
break;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
if(func_278(9474, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_017_M"));
break;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
if(func_278(9467, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_018_M"));
break;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
if(func_278(9478, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_019_M"));
break;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
if(func_278(9462, -1)){
return 0;
}
if(iParam1==joaat("MP_Battle_Clothing_020_M")){
if(func_278(27085, -1)){
return 0;
}}elseif(func_278(27084, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_020_M"));
break;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
if(func_278(9466, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_021_M"));
break;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
if(func_278(22126, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_022_M"));
break;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
if(func_278(22127, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_023_M"));
break;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
if(func_278(22128, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_024_M"));
break;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
if(func_278(22124, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_025_M"));
break;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
if(func_278(22130, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_026_M"));
break;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
if(func_278(22125, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_027_M"));
break;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
if(func_278(22129, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_028_M"));
break;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
if(func_278(22131, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_029_M"));
break;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
if(func_278(22132, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_030_M"));
break;
}
switch (iParam1){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
if(func_278(22147, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_031_M"));
break;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
if(func_278(22148, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_032_M"));
break;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
if(func_278(22149, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_033_M"));
break;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
if(func_278(22150, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_034_M"));
break;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
if(func_278(22151, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_035_M"));
break;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
if(func_278(22152, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_036_M"));
break;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
if(func_278(22153, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_037_M"));
break;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
if(func_278(22154, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_038_M"));
break;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
if(func_278(22155, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_039_M"));
break;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
if(func_278(22156, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_040_M"));
break;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
if(func_278(22157, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_041_M"));
break;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
if(func_278(22158, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_042_M"));
break;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
if(func_278(22159, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_043_M"));
break;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
if(func_278(22160, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_044_M"));
break;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
if(func_278(22161, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_045_M"));
break;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
if(func_278(22162, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_046_M"));
break;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
if(func_278(22163, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_047_M"));
break;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
if(func_278(22164, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_048_M"));
break;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
if(func_278(22165, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_049_M"));
break;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
if(func_278(22166, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_050_M"));
break;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
if(func_278(22167, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_051_M"));
break;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
if(func_278(22168, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_052_M"));
break;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
if(func_278(22169, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_053_M"));
break;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
if(func_278(22170, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_054_M"));
break;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
if(func_278(22171, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_055_M"));
break;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
if(func_278(22172, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_056_M"));
break;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
if(func_278(22173, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_057_M"));
break;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
if(func_278(22174, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_058_M"));
break;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
if(func_278(22175, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_059_M"));
break;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
if(func_278(22176, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_060_M"));
break;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
if(func_278(22177, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_061_M"));
break;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
if(func_278(22178, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_062_M"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam1){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
if(func_278(15426, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_019_M"));
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
if(func_278(15422, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
if(func_278(15423, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M_ALT"));
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
if(func_278(15421, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_021_M"));
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
if(func_278(15427, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_022_M"));
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
if(func_278(15419, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_023_M"));
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
if(func_278(15420, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_024_M"));
break;
}
switch (iParam1){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
if(func_278(15394, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_000_M"));
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_001_M"));
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
if(func_278(15406, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_002_M"));
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
if(func_278(15395, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_003_M"));
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_004_M"));
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
if(func_278(15410, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_005_M"));
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
if(func_278(15407, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_006_M"));
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_007_M"));
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_008_M"));
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
if(func_278(15414, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_009_M"));
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
if(func_278(15415, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_010_M"));
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
if(func_278(15399, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_011_M"));
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
if(func_278(15404, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_012_M"));
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_013_M"));
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
if(func_278(15392, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_014_M"));
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
if(func_278(15390, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_015_M"));
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
if(func_278(15402, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_016_M"));
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
if(func_278(15416, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_017_M"));
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
if(func_71(209, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_018_M"));
break;
}
break;
case joaat("mpBiker_overlays"):
switch (iParam1){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
if(func_278(9366, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_022_M"));
break;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
if(func_278(9367, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_023_M"));
break;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
if(func_278(9369, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_024_M"));
break;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
if(func_278(9368, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_025_M"));
break;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
if(func_278(9365, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_047_M"));
break;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
if(func_278(9364, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_048_M"));
break;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
if(func_278(27078, -1)){
return 0;
}
if(func_278(9363, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_049_M"));
break;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
if(func_278(9362, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_050_M"));
break;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
if(func_278(9370, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_051_M"));
break;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
if(func_278(9371, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_052_M"));
break;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
if(func_278(9372, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_053_M"));
break;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
if(func_278(9373, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_054_M"));
break;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
if(func_278(9374, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_055_M"));
break;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
if(func_278(9384, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_000_M"));
break;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
if(func_278(9385, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_001_M"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam1){
case joaat("MP_exec_prizes_015_M"):
case joaat("MP_exec_prizes_015_F"):
if(func_278(7551, -1) || func_17(3792, -1, 0) >=Global_262145.f_16768){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_015_M"));
break;
case joaat("MP_exec_prizes_000_M"):
case joaat("MP_exec_prizes_000_F"):
if(func_278(7467, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_000_M"));
break;
case joaat("MP_exec_prizes_001_M"):
case joaat("MP_exec_prizes_001_F"):
if(func_278(7468, -1)){
return 0;
}
if(iParam1==joaat("MP_exec_prizes_001_M")){
if(func_278(27083, -1)){
return 0;
}}elseif(func_278(27086, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_001_M"));
break;
case joaat("MP_exec_prizes_002_M"):
case joaat("MP_exec_prizes_002_F"):
if(func_278(7469, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_002_M"));
break;
case joaat("MP_exec_prizes_003_M"):
case joaat("MP_exec_prizes_003_F"):
if(func_278(7470, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_003_M"));
break;
case joaat("MP_exec_prizes_004_M"):
case joaat("MP_exec_prizes_004_F"):
if(func_278(7471, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_004_M"));
break;
case joaat("MP_exec_prizes_005_M"):
case joaat("MP_exec_prizes_005_F"):
if(func_278(7472, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_005_M"));
break;
case joaat("MP_exec_prizes_006_M"):
case joaat("MP_exec_prizes_006_F"):
if(func_278(7473, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_006_M"));
break;
case joaat("MP_exec_prizes_007_M"):
case joaat("MP_exec_prizes_007_F"):
if(func_278(7474, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_007_M"));
break;
case joaat("MP_exec_prizes_008_M"):
case joaat("MP_exec_prizes_008_F"):
if(func_278(7475, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_008_M"));
break;
case joaat("MP_exec_prizes_009_M"):
case joaat("MP_exec_prizes_009_F"):
if(func_278(7476, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_009_M"));
break;
case joaat("MP_exec_prizes_010_M"):
case joaat("MP_exec_prizes_010_F"):
if(func_278(7477, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_010_M"));
break;
case joaat("MP_exec_prizes_011_M"):
case joaat("MP_exec_prizes_011_F"):
if(func_278(7478, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_011_M"));
break;
case joaat("MP_exec_prizes_012_M"):
case joaat("MP_exec_prizes_012_F"):
if(func_278(7479, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_012_M"));
break;
case joaat("MP_exec_prizes_013_M"):
case joaat("MP_exec_prizes_013_F"):
if(func_278(7480, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_013_M"));
break;
case joaat("MP_exec_prizes_014_M"):
case joaat("MP_exec_prizes_014_F"):
if(func_278(7481, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_014_M"));
break;
}
break;
case joaat("mpHalloween_overlays"):
switch (iParam1){
case joaat("HW_Tee_000_F"):
case joaat("HW_Tee_000_M"):
if(func_278(4260, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_000_M"));
break;
case joaat("HW_Tee_001_F"):
case joaat("HW_Tee_001_M"):
if(func_278(4257, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_001_M"));
break;
case joaat("HW_Tee_002_F"):
case joaat("HW_Tee_002_M"):
if(func_278(4269, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_002_M"));
break;
case joaat("HW_Tee_003_F"):
case joaat("HW_Tee_003_M"):
if(func_278(4261, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_003_M"));
break;
case joaat("HW_Tee_004_F"):
case joaat("HW_Tee_004_M"):
if(func_278(4259, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_004_M"));
break;
case joaat("HW_Tee_005_F"):
case joaat("HW_Tee_005_M"):
if(func_278(4268, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_005_M"));
break;
case joaat("HW_Tee_006_F"):
case joaat("HW_Tee_006_M"):
if(func_278(4265, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_006_M"));
break;
case joaat("HW_Tee_007_F"):
case joaat("HW_Tee_007_M"):
if(func_278(4258, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_007_M"));
break;
case joaat("HW_Tee_008_F"):
case joaat("HW_Tee_008_M"):
if(func_278(4264, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_008_M"));
break;
case joaat("HW_Tee_009_F"):
case joaat("HW_Tee_009_M"):
if(func_278(4267, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_009_M"));
break;
case joaat("HW_Tee_010_F"):
case joaat("HW_Tee_010_M"):
if(func_278(4262, -1)){
return 0;
}
if(func_278(27079, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_010_M"));
break;
case joaat("HW_Tee_011_F"):
case joaat("HW_Tee_011_M"):
if(func_278(4263, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_011_M"));
break;
case joaat("HW_Tee_012_F"):
case joaat("HW_Tee_012_M"):
if(func_278(4266, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("HW_Tee_012_M"));
break;
}
break;
case joaat("mpLowrider_overlays"):
switch (iParam1){
case joaat("MP_Bennys_000_M"):
case joaat("MP_Bennys_001_M"):
if(func_17(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_M")){
if(func_278(27068, -1)){
return 0;
}}
return !func_275(iParam2, iParam1, 1);
break;
case joaat("MP_Bennys_000_F"):
case joaat("MP_Bennys_001_F"):
if(func_17(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_F")){
if(func_278(27068, -1)){
return 0;
}}
return !func_275(iParam2, iParam1, 0);
break;
}
break;
case joaat("mpxmas_604490_overlays"):
switch (iParam1){
case joaat("MP_IHeartLC_000_M"):
case joaat("MP_IHeartLC_001_F"):
if(func_278(113, -1)){
return 0;
}
return !func_275(iParam2, iParam1, iParam1==joaat("MP_IHeartLC_000_M"));
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
if(func_278(27082, -1)){
return 0;
}
if(func_278(3770, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_005")){
if(func_278(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_006")){
if(func_278(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_007")){
if(func_278(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_008")){
if(func_278(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_009")){
if(func_278(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_010")){
if(func_278(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_011")){
if(func_278(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_012")){
if(func_278(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_013")){
if(func_278(3779, -1) || func_278(27084, -1)){
return 0;
}}
return !func_275(iParam2, iParam1, 1);
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
if(func_278(3770, -1)){
return 0;
}
if(func_278(27082, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_005")){
if(func_278(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_006")){
if(func_278(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_007")){
if(func_278(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_008")){
if(func_278(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_009")){
if(func_278(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_010")){
if(func_278(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_011")){
if(func_278(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_012")){
if(func_278(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_013")){
if(func_278(3779, -1) || func_278(27083, -1)){
return 0;
}}
return !func_275(iParam2, iParam1, 0);
break;
case joaat("MP_Elite_M_Tshirt"):
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Elite_F_Tshirt"):
case joaat("MP_Elite_F_Tshirt_1"):
if((((func_278(3765, -1) && func_278(3766, -1)) && func_278(3767, -1)) && func_278(3768, -1)) && func_278(3769, -1)){
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
return !func_278(3593, -1);
break;
}
if(!Global_262145.f_8259 && !func_275(iParam2, iParam1, 0)){
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
return (!func_71(152, -1) && !func_278(9440, -1));
break;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return (!func_71(151, -1) && !func_278(9430, -1));
break;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return (!func_266(iParam2, -1) && !func_278(9426, -1));
break;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return (!func_266(iParam2, -1) && !func_278(9427, -1));
break;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return (!func_266(iParam2, -1) && !func_278(9428, -1));
break;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return (!func_266(iParam2, -1) && !func_278(9431, -1));
break;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return (!func_266(iParam2, -1) && !func_278(9432, -1));
break;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return (!func_266(iParam2, -1) && !func_278(9433, -1));
break;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return (!func_266(iParam2, -1) && !func_278(9439, -1));
break;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return (!func_266(iParam2, -1) && !func_278(9434, -1));
break;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return (!func_266(iParam2, -1) && !func_278(9435, -1));
break;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return (!func_266(iParam2, -1) && !func_278(9436, -1));
break;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return (!func_266(iParam2, -1) && !func_278(9429, -1));
break;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return (!func_266(iParam2, -1) && !func_278(9437, -1));
break;
case joaat("FM_Rstar_M_Tshirt_000"):
case joaat("FM_Rstar_M_Tshirt_001"):
case joaat("FM_Rstar_M_Tshirt_002"):
case joaat("FM_Rstar_F_Tshirt_000"):
case joaat("FM_Rstar_F_Tshirt_001"):
case joaat("FM_Rstar_F_Tshirt_002"):
return !func_265();
break;
}
break;
case joaat("mpvalentines_overlays"):
if((!Global_262145.f_7059 && !func_266(iParam2, -1)) && !Global_262145.f_12034){
return 1;
}
break;
case joaat("mpPilot_overlays"):
switch (iParam1){
case joaat("MP_Fli_M_Tshirt_000"):
case joaat("MP_Fli_F_Tshirt_000"):
return !func_278(3608, -1);
break;
}
break;
case joaat("mpLTS_overlays"):
switch (iParam1){
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return (!func_278(3615, -1) && !func_278(9438, -1));
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
return !func_278(3783, -1);
break;
case joaat("MP_FAKE_DIS_001_M"):
case joaat("MP_FAKE_DIS_001_F"):
return !func_278(3784, -1);
break;
case joaat("MP_FAKE_DS_000_M"):
case joaat("MP_FAKE_DS_000_F"):
return !func_278(3785, -1);
break;
case joaat("MP_FAKE_ENEMA_000_M"):
case joaat("MP_FAKE_ENEMA_000_F"):
return !func_278(3786, -1);
break;
case joaat("MP_FAKE_LB_000_M"):
case joaat("MP_FAKE_LB_000_F"):
return !func_278(3787, -1);
break;
case joaat("MP_FAKE_LC_000_M"):
case joaat("MP_FAKE_LC_000_F"):
return !func_278(3788, -1);
break;
case joaat("MP_FAKE_SC_000_M"):
case joaat("MP_FAKE_SC_000_F"):
if(func_278(27081, -1)){
return 0;
}
return !func_278(3789, -1);
break;
case joaat("MP_FAKE_Vap_000_M"):
case joaat("MP_FAKE_Vap_000_F"):
return !func_278(3790, -1);
break;
case joaat("MP_FAKE_Per_000_M"):
case joaat("MP_FAKE_Per_000_F"):
return !func_278(3791, -1);
break;
case joaat("MP_FAKE_SN_000_M"):
case joaat("MP_FAKE_SN_000_F"):
return !func_278(3792, -1);
break;
case joaat("MP_FILM_000_F"):
case joaat("MP_FILM_000_M"):
if(iParam1==joaat("MP_FILM_000_F")){
iVar0=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar0, 0)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_000_M")){
iVar1=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar1, 18)){
return 0;
}}
return !func_278(3793, -1);
break;
case joaat("MP_FILM_001_F"):
case joaat("MP_FILM_001_M"):
if(iParam1==joaat("MP_FILM_001_F")){
iVar2=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar2, 1)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_001_M")){
iVar3=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar3, 19)){
return 0;
}}
return !func_278(3794, -1);
break;
case joaat("MP_FILM_002_F"):
case joaat("MP_FILM_002_M"):
if(iParam1==joaat("MP_FILM_002_F")){
iVar4=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar4, 2)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_002_M")){
iVar5=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar5, 20)){
return 0;
}}
return !func_278(3795, -1);
break;
case joaat("MP_FILM_003_F"):
case joaat("MP_FILM_003_M"):
if(iParam1==joaat("MP_FILM_003_F")){
iVar6=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar6, 3)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_003_M")){
iVar7=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar7, 21)){
return 0;
}}
return !func_278(3796, -1);
break;
case joaat("MP_FILM_004_F"):
case joaat("MP_FILM_004_M"):
if(iParam1==joaat("MP_FILM_004_F")){
iVar8=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar8, 4)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_004_M")){
iVar9=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar9, 22)){
return 0;
}}
return !func_278(3797, -1);
break;
case joaat("MP_FILM_005_F"):
case joaat("MP_FILM_005_M"):
if(iParam1==joaat("MP_FILM_005_F")){
iVar10=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar10, 5)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_005_M")){
iVar11=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar11, 23)){
return 0;
}}
return !func_278(3798, -1);
break;
case joaat("MP_FILM_006_F"):
case joaat("MP_FILM_006_M"):
if(iParam1==joaat("MP_FILM_006_F")){
iVar12=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar12, 6)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_006_M")){
iVar13=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar13, 24)){
return 0;
}}
return !func_278(3799, -1);
break;
case joaat("MP_FILM_007_F"):
case joaat("MP_FILM_007_M"):
if(iParam1==joaat("MP_FILM_007_F")){
iVar14=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar14, 7)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_007_M")){
iVar15=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar15, 25)){
return 0;
}}
return !func_278(3800, -1);
break;
case joaat("MP_FILM_008_F"):
case joaat("MP_FILM_008_M"):
if(iParam1==joaat("MP_FILM_008_F")){
iVar16=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar16, 8)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_008_M")){
iVar17=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar17, 26)){
return 0;
}}
return !func_278(3801, -1);
break;
case joaat("MP_FILM_009_F"):
case joaat("MP_FILM_009_M"):
if(iParam1==joaat("MP_FILM_009_F")){
iVar18=func_17(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar18, 9)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_009_M")){
iVar19=func_17(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar19, 27)){
return 0;
}}
return !func_278(3802, -1);
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
return !func_42();
break;
}
break;
}
return 0;
}


bool func_265(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_266(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_268(iParam0)==14192){
return 0;
}
uVar0=func_267(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_32(iVar1));
}


var func__267(var uParam0, int iParam1){
var uVar0;
uVar0=func_17(func_268(uParam0), iParam1, 0);
return uVar0;
}

int func_268(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_36(iVar0);
if((func_21()==0 || func_34()==0) || (func_21()==999 && func_34()==999)){
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

int func_269(int iParam0, bool bParam1){
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
if(!func_271(iVar2) || iParam0){
if(!func_270(PLAYER::PLAYER_ID(), iVar2, 0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_270(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_90()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_434, uVar0);
break;
}}
return 1;
}

int func_271(int iParam0){
switch (iParam0){
case 18:
case 17:
case 19:
return 1;
break;
}
return 0;
}

int func_272(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850651[iParam0 /*3*/][func_18(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_273(int iParam0, int iParam1, int iParam2){
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

int func_274(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2850194[iParam0 /*3*/][func_18(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_275(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(bParam2){
iParam0=func_46(iParam1, 3);
}else{
iParam0=func_46(iParam1, 4);
}}
return (func_266(iParam0, -1) || func_276(iParam0, -1));
}


bool func_276(int iParam0, int iParam1){
return func_278(func_277(iParam0), iParam1);
}

int func_277(int iParam0){
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


bool func_278(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_19();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_279(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam4==0){
iVar1=func_281(iVar0, sParam1, iParam4);
iParam4=MISC::GET_HASH_KEY(func_280(iVar1));
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
if(func_31(13, -1)){
return 0;
}elseif(func_31(14, -1)){
return 0;
}elseif(func_31(15, -1)){
return 0;
}elseif(func_31(16, -1)){
return 0;
}elseif(func_31(71, -1)){
return 0;
}elseif(func_31(72, -1)){
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
if(func_31(13, -1)){
return 0;
}elseif(func_31(14, -1)){
return 0;
}elseif(func_31(15, -1)){
return 0;
}elseif(func_31(16, -1)){
return 0;
}elseif(func_31(71, -1)){
return 0;
}elseif(func_31(72, -1)){
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
if(func_31(13, -1)){
}elseif(func_31(14, -1)){
return 0;
}elseif(func_31(15, -1)){
return 0;
}elseif(func_31(16, -1)){
}elseif(func_31(71, -1)){
return 0;
}elseif(func_31(72, -1)){
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
if(func_31(13, -1)){
}elseif(func_31(14, -1)){
}elseif(func_31(15, -1)){
}elseif(func_31(16, -1)){
}elseif(func_31(71, -1)){
}elseif(func_31(72, -1)){
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
if(func_31(13, -1)){
}
elseif(func_31(14, -1)){
}
elseif(func_31(15, -1)){
return 0;
}
elseif(func_31(16, -1)){
}
elseif(func_31(71, -1)){
}
elseif(func_31(72, -1)){
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
if(func_31(15, -1)){
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
if(func_31(13, -1)){
return 0;
}
elseif(func_31(14, -1)){
return 0;
}
elseif(func_31(15, -1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}
}
elseif(func_31(16, -1)){
}
elseif(func_31(71, -1)){
}
elseif(func_31(72, -1)){
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
if(func_31(13, -1)){
}elseif(func_31(14, -1)){
}elseif(func_31(15, -1)){
}elseif(func_31(16, -1)){
}elseif(func_31(71, -1)){
}elseif(func_31(72, -1)){
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


char* func_280(int iParam0){
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

int func_281(int iParam0, char* sParam1, int iParam2){
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

int func_282(int iParam0, int iParam1){
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
iVar2=func_17(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0 > 15){
iVar3=func_1274(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_136(joaat("mp_m_freemode_01"), iVar3, 11, 3);
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
iVar2=func_17(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0==3){
if(iVar1==14){
return 1;
}}elseif(iVar0 > 15){
iVar5=func_1274(iParam0, 11, -1);
if(iVar5 >=256){
iVar6=func_136(joaat("mp_f_freemode_01"), iVar5, 11, 4);
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

int func_283(int iParam0){
int iVar0;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
if(iVar0 !=-1 && iVar0 < 4){
if(func_284(iVar0) !=-1 && func_284(iVar0) !=0){
return 1;
}}}
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11)==15){
return 1;
}}}
return 0;
}

int func_284(int iParam0){
if(func_285(1)){
return Global_1665818;
}
if(iParam0 <=-1 || iParam0 >=4){
return -1;
}
return Global_2684801.f_6316[iParam0];
}

int func_285(bool bParam0){
if((func_289(bParam0) || func_287()) || func_286(Global_4718592.f_166301)){
return 1;
}
return 0;
}


bool func_286(int iParam0){
return iParam0==87;
}

int func_287(){
return func_288(Global_4718592.f_113724);
}

int func_288(int iParam0){
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


var func__289(bool bParam0){
if(bParam0){
return (MISC::IS_BIT_SET(Global_4718592.f_160050, 12) && func_290());
}
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_290(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}

int func_291(int iParam0, bool bParam1){
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
iVar2=func_295(joaat("mp_m_freemode_01"), 11, func_1274(iParam0, 11, -1), 0);
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
if(func_31(13, -1)){
return 1;
}
elseif(func_31(14, -1)){
return 1;
}
elseif(func_31(15, -1)){
return 1;
}
elseif(func_31(16, -1)){
return 1;
}
elseif(func_31(71, -1)){
return 1;
}
elseif(func_31(72, -1)){
}
elseif(func_292(PLAYER::PLAYER_ID(), 1) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 !=0){
return 1;
}}
break;
default:
if(iVar0 > 15){
iVar3=func_1274(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_136(joaat("mp_m_freemode_01"), iVar3, 11, 3);
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
iVar5=func_1274(iParam0, 8, -1);
if(iVar5 >=241){
iVar6=func_136(joaat("mp_m_freemode_01"), iVar5, 8, 3);
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
iVar7=func_295(joaat("mp_f_freemode_01"), 11, func_1274(iParam0, 11, -1), 0);
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
iVar8=func_1274(iParam0, 11, -1);
if(iVar8 >=256){
iVar9=func_136(joaat("mp_f_freemode_01"), iVar8, 11, 4);
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
iVar10=func_295(joaat("mp_f_freemode_01"), 11, func_1274(iParam0, 11, -1), 0);
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
iVar11=func_295(joaat("mp_f_freemode_01"), 11, func_1274(iParam0, 11, -1), 0);
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
iVar12=func_1274(iParam0, 8, -1);
if(iVar12 >=136){
iVar13=func_136(joaat("mp_f_freemode_01"), iVar12, 8, 4);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}}
return 0;
}

int func_292(int iParam0, bool bParam1){
return func_293(iParam0, bParam1, 1);
}

int func_293(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_90()){
return 0;
}
if(!bParam1){
if(func_294(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_90() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_294(int iParam0, int iParam1){
if(iParam0 !=func_90()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_90()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_266(87, -1)){
return 87;
}}elseif(iParam2==41){
return 86;
}elseif(iParam2 >=237){
iVar0=func_136(iParam0, iParam2, 11, 3);
if(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl_no_save"), 0)){
iVar1=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==10){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_46(iVar3, 3);
}else{
return uVar4;
}}
iVar2++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_17(1759, -1, 0);
}
return func_46(iParam3, 3);
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
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_266(87, -1)){
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
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==225){
return 88;
}elseif(iParam2==236){
if(func_266(87, -1)){
return 87;
}}elseif(iParam2 >=241){
iVar6=func_136(iParam0, iParam2, 8, 3);
if(iVar6 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
iVar7=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==10){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_46(iVar9, 3);
}else{
return uVar10;
}}
iVar8++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_17(1759, -1, 0);
}
return func_46(iParam3, 3);
}}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_266(87, -1)){
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
iVar12=func_136(iParam0, iParam2, 11, 4);
if(iVar12 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl_no_save"), 0)){
iVar13=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
iVar14=0;
while (iVar14 < iVar13){
FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
if(iVar17==10){
if(iVar15 !=0 && iVar15 !=joaat("0")){
return func_46(iVar15, 4);
}else{
return uVar16;
}}
iVar14++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_17(1759, -1, 0);
}
return func_46(iParam3, 4);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_266(87, -1)){
return 87;
}}elseif(iParam2==17){
return 75;
}elseif(iParam2==18){
return 77;
}elseif(iParam2==20){
if(func_266(89, -1)){
return 89;
}}elseif(iParam2==23){
return 88;
}elseif(iParam2==25){
if(func_266(87, -1)){
return 87;
}}elseif(iParam2==81){
return 84;
}elseif(iParam2==82){
return 85;
}elseif(iParam2==86){
return 74;
}elseif(iParam2 >=136){
iVar18=func_136(iParam0, iParam2, 8, 4);
if(iVar18 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl_no_save"), 0)){
iVar19=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
iVar20=0;
while (iVar20 < iVar19){
FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
if(iVar23==10){
if(iVar21 !=0 && iVar21 !=joaat("0")){
return func_46(iVar21, 4);
}else{
return uVar22;
}}
iVar20++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_17(1759, -1, 0);
}
return func_46(iParam3, 4);
}}}}}
return -1;
}


void func_296(int iParam0){
struct<14> Var0;
var uVar1;
if(func_1274(PLAYER::PLAYER_PED_ID(), 14, 0) !=-99){
Var0={
func_1184(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_1274(PLAYER::PLAYER_PED_ID(), 14, 0), -1) 
};
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || iParam0==1){
if(iParam0==0){
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
switch (MISC::GET_HASH_KEY(&(Var0.f_8))){
case joaat("CLO_BUS_P_1_0"):
case joaat("CLO_BUS_P_1_1"):
case joaat("CLO_BUS_P_1_2"):
case joaat("CLO_BUS_P_1_3"):
case joaat("CLO_BUS_P_1_4"):
case joaat("CLO_BUS_P_1_5"):
case joaat("CLO_BUS_P_1_6"):
case joaat("CLO_BUS_P_1_7"):
case joaat("CLO_BUS_P_1_8"):
case joaat("CLO_BUS_P_1_9"):
case joaat("CLO_BUS_P_1_10"):
case joaat("CLO_BUS_P_1_11"):
case joaat("CLO_BUS_P_1_12"):
case joaat("CLO_BUS_P_1_13"):
case -2115205532:
case -1878515045:
case 373632787:
case -461157488:
case -214308611:
case -647908019:
case 1465790788:
case 698865112:
case -437837804:
case 1766500061:
case -1827866015:
case -2100667940:
case 881016139:
case -892409352:
case -1138996077:
case 1733141239:
case joaat("HT_FMM_13_0"):
case joaat("HT_FMM_13_1"):
case joaat("HT_FMM_13_2"):
case joaat("HT_FMM_13_3"):
case joaat("HT_FMM_13_4"):
case joaat("HT_FMM_13_5"):
case joaat("HT_FMM_13_6"):
case joaat("HT_FMM_13_7"):
case joaat("CLO_BBF_P2_0"):
case joaat("CLO_BBF_P2_1"):
case joaat("CLO_BBF_P2_2"):
case joaat("CLO_BBF_P2_3"):
case joaat("CLO_BBF_P2_4"):
case joaat("CLO_BBF_P2_5"):
case joaat("CLO_BBF_P2_6"):
if(iParam0==0){
if(VEHICLE::DOES_VEHICLE_HAVE_ROOF(uVar1)){
PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
}}else{
PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
}
break;
}}}}


void func_297(int iParam0, int iParam1){
struct<10> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
float fVar7;
float fVar8;
float fVar9;
bool bVar10;
int iVar11;
if(!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0)){}
if(func_307()){
return;
}
PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
iVar1=func_17(2097, iParam1, 0);
iVar2=func_17(2098, iParam1, 0);
iVar3=func_17(2099, iParam1, 0);
iVar4=func_17(2100, iParam1, 0);
iVar5=func_17(2101, iParam1, 0);
iVar6=func_17(2102, iParam1, 0);
fVar7=func_308(134, iParam1);
fVar8=func_308(135, iParam1);
fVar9=func_308(136, iParam1);
bVar10=func_71(160, iParam1);
if(((((((((Var0.f_0 !=iVar1 || Var0.f_1 !=iVar2) || Var0.f_2 !=iVar3) || Var0.f_3 !=iVar4) || Var0.f_4 !=iVar5) || Var0.f_5 !=iVar6) || Var0.f_6 !=fVar7) || Var0.f_7 !=fVar8) || Var0.f_8 !=fVar9) || Var0.f_9 !=bVar10){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
iVar11=func_17(2103, iParam1, 0);
if(iVar11 > 0){
func_298(iParam0, iParam1, 0);
}}}


void func_298(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
var uVar11;
var uVar12;
int iVar13;
int iVar14;
var uVar15;
iVar0=0;
while (iVar0 < 20){
iVar1=iVar0;
iVar2=func_306(iVar1);
if(!bParam2){
fVar3=func_308(iVar2, iParam1);
}else{
fVar3=func_305(iVar2, iParam1);
}
PED::SET_PED_MICRO_MORPH(iParam0, iVar1, fVar3);
iVar0++;
}
iVar4=0;
while (iVar4 < 13){
iVar5=func_304(iVar4);
iVar6=func_632(iVar5);
iVar7=func_641(iVar5);
if(iVar6 !=-1 && iVar7 !=-1){
if(!bParam2){
uVar10=func_642(iVar6, iParam1);
uVar11=func_308(iVar7, iParam1);
}else{
uVar10=func_303(iVar6, iParam1);
uVar11=func_305(iVar7, iParam1);
}
PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, uVar10, uVar11);
iVar8=func_302(iVar5);
iVar9=func_629(iVar5);
if(iVar8 !=-1){
if(!bParam2){
iVar13=func_17(iVar8, iParam1, 0);
iVar14=func_17(iVar9, iParam1, 0);
}else{
iVar13=func_301(iVar8, iParam1);
iVar14=func_301(iVar9, iParam1);
}
func_300(iVar13, &uVar12, &uVar15);
PED::SET_PED_HEAD_OVERLAY_TINT(iParam0, iVar5, uVar15, uVar12, iVar14);
}}
iVar4++;
}
func_299(&iParam0, iParam1, bParam2);
}


void func_299(int iParam0, int iParam1, bool bParam2){
float fVar0;
if(!bParam2){
fVar0=func_308(157, iParam1);
}else{
fVar0=func_305(157, iParam1);
}
if(*iParam0==PLAYER::PLAYER_PED_ID()){}
PED::SET_HEAD_BLEND_EYE_COLOR(*iParam0, round(fVar0));
}


void func_300(int iParam0, var uParam1, var uParam2){
int iVar0;
*uParam1=shift_right(iParam0, 16);
iVar0=iParam0 & 65535;
*uParam2=iVar0;
}

int func_301(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2805029[iParam0 /*3*/][func_18(iParam1)];
if(HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0;
}

int func_302(int iParam0){
switch (iParam0){
case 2:
return 2154;
case 1:
return 2155;
case 5:
return 2156;
case 8:
return 2157;
case 10:
return 2158;
default:
}
return -1;
}

int func_303(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(iParam1==-1){
iParam1=func_19();
}
iVar1=0;
iVar2=0;
if(iParam0 >=384 && iParam0 < 457){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
iVar2=((iParam0 - 384) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 384)) * 8) * 8;
}elseif(iParam0 >=457 && iParam0 < 513){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
iVar2=((iParam0 - 457) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 457)) * 8) * 8;
}elseif(iParam0 >=1281 && iParam0 < 1305){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
iVar2=((iParam0 - 1281) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1281)) * 8) * 8;
}elseif(iParam0 >=1305 && iParam0 < 1361){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
iVar2=((iParam0 - 1305) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1305)) * 8) * 8;
}elseif(iParam0 >=1393 && iParam0 < 2919){
iVar1=STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
iVar2=((iParam0 - 1393) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1393)) * 8) * 8;
}elseif(iParam0 >=1361 && iParam0 < 1393){
iVar1=STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
iVar2=((iParam0 - 1361) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1361)) * 8) * 8;
}elseif(iParam0 >=3879 && iParam0 < 4143){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
iVar2=((iParam0 - 3879) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 3879)) * 8) * 8;
}elseif(iParam0 >=4143 && iParam0 < 4207){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
iVar2=((iParam0 - 4143) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4143)) * 8) * 8;
}elseif(iParam0 >=4399 && iParam0 < 6028){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
iVar2=((iParam0 - 4399) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4399)) * 8) * 8;
}elseif(iParam0 >=6413 && iParam0 < 7262){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
iVar2=((iParam0 - 6413) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 6413)) * 8) * 8;
}elseif(iParam0 >=7262 && iParam0 < 7313){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
iVar2=((iParam0 - 7262) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7262)) * 8) * 8;
}elseif(iParam0 >=7681 && iParam0 < 9361){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
iVar2=((iParam0 - 7681) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7681)) * 8) * 8;
}elseif(iParam0 >=9553 && iParam0 < 15265){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
iVar2=((iParam0 - 9553) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 9553)) * 8) * 8;
}elseif(iParam0 >=15265 && iParam0 < 15369){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
iVar2=((iParam0 - 15265) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 15265)) * 8) * 8;
}elseif(iParam0 >=7641 && iParam0 < 7681){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
iVar2=((iParam0 - 7641) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7641)) * 8) * 8;
}elseif(iParam0 >=7313 && iParam0 < 7321){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
iVar2=((iParam0 - 7313) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7313)) * 8) * 8;
}elseif(iParam0 >=16010 && iParam0 < 18098){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
iVar2=((iParam0 - 16010) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 16010)) * 8) * 8;
}elseif(iParam0 >=18162 && iParam0 < 19018){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
iVar2=((iParam0 - 18162) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 18162)) * 8) * 8;
}elseif(iParam0 >=19018 && iParam0 < 22066){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
iVar2=((iParam0 - 19018) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 19018)) * 8) * 8;
}elseif(iParam0 >=22194 && iParam0 < 24962){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
iVar2=((iParam0 - 22194) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 22194)) * 8) * 8;
}elseif(iParam0 >=25538 && iParam0 < 26810){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
iVar2=((iParam0 - 25538) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 25538)) * 8) * 8;
}elseif(iParam0 >=27258 && iParam0 < 28098){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
iVar2=((iParam0 - 27258) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 27258)) * 8) * 8;
}elseif(iParam0 >=28483 && iParam0 < 30227){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
iVar2=((iParam0 - 28483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 28483)) * 8) * 8;
}elseif(iParam0 >=30483 && iParam0 < 30515){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
iVar2=((iParam0 - 30483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30483)) * 8) * 8;
}elseif(iParam0 >=30707 && iParam0 < 31707){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
iVar2=((iParam0 - 30707) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30707)) * 8) * 8;
}elseif(iParam0 >=32475 && iParam0 < 34123){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 32475), 0, 1, iParam1, "_FIXERPSTAT_INT");
iVar2=((iParam0 - 32475) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 32475)) * 8) * 8;
}
if(!HUD::GET_MENU_PED_MASKED_INT_STAT(iVar1, &iVar0, iVar2, 8)){
iVar0=0;
}
if(iParam0==384){}
return iVar0;
}

int func_304(int iParam0){
switch (iParam0){
case 0:
return 7;
case 1:
return 3;
case 2:
return 9;
case 3:
return 6;
case 4:
return 0;
case 5:
return 4;
case 6:
return 5;
case 7:
return 2;
case 8:
return 1;
case 9:
return 8;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
default:
}
return -1;
}


float func_305(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_18(iParam1)];
if(HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0f;
}

int func_306(int iParam0){
switch (iParam0){
case 0:
return 137;
case 1:
return 138;
case 2:
return 139;
case 3:
return 140;
case 4:
return 141;
case 5:
return 142;
case 6:
return 143;
case 7:
return 144;
case 8:
return 145;
case 9:
return 146;
case 10:
return 147;
case 11:
return 148;
case 12:
return 149;
case 13:
return 150;
case 14:
return 151;
case 15:
return 152;
case 16:
return 153;
case 17:
return 154;
case 18:
return 155;
case 19:
return 156;
default:
}
return -1;
}

int func_307(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2639783.f_60) && !Global_2639783.f_59==0){
return 1;
}
return 0;
}


float func_308(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_18(iParam1)];
if(STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0f;
}


void func_309(var uParam0, int iParam1){
if(!func_132(0)){
(*uParam0)[0]=func_642(387, iParam1);
(*uParam0)[1]=func_642(388, iParam1);
(*uParam0)[2]=func_642(389, iParam1);
(*uParam0)[3]=func_642(390, iParam1);
(*uParam0)[4]=func_642(391, iParam1);
(*uParam0)[5]=func_642(392, iParam1);
(*uParam0)[6]=func_642(393, iParam1);
(*uParam0)[7]=func_642(394, iParam1);
(*uParam0)[8]=func_642(395, iParam1);
(*uParam0)[9]=func_642(396, iParam1);
(*uParam0)[10]=func_642(397, iParam1);
(*uParam0)[11]=func_642(398, iParam1);
uParam0->f_13[0]=func_642(399, iParam1);
uParam0->f_13[1]=func_313(iParam1);
uParam0->f_13[2]=func_642(401, iParam1);
uParam0->f_13[3]=func_312(iParam1);
uParam0->f_13[4]=func_642(403, iParam1);
uParam0->f_13[5]=func_642(404, iParam1);
uParam0->f_13[6]=func_642(405, iParam1);
uParam0->f_13[7]=func_642(406, iParam1);
uParam0->f_13[8]=func_311(iParam1);
uParam0->f_13[9]=func_642(408, iParam1);
uParam0->f_13[10]=func_642(409, iParam1);
uParam0->f_13[11]=func_310(iParam1);
uParam0->f_26[0]=func_642(411, iParam1);
uParam0->f_26[1]=func_642(412, iParam1);
uParam0->f_26[2]=func_642(413, iParam1);
uParam0->f_26[3]=func_642(414, iParam1);
uParam0->f_26[4]=func_642(415, iParam1);
uParam0->f_26[5]=func_642(416, iParam1);
uParam0->f_26[6]=func_642(417, iParam1);
uParam0->f_26[7]=func_642(418, iParam1);
uParam0->f_26[8]=func_642(419, iParam1);
uParam0->f_26[9]=func_642(420, iParam1);
uParam0->f_26[10]=func_642(421, iParam1);
uParam0->f_26[11]=func_642(422, iParam1);
uParam0->f_39[0]=func_642(423, iParam1);
uParam0->f_39[1]=func_642(424, iParam1);
uParam0->f_39[2]=func_642(425, iParam1);
uParam0->f_39[3]=func_642(426, iParam1);
uParam0->f_39[4]=func_642(427, iParam1);
uParam0->f_39[5]=func_642(428, iParam1);
uParam0->f_39[6]=func_642(429, iParam1);
uParam0->f_39[7]=func_642(430, iParam1);
uParam0->f_39[8]=func_642(431, iParam1);
uParam0->f_49[0]=func_642(432, iParam1);
uParam0->f_49[1]=func_642(433, iParam1);
uParam0->f_49[2]=func_642(434, iParam1);
uParam0->f_49[3]=func_642(435, iParam1);
uParam0->f_49[4]=func_642(436, iParam1);
uParam0->f_49[5]=func_642(437, iParam1);
uParam0->f_49[6]=func_642(438, iParam1);
uParam0->f_49[7]=func_642(439, iParam1);
uParam0->f_49[8]=func_642(440, iParam1);
if(func_71(161, -1)){
uParam0->f_59=func_17(2053, iParam1, 0);
}else{
uParam0->f_59=func_17(753, iParam1, 0);
}
uParam0->f_60=func_17(754, iParam1, 0);
uParam0->f_61=func_17(755, iParam1, 0);
}}

int func_310(int iParam0){
return (func_642(410, iParam0) + func_642(18095, iParam0));
}

int func_311(int iParam0){
return (func_642(407, iParam0) + func_642(18094, iParam0));
}

int func_312(int iParam0){
return (func_642(402, iParam0) + func_642(18093, iParam0));
}

int func_313(int iParam0){
return (func_642(400, iParam0) + func_642(18092, iParam0));
}


var func__314(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_1;
}


void func_315(int iParam0, int iParam1){
char cVar0[64];
struct<13> Var1;
var uVar2;
StringCopy(&cVar0, func_319(iParam0, iParam1), 64);
if(MISC::GET_HASH_KEY(&cVar0)==joaat("crew_logo")){
if(((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_6(PLAYER::PLAYER_ID(), 0, 1)) && func_317()) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Var1={
func_316(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar2, 35, &Var1)){
NETWORK::NETWORK_CLAN_RELEASE_EMBLEM(uVar2);
}}}elseif(MISC::GET_HASH_KEY(&cVar0) !=0){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
}}
struct<13> func_316(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_317(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_318() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_318(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}


char* func_319(int iParam0, int iParam1){
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


void func_320(var uParam0){
func_321(&(uParam0->f_620));
func_321(&(uParam0->f_630));
}


void func_321(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}


void func_322(bool bParam0, int iParam1){
int iVar0;
if(!func_323(&iVar0, 0, iParam1)){
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
func_321(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}

int func_323(var uParam0, bool bParam1, int iParam2){
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


void func_324(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_1) && func_931(1)){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), false, 0);
ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_66.f_1), false, 0);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_66.f_1), true);
}}


void func_325(var uParam0, int iParam1){
if(func_932(0) || iParam1){
if(TASK::GET_SCRIPT_TASK_STATUS(func_329(uParam0, iParam1), joaat("script_task_go_straight_to_coord")) !=1){
TASK::TASK_GO_STRAIGHT_TO_COORD(func_329(uParam0, iParam1), func_328(uParam0, iParam1), 1f, 20000, func_327(uParam0, iParam1), 1056964608);
}
if(iParam1==0){
func_326(uParam0, 0);
}}}


void func_326(var uParam0, int iParam1){
if(iParam1==1){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_532)){
uParam0->f_532=OBJECT::CREATE_OBJECT(joaat("p_cs_scissors_s"), uParam0->f_12.f_6, 0, 0, 0);
}}elseif(ENTITY::DOES_ENTITY_EXIST(uParam0->f_532)){
OBJECT::DELETE_OBJECT(&(uParam0->f_532));
}}


var func__327(var uParam0, int iParam1){
if(iParam1==1){
return uParam0->f_449.f_15;
}
return uParam0->f_12.f_15;
}


Vector3 func__328(var uParam0, int iParam1){
if(iParam1==1){
return uParam0->f_449.f_6;
}
return uParam0->f_12.f_6;
}


var func__329(var uParam0, int iParam1){
if(iParam1==1){
return uParam0->f_449;
}
return uParam0->f_12;
}


void func_330(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_334(uParam0);
if(uParam0->f_551 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(14);
Stack.Push(uParam0->f_551);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_552 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(8);
Stack.Push(uParam0->f_552);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_553 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(9);
Stack.Push(uParam0->f_553);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_554 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(2);
Stack.Push(uParam0->f_554);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_559 !=-1){
func_331(PLAYER::PLAYER_PED_ID(), uParam0->f_559);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(uParam0->f_555 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(1);
Stack.Push(uParam0->f_555);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_556 !=-99){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(7);
Stack.Push(uParam0->f_556);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}
if(uParam0->f_557 !=-1 && uParam0->f_558 !=-1){
PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), func_50(5), uParam0->f_557, uParam0->f_558, 0);
}}}}
uParam0->f_550=-99;
uParam0->f_551=-99;
uParam0->f_555=-99;
uParam0->f_556=-99;
uParam0->f_557=-1;
uParam0->f_558=-1;
uParam0->f_552=-99;
uParam0->f_553=-99;
uParam0->f_554=-99;
uParam0->f_559=-1;
}


void func_331(int iParam0, int iParam1){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<5> Var7;
int iVar8;
int iVar9;
struct<5> Var10;
uVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
uVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
iVar2=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, uVar0, uVar1);
iVar3=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
iVar4=PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
iVar5=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar3, iVar4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("hooded_jacket"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("hood_up"), 0) !=iParam1==1 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("hood_tucked"), 0) !=iParam1==2){
if(func_333(iVar2, iParam1==1, iParam1==2, &iVar6)){
FILES::GET_SHOP_PED_COMPONENT(iVar6, &Var7);
if(iParam1 !=1){
iVar8=FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("fake_hat"), 1)){
PED::CLEAR_PED_PROP(iParam0, 0, 1);
}}
func_1227(iParam0, 11, func_49(iParam0, Var7.f_3, Var7.f_4, 11), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10)==0 && func_37(iVar5, 11, -1)){
if(func_37(iVar5, 11, Var7.f_1)){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar3, iVar4, 0);
}elseif(func_332(iVar5, 10, &iVar9, -1)){
if(func_37(iVar9, 11, Var7.f_1)){
FILES::GET_SHOP_PED_COMPONENT(iVar9, &Var10);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var10.f_3, Var10.f_4, 0);
}}}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("crew_logo"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ie_draw_16"), 0) && iVar5 !=joaat("dlc_mp_ie_m_decl_1_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_ie_m_decl_1_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ie_draw_19"), 0) && iVar5 !=joaat("dlc_mp_ie_m_decl_2_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_ie_m_decl_2_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("gorka_suit"), 0)){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_x17_m_decl_10_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 721933872, 0) && iVar5 !=joaat("dlc_mp_fixer_m_decl_0_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_fixer_m_decl_0_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 383888868, 0) && iVar5 !=joaat("dlc_mp_fixer_m_decl_1_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_fixer_m_decl_1_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("crew_logo"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ie_draw_16"), 0) && iVar5 !=joaat("dlc_mp_ie_f_decl_1_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_ie_f_decl_1_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ie_draw_19"), 0) && iVar5 !=joaat("dlc_mp_ie_f_decl_2_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_ie_f_decl_2_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("gorka_suit"), 0)){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_x17_f_decl_10_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 507034778, 0) && iVar5 !=joaat("dlc_mp_fixer_f_decl_1_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_fixer_f_decl_1_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 201267239, 0) && iVar5 !=joaat("dlc_mp_fixer_f_decl_2_0")){
FILES::GET_SHOP_PED_COMPONENT(joaat("dlc_mp_fixer_f_decl_2_0"), &Var7);
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
}}}}}}

int func_332(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
iVar0=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
iVar1=0;
while (iVar1 < iVar0){
FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, uParam2, &uVar2, &iVar3);
if(iVar3==iParam1){
if(*uParam2 !=0 && *uParam2 !=joaat("0")){
if(iParam3==-1 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*uParam2, iParam3, iVar3)){
return 1;
}}}
iVar1++;
}
return 0;
}

int func_333(int iParam0, bool bParam1, bool bParam2, var uParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
*uParam3=-1;
iVar0=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
iVar1=0;
while (iVar1 < iVar0){
FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, uParam3, &uVar2, &iVar3);
if((((iVar3==11 && *uParam3 !=0) && *uParam3 !=joaat("0")) && bParam1==FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*uParam3, joaat("hood_up"), 0)) && bParam2==FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*uParam3, joaat("hood_tucked"), 0)){
return 1;
}
iVar1++;
}
return 0;
}


void func_334(var uParam0){
var uVar0;
if(uParam0->f_550 !=-99){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_646.f_2) && !PED::IS_PED_INJURED(uParam0->f_646.f_2)){
uVar0=uParam0->f_646.f_2;
}
if(func_335(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_550, func_48(uVar0, 2))){
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(14);
Stack.Push(uParam0->f_550);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}else{
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(14);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}}else{
Stack.Push(PLAYER::PLAYER_PED_ID());
Stack.Push(14);
Stack.Push(uParam0->f_550);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(-1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Call_Loc(uParam0->f_485);
}}}

int func_335(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==joaat("mp_f_freemode_01")){
if((iParam2 >=60 && iParam2 <=66) || (iParam2 >=18 && iParam2 <=23)){
if(((((((((iParam1 >=19 && iParam1 <=26) || (iParam1 >=27 && iParam1 <=34)) || (iParam1 >=35 && iParam1 <=42)) || (iParam1 >=43 && iParam1 <=50)) || (iParam1 >=59 && iParam1 <=66)) || (iParam1 >=75 && iParam1 <=82)) || (iParam1 >=91 && iParam1 <=98)) || (iParam1 >=99 && iParam1 <=106)) || (iParam1 >=107 && iParam1 <=114)){
return 0;
}
if(iParam1 >=func_56(iParam0)){
func_1184(iParam0, 14, iParam1, -1);
if(Global_2883589==joaat("cu_xmas_clothes")){
return 0;
}}
if(iParam1 >=327){
iVar0=-1;
iVar0=func_136(iParam0, iParam1, 14, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl"), 1)){
return 0;
}
switch (Global_2883588){
case joaat("dlc_mp_beach_f_head2_0"):
case joaat("dlc_mp_beach_f_head2_1"):
case joaat("dlc_mp_beach_f_head2_2"):
case joaat("dlc_mp_beach_f_head2_3"):
case joaat("dlc_mp_beach_f_head2_4"):
case joaat("dlc_mp_beach_f_head2_5"):
case joaat("dlc_mp_beach_f_head2_6"):
return 0;
break;
case joaat("dlc_mp_beach_f_head4_0"):
case joaat("dlc_mp_beach_f_head4_1"):
case joaat("dlc_mp_beach_f_head4_2"):
case joaat("dlc_mp_beach_f_head4_3"):
case joaat("dlc_mp_beach_f_head4_4"):
case joaat("dlc_mp_beach_f_head4_5"):
case joaat("dlc_mp_beach_f_head4_6"):
return 0;
break;
}}}elseif((iParam2 >=85 && iParam2 <=91) || (iParam2 >=30 && iParam2 <=34)){
if(iParam1 >=131 && iParam1 <=154){
return 0;
}}}
return 1;
}

int func_336(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_342(iParam0), 64);
StringCopy(&cVar1, func_340(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_338(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_337(iParam0) / fVar4);
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


float func_337(int iParam0){
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


void func_338(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_339(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_339(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}


var func__340(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_316(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_341(&uVar1);
}}else{
return func_341(&(Global_23270.f_7488[iParam0 /*16*/]));
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


var func__341(var uParam0){
return uParam0;
}


char* func_342(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_316(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_341(&uVar0);
}else{
return func_341(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


float func_343(){
return Global_23270.f_6319;
}

int func_344(var uParam0){
if(uParam0->f_644 && uParam0->f_531==6){
return 1;
}
return 0;
}


void func_345(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_323(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_368(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23270){
if(func_336(29, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_338(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_364(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar61, func_342(29), 64);
StringCopy(&cVar62, func_340(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_363(Global_23267, Global_23268, fParam5, fVar55, 0, 0, 0, 255);
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
func_363(Global_23267, (Global_23268 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23268 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_362();
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
func_362();
func_360((((Global_23267 + fParam5) - 0.00390625f) - func_361("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_362();
func_360((((Global_23267 + fParam5) - 0.00390625f) - func_361("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
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
func_363(Global_23267, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
func_336(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_359(fVar40);
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
func_363(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_359(fVar40);
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
func_336(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_358(Global_23270.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_5165), func_340(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_359(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_363(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_359(fVar40);
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
func_359(fVar40);
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
func_363(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_359(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_336(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_359(fVar40);
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
func_363(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_359(fVar40);
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
func_336(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_358(Global_4540953.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_342(Global_4540953.f_67), func_340(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_353(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
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
if(func_336(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_336(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_336(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_336(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_336(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_350(bVar32);
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
if(func_336(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_336(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_358(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[(iVar22 + iVar28)]), func_340(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[(iVar22 + iVar28)]), func_340(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_265() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_351(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
if(func_336(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_336(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_358(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[(iVar22 + iVar14)]), func_340(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[(iVar22 + iVar14)]), func_340(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[(iVar22 + iVar14)]), func_340(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_350(bVar32);
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
if(func_336(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_336(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_336(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_336(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_349((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_350(bVar32);
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
if(func_336(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_336(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_336(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_336(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_351(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_348((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_336(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_336(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_336(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_336(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_336(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_358(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_336(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_358(Global_23270.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_342(Global_23270.f_4824[iVar22]), func_340(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_347(Global_23270.f_4824[iVar22])), (fVar37 * func_347(Global_23270.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_336(26, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_860(0);
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
func_346(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_346(int iParam0){
Global_1655472.f_1163=iParam0;
}


float func_347(int iParam0){
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


void func_348(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_349(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


void func_350(bool bParam0){
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


void func_351(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_352(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_352(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_353(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_323(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_368(bParam4, bParam8)){
return;
}
if(func_356()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_64(PLAYER::PLAYER_ID(), 0)){
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
func_355(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_355(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_354(&(Global_23270.f_5393[iVar1 /*4*/]));
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
func_355(&Global_4540953);
if(Global_4540953.f_20==-1){
func_354(&(Global_4540953.f_16));
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


void func_354(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_355(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_356(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_357()){
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

int func_357(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_358(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_359(float fParam0){
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


void func_360(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_361(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_362();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_362(){
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


void func_363(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_364(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
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
func_367(Global_23270.f_5661, 1);
}else{
func_367(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_366(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_336(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_365(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
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


float func_365(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_366(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_351(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_367(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}

int func_368(bool bParam0, bool bParam1){
if(Global_2672505.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_370(8, -1) && func_369() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_369(){
return Global_1574993;
}


bool func_370(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_371(var uParam0){
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
if(func_390()){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar4=2;
set_warning_message_with_header("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar4, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bVar1=true;
}}elseif(!NETWORK::IS_USER_OLD_ENOUGH_TO_ACCESS_STORE()){
iVar5=2;
if(func_389()){
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
NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_388(uParam0->f_6, 0, 0)));
NETWORK::OPEN_COMMERCE_STORE("", "", func_386(uParam0->f_6));
*uParam0++;
}elseif(bVar1){
*uParam0++;
}}elseif(*uParam0==2){
if(!NETWORK::IS_COMMERCE_STORE_OPEN()){
*uParam0=0;
uParam0->f_1=0;
}}elseif(*uParam0==3){
if(func_372(&uVar7, 1)){
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
NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100733.f_1398)), Global_100733.f_1402, MISC::GET_HASH_KEY(func_388(uParam0->f_6, 0, 0)));
NETWORK::OPEN_COMMERCE_STORE("", "", func_386(uParam0->f_6));
}
*uParam0=2;
}}else{
*uParam0=2;
}}
return 1;
}elseif(((uParam0->f_4 && !func_390()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || uParam0->f_5){
uParam0->f_5=1;
iVar8=2;
set_warning_message_with_header("PM_INF_QMFT", "STORE_CON_ONL", iVar8, 0, false, -1, 0, 0, true, 0);
if(PAD::IS_CONTROL_PRESSED(2, 201)){
uParam0->f_4=func_390();
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

int func_372(var uParam0, bool bParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=2;
if(Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0){
func_385(&Global_2103068);
func_385(&(Global_2103068.f_49));
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
}
Global_2103068.f_2=MISC::GET_FRAME_COUNT();
iVar1=-1;
if(func_383()){
if(NETWORK::NETWORK_IS_NP_AVAILABLE()==0){
iVar1=NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
}}
if((func_383() && (((iVar1==4 || iVar1==2) || iVar1==1) || iVar1==5)) || (!func_381() && NETWORK::NETWORK_IS_SIGNED_ONLINE())){
if(NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS()){
func_378(&(Global_2103068.f_3), func_380(&(Global_2103068.f_3)));
if(!MISC::IS_BIT_SET(*uParam0, 4)){
MISC::SET_BIT(uParam0, 4);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_376(&(Global_2103068.f_3), 0);
}}else{
if(iVar1==4){
set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==2){
set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==1){
set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==5){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(!func_381()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, false);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_385(&(Global_2103068.f_49));
func_385(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
return 1;
}}}else{
func_378(&(Global_2103068.f_3), func_380(&(Global_2103068.f_3)));
if((func_375(&(Global_2103068.f_49)) && !func_373(&(Global_2103068.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE()){
MISC::SET_BIT(uParam0, 3);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_376(&(Global_2103068.f_3), 0);
}elseif(!MISC::IS_BIT_SET(*uParam0, 3)){
if(!MISC::IS_BIT_SET(*uParam0, 1)){
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
MISC::SET_BIT(uParam0, true);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_376(&(Global_2103068.f_3), 0);
}}
if(func_375(&Global_2103068)){
if(!func_373(&Global_2103068, 4000, 1)){
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
func_385(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
return 1;
}}}else{
func_385(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
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
func_385(&(Global_2103068.f_49));
func_385(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
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
func_385(&(Global_2103068.f_49));
func_385(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_384(0);
return 1;
}}}}}
return 0;
}

int func_373(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_374(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_374(var uParam0, bool bParam1, bool bParam2){
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


bool func_375(var uParam0){
return uParam0->f_1;
}


void func_376(var uParam0, bool bParam1){
func_377(uParam0);
if(bParam1){
func_384(0);
}
uParam0->f_35=1;
}


void func_377(var uParam0){
struct<46> Var0;
Var0.f_41=1;
*uParam0={
Var0 
};
}


void func_378(var uParam0, int iParam1){
if(iParam1==1){
*uParam0=0;
func_379(uParam0);
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


void func_379(var uParam0){
uParam0->f_35=0;
}

int func_380(var uParam0){
return uParam0->f_35;
}

int func_381(){
if(func_382()){
return 0;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==0){
return 0;
}
return 1;
}


bool func_382(){
return Global_2695033;
}


bool func_383(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_384(bool bParam0){
HUD::BUSYSPINNER_OFF();
if(bParam0){
HUD::PRELOAD_BUSYSPINNER();
}}


void func_385(var uParam0){
uParam0->f_1=0;
}

int func_386(int iParam0){
switch (func_387(iParam0)){
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

int func_387(int iParam0){
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


char* func_388(int iParam0, int iParam1, bool bParam2){
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


bool func_389(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_390(){
return NETWORK::NETWORK_IS_CABLE_CONNECTED();
}

int func_391(char* sParam0){
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

int func_392(char* sParam0){
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

int func_393(char* sParam0){
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

int func_394(char* sParam0){
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

int func_395(char* sParam0){
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


void func_396(char* sParam0){
if(Global_23270.f_5162 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=1;
Global_23270.f_5159++;
StringCopy(&(Global_23270.f_5110[Global_23270.f_5162 /*16*/]), sParam0, 64);
Global_23270.f_5162++;
}


char* func_397(char* sParam0, bool bParam1){
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

int func_398(char* sParam0){
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

int func_399(var uParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam2==1){
func_438(&(uParam0->f_491), &Global_4538683, 1, func_803(uParam0), -1, &(uParam0->f_722), &(uParam0->f_725));
iVar0=0;
while (iVar0 < Global_4538683.f_252){
Stack.Push(iParam1);
Stack.Push(Global_4538683.f_126[iVar0]);
Stack.Push(Global_4538683[iVar0]);
Call_Loc(uParam0->f_489);
Stack.Push(iParam1);
Stack.Push(Global_4538683.f_126[iVar0]);
Stack.Push(Global_4538683[iVar0]);
Call_Loc(uParam0->f_486);
if(StackVal && StackVal){
return 1;
}
iVar0++;
}}elseif(iParam2==2){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_438(&(uParam0->f_491), &Global_4538683, 0, func_803(uParam0), -1, &(uParam0->f_722), &(uParam0->f_725));
iVar1=0;
while (iVar1 < Global_4538683.f_252){
Stack.Push(iParam1);
Stack.Push(Global_4538683.f_126[iVar1]);
Stack.Push(Global_4538683[iVar1]);
Call_Loc(uParam0->f_489);
Stack.Push(iParam1);
Stack.Push(Global_4538683.f_126[iVar1]);
Stack.Push(Global_4538683[iVar1]);
Call_Loc(uParam0->f_486);
if(StackVal && StackVal){
return 1;
}
iVar1++;
}}else{
iVar3=func_437();
iVar2=0;
while (iVar2 < iVar3){
if(func_436(iVar2) && !func_435(iVar2)){
return 1;
}
iVar2++;
}}}elseif(iParam2==3){
iVar4=0;
while (iVar4 < uParam0->f_618){
if(func_429(iVar4)){
if(func_428(iVar4) && !func_425(iVar4)){
return 1;
}}
iVar4++;
}}elseif(func_788(iParam2)){
iVar5=0;
while (iVar5 < func_424(iParam1, iParam2)){
if(func_404(uParam0, iParam1, iParam2, iVar5) && !func_400(uParam0, iParam1, iParam2, iVar5)){
return 1;
}
iVar5++;
}
return 0;
}
return 0;
}

int func_400(var uParam0, int iParam1, int iParam2, int iParam3){
struct<12> Var0;
if(func_634(iParam1, iParam2, iParam3, &Var0, func_640(uParam0->f_529))){
if(!func_401(Var0.f_11, 2, -1)){
return 0;
}
return 1;
}
return 1;
}

int func_401(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78338;
if(iParam2 !=-1){
iVar0=iParam2;
}
if(func_402(iParam0, iParam1, &iVar2, &uVar1)){
iVar3=func_17(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_402(int iParam0, int iParam1, var uParam2, var uParam3){
int iVar0;
*uParam2=14192;
iVar0=func_403(iParam0);
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=2379;
break;
case 1:
*uParam2=2380;
break;
case 2:
*uParam2=2381;
break;
case 3:
*uParam2=2382;
break;
case 4:
*uParam2=2383;
break;
case 5:
*uParam2=2384;
break;
case 6:
*uParam2=2385;
break;
case 7:
*uParam2=2386;
break;
case 8:
*uParam2=2387;
break;
case 9:
*uParam2=2388;
break;
case 10:
*uParam2=2389;
break;
case 11:
*uParam2=2390;
break;
case 12:
*uParam2=2942;
break;
case 13:
*uParam2=2944;
break;
case 14:
*uParam2=6505;
break;
case 15:
*uParam2=6507;
break;
case 16:
*uParam2=10296;
break;
default:
return 0;
break;
}
break;
case 2:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=2367;
break;
case 1:
*uParam2=2368;
break;
case 2:
*uParam2=2369;
break;
case 3:
*uParam2=2370;
break;
case 4:
*uParam2=2371;
break;
case 5:
*uParam2=2372;
break;
case 6:
*uParam2=2373;
break;
case 7:
*uParam2=2374;
break;
case 8:
*uParam2=2375;
break;
case 9:
*uParam2=2376;
break;
case 10:
*uParam2=2377;
break;
case 11:
*uParam2=2378;
break;
case 12:
*uParam2=2941;
break;
case 13:
*uParam2=2943;
break;
case 14:
*uParam2=6504;
break;
case 15:
*uParam2=6506;
break;
case 16:
*uParam2=10295;
break;
default:
return 0;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14192;
}

int func_403(int iParam0){
switch (iParam0){
case 2086722024:
return 0;
break;
case -1911587515:
return 1;
break;
case -1882357567:
return 2;
break;
case -969019995:
return 3;
break;
case -411291615:
return 4;
break;
case -82979004:
return 5;
break;
case 218692410:
return 6;
break;
case 511680047:
return 7;
break;
case 558867407:
return 8;
break;
case 808796570:
return 9;
break;
case -1605550121:
return 10;
break;
case -1378886948:
return 11;
break;
case -1142819072:
return 12;
break;
case -899836937:
return 13;
break;
case 1454746793:
return 14;
break;
case 1677117227:
return 15;
break;
case 1931240822:
return 16;
break;
case -2125331999:
return 17;
break;
case -2146762937:
return 18;
break;
case -1919575460:
return 19;
break;
case 1867669166:
return 20;
break;
case 1562425931:
return 21;
break;
case 1271240597:
return 22;
break;
case -43115055:
return 23;
break;
case -1731373935:
return 24;
break;
case -1422100113:
return 25;
break;
case -463508556:
return 26;
break;
case -963301344:
return 27;
break;
case 2063210751:
return 28;
break;
case -2003094463:
return 29;
break;
case -1888632346:
return 30;
break;
case -1384776202:
return 31;
break;
case 1107568404:
return 32;
break;
case -412069578:
return 33;
break;
case 1236833733:
return 34;
break;
case 2004250944:
return 35;
break;
case 544883529:
return 36;
break;
case 1446293181:
return 37;
break;
case -1964074960:
return 38;
break;
case -1565538382:
return 39;
break;
case 1752814407:
return 40;
break;
case -1662501853:
return 41;
break;
case -1216122527:
return 42;
break;
case 1668958248:
return 43;
break;
case 813687348:
return 44;
break;
case 1121027799:
return 45;
break;
case -1437018652:
return 46;
break;
case -1133250022:
return 47;
break;
case 1974922401:
return 48;
break;
case -1751830435:
return 49;
break;
case -737105609:
return 50;
break;
case -1044282215:
return 51;
break;
case 128880754:
return 52;
break;
case -1214833480:
return 53;
break;
case -853522486:
return 54;
break;
case -1811655273:
return 55;
break;
case -1040961166:
return 56;
break;
case 1888456366:
return 57;
break;
case -1639552485:
return 58;
break;
case 1348226632:
return 59;
break;
case 2125933309:
return 60;
break;
case 754026355:
return 61;
break;
case 1526948758:
return 62;
break;
case -902969915:
return 63;
break;
case -69457631:
return 64;
break;
case -312701918:
return 65;
break;
case 824579000:
return 66;
break;
case 585856831:
return 67;
break;
case 1226458016:
return 68;
break;
case 987998003:
return 69;
break;
case 1819413071:
return 70;
break;
case 1583246888:
return 71;
break;
case -1577847470:
return 72;
break;
case -2026650806:
return 73;
break;
case -1429665160:
return 74;
break;
case -1185994876:
return 75;
break;
case -2142554759:
return 76;
break;
case -589631845:
return 77;
break;
case -1637322333:
return 78;
break;
case -1876568802:
return 79;
break;
case -851292326:
return 80;
break;
case 1859818120:
return 81;
break;
case -1515880415:
return 82;
break;
case -432930795:
return 83;
break;
case 796201630:
return 84;
break;
case 1170095920:
return 85;
break;
case 1259981287:
return 86;
break;
case 1632499279:
return 87;
break;
case -1208917743:
return 88;
break;
case -1245356871:
return 89;
break;
case -567923298:
return 90;
break;
case -932249040:
return 91;
break;
case -221587773:
return 92;
break;
case -845116305:
return 93;
break;
case 381918900:
return 94;
break;
case 83032851:
return 95;
break;
case 705709389:
return 96;
break;
case 410559006:
return 97;
break;
case -850926612:
return 98;
break;
case -1093056753:
return 99;
break;
case 1258643301:
return 100;
break;
case 865874067:
return 101;
break;
case 627151902:
return 102;
break;
case -2142352902:
return 103;
break;
case -407070503:
return 104;
break;
case 1502608510:
return 105;
break;
case 827528886:
return 106;
break;
case -781461791:
return 107;
break;
case -474875027:
return 108;
break;
case -1242030086:
return 109;
break;
case 137348200:
return 110;
break;
case -2121779449:
return 111;
break;
case 1876005786:
return 112;
break;
case -1641844675:
return 113;
break;
case -1939452733:
return 114;
break;
case 1595175476:
return 115;
break;
case 1888141884:
return 116;
break;
case 859096981:
return 117;
break;
case 551756530:
return 118;
break;
case 1439272126:
return 119;
break;
case 1158474565:
return 120;
break;
case -109358053:
return 121;
break;
case -406605652:
return 122;
break;
case 509746672:
return 123;
break;
case 244809299:
return 124;
break;
case -651750537:
return 125;
break;
case 1816410231:
return 126;
break;
case -2059015562:
return 127;
break;
case 1945094090:
return 128;
break;
case -1458261485:
return 129;
break;
case -1755738467:
return 130;
break;
case -846234872:
return 131;
break;
case -1144170620:
return 132;
break;
case -251641367:
return 133;
break;
case -566158229:
return 134;
break;
case -859506285:
return 135;
break;
case 1823490339:
return 136;
break;
case -2074414980:
return 137;
break;
case 748741188:
return 138;
break;
case 664000554:
return 139;
break;
case 374125980:
return 140;
break;
case 1933864846:
return 141;
break;
case 1620822589:
return 142;
break;
case 1304536201:
return 143;
break;
case 1024459558:
return 144;
break;
case -1167196704:
return 145;
break;
case -1484564469:
return 146;
break;
case -1728267522:
return 147;
break;
case -2059818253:
return 148;
break;
case 1995902574:
return 149;
break;
case 1639965688:
return 150;
break;
case 1397114629:
return 151;
break;
case -1985437042:
return 152;
break;
case 2060125395:
return 153;
break;
case 1845619521:
return 154;
break;
case 1352314995:
return 155;
break;
case 1121916156:
return 156;
break;
case 890173784:
return 157;
break;
case 646995035:
return 158;
break;
case 885782742:
return 159;
break;
case 645225513:
return 160;
break;
case 173548527:
return 161;
break;
case -421803070:
return 162;
break;
case 1299978497:
return 163;
break;
case 1529427035:
return 164;
break;
case 342566624:
return 165;
break;
case 575062679:
return 166;
break;
case -2035840169:
return 167;
break;
case -1807833467:
return 168;
break;
case 1762447394:
return 169;
break;
case 2001923246:
return 170;
break;
case 178590600:
return 171;
break;
case 1262851572:
return 172;
break;
case 537411450:
return 173;
break;
case 785046783:
return 174;
break;
case -2080536733:
return 175;
break;
case -1640317987:
return 176;
break;
case 1737477768:
return 177;
break;
case 162597385:
return 178;
break;
case 223154493:
return 179;
break;
case 2140763608:
return 180;
break;
case 1886967703:
return 181;
break;
case 1237289509:
return 182;
break;
case -1236704457:
return 183;
break;
case -1467824214:
return 184;
break;
case -1595623314:
return 185;
break;
case -1829299053:
return 186;
break;
case -1581270496:
return 187;
break;
case -736238561:
return 188;
break;
}
switch (iParam0){
case 1479840145:
return 189;
break;
case 356387741:
return 190;
break;
case 653766416:
return 191;
break;
case -1922761743:
return 192;
break;
case -1625383068:
return 193;
break;
case 1758409414:
return 194;
break;
case 2048251219:
return 195;
break;
case -1001100849:
return 196;
break;
case -711848886:
return 197;
break;
case -1614503760:
return 198;
break;
case -1060874703:
return 199;
break;
case -1669067343:
return 200;
break;
case -1505615571:
return 201;
break;
case -136756130:
return 202;
break;
case 1503430607:
return 203;
break;
case 1909897283:
return 204;
break;
case -1005003578:
return 205;
break;
case -734266100:
return 206;
break;
case 1360852708:
return 207;
break;
case 729066388:
return 208;
break;
case 914374215:
return 209;
break;
case 558502875:
return 210;
break;
case -1591241840:
return 211;
break;
case -1827014795:
return 212;
break;
case -876282585:
return 213;
break;
case -1180870440:
return 214;
break;
case -1502662020:
return 215;
break;
case -1785163569:
return 216;
break;
case 80113449:
return 217;
break;
case -216740922:
return 218;
break;
case -533027310:
return 219;
break;
case -829553991:
return 220;
break;
case -531257788:
return 221;
break;
case -827784469:
return 222;
break;
case 744660972:
return 223;
break;
case 899625573:
return 224;
break;
case 266299110:
return 225;
break;
case -1641282671:
return 226;
break;
case -195383331:
return 227;
break;
case 33245982:
return 228;
break;
case -686033552:
return 229;
break;
case 1700172263:
return 230;
break;
case -1163314037:
return 231;
break;
case -939239615:
return 232;
break;
case -1579861681:
return 233;
break;
case -1237032403:
return 234;
break;
case 1942740285:
return 235;
break;
case 558544952:
return 236;
break;
case 1335891174:
return 237;
break;
case 2129064819:
return 238;
break;
case -699850186:
return 239;
break;
case -864874870:
return 240;
break;
case 333978995:
return 241;
break;
case 1109522918:
return 242;
break;
case -635535959:
return 243;
break;
case -966961625:
return 244;
break;
case -595983772:
return 245;
break;
case 1319397047:
return 246;
break;
case 15059771:
return 247;
break;
case -679880450:
return 248;
break;
case -1968193685:
return 249;
break;
case 1656811402:
return 250;
break;
case 1409143300:
return 251;
break;
case 1047930613:
return 252;
break;
case 834145657:
return 253;
break;
case 1301103915:
return 254;
break;
case 5679807:
return 255;
break;
case 1241824794:
return 256;
break;
case 1558963176:
return 257;
break;
case 1466156191:
return 258;
break;
case 1713299989:
return 259;
break;
case 1415036551:
return 260;
break;
case 1153834856:
return 261;
break;
case 1360836629:
return 262;
break;
case -1622780825:
return 263;
break;
case -1374686726:
return 264;
break;
case 2040629534:
return 265;
break;
case -1973146973:
return 266;
break;
case -657864855:
return 267;
break;
case 1377860065:
return 268;
break;
case 113042203:
return 269;
break;
case -712703828:
return 270;
break;
case 200109448:
return 271;
break;
case -705035870:
return 272;
break;
case -1340787251:
return 273;
break;
case -107624231:
return 274;
break;
case -784730090:
return 275;
break;
case -1628925068:
return 276;
break;
case 1496156159:
return 277;
break;
case -1247690782:
return 278;
break;
case -1569777283:
return 279;
break;
case 1939083358:
return 280;
break;
case -2050050861:
return 281;
break;
case -1086019650:
return 282;
break;
case -796734918:
return 283;
break;
case -2051001154:
return 284;
break;
case -1753327558:
return 285;
break;
case -778482577:
return 286;
break;
case -487919854:
return 287;
break;
case 1063167984:
return 288;
break;
case 1352190564:
return 289;
break;
case 1918883225:
return 290;
break;
case 2140499972:
return 291;
break;
case -1622298764:
return 292;
break;
case -1384887359:
return 293;
break;
case -1451684059:
return 294;
break;
case -675288142:
return 295;
break;
case -984234274:
return 296;
break;
case -258728614:
return 297;
break;
case 516356543:
return 298;
break;
case 200791073:
return 299;
break;
case 976334996:
return 300;
break;
case 743642327:
return 301;
break;
case 1511583842:
return 302;
break;
case 1238290382:
return 303;
break;
case -587327163:
return 304;
break;
case -1009457421:
return 305;
break;
case 1852062739:
return 306;
break;
case 1561958782:
return 307;
break;
case -1779135693:
return 308;
break;
case 2022396001:
return 309;
break;
case -1277868344:
return 310;
break;
case -1046224283:
return 311;
break;
case -1992232544:
return 312;
break;
case -1511904542:
return 313;
break;
case 338954980:
return 314;
break;
case 644853595:
return 315;
break;
case 928043293:
return 316;
break;
case 1233483142:
return 317;
break;
case 455547074:
return 318;
break;
case 753187901:
return 319;
break;
case -1381379572:
return 320;
break;
case -978746865:
return 321;
break;
case 946792344:
return 322;
break;
case -366195948:
return 323;
break;
case -722394978:
return 324;
break;
case 216207489:
return 325;
break;
case 2124706822:
return 326;
break;
case 832559610:
return 327;
break;
case -791212145:
return 328;
break;
case 1426003941:
return 329;
break;
case -2062125037:
return 330;
break;
case 2002508958:
return 331;
break;
case -1983118982:
return 332;
break;
case 825938009:
return 333;
break;
case 1670231294:
return 334;
break;
case 1439144306:
return 335;
break;
case -2008613264:
return 336;
break;
case 137657929:
return 337;
break;
case 850282205:
return 338;
break;
}
switch (iParam0){
case 964358912:
return 339;
break;
case -1735315153:
return 340;
break;
case -2034102895:
return 341;
break;
case 1999400550:
return 342;
break;
case 1839705233:
return 343;
break;
case 1466269709:
return 344;
break;
case -469722811:
return 345;
break;
case -692060480:
return 346;
break;
case 1034427337:
return 347;
break;
case 773946556:
return 348;
break;
case 332646433:
return 349;
break;
case 101002372:
return 350;
break;
case -259915394:
return 351;
break;
case -491231765:
return 352;
break;
case 1624727807:
return 353;
break;
case 1920336964:
return 354;
break;
case -1998999285:
return 355;
break;
case -1691200068:
return 356;
break;
case -1249146258:
return 357;
break;
case -942723339:
return 358;
break;
case -693318480:
return 359;
break;
case -465836082:
return 360;
break;
case -214792773:
return 361;
break;
case 209893467:
return 362;
break;
case -163640692:
return 363;
break;
case 2012777989:
return 364;
break;
case 1782084221:
return 365;
break;
case 1532613824:
return 366;
break;
case 1318894406:
return 367;
break;
case -818529153:
return 368;
break;
case -1578376725:
return 369;
break;
case -1832828010:
return 370;
break;
case -2072074479:
return 371;
break;
case 107719401:
return 372;
break;
case 1090494188:
return 373;
break;
case -1065738777:
return 374;
break;
case -841762662:
return 375;
break;
case -1694870808:
return 376;
break;
case 689718031:
return 377;
break;
case 1188920977:
return 378;
break;
case 1425414854:
return 379;
break;
case 1680914747:
return 380;
break;
case -1397044638:
return 381;
break;
case -1202658930:
return 382;
break;
case -2077294849:
return 383;
break;
case 1871566269:
return 384;
break;
case -638735717:
return 385;
break;
case -885912284:
return 386;
break;
case 911795056:
return 387;
break;
case 680937451:
return 388;
break;
case -1507671294:
return 389;
break;
case -1734596619:
return 390;
break;
case -1832969157:
return 391;
break;
case -53415839:
return 392;
break;
case 646954998:
return 393;
break;
case -404995440:
return 394;
break;
case -92411949:
return 395;
break;
case -894465993:
return 396;
break;
case 1287195724:
return 397;
break;
case 790876446:
return 398;
break;
case 1070035557:
return 399;
break;
case 301242048:
return 400;
break;
case 1741013601:
return 401;
break;
case 2044421772:
return 402;
break;
case -1643561644:
return 403;
break;
case -2018242390:
return 404;
break;
case 561169449:
return 405;
break;
case 444970575:
return 406;
break;
case 1702284027:
return 407;
break;
case -514538827:
return 408;
break;
case -807559225:
return 409;
break;
case -1056910526:
return 410;
break;
case -1286391833:
return 411;
break;
case 1010978731:
return 412;
break;
case -278296374:
return 413;
break;
case 1628302349:
return 414;
break;
case 1422447491:
return 415;
break;
case 1174910465:
return 416;
break;
case 907351580:
return 417;
break;
case -1471350134:
return 418;
break;
case 492573151:
return 419;
break;
case -1903922134:
return 420;
break;
case 2146031349:
return 421;
break;
case 1931984241:
return 422;
break;
case 1432846833:
return 423;
break;
case -953555596:
return 423;
break;
case -1233304549:
return 423;
break;
case -1700569289:
return 424;
break;
case 1799422067:
return 425;
break;
case -1452856849:
return 426;
break;
case -1678668028:
return 427;
break;
case -297200608:
return 428;
break;
case 1917066264:
return 429;
break;
case -2114733193:
return 430;
break;
case 1601646962:
return 431;
break;
case 1361941727:
return 432;
break;
case 1796589743:
return 433;
break;
case -1668568166:
return 434;
break;
case -1908470015:
return 435;
break;
case -1204722971:
return 436;
break;
case -1444166054:
return 437;
break;
case -1083477643:
return 438;
break;
case -1319381674:
return 439;
break;
case -866579660:
return 440;
break;
case -151756966:
return 441;
break;
case 423011294:
return 442;
break;
case 159450227:
return 443;
break;
case 1002989825:
return 444;
break;
case 773705132:
return 445;
break;
case 1020488435:
return 446;
break;
case 778620446:
return 447;
break;
case 1962433344:
return 448;
break;
case 1733476341:
return 449;
break;
case -2020802455:
return 450;
break;
case 770231294:
return 451;
break;
case 1612460136:
return 452;
break;
case 1309412424:
return 453;
break;
case 832559610:
return 455;
break;
case 592919913:
return 456;
break;
case 2030987546:
return 457;
break;
case -1750454803:
return 458;
break;
case -2133000109:
return 459;
break;
case 238099193:
return 460;
break;
case -1737118:
return 461;
break;
case -359443522:
return 462;
break;
case -598689991:
return 463;
break;
case 618809439:
return 464;
break;
case 388017372:
return 465;
break;
case 66225792:
return 466;
break;
case -214047465:
return 467;
break;
case -1287625671:
return 468;
break;
case -1643038245:
return 469;
break;
case 424882269:
return 470;
break;
case -343911240:
return 471;
break;
case -53479593:
return 472;
break;
case -956003391:
return 473;
break;
case 1651163783:
return 474;
break;
case 1959028538:
return 475;
break;
case 1576286618:
return 476;
break;
case 809918015:
return 477;
break;
case -699848470:
return 478;
break;
case -938963863:
return 479;
break;
case -1396746805:
return 480;
break;
case -617521066:
return 481;
break;
case -1537104552:
return 482;
break;
case -1438584459:
return 483;
break;
case -1184165951:
return 484;
break;
case -951538820:
return 485;
break;
case -1796389178:
return 486;
break;
case -1564482965:
return 487;
break;
case 571695376:
return 488;
break;
case -1350988574:
return 489;
break;
case -527667449:
return 490;
break;
case 990258165:
return 491;
break;
case 1290804003:
return 492;
break;
case 1059618708:
return 493;
break;
case 234888640:
return 494;
break;
case -89557357:
return 495;
break;
case 697291999:
return 496;
break;
case 389820472:
return 497;
break;
case 1917084907:
return 498;
break;
case 1551055177:
return 499;
break;
case -1765855776:
return 500;
break;
case -848116519:
return 501;
break;
case 2129418862:
return 502;
break;
}
switch (iParam0){
case 741836376:
return 503;
break;
case -173729484:
return 504;
break;
case 668204433:
return 505;
break;
case -2128891869:
return 506;
break;
case 1936790734:
return 507;
break;
case 1555523415:
return 508;
break;
case 1310804523:
return 509;
break;
case 205374789:
return 510;
break;
case -1187045551:
return 511;
break;
case -948126772:
return 512;
break;
case -1800186310:
return 513;
break;
case -1562774905:
return 514;
break;
case -266826481:
return 515;
break;
case -35510110:
return 516;
break;
case -2095774068:
return 517;
break;
case 628050754:
return 518;
break;
case 389656279:
return 519;
break;
case 1209274507:
return 520;
break;
case 971338798:
return 521;
break;
case -1219727614:
return 522;
break;
case -980481145:
return 523;
break;
case 1677446030:
return 524;
break;
case -1779191939:
return 525;
break;
case 260481701:
return 526;
break;
case 21562922:
return 527;
break;
case 812901503:
return 528;
break;
case 1527134627:
return 529;
break;
case -32047166:
return 530;
break;
case -1011699139:
return 531;
break;
case -1901069835:
return 532;
break;
}
switch (iParam0){
case 367580840:
return 533;
break;
case 675150674:
return 534;
break;
case 1534956433:
return 535;
break;
case 1831614190:
return 536;
break;
}
switch (iParam0){
case 1003639867:
return 537;
break;
}
return -1;
}

int func_404(var uParam0, int iParam1, int iParam2, int iParam3){
struct<11> Var0;
char* sVar1;
struct<14> Var2;
if(func_634(iParam1, iParam2, iParam3, &Var0, func_640(uParam0->f_529))){
if(!func_409(iParam1, iParam2, iParam3, uParam0->f_529)){
return 0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_814()){
func_455(&sVar1, iParam2, Var0.f_1, iParam1, 0);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar1)){
return 0;
}}
if(Var0.f_9==0){
Stack.Push(iParam1);
Stack.Push(2);
Stack.Push(Var0.f_8);
Stack.Push(-1);
Call_Loc(uParam0->f_490);
Var2={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
if(!MISC::IS_BIT_SET(Var2.f_6, 1)){
return 0;
}
return 1;
}elseif(Var0.f_9==1 || Var0.f_9==2){
if(Var0.f_10==-1){
return 1;
}
if(Var0.f_5==1){
if(!func_405(Var0.f_10)){
return 0;
}
return 1;
}elseif(Var0.f_5==4){
if(!func_405(Var0.f_10)){
return 0;
}
return 1;
}else{
return 1;
}}}
return 1;
}

int func_405(var uParam0){
var uVar0;
int iVar1;
if(func_408()){
return 0;
}
uVar0=func_406(uParam0);
iVar1=uParam0;
return MISC::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_406(var uParam0){
int iVar0;
iVar0=func_17(func_407(uParam0), -1, 0);
return iVar0;
}

int func_407(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_36(iVar0);
if((func_21()==0 || func_34()==0) || (func_21()==999 && func_34()==999)){
switch (iVar1){
case 0:
return 741;
break;
case 1:
return 742;
break;
case 2:
return 743;
break;
case 3:
return 744;
break;
case 4:
return 745;
break;
case 5:
return 746;
break;
case 6:
return 747;
break;
case 7:
return 748;
break;
case 8:
return 749;
break;
case 9:
return 750;
break;
case 10:
return 751;
break;
}}
return 14192;
}


bool func_408(){
return Global_1575039;
}

int func_409(int iParam0, int iParam1, int iParam2, int iParam3){
struct<11> Var0;
struct<11> Var1;
struct<11> Var2;
struct<11> Var3;
if(iParam0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 6:
if(iParam3==50){
if(((((((((((((iParam2==22 || iParam2==23) || iParam2==24) || iParam2==25) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35){
return 0;
}}
switch (iParam2){
case 22:
if(func_423() && (Global_262145.f_8259 || func_278(3606, -1))){
return 1;
}
return 0;
break;
case 23:
case 24:
case 25:
case 26:
if(func_422()){
return 1;
}
return 0;
break;
case 27:
case 28:
case 29:
if(func_421()){
return 1;
}
return 0;
break;
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
if(func_420()){
return 1;
}
return 0;
break;
case 38:
if(func_278(26968, -1)){
return 1;
}
return 0;
break;
case 39:
if(func_419()){
return 1;
}
return 0;
break;
case 40:
if(func_418()){
return 1;
}
return 0;
break;
case 41:
case 42:
if(func_417()){
return 1;
}
return 0;
break;
}
break;
case 11:
if(iParam2==13){
if(func_423() && (Global_262145.f_8259 || func_278(3607, -1))){
return 1;
}
return 0;
}elseif(iParam2 >=14 && iParam2 <=43){
if(func_416()){
if(Global_262145.f_12043){
return 1;
}
if(func_634(iParam0, iParam1, iParam2, &Var0, 0) && func_413(Var0.f_10)){
return 1;
}
if(iParam2==14 && func_278(4270, -1)){
return 1;
}
elseif(iParam2==15 && func_278(4271, -1)){
return 1;
}
elseif(iParam2==16 && func_278(4272, -1)){
return 1;
}
elseif(iParam2==17 && func_278(4273, -1)){
return 1;
}
elseif(iParam2==18 && func_278(4274, -1)){
return 1;
}
elseif(iParam2==19 && func_278(4275, -1)){
return 1;
}
elseif(iParam2==20 && func_278(4276, -1)){
return 1;
}
elseif(iParam2==21 && func_278(4277, -1)){
return 1;
}
elseif(iParam2==22 && func_278(4278, -1)){
return 1;
}
elseif(iParam2==23 && func_278(4279, -1)){
return 1;
}
elseif(iParam2==24 && func_278(4280, -1)){
return 1;
}
elseif(iParam2==25 && func_278(4281, -1)){
return 1;
}
elseif(iParam2==26 && func_278(4282, -1)){
return 1;
}
elseif(iParam2==27 && func_278(4283, -1)){
return 1;
}
elseif(iParam2==28 && func_278(4284, -1)){
return 1;
}
elseif(iParam2==29 && func_278(4285, -1)){
return 1;
}
elseif(iParam2==30 && func_278(4286, -1)){
return 1;
}
elseif(iParam2==31 && func_278(4287, -1)){
return 1;
}
elseif(iParam2==32 && func_278(4288, -1)){
return 1;
}
elseif(iParam2==33 && func_278(4289, -1)){
return 1;
}
elseif(iParam2==34 && func_278(4290, -1)){
return 1;
}
elseif(iParam2==35 && func_278(4291, -1)){
return 1;
}
elseif(iParam2==36 && func_278(4292, -1)){
return 1;
}
elseif(iParam2==37 && func_278(4293, -1)){
return 1;
}
elseif(iParam2==38 && func_278(4294, -1)){
return 1;
}
elseif(iParam2==39 && func_278(4295, -1)){
return 1;
}
elseif(iParam2==40 && func_278(4296, -1)){
return 1;
}
elseif(iParam2==41 && func_278(4297, -1)){
return 1;
}
elseif(iParam2==42 && func_278(4298, -1)){
return 1;
}
elseif(iParam2==43 && func_278(4299, -1)){
return 1;
}}
return 0;
}elseif(iParam2 >=44 && iParam2 <=69){
if(func_412()){
if(Global_262145.f_12044){
return 1;
}
if(func_634(iParam0, iParam1, iParam2, &Var1, 0) && func_413(Var1.f_10)){
return 1;
}}
return 0;
}
break;
}}elseif(iParam0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 6:
if(iParam3==50){
if(((((((((((((((iParam2==20 || iParam2==23) || iParam2==24) || iParam2==25) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37){
return 0;
}}
switch (iParam2){
case 20:
if(func_411() && ((Global_262145.f_7059 || Global_262145.f_12033) || func_278(4246, -1))){
return 1;
}
return 0;
break;
case 23:
if(func_423() && (Global_262145.f_8259 || func_278(3606, -1))){
return 1;
}
return 0;
break;
case 24:
case 25:
case 26:
case 27:
if(func_422()){
return 1;
}
return 0;
break;
case 28:
case 29:
case 30:
if(func_421()){
return 1;
}
return 0;
break;
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
if(func_420()){
return 1;
}
return 0;
break;
case 40:
if(func_278(26968, -1)){
return 1;
}
return 0;
break;
case 41:
if(func_419()){
return 1;
}
return 0;
break;
case 42:
if(func_418()){
return 1;
}
return 0;
break;
case 43:
case 44:
if(func_417()){
return 1;
}
return 0;
break;
case 45:
if(func_410()){
return 1;
}
return 0;
break;
}
break;
case 11:
if(iParam2==13){
if(func_423() && (Global_262145.f_8259 || func_278(3607, -1))){
return 1;
}
return 0;
}elseif(iParam2 >=14 && iParam2 <=43){
if(func_416()){
if(Global_262145.f_12043){
return 1;
}
if(func_634(iParam0, iParam1, iParam2, &Var2, 0) && func_413(Var2.f_10)){
return 1;
}
if(iParam2==14 && func_278(4270, -1)){
return 1;
}
elseif(iParam2==15 && func_278(4271, -1)){
return 1;
}
elseif(iParam2==16 && func_278(4272, -1)){
return 1;
}
elseif(iParam2==17 && func_278(4273, -1)){
return 1;
}
elseif(iParam2==18 && func_278(4274, -1)){
return 1;
}
elseif(iParam2==19 && func_278(4275, -1)){
return 1;
}
elseif(iParam2==20 && func_278(4276, -1)){
return 1;
}
elseif(iParam2==21 && func_278(4277, -1)){
return 1;
}
elseif(iParam2==22 && func_278(4278, -1)){
return 1;
}
elseif(iParam2==23 && func_278(4279, -1)){
return 1;
}
elseif(iParam2==24 && func_278(4280, -1)){
return 1;
}
elseif(iParam2==25 && func_278(4281, -1)){
return 1;
}
elseif(iParam2==26 && func_278(4282, -1)){
return 1;
}
elseif(iParam2==27 && func_278(4283, -1)){
return 1;
}
elseif(iParam2==28 && func_278(4284, -1)){
return 1;
}
elseif(iParam2==29 && func_278(4285, -1)){
return 1;
}
elseif(iParam2==30 && func_278(4286, -1)){
return 1;
}
elseif(iParam2==31 && func_278(4287, -1)){
return 1;
}
elseif(iParam2==32 && func_278(4288, -1)){
return 1;
}
elseif(iParam2==33 && func_278(4289, -1)){
return 1;
}
elseif(iParam2==34 && func_278(4290, -1)){
return 1;
}
elseif(iParam2==35 && func_278(4291, -1)){
return 1;
}
elseif(iParam2==36 && func_278(4292, -1)){
return 1;
}
elseif(iParam2==37 && func_278(4293, -1)){
return 1;
}
elseif(iParam2==38 && func_278(4294, -1)){
return 1;
}
elseif(iParam2==39 && func_278(4295, -1)){
return 1;
}
elseif(iParam2==40 && func_278(4296, -1)){
return 1;
}
elseif(iParam2==41 && func_278(4297, -1)){
return 1;
}
elseif(iParam2==42 && func_278(4298, -1)){
return 1;
}
elseif(iParam2==43 && func_278(4299, -1)){
return 1;
}}
return 0;
}elseif(iParam2 >=44 && iParam2 <=69){
if(func_412()){
if(Global_262145.f_12044){
return 1;
}
if(func_634(iParam0, iParam1, iParam2, &Var3, 0) && func_413(Var3.f_10)){
return 1;
}}
return 0;
}
break;
}}
return 1;
}


bool func_410(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas3"));
}


bool func_411(){
return DLC::IS_DLC_PRESENT(-1357982869);
}


bool func_412(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2017"));
}

int func_413(var uParam0){
var uVar0;
int iVar1;
if(func_408()){
return 0;
}
uVar0=func_414(uParam0);
iVar1=uParam0;
return MISC::IS_BIT_SET(uVar0, func_32(iVar1));
}

int func_414(var uParam0){
int iVar0;
iVar0=func_17(func_415(uParam0), -1, 0);
return iVar0;
}

int func_415(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_36(iVar0);
if((func_21()==0 || func_34()==0) || (func_21()==999 && func_34()==999)){
switch (iVar1){
case 0:
return 2538;
break;
case 1:
return 2539;
break;
case 2:
return 2540;
break;
case 3:
return 2541;
break;
case 4:
return 2542;
break;
case 5:
return 2543;
break;
case 6:
return 2544;
break;
case 7:
return 2545;
break;
case 8:
return 2546;
break;
case 9:
return 2547;
break;
case 10:
return 2548;
break;
}}
return 14192;
}


bool func_416(){
return DLC::IS_DLC_PRESENT(joaat("mphalloween"));
}


bool func_417(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_418(){
return DLC::IS_DLC_PRESENT(joaat("mpsecurity"));
}


bool func_419(){
return DLC::IS_DLC_PRESENT(joaat("mptuner"));
}


bool func_420(){
return DLC::IS_DLC_PRESENT(joaat("mpbiker"));
}


bool func_421(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_422(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}


var func__423(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_424(int iParam0, int iParam1){
if(iParam0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 6:
return 43;
break;
case 7:
return 30;
break;
case 8:
return 35;
break;
case 9:
return 18;
break;
case 10:
return 32;
break;
case 11:
return 93;
break;
case 14:
return 26;
break;
case 15:
return 11;
break;
}}elseif(iParam0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 6:
return 46;
break;
case 8:
return 35;
break;
case 10:
return 32;
break;
case 11:
return 93;
break;
case 13:
return 8;
break;
case 14:
return 26;
break;
case 15:
return 11;
break;
}}
return 0;
}


bool func_425(int iParam0){
return func_426(func_460(iParam0));
}

int func_426(int iParam0){
if(iParam0==-1 || iParam0==172){
return 1;
}
return MISC::IS_BIT_SET(Global_2359296[func_427() /*5568*/].f_681.f_40[(iParam0 / 32)], (iParam0 % 32));
}

int func_427(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_428(int iParam0){
return func_405(func_460(iParam0));
return 1;
}

int func_429(int iParam0){
if(func_434(iParam0)){
if(!func_433()){
return 0;
}}elseif(func_432(iParam0)){
if(!func_431()){
return 0;
}}elseif(func_430(iParam0)){
return 0;
}
return 1;
}

int func_430(int iParam0){
return 0;
}

int func_431(){
if(func_423() && (Global_262145.f_8259 || func_278(3607, -1))){
return 1;
}
return 0;
}

int func_432(int iParam0){
int iVar0;
iVar0=func_460(iParam0);
if(iVar0==92){
return 1;
}
return 0;
}

int func_433(){
return 0;
}

int func_434(int iParam0){
int iVar0;
iVar0=func_460(iParam0);
if(((iVar0==51 || iVar0==52) || iVar0==53) || iVar0==54){
return 1;
}
return 0;
}


bool func_435(int iParam0){
return func_426(func_462(iParam0));
}

int func_436(int iParam0){
if(iParam0 >=19 + 1){
if(iParam0 >=27 && iParam0 <=36){
return 1;
}
return 0;
}
return func_405(func_462(iParam0));
return 1;
}

int func_437(){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
if(iVar0==joaat("mp_m_freemode_01")){
return 30;
}
return 19;
}


void func_438(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6){
struct<401> Var0;
Var0=125;
Var0.f_126=125;
Var0.f_253=125;
Var0.f_379=10;
Var0.f_390=10;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_442(uParam0, &Var0, func_454(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, iParam4, uParam5, uParam6);
}elseif(iParam2==1){
func_441(uParam0, &Var0, func_454(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
}else{
func_439(uParam0, &Var0, func_454(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
}
*uParam1={
Var0 
};
}


void func_439(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4){
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(1);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}

int func_440(bool bParam0, bool bParam1){
if(bParam0){
if(MISC::IS_BIT_SET(Global_113648.f_668.f_1319, 2)){
return 1;
}}
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
if(!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(!MISC::IS_PS3_VERSION() && !func_383()){
return 1;
}}}
if(bParam1){
if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()){
return 0;
}}
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
return 1;
}
return 0;
}


void func_441(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
FILES::INIT_SHOP_PED_COMPONENT(&uVar0);
switch (func_151()){
case 0:
iVar3=6;
break;
case 1:
iVar3=21;
break;
case 2:
iVar3=9;
break;
}
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam2, 10, -1, 0, 0, 2);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &uVar0);
if(!FILES::IS_CONTENT_ITEM_LOCKED(uVar0)){
iVar4=(iVar3 + iVar1);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(iVar4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
iVar1++;
}
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(0));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(6);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(8);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(9);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(14);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(15);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(17);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(19);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(7);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(10);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(11);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(12);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(13);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(16);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(17);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(18);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(1));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(19);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
if(iParam4==1){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}else{
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(func_440(1, 1)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(func_76(2));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(6);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}


void func_442(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6){
struct<10> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
FILES::INIT_SHOP_PED_COMPONENT(&Var0);
switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
case joaat("mp_m_freemode_01"):
iVar3=91;
break;
case joaat("mp_f_freemode_01"):
iVar3=92;
break;
}
iVar6=1;
iVar7=0;
while (iVar7 < *uParam5){
(*uParam5)[iVar7]=0;
(*uParam6)[iVar7]=0;
iVar7++;
}
Global_2883587=iParam3;
Global_4540614=iParam4==-1;
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam2, 10, -1, 0, 0, 2);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &Var0);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var0.f_0)){
if(!func_445(Var0.f_0, Var0.f_1, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var0.f_1, joaat("night_vision"), 0)){
iVar5=func_444(&(Var0.f_9));
if(func_443(iParam4, iVar5)){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(!func_181(Var0.f_1, 2, 1, 1, -1)){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}
iVar4=(iVar3 + iVar1);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(iVar4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
}}}
iVar1++;
}
iVar5=29;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=30;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=31;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(7);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(8);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(9);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(10);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(11);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=32;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(13);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(14);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(15);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(16);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(17);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=33;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(19);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(20);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(21);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(22);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(23);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=34;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(26);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(27);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(28);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(29);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(30);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=35;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(32);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(33);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(34);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(35);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(36);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=36;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(38);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(39);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(40);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(41);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(42);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=37;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(45);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(46);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(47);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(48);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(49);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=38;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(50);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(51);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(52);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(53);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(54);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=39;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(57);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(58);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(59);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(60);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(61);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=40;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(63);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(64);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(65);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(66);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(67);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=41;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(69);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(70);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(71);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(72);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(73);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=42;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(74);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(75);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(76);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(77);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(78);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=43;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(80);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(81);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(82);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(83);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(84);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=44;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(85);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(86);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(87);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(88);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_m_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(89);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=45;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(0);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=46;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(1);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(2);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(3);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(4);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(5);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=47;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(7);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(8);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(9);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(10);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(11);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=48;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(13);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(14);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(15);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(16);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(17);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=49;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(18);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(19);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(20);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(21);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(22);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=50;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(24);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(25);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(26);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(27);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(28);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=51;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(30);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(31);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(32);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(33);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(34);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=52;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(35);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(36);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(37);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(38);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(39);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=53;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(41);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(42);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(43);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(44);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(45);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=54;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(47);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(48);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(49);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(50);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(51);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=55;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(53);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(54);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(55);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(56);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(57);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=56;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(60);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(61);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(62);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(63);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(64);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=57;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(67);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(68);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(69);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(70);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(71);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=58;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(73);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(74);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(75);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(76);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(77);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=59;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(79);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(80);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(81);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(82);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(83);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}
iVar5=60;
Global_4538680=0;
Global_4538679=0;
if(func_443(iParam4, iVar5)){
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(85);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(86);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(87);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(88);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
Stack.Push(uParam1);
Stack.Push(iParam2);
Stack.Push(joaat("mp_f_freemode_01"));
Stack.Push(iParam3);
Stack.Push(0);
Stack.Push(89);
Stack.Push(2);
Stack.Push(0);
Stack.Push(0);
Stack.Push(iVar6);
Stack.Push(0);
Stack.Push(0);
Stack.Push(-1);
Call_Loc(*uParam0);
if(Global_4538679){
MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
if(Global_4538680){
MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
}}}}

int func_443(int iParam0, int iParam1){
if(iParam0==-1){
return 1;
}
if(iParam1==iParam0){
return 1;
}
return 0;
}

int func_444(char* sParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return -2;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
switch (iVar0){
case -1928984031:
return 0;
break;
case 1833807566:
case 1357684740:
return 1;
break;
case -885693042:
case -1906069685:
return 2;
break;
case -841575530:
return 3;
break;
case -932142190:
return 4;
break;
case -2036909093:
return 5;
break;
case -1778393327:
return 6;
break;
case -77074238:
return 7;
break;
case -1965280999:
return 8;
break;
case joaat("CLO_GRM_H_0_0"):
case joaat("CLO_GRM_H_1_0"):
return 9;
break;
case joaat("CLO_GRF_H_0_0"):
case joaat("CLO_GRF_H_1_0"):
return 10;
break;
case joaat("CLO_BIM_H_0_0"):
case joaat("CLO_BIM_H_1_0"):
case joaat("CLO_BIM_H_2_0"):
case joaat("CLO_BIM_H_3_0"):
case joaat("CLO_BIM_H_4_0"):
case joaat("CLO_BIM_H_5_0"):
return 11;
break;
case joaat("CLO_BIF_H_0_0"):
case joaat("CLO_BIF_H_1_0"):
case joaat("CLO_BIF_H_2_0"):
case joaat("CLO_BIF_H_3_0"):
case joaat("CLO_BIF_H_4_0"):
case joaat("CLO_BIF_H_5_0"):
case joaat("CLO_BIF_H_6_0"):
return 12;
break;
case joaat("CLO_S1M_H_0_0"):
case joaat("CLO_S1M_H_1_0"):
case joaat("CLO_S1M_H_2_0"):
case joaat("CLO_S1M_H_3_0"):
case joaat("CLO_S2M_H_0_0"):
case joaat("CLO_S2M_H_1_0"):
case joaat("CLO_S2M_H_2_0"):
return 13;
break;
case joaat("CLO_S1F_H_0_0"):
case joaat("CLO_S1F_H_1_0"):
case joaat("CLO_S1F_H_2_0"):
case joaat("CLO_S1F_H_3_0"):
case joaat("CLO_S2F_H_0_0"):
case joaat("CLO_S2F_H_1_0"):
case joaat("CLO_S2F_H_2_0"):
return 14;
break;
case 1577121865:
case 884057515:
case 2055188806:
case 1362452146:
case -1761842625:
case 665775322:
case 618391324:
case 497473714:
case 123808807:
case -231538229:
return 15;
break;
case 396231341:
case 1312059353:
case 980600918:
case 2040481470:
case -1485364627:
return 16;
break;
case 785834208:
case 544621599:
case 1398581739:
case 1157565744:
case 1052836024:
return 17;
break;
case 885914480:
case 1110382134:
case -2025250711:
case -1223458819:
case 1806133542:
return 18;
break;
case 119592333:
case -1585051047:
case -1278497052:
case -1109736702:
case -1316574634:
return 19;
break;
case -743251029:
case -1459843521:
case -283075962:
case -997243548:
case -1711837131:
return 20;
break;
case 1346719200:
case -231468525:
case 76461768:
case 382786380:
case 690257907:
return 21;
break;
case -529982912:
case -425711954:
case -184040579:
case 187822033:
case -1722577898:
return 22;
break;
case 5888009:
case 312966308:
case -672463060:
case -231851086:
case -1527144118:
return 23;
break;
case 288802011:
case 1057005678:
case 901877232:
case 1679059605:
case 1510233717:
case -2016005616:
return 24;
break;
case 239253137:
case 1536545078:
case 834633098:
case -10053415:
case -782254908:
return 25;
break;
case 526112963:
case -655766568:
case -431298918:
case 2082181693:
case -1982485071:
return 26;
break;
case -14781889:
case -2044526518:
case -1737906985:
case 1701920483:
case -1222188463:
return 27;
break;
case -2145651656:
case 1407032252:
case 478784789:
case 1849774211:
case 992406095:
return 28;
break;
case joaat("CC_M_HS_0"):
return 29;
case joaat("CC_M_HS_1"):
return 30;
case joaat("CC_M_HS_2"):
return 31;
case joaat("CC_M_HS_3"):
return 32;
case joaat("CC_M_HS_4"):
return 33;
case joaat("CC_M_HS_5"):
return 34;
case joaat("CC_M_HS_6"):
return 35;
case joaat("CC_M_HS_7"):
return 36;
case joaat("CC_M_HS_8"):
return 37;
case joaat("CC_M_HS_9"):
return 38;
case joaat("CC_M_HS_10"):
return 39;
case joaat("CC_M_HS_11"):
return 40;
case joaat("CC_M_HS_12"):
return 41;
case joaat("CC_M_HS_13"):
return 42;
case joaat("CC_M_HS_14"):
return 43;
case joaat("CC_M_HS_15"):
return 44;
case joaat("CC_F_HS_0"):
return 45;
case joaat("CC_F_HS_1"):
return 46;
case joaat("CC_F_HS_2"):
return 47;
case joaat("CC_F_HS_3"):
return 48;
case joaat("CC_F_HS_4"):
return 49;
case joaat("CC_F_HS_5"):
return 50;
case joaat("CC_F_HS_6"):
return 51;
case joaat("CC_F_HS_7"):
return 52;
case joaat("CC_F_HS_8"):
return 53;
case joaat("CC_F_HS_9"):
return 54;
case joaat("CC_F_HS_10"):
return 55;
case joaat("CC_F_HS_11"):
return 56;
case joaat("CC_F_HS_12"):
return 57;
case joaat("CC_F_HS_13"):
return 58;
case joaat("CC_F_HS_14"):
return 59;
case joaat("CC_F_HS_15"):
return 60;
}
return -2;
}

int func_445(int iParam0, int iParam1, int iParam2){
var uVar0;
switch (iParam0){
case -581940584:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
switch (iParam1){
case 1605135005:
case 461611711:
if(!func_278(36759, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
case -646947644:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
switch (iParam1){
case -1655013310:
case -8081421:
if(!func_278(36703, -1)){
return 1;
}else{
return 0;
}
break;
case 1136959044:
case 1252591238:
if(!func_278(36704, -1)){
return 1;
}else{
return 0;
}
break;
case -1662464917:
case 439944869:
if(!func_278(36718, -1)){
return 1;
}else{
return 0;
}
break;
case 1311829745:
case 1376594947:
case 2000079923:
if(!func_278(36737, -1)){
return 1;
}else{
return 0;
}
break;
case 925416247:
case -993141292:
case -794186434:
if(!func_278(36738, -1)){
return 1;
}else{
return 0;
}
break;
case 1505804828:
case -1839009993:
if(!func_278(36752, -1)){
return 1;
}else{
return 0;
}
break;
case -1759130267:
case -2109654177:
if(!func_278(36763, -1)){
return 1;
}else{
return 0;
}
break;
case 1207735097:
case -133674528:
if(!func_278(36783, -1)){
return 1;
}else{
return 0;
}
break;
case 1033338279:
case 1956717889:
if(!func_278(36784, -1)){
return 1;
}else{
return 0;
}
break;
case -36216721:
case 1244363453:
if(!func_278(36782, -1)){
return 1;
}else{
return 0;
}
break;
case 1544949032:
case 609473027:
if(!func_278(36751, -1)){
return 1;
}else{
return 0;
}
break;
case 1226096741:
case -407142198:
case 93917543:
case -775269178:
case -792139824:
case 1162327684:
case 1745898052:
case 1053329839:
case -405156332:
case -818796031:
case -1415693060:
case 1671056678:
if(!func_278(36769, -1)){
return 1;
}else{
return 0;
}
break;
case 765528446:
case 1376403625:
case 1483066236:
case 1025263361:
case 1346099058:
case -845065618:
case 1154188219:
case -2031717644:
case 399356479:
case -1066917830:
case -1763212840:
case 825814247:
if(!func_278(36768, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
case 1783012399:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
if(func_453(iParam1, &uVar0)){
return uVar0;
}
switch (iParam1){
case -197848144:
case 2130504112:
if(!func_278(36757, -1)){
return 1;
}else{
return 0;
}
break;
case 99858221:
case 213255460:
if(!func_278(36758, -1)){
return 1;
}else{
return 0;
}
break;
case 1710404355:
case -1469882278:
if(!func_278(36739, -1)){
return 1;
}else{
return 0;
}
break;
case -2101744495:
case -1661253242:
if(!func_278(36740, -1)){
return 1;
}else{
return 0;
}
break;
case 841763679:
case 138092552:
if(!func_278(36741, -1)){
return 1;
}else{
return 0;
}
break;
case 1069377153:
case 513166526:
if(!func_278(36742, -1)){
return 1;
}else{
return 0;
}
break;
case -843709836:
case -410952059:
if(!func_278(36743, -1)){
return 1;
}else{
return 0;
}
break;
case 673800403:
case -2099479637:
if(!func_278(36775, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
case -268630404:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
if(func_452(iParam1, &uVar0)){
return uVar0;
}
switch (iParam1){
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
if(!func_278(36809, -1)){
return 1;
}else{
return 0;
}
break;
case -1069968045:
case -921734020:
if(!func_278(36699, -1)){
return 1;
}else{
return 0;
}
break;
case -1509312284:
case 2103965964:
if(!func_278(36700, -1)){
return 1;
}else{
return 0;
}
break;
case -1709127394:
case -727053399:
if(!func_278(36701, -1)){
return 1;
}else{
return 0;
}
break;
case 425828250:
case -731306227:
if(!func_278(36702, -1)){
return 1;
}else{
return 0;
}
break;
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
if(!func_278(36715, -1)){
return 1;
}else{
return 0;
}
break;
case -1411572922:
case 1655606115:
if(!func_278(36719, -1)){
return 1;
}else{
return 0;
}
break;
case -1687399299:
case -921932467:
if(!func_278(36720, -1)){
return 1;
}else{
return 0;
}
break;
case -1516214043:
case -1757640274:
if(!func_278(36721, -1)){
return 1;
}else{
return 0;
}
break;
case 654371756:
case 340755414:
if(!func_278(36722, -1)){
return 1;
}else{
return 0;
}
break;
case -120058021:
case 583082169:
if(!func_278(36723, -1)){
return 1;
}else{
return 0;
}
break;
case 44442359:
case 2145704703:
if(!func_278(36724, -1)){
return 1;
}else{
return 0;
}
break;
case -723499156:
case -1907623987:
if(!func_278(36725, -1)){
return 1;
}else{
return 0;
}
break;
case 222672970:
case 818396254:
if(!func_278(36726, -1)){
return 1;
}else{
return 0;
}
break;
case -544285475:
case 514398241:
if(!func_278(36727, -1)){
return 1;
}else{
return 0;
}
break;
case -375328511:
case -2081103177:
if(!func_278(36728, -1)){
return 1;
}else{
return 0;
}
break;
case -1142876798:
case -2104434705:
if(!func_278(36729, -1)){
return 1;
}else{
return 0;
}
break;
case -551157269:
case -1881446972:
if(!func_278(36730, -1)){
return 1;
}else{
return 0;
}
break;
case 292021870:
case 1719833363:
if(!func_278(36731, -1)){
return 1;
}else{
return 0;
}
break;
case -1035974624:
case 1956294467:
if(!func_278(36732, -1)){
return 1;
}else{
return 0;
}
break;
case -192205643:
case 1894950891:
if(!func_278(36733, -1)){
return 1;
}else{
return 0;
}
break;
case -947334499:
case 2114667036:
if(!func_278(36734, -1)){
return 1;
}else{
return 0;
}
break;
case -111757768:
case -783423328:
if(!func_278(36735, -1)){
return 1;
}else{
return 0;
}
break;
case -593232685:
case -1223936995:
if(!func_278(36736, -1)){
return 1;
}else{
return 0;
}
break;
case -608876472:
case 1334957776:
if(!func_278(36753, -1)){
return 1;
}else{
return 0;
}
break;
case 498873860:
case -126601887:
if(!func_278(36754, -1)){
return 1;
}else{
return 0;
}
break;
case 1985248855:
case -875041851:
if(!func_278(36755, -1)){
return 1;
}else{
return 0;
}
break;
case -1943948059:
case -2070991003:
if(!func_278(36760, -1)){
return 1;
}else{
return 0;
}
break;
case -683062477:
case -617653084:
if(!func_278(36761, -1)){
return 1;
}else{
return 0;
}
break;
case 388773720:
case -2098938846:
if(!func_278(36762, -1)){
return 1;
}else{
return 0;
}
break;
case 652173018:
case -1298268559:
case -1189158251:
case -727358751:
if(!func_278(36764, -1)){
return 1;
}else{
return 0;
}
break;
case -315422177:
case -1731734903:
case -1832379936:
case -1319908460:
if(!func_278(36765, -1)){
return 1;
}else{
return 0;
}
break;
case -1256711400:
case 1298977992:
if(!func_278(36774, -1)){
return 1;
}else{
return 0;
}
break;
case 471019161:
case 692557212:
if(!func_278(36777, -1)){
return 1;
}else{
return 0;
}
break;
case 165186084:
case -498759787:
if(!func_278(36778, -1)){
return 1;
}else{
return 0;
}
break;
case 493498543:
case -292085704:
if(!func_278(36779, -1)){
return 1;
}else{
return 0;
}
break;
case -2056426364:
case 1986396785:
if(!func_278(36780, -1)){
return 1;
}else{
return 0;
}
break;
case -1883471582:
case -1397788925:
if(!func_278(36781, -1)){
return 1;
}else{
return 0;
}
break;
case -1895527326:
case 1259618253:
if(!func_278(36705, -1)){
return 1;
}else{
return 0;
}
break;
case -1416608391:
case -1905506688:
if(!func_278(36706, -1)){
return 1;
}else{
return 0;
}
break;
case 1186233287:
case 952605492:
if(!func_278(36707, -1)){
return 1;
}else{
return 0;
}
break;
case -1997903306:
case -1952569676:
if(!func_278(36710, -1)){
return 1;
}else{
return 0;
}
break;
case -1975121276:
case 441259453:
if(!func_278(36711, -1)){
return 1;
}else{
return 0;
}
break;
case -1734858968:
case -751171688:
if(!func_278(36712, -1)){
return 1;
}else{
return 0;
}
break;
case 2066009771:
case -1497080576:
if(!func_278(36713, -1)){
return 1;
}else{
return 0;
}
break;
case -231360453:
case -91981822:
if(!func_278(36714, -1)){
return 1;
}else{
return 0;
}
break;
case -1963845403:
case 882420786:
if(!func_278(36746, -1)){
return 1;
}else{
return 0;
}
break;
case 732574088:
case -824927683:
if(!func_278(36747, -1)){
return 1;
}else{
return 0;
}
break;
case 492344549:
case -522764734:
if(!func_278(36748, -1)){
return 1;
}else{
return 0;
}
break;
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
if(!func_278(36744, -1)){
return 1;
}else{
return 0;
}
break;
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
if(!func_278(36745, -1)){
return 1;
}else{
return 0;
}
break;
case -378776327:
case -1886485930:
if(!func_278(36716, -1)){
return 1;
}else{
return 0;
}
break;
case 955216856:
case -756304130:
if(!func_278(36749, -1)){
return 1;
}else{
return 0;
}
break;
case -1622267676:
case -1099489536:
if(!func_278(36750, -1)){
return 1;
}else{
return 0;
}
break;
case 534801913:
case 452426191:
case 160066126:
case -1646982779:
case 2105362127:
case 430517623:
case -1866200946:
case 527608754:
case -1962396497:
case -1943061011:
if(!func_278(36770, -1)){
return 1;
}else{
return 0;
}
break;
case -602915326:
case 321893176:
if(!func_278(36708, -1)){
return 1;
}else{
return 0;
}
break;
case 969275756:
case 44864034:
if(!func_278(36709, -1)){
return 1;
}else{
return 0;
}
break;
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
if(!func_278(36756, -1)){
return 1;
}else{
return 0;
}
break;
case 72595168:
case 113552790:
case 559620446:
case 1126351571:
case 69519630:
case 1827430931:
case 1358034244:
case 1980524092:
case 361206170:
case 1970911624:
case 1617737793:
case -1449695179:
case -1318723953:
case 653157498:
if(!func_278(36776, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
}
switch (iParam0){
case 1371199852:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
switch (iParam1){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
if(!func_278(34397, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
if(!func_278(34398, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
if(!func_278(34395, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
if(!func_278(34396, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
if(!func_278(34399, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
if(!func_278(34400, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
case -169593362:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
switch (iParam1){
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
if(!func_278(34389, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
if(!func_278(34410, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
if(!func_278(34409, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
if(!func_278(34404, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
if(!func_278(34403, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
if(!func_278(34406, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
if(!func_278(34408, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
if(!func_278(34405, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
if(!func_278(34391, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
if(!func_278(34394, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
if(!func_278(34390, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
if(!func_278(34392, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
if(!func_278(34393, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
if(!func_278(34730, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
if(!func_278(34731, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
if(!func_278(34732, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
if(!func_278(34733, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
if(!func_278(34736, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
if(!func_278(34737, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
if(!func_278(34734, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
if(!func_278(34735, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
if(!func_278(34401, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
if(!func_278(34402, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
if(!func_278(34407, -1)){
return 1;
}else{
return 0;
}
break;
}
break;
case -1870156386:
if(func_181(iParam1, 1, 1, 1, -1)){
return 0;
}
switch (iParam1){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
if(!func_278(34451, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
if(!func_278(34452, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
if(!func_278(34453, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
if(!func_278(34454, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
if(!func_278(34418, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
if(!func_278(34419, -1)){
return 1;
}else{
return 0;
}
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
if(!func_278(34420, -1)){
return 1;
}else{
return 0;
}
}
}