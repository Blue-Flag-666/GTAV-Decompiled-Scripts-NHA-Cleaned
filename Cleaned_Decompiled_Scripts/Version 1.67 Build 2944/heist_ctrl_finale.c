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
float fLocal_19=0f;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
var uLocal_31=0;
var uLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
char* sLocal_40=NULL;
var uLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
bool bLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=49;
var uLocal_58=0;
var uLocal_59=0;
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
var uLocal_107=2;
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
int iLocal_126=0;
int iLocal_127=0;
int iLocal_128=0;
int iLocal_129=0;
int iLocal_130=0;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133[4]={
0, 0, 0, 0 
};
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=4;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=4;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=4;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=4;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=4;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=4;
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
int iLocal_174=0;
int iLocal_175=0;
struct<485> Local_176={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 
};
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
var uLocal_264=0;
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
var uLocal_277=0;
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
var uLocal_290=0;
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
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
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
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=0;
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
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
iLocal_34=202;
iLocal_35=201;
iLocal_36=24;
iLocal_37=202;
iLocal_38=25;
sLocal_40="";
iLocal_42=-1;
iLocal_43=-1;
iLocal_44=-1;
iLocal_46=-1;
iLocal_47=-1;
iLocal_174=-1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_425();
}
func_424(2);
func_412(&(Local_176.f_1), func_423(Global_96842[8 /*19*/], Global_96842[9 /*19*/]));
func_411(&Local_176, 4);
func_410(4, 0, 1);
func_409(0);
while (!func_408(3)){
if(!Global_78960 && !func_407(14)){
func_393(&Local_176, 10f, 18f);
func_391(&Local_176);
func_224();
func_152();
if(func_150(0) || MISC::IS_BIT_SET(Local_176.f_449, 2)){
func_68(&Local_176);
func_5(&Local_176);
func_4(&Local_176);
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist2a")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist2b")) > 0){
func_3();
}
if(func_408(34)){
if(!func_2(0)){
if(!MISC::IS_BIT_SET(Global_113810.f_1.f_120[4], 9)){
func_410(4, 9, 1);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_1.f_120[4], 9)){
func_410(4, 9, 0);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_1.f_120[4], 9)){
func_410(4, 9, 0);
}
wait(0);
}
func_1(2);
func_425();
}

int func_1(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}

int func_2(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_3(){
int iVar0;
if(Global_78950){
return;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return;
}
iVar0=round((1f + (1000f * timestep())));
Global_97033.f_8=(Global_97033.f_8 + iVar0);
}


void func_4(var uParam0){
if(MISC::IS_BIT_SET(Global_96821, *uParam0)){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
MISC::SET_BIT(&(uParam0->f_449), 15);
MISC::SET_BIT(&(uParam0->f_449), 16);
MISC::SET_BIT(&(uParam0->f_449), 14);
MISC::CLEAR_BIT(&Global_96821, *uParam0);
}}}


void func_5(var uParam0){
int iVar0;
int iVar1;
iVar0=func_66(func_67(*uParam0));
if(iVar0 < 0 || iVar0 >=5){
return;
}
iVar1=iVar0;
if((iVar1 !=uParam0->f_464 && !(iVar1==2 && uParam0->f_464==4)) && !((*uParam0==1 && iVar1==3) && uParam0->f_464==4)){
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
func_6(uParam0, iVar1, 0);
}else{
uParam0->f_464=iVar1;
}}}


void func_6(var uParam0, int iParam1, int iParam2){
if(iParam1 !=uParam0->f_464){
if(uParam0->f_680==0){
func_65(uParam0);
uParam0->f_464=iParam1;
func_7(uParam0, iParam1, iParam2);
}}}


void func_7(var uParam0, int iParam1, int iParam2){
switch (iParam1){
case 0:
func_64(uParam0);
MISC::SET_BIT(&(uParam0->f_449), 5);
MISC::CLEAR_BIT(&(uParam0->f_449), 4);
break;
case 1:
func_64(uParam0);
MISC::SET_BIT(&(uParam0->f_449), 5);
MISC::CLEAR_BIT(&(uParam0->f_449), 4);
uParam0->f_452=-1;
break;
case 2:
func_36(uParam0, uParam0->f_417, iParam2);
MISC::SET_BIT(&(uParam0->f_449), 5);
MISC::CLEAR_BIT(&(uParam0->f_449), 4);
uParam0->f_457=MISC::GET_GAME_TIMER();
break;
case 3:
func_18(uParam0);
MISC::SET_BIT(&(uParam0->f_449), 5);
MISC::CLEAR_BIT(&(uParam0->f_449), 4);
MISC::SET_BIT(&(uParam0->f_449), 9);
uParam0->f_457=MISC::GET_GAME_TIMER();
break;
case 4:
func_14(&(uParam0->f_1.f_108[0 /*4*/]), 1);
func_14(&(uParam0->f_1.f_108[1 /*4*/]), 1);
Global_113810.f_1.f_6[*uParam0]=1;
HUD::CLEAR_HELP(0);
func_12(uParam0, 0);
func_64(uParam0);
MISC::SET_BIT(&(uParam0->f_449), 5);
MISC::SET_BIT(&(uParam0->f_449), 4);
uParam0->f_457=MISC::GET_GAME_TIMER();
break;
}
func_8(uParam0);
}


void func_8(var uParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
bool bVar6;
uVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 13, 1);
uVar1=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 11, 1);
uVar2=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 32, 1);
uVar3=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1);
uVar4=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 201, 1);
uVar5=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 202, 1);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 6, 1);
uVar1=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 7, 1);
uVar2=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, 1);
}
bVar6=func_11(1, *uParam0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
switch (uParam0->f_464){
case 0:
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
if(bVar6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar2);
func_9("PB_H_ZOOM");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10(uVar2);
func_9("PB_H_ZOOM");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar5);
func_9("PB_H_EXIT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
case 2:
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(*uParam0==2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10(uVar0);
func_9("PB_H_SELCT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar4);
func_9("PB_H_TRIG");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
func_10(uVar0);
func_9("PB_H_SELCT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar5);
func_9("PB_H_UNDO");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar4);
func_9("PB_H_TRIG");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
break;
case 3:
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
if(MISC::IS_BIT_SET(uParam0->f_449, 9)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar1);
func_9("PB_H_SELCT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10(uVar1);
func_9("PB_H_SELCT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar4);
func_9("PB_H_TRIG");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
break;
case 4:
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
func_10(uVar2);
func_9("PB_H_ZOOM");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_10(uVar3);
func_9("PB_H_LOOK");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_10(uVar5);
func_9("PB_H_UNDO");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_10(uVar4);
func_9("PB_H_CONF");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
break;
}}


void func_9(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_10(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_11(int iParam0, int iParam1){
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


void func_12(var uParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&(uParam0->f_449), 18);
if(((!func_13(&(uParam0->f_1.f_20[0 /*4*/])) && !func_13(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_108[1 /*4*/]))){
HUD::CLEAR_HELP(0);
}}else{
MISC::CLEAR_BIT(&(uParam0->f_449), 18);
}}


bool func_13(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_14(char* sParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_112449 && iParam1){
if(func_13(uParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()){
HUD::CLEAR_HELP(0);
}}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(uParam0, &(Global_113810.f_20413[iVar0 /*16*/]))){
iVar1=iVar0;
while (iVar1 <=(Global_113810.f_20413.f_145 - 2)){
func_17(iVar1, iVar1 + 1);
iVar1++;
}
func_16((Global_113810.f_20413.f_145 - 1));
Global_113810.f_20413.f_145=(Global_113810.f_20413.f_145 - 1);
func_15();
return;
}
iVar0++;
}}


void func_15(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 0)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0]){
Global_113810.f_20413.f_146[0]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 1)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1]){
Global_113810.f_20413.f_146[1]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 2)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2]){
Global_113810.f_20413.f_146[2]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
iVar0++;
}}


void func_16(int iParam0){
StringCopy(&(Global_113810.f_20413[iParam0 /*16*/]), "", 16);
StringCopy(&(Global_113810.f_20413[iParam0 /*16*/].f_4), "", 16);
Global_113810.f_20413[iParam0 /*16*/].f_8=0;
Global_113810.f_20413[iParam0 /*16*/].f_9=0;
Global_113810.f_20413[iParam0 /*16*/].f_11=0;
Global_113810.f_20413[iParam0 /*16*/].f_10=-1;
Global_113810.f_20413[iParam0 /*16*/].f_12=0;
Global_113810.f_20413[iParam0 /*16*/].f_13=0;
Global_113810.f_20413[iParam0 /*16*/].f_14=0;
Global_113810.f_20413[iParam0 /*16*/].f_15=0;
}


void func_17(int iParam0, int iParam1){
Global_113810.f_20413[iParam0 /*16*/]={
Global_113810.f_20413[iParam1 /*16*/] 
};
Global_113810.f_20413[iParam0 /*16*/].f_4={
Global_113810.f_20413[iParam1 /*16*/].f_4 
};
Global_113810.f_20413[iParam0 /*16*/].f_8=Global_113810.f_20413[iParam1 /*16*/].f_8;
Global_113810.f_20413[iParam0 /*16*/].f_10=Global_113810.f_20413[iParam1 /*16*/].f_10;
Global_113810.f_20413[iParam0 /*16*/].f_9=Global_113810.f_20413[iParam1 /*16*/].f_9;
Global_113810.f_20413[iParam0 /*16*/].f_11=Global_113810.f_20413[iParam1 /*16*/].f_11;
Global_113810.f_20413[iParam0 /*16*/].f_12=Global_113810.f_20413[iParam1 /*16*/].f_12;
Global_113810.f_20413[iParam0 /*16*/].f_13=Global_113810.f_20413[iParam1 /*16*/].f_13;
Global_113810.f_20413[iParam0 /*16*/].f_14=Global_113810.f_20413[iParam1 /*16*/].f_14;
Global_113810.f_20413[iParam0 /*16*/].f_15=Global_113810.f_20413[iParam1 /*16*/].f_15;
}


void func_18(var uParam0){
int iVar0;
struct<2> Var1;
func_35(uParam0);
func_32(uParam0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0=func_66(func_31(*uParam0));
if(iVar0 !=0){
if(iVar0==func_30(*uParam0, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar0==func_30(*uParam0, 1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
Var1.f_0=(uParam0->f_1.f_16 + uParam0->f_1.f_18);
Var1.f_1=(uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
func_26(uParam0, &Var1, uParam0->f_1.f_10);
func_24(uParam0, 1, 1);
func_12(uParam0, 0);
func_19(uParam0);
}


void func_19(var uParam0){
int iVar0;
if(MISC::IS_BIT_SET(uParam0->f_449, 7)){
if(!MISC::IS_BIT_SET(uParam0->f_449, 18)){
switch (uParam0->f_464){
case 3:
if(!Global_113810.f_1[*uParam0]){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[0 /*4*/]), "")){
func_22(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
}
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[1 /*4*/]), "")){
func_22(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
}
Global_113810.f_1[*uParam0]=1;
}elseif(func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(((!MISC::IS_BIT_SET(uParam0->f_449, 11) && !MISC::IS_BIT_SET(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483==0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE");
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}}
break;
case 2:
if(!Global_113810.f_1.f_6[*uParam0]){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[0 /*4*/]), "")){
func_22(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
}
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[1 /*4*/]), "")){
func_22(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
}
Global_113810.f_1.f_6[*uParam0]=1;
}elseif(func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(uParam0->f_449, 10)){
if((!func_13("PB_H_GUNM") && !func_13("PB_H_HACK")) && !func_13("PB_H_DRIV")){
iVar0=func_66(func_31(*uParam0));
if(uParam0->f_417 < 5){
if(((!MISC::IS_BIT_SET(uParam0->f_449, 11) && !MISC::IS_BIT_SET(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483==0){
switch (Global_96842[iVar0 /*19*/].f_1[uParam0->f_417]){
case 1:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM");
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK");
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
break;
case 3:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV");
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
break;
}
}
}}}}
break;
}}}}

int func_20(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_21(){
if(Global_113810.f_20413.f_145 > 0){
return 0;
}
return 1;
}


void func_22(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_23(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_23(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113810.f_20413.f_145 < 9){
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9=iParam5;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11=iParam6;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12=uParam2;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13=iParam7;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14=iParam8;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=-1;
}
Global_113810.f_20413.f_145++;
func_15();
}}


void func_24(var uParam0, bool bParam1, int iParam2){
if(!MISC::IS_BIT_SET(uParam0->f_1.f_303, bParam1)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_280[bParam1 /*2*/]), "")){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
MISC::SET_BIT(&(uParam0->f_1.f_303), bParam1);
}}}


void func_25(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3){
if(uParam0->f_483==3){
return;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Param2)){
uParam0->f_467[uParam0->f_483 /*5*/]={
Param1 
};
uParam0->f_467[uParam0->f_483 /*5*/].f_2={
Param2 
};
uParam0->f_467[uParam0->f_483 /*5*/].f_4=iParam3;
uParam0->f_483++;
}}


void func_26(var uParam0, var uParam1, float fParam2){
struct<3> Var0;
uParam0->f_411=*uParam1;
uParam0->f_411.f_1=uParam1->f_1;
uParam0->f_454=MISC::GET_GAME_TIMER() + 1000;
Var0={
func_28(uParam0, &(uParam0->f_411)) 
};
func_27(&(uParam0->f_649), Var0, fParam2);
}


void func_27(var uParam0, struct<3> Param1, float fParam2){
uParam0->f_11={
Param1 
};
if(fParam2 !=-1f){
uParam0->f_7=fParam2;
}}


Vector3 func__28(var uParam0, var uParam1){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
struct<3> Var7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
fVar0=uParam0->f_1.f_4;
fVar1=uParam0->f_1.f_5;
func_29(uParam0, uParam1, &fVar2, &fVar3);
fVar4=(fVar0 * (fVar2 - 0.5f));
fVar5=(-fVar1 * (fVar3 - 0.5f));
fVar6=uParam0->f_404;
Var7={
uParam0->f_401 
};
Var7={
Var7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) 
};
fVar8=fVar4;
fVar9=MISC::ATAN((fVar8 / uParam0->f_1.f_8));
fVar10=(uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
fVar11=(Var7.f_2 - uParam0->f_649.f_1.f_2);
fVar12=(fVar11 - fVar10);
fVar13=MISC::ATAN((fVar12 / uParam0->f_1.f_8));
fVar14=((fVar9 * 3f) / 18f);
return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}


void func_29(var uParam0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
iVar0=uParam0->f_1.f_2;
iVar1=uParam0->f_1.f_3;
if(*uParam1 < 0 || *uParam1 > iVar0){
return;
}
if(uParam1->f_1 < 0 || uParam1->f_1 > iVar1){
return;
}
*uParam2=(to_float(*uParam1) / to_float(iVar0));
*uParam3=(to_float(uParam1->f_1) / to_float(iVar1));
}

int func_30(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 2;
break;
case 1:
return 1;
break;
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 3;
break;
case 1:
return 4;
break;
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 5;
break;
default:
break;
}
break;
case 3:
switch (iParam1){
case 0:
return 6;
break;
case 1:
return 7;
break;
default:
break;
}
break;
case 4:
switch (iParam1){
case 0:
return 8;
break;
case 1:
return 9;
break;
default:
break;
}
break;
}
return 0;
}

int func_31(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=7;
break;
case 1:
iVar0=8;
break;
case 2:
iVar0=9;
break;
case 3:
iVar0=10;
break;
case 4:
iVar0=11;
break;
}
return iVar0;
}


void func_32(var uParam0){
int iVar0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_16));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_16.f_1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_34(uParam0);
switch (*uParam0){
case 0:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
case 3:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
case 4:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_33(*uParam0, uParam0->f_1.f_29));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0=func_66(func_31(*uParam0));
if(iVar0 !=0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(iVar0==func_30(*uParam0, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar0==func_30(*uParam0, 1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


bool func_33(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_113810.f_1.f_120[iParam0], iParam1);
}


void func_34(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_LABELS");
func_9("H_CRW_NAME");
func_9("H_CRW_TYPE");
func_9("H_CRW_SKILLS");
switch (*uParam0){
case 0:
func_9("H_LBL_JWL");
break;
case 1:
func_9("H_LBL_DOC");
break;
case 2:
func_9("H_LBL_RUR");
break;
case 3:
func_9("H_LBL_AGN");
break;
case 4:
func_9("H_LBL_FA");
func_9("H_LBL_FB");
break;
}
if(*uParam0 !=1){
func_9("H_LBL_CRW");
}
func_9("H_LBL_TODO");
if(*uParam0 !=2){
func_9("H_LBL_APP");
}
switch (*uParam0){
case 0:
func_9("H_LBL_J1");
func_9("H_LBL_J2");
func_9("H_LBL_J3");
func_9("H_LBL_J4");
func_9("HC_J_IMPACT");
func_9("HC_J_STEALTH");
break;
case 1:
func_9("HC_D_BLOW_UP");
func_9("HC_D_DEEP_SEA");
break;
case 2:
func_9("H_LBL_R1");
func_9("H_LBL_R2");
func_9("H_LBL_R3");
func_9("H_LBL_R4");
func_9("H_LBL_R5");
func_9("H_LBL_R6");
func_9("H_LBL_R7");
func_9("H_LBL_R8");
func_9("H_LBL_R9");
func_9("H_LBL_R10");
func_9("H_LBL_R11");
func_9("H_LBL_R12");
break;
case 3:
func_9("H_LBL_A1");
func_9("H_LBL_A2");
func_9("H_LBL_A3");
func_9("H_LBL_A4");
func_9("H_LBL_A5");
func_9("HC_A_FIRETRUCK");
func_9("HC_A_HELICOPTER");
break;
case 4:
func_9("H_LBL_F1");
func_9("H_LBL_F2");
func_9("H_LBL_F3");
func_9("H_LBL_F4");
func_9("H_LBL_F5");
func_9("HC_F_TRAFFCONT");
func_9("HC_F_HELI");
break;
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_35(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_36(var uParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
if(iParam1 < 0 || iParam1 >=uParam0->f_1.f_96){
return;
}
func_24(uParam0, 2, 1);
iVar0=func_66(func_31(*uParam0));
iVar1=Global_96842[iVar0 /*19*/].f_1[iParam1];
switch (iVar1){
case 1:
func_63(uParam0, iVar0, 1);
break;
case 2:
func_63(uParam0, iVar0, 3);
break;
case 3:
func_63(uParam0, iVar0, 2);
break;
}
func_62(uParam0, uParam0->f_417);
func_37(uParam0, uParam0->f_417);
uParam0->f_450=iParam1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_26(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
if(iParam2 !=0){
iVar2=0;
while (uParam0->f_418[iVar2] !=iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar2++;
if(iVar2 > 7){
return;
}}}
func_12(uParam0, 0);
func_19(uParam0);
}


void func_37(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
iVar2=Global_96842[iVar1 /*19*/].f_1[iParam1];
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_97[iParam1 /*2*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_34(uParam0);
iVar3=0;
if(Global_113810.f_1.f_12[iVar1 /*6*/][iParam1] !=0){
iVar4=Global_113810.f_1.f_12[iVar1 /*6*/][iParam1];
func_42(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
}else{
iVar5=0;
while (iVar5 < 14){
iVar6=iVar5;
if(func_41(iVar6)==iVar2){
if(func_40(iVar6)){
if(!func_39(iVar6)){
if(!func_38(uParam0, iVar6)){
if(!(iVar6==11 && *uParam0==3)){
func_42(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
uParam0->f_418[iVar3]=iVar6;
iVar3++;
}
}}}}
iVar5++;
}}
if(Global_113810.f_1.f_12[iVar1 /*6*/][iParam1] !=0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_38(var uParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=func_66(func_31(*uParam0));
iVar1=0;
while (iVar1 < uParam0->f_417){
if(Global_113810.f_1.f_12[iVar0 /*6*/][iVar1]==bParam1){
return 1;
}
iVar1++;
}
return 0;
}


bool func_39(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_1.f_118, iParam0);
}


bool func_40(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_1.f_116, iParam0);
}

int func_41(int iParam0){
return Global_96688[iParam0 /*5*/];
}


void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
func_9(func_60(iParam1));
func_9(func_59(iParam1));
switch (func_41(iParam1)){
case 1:
func_9(func_58(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 0));
func_9(func_58(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 1));
func_9(func_58(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 2));
func_9(func_58(3));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 3));
break;
case 2:
func_9(func_54(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 0));
func_9(func_54(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 1));
func_9(func_54(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 2));
break;
case 3:
func_9(func_49(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 0));
func_9(func_49(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 1));
func_9(func_49(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 2));
break;
}
func_9("H_CRW_CUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


var func__43(int iParam0){
return Global_96688[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1){
return round(((to_float(func_46(iParam0, iParam1)) / to_float(func_45(iParam1))) * 100f));
}

int func_45(int iParam0){
switch (iParam0){
case 0:
return 100;
break;
case 1:
return 100;
break;
case 2:
return 100;
break;
}
return 0;
}

int func_46(int iParam0, int iParam1){
if(func_41(iParam0) !=3){
return -1;
}
return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1){
return func_48(iParam1, Global_113810.f_1.f_73[iParam0 /*3*/].f_1, Global_113810.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 0:
case 1:
return shift_right(iParam1, (15 * iParam0)) & 32767;
break;
case 2:
case 3:
return shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
break;
}
return -1;
}


char* func_49(int iParam0){
return func_50(3, iParam0);
}


char* func_50(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return "HC_STA_G1";
break;
case 1:
return "HC_STA_G2";
break;
case 2:
return "HC_STA_G3";
break;
case 3:
return "HC_STA_G4";
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "HC_STA_H1";
break;
case 1:
return "HC_STA_H2";
break;
case 2:
return "HC_STA_H3";
break;
}
break;
case 3:
switch (iParam1){
case 0:
return "HC_STA_D1";
break;
case 1:
return "HC_STA_D2";
break;
case 2:
return "HC_STA_D3";
break;
}
break;
}
return "ERROR!";
}

int func_51(int iParam0, int iParam1){
return round(((to_float(func_53(iParam0, iParam1)) / to_float(func_52(iParam1))) * 100f));
}

int func_52(int iParam0){
switch (iParam0){
case 0:
return 100;
break;
case 1:
return 100;
break;
case 2:
return 100;
break;
}
return 0;
}

int func_53(int iParam0, int iParam1){
if(func_41(iParam0) !=2){
return -1;
}
return func_47(iParam0, iParam1);
}


char* func_54(int iParam0){
return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1){
return round(((to_float(func_57(iParam0, iParam1)) / to_float(func_56(iParam1))) * 100f));
}

int func_56(int iParam0){
switch (iParam0){
case 0:
return 1000;
break;
case 1:
return 100;
break;
case 2:
return 100;
break;
case 3:
return 100;
break;
}
return 0;
}

int func_57(int iParam0, int iParam1){
if(func_41(iParam0) !=1){
return -1;
}
return func_47(iParam0, iParam1);
}


char* func_58(int iParam0){
return func_50(1, iParam0);
}


char* func_59(int iParam0){
switch (Global_96688[iParam0 /*5*/]){
case 1:
return "HC_TYPE_G";
break;
case 2:
return "HC_TYPE_H";
break;
case 3:
return "HC_TYPE_D";
break;
}
return "ERROR!";
}


char* func_60(int iParam0){
return func_61(iParam0);
}


char* func_61(int iParam0){
switch (iParam0){
case 1:
return "HC_N_GUS";
break;
case 2:
return "HC_N_KAR";
break;
case 10:
return "HC_N_PAC";
break;
case 11:
return "HC_N_CHE";
break;
case 3:
return "HC_N_HUG";
break;
case 4:
return "HC_N_NOR";
break;
case 5:
return "HC_N_DAR";
break;
case 6:
return "HC_N_PAI";
break;
case 7:
return "HC_N_CHR";
break;
case 12:
return "HC_N_RIC";
break;
case 8:
return "HC_N_EDD";
break;
case 13:
return "HC_N_TAL";
break;
case 9:
return "HC_N_KRM";
break;
}
return "ERROR!";
}


void func_62(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_63(var uParam0, int iParam1, bool bParam2){
int iVar0;
if(!MISC::IS_BIT_SET(Global_96842[iParam1 /*19*/].f_18, bParam2)){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_96842[iParam1 /*19*/].f_7[bParam2 /*2*/]), "")){
func_25(uParam0, uParam0->f_1.f_276, Global_96842[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
MISC::SET_BIT(&(Global_96842[iParam1 /*19*/].f_18), bParam2);
iVar0=0;
while (iVar0 < 10){
if(MISC::ARE_STRINGS_EQUAL(&(Global_96842[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_96842[iVar0 /*19*/].f_7[bParam2 /*2*/]))){
MISC::SET_BIT(&(Global_96842[iVar0 /*19*/].f_18), bParam2);
}
iVar0++;
}}}}


void func_64(var uParam0){
func_26(uParam0, &(uParam0->f_1.f_12), 45f);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_19(uParam0);
}


void func_65(var uParam0){
switch (uParam0->f_464){
case 1:
case 2:
case 3:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
break;
}
HUD::CLEAR_HELP(0);
}

int func_66(int iParam0){
if(iParam0==13 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_99.f_205[iParam0];
}

int func_67(int iParam0){
switch (iParam0){
case 0:
return 2;
break;
case 1:
return 3;
break;
case 2:
return 4;
break;
case 3:
return 5;
break;
case 4:
return 6;
break;
}
return -1;
}


void func_68(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
func_69(uParam0);
}}


void func_69(var uParam0){
bool bVar0;
struct<3> Var1;
float fVar2;
float fVar3;
float fVar4;
bool bVar5;
bVar0=false;
if(!MISC::IS_BIT_SET(uParam0->f_449, 2)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_149(0)){
if(func_140(8)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_401) < 4f){
Var1={
uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
fVar3=MISC::ABSF((uParam0->f_404 - fVar2));
if(fVar3 <=70f){
bVar0=true;
}
else{
fVar4=uParam0->f_404;
if(fVar4 > 180f){
fVar4=(fVar4 - 360f);
}elseif(fVar4 < -180f){
fVar4=(fVar4 + 360f);
}
if((fVar4 - fVar2) < fVar3){
fVar3=MISC::ABSF((fVar4 - fVar2));
}
if(fVar3 <=70f){
bVar0=true;
}else{
if(fVar2 > 180f){
fVar2=(fVar2 - 360f);
}elseif(fVar2 < -180f){
fVar2=(fVar2 + 360f);
}
if((uParam0->f_404 - fVar2) < fVar3){
fVar3=MISC::ABSF((uParam0->f_404 - fVar2));
}
if(fVar3 <=70f){
bVar0=true;
}else{
if((fVar4 - fVar2) < fVar3){
fVar3=MISC::ABSF((fVar4 - fVar2));
}
if(fVar3 <=70f){
bVar0=true;
}}}
}}}}}
if(bVar0){
if(uParam0->f_451==-1){
func_139(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
}elseif(func_138(uParam0->f_451, 1)){
func_136(&(uParam0->f_451));
func_122(uParam0);
}}elseif(uParam0->f_451 !=-1){
func_136(&(uParam0->f_451));
}}else{
bVar5=func_11(1, *uParam0);
func_80(uParam0);
if(((!bVar5 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_34) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_449, 8)){
MISC::CLEAR_BIT(&(uParam0->f_449), 8);
func_70(uParam0, 0);
}}}


void func_70(var uParam0, bool bParam1){
struct<3> Var0;
int iVar1;
uParam0->f_453=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
if(!bParam1){
Var0={
uParam0->f_401 
};
Var0={
Var0 + Vector(0f, (1f * cos((180f - uParam0->f_404))), (1f * sin((180f - uParam0->f_404)))) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 134);
}
HUD::DISPLAY_RADAR(1);
func_73(0);
func_72();
HUD::THEFEED_RESUME();
HUD::RESET_HUD_COMPONENT_VALUES(17);
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(0);
func_71(&(uParam0->f_649), 0, 1);
func_14(&(uParam0->f_1.f_20[0 /*4*/]), 1);
func_14(&(uParam0->f_1.f_20[1 /*4*/]), 1);
func_14(&(uParam0->f_1.f_108[0 /*4*/]), 1);
func_14(&(uParam0->f_1.f_108[1 /*4*/]), 1);
HUD::CLEAR_HELP(1);
while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
wait(0);
}
iVar1=INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
if(iVar1 !=0){
INTERIOR::UNPIN_INTERIOR(iVar1);
}
AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
func_65(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_449), 7);
MISC::CLEAR_BIT(&(uParam0->f_449), 2);
Global_96820=0;
}


void func_71(var uParam0, int iParam1, bool bParam2){
if(CAM::DOES_CAM_EXIST(*uParam0)){
if(bParam2){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, iParam1, 0);
}
if(CAM::IS_CAM_ACTIVE(*uParam0)){
CAM::SET_CAM_ACTIVE(*uParam0, 0);
}
CAM::DESTROY_CAM(*uParam0, iParam1);
}
if(uParam0->f_23){
HUD::UNLOCK_MINIMAP_ANGLE();
uParam0->f_23=0;
}
uParam0->f_1={
0f, 0f, 0f 
};
uParam0->f_4={
0f, 0f, 0f 
};
uParam0->f_7=0f;
uParam0->f_20=0;
uParam0->f_21=0;
uParam0->f_22=0;
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_11={
0f, 0f, 0f 
};
uParam0->f_14={
0f, 0f, 0f 
};
uParam0->f_17=0f;
uParam0->f_18=0f;
}


void func_72(){
Global_23251.f_5=0;
}


void func_73(bool bParam0){
if(bParam0){
func_79();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_149(0)){
func_74(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_74(int iParam0){
if(func_78()){
return;
}
if(Global_20704){
if(func_77()){
func_76(1, 1);
}else{
func_76(0, 0);
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
if(!func_75()){
Global_20500.f_1=3;
}}

int func_75(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_76(bool bParam0, bool bParam1){
if(bParam0){
if(func_149(0)){
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


bool func_77(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_78(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_79(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}


void func_80(var uParam0){
char* sVar0;
bool bVar1;
struct<3> Var2;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1);
if(!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_466)){
func_8(uParam0);
}
uParam0->f_466=sVar0;
func_120();
func_110(uParam0);
func_88(uParam0);
if(uParam0->f_464==1){
func_85(uParam0);
}
if(func_21()){
func_19(uParam0);
}
bVar1=uParam0->f_454 > MISC::GET_GAME_TIMER();
func_81(&(uParam0->f_649), MISC::IS_BIT_SET(uParam0->f_449, 4), (MISC::IS_BIT_SET(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
if(MISC::IS_BIT_SET(uParam0->f_449, 7)){
if((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE()){
if(uParam0->f_464 !=1){
if(uParam0->f_464==0 || (((!MISC::IS_BIT_SET(uParam0->f_449, 11) && !MISC::IS_BIT_SET(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483==0)){
if(!MISC::IS_BIT_SET(uParam0->f_449, 18) || uParam0->f_464==2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);
}}}}}
HUD::DISPLAY_RADAR(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::THEFEED_HIDE_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
PAD::SET_INPUT_EXCLUSIVE(2, 201);
}
PAD::SET_INPUT_EXCLUSIVE(2, 202);
PAD::SET_INPUT_EXCLUSIVE(2, 188);
PAD::SET_INPUT_EXCLUSIVE(2, 187);
PAD::SET_INPUT_EXCLUSIVE(2, 189);
PAD::SET_INPUT_EXCLUSIVE(2, 190);
if(!MISC::IS_BIT_SET(uParam0->f_449, 7)){
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
Var2={
uParam0->f_401 
};
Var2={
Var2 + Vector(0.5f, (2.9f * cos((180f - uParam0->f_404))), (2.9f * sin((180f - uParam0->f_404)))) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2), 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
MISC::SET_BIT(&(uParam0->f_449), 7);
}}}


void func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8){
int iVar0[4];
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
struct<3> Var6;
int iVar7;
int iVar8;
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
func_84(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
if(PAD::IS_LOOK_INVERTED()){
iVar0[3]=(iVar0[3] * -1);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar1=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
fVar2=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
fVar3=(fVar1 - iParam0->f_29);
fVar4=(fVar2 - iParam0->f_30);
iParam0->f_29=fVar1;
iParam0->f_30=fVar2;
if(bParam4){
iVar0[2]=-round(((fVar3 * fParam5) * 127f));
iVar0[3]=-round(((fVar4 * fParam5) * 127f));
}else{
iVar0[2]=round(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
iVar0[3]=round(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
}
iVar0[2]=func_83((iVar0[2] + iParam0->f_24), -127, 127);
iVar0[3]=func_83((iVar0[3] + iParam0->f_25), -127, 127);
}
if(iParam0->f_24==iVar0[2] && iParam0->f_25==iVar0[3]){
if(iParam0->f_27 < MISC::GET_GAME_TIMER()){
iParam0->f_24=0;
iParam0->f_25=0;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0[2]=0;
iVar0[3]=0;
iParam0->f_28=1;
}}}else{
iParam0->f_24=iVar0[2];
iParam0->f_25=iVar0[3];
iParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
iParam0->f_28=0;
}
if(bParam2){
iParam0->f_8.f_2=(-(to_float(iVar0[2]) / 127f) * IntToFloat(iParam0->f_20));
iParam0->f_8.f_1=((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_22)) / IntToFloat(iParam0->f_20));
iParam0->f_8=(-(to_float(iVar0[3]) / 127f) * IntToFloat(iParam0->f_21));
}else{
iParam0->f_8={
0f, 0f, 0f 
};
iParam0->f_24=0;
iParam0->f_25=0;
}
fVar5=(30f * timestep());
Var6={
iParam0->f_8 + iParam0->f_11 
};
if((PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && bParam2) && !iParam0->f_28){
iParam0->f_14=Var6.f_0;
iParam0->f_14.f_1=Var6.f_1;
iParam0->f_14.f_2=Var6.f_2;
}else{
iParam0->f_14=(iParam0->f_14 + func_82(((((Var6.f_0 - iParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
iParam0->f_14.f_1=(iParam0->f_14.f_1 + func_82(((((Var6.f_1 - iParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
iParam0->f_14.f_2=(iParam0->f_14.f_2 + func_82(((((Var6.f_2 - iParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
}
if(iParam0->f_26){
iParam0->f_14=func_82(iParam0->f_14, to_float(-iParam0->f_21), to_float(iParam0->f_21));
iParam0->f_14.f_1=func_82(iParam0->f_14.f_1, to_float(-iParam0->f_22), to_float(iParam0->f_22));
iParam0->f_14.f_2=func_82(iParam0->f_14.f_2, to_float(-iParam0->f_20), to_float(iParam0->f_20));
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && bParam1){
if(iParam0->f_28){
iParam0->f_17=iParam0->f_7;
}}else{
iParam0->f_17=iParam0->f_7;
}
if(bParam1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar7=40;
iVar8=41;
if(bParam6){
iVar7=241;
iVar8=242;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7)){
iParam0->f_17=(iParam0->f_17 - 5f);
iParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
iParam0->f_28=0;
}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8)){
iParam0->f_17=(iParam0->f_17 + 5f);
iParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
iParam0->f_28=0;
}
if(bParam3){
iParam0->f_17=func_82(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), iParam0->f_7);
}else{
iParam0->f_17=func_82(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), (iParam0->f_7 + iParam0->f_19));
}}elseif(bParam8){
iVar0[1]=PAD::GET_CONTROL_VALUE(2, 207);
iVar0[3]=PAD::GET_CONTROL_VALUE(2, 208);
if(bParam3){
if(to_float(iVar0[3]) > 127f){
iParam0->f_17=(iParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (iParam0->f_19 / 2f)))));
}}else{
iParam0->f_17=(iParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * iParam0->f_19))));
iParam0->f_17=(iParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * iParam0->f_19))));
}}elseif(bParam3){
if(to_float(iVar0[1]) < 0f){
iParam0->f_17=(iParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * iParam0->f_19))));
}}else{
iParam0->f_17=(iParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * iParam0->f_19))));
}}
iParam0->f_18=(iParam0->f_18 + (((iParam0->f_17 - iParam0->f_18) * 0.06f) * fVar5));
CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_14, iParam0->f_18, 0, 1, 1, 2);
if(CAM::DOES_CAM_EXIST(*iParam0)){
if(CAM::IS_CAM_ACTIVE(*iParam0)){
if(CAM::IS_CAM_RENDERING(*iParam0)){
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
}}}}


float func_82(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}

int func_83(int iParam0, int iParam1, int iParam2){
if(iParam0 > iParam2){
return iParam2;
}elseif(iParam0 < iParam1){
return iParam1;
}
return iParam0;
}


void func_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


void func_85(var uParam0){
bool bVar0;
bool bVar1;
if(!func_11(3, *uParam0)){
if(uParam0->f_483==0 && uParam0->f_455 > 3){
if(uParam0->f_452==-1){
if(MISC::IS_BIT_SET(uParam0->f_449, 19)){
uParam0->f_452=MISC::GET_GAME_TIMER() + 500;
}else{
uParam0->f_452=MISC::GET_GAME_TIMER();
}}elseif(MISC::GET_GAME_TIMER() > uParam0->f_452){
bVar0=false;
bVar1=false;
while (bVar1 < uParam0->f_1.f_369){
if(!bVar0){
if(!MISC::IS_BIT_SET(uParam0->f_1.f_303, bVar1 + 4)){
func_87(uParam0, bVar1);
if(MISC::IS_BIT_SET(uParam0->f_1.f_370, bVar1)){
MISC::SET_BIT(&(uParam0->f_449), 19);
}else{
MISC::CLEAR_BIT(&(uParam0->f_449), 19);
}
bVar0=true;
}}
bVar1++;
}
if(!bVar0){
func_86(3, *uParam0, 1);
}}}}}


void func_86(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(iParam0==11 || iParam0==-1){
return;
}
if(iParam1 < 0 || iParam1 >=32){
return;
}
iVar0=MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
if(iVar0==bParam2){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_9088.f_99.f_219[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_9088.f_99.f_219[iParam0]), bParam1);
}}


void func_87(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_26(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
func_24(uParam0, iParam1 + 4, 1);
uParam0->f_452=-1;
}


void func_88(var uParam0){
int iVar0;
int iVar1;
if((!func_20() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING()){
if(uParam0->f_483 > 0){
if(!MISC::IS_BIT_SET(uParam0->f_449, 13)){
if(func_89(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0)){
uParam0->f_455=0;
if(uParam0->f_467[0 /*5*/].f_4){
MISC::CLEAR_BIT(&(uParam0->f_449), 11);
}else{
MISC::SET_BIT(&(uParam0->f_449), 11);
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_467[iVar0 /*5*/]={
uParam0->f_467[iVar0 + 1 /*5*/] 
};
uParam0->f_467[iVar0 /*5*/].f_2={
uParam0->f_467[iVar0 + 1 /*5*/].f_2 
};
uParam0->f_467[iVar0 /*5*/].f_4=uParam0->f_467[iVar0 + 1 /*5*/].f_4;
iVar0++;
}
uParam0->f_483=(uParam0->f_483 - 1);
}}else{
iVar1=0;
while (iVar1 < 2){
uParam0->f_467[iVar1 /*5*/]={
uParam0->f_467[iVar1 + 1 /*5*/] 
};
uParam0->f_467[iVar1 /*5*/].f_2={
uParam0->f_467[iVar1 + 1 /*5*/].f_2 
};
uParam0->f_467[iVar1 /*5*/].f_4=uParam0->f_467[iVar1 + 1 /*5*/].f_4;
iVar1++;
}
uParam0->f_483=(uParam0->f_483 - 1);
MISC::CLEAR_BIT(&(uParam0->f_449), 13);
MISC::CLEAR_BIT(&(uParam0->f_449), 11);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_449, 11)){
MISC::CLEAR_BIT(&(uParam0->f_449), 11);
}
if(MISC::IS_BIT_SET(uParam0->f_449, 13)){
MISC::CLEAR_BIT(&(uParam0->f_449), 13);
}
uParam0->f_455++;
}}}


bool func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21852=0;
Global_21854=0;
Global_21859=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_2883585=0;
return func_90(sParam2, iParam3, 0);
}

int func_90(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
Global_21856=0;
Global_21855=0;
Global_20499=0;
}else{
func_108();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_107(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_106();
Global_21134={
Global_21299 
};
Global_21851=Global_21852;
Global_21858=Global_21859;
Global_2883586=Global_2883585;
Global_21860={
Global_21876 
};
Global_21853=Global_21854;
Global_22835=Global_22836;
Global_22843={
Global_22849 
};
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_22841=Global_22842;
Global_21464.f_370=Global_22834;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21841=Global_21842;
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, false);
if(bParam2){
func_99();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20500.f_1 > 3){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_98()){
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
if(!Global_78689){
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
if(func_75()){
return 0;
}else{
switch (Global_20500.f_1){
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
if(MISC::IS_BIT_SET(Global_8370, 9)){
return 0;
}}
func_97();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_96();
func_91();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_108();
}
return 0;
}


void func_91(){
if(!func_92()){
return;
}
if(Global_21851){
MemCopy(&(Global_1978312.f_1),{
Global_21464
}
, 4);
Global_1978312=Global_7685;
Global_1978312.f_6=Global_21855;
}}

int func_92(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_95()){
return 0;
}
if(func_93(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_93(int iParam0){
return func_94(iParam0, 20);
}


var func__94(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_95(){
return -1;
}


void func_96(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_97(){
Global_21898=Global_21897;
Global_21892=Global_21893;
Global_21939={
Global_21927 
};
Global_21945={
Global_21933 
};
Global_21900=Global_21899;
Global_21969={
Global_21951 
};
Global_21975={
Global_21957 
};
Global_21981={
Global_21963 
};
Global_21987={
Global_21993 
};
Global_7685=Global_7686;
Global_7687=Global_7688;
Global_21856=Global_21857;
Global_21858=Global_21859;
Global_21860={
Global_21876 
};
Global_21849=Global_21850;
Global_22861=0;
Global_21894=0;
Global_21895=0;
MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_98(){
int iVar0;
int iVar1;
if(Global_78689){
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


void func_99(){
if(func_407(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[0 /*29*/]){
Global_20500=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[1 /*29*/]){
Global_20500=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[2 /*29*/]){
Global_20500=2;
}else{
Global_20500=0;
}}}else{
Global_20500=func_100();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}

int func_100(){
func_101();
return Global_113810.f_2366.f_539.f_4321;
}


void func_101(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_104(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_103(PLAYER::PLAYER_PED_ID());
if(func_102(iVar0) && (!func_407(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_102(Global_113810.f_2366.f_539.f_4321)){
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


bool func_102(bool bParam0){
return bParam0 < 3;
}

int func_103(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_104(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_104(int iParam0){
if(func_102(iParam0)){
return func_105(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__105(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_106(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21134[iVar0 /*10*/]=0;
StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
Global_21134[iVar0 /*10*/].f_7=0;
Global_21134[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
}


bool func_107(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_108(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}


void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=uParam5;
if(iParam3==0){
Global_22832=1;
Global_22830=0;
}else{
Global_22832=0;
Global_22830=1;
}
if(iParam4==0){
Global_22833=1;
Global_22831=0;
}else{
Global_22833=0;
Global_22831=1;
}}


void func_110(var uParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
bool bVar14;
int iVar15;
int iVar16;
uParam0->f_453++;
if(PAD::HAVE_CONTROLS_CHANGED(2)){
func_8(uParam0);
}
if(!MISC::IS_BIT_SET(uParam0->f_449, 11)){
if((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)))){
func_118();
if(MISC::IS_BIT_SET(uParam0->f_449, 12)){
MISC::SET_BIT(&(uParam0->f_449), 13);
MISC::CLEAR_BIT(&(uParam0->f_449), 11);
MISC::CLEAR_BIT(&(uParam0->f_449), 10);
}
MISC::CLEAR_BIT(&(uParam0->f_449), 12);
}}
func_84(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uParam0->f_458[2]=(uParam0->f_458[2] / 10);
uParam0->f_458[3]=(uParam0->f_458[3] / 10);
uParam0->f_458[2]=func_83((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
uParam0->f_458[3]=func_83((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
}
uParam0->f_649.f_24=uParam0->f_458[2];
uParam0->f_649.f_25=uParam0->f_458[3];
if(PAD::IS_LOOK_INVERTED()){
uParam0->f_458[3]=-uParam0->f_458[3];
}
if(uParam0->f_454 > MISC::GET_GAME_TIMER()){
uParam0->f_458[2]=0;
uParam0->f_458[3]=0;
}
if(uParam0->f_464==0 || uParam0->f_464==4){
if(uParam0->f_453 > 15){
MISC::SET_BIT(&(uParam0->f_449), 4);
}else{
MISC::CLEAR_BIT(&(uParam0->f_449), 4);
}}
if(!MISC::IS_BIT_SET(uParam0->f_449, 10)){
if(!MISC::IS_BIT_SET(uParam0->f_449, 11)){
if((MISC::GET_GAME_TIMER() - uParam0->f_456) > 200){
if((uParam0->f_464==2 || uParam0->f_464==3) || uParam0->f_464==4){
if((MISC::GET_GAME_TIMER() - uParam0->f_457) > 25000){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
uParam0->f_457=(MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
}}
if(uParam0->f_464==2){
if((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
uParam0->f_682=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_457=uParam0->f_456;
}elseif((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
uParam0->f_682=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_457=uParam0->f_456;
}}
if(uParam0->f_464==3){
if((uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(uParam0->f_416 !=0){
AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
}
uParam0->f_416=0;
if(MISC::IS_BIT_SET(uParam0->f_449, 9)){
MISC::CLEAR_BIT(&(uParam0->f_449), 9);
func_8(uParam0);
}
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_457=uParam0->f_456;
}elseif((uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(uParam0->f_416 !=1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
}
uParam0->f_416=1;
if(MISC::IS_BIT_SET(uParam0->f_449, 9)){
MISC::CLEAR_BIT(&(uParam0->f_449), 9);
func_8(uParam0);
}
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_457=uParam0->f_456;
}}
if(!func_20() || MISC::IS_BIT_SET(uParam0->f_449, 13)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36))){
switch (uParam0->f_464){
case 3:
if(!func_20()){
if(!MISC::IS_BIT_SET(uParam0->f_449, 9)){
uParam0->f_456=MISC::GET_GAME_TIMER();
iVar0=func_31(*uParam0);
if(iVar0 !=-1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
uParam0->f_680=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
func_12(uParam0, 1);
func_14(&(uParam0->f_1.f_20[0 /*4*/]), 1);
func_14(&(uParam0->f_1.f_20[1 /*4*/]), 1);
Global_113810.f_1[*uParam0]=1;
HUD::CLEAR_HELP(0);
}
}}
break;
case 2:
if(!func_11(4, *uParam0)){
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
if(uParam0->f_450 < Global_96842[iVar1 /*19*/]){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
uParam0->f_681=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
func_12(uParam0, 1);
}}
break;
case 4:
if(*uParam0 !=1){
func_86(4, *uParam0, 1);
if(!func_2(0)){
func_116(*uParam0);
}}else{
func_86(5, *uParam0, 1);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
iVar2=0;
while (iVar2 < Global_96842[iVar1 /*19*/]){
if(Global_113810.f_1.f_12[iVar1 /*6*/][iVar2]==0 || func_41(Global_113810.f_1.f_12[iVar1 /*6*/][iVar2]) !=Global_96842[iVar1 /*19*/].f_1[iVar2]){
bVar4=false;
iVar5=0;
while (iVar5 < 14){
if(!bVar4){
bVar4=true;
bVar3=iVar5;
if(bVar3 !=0){
if(Global_96688[bVar3 /*5*/] !=Global_96842[iVar1 /*19*/].f_1[iVar2]){
bVar4=false;
}
if(!MISC::IS_BIT_SET(Global_113810.f_1.f_116, bVar3)){
bVar4=false;
}
if(MISC::IS_BIT_SET(Global_113810.f_1.f_118, bVar3)){
bVar4=false;
}
if(bVar3==11 && *uParam0==3){
bVar4=false;
}
if(func_38(uParam0, bVar3)){
bVar4=false;
}}else{
bVar4=false;
}}
iVar5++;
}
Global_113810.f_1.f_12[iVar1 /*6*/][iVar2]=bVar3;
}
iVar2++;
}
func_12(uParam0, 1);
func_63(uParam0, iVar1, 4);
break;
}
uParam0->f_427=0;
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38))){
switch (uParam0->f_464){
case 2:
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
if(uParam0->f_450 > 0){
func_12(uParam0, 1);
uParam0->f_450=(uParam0->f_450 - 1);
uParam0->f_417=uParam0->f_450;
iVar6=Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450]=0;
uParam0->f_465=Global_96842[iVar1 /*19*/].f_1[uParam0->f_450];
func_36(uParam0, uParam0->f_450, iVar6);
AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
uParam0->f_427=0;
uParam0->f_456=MISC::GET_GAME_TIMER();
}elseif(!func_408(0)){
if(*uParam0 !=2){
iVar7=0;
while (iVar7 < uParam0->f_1.f_96){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar7++;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
iVar7=0;
while (iVar7 < 2){
if(uParam0->f_1.f_30[iVar7] !=13){
func_410(*uParam0, uParam0->f_1.f_30[iVar7], 0);
}
iVar7++;
}
uParam0->f_427=0;
func_12(uParam0, 1);
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_465=0;
func_115(0, 1);
}}
break;
case 4:
if(*uParam0 !=1){
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
uParam0->f_450=(uParam0->f_450 - 1);
uParam0->f_417=uParam0->f_450;
iVar8=Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450]=0;
uParam0->f_465=Global_96842[iVar1 /*19*/].f_1[uParam0->f_450];
func_6(uParam0, 2, iVar8);
}else{
iVar9=0;
while (iVar9 < 2){
if(uParam0->f_1.f_30[iVar9] !=13){
func_410(*uParam0, uParam0->f_1.f_30[iVar9], 0);
}
iVar9++;
}
func_114(8, 0);
func_86(5, 1, 0);
uParam0->f_427=0;
func_12(uParam0, 1);
uParam0->f_456=MISC::GET_GAME_TIMER();
func_6(uParam0, 3, 0);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
break;
}
}}}}}elseif(uParam0->f_455 > 5){
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
if(uParam0->f_450 >=Global_96842[iVar1 /*19*/] || (*uParam0==1 && uParam0->f_450 > uParam0->f_415)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_24(uParam0, 0, 1);
func_6(uParam0, 4, 0);
}else{
if(!MISC::IS_BIT_SET(uParam0->f_449, 17)){
iVar10=Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450]=0;
uParam0->f_465=Global_96842[iVar1 /*19*/].f_1[uParam0->f_450];
func_36(uParam0, uParam0->f_450, iVar10);
}
MISC::CLEAR_BIT(&(uParam0->f_449), 17);
}
uParam0->f_457=MISC::GET_GAME_TIMER();
MISC::CLEAR_BIT(&(uParam0->f_449), 10);
}elseif(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(((!func_13(&(uParam0->f_1.f_108[0 /*4*/])) && !func_13(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_20[1 /*4*/]))){
HUD::CLEAR_HELP(1);
}}
if(uParam0->f_680 !=0){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680)){
iVar11=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
iVar1=func_30(*uParam0, iVar11);
iVar0=func_31(*uParam0);
func_114(iVar0, iVar1);
if(!func_2(0)){
func_113(*uParam0);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_63(uParam0, iVar1, 0);
if(uParam0->f_1.f_30[iVar11] !=13){
func_410(*uParam0, uParam0->f_1.f_30[iVar11], 1);
}
iVar12=0;
while (iVar12 < uParam0->f_1.f_96){
func_62(uParam0, iVar12);
if(iVar12 < Global_96842[iVar1 /*19*/]){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar12++;
}
if(*uParam0 !=1){
func_86(5, *uParam0, 1);
}else{
MISC::SET_BIT(&(uParam0->f_449), 10);
uParam0->f_450++;
}
HUD::CLEAR_HELP(0);
uParam0->f_680=0;
}}
if(uParam0->f_681 !=0){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681)){
iVar13=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
iVar0=func_31(*uParam0);
iVar1=func_66(iVar0);
Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450]=uParam0->f_418[iVar13];
bVar14=Global_113810.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar14);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
MISC::CLEAR_BIT(&(uParam0->f_449), 17);
func_112(uParam0, bVar14);
uParam0->f_450++;
uParam0->f_417=uParam0->f_450;
uParam0->f_456=MISC::GET_GAME_TIMER();
uParam0->f_457=uParam0->f_456;
MISC::SET_BIT(&(uParam0->f_449), 10);
if(!func_13(&(uParam0->f_1.f_108[0 /*4*/])) && !func_13(&(uParam0->f_1.f_108[1 /*4*/]))){
HUD::CLEAR_HELP(0);
}
uParam0->f_681=0;
}}
if(uParam0->f_682 !=0){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682)){
iVar15=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
if(iVar15 !=-1){
iVar16=uParam0->f_418[iVar15];
if(iVar16 !=uParam0->f_427){
AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
}
uParam0->f_427=iVar16;
}
uParam0->f_682=0;
}}
if(uParam0->f_427 !=0){
func_111(uParam0, uParam0->f_427);
}}


void func_111(var uParam0, int iParam1){
if(!func_20()){
if(uParam0->f_483==0){
switch (iParam1){
case 10:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_119, 14)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[14 /*2*/]), "")){
MISC::SET_BIT(&(uParam0->f_449), 10);
MISC::SET_BIT(&(uParam0->f_449), 17);
func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 14);
MISC::SET_BIT(&(uParam0->f_449), 12);
return;
}}
break;
case 13:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_119, 16)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[16 /*2*/]), "")){
MISC::SET_BIT(&(uParam0->f_449), 10);
MISC::SET_BIT(&(uParam0->f_449), 17);
func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 16);
MISC::SET_BIT(&(uParam0->f_449), 12);
return;
}}
break;
case 12:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_119, 15)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[15 /*2*/]), "")){
MISC::SET_BIT(&(uParam0->f_449), 10);
MISC::SET_BIT(&(uParam0->f_449), 17);
func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 15);
MISC::SET_BIT(&(uParam0->f_449), 12);
return;
}}
break;
case 11:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_119, 17)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[17 /*2*/]), "")){
MISC::SET_BIT(&(uParam0->f_449), 10);
MISC::SET_BIT(&(uParam0->f_449), 17);
func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 17);
MISC::SET_BIT(&(uParam0->f_449), 12);
return;
}}
break;
}}}}


void func_112(var uParam0, bool bParam1){
if(!MISC::IS_BIT_SET(uParam0->f_463, bParam1)){
if(!MISC::IS_BIT_SET(Global_113810.f_1.f_119, bParam1)){
if(!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[bParam1 /*2*/]), "")){
func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
MISC::SET_BIT(&(Global_113810.f_1.f_119), bParam1);
}}else{
switch (*uParam0){
case 2:
switch (bParam1){
case 1:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 0)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}
break;
case 10:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 1)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}
break;
}
break;
case 3:
switch (bParam1){
case 12:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 3)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
}
break;
case 9:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 6)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
}
break;
case 1:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 0)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 7)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 7)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
}
break;
case 10:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 1)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 8)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 8)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
}
break;
case 6:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 4)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}
break;
case 7:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 2)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}
break;
case 8:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 5)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
}
break;
}
break;
case 4:
switch (bParam1){
case 12:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 15)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 3)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
}}
break;
case 7:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 2)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 14)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 14)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
}
break;
case 9:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 18)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 6)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
}}
break;
case 4:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 17)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
}
break;
case 5:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 12)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
}
break;
case 1:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 10)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 0)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 7)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
}
else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
}}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}}
break;
case 10:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 11)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 1)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 8)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
}
else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
}}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}}
break;
case 3:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 13)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}
break;
case 6:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 19)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 4)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}}
break;
case 8:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 16)){
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 5)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
}else{
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}}
break;
case 13:
if(MISC::IS_BIT_SET(Global_113810.f_1.f_117, 20)){
func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
}
break;
}
break;
}}
MISC::SET_BIT(&(uParam0->f_463), bParam1);
}}


void func_113(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_113810.f_9088.f_99.f_205[7];
if(iVar0==1){
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
}else{
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
}
break;
case 1:
iVar0=Global_113810.f_9088.f_99.f_205[8];
if(iVar0==3){
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
}else{
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
}
break;
case 3:
iVar0=Global_113810.f_9088.f_99.f_205[10];
if(iVar0==6){
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
}else{
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
}
break;
case 4:
iVar0=Global_113810.f_9088.f_99.f_205[11];
if(iVar0==8){
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
}else{
STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
}
break;
}}


void func_114(int iParam0, int iParam1){
if(iParam0==13 || iParam0==-1){
return;
}
if(Global_113810.f_9088.f_99.f_205[iParam0]==iParam1){
return;
}
Global_113810.f_9088.f_99.f_205[iParam0]=iParam1;
}


void func_115(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113810.f_9088.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113810.f_9088.f_99.f_58[iParam0]=iParam1;
}


void func_116(int iParam0){
int iVar0;
int iVar1;
func_117(iParam0);
switch (iParam0){
case 0:
iVar1=Global_113810.f_9088.f_99.f_205[7];
iVar0=0;
while (iVar0 < Global_96842[iVar1 /*19*/]){
switch (Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]){
case 1:
MISC::SET_BIT(&(Global_113810.f_1.f_117), false);
break;
case 10:
MISC::SET_BIT(&(Global_113810.f_1.f_117), true);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 14);
break;
case 7:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 2);
break;
case 12:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 3);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 15);
break;
case 6:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 4);
break;
case 8:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 5);
break;
case 9:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 6);
break;
}
MISC::SET_BIT(&(Global_113810.f_1.f_119), Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]);
iVar0++;
}
break;
case 2:
iVar1=Global_113810.f_9088.f_99.f_205[9];
iVar0=0;
while (iVar0 < Global_96842[iVar1 /*19*/]){
switch (Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]){
case 1:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 7);
break;
case 10:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 8);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 14);
break;
case 11:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 9);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 17);
break;
}
MISC::SET_BIT(&(Global_113810.f_1.f_119), Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]);
iVar0++;
}
break;
case 3:
iVar1=Global_113810.f_9088.f_99.f_205[10];
iVar0=0;
while (iVar0 < Global_96842[iVar1 /*19*/]){
switch (Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]){
case 1:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 10);
break;
case 10:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 11);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 14);
break;
case 5:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 12);
break;
case 3:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 13);
break;
case 4:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 17);
break;
case 7:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 14);
break;
case 12:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 15);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 15);
break;
case 6:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 19);
break;
case 8:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 16);
break;
case 9:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 18);
break;
case 13:
MISC::SET_BIT(&(Global_113810.f_1.f_117), 20);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_119), 16);
break;
}
MISC::SET_BIT(&(Global_113810.f_1.f_119), Global_113810.f_1.f_12[iVar1 /*6*/][iVar0]);
iVar0++;
}
break;
}}


void func_117(int iParam0){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), false);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), true);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 2);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 3);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 4);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 5);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 6);
break;
case 2:
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 7);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 8);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 9);
break;
case 3:
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 10);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 11);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 12);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 13);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 14);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 15);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 16);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 17);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 18);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 19);
MISC::CLEAR_BIT(&(Global_113810.f_1.f_117), 20);
break;
}}


void func_118(){
Global_20711=0;
func_119();
}


void func_119(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_120(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_121();
}


void func_121(){
Global_23251.f_134=1;
}


void func_122(var uParam0){
struct<3> Var0;
int iVar1;
uParam0->f_453=0;
uParam0->f_463=0;
MISC::SET_BIT(&(uParam0->f_449), 9);
func_12(uParam0, 0);
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(Global_44569==1){
func_127(PLAYER::PLAYER_PED_ID());
}
Var0={
uParam0->f_401 
};
Var0={
Var0 + Vector(0.5f, (2.9f * cos((180f - uParam0->f_404))), (2.9f * sin((180f - uParam0->f_404)))) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
}
MISC::SET_BIT(&(uParam0->f_449), 7);
}
HUD::DISPLAY_RADAR(0);
func_73(1);
func_126();
HUD::THEFEED_PAUSE();
MISC::CLEAR_AREA(uParam0->f_401, 5f, 1, 1, 0, 0);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
iVar1=INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
if(iVar1 !=0){
INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
}
INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(&(Global_96759[uParam0->f_1.f_1 /*15*/].f_7));
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
}
func_124(0);
func_123();
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
uParam0->f_466=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 10, 1);
MISC::SET_BIT(&(uParam0->f_449), 2);
Global_96820=1;
func_7(uParam0, uParam0->f_464, 0);
}


void func_123(){
int iVar0;
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
func_16(iVar0);
iVar0++;
}
Global_113810.f_20413.f_145=0;
iVar0=0;
while (iVar0 < 2){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}}


void func_124(bool bParam0){
if(!bParam0){
Global_112451=MISC::GET_GAME_TIMER() + 250;
}
Global_112448=bParam0;
}


void func_125(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11){
uParam0->f_1={
Param1 
};
uParam0->f_4={
Param2 
};
uParam0->f_7=fParam3;
uParam0->f_20=iParam4;
uParam0->f_21=iParam5;
uParam0->f_22=iParam6;
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_11={
0f, 0f, 0f 
};
uParam0->f_14={
0f, 0f, 0f 
};
uParam0->f_17=fParam3;
uParam0->f_18=fParam3;
uParam0->f_23=iParam8;
uParam0->f_19=uParam7;
*uParam0=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_ACTIVE(*uParam0, 1);
CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
if(!bParam11){
CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if(fParam10 > 0f){
CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
}
if(uParam0->f_23){
HUD::LOCK_MINIMAP_ANGLE(iParam9);
}
uParam0->f_24=0;
uParam0->f_25=0;
uParam0->f_29=0f;
uParam0->f_30=0f;
uParam0->f_26=0;
uParam0->f_28=0;
uParam0->f_27=0;
}


void func_126(){
Global_23251.f_5=1;
}


void func_127(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_135(iParam0);
if(!iVar0==-1){
iVar1=Global_44355[iVar0 /*5*/];
func_130(1, iVar1, 1);
return;
}
iVar2=func_129(iParam0);
if(iVar2==-1){
return;
}
func_128(iVar2);
}


void func_128(int iParam0){
if(iParam0 < 0 || iParam0 >=5){
return;
}
if(!Global_44329[iParam0 /*5*/].f_1==0){
if(Global_44329[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()){
Global_44567=0;
}}
Global_44329[iParam0 /*5*/]=13;
Global_44329[iParam0 /*5*/].f_1=0;
Global_44329[iParam0 /*5*/].f_2=0;
Global_44329[iParam0 /*5*/].f_3=0;
Global_44329[iParam0 /*5*/].f_4=0;
Global_44327=(Global_44327 - 1);
if(Global_44327 < 0){
Global_44327=0;
}}

int func_129(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_44329[iVar0 /*5*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_130(int iParam0, int iParam1, int iParam2){
func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam0==-1){
return;
}
if(iParam1==-1){
return;
}
if(iParam2==6){
return;
}
if(func_133(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_132();
if(iVar0==-1){
return;
}
Global_44436[iVar0 /*6*/]=iParam0;
Global_44436[iVar0 /*6*/].f_1=iParam1;
Global_44436[iVar0 /*6*/].f_2=iParam2;
Global_44436[iVar0 /*6*/].f_3=iParam3;
Global_44436[iVar0 /*6*/].f_4=iParam4;
Global_44436[iVar0 /*6*/].f_5=iParam5;
}

int func_132(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44436[iVar0 /*6*/].f_2==6){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_133(int iParam0, int iParam1, int iParam2){
if(func_134(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_134(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam2==Global_44436[iVar0 /*6*/].f_2){
if(iParam0==Global_44436[iVar0 /*6*/]){
if(iParam1==Global_44436[iVar0 /*6*/].f_1){
return iVar0;
}}}
iVar0++;
}
return -1;
}

int func_135(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(!Global_44355[iVar0 /*5*/]==-1){
if(iParam0==Global_44355[iVar0 /*5*/].f_1){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_136(var uParam0){
int iVar0;
if(*uParam0==-1){
return;
}
iVar0=func_137(*uParam0);
if(iVar0==-1){
*uParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
}

int func_137(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44123[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_138(int iParam0, bool bParam1){
int iVar0;
iVar0=func_137(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_149(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}


void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1){
func_136(uParam0);
}
return;
}
if(!*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*uParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_140(int iParam0){
bool bVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
bVar0=func_100();
if(!func_102(bVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112857) || Global_32286) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_144()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_148()) || Global_32286) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112857) || Global_32286) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112857) || Global_32286) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 4:
if(((((func_148() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_107(8, -1)) || func_143()) || func_142()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 5:
if((((func_107(8, -1) || func_146()) || func_145()) || func_142()) || func_141()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_148()) || Global_32286) || func_147()) || func_107(8, -1)) || func_145()) || func_144()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_148()) || func_145()) || Global_112857) || Global_32286) || func_147()) || Global_44569) || func_107(8, -1)) || func_144()) || func_142()) || func_143()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_148()) || Global_112857) || Global_32286) || func_147()) || func_107(8, -1)) || func_144()) || func_142()) || func_146()) || func_145()) || func_143()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__141(){
return Global_100872.f_1;
}

int func_142(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_143(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_144(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_145(){
return Global_100885.f_394 > 0;
}


bool func_146(){
return Global_100885.f_393 > 0;
}


var func__147(){
return Global_1575063;
}

int func_148(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_149(int iParam0){
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


bool func_150(int iParam0){
return func_151(iParam0, Global_43377);
}

int func_151(int iParam0, int iParam1){
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


void func_152(){
int iVar0;
int iVar1;
int iVar2;
if(func_408(25)){
iVar0=func_66(func_31(4));
if(iVar0 !=iLocal_47){
CUTSCENE::REMOVE_CUTSCENE();
switch (iVar0){
case 8:
sLocal_40="BS_2A_INT";
break;
case 9:
sLocal_40="BS_2B_INT";
break;
}
iLocal_47=iVar0;
}
if(iLocal_47 !=-1){
CUTSCENE::REQUEST_CUTSCENE(sLocal_40, 8);
}
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){
CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
}}
if(func_408(26)){
if(func_408(25)){
if(CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_40)){
if(!func_2(0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_128, "Michael", 0, joaat("player_zero"), 0);
}}elseif(!ENTITY::IS_ENTITY_DEAD(iLocal_128, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_128, "Michael", 0, joaat("player_zero"), 0);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_131, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_131, "Lester", 0, joaat("ig_lestercrest"), 0);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_129, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_129, "Franklin", 0, joaat("player_one"), 0);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_130, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "Trevor", 0, joaat("player_two"), 0);
}
func_73(1);
func_124(1);
func_214(1, 1, 1, 0, 0, 0, 0);
iVar1=0;
while (iVar1 < func_213(4)){
if(func_211(4, iVar1)==12){
func_197(-837794877);
}
iVar1++;
}
if(bLocal_45){
iVar2=0;
}else{
iVar2=256;
}
CUTSCENE::START_CUTSCENE(iVar2);
if(func_2(0)){
CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
}
func_115(25, 0);
iLocal_42=MISC::GET_GAME_TIMER();
}}elseif(CUTSCENE::IS_CUTSCENE_PLAYING()){
iLocal_42=iLocal_42;
func_120();
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_131)){
PED::DELETE_PED(&iLocal_131);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0)){
if(!PED::IS_PED_INJURED(iLocal_128)){
PED::FORCE_PED_MOTION_STATE(iLocal_128, joaat("MotionState_Walk"), 0, 1, 0);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0, 0);
}}
func_196(0);
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_129)){
PED::DELETE_PED(&iLocal_129);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_130)){
PED::DELETE_PED(&iLocal_130);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1)){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
}}elseif(iLocal_43==-1 && !func_2(0)){
iLocal_43=MISC::GET_GAME_TIMER() + 3500;
}elseif(MISC::GET_GAME_TIMER() > iLocal_43 || func_2(0)){
if(func_2(0)){
CAM::DO_SCREEN_FADE_OUT(0);
}else{
Global_63485=0;
Global_100872=0;
func_195();
}
func_73(0);
func_214(0, 1, 1, 0, 0, 0, 0);
func_194();
func_192(&(Global_113810.f_2366.f_539), 77);
func_161(&(Global_113810.f_2366.f_539), 77);
func_160(&iLocal_44);
MISC::CLEAR_BIT(&uLocal_41, 3);
func_115(26, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_173, 0);
if(iLocal_174 !=-1){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_174)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_174);
}}
PED::CLEAR_PED_NON_CREATION_AREA();
PATHFIND::SET_PED_PATHS_IN_AREA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, 1, 0);
PLAYER::SET_MAX_WANTED_LEVEL(5);
func_153(4, 0);
}}elseif(!func_408(25)){
if(CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_40)){
CUTSCENE::REMOVE_CUTSCENE();
}}}


void func_153(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 14){
iVar1=iVar0;
if(func_40(iVar1) || func_39(iVar1)){
if(!(iVar1==11 && iParam0==3)){
switch (iVar1){
case 1:
func_157(4, 1);
break;
case 4:
func_157(8, 1);
break;
case 6:
func_157(10, 1);
break;
case 7:
func_157(1, 1);
break;
case 8:
func_157(3, 1);
break;
case 9:
func_157(6, 1);
break;
case 10:
func_157(9, 1);
break;
case 12:
func_157(11, 1);
break;
case 13:
func_157(12, 1);
break;
case 11:
if(func_156(91)){
func_157(0, 1);
}
break;
case 5:
if(func_156(91)){
func_157(2, 1);
}
break;
case 3:
if(func_156(67)){
func_157(5, 1);
}
break;
case 2:
if(func_156(77)){
func_157(7, 1);
}
break;
}}}
iVar0++;
}
if(!func_40(10) && MISC::IS_BIT_SET(Global_113810.f_24998.f_8[4], 0)){
func_157(9, 1);
}
if(!func_40(13) && MISC::IS_BIT_SET(Global_113810.f_24998.f_8[16], 0)){
func_157(12, 1);
}
if(!func_40(12)){
if(iParam0==4){
func_157(11, 1);
}}
if(!bParam1){
if(!func_155(69)){
func_22("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
}
func_154("DI_FEED_HST");
}}


void func_154(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_155(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113810.f_20413.f_150[iVar1], iVar0);
}
return 0;
}

int func_156(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}


void func_157(int iParam0, bool bParam1){
bool bVar0;
bVar0=iParam0;
if(bVar0 >=0 && bVar0 <=31){
if(!func_159(iParam0)){
MISC::SET_BIT(&(Global_113810.f_26437.f_1), bVar0);
if(!bParam1){
func_154(func_158(iParam0));
}}}}


char* func_158(int iParam0){
switch (iParam0){
case 0:
return "CM_HSTCHE";
break;
case 1:
return "CM_HSTCHR";
break;
case 2:
return "CM_HSTDAR";
break;
case 3:
return "CM_HSTEDD";
break;
case 4:
return "CM_HSTGUS";
break;
case 5:
return "CM_HSTHUG";
break;
case 6:
return "CM_HSTKRM";
break;
case 7:
return "CM_HSTKAR";
break;
case 8:
return "CM_HSTNOR";
break;
case 9:
return "CM_HSTPAC";
break;
case 10:
return "CM_HSTPAI";
break;
case 11:
return "CM_HSTRIC";
break;
case 12:
return "CM_HSTTAL";
break;
}
return "ERROR!";
}

int func_159(int iParam0){
if(iParam0 !=-1 && iParam0 !=13){
return MISC::IS_BIT_SET(Global_113810.f_26437.f_1, iParam0);
}
return 0;
}


void func_160(int iParam0){
if(*iParam0==-1){
return;
}
if(!*iParam0==Global_43339){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


void func_161(var uParam0, int iParam1){
switch (iParam1){
case 17:
func_162(uParam0, 0, 12);
break;
case 19:
func_162(uParam0, 1, 13);
break;
case 29:
func_162(uParam0, 1, 14);
break;
case 30:
func_162(uParam0, 2, 15);
func_162(uParam0, 1, 29);
break;
case 32:
func_162(uParam0, 1, 16);
func_162(uParam0, 0, 17);
break;
case 39:
func_162(uParam0, 0, 21);
func_162(uParam0, 1, 20);
break;
case 31:
func_162(uParam0, 0, 18);
break;
case 20:
func_162(uParam0, 2, 22);
break;
case 66:
func_162(uParam0, 1, 23);
break;
case 68:
func_162(uParam0, 1, 24);
break;
case 70:
func_162(uParam0, 1, 67);
break;
case 8:
func_162(uParam0, 1, 25);
func_162(uParam0, 2, 26);
break;
case 67:
func_162(uParam0, 1, 27);
break;
case 9:
func_162(uParam0, 2, 28);
break;
case 38:
func_162(uParam0, 2, 30);
func_162(uParam0, 1, 19);
break;
case 83:
func_162(uParam0, 2, 33);
break;
case 45:
func_162(uParam0, 1, 35);
break;
case 64:
func_162(uParam0, 0, 36);
func_162(uParam0, 1, 37);
break;
case 91:
func_162(uParam0, 0, 41);
break;
case 42:
func_162(uParam0, 0, 58);
Global_100237[0 /*98*/]=0;
func_162(uParam0, 2, 59);
Global_100237[2 /*98*/]=0;
break;
case 41:
func_162(uParam0, 1, 42);
func_162(uParam0, 2, 42);
break;
case 15:
func_162(uParam0, 0, 46);
func_162(uParam0, 1, 47);
break;
case 16:
func_162(uParam0, 0, 48);
break;
case 48:
func_162(uParam0, 1, 50);
func_162(uParam0, 2, 51);
break;
case 74:
func_162(uParam0, 0, 52);
func_162(uParam0, 1, 66);
break;
case 76:
func_162(uParam0, 1, 53);
func_162(uParam0, 2, 54);
func_162(uParam0, 0, 62);
break;
case 75:
func_162(uParam0, 0, 61);
func_162(uParam0, 1, 31);
break;
case 69:
func_162(uParam0, 1, 63);
break;
case 84:
func_162(uParam0, 0, 68);
func_162(uParam0, 2, 69);
break;
case 85:
func_162(uParam0, 0, 64);
func_162(uParam0, 2, 65);
break;
case 93:
func_162(uParam0, 1, 38);
func_162(uParam0, 2, 39);
break;
case 11:
func_162(uParam0, 2, 55);
break;
case 77:
func_162(uParam0, 1, 56);
func_162(uParam0, 2, 57);
break;
default:
break;
}}

int func_162(var uParam0, int iParam1, int iParam2){
int iVar0;
struct<98> Var1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
if(!MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], 9)){
iVar0=Global_113810.f_18536[iParam1];
if(iVar0==11){
return 0;
}
if((iVar0==8 || iVar0==9) || iVar0==10){
return 0;
}}
Global_113810.f_18536[iParam1]=iParam2;
uParam0->f_2296[iParam1]=func_181();
if(!func_180(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1]))){
return 0;
}
if(!func_179(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0)){
if(!func_179(Global_99272[iParam2 /*3*/], 0f, 0f, 0f, 0)){
Var1.f_11=12;
Var1.f_31=49;
Var1.f_81=2;
if(func_163(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5)){
Global_100237[iParam1 /*98*/]={
Var1 
};
}}}
uParam0->f_2314[iParam1]=0;
uParam0->f_2318[iParam1 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iParam1]=0;
return 1;
}

int func_163(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
uParam2->f_3=1000;
uParam2->f_1=0;
uParam2->f_84=255;
uParam2->f_85=255;
uParam2->f_86=255;
switch (iParam1){
case 5:
*uParam2={
Global_100237[iParam0 /*98*/] 
};
if(Global_100532[iParam0] !=2){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100540[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1)){
if(Global_100532[iParam0]==1){
*uParam3={
Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] 
};
*uParam4=(Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
if(vmag2(*uParam3) > (5f * 5f)){
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
return 0;
}}}
*uParam3={
Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] 
};
*uParam4=(Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
if(vmag2(*uParam3) < (0.5f * 0.5f)){
*uParam3={
*uParam3 * Vector(1.5f, 1.5f, 1.5f) 
};
}}else{
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
}
return 1;
break;
case 6:
*uParam2={
Global_100237[iParam0 /*98*/] 
};
if(Global_100532[iParam0] !=2){
*uParam3={
Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] 
};
*uParam4=(Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
if(vmag2(*uParam3) < (0.5f * 0.5f)){
*uParam3={
*uParam3 * Vector(1.5f, 1.5f, 1.5f) 
};
}}else{
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
}
return 1;
break;
case 7:
*uParam2={
Global_100237[iParam0 /*98*/] 
};
if(Global_100532[iParam0] !=2){
*uParam3={
Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] 
};
*uParam4=(Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
if(vmag2(*uParam3) < (0.5f * 0.5f)){
*uParam3={
*uParam3 * Vector(1.5f, 1.5f, 1.5f) 
};
}}else{
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
}
return 1;
break;
case 11:
func_165(iParam0, uParam2, 0);
*uParam3={
37.43f, -23.81f, 0f 
};
*uParam4=127f;
return 1;
break;
case 8:
uParam2->f_97=0;
*uParam2=joaat("mesa");
*uParam3={
Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) 
};
*uParam4=(1.27f - 194.1887f);
return 1;
break;
case 9:
return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 10:
return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 13:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 5f, 0f 
};
*uParam6=5f;
return 1;
break;
case 14:
func_165(iParam0, uParam2, 2);
uParam2->f_91=1;
*uParam5={
0f, 25f, 0f 
};
*uParam6=25f;
return 1;
break;
case 15:
uParam2->f_97=0;
*uParam2=joaat("frogger");
uParam2->f_5=34;
uParam2->f_6=34;
uParam2->f_7=0;
uParam2->f_8=0;
uParam2->f_9=0;
uParam2->f_11[0]=1;
uParam2->f_11[1]=1;
uParam2->f_11[2]=1;
uParam2->f_11[3]=1;
uParam2->f_11[4]=1;
uParam2->f_11[5]=1;
uParam2->f_11[6]=1;
uParam2->f_11[7]=1;
uParam2->f_11[8]=1;
*uParam5={
0f, 50f, 0f 
};
*uParam6=15f;
return 1;
break;
case 55:
uParam2->f_97=0;
*uParam2=joaat("mesa");
*uParam3={
Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) 
};
*uParam4=(246.1684f - 90f);
return 1;
break;
case 56:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=20f;
return 1;
break;
case 57:
uParam2->f_97=0;
*uParam2=joaat("penumbra");
*uParam3={
Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) 
};
*uParam4=(141.28f - 90.0339f);
return 1;
break;
case 12:
uParam2->f_97=0;
*uParam2=joaat("taxi");
uParam2->f_2=0f;
uParam2->f_4=0;
uParam2->f_9=1;
*uParam5={
0f, 5f, 0f 
};
*uParam6=5f;
return 1;
break;
case 16:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 15f, 0f 
};
*uParam6=5f;
return 1;
break;
case 17:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 25f, 0f 
};
*uParam6=15f;
return 1;
break;
case 18:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 25f, 0f 
};
*uParam6=25f;
return 1;
break;
case 19:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 15f, 0f 
};
*uParam6=10f;
return 1;
break;
case 20:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 25f, 0f 
};
*uParam6=25f;
return 1;
break;
case 23:
return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 24:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 25f, 0f 
};
*uParam6=25f;
return 1;
break;
case 67:
func_165(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
21.6401f, 38.5601f, 1.9708f 
};
*uParam4=-84f;
return 1;
break;
case 58:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 59:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 60:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 22:
uParam2->f_97=0;
*uParam2=joaat("phantom");
*uParam5={
0f, 50f, 0f 
};
*uParam6=20f;
return 1;
break;
case 74:
func_165(iParam0, uParam2, 1);
uParam2->f_91=2;
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
break;
case 38:
func_165(iParam0, uParam2, 2);
uParam2->f_91=2;
*uParam5={
0f, 25f, 0f 
};
*uParam6=15f;
return 1;
break;
case 41:
func_165(iParam0, uParam2, 0);
*uParam3={
-2.72f, 0.45f, 1f 
};
*uParam4=-137f;
return 1;
break;
case 25:
uParam2->f_97=0;
*uParam2=joaat("blista");
*uParam3={
Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) 
};
*uParam4=(0.72f - 156.8827f);
return 1;
break;
case 27:
uParam2->f_97=0;
*uParam2=joaat("seminole");
*uParam3={
Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) 
};
*uParam4=(2.23f - 7.2736f);
return 1;
break;
case 26:
uParam2->f_97=0;
*uParam2=joaat("peyote");
*uParam3={
Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) 
};
*uParam4=(-1f - 97.2736f);
return 1;
break;
case 40:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
16.5182f, -8.5576f, -2.3291f 
};
*uParam4=174.24f;
return 1;
break;
case 28:
uParam2->f_97=0;
*uParam2=joaat("polmav");
uParam2->f_11[0]=1;
uParam2->f_11[1]=1;
uParam2->f_11[2]=1;
uParam2->f_11[3]=1;
uParam2->f_11[4]=1;
uParam2->f_11[5]=1;
uParam2->f_11[6]=1;
uParam2->f_11[7]=1;
uParam2->f_11[8]=1;
*uParam5={
0f, 20f, 0f 
};
*uParam6=25f;
return 1;
break;
case 234:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
16.5182f, -8.5576f, -2.3291f 
};
*uParam4=174.24f;
return 1;
break;
case 75:
func_165(iParam0, uParam2, 0);
*uParam5={
2.5f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 76:
func_165(iParam0, uParam2, 0);
*uParam5={
2.5f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 42:
uParam2->f_97=0;
*uParam2=joaat("mesa");
*uParam3={
Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) 
};
*uParam4=(246.1684f - 90f);
return 1;
break;
case 43:
uParam2->f_97=0;
*uParam2=joaat("mesa");
*uParam3={
Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) 
};
*uParam4=(247.4806f - 355.326f);
return 1;
break;
case 44:
uParam2->f_97=0;
*uParam2=joaat("sadler");
*uParam3={
Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) 
};
*uParam4=(253.776f - 334.1068f);
return 1;
break;
case 45:
uParam2->f_97=0;
*uParam2=joaat("mixer");
*uParam3={
Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) 
};
*uParam4=(2.62f - 299.0519f);
return 1;
break;
case 47:
uParam2->f_97=0;
*uParam2=joaat("cavalcade");
uParam2->f_5=0;
uParam2->f_6=0;
uParam2->f_7=0;
uParam2->f_8=0;
uParam2->f_9=0;
StringCopy(&(uParam2->f_27), "22LJK483", 16);
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
*uParam5={
0f, 10f, 0f 
};
*uParam6=15f;
return 1;
break;
case 49:
func_165(iParam0, uParam2, 0);
*uParam5={
-1.5f, 35f, 3f 
};
*uParam6=15f;
return 1;
break;
case 48:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
3.8721f, -5.9568f, 0f 
};
*uParam4=(164.2466f - 180f);
return 1;
break;
case 50:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 10f, 0f 
};
*uParam6=15f;
return 1;
break;
case 51:
uParam2->f_97=0;
*uParam2=joaat("stretch");
*uParam3={
Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) 
};
*uParam4=(310.4708f - 220.9554f);
return 1;
break;
case 52:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=12.5f;
return 1;
break;
case 66:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=12.5f;
return 1;
break;
case 61:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=25f;
return 1;
break;
case 62:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=25f;
return 1;
break;
case 63:
func_165(iParam0, uParam2, 0);
*uParam3={
-2.9117f, -15.0499f, -0.3468f 
};
*uParam4=-139.9751f;
return 1;
break;
case 64:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 69:
uParam2->f_97=0;
*uParam2=joaat("prairie");
*uParam3={
Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) 
};
*uParam4=(64.1848f - 180f);
return 1;
break;
case 65:
case 54:
uParam2->f_97=0;
*uParam2=joaat("frogger2");
uParam2->f_5=40;
uParam2->f_6=0;
uParam2->f_7=0;
uParam2->f_8=0;
uParam2->f_9=0;
uParam2->f_11[0]=1;
uParam2->f_11[1]=1;
uParam2->f_11[2]=1;
uParam2->f_11[3]=1;
uParam2->f_11[4]=1;
uParam2->f_11[5]=1;
uParam2->f_11[6]=1;
uParam2->f_11[7]=1;
uParam2->f_11[8]=1;
uParam2->f_89=1;
if(iParam1==54){
*uParam3={
5.5414f, -6.6035f, 1.0473f 
};
*uParam4=-83.2547f;
}
if(iParam1==65){
*uParam3={
5.7209f, -12.3958f, 1.0746f 
};
*uParam4=-152.2593f;
}
return 1;
break;
case 112:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
break;
case 113:
if(func_163(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
}
break;
case 118:
uParam2->f_97=0;
*uParam2=joaat("scorcher");
uParam2->f_2=0f;
uParam2->f_4=0;
uParam2->f_9=1;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
*uParam5={
1f, 12.5f, 0f 
};
*uParam6=5f;
return 1;
break;
case 119:
if(func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
5f, 20f, 0f 
};
*uParam6=5f;
return 1;
}
break;
case 120:
if(func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 30f, 0f 
};
*uParam6=8f;
return 1;
}
break;
case 173:
uParam2->f_97=0;
*uParam2=joaat("cruiser");
*uParam3={
0f, 0f, 0f 
};
*uParam4=0.1f;
*uParam5={
0.1f, 0.1f, 0.1f 
};
*uParam6=0.1f;
return 1;
break;
case 114:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
-1.9002f, 1.205f, -0.3537f 
};
*uParam4=-180f;
return 1;
break;
case 105:
func_165(iParam0, uParam2, 1);
*uParam5={
0f, 0.1f, 0f 
};
*uParam6=0.5f;
return 1;
break;
case 106:
return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 107:
return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 98:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0.1f;
*uParam5={
0.1f, 0.1f, 0.1f 
};
*uParam6=0.1f;
return 1;
break;
case 99:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
*uParam5={
0f, 0f, 0f 
};
*uParam6=0f;
return 1;
break;
case 100:
return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 101:
return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 102:
return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 123:
func_165(iParam0, uParam2, 0);
*uParam3={
3.2267f, 1.0966f, -0.354f 
};
*uParam4=-31.73f;
return 1;
break;
case 125:
func_165(iParam0, uParam2, 0);
*uParam3={
-13.7322f, 1.8783f, 1.0593f 
};
*uParam4=55.3652f;
return 1;
break;
case 133:
uParam2->f_97=0;
*uParam2=joaat("tropic");
uParam2->f_2=0f;
uParam2->f_4=0;
uParam2->f_9=1;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
uParam2->f_11[0]=0;
uParam2->f_11[1]=0;
uParam2->f_11[2]=1;
uParam2->f_11[3]=0;
uParam2->f_11[4]=0;
uParam2->f_11[5]=1;
uParam2->f_11[6]=1;
uParam2->f_11[7]=1;
uParam2->f_11[8]=1;
*uParam5={
0f, 20f, 0f 
};
*uParam6=15f;
return 1;
break;
case 89:
case 90:
case 127:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam5={
0f, 0f, 0f 
};
*uParam6=0.1f;
return 1;
break;
case 91:
func_165(iParam0, uParam2, 0);
*uParam3={
15.4538f, -8.711f, 5.79f 
};
*uParam4=2.4942f;
return 1;
break;
case 93:
if(func_163(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-8.1f, -9.01f, 0.4439f 
};
*uParam4=94.03f;
return 1;
}
break;
case 121:
func_165(iParam0, uParam2, 0);
*uParam3={
18.8468f, 40.7721f, 0f 
};
*uParam4=-116.3936f;
return 1;
break;
case 115:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) 
};
*uParam4=((177.259f - 180f) - 69f);
return 1;
break;
case 116:
func_165(iParam0, uParam2, 0);
*uParam3={
1.7826f, 12.2098f, -0.6964f 
};
*uParam4=-96.0001f;
return 1;
break;
case 117:
func_165(iParam0, uParam2, 0);
*uParam3={
11.8705f, -1.4684f, -1.6487f 
};
*uParam4=-125.8331f;
return 1;
break;
case 94:
func_165(iParam0, uParam2, 0);
*uParam3={
-13.1578f, 16.3962f, 0.6396f 
};
*uParam4=-177f;
return 1;
break;
case 96:
func_165(iParam0, uParam2, 0);
*uParam3={
-21.0518f, 0.5037f, 0.4091f 
};
*uParam4=-83.1262f;
return 1;
break;
case 108:
func_165(iParam0, uParam2, 0);
*uParam3={
10.8971f, 2.0809f, -0.7983f 
};
*uParam4=-150.9417f;
return 1;
break;
case 109:
func_165(iParam0, uParam2, 0);
*uParam3={
79.9901f, -52.83f, -0.3533f 
};
*uParam4=44.7231f;
return 1;
break;
case 135:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
break;
case 136:
if(func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
}
break;
case 137:
if(func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
}
break;
case 138:
if(func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
}
break;
case 139:
if(func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
2.4845f, 2.3286f, -0.383f 
};
*uParam4=-31.4884f;
return 1;
}
break;
case 140:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 15f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 141:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 40f, 0f 
};
*uParam6=12.5f;
return 1;
}
break;
case 142:
func_165(iParam0, uParam2, 0);
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
break;
case 143:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 144:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 145:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 146:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 147:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 15f, 0f 
};
*uParam6=7.5f;
return 1;
}
break;
case 148:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 149:
if(func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam5={
0f, 25f, 0f 
};
*uParam6=10f;
return 1;
}
break;
case 151:
if(func_163(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-13.2213f, 16.331f, 0f 
};
*uParam4=6f;
return 1;
}
break;
case 162:
if(func_163(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
10.3876f, -10.3585f, -1.2183f 
};
*uParam4=8.6726f;
return 1;
}
break;
case 158:
func_165(iParam0, uParam2, 0);
*uParam3={
1.0793f, 15.631f, 1.1744f 
};
*uParam4=2.52f;
return 1;
break;
case 166:
return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 170:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0.1f;
*uParam5={
0.1f, 0.1f, 0.1f 
};
*uParam6=0.1f;
return 1;
break;
case 171:
return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 172:
return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 208:
func_165(iParam0, uParam2, 1);
*uParam5={
0f, 0.1f, 0f 
};
*uParam6=0.5f;
return 1;
break;
case 209:
return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 210:
return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 211:
func_164(iParam0, uParam2, 2);
uParam2->f_91=2;
*uParam3={
-2.19f, -1.23f, 0f 
};
*uParam4=90f;
return 1;
break;
case 212:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
uParam2->f_2=0f;
*uParam3={
-1.3547f, 2.1615f, -0.3723f 
};
*uParam4=177.8041f;
return 1;
break;
case 213:
if(func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-4.2075f, 1.0943f, 0f 
};
*uParam4=15.82f;
return 1;
}
break;
case 214:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
uParam2->f_2=0f;
*uParam3={
2.291f, 1.0879f, 0.0635f 
};
*uParam4=177.798f;
return 1;
break;
case 215:
uParam2->f_97=0;
*uParam2=joaat("taxi");
uParam2->f_2=0f;
uParam2->f_4=0;
uParam2->f_9=1;
*uParam3={
-0.9714f, 1.6112f, -0.2773f 
};
*uParam4=-7.0583f;
*uParam5={
Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) 
};
*uParam6=10f;
return 1;
break;
case 196:
uParam2->f_97=0;
*uParam2=joaat("taxi");
uParam2->f_2=0f;
uParam2->f_4=0;
uParam2->f_9=1;
*uParam3={
Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) 
};
*uParam4=(89.0026f - -1.5f);
*uParam5={
Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) 
};
*uParam6=10f;
return 1;
break;
case 221:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) 
};
*uParam4=(357.1407f - 84.96f);
return 1;
break;
case 216:
if(func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-2.1752f, -2.3781f, 0f 
};
*uParam4=-68.4f;
return 1;
}
break;
case 217:
if(func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-3.9761f, 0.2542f, 0f 
};
*uParam4=-70.5273f;
return 1;
}
break;
case 232:
case 233:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) 
};
*uParam4=(162.098f - 109.0206f);
return 1;
break;
case 192:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) 
};
*uParam4=(302.182f - 105.981f);
return 1;
break;
case 193:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) 
};
*uParam4=(302.182f - 172.9187f);
return 1;
break;
case 194:
if(func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
12.74f, 3.26f, 0f 
};
*uParam4=95.217f;
return 1;
}
break;
case 195:
if(func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-1.34f, 7.684f, 0f 
};
*uParam4=173.52f;
return 1;
}
break;
case 200:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) 
};
*uParam4=(318.2674f - (310.879f - 180f));
return 1;
break;
case 201:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) 
};
*uParam4=(322.6286f - 130.879f);
return 1;
break;
case 202:
func_165(iParam0, uParam2, 0);
*uParam3={
91.3579f, 18.1788f, -0.1911f 
};
*uParam4=-90.3475f;
return 1;
break;
case 222:
func_165(iParam0, uParam2, 0);
*uParam3={
12.5073f, -3.4625f, -0.3702f 
};
*uParam4=14.3405f;
return 1;
break;
case 223:
if(func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
21.87f, -10.5f, 0f 
};
*uParam4=-104.76f;
return 1;
}
break;
case 224:
return func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 226:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) 
};
*uParam4=((270.1767f - 160f) - 180f);
return 1;
break;
case 227:
func_165(iParam0, uParam2, 0);
*uParam3={
-19.8544f, -10.4863f, -0.0334f 
};
*uParam4=-120.12f;
return 1;
break;
case 228:
func_165(iParam0, uParam2, 0);
*uParam3={
21.5897f, -6.8544f, 0.6015f 
};
*uParam4=-141f;
return 1;
break;
case 229:
func_165(iParam0, uParam2, 0);
*uParam3={
-7.6041f, 0.1369f, 0.5812f 
};
*uParam4=-145.769f;
return 1;
break;
case 230:
func_165(iParam0, uParam2, 0);
*uParam3={
-1.6f, 7.6802f, 0.6947f 
};
*uParam4=-50.99f;
return 1;
break;
case 238:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
22.322f, -6.2034f, 0f 
};
*uParam4=73.071f;
return 1;
break;
case 250:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam3={
-1.2901f, -5.5798f, -0.0357f 
};
*uParam4=160.56f;
return 1;
break;
case 251:
if(func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-4.0739f, 7.7692f, -0.2984f 
};
*uParam4=-48.9552f;
return 1;
}
break;
case 252:
if(func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
-5.778f, -4.2397f, 0.9091f 
};
*uParam4=-12.9418f;
return 1;
}
break;
case 253:
if(func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6)){
*uParam3={
0.6968f, 1.1033f, 0.912f 
};
*uParam4=90f;
return 1;
}
break;
case 281:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam5={
0f, 8f, 0.6f 
};
*uParam6=15f;
return 1;
break;
case 282:
if(func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6)){
return 1;
}
break;
case 283:
if(func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6)){
return 1;
}
break;
case 284:
if(func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6)){
uParam2->f_97=0;
*uParam2=joaat("faggio2");
uParam2->f_91=0;
return 1;
}
break;
case 275:
func_164(iParam0, uParam2, 1);
uParam2->f_91=1;
*uParam5={
0f, 8f, 0.6f 
};
*uParam6=15f;
return 1;
break;
case 276:
return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 277:
return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
break;
case 280:
if(!Global_3){
uParam2->f_97=0;
*uParam2=joaat("tropic");
uParam2->f_11[0]=0;
uParam2->f_11[1]=0;
uParam2->f_11[2]=1;
uParam2->f_11[3]=0;
uParam2->f_11[4]=0;
uParam2->f_11[5]=1;
uParam2->f_11[6]=1;
uParam2->f_11[7]=1;
uParam2->f_11[8]=1;
}else{
uParam2->f_97=0;
*uParam2=joaat("dinghy");
}
*uParam3={
Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) 
};
uParam3->f_2=(uParam3->f_2 + 0.5f);
*uParam4=(340.0835f - 4.44f);
*uParam3={
Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) 
};
*uParam4=(23.6441f + 90f);
*uParam3={
-4.0164f, 19.9594f, 0f 
};
*uParam4=113.6465f;
*uParam3={
*uParam3 * Vector(1.1f, 1.1f, 1.1f) 
};
return 1;
break;
case 247:
uParam2->f_97=0;
*uParam2=joaat("sanchez");
*uParam3={
9.8707f, 13.0084f, 0f 
};
*uParam4=((-114f - 43f) + 133f);
return 1;
break;
case 288:
uParam2->f_97=0;
*uParam2=joaat("speedo");
*uParam3={
-7.7078f, 23.9099f, 1.7307f 
};
*uParam4=24.3187f;
return 1;
break;
case 309:
func_165(iParam0, uParam2, 0);
*uParam3={
-4.5662f, -3.2485f, (0.9455f - 1.7f) 
};
*uParam4=-138.6056f;
return 1;
break;
case 305:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) 
};
*uParam4=(315.9865f - 122.5269f);
return 1;
break;
case 310:
func_165(iParam0, uParam2, 0);
*uParam3={
10.5999f, 3.3997f, 1.0212f 
};
*uParam4=-50.3062f;
return 1;
break;
case 255:
uParam2->f_97=0;
*uParam2=joaat("romero");
*uParam3={
-13.2279f, -7.5348f, 0f 
};
*uParam4=4.32f;
return 1;
break;
case 265:
uParam2->f_97=0;
*uParam2=joaat("bmx");
*uParam3={
11.9596f, 0.345f, -1.0016f 
};
*uParam4=-42.4225f;
return 1;
break;
case 285:
uParam2->f_97=0;
*uParam2=joaat("gburrito");
*uParam3={
3.424f, 7.6462f, 0.8227f 
};
*uParam4=-150f;
return 1;
break;
case 256:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) 
};
*uParam4=(14.0848f - 120f);
return 1;
break;
case 257:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) 
};
*uParam4=(144.9416f - 171.253f);
return 1;
break;
case 258:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) 
};
*uParam4=(130.9896f - 10.247f);
return 1;
break;
case 314:
uParam2->f_97=0;
*uParam2=joaat("cuban800");
*uParam5={
0f, 150f, 20f 
};
*uParam6=30f;
return 1;
break;
}
switch (iParam1){
case 110:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(32.5629f, -387.5143f, -147.166f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(341.4322f - 133f);
return 1;
break;
case 111:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(24.4283f, -689.1462f, -1306.782f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(214.6826f - 33f);
return 1;
break;
case 153:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(79.3324f, 254.0631f, -708.9244f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(115.2022f - -176.25f);
return 1;
break;
case 154:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(79.3324f, 254.0631f, -708.9244f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(115.2022f - -147.192f);
return 1;
break;
case 165:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(35.0054f, -441.1681f, -1100.878f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(297.5568f - -144.622f);
return 1;
break;
case 159:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(36.3852f, -199.5354f, -825.3141f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(29.4869f - -62.5f);
return 1;
break;
case 160:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(36.2086f, -144.1027f, -730.8218f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(28.532f - 119f);
return 1;
break;
case 167:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(31.7307f, -523.2257f, -1144.174f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(299.2956f - -22.32f);
return 1;
break;
case 152:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(60.9436f, 314.6989f, -1421.8f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(335.4134f - 72f);
return 1;
break;
case 157:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(79.469f, 255.3143f, -706.187f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(117.3069f - 37.27f);
return 1;
break;
case 225:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.7165f, -1677.734f, 185.4888f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(54.2538f - -83.8f);
return 1;
break;
case 218:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.3218f, -1405.159f, -17.556f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(91.3098f - -70.4124f);
return 1;
break;
case 219:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(30.2611f, -1492.151f, -219.3172f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(139.2572f - -12f);
return 1;
break;
case 220:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(25.3018f, -1811.693f, -22.6138f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(141.0423f - -117.356f);
return 1;
break;
case 206:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(208.5337f, 773.6719f, 164.1308f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(136.3104f - -36f);
return 1;
break;
case 207:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(108.9995f, 396.924f, -263.3745f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(284.4611f - -95.588f);
return 1;
break;
case 274:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(139.5782f, 2030.446f, -1883.836f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(340.5746f - 9f);
return 1;
break;
case 312:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(10.0296f, 6560.557f, -200.684f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(134.5505f - 110.5931f);
return 1;
break;
case 271:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(6.4647f, -1083.751f, -1278.023f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(115.8919f - 26.3597f);
return 1;
break;
case 248:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(102.4417f, 164.5124f, 325.8113f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(68.4108f - 10.77f);
return 1;
break;
case 242:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(56.616f, -122.9896f, -1622.22f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(210.8653f - 13.7207f);
return 1;
break;
case 254:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(53.0019f, -213.7796f, 172.442f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(250.3032f - -40f);
return 1;
break;
case 287:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(17.3426f, -836.0328f, -887.9977f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(270.8607f - -81f);
return 1;
break;
case 286:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(4.8359f, -1182.704f, -1264.218f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(298.4328f - -150f);
return 1;
break;
case 239:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(104.8218f, 289.0073f, -80.4564f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(247.6446f - -122f);
return 1;
break;
case 243:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.2762f, -1477.282f, 434.9171f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(228.6353f - 18f);
return 1;
break;
case 244:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.2762f, -1477.282f, 434.9171f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(228.6353f - -51f);
return 1;
break;
case 249:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(103.1881f, 177.7729f, 288.977f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(68.9831f - (138f - 180f));
return 1;
break;
case 273:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(32.7794f, -432.4635f, -161.4589f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(340.0368f - -153f);
return 1;
break;
case 92:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(202.1143f, 828.3607f, -806.8813f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(101.1612f - -54.347f);
return 1;
break;
case 103:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(12.0174f, -1108.081f, -1724.72f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(319.8931f - 143.4931f);
return 1;
break;
case 109:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(10.2248f, -628.4899f, -1859.505f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(229.0784f - 99f);
return 1;
break;
case 81:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(53.1469f, 90.4242f, -1393.442f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(123.1782f - -45f);
return 1;
break;
case 95:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(101.921f, 186.1865f, 370.5876f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(159.7861f - 70f);
return 1;
break;
case 97:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(45.9871f, -188.5636f, -1391.156f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(36.5172f - -45f);
return 1;
break;
case 134:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(46.0567f, 3076.742f, 2001.918f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(328.101f - -33.128f);
return 1;
break;
case 88:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(60.9442f, 314.7191f, -1421.821f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(336.5938f - -132f);
return 1;
break;
case 306:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(37.4888f, 5643.726f, -569.3535f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
return 1;
break;
case 307:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(47.4526f, 4717.728f, -1555.593f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
return 1;
break;
case 308:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(22.7549f, 4629.148f, -1553.861f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
return 1;
break;
case 278:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(35.9161f, -1009.745f, 631.8275f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(98.8128f - -33.77f);
return 1;
break;
case 279:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(234.6825f, 900.8749f, -111.9033f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(6.1087f - 155.68f);
return 1;
break;
case 240:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(33.5351f, 3636.151f, 1546.323f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(298.4009f - -4.124f);
return 1;
break;
case 241:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(30.512f, 6439.667f, -179.4242f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(225.5593f - 108f);
return 1;
break;
case 264:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.2977f, -1390.545f, 486.7419f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(178.298f - -90f);
return 1;
break;
case 266:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(10.5662f, 143.2342f, -3052.895f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(85.3429f - 68.8227f);
return 1;
break;
case 267:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(39.9155f, 4934.08f, 2202.375f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(314.2654f - 56.2037f);
return 1;
break;
case 269:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(28.149f, -782.0952f, 401.2502f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(179.9905f - -106.6605f);
return 1;
break;
case 246:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(3.3919f, -1534.507f, -1195.256f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(305.8221f - -165f);
return 1;
break;
case 263:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(12.8792f, -1241.213f, -573.3765f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(316.9941f - -171f);
return 1;
break;
case 259:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(4.0002f, -1298.539f, -724.429f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(230.5715f - -32.488f);
return 1;
break;
case 260:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(61.203f, 250.8387f, -1309.114f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(10.7756f - -29.093f);
return 1;
break;
case 261:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(79.764f, 60.3233f, 917.6678f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=(148.021f - 229.6085f);
return 1;
break;
case 270:
func_165(iParam0, uParam2, 0);
*uParam3={
Vector(350f, 8588f, 2919f) - Global_99272[iParam1 /*3*/] 
};
*uParam4=MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
return 1;
break;
case 289:
func_165(iParam0, uParam2, 0);
*uParam3={
-48.5171f, 28.4211f, 3.0057f 
};
*uParam4=-1.3831f;
return 1;
break;
}
return 0;
}


void func_164(int iParam0, var uParam1, int iParam2){
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
if(Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131]){
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
if(Global_113810.f_9088.f_99.f_58[119]){
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
}elseif(Global_113810.f_9088.f_99.f_58[118]){
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

int func_165(int iParam0, var uParam1, int iParam2){
if(Global_100237[iParam0 /*98*/]==0){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("blimp")){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(func_178(iParam0)){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_BOAT(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(iParam2==1){
if(!VEHICLE::IS_THIS_MODEL_A_CAR(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}}elseif(iParam2==2){
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_100237[iParam0 /*98*/])){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}}
if(!func_166(Global_100237[iParam0 /*98*/], 0, -1)){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}
if(iParam2 !=0){
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
if(Global_100237[iParam0 /*98*/] !=*uParam1){
*uParam1={
Global_100237[iParam0 /*98*/] 
};
uParam1->f_91=0;
return 0;
}}else{
func_164(iParam0, uParam1, 1);
uParam1->f_91=1;
if(Global_100237[iParam0 /*98*/]==*uParam1){
func_164(iParam0, uParam1, 1);
uParam1->f_91=1;
return 1;
}
func_164(iParam0, uParam1, 2);
uParam1->f_91=2;
if(Global_100237[iParam0 /*98*/]==*uParam1){
func_164(iParam0, uParam1, 2);
uParam1->f_91=2;
return 1;
}
*uParam1={
Global_100237[iParam0 /*98*/] 
};
uParam1->f_91=0;
return 0;
}
func_164(iParam0, uParam1, iParam2);
uParam1->f_91=iParam2;
return 1;
}

int func_166(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_177()){
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
if((((!func_176() && !func_175()) && !func_174()) && !func_173()) && !func_177()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_172() || MISC::IS_PC_VERSION()) || func_171()){
}elseif(!func_174()){
return 0;
}}
if(bParam1){
if(!func_169(iParam0, iParam2)){
return 0;
}}
if(!func_167(iParam0)){
return 0;
}
return 1;
}

int func_167(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_168()){
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

int func_168(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_169(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764417 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586488[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764416){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7142 && !Global_262145.f_13570) && iVar1 < Global_262145.f_13571){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14912 && iVar1 < Global_262145.f_14924){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14908 && iVar1 < Global_262145.f_14920){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14909 && iVar1 < Global_262145.f_14921){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14910 && iVar1 < Global_262145.f_14922){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14911 && iVar1 < Global_262145.f_14923){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14913 && iVar1 < Global_262145.f_14925){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14914 && iVar1 < Global_262145.f_14917){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14915 && iVar1 < Global_262145.f_14918){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14916 && iVar1 < Global_262145.f_14919){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17458){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17453){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17457){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17456){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17450){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17451){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17454){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17455){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17452){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17460){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17496 && iVar1 < Global_262145.f_17461){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17449){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17448){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17447){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17459){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17497 && iVar1 < Global_262145.f_17462){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17498 && iVar1 < Global_262145.f_17463){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17499 && iVar1 < Global_262145.f_17464){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17500 && iVar1 < Global_262145.f_17465){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17654 && iVar1 < Global_262145.f_17676){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17655 && iVar1 < Global_262145.f_17677){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17656 && iVar1 < Global_262145.f_17678){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17657 && iVar1 < Global_262145.f_17679){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17658 && iVar1 < Global_262145.f_17680){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17659 && iVar1 < Global_262145.f_17681){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17661 && iVar1 < Global_262145.f_17682){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17662 && iVar1 < Global_262145.f_17683){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17663 && iVar1 < Global_262145.f_17684){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17664 && iVar1 < Global_262145.f_17685){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17665 && iVar1 < Global_262145.f_17686){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17666 && iVar1 < Global_262145.f_17687){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17667 && iVar1 < Global_262145.f_17688){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17673 && iVar1 < Global_262145.f_17695){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17670 && iVar1 < Global_262145.f_17691){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17671 && iVar1 < Global_262145.f_17692){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17672 && iVar1 < Global_262145.f_17693){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17660 && iVar1 < Global_262145.f_17694){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17674 && iVar1 < Global_262145.f_17696){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17668 && iVar1 < Global_262145.f_17689){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17669 && iVar1 < Global_262145.f_17690){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17675 && iVar1 < Global_262145.f_17697){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19311 && iVar1 < Global_262145.f_19408){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19312 && iVar1 < Global_262145.f_19409){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19313 && iVar1 < Global_262145.f_19410){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19314 && iVar1 < Global_262145.f_19411){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19315 && iVar1 < Global_262145.f_19412){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19316 && iVar1 < Global_262145.f_19413){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19317 && iVar1 < Global_262145.f_19414){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19318 && iVar1 < Global_262145.f_19415){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19319 && iVar1 < Global_262145.f_19416){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19320 && iVar1 < Global_262145.f_19417){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19321 && iVar1 < Global_262145.f_19418){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19322 && iVar1 < Global_262145.f_19419){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19323 && iVar1 < Global_262145.f_19420){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19324 && iVar1 < Global_262145.f_19421){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19325 && iVar1 < Global_262145.f_19422){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19326 && iVar1 < Global_262145.f_19423){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19327 && iVar1 < Global_262145.f_19424){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19328 && iVar1 < Global_262145.f_19425){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19329 && iVar1 < Global_262145.f_19426){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19330 && iVar1 < Global_262145.f_19427){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19331 && iVar1 < Global_262145.f_19428){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19332 && iVar1 < Global_262145.f_19429){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19333 && iVar1 < Global_262145.f_19430){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19334 && iVar1 < Global_262145.f_19431){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19335 && iVar1 < Global_262145.f_19432){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20392 && iVar1 < Global_262145.f_20388){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20393 && iVar1 < Global_262145.f_20389){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20394 && iVar1 < Global_262145.f_20390){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20395 && iVar1 < Global_262145.f_20391){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21274 && iVar1 < Global_262145.f_21282){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21275 && iVar1 < Global_262145.f_21283){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21276 && iVar1 < Global_262145.f_21284){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21277 && iVar1 < Global_262145.f_21285){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21278 && iVar1 < Global_262145.f_21286){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21279 && iVar1 < Global_262145.f_21287){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_22073 && iVar1 < Global_262145.f_22093){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_22085 && iVar1 < Global_262145.f_22105){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_22076 && iVar1 < Global_262145.f_22096){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_22086 && iVar1 < Global_262145.f_22106){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_22074 && iVar1 < Global_262145.f_22094){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_22090 && iVar1 < Global_262145.f_22110){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_22088 && iVar1 < Global_262145.f_22108){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_22089 && iVar1 < Global_262145.f_22109){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_22084 && iVar1 < Global_262145.f_22104){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_22091 && iVar1 < Global_262145.f_22111){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_22087 && iVar1 < Global_262145.f_22107){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_22083 && iVar1 < Global_262145.f_22103){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_22075 && iVar1 < Global_262145.f_22095){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_22077 && iVar1 < Global_262145.f_22097){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_22078 && iVar1 < Global_262145.f_22098){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_22079 && iVar1 < Global_262145.f_22099){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_22080 && iVar1 < Global_262145.f_22100){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_22081 && iVar1 < Global_262145.f_22101){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_22082 && iVar1 < Global_262145.f_22102){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_23041 && iVar1 < Global_262145.f_23069){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_23042 && iVar1 < Global_262145.f_23070){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_23043 && iVar1 < Global_262145.f_23071){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_23044 && iVar1 < Global_262145.f_23072){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_23045 && iVar1 < Global_262145.f_23073){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_23046 && iVar1 < Global_262145.f_23074){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_23047 && iVar1 < Global_262145.f_23075){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_23048 && iVar1 < Global_262145.f_23076){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_23049 && iVar1 < Global_262145.f_23077){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_23050 && iVar1 < Global_262145.f_23078){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_23051 && iVar1 < Global_262145.f_23079){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_23052 && iVar1 < Global_262145.f_23080){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_23053 && iVar1 < Global_262145.f_23081){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_23054 && iVar1 < Global_262145.f_23082){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_23055 && iVar1 < Global_262145.f_23083){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_23056 && iVar1 < Global_262145.f_23084){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_23057 && iVar1 < Global_262145.f_23085){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_23058 && iVar1 < Global_262145.f_23086){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_23059 && iVar1 < Global_262145.f_23087){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_23060 && iVar1 < Global_262145.f_23088){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_23061 && iVar1 < Global_262145.f_23089){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_23062 && iVar1 < Global_262145.f_23090){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_23063 && iVar1 < Global_262145.f_23091){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_23064 && iVar1 < Global_262145.f_23092){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_23065 && iVar1 < Global_262145.f_23093){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_23066 && iVar1 < Global_262145.f_23094){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_23067 && iVar1 < Global_262145.f_23095){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_23068 && iVar1 < Global_262145.f_23096){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24263 && iVar1 < Global_262145.f_24279){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24264 && iVar1 < Global_262145.f_24280){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24268 && iVar1 < Global_262145.f_24284){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24271 && iVar1 < Global_262145.f_24287){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24276 && iVar1 < Global_262145.f_24292){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24270 && iVar1 < Global_262145.f_24286){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24262 && iVar1 < Global_262145.f_24278){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24269 && iVar1 < Global_262145.f_24285){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24275 && iVar1 < Global_262145.f_24291){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24274 && iVar1 < Global_262145.f_24290){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24265 && iVar1 < Global_262145.f_24281){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24267 && iVar1 < Global_262145.f_24283){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24277 && iVar1 < Global_262145.f_24293){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24273 && iVar1 < Global_262145.f_24289){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24266 && iVar1 < Global_262145.f_24282){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24272 && iVar1 < Global_262145.f_24288){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24353 && iVar1 < Global_262145.f_24340){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24354 && iVar1 < Global_262145.f_24341){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24359 && iVar1 < Global_262145.f_24346){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24358 && iVar1 < Global_262145.f_24345){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24356 && iVar1 < Global_262145.f_24343){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24362 && iVar1 < Global_262145.f_24349){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24364 && iVar1 < Global_262145.f_24351){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24365 && iVar1 < Global_262145.f_24352){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24363 && iVar1 < Global_262145.f_24350){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24355 && iVar1 < Global_262145.f_24342){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24357 && iVar1 < Global_262145.f_24344){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24361 && iVar1 < Global_262145.f_24348){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24360 && iVar1 < Global_262145.f_24347){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26956 && iVar1 < Global_262145.f_26958){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25969 && iVar1 < Global_262145.f_25962){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25970 && iVar1 < Global_262145.f_25963){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25971 && iVar1 < Global_262145.f_25964){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25972 && iVar1 < Global_262145.f_25965){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26957 && iVar1 < Global_262145.f_26959){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25973 && iVar1 < Global_262145.f_25966){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25974 && iVar1 < Global_262145.f_25967){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25975 && iVar1 < Global_262145.f_25968){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25980 && iVar1 < Global_262145.f_26001){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25981 && iVar1 < Global_262145.f_26002){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25982 && iVar1 < Global_262145.f_26003){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25983 && iVar1 < Global_262145.f_26004){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25984 && iVar1 < Global_262145.f_26005){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25985 && iVar1 < Global_262145.f_26006){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25986 && iVar1 < Global_262145.f_26007){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25987 && iVar1 < Global_262145.f_26008){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25988 && iVar1 < Global_262145.f_26009){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25989 && iVar1 < Global_262145.f_26010){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25990 && iVar1 < Global_262145.f_26011){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25991 && iVar1 < Global_262145.f_26012){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25992 && iVar1 < Global_262145.f_26013){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25993 && iVar1 < Global_262145.f_26014){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25994 && iVar1 < Global_262145.f_26015){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25995 && iVar1 < Global_262145.f_26016){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25996 && iVar1 < Global_262145.f_26017){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25997 && iVar1 < Global_262145.f_26018){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25998 && iVar1 < Global_262145.f_26019){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25999 && iVar1 < Global_262145.f_26020){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_26000 && iVar1 < Global_262145.f_26021){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28820 && iVar1 < Global_262145.f_28841){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28821 && iVar1 < Global_262145.f_28842){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28822 && iVar1 < Global_262145.f_28843){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28823 && iVar1 < Global_262145.f_28844){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28824 && iVar1 < Global_262145.f_28845){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28825 && iVar1 < Global_262145.f_28846){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28826 && iVar1 < Global_262145.f_28847){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28827 && iVar1 < Global_262145.f_28848){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28828 && iVar1 < Global_262145.f_28849){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28829 && iVar1 < Global_262145.f_28850){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28830 && iVar1 < Global_262145.f_28851){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28831 && iVar1 < Global_262145.f_28852){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28832 && iVar1 < Global_262145.f_28853){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28833 && iVar1 < Global_262145.f_28854){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28834 && iVar1 < Global_262145.f_28855){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28835 && iVar1 < Global_262145.f_28856){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28836 && iVar1 < Global_262145.f_28857){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28837 && iVar1 < Global_262145.f_28858){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28838 && iVar1 < Global_262145.f_28859){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28839 && iVar1 < Global_262145.f_28860){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28840 && iVar1 < Global_262145.f_28861){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28863 && iVar1 < Global_262145.f_28864) && !Global_262145.f_28818){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28866 && iVar1 < Global_262145.f_28867) && !Global_262145.f_28819){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28871 && iVar1 < Global_262145.f_28874){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28872 && iVar1 < Global_262145.f_28875){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28873 && iVar1 < Global_262145.f_28876){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29889 && iVar1 < Global_262145.f_29554){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29540 && iVar1 < Global_262145.f_29561){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29541 && iVar1 < Global_262145.f_29547){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29887 && iVar1 < Global_262145.f_29555){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29888 && iVar1 < Global_262145.f_29556){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29534 && iVar1 < Global_262145.f_29553){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29535 && iVar1 < Global_262145.f_29562){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29536 && iVar1 < Global_262145.f_29552){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29537 && iVar1 < Global_262145.f_29550){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29883 && iVar1 < Global_262145.f_29557){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29884 && iVar1 < Global_262145.f_29558){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29885 && iVar1 < Global_262145.f_29559){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29886 && iVar1 < Global_262145.f_29560){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29538 && iVar1 < Global_262145.f_29549){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29539 && iVar1 < Global_262145.f_29551){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30348 && iVar1 < Global_262145.f_30331){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30349 && iVar1 < Global_262145.f_30332){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30350 && iVar1 < Global_262145.f_30333){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30351 && iVar1 < Global_262145.f_30334){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30352 && iVar1 < Global_262145.f_30335){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30353 && iVar1 < Global_262145.f_30336){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30354 && iVar1 < Global_262145.f_30337){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30355 && iVar1 < Global_262145.f_30338){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30356 && iVar1 < Global_262145.f_30339){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30365){
}elseif(!Global_262145.f_30357 && iVar1 < Global_262145.f_30340){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30358 && iVar1 < Global_262145.f_30341){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30359 && iVar1 < Global_262145.f_30342){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30360 && iVar1 < Global_262145.f_30343){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30361 && iVar1 < Global_262145.f_30344){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30366){
}elseif(!Global_262145.f_30362 && iVar1 < Global_262145.f_30345){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30363 && iVar1 < Global_262145.f_30346){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30364 && iVar1 < Global_262145.f_30347){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31216 && iVar1 < Global_262145.f_31199){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31217 && iVar1 < Global_262145.f_31200){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31218 && iVar1 < Global_262145.f_31201){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31219 && iVar1 < Global_262145.f_31202){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31220 && iVar1 < Global_262145.f_31203){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31221 && iVar1 < Global_262145.f_31204){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31222 && iVar1 < Global_262145.f_31205){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31223 && iVar1 < Global_262145.f_31206){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31224 && iVar1 < Global_262145.f_31207){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31225 && iVar1 < Global_262145.f_31208){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31226 && iVar1 < Global_262145.f_31209){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31227 && iVar1 < Global_262145.f_31210){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31228 && iVar1 < Global_262145.f_31211){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31229 && iVar1 < Global_262145.f_31212){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31230 && iVar1 < Global_262145.f_31213){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31231 && iVar1 < Global_262145.f_31214){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31232 && iVar1 < Global_262145.f_31215){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_32099 && iVar1 < Global_262145.f_32084){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_32100 && iVar1 < Global_262145.f_32085){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_32101 && iVar1 < Global_262145.f_32086){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_32102 && iVar1 < Global_262145.f_32087){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_32103 && iVar1 < Global_262145.f_32088){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_32104 && iVar1 < Global_262145.f_32089){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_32105 && iVar1 < Global_262145.f_32090){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_32106 && iVar1 < Global_262145.f_32091){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_32107 && iVar1 < Global_262145.f_32092){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_32108 && iVar1 < Global_262145.f_32093){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_32109 && iVar1 < Global_262145.f_32094){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_32110 && iVar1 < Global_262145.f_32095){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_32111 && iVar1 < Global_262145.f_32096){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_32112 && iVar1 < Global_262145.f_32097){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_32177){
}elseif(!Global_262145.f_32113 && iVar1 < Global_262145.f_32098){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33350 && iVar1 < Global_262145.f_33331){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33344 && iVar1 < Global_262145.f_33325){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33348 && iVar1 < Global_262145.f_33329){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33342 && iVar1 < Global_262145.f_33323){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33353 && iVar1 < Global_262145.f_33334){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33345 && iVar1 < Global_262145.f_33326){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33354 && iVar1 < Global_262145.f_33335){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33356 && iVar1 < Global_262145.f_33337){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33347 && iVar1 < Global_262145.f_33328){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33355 && iVar1 < Global_262145.f_33336){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33358 && iVar1 < Global_262145.f_33339){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33343 && iVar1 < Global_262145.f_33324){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33351 && iVar1 < Global_262145.f_33332){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33357 && iVar1 < Global_262145.f_33338){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33349 && iVar1 < Global_262145.f_33330){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33359 && iVar1 < Global_262145.f_33340){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33346 && iVar1 < Global_262145.f_33327){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33341 && iVar1 < Global_262145.f_33322){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_34226 && iVar1 < Global_262145.f_34209){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_34220 && iVar1 < Global_262145.f_34204){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_34214 && iVar1 < Global_262145.f_34198){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_34215 && iVar1 < Global_262145.f_34199){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_34212 && iVar1 < Global_262145.f_34196){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_34223 && iVar1 < Global_262145.f_34207){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_34227 && iVar1 < Global_262145.f_34211){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_34224 && iVar1 < Global_262145.f_34208){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_34213 && iVar1 < Global_262145.f_34197){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_34216 && iVar1 < Global_262145.f_34200){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_34225 && iVar1 < Global_262145.f_34210){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_34221 && iVar1 < Global_262145.f_34205){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_34222 && iVar1 < Global_262145.f_34206){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_34219 && iVar1 < Global_262145.f_34203){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_34218 && iVar1 < Global_262145.f_34202){
iVar0=0;
}}
if(iParam0==joaat("exemplar")){
if(!Global_262145.f_35167 && !Global_262145.f_35168){
iVar0=0;
}}elseif(iParam0==joaat("cogcabrio")){
if(!Global_262145.f_35169 && !Global_262145.f_35170){
iVar0=0;
}}elseif(iParam0==joaat("thrust")){
if(!Global_262145.f_35171 && !Global_262145.f_35172){
iVar0=0;
}}elseif(iParam0==joaat("vindicator")){
if(!Global_262145.f_35173 && !Global_262145.f_35174){
iVar0=0;
}}elseif(iParam0==joaat("coquette3")){
if(!Global_262145.f_35175 && !Global_262145.f_35176){
iVar0=0;
}}elseif(iParam0==joaat("brawler")){
if(!Global_262145.f_35177 && !Global_262145.f_35178){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti")){
if(!Global_262145.f_35179 && !Global_262145.f_35180){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti2")){
if(!Global_262145.f_35181 && !Global_262145.f_35182){
iVar0=0;
}}elseif(iParam0==joaat("cog55")){
if(!Global_262145.f_35183 && !Global_262145.f_35184){
iVar0=0;
}}elseif(iParam0==joaat("cog552")){
if(!Global_262145.f_35185 && !Global_262145.f_35186){
iVar0=0;
}}elseif(iParam0==joaat("superd")){
if(!Global_262145.f_35187 && !Global_262145.f_35188){
iVar0=0;
}}elseif(iParam0==joaat("schafter4")){
if(!Global_262145.f_35189 && !Global_262145.f_35190){
iVar0=0;
}}elseif(iParam0==joaat("schafter6")){
if(!Global_262145.f_35191 && !Global_262145.f_35192){
iVar0=0;
}}elseif(iParam0==joaat("alpha")){
if(!Global_262145.f_35193 && !Global_262145.f_35194){
iVar0=0;
}}elseif(iParam0==joaat("feltzer2")){
if(!Global_262145.f_35195 && !Global_262145.f_35196){
iVar0=0;
}}elseif(iParam0==joaat("massacro")){
if(!Global_262145.f_35197 && !Global_262145.f_35198){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt")){
if(!Global_262145.f_35199 && !Global_262145.f_35200){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt2")){
if(!Global_262145.f_35201 && !Global_262145.f_35202){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_35203 && !Global_262145.f_35204){
iVar0=0;
}}elseif(iParam0==joaat("jester")){
if(!Global_262145.f_35205 && !Global_262145.f_35206){
iVar0=0;
}}elseif(iParam0==joaat("bestiagts")){
if(!Global_262145.f_35207 && !Global_262145.f_35208){
iVar0=0;
}}elseif(iParam0==joaat("carbonizzare")){
if(!Global_262145.f_35209 && !Global_262145.f_35210){
iVar0=0;
}}elseif(iParam0==joaat("coquette")){
if(!Global_262145.f_35211 && !Global_262145.f_35212){
iVar0=0;
}}elseif(iParam0==joaat("furoregt")){
if(!Global_262145.f_35213 && !Global_262145.f_35214){
iVar0=0;
}}elseif(iParam0==joaat("ninef")){
if(!Global_262145.f_35215 && !Global_262145.f_35216){
iVar0=0;
}}elseif(iParam0==joaat("ninef2")){
if(!Global_262145.f_35217 && !Global_262145.f_35218){
iVar0=0;
}}elseif(iParam0==joaat("verlierer2")){
if(!Global_262145.f_35219 && !Global_262145.f_35220){
iVar0=0;
}}elseif(iParam0==joaat("btype")){
if(!Global_262145.f_35221 && !Global_262145.f_35222){
iVar0=0;
}}elseif(iParam0==joaat("feltzer3")){
if(!Global_262145.f_35223 && !Global_262145.f_35224){
iVar0=0;
}}elseif(iParam0==joaat("stingergt")){
if(!Global_262145.f_35225 && !Global_262145.f_35226){
iVar0=0;
}}elseif(iParam0==joaat("stinger")){
if(!Global_262145.f_35227 && !Global_262145.f_35228){
iVar0=0;
}}elseif(iParam0==joaat("coquette2")){
if(!Global_262145.f_35229 && !Global_262145.f_35230){
iVar0=0;
}}elseif(iParam0==joaat("jb700")){
if(!Global_262145.f_35231 && !Global_262145.f_35232){
iVar0=0;
}}elseif(iParam0==joaat("mamba")){
if(!Global_262145.f_35233 && !Global_262145.f_35234){
iVar0=0;
}}elseif(iParam0==joaat("monroe")){
if(!Global_262145.f_35235 && !Global_262145.f_35236){
iVar0=0;
}}elseif(iParam0==joaat("btype3")){
if(!Global_262145.f_35237 && !Global_262145.f_35238){
iVar0=0;
}}elseif(iParam0==joaat("ztype")){
if(!Global_262145.f_35239 && !Global_262145.f_35240){
iVar0=0;
}}elseif(iParam0==joaat("voltic")){
if(!Global_262145.f_35241 && !Global_262145.f_35242){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_35243 && !Global_262145.f_35244){
iVar0=0;
}}elseif(iParam0==joaat("cheetah")){
if(!Global_262145.f_35245 && !Global_262145.f_35246){
iVar0=0;
}}elseif(iParam0==joaat("entityxf")){
if(!Global_262145.f_35247 && !Global_262145.f_35248){
iVar0=0;
}}elseif(iParam0==joaat("infernus")){
if(!Global_262145.f_35249 && !Global_262145.f_35250){
iVar0=0;
}}elseif(iParam0==joaat("vacca")){
if(!Global_262145.f_35251 && !Global_262145.f_35252){
iVar0=0;
}}elseif(iParam0==joaat("bullet")){
if(!Global_262145.f_35253 && !Global_262145.f_35254){
iVar0=0;
}}elseif(iParam0==joaat("fmj")){
if(!Global_262145.f_35255 && !Global_262145.f_35256){
iVar0=0;
}}elseif(iParam0==joaat("baller2")){
if(!Global_262145.f_35257 && !Global_262145.f_35258){
iVar0=0;
}}elseif(iParam0==joaat("baller3")){
if(!Global_262145.f_35259 && !Global_262145.f_35260){
iVar0=0;
}}elseif(iParam0==joaat("baller5")){
if(!Global_262145.f_35261 && !Global_262145.f_35262){
iVar0=0;
}}elseif(iParam0==joaat("baller4")){
if(!Global_262145.f_35263 && !Global_262145.f_35264){
iVar0=0;
}}elseif(iParam0==joaat("baller6")){
if(!Global_262145.f_35265 && !Global_262145.f_35266){
iVar0=0;
}}elseif(iParam0==joaat("xls")){
if(!Global_262145.f_35267 && !Global_262145.f_35268){
iVar0=0;
}}elseif(iParam0==joaat("xls2")){
if(!Global_262145.f_35269 && !Global_262145.f_35270){
iVar0=0;
}}elseif(iParam0==joaat("prairie")){
if(!Global_262145.f_35271 && !Global_262145.f_35272){
iVar0=0;
}}elseif(iParam0==joaat("issi2")){
if(!Global_262145.f_35273 && !Global_262145.f_35274){
iVar0=0;
}}elseif(iParam0==joaat("dilettante")){
if(!Global_262145.f_35275 && !Global_262145.f_35276){
iVar0=0;
}}elseif(iParam0==joaat("felon")){
if(!Global_262145.f_35277 && !Global_262145.f_35278){
iVar0=0;
}}elseif(iParam0==joaat("felon2")){
if(!Global_262145.f_35279 && !Global_262145.f_35280){
iVar0=0;
}}elseif(iParam0==joaat("f620")){
if(!Global_262145.f_35281 && !Global_262145.f_35282){
iVar0=0;
}}elseif(iParam0==joaat("jackal")){
if(!Global_262145.f_35283 && !Global_262145.f_35284){
iVar0=0;
}}elseif(iParam0==joaat("oracle2")){
if(!Global_262145.f_35285 && !Global_262145.f_35286){
iVar0=0;
}}elseif(iParam0==joaat("oracle")){
if(!Global_262145.f_35287 && !Global_262145.f_35288){
iVar0=0;
}}elseif(iParam0==joaat("sentinel2")){
if(!Global_262145.f_35289 && !Global_262145.f_35290){
iVar0=0;
}}elseif(iParam0==joaat("zion")){
if(!Global_262145.f_35291 && !Global_262145.f_35292){
iVar0=0;
}}elseif(iParam0==joaat("zion2")){
if(!Global_262145.f_35293 && !Global_262145.f_35294){
iVar0=0;
}}elseif(iParam0==joaat("akuma")){
if(!Global_262145.f_35295 && !Global_262145.f_35296){
iVar0=0;
}}elseif(iParam0==joaat("double")){
if(!Global_262145.f_35297 && !Global_262145.f_35298){
iVar0=0;
}}elseif(iParam0==joaat("enduro")){
if(!Global_262145.f_35299 && !Global_262145.f_35300){
iVar0=0;
}}elseif(iParam0==joaat("hexer")){
if(!Global_262145.f_35301 && !Global_262145.f_35302){
iVar0=0;
}}elseif(iParam0==joaat("innovation")){
if(!Global_262145.f_35303 && !Global_262145.f_35304){
iVar0=0;
}}elseif(iParam0==joaat("sanchez")){
if(!Global_262145.f_35305 && !Global_262145.f_35306){
iVar0=0;
}}elseif(iParam0==joaat("sanchez2")){
if(!Global_262145.f_35307 && !Global_262145.f_35308){
iVar0=0;
}}elseif(iParam0==joaat("bati2")){
if(!Global_262145.f_35309 && !Global_262145.f_35310){
iVar0=0;
}}elseif(iParam0==joaat("faggio2")){
if(!Global_262145.f_35311 && !Global_262145.f_35312){
iVar0=0;
}}elseif(iParam0==joaat("ruffian")){
if(!Global_262145.f_35313 && !Global_262145.f_35314){
iVar0=0;
}}elseif(iParam0==joaat("nemesis")){
if(!Global_262145.f_35315 && !Global_262145.f_35316){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou")){
if(!Global_262145.f_35317 && !Global_262145.f_35318){
iVar0=0;
}}elseif(iParam0==joaat("pcj")){
if(!Global_262145.f_35319 && !Global_262145.f_35320){
iVar0=0;
}}elseif(iParam0==joaat("vader")){
if(!Global_262145.f_35321 && !Global_262145.f_35322){
iVar0=0;
}}elseif(iParam0==joaat("sovereign")){
if(!Global_262145.f_35323 && !Global_262145.f_35324){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet")){
if(!Global_262145.f_35325 && !Global_262145.f_35326){
iVar0=0;
}}elseif(iParam0==joaat("ratloader")){
if(!Global_262145.f_35327 && !Global_262145.f_35328){
iVar0=0;
}}elseif(iParam0==joaat("picador")){
if(!Global_262145.f_35329 && !Global_262145.f_35330){
iVar0=0;
}}elseif(iParam0==joaat("vigero")){
if(!Global_262145.f_35331 && !Global_262145.f_35332){
iVar0=0;
}}elseif(iParam0==joaat("ruiner")){
if(!Global_262145.f_35333 && !Global_262145.f_35334){
iVar0=0;
}}elseif(iParam0==joaat("tampa")){
if(!Global_262145.f_35335 && !Global_262145.f_35336){
iVar0=0;
}}elseif(iParam0==joaat("blade")){
if(!Global_262145.f_35337 && !Global_262145.f_35338){
iVar0=0;
}}elseif(iParam0==joaat("bifta")){
if(!Global_262145.f_35339 && !Global_262145.f_35340){
iVar0=0;
}}elseif(iParam0==joaat("dune")){
if(!Global_262145.f_35341 && !Global_262145.f_35342){
iVar0=0;
}}elseif(iParam0==joaat("bfinjection")){
if(!Global_262145.f_35343 && !Global_262145.f_35344){
iVar0=0;
}}elseif(iParam0==joaat("bodhi2")){
if(!Global_262145.f_35345 && !Global_262145.f_35346){
iVar0=0;
}}elseif(iParam0==joaat("kalahari")){
if(!Global_262145.f_35347 && !Global_262145.f_35348){
iVar0=0;
}}elseif(iParam0==joaat("rancherxl")){
if(!Global_262145.f_35349 && !Global_262145.f_35350){
iVar0=0;
}}elseif(iParam0==joaat("rebel2")){
if(!Global_262145.f_35351 && !Global_262145.f_35352){
iVar0=0;
}}elseif(iParam0==joaat("rebel")){
if(!Global_262145.f_35353 && !Global_262145.f_35354){
iVar0=0;
}}elseif(iParam0==joaat("blazer")){
if(!Global_262145.f_35355 && !Global_262145.f_35356){
iVar0=0;
}}elseif(iParam0==joaat("blazer3")){
if(!Global_262145.f_35357 && !Global_262145.f_35358){
iVar0=0;
}}elseif(iParam0==joaat("sandking2")){
if(!Global_262145.f_35359 && !Global_262145.f_35360){
iVar0=0;
}}elseif(iParam0==joaat("washington")){
if(!Global_262145.f_35361 && !Global_262145.f_35362){
iVar0=0;
}}elseif(iParam0==joaat("schafter2")){
if(!Global_262145.f_35363 && !Global_262145.f_35364){
iVar0=0;
}}elseif(iParam0==joaat("romero")){
if(!Global_262145.f_35365 && !Global_262145.f_35366){
iVar0=0;
}}elseif(iParam0==joaat("fugitive")){
if(!Global_262145.f_35367 && !Global_262145.f_35368){
iVar0=0;
}}elseif(iParam0==joaat("surge")){
if(!Global_262145.f_35369 && !Global_262145.f_35370){
iVar0=0;
}}elseif(iParam0==joaat("asea")){
if(!Global_262145.f_35371 && !Global_262145.f_35372){
iVar0=0;
}}elseif(iParam0==joaat("premier")){
if(!Global_262145.f_35373 && !Global_262145.f_35374){
iVar0=0;
}}elseif(iParam0==joaat("regina")){
if(!Global_262145.f_35375 && !Global_262145.f_35376){
iVar0=0;
}}elseif(iParam0==joaat("asterope")){
if(!Global_262145.f_35377 && !Global_262145.f_35378){
iVar0=0;
}}elseif(iParam0==joaat("intruder")){
if(!Global_262145.f_35379 && !Global_262145.f_35380){
iVar0=0;
}}elseif(iParam0==joaat("tailgater")){
if(!Global_262145.f_35381 && !Global_262145.f_35382){
iVar0=0;
}}elseif(iParam0==joaat("stanier")){
if(!Global_262145.f_35383 && !Global_262145.f_35384){
iVar0=0;
}}elseif(iParam0==joaat("ingot")){
if(!Global_262145.f_35385 && !Global_262145.f_35386){
iVar0=0;
}}elseif(iParam0==joaat("warrener")){
if(!Global_262145.f_35387 && !Global_262145.f_35388){
iVar0=0;
}}elseif(iParam0==joaat("stratum")){
if(!Global_262145.f_35389 && !Global_262145.f_35390){
iVar0=0;
}}elseif(iParam0==joaat("schwarzer")){
if(!Global_262145.f_35391 && !Global_262145.f_35392){
iVar0=0;
}}elseif(iParam0==joaat("surano")){
if(!Global_262145.f_35393 && !Global_262145.f_35394){
iVar0=0;
}}elseif(iParam0==joaat("buffalo")){
if(!Global_262145.f_35395 && !Global_262145.f_35396){
iVar0=0;
}}elseif(iParam0==joaat("buffalo2")){
if(!Global_262145.f_35397 && !Global_262145.f_35398){
iVar0=0;
}}elseif(iParam0==joaat("massacro2")){
if(!Global_262145.f_35399 && !Global_262145.f_35400){
iVar0=0;
}}elseif(iParam0==joaat("jester2")){
if(!Global_262145.f_35401 && !Global_262145.f_35402){
iVar0=0;
}}elseif(iParam0==joaat("futo")){
if(!Global_262145.f_35403 && !Global_262145.f_35404){
iVar0=0;
}}elseif(iParam0==joaat("penumbra")){
if(!Global_262145.f_35405 && !Global_262145.f_35406){
iVar0=0;
}}elseif(iParam0==joaat("fusilade")){
if(!Global_262145.f_35407 && !Global_262145.f_35408){
iVar0=0;
}}elseif(iParam0==joaat("btype2")){
if(!Global_262145.f_35409 && !Global_262145.f_35410){
iVar0=0;
}}elseif(iParam0==joaat("pigalle")){
if(!Global_262145.f_35411 && !Global_262145.f_35412){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade")){
if(!Global_262145.f_35413 && !Global_262145.f_35414){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade2")){
if(!Global_262145.f_35415 && !Global_262145.f_35416){
iVar0=0;
}}elseif(iParam0==joaat("bjxl")){
if(!Global_262145.f_35417 && !Global_262145.f_35418){
iVar0=0;
}}elseif(iParam0==joaat("serrano")){
if(!Global_262145.f_35419 && !Global_262145.f_35420){
iVar0=0;
}}elseif(iParam0==joaat("gresley")){
if(!Global_262145.f_35421 && !Global_262145.f_35422){
iVar0=0;
}}elseif(iParam0==joaat("seminole")){
if(!Global_262145.f_35423 && !Global_262145.f_35424){
iVar0=0;
}}elseif(iParam0==joaat("granger")){
if(!Global_262145.f_35425 && !Global_262145.f_35426){
iVar0=0;
}}elseif(iParam0==joaat("landstalker")){
if(!Global_262145.f_35427 && !Global_262145.f_35428){
iVar0=0;
}}elseif(iParam0==joaat("habanero")){
if(!Global_262145.f_35429 && !Global_262145.f_35430){
iVar0=0;
}}elseif(iParam0==joaat("fq2")){
if(!Global_262145.f_35431 && !Global_262145.f_35432){
iVar0=0;
}}elseif(iParam0==joaat("baller")){
if(!Global_262145.f_35433 && !Global_262145.f_35434){
iVar0=0;
}}elseif(iParam0==joaat("patriot")){
if(!Global_262145.f_35435 && !Global_262145.f_35436){
iVar0=0;
}}elseif(iParam0==joaat("rocoto")){
if(!Global_262145.f_35437 && !Global_262145.f_35438){
iVar0=0;
}}elseif(iParam0==joaat("radi")){
if(!Global_262145.f_35439 && !Global_262145.f_35440){
iVar0=0;
}}elseif(iParam0==joaat("mesa3")){
if(!Global_262145.f_35441 && !Global_262145.f_35442){
iVar0=0;
}}elseif(iParam0==joaat("monster")){
if(!Global_262145.f_35443 && !Global_262145.f_35444){
iVar0=0;
}}elseif(iParam0==1336514315){
if(!Global_262145.f_35473 && iVar1 < Global_262145.f_35460){
iVar0=0;
}}elseif(iParam0==-1659004814){
if(!Global_262145.f_35472 && iVar1 < Global_262145.f_35459){
iVar0=0;
}}elseif(iParam0==-654498607){
if(!Global_262145.f_35474 && iVar1 < Global_262145.f_35461){
iVar0=0;
}}elseif(iParam0==-979292575){
if(!Global_262145.f_35465 && iVar1 < Global_262145.f_35452){
iVar0=0;
}}elseif(iParam0==-1763675285){
if(!Global_262145.f_35462 && iVar1 < Global_262145.f_35449){
iVar0=0;
}}elseif(iParam0==func_170(1)){
iVar0=1;
}elseif(iParam0==-536105557){
if(!Global_262145.f_35463 && iVar1 < Global_262145.f_35450){
iVar0=0;
}}elseif(iParam0==1447690049){
if(!Global_262145.f_35466 && iVar1 < Global_262145.f_35453){
iVar0=0;
}}elseif(iParam0==165968051){
if(!Global_262145.f_35469 && iVar1 < Global_262145.f_35456){
iVar0=0;
}}elseif(iParam0==191916658){
if(!Global_262145.f_35467 && iVar1 < Global_262145.f_35454){
iVar0=0;
}}elseif(iParam0==802856453){
if(!Global_262145.f_35464 && iVar1 < Global_262145.f_35451){
iVar0=0;
}}elseif(iParam0==610429990){
if(!Global_262145.f_35471 && iVar1 < Global_262145.f_35458){
iVar0=0;
}}elseif(iParam0==239897677){
if(!Global_262145.f_35468 && iVar1 < Global_262145.f_35455){
iVar0=0;
}}elseif(iParam0==-897824023){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}elseif(iParam0==-1983622024){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}
return iVar0;
}

int func_170(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__171(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__172(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_173(){
return 0;
}

int func_174(){
return 1;
}

int func_175(){
return 1;
}

int func_176(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_177(){
var uVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
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
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_178(int iParam0){
if(Global_100237[iParam0 /*98*/]==joaat("blimp") || Global_100237[iParam0 /*98*/]==joaat("blimp2")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("submersible") || Global_100237[iParam0 /*98*/]==joaat("submersible2")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("freight")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("packer")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("asea2")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("burrito2") || Global_100237[iParam0 /*98*/]==joaat("fbi2")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("entityxf") && !Global_113810.f_9088.f_330[8 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("cheetah") && !Global_113810.f_9088.f_330[8 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("policeb") && !Global_113810.f_9088.f_330[8 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("ztype") && !Global_113810.f_9088.f_330[9 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("polmav") && !Global_113810.f_9088.f_330[9 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("jb700") && !Global_113810.f_9088.f_330[10 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("monroe") && !Global_113810.f_9088.f_330[11 /*6*/]){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("firetruk")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("handler")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("monroe")){
return 1;
}
if(Global_100237[iParam0 /*98*/]==joaat("phantom")){
return 1;
}
if(((Global_100237[iParam0 /*98*/]==joaat("gauntlet") && !Global_113810.f_9088.f_330[80 /*6*/]) && !Global_113810.f_9088.f_330[81 /*6*/]) && !Global_113810.f_9088.f_330[82 /*6*/]){
return 1;
}
return 0;
}


bool func_179(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_180(int iParam0, var uParam1, float fParam2){
switch (iParam0){
case 11:
*uParam1={
115.1569f, -1286.684f, 28.2613f 
};
*fParam2=111f;
return 1;
break;
case 8:
*uParam1={
-90.0089f, -1324.195f, 28.3203f 
};
*fParam2=194.1887f;
return 1;
break;
case 9:
return func_180(8, uParam1, fParam2);
break;
case 10:
return func_180(8, uParam1, fParam2);
break;
case 13:
*uParam1={
-807.2979f, -48.4004f, 36.8173f 
};
*fParam2=201.6328f;
return 1;
break;
case 14:
*uParam1={
1432.34f, -1887.383f, 70.5768f 
};
*fParam2=350.0509f;
return 1;
break;
case 15:
*uParam1={
1666.204f, 1967.25f, 143.3213f 
};
*fParam2=0.7896f;
return 1;
break;
case 12:
*uParam1={
-1440.22f, -127.02f, 50f 
};
*fParam2=42f;
return 1;
break;
case 16:
*uParam1={
135.055f, -1759.64f, 27.8957f 
};
*fParam2=-129f;
return 1;
break;
case 17:
*uParam1={
687.6992f, -1744.03f, 28.3624f 
};
*fParam2=267.1409f;
return 1;
break;
case 18:
*uParam1={
56.5117f, -744.6122f, 43.1356f 
};
*fParam2=340.0526f;
return 1;
break;
case 19:
*uParam1={
506.485f, -1884.967f, 24.764f 
};
*fParam2=22.9566f;
return 1;
break;
case 20:
*uParam1={
1555.958f, 953.6136f, 77.2063f 
};
*fParam2=152.8118f;
return 1;
break;
case 21:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 22:
*uParam1={
220.72f, -64.4177f, 68.2922f 
};
*fParam2=(250.4535f - 360f);
return 1;
break;
case 74:
*uParam1={
2048.07f, 3840.84f, 34.2238f 
};
*fParam2=119.603f;
return 1;
break;
case 23:
*uParam1={
-464.22f, -1592.98f, 38.73f 
};
*fParam2=168f;
return 1;
break;
case 24:
*uParam1={
(744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f 
};
*fParam2=51.7279f;
return 1;
break;
case 67:
*uParam1={
-9f, 508.1f, 173.6278f 
};
*fParam2=151.2504f;
return 1;
break;
case 25:
*uParam1={
72.2278f, -1464.68f, 28.2915f 
};
*fParam2=156.8827f;
return 1;
break;
case 27:
*uParam1={
763f, -906f, 24.2312f 
};
*fParam2=7.2736f;
return 1;
break;
case 26:
*uParam1={
257.9167f, -1120.786f, 28.3684f 
};
*fParam2=97.2736f;
return 1;
break;
case 28:
*uParam1={
422.5858f, -978.6332f, 69.7073f 
};
*fParam2=4f;
return 1;
break;
case 29:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 30:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 31:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 32:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 33:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 34:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 35:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 36:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 37:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 58:
*uParam1={
294.8521f, 882.9366f, 197.8527f 
};
*fParam2=162.693f;
return 1;
break;
case 59:
*uParam1={
-1771.802f, 794.4316f, 138.4211f 
};
*fParam2=128.9946f;
return 1;
break;
case 60:
*uParam1={
1495.595f, -1848.821f, 70.2075f 
};
*fParam2=32.2721f;
return 1;
break;
case 38:
*uParam1={
2897.554f, 4032.241f, 50.1419f 
};
*fParam2=192.8091f;
return 1;
break;
case 39:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 40:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 41:
*uParam1={
1397f, 3725.8f, 33.0673f 
};
*fParam2=-3.7534f;
return 1;
break;
case 42:
*uParam1={
Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) 
};
*fParam2=90f;
return 1;
break;
case 43:
*uParam1={
709.0244f, -2916.479f, 5.0589f 
};
*fParam2=355.326f;
return 1;
break;
case 44:
*uParam1={
643.5248f, -2917.325f, 5.1337f 
};
*fParam2=334.1068f;
return 1;
break;
case 45:
*uParam1={
595.2742f, -2819.183f, 5.0559f 
};
*fParam2=46.8853f;
return 1;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 47:
*uParam1={
314.4171f, 965.207f, 208.4024f 
};
*fParam2=165.9421f;
return 1;
break;
case 49:
*uParam1={
3321.537f, 4975.455f, 25.9097f 
};
*fParam2=221.228f;
return 1;
break;
case 48:
*uParam1={
-111.1318f, 6316.479f, 30.4904f 
};
*fParam2=(42f + 180f);
return 1;
break;
case 50:
*uParam1={
-731.3261f, 106.68f, 54.7169f 
};
*fParam2=98.9764f;
return 1;
break;
case 51:
*uParam1={
-1257.5f, -526.9999f, 30.2361f 
};
*fParam2=220.9554f;
return 1;
break;
case 52:
*uParam1={
736.9869f, -2050.678f, 28.2718f 
};
*fParam2=83.9922f;
return 1;
break;
case 66:
*uParam1={
262.5499f, -2540.15f, 4.8433f 
};
*fParam2=-64.1366f;
return 1;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 55:
*uParam1={
-315.7789f, 6201.355f, 30.4322f 
};
*fParam2=127.7547f;
return 1;
break;
case 56:
*uParam1={
118.0988f, -1264.916f, 32.3637f 
};
*fParam2=-63f;
return 1;
break;
case 57:
*uParam1={
37.5988f, -1351.52f, 28.2954f 
};
*fParam2=90.0339f;
return 1;
break;
case 61:
*uParam1={
-558.2693f, 261.1167f, 82.07f 
};
*fParam2=84.6231f;
return 1;
break;
case 62:
*uParam1={
-196.9999f, 507.9999f, 132.477f 
};
*fParam2=99.6049f;
return 1;
break;
case 63:
*uParam1={
1312.01f, -1645.87f, 51.2f 
};
*fParam2=120f;
return 1;
break;
case 68:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 69:
*uParam1={
-818.7374f, 6.4824f, 41.2432f 
};
*fParam2=211.8223f;
return 1;
break;
case 64:
*uParam1={
2091.258f, 4714.852f, 40.1936f 
};
*fParam2=136.0867f;
return 1;
break;
case 54:
*uParam1={
1762.59f, 3247.212f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 65:
*uParam1={
1764.013f, 3252.902f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 70:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 71:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 72:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 73:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
default:
break;
}
return 0;
}


var func__181(){
var uVar0;
func_191(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_190(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_189(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_184(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_183(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_182(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_182(var uParam0, int iParam1){
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


void func_183(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_184(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_188(*uParam0);
iVar1=func_186(*uParam0);
if(iParam1 < 1 || iParam1 > func_185(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_185(int iParam0, int iParam1){
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


var func__186(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_187(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_187(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_188(var uParam0){
return uParam0 & 15;
}


void func_189(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_190(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_191(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}


void func_192(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113810.f_18536[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_180(Global_113810.f_18536[iVar0], &Var2, &fVar3)){
Global_113810.f_18536[iVar0]=318;
func_193(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98203[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_9=0f;
Global_98203[iVar0 /*29*/].f_12=0f;
Global_98203[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_10=0f;
Global_98203[iVar0 /*29*/].f_13=0f;
Global_98203[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_11=0f;
Global_98203[iVar0 /*29*/].f_14=0f;
Global_98203[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_26=0f;
Global_98203[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_27=0f;
Global_98203[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_193(var uParam0){
*uParam0=-15;
}


void func_194(){
Global_112833=0;
}

int func_195(){
if(func_2(0)){
return 0;
}
if(Global_100872.f_8){
if(Global_100872.f_10 > 0){
return 0;
}}elseif(Global_100872.f_10 > 1){
return 0;
}
Global_100872.f_10++;
return 1;
}


void func_196(int iParam0){
Global_77479.f_138=iParam0;
}

int func_197(int iParam0){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_136){
if(Global_113810.f_7691[iVar0 /*15*/]==iParam0){
if(Global_43924 !=iVar0){
func_210(iVar0);
func_202(iParam0);
iVar1=1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_198){
if(Global_113810.f_7691.f_137[iVar0 /*15*/]==iParam0){
func_202(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_650){
if(Global_113810.f_7691.f_199[iVar0 /*15*/]==iParam0){
func_201(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_764){
if(Global_113810.f_7691.f_651[iVar0 /*14*/]==iParam0){
func_199(iVar0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_866){
if(Global_113810.f_7691.f_765[iVar0 /*10*/]==iParam0){
func_198(iVar0);
iVar1=1;
}
iVar0++;
}
return iVar1;
}


void func_198(int iParam0){
int iVar0;
struct<10> Var1;
if(iParam0 < 0 || iParam0 >=Global_113810.f_7691.f_866){
return;
}
if(Global_113810.f_7691.f_866 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113810.f_7691.f_866 - 2)){
Global_113810.f_7691.f_765[iVar0 /*10*/]={
Global_113810.f_7691.f_765[iVar0 + 1 /*10*/] 
};
iVar0++;
}}
if(Global_113810.f_7691.f_866 > 0){
Global_113810.f_7691.f_765[(Global_113810.f_7691.f_866 - 1) /*10*/]={
Var1 
};
Global_113810.f_7691.f_866=(Global_113810.f_7691.f_866 - 1);
}}


void func_199(int iParam0){
int iVar0;
struct<14> Var1;
if(iParam0 < 0 || iParam0 >=Global_113810.f_7691.f_764){
return;
}
if(Global_113810.f_7691.f_764 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113810.f_7691.f_764 - 2)){
Global_113810.f_7691.f_651[iVar0 /*14*/]={
Global_113810.f_7691.f_651[iVar0 + 1 /*14*/] 
};
iVar0++;
}}
if(Global_113810.f_7691.f_764 > 0){
Global_113810.f_7691.f_651[(Global_113810.f_7691.f_764 - 1) /*14*/]={
Var1 
};
Global_113810.f_7691.f_764=(Global_113810.f_7691.f_764 - 1);
}
func_200(0);
func_200(1);
func_200(2);
}


void func_200(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_102(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_136){
if(MISC::IS_BIT_SET(Global_113810.f_7691[iVar0 /*15*/].f_2, bParam0)){
if(Global_113810.f_7691[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113810.f_7691[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113810.f_7691.f_764){
if(MISC::IS_BIT_SET(Global_113810.f_7691.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113810.f_7691.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113810.f_7691.f_919[bParam0]=iVar1;
}


void func_201(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113810.f_7691.f_650){
if(Global_113810.f_7691.f_199[iVar1 /*15*/]==iParam0){
iVar2=iVar1;
while (iVar2 <=(Global_113810.f_7691.f_650 - 2)){
Global_113810.f_7691.f_199[iVar2 /*15*/]={
Global_113810.f_7691.f_199[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113810.f_7691.f_199[(Global_113810.f_7691.f_650 - 1) /*15*/]={
Var0 
};
Global_113810.f_7691.f_650=(Global_113810.f_7691.f_650 - 1);
return;
}
iVar1++;
}}


void func_202(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113810.f_7691.f_198){
if(Global_113810.f_7691.f_137[iVar1 /*15*/]==iParam0){
func_203(Global_113810.f_7691.f_137[iVar1 /*15*/].f_6);
iVar2=iVar1;
while (iVar2 <=(Global_113810.f_7691.f_198 - 2)){
Global_113810.f_7691.f_137[iVar2 /*15*/]={
Global_113810.f_7691.f_137[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113810.f_7691.f_137[(Global_113810.f_7691.f_198 - 1) /*15*/]={
Var0 
};
Global_113810.f_7691.f_198=(Global_113810.f_7691.f_198 - 1);
return;
}
iVar1++;
}}

int func_203(int iParam0){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=172){
if(func_209(iParam0, Global_20500)==1){
func_208(iParam0, Global_20500, 0);
if(func_207(iParam0, Global_20500)==0){
iVar0=Global_20500;
func_204(iParam0, iVar0);
}
return 1;
}else{
return 0;
}}
return 0;
}


void func_204(int iParam0, int iParam1){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=172){
if(iParam1 > 3){
}else{
iVar0=iParam1;
func_206(iParam0, iVar0, 0);
func_205(iParam0, iVar0, 0);
}}}


void func_205(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_206(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_207(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_24[iParam1];
}


void func_208(int iParam0, int iParam1, int iParam2){
Global_2058[iParam0 /*29*/].f_19[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_19[iParam1]=iParam2;
}}

int func_209(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_19[iParam1];
}


void func_210(int iParam0){
bool bVar0;
var uVar1;
struct<15> Var2;
if(iParam0 < 0 || iParam0 >=Global_113810.f_7691.f_136){
return;
}
uVar1=Global_113810.f_7691[iParam0 /*15*/].f_2;
if(Global_113810.f_7691.f_136 > 1){
bVar0=iParam0;
while (bVar0 <=(Global_113810.f_7691.f_136 - 2)){
Global_113810.f_7691[bVar0 /*15*/]={
Global_113810.f_7691[bVar0 + 1 /*15*/] 
};
bVar0++;
}}
if(Global_113810.f_7691.f_136 > 0){
Global_113810.f_7691[(Global_113810.f_7691.f_136 - 1) /*15*/]={
Var2 
};
Global_113810.f_7691.f_136=(Global_113810.f_7691.f_136 - 1);
}
bVar0=false;
while (bVar0 < 3){
if(MISC::IS_BIT_SET(uVar1, bVar0)){
func_200(bVar0);
}
bVar0++;
}}

int func_211(int iParam0, int iParam1){
int iVar0;
iVar0=func_66(func_212(iParam0));
if(iVar0 < 0){
return 15;
}
if(iVar0 >=10){
return 15;
}
return Global_113810.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_212(int iParam0){
switch (iParam0){
case 0:
return 7;
break;
case 1:
return 8;
break;
case 2:
return 9;
break;
case 3:
return 10;
break;
case 4:
return 11;
break;
}
return -1;
}

int func_213(int iParam0){
int iVar0;
iVar0=func_66(func_212(iParam0));
return Global_96842[iVar0 /*19*/];
}


void func_214(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_223(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_75()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_222(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_223(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_222(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_220(PLAYER::PLAYER_ID())) && !func_216(PLAYER::PLAYER_ID(), 0)) && !func_215()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_220(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_215(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_216(int iParam0, int iParam1){
bool bVar0;
if(!func_219(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_217(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_217(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_218();
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

int func_218(){
return Global_1574918;
}

int func_219(var uParam0){
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

int func_220(int iParam0){
if(func_216(iParam0, 0)){
return 1;
}
if(func_221()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_221(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_222(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_223(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}


void func_224(){
if(func_408(24)){
if(!func_2(0)){
if(!MISC::IS_BIT_SET(uLocal_41, 3)){
if(func_156(77)){
if(func_150(0)){
if(func_389(&iLocal_44, 0, 0, 0, 0)==1){
MISC::SET_BIT(&uLocal_41, 3);
func_388();
uLocal_173=PED::ADD_SCENARIO_BLOCKING_AREA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, 0, 1, 1, 1);
iLocal_174=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_176.f_1.f_394, Local_176.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
PED::SET_PED_NON_CREATION_AREA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397);
PATHFIND::SET_PED_PATHS_IN_AREA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, 0, 0);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::SET_MAX_WANTED_LEVEL(0);
}
}}}}
if(MISC::IS_BIT_SET(uLocal_41, 3)){
if(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT")){
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
func_384();
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0])){
iLocal_131=Global_97310.f_9[0];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_131, 0, 1);
PED::DELETE_PED(&iLocal_131);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_131, "LESTER", 2, joaat("ig_lestercrest"), 0);
}
else{
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_131, "LESTER", 2, joaat("ig_lestercrest"), 0);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_28[0])){
uLocal_132=Global_97310.f_28[0];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_132, 0, 1);
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_132)){
ENTITY::DETACH_ENTITY(iLocal_132, 1, 1);
}
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_132, "WALKINGSTICK_LESTER", 1, joaat("ig_lestercrest"), 0);
}
switch (func_100()){
case 0:
iLocal_128=PLAYER::PLAYER_PED_ID();
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_128, "MICHAEL", 0, joaat("player_zero"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_129, "FRANKLIN", 2, joaat("player_one"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "TREVOR", 2, joaat("player_two"), 0);
break;
case 1:
iLocal_129=PLAYER::PLAYER_PED_ID();
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_128, "MICHAEL", 2, joaat("player_zero"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_129, "FRANKLIN", 0, joaat("player_one"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "TREVOR", 2, joaat("player_two"), 0);
MISC::SET_BIT(&uLocal_41, 4);
break;
case 2:
iLocal_130=PLAYER::PLAYER_PED_ID();
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_128, "MICHAEL", 2, joaat("player_zero"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_129, "FRANKLIN", 2, joaat("player_one"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "TREVOR", 0, joaat("player_two"), 0);
MISC::SET_BIT(&uLocal_41, 4);
break;
}
STREAMING::REQUEST_MODEL(joaat("player_zero"));
func_73(1);
func_214(1, 1, 1, 0, 0, 0, 0);
func_383(77);
ENTITY::CREATE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
func_382(&(Local_176.f_484), 0, 0, "MICHAEL", 1, 1);
func_382(&(Local_176.f_484), 1, 0, "FRANKLIN", 1, 1);
func_382(&(Local_176.f_484), 2, 0, "TREVOR", 1, 1);
func_382(&(Local_176.f_484), 3, 0, "LESTER", 1, 1);
if(func_100()==0){
bLocal_45=true;
}
else{
bLocal_45=false;
}
CUTSCENE::START_CUTSCENE(2048);
}else{
func_120();
if(!MISC::IS_BIT_SET(uLocal_41, 6)){
MISC::CLEAR_AREA(124.0681f, -1294.762f, 28.2695f, 1.5f, 0, 0, 0, 0);
MISC::SET_BIT(&uLocal_41, 6);
}
switch (iLocal_175){
case 0:
func_381(1, 0);
func_381(2, 0);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_126, 0)){
if(func_380(iLocal_126, 0, 0)){
iLocal_175=2;
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_126)){
VEHICLE::DELETE_VEHICLE(&iLocal_126);
}
if(iLocal_175 !=2){
STREAMING::REQUEST_MODEL(joaat("tailgater"));
iLocal_175=1;
}
break;
case 1:
if(STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))){
func_381(0, 0);
func_372(133.9532f, -1311.404f, 28.08922f, 127.847f, -1315.542f, 32.11665f, 3.3f, 124.97f, -1321.87f, 28f, 37.74f, func_379(), 1, 0, 1, 0, 0);
func_323(&iLocal_127, 0, 130.56f, -1313.66f, 28.74f, 124.66f, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_127, 1084227584);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
func_296(iLocal_127, 0f, 0f, 0f, 0f, 24, 0);
iLocal_175=2;
}
break;
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))){
if(!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0), 0)){
iLocal_128=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
PED::SET_PED_CONFIG_FLAG(iLocal_128, 208, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_128, 118, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_128, 213, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_128, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_128, 96.46f, -1291.44f, 28.2688f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_128, 299.3742f);
func_382(&(Local_176.f_484), 0, iLocal_128, "MICHAEL", 1, 1);
if(MISC::IS_BIT_SET(uLocal_41, 4)){
iLocal_133[0]=iLocal_128;
func_291(&iLocal_133, 0);
func_228(&iLocal_133, 0, 0, 0);
}}
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", joaat("player_one"))){
if(!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0), 0)){
iLocal_129=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0));
PED::SET_PED_CONFIG_FLAG(iLocal_129, 208, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_129, 118, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_129, 213, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_129, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_129, 97.116f, -1288.588f, 28.2688f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_129, 246.1162f);
func_382(&(Local_176.f_484), 1, iLocal_129, "FRANKLIN", 1, 1);
}
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", joaat("player_two"))){
if(!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0), 0)){
iLocal_130=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0));
PED::SET_PED_CONFIG_FLAG(iLocal_130, 208, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_130, 118, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_130, 213, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_130, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_130, 99.1774f, -1292.069f, 28.2688f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_130, 20.8497f);
func_382(&(Local_176.f_484), 2, iLocal_130, "TREVOR", 1, 1);
}
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest"))){
if(!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0), 0)){
iLocal_131=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0));
PED::SET_PED_CONFIG_FLAG(iLocal_131, 208, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_131, 118, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_131, 213, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_131, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_131, 96.2331f, -1289.744f, 28.2688f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_131, 223.2882f);
func_382(&(Local_176.f_484), 3, iLocal_131, "LESTER", 1, 1);
}
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0)){
if(!MISC::IS_BIT_SET(uLocal_41, 2)){
func_227();
MISC::SET_BIT(&uLocal_41, 2);
}
if(iLocal_175==1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
}
ENTITY::REMOVE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
func_115(24, 0);
}}}}}elseif(!MISC::IS_BIT_SET(uLocal_41, 3)){
if(func_150(0)){
if(func_389(&iLocal_44, 0, 0, 0, 0)==1){
MISC::SET_BIT(&uLocal_41, 3);
}}}else{
func_382(&(Local_176.f_484), 0, 0, "MICHAEL", 1, 1);
func_382(&(Local_176.f_484), 1, 0, "FRANKLIN", 1, 1);
func_382(&(Local_176.f_484), 2, 0, "TREVOR", 1, 1);
func_382(&(Local_176.f_484), 3, 0, "LESTER", 1, 1);
func_227();
func_115(24, 0);
}}elseif(func_156(77) || func_2(0)){
if(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT")){
CUTSCENE::REMOVE_CUTSCENE();
}
if(iLocal_46 !=-1){
func_225(&iLocal_46);
}}}


void func_225(int iParam0){
bool bVar0;
int iVar1;
int iVar2;
if(*iParam0==-1){
return;
}
if(Global_78686==*iParam0){
func_226(*iParam0, 0);
}
if(Global_78685==*iParam0){
Global_78685=-1;
}
bVar0=false;
iVar1=0;
while (!bVar0 && iVar1 < Global_78682){
if(Global_78671[iVar1 /*2*/]==*iParam0){
bVar0=true;
}else{
iVar1++;
}}
if(!bVar0){
return;
}
iVar2=iVar1;
while (iVar2 <=(Global_78682 - 2)){
Global_78671[iVar2 /*2*/]=Global_78671[iVar2 + 1 /*2*/];
Global_78671[iVar2 /*2*/].f_1=Global_78671[iVar2 + 1 /*2*/].f_1;
iVar2++;
}
Global_78671[(Global_78682 - 1) /*2*/]=-1;
Global_78671[(Global_78682 - 1) /*2*/].f_1=3;
Global_78682=(Global_78682 - 1);
Global_78683=1;
Global_78684=MISC::GET_FRAME_COUNT();
*iParam0=-1;
}


void func_226(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(Global_78685==iParam0){
Global_78686=iParam0;
}}elseif(Global_78686==iParam0){
Global_78686=-1;
}}


void func_227(){
func_86(1, 4, 1);
func_86(2, 4, 1);
func_391(&Local_176);
func_68(&Local_176);
}

int func_228(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
int iVar5;
char cVar6[64];
int iVar7;
var uVar8;
char* sVar9;
if(!iParam0->f_39){
if(iParam0->f_7==4){
return 1;
}}
if(*iParam0)[iParam0->f_7] !=PLAYER::PLAYER_PED_ID(){}
if((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] !=PLAYER::PLAYER_PED_ID()){
if(!bParam2){
if((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}else{
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}
if((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
}else{
TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
}}
iVar0=PLAYER::PLAYER_PED_ID();
iVar1=func_100();
if(!iParam0->f_23){
func_278(iVar0, 0);
}
func_276(iVar1, &iVar0);
PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
iVar2=func_275(iParam0->f_7);
func_278((*iParam0)[iParam0->f_7], 0);
fVar3=(((to_float(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (to_float(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
switch (func_103(PLAYER::PLAYER_PED_ID())){
case 0:
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime")){
GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut")){
GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
}
break;
case 1:
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus")){
GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut")){
GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
}
break;
case 2:
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST")){
GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut")){
GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
}
break;
}
if(func_102(func_100())){
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
}}
PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, 0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
if(iParam3 & 1 !=0){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
}
if(func_274(0) || func_274(3)){
if(Global_23251.f_13){
iVar4=0;
while (iVar4 < 7){
if(MISC::IS_BIT_SET(Global_91565[iVar4 /*5*/].f_1, 2)){
iVar5=Global_91565[iVar4 /*5*/];
StringCopy(&cVar6, "MISS_SWITCH_", 64);
StringConCat(&cVar6, &(Global_91601[Global_78960.f_109[iVar5 /*4*/] /*34*/]), 64);
STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
}
iVar4++;
}}}
Global_23251.f_13=0;
iParam0->f_5=func_273(iVar1);
if(iParam0->f_5==4){
iParam0->f_5=3;
}
(*iParam0)[iParam0->f_5]=iVar0;
(*iParam0)[iParam0->f_7]=0;
iParam0->f_6=func_273(iVar2);
iParam0->f_7=4;
iVar7=PLAYER::PLAYER_PED_ID();
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
func_272(iVar7);
PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, 0, 0);
if(fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), round((((25f / 100f) * (to_float(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
}
if(bParam1){
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
ENTITY::SET_ENTITY_VISIBLE(iVar0, 1, 0);
func_272(iVar0);
PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, 0, 0);
PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
}}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
sVar9=ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
if(!MISC::IS_STRING_NULL(sVar9)){
if(!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME())){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
}
PED::DELETE_PED(&iVar0);
}}
Global_98095=1;
func_270(PLAYER::PLAYER_PED_ID());
func_269();
func_268(iVar2);
func_258();
func_252(iVar2);
func_235(func_250(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_408(67));
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_408(68));
}
func_232(iVar2, &iVar7);
if(((func_407(0) || func_407(3)) || func_407(2)) || func_407(4)){
PED::SET_PED_CONFIG_FLAG(iVar7, 32, 0);
PED::SET_PED_CONFIG_FLAG(iVar7, 250, 0);
}else{
PED::SET_PED_CONFIG_FLAG(iVar7, 32, 1);
PED::SET_PED_CONFIG_FLAG(iVar7, 250, 1);
}
if(!func_231()){
func_229();
}
Global_97732=0;
return 1;
}else{
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
}
if(PED::IS_PED_INJURED((*iParam0)[iParam0->f_7])){
}
if(PLAYER::PLAYER_PED_ID()==(*iParam0)[iParam0->f_7]){
}}
return 0;
}


void func_229(){
if(Global_98125){
func_101();
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_230(Global_113810.f_2366.f_539.f_4321));
}else{
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
}}


char* func_230(var uParam0){
uParam0=uParam0;
return "";
}


bool func_231(){
return Global_23249;
}


void func_232(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_233(4, *iParam1);
func_233(7, *iParam1);
func_233(8, *iParam1);
func_233(11, *iParam1);
break;
case 1:
if(Global_113810.f_9088.f_330[2 /*6*/]){
func_233(4, *iParam1);
}
func_233(7, *iParam1);
func_233(8, *iParam1);
func_233(11, *iParam1);
if(Global_113810.f_9088.f_99.f_58[126]){
func_233(12, *iParam1);
}
break;
case 2:
if(Global_113810.f_9088.f_330[20 /*6*/]){
func_233(4, *iParam1);
}
func_233(7, *iParam1);
func_233(8, *iParam1);
func_233(11, *iParam1);
break;
}}


void func_233(int iParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
return;
}
if(func_234(iParam0, iParam1)){
return;
}
if(Global_42073[iParam0 /*31*/].f_24 < 5){
Global_42073[iParam0 /*31*/].f_25[Global_42073[iParam0 /*31*/].f_24]=iParam1;
Global_42073[iParam0 /*31*/].f_24++;
}else{
bVar2=false;
iVar0=0;
while (iVar0 < 5){
iVar1=Global_42073[iParam0 /*31*/].f_25[iVar0];
if(!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1)){
Global_42073[iParam0 /*31*/].f_25[iVar0]=iParam1;
bVar2=true;
iVar0=6;
}
iVar0++;
}
if(!bVar2){
}}}

int func_234(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Global_42073[iParam0 /*31*/].f_24){
if(iParam1==Global_42073[iParam0 /*31*/].f_25[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}


void func_235(int iParam0){
if(iParam0==10){
return;
}
switch (iParam0){
case 0:
MISC::SET_BIT(&(Global_38737[(38 / 32)]), (38 % 32));
func_236(38, 0);
MISC::SET_BIT(&(Global_38737[(41 / 32)]), (41 % 32));
func_236(41, 0);
MISC::SET_BIT(&(Global_38737[(43 / 32)]), (43 % 32));
func_236(43, 0);
MISC::SET_BIT(&(Global_38737[(42 / 32)]), (42 % 32));
func_236(42, 0);
MISC::SET_BIT(&(Global_38737[(44 / 32)]), (44 % 32));
func_236(44, 0);
break;
case 1:
MISC::SET_BIT(&(Global_38737[(51 / 32)]), (51 % 32));
func_236(51, 0);
break;
case 2:
MISC::SET_BIT(&(Global_38737[(51 / 32)]), (51 % 32));
func_236(51, 0);
break;
case 3:
MISC::SET_BIT(&(Global_38737[(53 / 32)]), (53 % 32));
func_236(53, 0);
break;
case 4:
MISC::SET_BIT(&(Global_38737[(81 / 32)]), (81 % 32));
func_236(81, 0);
MISC::SET_BIT(&(Global_38737[(82 / 32)]), (82 % 32));
func_236(82, 0);
break;
case 5:
MISC::SET_BIT(&(Global_38737[(47 / 32)]), (47 % 32));
func_236(47, 0);
MISC::SET_BIT(&(Global_38737[(50 / 32)]), (50 % 32));
func_236(50, 0);
break;
case 6:
MISC::SET_BIT(&(Global_38737[(50 / 32)]), (50 % 32));
func_236(50, 0);
break;
}}


void func_236(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=226){
if(Global_78689){
iVar0=Global_42911[iParam0];
}else{
iVar0=Global_113810.f_7264[iParam0];
}
if(iVar0 !=iParam1 || MISC::IS_BIT_SET(Global_38737[(iParam0 / 32)], (iParam0 % 32))){
if((((iParam1==4 || iParam1==3) || iParam1==5) || iParam1==6) || iParam1==2){
MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
Global_39209[iParam0]=iParam1;
}elseif(Global_78689){
Global_42911[iParam0]=iParam1;
}else{
Global_113810.f_7264[iParam0]=iParam1;
}
MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
func_238(iParam0);
if(MISC::IS_BIT_SET(Global_38737[(iParam0 / 32)], (iParam0 % 32))){
func_237(iParam0);
}}}}


void func_237(int iParam0){
if(!MISC::IS_BIT_SET(Global_39680.f_228[(iParam0 / 32)], (iParam0 % 23))){
MISC::SET_BIT(&(Global_39680.f_228[(iParam0 / 32)]), (iParam0 % 23));
Global_39680[Global_39680.f_227]=iParam0;
Global_39680.f_227++;
}}


void func_238(int iParam0){
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
if(!func_247()){
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
Var0={
func_246(iParam0) 
};
if(MISC::IS_BIT_SET(Var0.f_4, 2)){
func_243(iParam0, &Var0);
}
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5)){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}}
bVar1=false;
bVar2=false;
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
if((MISC::IS_BIT_SET(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0]==2) && fVar4 > 210f){
MISC::CLEAR_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
Global_38755[iParam0]=0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning"))==0){
if(MISC::IS_BIT_SET(Global_38982[(iParam0 / 32)], (iParam0 % 32))){
if(fVar4 < 25f){
if(Global_100885.f_391==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Global_100885.f_391=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
}}
iVar5=Global_100885.f_391;
iVar6=INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
if(iVar5==iVar6 && iVar5 !=0){
MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
Global_39209[iParam0]=3;
MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
}}
MISC::CLEAR_BIT(&(Global_38982[(iParam0 / 32)]), (iParam0 % 32));
}}
if(MISC::IS_BIT_SET(Global_38746[(iParam0 / 32)], (iParam0 % 32))){
iVar3=Global_39209[iParam0];
}elseif(MISC::IS_BIT_SET(Var0.f_4, 0)){
if(Global_113810.f_9088){
iVar3=func_240(iParam0);
}else{
iVar3=0;
}
if(func_407(14)){
iVar3=0;
}}elseif(MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon"))==0){
if(func_239()){
iVar3=0;
}else{
iVar3=1;
}}else{
iVar3=Global_113810.f_7264[iParam0];
}
if(Global_39436[iParam0] !=iVar3){
bVar1=true;
}
if(MISC::IS_BIT_SET(Global_38737[(iParam0 / 32)], (iParam0 % 32))){
if(!MISC::IS_BIT_SET(Global_38746[(iParam0 / 32)], (iParam0 % 32)) || (Global_38755[iParam0]==0 && Global_39209[iParam0] !=2)){
bVar1=true;
}}
if(bVar1){
if(!Global_38736){
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
MISC::CLEAR_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
Global_39436[iParam0]=iVar3;
}}
if(MISC::IS_BIT_SET(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0] !=2){
MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
func_237(iParam0);
if(Global_38755[iParam0] < 2){
Global_38755[iParam0]++;
}}}

int func_239(){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (func_100()){
case 0:
if(Global_113810.f_9088.f_99.f_58[65]){
return 1;
}
break;
case 1:
if(Global_113810.f_9088.f_99.f_58[66]){
return 1;
}
break;
case 2:
if(Global_113810.f_9088.f_99.f_58[65]){
return 1;
}
break;
}
return 0;
}

int func_240(int iParam0){
bool bVar0;
bVar0=func_100();
if(func_241(iParam0)){
return 1;
}
if(iParam0==49){
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113810.f_7232[5], 0) || MISC::IS_BIT_SET(Global_113810.f_7232[6], 0)){
return 0;
}}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[5], bVar0)){
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
if(MISC::IS_BIT_SET(Global_113810.f_7232[0], 0)){
return 0;
}}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[0], bVar0)){
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
if(MISC::IS_BIT_SET(Global_113810.f_7232[5], 0)){
return 0;
}}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[5], bVar0)){
return 0;
}}
break;
case 50:
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113810.f_7232[6], 0)){
return 0;
}}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[6], bVar0)){
return 0;
}}
break;
case 51:
case 52:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113810.f_7232[2], 0)){
return 0;
}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[2], bVar0)){
return 0;
}}}elseif(bVar0==0){
if(MISC::IS_BIT_SET(Global_113810.f_7232[1], 0)){
return 0;
}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[1], bVar0)){
return 0;
}}}
break;
case 53:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113810.f_7232[3], 0)){
return 0;
}}
if(func_102(bVar0)){
if(MISC::IS_BIT_SET(Global_95840[3], bVar0)){
return 0;
}}
break;
default:
return 0;
break;
}
return 1;
}

int func_241(int iParam0){
int iVar0;
if((iParam0==40 || iParam0==49) || iParam0==52){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=ENTITY::GET_ENTITY_MODEL(func_242(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
switch (iVar0){
case joaat("utillitruck"):
case joaat("monster"):
return 1;
break;
}}}}
return 0;
}

int func_242(int iParam0){
return iParam0;
}


void func_243(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(uParam1->f_4, 2)){
return;
}
iVar0=func_181();
iVar1=func_245(iVar0);
switch (iParam0){
case 133:
case 134:
case 201:
case 202:
if(func_244(iParam0)){
if(iVar1 < 19){
if(iVar1 >=7){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=19){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 199:
case 200:
case 203:
case 204:
if(func_244(iParam0)){
if(iVar1 < 18){
if(iVar1 >=7){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=18){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=12f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 141:
case 142:
if(func_244(iParam0)){
if((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0) && !Global_113810.f_9088.f_99.f_58[4]){
if(iVar1 < 21){
if(iVar1 >=7){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}}elseif(!Global_113810.f_9088.f_99.f_58[4]){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(Global_113810.f_9088.f_99.f_58[4]){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0){
if(iVar1 >=21){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=18f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(iVar1 < 7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=18f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}}
break;
case 145:
case 146:
case 143:
case 144:
if(func_244(iParam0)){
if(iVar1 < 20){
if(iVar1 >=9){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}}elseif(iVar1 >=20){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=40f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(iVar1 < 9){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >=40f){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 147:
case 148:
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
if(!func_244(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet"))==0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 158:
case 159:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6)==0){
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 160:
case 161:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2"))==0){
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 70:
case 71:
case 72:
if(!func_244(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[26 /*34*/].f_6)==0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}else{
return;
}
break;
case 101:
case 102:
case 103:
case 104:
if(!func_244(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[43 /*34*/].f_6)==0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}
break;
case 190:
case 191:
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 193:
if(!func_244(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[93 /*34*/].f_6) > 0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}
break;
case 198:
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 80:
if(!func_244(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[8 /*34*/].f_6)==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[10 /*34*/].f_6)==0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}
break;
case 205:
case 206:
if(!func_244(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[47 /*34*/].f_6)==0){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}else{
return;
}
break;
case 207:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6)==0){
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
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
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[48 /*34*/].f_6)==0){
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 99:
case 100:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[39 /*34*/].f_6)==0){
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}}
break;
case 216:
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 217:
case 218:
if(!func_244(iParam0)){
Global_113810.f_7264[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
case 219:
case 220:
case 221:
case 222:
if(func_244(iParam0)){
Global_113810.f_7264[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], 1, 1);
}
break;
}}


bool func_244(int iParam0){
struct<7> Var0;
int iVar1;
Var0={
func_246(iParam0) 
};
iVar1=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
return ((iVar1==1 || iVar1==4) || iVar1==2);
}

int func_245(int iParam0){
return shift_right(iParam0, 9) & 31;
}


struct<7> func_246(int iParam0){
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

int func_247(){
if((func_249()==-1 || func_249()==999) && !func_248()==0){
return 1;
}
return 0;
}

int func_248(){
return Global_32284;
}

int func_249(){
return Global_32283;
}

int func_250(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95851[iVar0 /*10*/].f_7 !=263){
if(Global_95851[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_251(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__251(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}


void func_252(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
func_253(iParam0, iVar0);
iVar0++;
}}


void func_253(int iParam0, int iParam1){
int iVar0;
float fVar1;
int iVar2;
int iVar3;
if(((iParam0 !=0 || iParam0 !=1) || iParam0 !=2) || iParam0 !=3){
return;
}
func_257(iParam0, iParam1, &iVar2, &iVar3);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=func_254(iVar3, -1);
}else{
STATS::STAT_GET_INT(iVar2, &iVar0, -1);
}
switch (iParam1){
case 2:
fVar1=(0.8f + (0.4f * (to_float(iVar0) / 100f)));
PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, 1);
break;
case 7:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) !=0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) !=0){
Global_98096=1;
}else{
fVar1=(1f - (to_float(iVar0) / 100f));
PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
}
break;
}}

int func_254(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_255(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__255(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_256(uParam1));
}

int func_256(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_218();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


void func_257(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("sp0_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp0_stamina");
break;
case 3:
*uParam2=joaat("sp0_lung_capacity");
break;
case 2:
*uParam2=joaat("sp0_strength");
break;
case 4:
*uParam2=joaat("sp0_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp0_flying_ability");
break;
case 6:
*uParam2=joaat("sp0_shooting_ability");
break;
case 7:
*uParam2=joaat("sp0_stealth_ability");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("sp1_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp1_stamina");
break;
case 3:
*uParam2=joaat("sp1_lung_capacity");
break;
case 2:
*uParam2=joaat("sp1_strength");
break;
case 4:
*uParam2=joaat("sp1_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp1_flying_ability");
break;
case 6:
*uParam2=joaat("sp1_shooting_ability");
break;
case 7:
*uParam2=joaat("sp1_stealth_ability");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("sp2_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp2_stamina");
break;
case 3:
*uParam2=joaat("sp2_lung_capacity");
break;
case 2:
*uParam2=joaat("sp2_strength");
break;
case 4:
*uParam2=joaat("sp2_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp2_flying_ability");
break;
case 6:
*uParam2=joaat("sp2_shooting_ability");
break;
case 7:
*uParam2=joaat("sp2_stealth_ability");
break;
}
break;
case 3:
switch (iParam1){
case 0:
*uParam3=64;
break;
case 1:
*uParam3=65;
break;
case 3:
*uParam3=67;
break;
case 2:
*uParam3=66;
break;
case 4:
*uParam3=68;
break;
case 5:
*uParam3=69;
break;
case 6:
*uParam3=70;
break;
case 7:
*uParam3=71;
break;
}
break;
}}


void func_258(){
struct<50> Var0;
if((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_102(func_100())) || !func_265()){
return;
}
Var0=12;
Var0.f_13=12;
Var0.f_26=12;
Var0.f_39=9;
Var0.f_49=9;
func_260(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
func_259(1306, Var0[0], -1);
func_259(1307, Var0[1], -1);
func_259(1308, Var0[2], -1);
func_259(1309, Var0[3], -1);
func_259(1310, Var0[4], -1);
func_259(1311, Var0[5], -1);
func_259(1312, Var0[6], -1);
func_259(1313, Var0[7], -1);
func_259(1314, Var0[8], -1);
func_259(1315, Var0[9], -1);
func_259(1316, Var0[10], -1);
func_259(1317, Var0[11], -1);
func_259(1318, Var0.f_13[0], -1);
func_259(1319, Var0.f_13[1], -1);
func_259(1320, Var0.f_13[2], -1);
func_259(1321, Var0.f_13[3], -1);
func_259(1322, Var0.f_13[4], -1);
func_259(1323, Var0.f_13[5], -1);
func_259(1324, Var0.f_13[6], -1);
func_259(1325, Var0.f_13[7], -1);
func_259(1326, Var0.f_13[8], -1);
func_259(1327, Var0.f_13[9], -1);
func_259(1328, Var0.f_13[10], -1);
func_259(1329, Var0.f_13[11], -1);
func_259(1330, Var0.f_26[0], -1);
func_259(1331, Var0.f_26[1], -1);
func_259(1332, Var0.f_26[2], -1);
func_259(1333, Var0.f_26[3], -1);
func_259(1334, Var0.f_26[4], -1);
func_259(1335, Var0.f_26[5], -1);
func_259(1336, Var0.f_26[6], -1);
func_259(1337, Var0.f_26[7], -1);
func_259(1338, Var0.f_26[8], -1);
func_259(1339, Var0.f_26[9], -1);
func_259(1340, Var0.f_26[10], -1);
func_259(1341, Var0.f_26[11], -1);
func_259(1342, Var0.f_39[0], -1);
func_259(1343, Var0.f_39[1], -1);
func_259(1344, Var0.f_39[2], -1);
func_259(1345, Var0.f_39[3], -1);
func_259(1346, Var0.f_39[4], -1);
func_259(1347, Var0.f_39[5], -1);
func_259(1348, Var0.f_39[6], -1);
func_259(1349, Var0.f_39[7], -1);
func_259(1350, Var0.f_39[8], -1);
func_259(1351, Var0.f_49[0], -1);
func_259(1352, Var0.f_49[1], -1);
func_259(1353, Var0.f_49[2], -1);
func_259(1354, Var0.f_49[3], -1);
func_259(1355, Var0.f_49[4], -1);
func_259(1356, Var0.f_49[5], -1);
func_259(1357, Var0.f_49[6], -1);
func_259(1358, Var0.f_49[7], -1);
func_259(1359, Var0.f_49[8], -1);
func_259(1360, func_100(), -1);
STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
Global_113810.f_2366.f_539.f_4315=1;
}


void func_259(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_218();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}


void func_260(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=func_103(iParam0);
iVar1=0;
while (iVar1 < 12){
func_264(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_263(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_102(iVar0)){
uParam1->f_59=Global_113810.f_2366.f_539[iVar0 /*65*/].f_59;
uParam1->f_60=Global_113810.f_2366.f_539[iVar0 /*65*/].f_60;
uParam1->f_61=Global_113810.f_2366.f_539[iVar0 /*65*/].f_61;
uParam1->f_62=Global_113810.f_2366.f_539[iVar0 /*65*/].f_62;
uParam1->f_63=Global_113810.f_2366.f_539[iVar0 /*65*/].f_63;
uParam1->f_64=Global_113810.f_2366.f_539[iVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_261(161, iParam3)){
uParam1->f_59=func_254(2053, iParam3);
}else{
uParam1->f_59=func_254(753, iParam3);
}
uParam1->f_60=func_254(754, iParam3);
uParam1->f_61=func_254(755, iParam3);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_261(161, iParam3)){
uParam1->f_59=func_254(2053, iParam3);
}else{
uParam1->f_59=func_254(753, iParam3);
}}}}

int func_261(int iParam0, var uParam1){
var uVar0;
var uVar1;
uVar0=func_262(iParam0, uParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__262(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_256(uParam1));
}


void func_263(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_103(iParam0);
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


void func_264(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_103(iParam0);
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

int func_265(){
if(func_267() && func_266(0)){
return 1;
}
return 0;
}


var func__266(int iParam0){
return Global_1574538[iParam0];
}


var func__267(){
return func_266(func_218() + 1);
}


void func_268(int iParam0){
switch (iParam0){
case 0:
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -1865950624);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95816, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95816);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95817, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95817);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95818, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95818);
break;
case 1:
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -1865950624);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95816, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95816);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95817, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95817);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95818, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95818);
break;
case 2:
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -1865950624);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1865950624, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95816, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95816);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95817, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95817);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95818, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95818);
break;
default:
break;
}}


void func_269(){
var uVar0;
int iVar1;
func_101();
uVar0=HUD::GET_MAIN_PLAYER_BLIP_ID();
if(HUD::DOES_BLIP_EXIST(uVar0)){
iVar1=Global_113810.f_2366.f_539.f_4321;
if(func_407(14)){
iVar1=func_103(PLAYER::PLAYER_PED_ID());
}
if(iVar1==0){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_MICHAEL");
}elseif(iVar1==1){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_FRANKLIN");
}elseif(iVar1==2){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_TREV");
}else{
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_PLAYER");
}}}


void func_270(int iParam0){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
struct<2> Var6;
iVar0=0;
while (iVar0 < 44){
iVar2=func_271(iVar0);
if(iVar2 !=0){
iVar3=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
if((iVar3 !=0 && iVar3 !=joaat("weapon_unarmed")) && iVar3 !=joaat("object")){
if(WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3)==-1){
if(WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1)){
WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
}}}}
iVar0++;
}
iVar5=FILES::GET_NUM_DLC_WEAPONS();
iVar4=0;
while (iVar4 < iVar5){
if(FILES::GET_DLC_WEAPON_DATA(iVar4, &Var6)){
iVar3=Var6.f_1;
if(WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3)==-1){
if(WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1)){
WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
}}}
iVar4++;
}}

int func_271(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
iVar0=1993361168;
break;
case 1:
iVar0=1277010230;
break;
case 2:
iVar0=932043479;
break;
case 3:
iVar0=-690654591;
break;
case 4:
iVar0=-1459198205;
break;
case 5:
iVar0=195782970;
break;
case 6:
iVar0=-438797331;
break;
case 7:
iVar0=896793492;
break;
case 8:
iVar0=495159329;
break;
case 9:
iVar0=-1155528315;
break;
case 10:
iVar0=-515636489;
break;
case 11:
iVar0=-871913299;
break;
case 12:
iVar0=-1352759032;
break;
case 13:
iVar0=-542958961;
break;
case 14:
iVar0=1682645887;
break;
case 15:
iVar0=-859470162;
break;
case 16:
iVar0=-2125426402;
break;
case 17:
iVar0=2067210266;
break;
case 18:
iVar0=-538172856;
break;
case 19:
iVar0=1783244476;
break;
case 20:
iVar0=439844898;
break;
case 21:
iVar0=-24829327;
break;
case 22:
iVar0=1949306232;
break;
case 23:
iVar0=-1941230881;
break;
case 24:
iVar0=-1033554448;
break;
case 25:
iVar0=320513715;
break;
case 26:
iVar0=-695165975;
break;
case 27:
iVar0=-281028447;
break;
case 28:
iVar0=-686713772;
break;
case 29:
iVar0=347509793;
break;
case 30:
iVar0=1769089473;
break;
case 31:
iVar0=189935548;
break;
case 33:
iVar0=248801358;
break;
case 34:
iVar0=386596758;
break;
case 35:
iVar0=-157212362;
break;
case 36:
iVar0=436985596;
break;
case 37:
iVar0=-47957369;
break;
case 38:
iVar0=575938238;
break;
}
return iVar0;
}


void func_272(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0)==200){
PED::SET_PED_MAX_HEALTH(iParam0, round((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_262145.f_107)));
}
if(Global_113810.f_2366.f_539.f_290[iVar0] <=0f){
Global_113810.f_2366.f_539.f_290[iVar0]=100f;
}elseif(Global_113810.f_2366.f_539.f_290[iVar0] <=10f){
Global_113810.f_2366.f_539.f_290[iVar0]=10f;
}
ENTITY::SET_ENTITY_HEALTH(iParam0, round((((Global_113810.f_2366.f_539.f_290[iVar0] / 100f) * (to_float(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
}}

int func_273(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==2){
return 2;
}elseif(iParam0==1){
return 1;
}elseif(iParam0==145){
return 3;
}
return 4;
}

int func_274(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_150(iParam0)){
return 0;
}
return 1;
}

int func_275(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==2){
return 2;
}elseif(iParam0==1){
return 1;
}
return 145;
}


void func_276(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_277(4, *iParam1, 0);
func_277(7, *iParam1, 0);
func_277(8, *iParam1, 0);
func_277(11, *iParam1, 0);
break;
case 1:
func_277(4, *iParam1, 0);
func_277(7, *iParam1, 0);
func_277(8, *iParam1, 0);
func_277(11, *iParam1, 0);
if(Global_113810.f_9088.f_99.f_58[126]){
func_277(12, *iParam1, 0);
}
break;
case 2:
func_277(4, *iParam1, 0);
func_277(7, *iParam1, 0);
func_277(8, *iParam1, 0);
func_277(11, *iParam1, 0);
break;
}}


void func_277(int iParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
if(!bParam2){
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
return;
}}
if(Global_42073[iParam0 /*31*/].f_24==0){
return;
}
bVar1=false;
iVar0=0;
while (iVar0 < Global_42073[iParam0 /*31*/].f_24){
if(bVar1){
Global_42073[iParam0 /*31*/].f_25[(iVar0 - 1)]=Global_42073[iParam0 /*31*/].f_25[iVar0];
Global_42073[iParam0 /*31*/].f_25[iVar0]=0;
}elseif(iParam1==Global_42073[iParam0 /*31*/].f_25[iVar0]){
Global_42073[iParam0 /*31*/].f_25[iVar0]=0;
bVar1=true;
}
iVar0++;
}
if(bVar1){
Global_42073[iParam0 /*31*/].f_24=(Global_42073[iParam0 /*31*/].f_24 - 1);
}}


void func_278(int iParam0, bool bParam1){
func_290(iParam0);
func_284(iParam0, bParam1);
func_283(iParam0);
func_282(iParam0);
func_281(iParam0);
func_280(iParam0);
func_279(iParam0);
}


void func_279(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
Global_113810.f_2366.f_539.f_2328[iVar0]=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}}}


void func_280(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_2318[iVar0 /*3*/]={
ENTITY::GET_ENTITY_VELOCITY(iParam0) 
};
}}


void func_281(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3){
if(STREAMING::GET_PLAYER_SWITCH_STATE()==8){
return;
}}
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/]={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Global_113810.f_2366.f_539.f_2310[iVar0]=ENTITY::GET_ENTITY_HEADING(iParam0);
Global_113810.f_2366.f_539.f_2314[iVar0]=INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
if(Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/] >=8000f){
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/]=7500f;
}elseif(Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/] <=-8000f){
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/]=-7500f;
}
if(Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_1 >=8000f){
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_1=7500f;
}elseif(Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_1 <=-8000f){
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_1=-7500f;
}
if(Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_2 >=2500f){
Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/].f_2=2000f;
}}}


void func_282(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_294[iVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_283(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_290[iVar0]=(((to_float(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (to_float(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
}}


void func_284(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_285(iParam0, &(Global_113810.f_2366.f_539.f_298[iVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0]==iVar1){
Global_113810.f_2366.f_539.f_1763=iVar2;
}}
iVar2++;
}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
if(iVar0==0){
STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==1){
STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==2){
STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
}}}}


void func_285(int iParam0, var uParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
struct<5> Var4;
int iVar5;
int iVar6;
struct<2> Var7;
struct<4> Var8;
int iVar9;
bool bVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=0;
while (iVar0 <=(44 - 1)){
(uParam1[iVar0 /*5*/])->f_1=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=(44 - 1)){
iVar3=func_271(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_271(iVar0));
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
if(Var4.f_0 !=0 && Var4.f_0 !=joaat("weapon_unarmed")){
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(Var4.f_0==joaat("gadget_parachute")){
Var4.f_1=1;
}
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
(uParam1[iVar0 /*5*/])->f_1=Var4.f_1;
bVar1=false;
iVar2=func_288(Var4.f_0, bVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), bVar1);
}
bVar1++;
iVar2=func_288(Var4.f_0, bVar1);
}}
*(uParam1[iVar0 /*5*/])={
Var4 
};
}
iVar0++;
}
iVar0=0;
while (iVar0 <=50){
uParam1->f_221[iVar0 /*5*/].f_1=0;
iVar0++;
}
iVar6=FILES::GET_NUM_DLC_WEAPONS_SP();
iVar5=0;
while (iVar5 < iVar6){
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_287(Var7.f_1)) && iVar9 < 51){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0)){
Var4.f_0=Var7.f_1;
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
}
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/].f_1=Var4.f_1;
bVar10=false;
bVar1=false;
while (bVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, bVar1, &Var8)){
if(!func_286(Var8.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3)){
MISC::SET_BIT(&(Var4.f_2), bVar10);
}
bVar10++;
}
}
bVar1++;
}}
if(Var4.f_0 !=0){
if(!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_0=0;
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/]={
Var4 
};
iVar9++;
}
iVar5++;
}}}

int func_286(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo_slide"):
case joaat("component_pistol_mk2_camo_02_slide"):
case joaat("component_pistol_mk2_camo_03_slide"):
case joaat("component_pistol_mk2_camo_04_slide"):
case joaat("component_pistol_mk2_camo_05_slide"):
case joaat("component_pistol_mk2_camo_06_slide"):
case joaat("component_pistol_mk2_camo_07_slide"):
case joaat("component_pistol_mk2_camo_08_slide"):
case joaat("component_pistol_mk2_camo_09_slide"):
case joaat("component_pistol_mk2_camo_10_slide"):
case joaat("component_pistol_mk2_camo_ind_01_slide"):
case joaat("component_snspistol_mk2_camo_slide"):
case joaat("component_snspistol_mk2_camo_02_slide"):
case joaat("component_snspistol_mk2_camo_03_slide"):
case joaat("component_snspistol_mk2_camo_04_slide"):
case joaat("component_snspistol_mk2_camo_05_slide"):
case joaat("component_snspistol_mk2_camo_06_slide"):
case joaat("component_snspistol_mk2_camo_07_slide"):
case joaat("component_snspistol_mk2_camo_08_slide"):
case joaat("component_snspistol_mk2_camo_09_slide"):
case joaat("component_snspistol_mk2_camo_10_slide"):
case joaat("component_snspistol_mk2_camo_ind_01_slide"):
case joaat("component_pistol_mk2_varmod_xm3_slide"):
return 1;
break;
}
return 0;
}

int func_287(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}else{
switch (iParam0){
case joaat("weapon_pistol50"):
case joaat("weapon_bullpupshotgun"):
case joaat("weapon_assaultsmg"):
return 0;
break;
case joaat("weapon_bottle"):
case joaat("weapon_snspistol"):
case joaat("weapon_gusenberg"):
return 0;
break;
case joaat("weapon_heavypistol"):
case joaat("weapon_specialcarbine"):
return 0;
break;
case joaat("weapon_bullpuprifle"):
return 0;
break;
case joaat("weapon_dagger"):
case joaat("weapon_vintagepistol"):
return 0;
break;
case joaat("weapon_firework"):
case joaat("weapon_musket"):
return 0;
break;
case joaat("weapon_heavyshotgun"):
case joaat("weapon_marksmanrifle"):
return 0;
break;
case joaat("weapon_hominglauncher"):
case joaat("weapon_proxmine"):
return 0;
break;
case joaat("weapon_combatpdw"):
case joaat("weapon_knuckle"):
case joaat("weapon_marksmanpistol"):
return 0;
break;
case joaat("weapon_heavyrifle"):
case -572349828:
case 392730790:
case -1523701417:
case -2112826155:
case -664359727:
case -1887867191:
case -837150131:
case -344484024:
case joaat("weapon_flaregun"):
case joaat("weapon_handcuffs"):
case joaat("weapon_snowball"):
case joaat("weapon_garbagebag"):
case joaat("weapon_flashlight"):
case joaat("weapon_switchblade"):
case joaat("weapon_revolver"):
case joaat("weapon_dbshotgun"):
case joaat("weapon_compactrifle"):
case joaat("weapon_autoshotgun"):
case joaat("weapon_minismg"):
case joaat("weapon_compactlauncher"):
case joaat("weapon_battleaxe"):
case joaat("weapon_pipebomb"):
case joaat("weapon_poolcue"):
case joaat("weapon_wrench"):
case joaat("weapon_doubleaction"):
case joaat("weapon_raycarbine"):
case joaat("weapon_rayminigun"):
case joaat("weapon_raypistol"):
case joaat("weapon_navyrevolver"):
case joaat("weapon_ceramicpistol"):
case joaat("weapon_gadgetpistol"):
case joaat("weapon_militaryrifle"):
case joaat("weapon_combatshotgun"):
case joaat("weapon_emplauncher"):
case joaat("weapon_fertilizercan"):
case joaat("weapon_stungun_mp"):
case joaat("weapon_metaldetector"):
case joaat("weapon_precisionrifle"):
case joaat("weapon_tacticalrifle"):
case joaat("weapon_pistolxm3"):
case joaat("weapon_candycane"):
case joaat("weapon_railgunxm3"):
case 350597077:
return 1;
break;
}}
return 0;
}

int func_288(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<4> Var5;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_pistol_clip_01");
break;
case 2:
iVar0=joaat("component_pistol_clip_02");
break;
case 3:
iVar0=joaat("component_at_pi_flsh");
break;
case 4:
iVar0=joaat("component_at_pi_supp_02");
break;
case 5:
iVar0=joaat("component_pistol_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpistol_clip_01");
break;
case 1:
iVar0=joaat("component_combatpistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_combatpistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_appistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_appistol_clip_01");
break;
case 1:
iVar0=joaat("component_appistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_appistol_varmod_luxe");
break;
case 5:
iVar0=joaat("component_appistol_varmod_security");
break;
}
break;
case joaat("weapon_microsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_microsmg_clip_01");
break;
case 1:
iVar0=joaat("component_microsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_microsmg_varmod_luxe");
break;
case 6:
iVar0=joaat("component_microsmg_varmod_security");
break;
case 7:
iVar0=joaat("component_microsmg_varmod_xm3");
break;
case 8:
iVar0=1694268374;
break;
}
break;
case joaat("weapon_smg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_smg_clip_01");
break;
case 2:
iVar0=joaat("component_smg_clip_02");
break;
case 3:
iVar0=joaat("component_smg_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_flsh");
break;
case 5:
iVar0=joaat("component_at_pi_supp");
break;
case 6:
iVar0=joaat("component_at_scope_macro_02");
break;
case 7:
iVar0=joaat("component_at_ar_afgrip");
break;
case 8:
iVar0=joaat("component_smg_varmod_luxe");
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_assaultrifle_clip_01");
break;
case 2:
iVar0=joaat("component_assaultrifle_clip_02");
break;
case 3:
iVar0=joaat("component_assaultrifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_afgrip");
break;
case 5:
iVar0=joaat("component_at_ar_flsh");
break;
case 6:
iVar0=joaat("component_at_scope_macro");
break;
case 7:
iVar0=joaat("component_at_ar_supp_02");
break;
case 8:
iVar0=joaat("component_assaultrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_carbinerifle_clip_01");
break;
case 2:
iVar0=joaat("component_carbinerifle_clip_02");
break;
case 3:
iVar0=joaat("component_carbinerifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_railcover_01");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_at_ar_flsh");
break;
case 7:
iVar0=joaat("component_at_scope_medium");
break;
case 8:
iVar0=joaat("component_at_ar_supp");
break;
case 9:
iVar0=joaat("component_carbinerifle_varmod_luxe");
break;
case 10:
iVar0=1605520746;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_advancedrifle_clip_01");
break;
case 1:
iVar0=joaat("component_advancedrifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_advancedrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_mg"):
switch (bParam1){
case 0:
iVar0=joaat("component_mg_clip_01");
break;
case 1:
iVar0=joaat("component_mg_clip_02");
break;
case 2:
iVar0=joaat("component_at_scope_small_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_mg_varmod_lowrider");
break;
}
break;
case joaat("weapon_combatmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_combatmg_clip_01");
break;
case 2:
iVar0=joaat("component_combatmg_clip_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_combatmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_sr_supp");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_pumpshotgun_varmod_lowrider");
break;
case 3:
iVar0=joaat("component_pumpshotgun_varmod_security");
break;
case 4:
iVar0=joaat("component_pumpshotgun_varmod_xm3");
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultshotgun_clip_01");
break;
case 1:
iVar0=joaat("component_assaultshotgun_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_afgrip");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_sniperrifle_clip_01");
break;
case 1:
iVar0=joaat("component_at_scope_large");
break;
case 2:
iVar0=joaat("component_at_scope_max");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_sniperrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_heavysniper"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_heavysniper_clip_01");
break;
case 2:
iVar0=joaat("component_at_scope_large");
break;
case 3:
iVar0=joaat("component_at_scope_max");
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_scope_small");
break;
}
break;
case joaat("weapon_minigun"):
switch (bParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultsmg_clip_01");
break;
case 1:
iVar0=joaat("component_assaultsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_assaultsmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_ar_supp_02");
break;
}
break;
case joaat("weapon_pistol50"):
switch (bParam1){
case 0:
iVar0=joaat("component_pistol50_clip_01");
break;
case 1:
iVar0=joaat("component_pistol50_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_pistol50_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpdw"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpdw_clip_01");
break;
case 1:
iVar0=joaat("component_combatpdw_clip_02");
break;
case 2:
iVar0=joaat("component_combatpdw_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_small");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_bullpuprifle_clip_01");
break;
case 1:
iVar0=joaat("component_bullpuprifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_bullpuprifle_varmod_low");
break;
}
break;
case joaat("weapon_snspistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_snspistol_clip_01");
break;
case 1:
iVar0=joaat("component_snspistol_clip_02");
break;
case 2:
iVar0=joaat("component_snspistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (bParam1){
case 0:
iVar0=joaat("component_specialcarbine_clip_01");
break;
case 1:
iVar0=joaat("component_specialcarbine_clip_02");
break;
case 2:
iVar0=joaat("component_specialcarbine_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_at_ar_supp_02");
break;
case 6:
iVar0=joaat("component_at_ar_afgrip");
break;
case 7:
iVar0=joaat("component_specialcarbine_varmod_lowrider");
break;
}
break;
case joaat("weapon_knuckle"):
switch (bParam1){
case 0:
iVar0=joaat("component_knuckle_varmod_pimp");
break;
case 1:
iVar0=joaat("component_knuckle_varmod_ballas");
break;
case 2:
iVar0=joaat("component_knuckle_varmod_dollar");
break;
case 3:
iVar0=joaat("component_knuckle_varmod_diamond");
break;
case 4:
iVar0=joaat("component_knuckle_varmod_hate");
break;
case 5:
iVar0=joaat("component_knuckle_varmod_love");
break;
case 6:
iVar0=joaat("component_knuckle_varmod_player");
break;
case 7:
iVar0=joaat("component_knuckle_varmod_king");
break;
case 8:
iVar0=joaat("component_knuckle_varmod_vagos");
break;
}
break;
case joaat("weapon_machinepistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_machinepistol_clip_01");
break;
case 1:
iVar0=joaat("component_machinepistol_clip_02");
break;
case 2:
iVar0=joaat("component_machinepistol_clip_03");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
}
break;
case joaat("weapon_switchblade"):
switch (bParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (bParam1){
case 0:
iVar0=joaat("component_revolver_clip_01");
break;
case 1:
iVar0=joaat("component_revolver_varmod_boss");
break;
case 2:
iVar0=joaat("component_revolver_varmod_goon");
break;
}
break;
case joaat("weapon_minismg"):
switch (bParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
case joaat("weapon_bat"):
switch (bParam1){
case 0:
iVar0=joaat("component_bat_varmod_xm3");
break;
case 1:
iVar0=joaat("component_bat_varmod_xm3_01");
break;
case 2:
iVar0=joaat("component_bat_varmod_xm3_02");
break;
case 3:
iVar0=joaat("component_bat_varmod_xm3_03");
break;
case 4:
iVar0=joaat("component_bat_varmod_xm3_04");
break;
case 5:
iVar0=joaat("component_bat_varmod_xm3_05");
break;
case 6:
iVar0=joaat("component_bat_varmod_xm3_06");
break;
case 7:
iVar0=joaat("component_bat_varmod_xm3_07");
break;
case 8:
iVar0=joaat("component_bat_varmod_xm3_08");
break;
case 9:
iVar0=joaat("component_bat_varmod_xm3_09");
break;
}
break;
case joaat("weapon_rpg"):
switch (bParam1){
case 0:
iVar0=-1240142720;
break;
}
break;
default:
if(iParam0 !=0){
iVar1=func_289(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_286(Var5.f_3)){
if(iVar3==bParam1){
return Var5.f_3;
}
iVar3++;
}
}
iVar2++;
}}}
break;
}
return iVar0;
}

int func_289(int iParam0, var uParam1){
int iVar0;
int iVar1;
iVar1=FILES::GET_NUM_DLC_WEAPONS();
iVar0=0;
while (iVar0 < iVar1){
if(FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1)){
if(uParam1->f_1==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_290(int iParam0){
int iVar0;
iVar0=func_103(iParam0);
if(func_102(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_2296[iVar0]=func_181();
}}

int func_291(int iParam0, bool bParam1){
bool bVar0;
bool bVar1;
if(!iParam0->f_39){
iParam0->f_7=4;
iParam0->f_39=1;
}
if((bParam1 !=0 && bParam1 !=2) && bParam1 !=1){}else{
bVar0=iParam0->f_34[bParam1]==2;
if(func_273(func_100()) !=bParam1 || bVar0){
bVar1=false;
if((bVar0 || iParam0->f_24[bParam1] !=0) || ((func_295(bParam1) && func_292(bParam1)) && !iParam0->f_18[bParam1])){
if(!iParam0->f_23){
if(!PED::IS_PED_INJURED((*iParam0)[bParam1]) || bVar0){
if(iParam0->f_34[bParam1] !=1 && iParam0->f_34[bParam1] !=3){
bVar1=true;
}}}elseif((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0)) && !MISC::IS_BIT_SET(Global_98291.f_47, bParam1)){
bVar1=true;
}}elseif(!((MISC::IS_BIT_SET(Global_113810.f_9088.f_2[27 /*3*/], 1) && !Global_3) && !func_2(0))){
if(iParam0->f_23){
bVar1=true;
}}
if(bVar1){
iParam0->f_7=bParam1;
return 1;
}}}
iParam0->f_39=0;
return 0;
}

int func_292(int iParam0){
if(Global_113810.f_9088 || Global_3){
if(!Global_78689 || (Global_78689 && iParam0 !=func_273(func_294()))){
if(!func_293(func_275(iParam0))){
return 0;
}}}
return 1;
}

int func_293(int iParam0){
if(func_102(iParam0)){
if((Global_113810.f_9088 || Global_3) || func_2(0)){
return Global_113810.f_2366.f_539.f_2348[iParam0];
}else{
return 1;
}}
return 0;
}

int func_294(){
return Global_113810.f_2366.f_539.f_4323;
}

int func_295(int iParam0){
if((Global_113810.f_9088 || Global_3) || func_2(0)){
if(!Global_78689 || (Global_78689 && iParam0 !=func_273(func_294()))){
if(((iParam0==0 && !func_408(115)) || (iParam0==1 && !func_408(116))) || (iParam0==2 && !func_408(117))){
return 0;
}}}
return 1;
}


void func_296(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
struct<60> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam3 !=24 && iParam3 !=25){
return;
}
if(iParam3==24){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[25], 0)){
if(Global_77479.f_484[25]==iParam0){
return;
}}}
if(!bParam4){
if((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tourbus")){
return;
}}
func_322(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_317(iParam0, &Var0);
if(func_179(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_310(iParam3, &Var0, Param1, fParam2, func_316(iParam0));
func_297(iParam3, iParam0, 0);
}}


void func_297(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_308(&(Global_77479.f_555[0 /*21*/]), iParam0)){
return;
}
if(!MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
if(Global_77479.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(iParam1)){
return;
}}
if(Global_78386 !=-1 && Global_78386 !=iParam0){
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
}
if(iParam0==24){
Global_113810.f_32752.f_4801=func_181();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_307(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_298(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_298(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_299(iParam0)){
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
iParam1=Global_113810.f_2366.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113810.f_32752.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113810.f_32752.f_5590=iParam1;
Global_78384=iParam0;
Global_113810.f_32752.f_5588=1;
func_317(iParam0, &(Global_113810.f_32752.f_5510));
}

int func_299(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_305(iParam0, 0, 0)) || func_305(iParam0, 1, 0)) || func_305(iParam0, 2, 0)) || func_316(iParam0) !=145) || func_304(iParam0)) || func_303(iParam0)) || func_302(iParam0)) || func_301(iParam0)) || !func_300(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_303(iParam0)){
}
if(func_303(iParam0)){
}
if(func_305(iParam0, 0, 0)){
}
if(func_305(iParam0, 1, 0)){
}
if(func_305(iParam0, 2, 0)){
}
if(func_316(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_300(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_166(iParam0, 0, -1)){
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

int func_301(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_166(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_302(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0])){
if(Global_98174[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_303(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], 0)){
if(Global_98144[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_304(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24])){
if(iParam0==Global_77479.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77479.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_305(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_306(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_306(int iParam0, int iParam1, char* sParam2, var uParam3){
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

int func_307(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}

int func_308(var uParam0, int iParam1){
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
uParam0->f_4=func_309(0, 1);
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
uParam0->f_4=func_309(0, 1);
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
uParam0->f_4=func_309(1, 1);
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
uParam0->f_4=func_309(1, 2);
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
uParam0->f_4=func_309(1, 1);
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
uParam0->f_4=func_309(1, 2);
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
uParam0->f_4=func_309(2, 1);
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
uParam0->f_4=func_309(2, 1);
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
uParam0->f_4=func_309(2, 1);
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
if(func_177()){
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
if(func_177()){
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
uParam0->f_4=Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_179(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_179(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_179(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_309(int iParam0, int iParam1){
struct<82> Var0;
if(func_102(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_164(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_310(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4){
if(func_308(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_315(iParam0);
func_314(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 11)){
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=uParam3;
}else{
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=-1f;
}
Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_311(iParam0, 1);
}}}


void func_311(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_313(iParam0, 0)){
func_312(iParam0, 1, 0);
func_312(iParam0, 2, 0);
func_312(iParam0, 3, 0);
func_312(iParam0, 4, 0);
func_312(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_312(iParam0, 0, 0);
}}


void func_312(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_313(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_314(var uParam0, var uParam1){
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


void func_315(int iParam0){
if(iParam0==-1){
return;
}
if(func_308(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_311(iParam0, 0);
}}}

int func_316(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
return Global_98154[iVar0];
}}
iVar0++;
}
return 145;
}


void func_317(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_321(uParam1);
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
if(uParam1->f_65==-1 && !func_320(uParam1->f_66)){
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
func_319(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar0 + 1));
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

int func_318(int iParam0){
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

int func_319(int iParam0, var uParam1, var uParam2){
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

int func_320(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_321(var uParam0){
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


void func_322(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_315(iParam0);
func_311(iParam0, 0);
}

int func_323(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
struct<97> Var2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
int iVar7;
if(func_102(iParam1)){
Var2.f_11=12;
Var2.f_31=49;
Var2.f_81=2;
func_164(iParam1, &Var2, iParam5);
if(Var2.f_0==0){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::GET_ENTITY_MODEL(*iParam0) !=Var2.f_0){
}
return 1;
}
if((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]){
Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar3=0;
while (iVar3 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
iVar3++;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
}
if(func_371(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}}}
func_364(iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_362(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_361(*iParam0, iParam1);
return 1;
}}elseif(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar4=0;
while (iVar4 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
iVar4++;
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
}
if(func_371(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}}}
func_364(iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_362(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_361(*iParam0, iParam1);
return 1;
}}else{
STREAMING::REQUEST_MODEL(Var2.f_0);
if(STREAMING::HAS_MODEL_LOADED(Var2.f_0)){
bVar5=true;
*iParam0=VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar7=0;
while (iVar7 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
iVar7++;
}
if(Var2.f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
}
if(func_371(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
if(Var2.f_26 >=0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var2.f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var2.f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var2.f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var2.f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
}
if(Var2.f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Var2.f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
}}}
func_364(iParam0, &(Var2.f_31), &(Var2.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113810.f_9088.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
bVar5=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_362(iParam0);
}}elseif(((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("tailgater")){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
Global_113810.f_2366.f_539.f_4316=1;
func_324(iParam1, iParam0, 0, 1);
}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
}
if(bVar5){
func_361(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_324(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_102(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)){
if(iParam2 > Global_113810.f_2366.f_539.f_2407){
return;
}
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_298(*iParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam1) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1)){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(iVar1);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0)){
iVar2=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
if(iVar2==0 || iVar2==5){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
StringCopy(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}
Global_113810.f_2366.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_328(*iParam1, 0, &uVar0)){
func_319(iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113810.f_20121[iParam0 /*43*/].f_40=1;
Global_113810.f_20121[iParam0 /*43*/]=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113810.f_20121[iParam0 /*43*/].f_3=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113810.f_20121[iParam0 /*43*/].f_4=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113810.f_20121[iParam0 /*43*/].f_5=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113810.f_20121[iParam0 /*43*/].f_6=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113810.f_20121[iParam0 /*43*/].f_10=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113810.f_20121[iParam0 /*43*/].f_16=!Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113810.f_20121[iParam0 /*43*/].f_19={
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113810.f_20121[iParam0 /*43*/].f_23=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113810.f_20121[iParam0 /*43*/].f_7=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113810.f_20121[iParam0 /*43*/].f_8=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113810.f_20121[iParam0 /*43*/].f_9=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113810.f_20121[iParam0 /*43*/].f_11=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113810.f_20121[iParam0 /*43*/].f_12=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113810.f_20121[iParam0 /*43*/].f_13=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113810.f_20121[iParam0 /*43*/].f_14=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113810.f_20121[iParam0 /*43*/].f_15=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113810.f_20121[iParam0 /*43*/].f_18=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113810.f_20121[iParam0 /*43*/].f_17=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113810.f_20121[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
Global_113810.f_20121[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
Global_113810.f_20121[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
Global_113810.f_20121[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
Global_113810.f_20121[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_31=func_327(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_325(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113810.f_20121[iParam0 /*43*/].f_1));
VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_325(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113810.f_20121[iParam0 /*43*/].f_2));
}}}}

int func_325(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
iVar0=0;
while (func_326(iVar0, &sVar2, &iVar1, &iVar3, &iVar4)){
if((iParam0==iVar3 && (!bParam3 || iParam1==iVar4)) && ((iParam2==iVar1 || iParam2==-1) || iParam2==255)){
*uParam4=iVar0;
return 1;
}
iVar0++;
}
iParam0=-1;
iParam1=-1;
*uParam4=-1;
return 0;
}


bool func_326(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
*uParam2=-1;
*uParam3=-1;
*uParam4=-1;
switch (iParam0){
case 0:
StringCopy(sParam1, "BR BLACK_STEEL", 16);
*uParam2=3;
*uParam3=118;
*uParam4=3;
break;
case 1:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=0;
*uParam3=147;
*uParam4=4;
break;
case 2:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=1;
*uParam3=96;
*uParam4=0;
break;
case 3:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=0;
*uParam3=71;
*uParam4=145;
break;
case 4:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=0;
*uParam3=135;
*uParam4=135;
break;
case 5:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=0;
*uParam3=29;
*uParam4=28;
break;
case 6:
StringCopy(sParam1, "BLUE", 16);
*uParam2=0;
*uParam3=64;
*uParam4=68;
break;
case 7:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=1;
*uParam3=70;
*uParam4=0;
break;
case 8:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=1;
*uParam3=50;
*uParam4=0;
break;
case 9:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=2;
*uParam3=55;
*uParam4=0;
break;
case 10:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=1;
*uParam3=89;
*uParam4=0;
break;
case 11:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=1;
*uParam3=38;
*uParam4=0;
break;
case 12:
StringCopy(sParam1, "GOLD", 16);
*uParam2=0;
*uParam3=37;
*uParam4=106;
break;
case 13:
StringCopy(sParam1, "SILVER", 16);
*uParam2=0;
*uParam3=4;
*uParam4=111;
break;
case 14:
StringCopy(sParam1, "CHROME", 16);
*uParam2=4;
*uParam3=120;
*uParam4=0;
break;
case 15:
StringCopy(sParam1, "WHITE", 16);
*uParam2=1;
*uParam3=111;
*uParam4=0;
break;
case 16:
StringCopy(sParam1, "BLACK", 16);
*uParam2=0;
*uParam3=0;
*uParam4=10;
break;
case 17:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=0;
*uParam3=1;
*uParam4=5;
break;
case 18:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=0;
*uParam3=11;
*uParam4=2;
break;
case 19:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=0;
*uParam3=2;
*uParam4=5;
break;
case 20:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=0;
*uParam3=3;
*uParam4=6;
break;
case 21:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=0;
*uParam3=5;
*uParam4=111;
break;
case 22:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=0;
*uParam3=6;
*uParam4=4;
break;
case 23:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=0;
*uParam3=7;
*uParam4=5;
break;
case 24:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=0;
*uParam3=8;
*uParam4=5;
break;
case 25:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=0;
*uParam3=9;
*uParam4=7;
break;
case 26:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=0;
*uParam3=10;
*uParam4=7;
break;
case 27:
StringCopy(sParam1, "RED", 16);
*uParam2=0;
*uParam3=27;
*uParam4=36;
break;
case 28:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=0;
*uParam3=28;
*uParam4=28;
break;
case 29:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=0;
*uParam3=150;
*uParam4=42;
break;
case 30:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=0;
*uParam3=30;
*uParam4=36;
break;
case 31:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=0;
*uParam3=31;
*uParam4=27;
break;
case 32:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=0;
*uParam3=32;
*uParam4=25;
break;
case 33:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=0;
*uParam3=33;
*uParam4=47;
break;
case 34:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=0;
*uParam3=34;
*uParam4=47;
break;
case 35:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=0;
*uParam3=143;
*uParam4=31;
break;
case 36:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=0;
*uParam3=35;
*uParam4=25;
break;
case 37:
StringCopy(sParam1, "PINK", 16);
*uParam2=0;
*uParam3=137;
*uParam4=3;
break;
case 38:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=0;
*uParam3=136;
*uParam4=5;
break;
case 39:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=0;
*uParam3=36;
*uParam4=26;
break;
case 40:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=0;
*uParam3=38;
*uParam4=37;
break;
case 41:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=0;
*uParam3=138;
*uParam4=89;
break;
case 42:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=0;
*uParam3=90;
*uParam4=102;
break;
case 43:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=0;
*uParam3=88;
*uParam4=88;
break;
case 44:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=0;
*uParam3=89;
*uParam4=88;
break;
case 45:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=0;
*uParam3=91;
*uParam4=91;
break;
case 46:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=0;
*uParam3=49;
*uParam4=52;
break;
case 47:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=0;
*uParam3=50;
*uParam4=53;
break;
case 48:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=0;
*uParam3=51;
*uParam4=66;
break;
case 49:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=0;
*uParam3=52;
*uParam4=59;
break;
case 50:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=0;
*uParam3=53;
*uParam4=59;
break;
case 51:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=0;
*uParam3=54;
*uParam4=60;
break;
case 52:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=0;
*uParam3=92;
*uParam4=92;
break;
case 53:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=0;
*uParam3=141;
*uParam4=73;
break;
case 54:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=0;
*uParam3=61;
*uParam4=63;
break;
case 55:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=0;
*uParam3=62;
*uParam4=68;
break;
case 56:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=0;
*uParam3=63;
*uParam4=87;
break;
case 57:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=0;
*uParam3=65;
*uParam4=87;
break;
case 58:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=0;
*uParam3=66;
*uParam4=60;
break;
case 59:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=0;
*uParam3=67;
*uParam4=67;
break;
case 60:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=0;
*uParam3=68;
*uParam4=68;
break;
case 61:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=0;
*uParam3=69;
*uParam4=74;
break;
case 62:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=0;
*uParam3=73;
*uParam4=73;
break;
case 63:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=0;
*uParam3=70;
*uParam4=70;
break;
case 64:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=0;
*uParam3=74;
*uParam4=74;
break;
case 65:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=0;
*uParam3=96;
*uParam4=95;
break;
case 66:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=0;
*uParam3=101;
*uParam4=95;
break;
case 67:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=0;
*uParam3=95;
*uParam4=97;
break;
case 68:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=0;
*uParam3=94;
*uParam4=104;
break;
case 69:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=0;
*uParam3=97;
*uParam4=98;
break;
case 70:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=0;
*uParam3=103;
*uParam4=104;
break;
case 71:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=0;
*uParam3=104;
*uParam4=104;
break;
case 72:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=0;
*uParam3=98;
*uParam4=95;
break;
case 73:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=0;
*uParam3=100;
*uParam4=100;
break;
case 74:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=0;
*uParam3=102;
*uParam4=105;
break;
case 75:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=0;
*uParam3=99;
*uParam4=106;
break;
case 76:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=0;
*uParam3=105;
*uParam4=105;
break;
case 77:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=0;
*uParam3=106;
*uParam4=106;
break;
case 78:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=0;
*uParam3=72;
*uParam4=64;
break;
case 79:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=146;
*uParam4=145;
break;
case 80:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=145;
*uParam4=74;
break;
case 81:
StringCopy(sParam1, "CREAM", 16);
*uParam2=0;
*uParam3=107;
*uParam4=107;
break;
case 82:
StringCopy(sParam1, "WHITE", 16);
*uParam2=0;
*uParam3=111;
*uParam4=0;
break;
case 83:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=0;
*uParam3=112;
*uParam4=0;
break;
case 84:
StringCopy(sParam1, "BLACK", 16);
*uParam2=1;
*uParam3=0;
*uParam4=0;
break;
case 85:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=1;
*uParam3=147;
*uParam4=0;
break;
case 86:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=1;
*uParam3=1;
*uParam4=0;
break;
case 87:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=1;
*uParam3=11;
*uParam4=0;
break;
case 88:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=1;
*uParam3=2;
*uParam4=0;
break;
case 89:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=1;
*uParam3=3;
*uParam4=2;
break;
case 90:
StringCopy(sParam1, "SILVER", 16);
*uParam2=1;
*uParam3=4;
*uParam4=4;
break;
case 91:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=1;
*uParam3=5;
*uParam4=5;
break;
case 92:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=1;
*uParam3=6;
*uParam4=0;
break;
case 93:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=1;
*uParam3=7;
*uParam4=0;
break;
case 94:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=1;
*uParam3=8;
*uParam4=0;
break;
case 95:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=1;
*uParam3=9;
*uParam4=0;
break;
case 96:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=1;
*uParam3=10;
*uParam4=0;
break;
case 97:
StringCopy(sParam1, "RED", 16);
*uParam2=1;
*uParam3=27;
*uParam4=0;
break;
case 98:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=1;
*uParam3=28;
*uParam4=0;
break;
case 99:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=1;
*uParam3=29;
*uParam4=0;
break;
case 100:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=1;
*uParam3=150;
*uParam4=0;
break;
case 101:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=1;
*uParam3=30;
*uParam4=0;
break;
case 102:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=1;
*uParam3=31;
*uParam4=0;
break;
case 103:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=1;
*uParam3=32;
*uParam4=0;
break;
case 104:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=1;
*uParam3=33;
*uParam4=0;
break;
case 105:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=1;
*uParam3=34;
*uParam4=0;
break;
case 106:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=1;
*uParam3=143;
*uParam4=0;
break;
case 107:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=1;
*uParam3=35;
*uParam4=0;
break;
case 108:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=1;
*uParam3=135;
*uParam4=0;
break;
case 109:
StringCopy(sParam1, "PINK", 16);
*uParam2=1;
*uParam3=137;
*uParam4=0;
break;
case 110:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=1;
*uParam3=136;
*uParam4=0;
break;
case 111:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=1;
*uParam3=36;
*uParam4=0;
break;
case 112:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=1;
*uParam3=138;
*uParam4=0;
break;
case 113:
StringCopy(sParam1, "GOLD", 16);
*uParam2=1;
*uParam3=99;
*uParam4=99;
break;
case 114:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=1;
*uParam3=90;
*uParam4=102;
break;
case 115:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=1;
*uParam3=88;
*uParam4=0;
break;
case 116:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=1;
*uParam3=91;
*uParam4=0;
break;
case 117:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=1;
*uParam3=49;
*uParam4=0;
break;
case 118:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=1;
*uParam3=51;
*uParam4=0;
break;
case 119:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=1;
*uParam3=52;
*uParam4=0;
break;
case 120:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=1;
*uParam3=53;
*uParam4=0;
break;
case 121:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=1;
*uParam3=54;
*uParam4=0;
break;
case 122:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=1;
*uParam3=92;
*uParam4=0;
break;
case 123:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=1;
*uParam3=141;
*uParam4=0;
break;
case 124:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=1;
*uParam3=61;
*uParam4=0;
break;
case 125:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=1;
*uParam3=62;
*uParam4=0;
break;
case 126:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=1;
*uParam3=63;
*uParam4=0;
break;
case 127:
StringCopy(sParam1, "BLUE", 16);
*uParam2=1;
*uParam3=64;
*uParam4=0;
break;
case 128:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=1;
*uParam3=65;
*uParam4=0;
break;
case 129:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=1;
*uParam3=66;
*uParam4=0;
break;
case 130:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=1;
*uParam3=67;
*uParam4=0;
break;
case 131:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=1;
*uParam3=68;
*uParam4=0;
break;
case 132:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=1;
*uParam3=69;
*uParam4=0;
break;
case 133:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=1;
*uParam3=73;
*uParam4=0;
break;
case 134:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=1;
*uParam3=74;
*uParam4=0;
break;
case 135:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=1;
*uParam3=101;
*uParam4=0;
break;
case 136:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=1;
*uParam3=95;
*uParam4=0;
break;
case 137:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=1;
*uParam3=94;
*uParam4=0;
break;
case 138:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=1;
*uParam3=97;
*uParam4=0;
break;
case 139:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=1;
*uParam3=103;
*uParam4=0;
break;
case 140:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=1;
*uParam3=104;
*uParam4=0;
break;
case 141:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=1;
*uParam3=98;
*uParam4=0;
break;
case 142:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=1;
*uParam3=100;
*uParam4=0;
break;
case 143:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=1;
*uParam3=102;
*uParam4=0;
break;
case 144:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=1;
*uParam3=99;
*uParam4=0;
break;
case 145:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=1;
*uParam3=105;
*uParam4=0;
break;
case 146:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=1;
*uParam3=106;
*uParam4=0;
break;
case 147:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=1;
*uParam3=71;
*uParam4=0;
break;
case 148:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=1;
*uParam3=72;
*uParam4=0;
break;
case 149:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=142;
*uParam4=0;
break;
case 150:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=145;
*uParam4=0;
break;
case 151:
StringCopy(sParam1, "CREAM", 16);
*uParam2=1;
*uParam3=107;
*uParam4=0;
break;
case 152:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=1;
*uParam3=112;
*uParam4=0;
break;
case 153:
StringCopy(sParam1, "BLACK", 16);
*uParam2=2;
*uParam3=12;
*uParam4=0;
break;
case 154:
StringCopy(sParam1, "GREY", 16);
*uParam2=2;
*uParam3=13;
*uParam4=0;
break;
case 155:
StringCopy(sParam1, "LIGHT_GREY", 16);
*uParam2=2;
*uParam3=14;
*uParam4=0;
break;
case 156:
StringCopy(sParam1, "WHITE", 16);
*uParam2=2;
*uParam3=131;
*uParam4=0;
break;
case 157:
StringCopy(sParam1, "BLUE", 16);
*uParam2=2;
*uParam3=83;
*uParam4=0;
break;
case 158:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=2;
*uParam3=82;
*uParam4=0;
break;
case 159:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=2;
*uParam3=84;
*uParam4=0;
break;
case 160:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=2;
*uParam3=149;
*uParam4=0;
break;
case 161:
StringCopy(sParam1, "Purple", 16);
*uParam2=2;
*uParam3=148;
*uParam4=0;
break;
case 162:
StringCopy(sParam1, "RED", 16);
*uParam2=2;
*uParam3=39;
*uParam4=0;
break;
case 163:
StringCopy(sParam1, "DARK_RED", 16);
*uParam2=2;
*uParam3=40;
*uParam4=0;
break;
case 164:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=2;
*uParam3=41;
*uParam4=0;
break;
case 165:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=2;
*uParam3=42;
*uParam4=0;
break;
case 166:
StringCopy(sParam1, "GREEN", 16);
*uParam2=2;
*uParam3=128;
*uParam4=0;
break;
case 167:
StringCopy(sParam1, "MATTE_FOR", 16);
*uParam2=2;
*uParam3=151;
*uParam4=0;
break;
case 168:
StringCopy(sParam1, "MATTE_FOIL", 16);
*uParam2=2;
*uParam3=155;
*uParam4=0;
break;
case 169:
StringCopy(sParam1, "MATTE_OD", 16);
*uParam2=2;
*uParam3=152;
*uParam4=0;
break;
case 170:
StringCopy(sParam1, "MATTE_DIRT", 16);
*uParam2=2;
*uParam3=153;
*uParam4=0;
break;
case 171:
StringCopy(sParam1, "MATTE_DESERT", 16);
*uParam2=2;
*uParam3=154;
*uParam4=0;
break;
case 172:
StringCopy(sParam1, "BR_STEEL", 16);
*uParam2=3;
*uParam3=117;
*uParam4=18;
break;
case 173:
StringCopy(sParam1, "BR_ALUMINIUM", 16);
*uParam2=3;
*uParam3=119;
*uParam4=5;
break;
case 174:
StringCopy(sParam1, "GOLD_P", 16);
*uParam2=3;
*uParam3=158;
*uParam4=160;
break;
case 175:
StringCopy(sParam1, "GOLD_S", 16);
*uParam2=3;
*uParam3=159;
*uParam4=160;
break;
}
return *uParam2 !=-1;
}


float func_327(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
iVar0=100000;
iVar1=65000;
iVar2=50000;
iVar3=20000;
iVar4=20000;
iVar5=iVar4;
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
if(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==3){
iVar5=iVar0;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==1){
iVar5=iVar1;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==2){
iVar5=iVar2;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==0){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
iVar5=iVar3;
}else{
iVar5=iVar4;
}}}
fVar6=(to_float(iVar5) / to_float(iVar4));
return fVar6;
}

int func_328(int iParam0, bool bParam1, var uParam2){
int iVar0;
bool bVar1;
*uParam2=0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((!func_359(iVar0, bParam1, uParam2) && !func_358(PLAYER::PLAYER_ID())) && !func_339(iParam0)){
return 0;
}
if(func_358(PLAYER::PLAYER_ID())){
if(func_337(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_336(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_333(iParam0)) && !bVar1) && !(func_332(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_329(PLAYER::PLAYER_ID()))){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
*uParam2=16;
break;
default:
*uParam2=2;
break;
}
return 0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_302(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_329(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}

int func_330(int iParam0){
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

int func_331(int iParam0, bool bParam1, bool bParam2){
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

int func_332(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_333(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("halftrack"):
case joaat("phantom3"):
case joaat("hauler2"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("bruiser"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("bruiser2"):
case joaat("bruiser3"):
return 1;
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_335(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
case joaat("brickade2"):
if(func_334(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("journey2"):
return 1;
break;
}
return 0;
}

int func_334(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==26;
}}}
return 0;
}

int func_335(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==13;
}}}
return 0;
}

int func_336(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==7;
}}}
return 0;
}

int func_337(int iParam0){
bool bVar0;
if(iParam0==joaat("oppressor2")){
return 0;
}
bVar0=false;
if((iParam0==joaat("riot2") || iParam0==joaat("chernobog")) || iParam0==joaat("khanjali")){
if(!Global_262145.f_34153){
bVar0=true;
}}
if((((!func_338(PLAYER::PLAYER_ID()) && iParam0 !=joaat("thruster")) && iParam0 !=joaat("avenger")) && iParam0 !=func_170(1)) && !bVar0){
return 0;
}
return 1;
}

int func_338(int iParam0){
if(iParam0 !=func_95()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_307, 2);
}
return 0;
}

int func_339(int iParam0){
if(func_357(PLAYER::PLAYER_ID()) || func_356(PLAYER::PLAYER_ID())){
if(func_340(iParam0)){
return 1;
}}
return 0;
}

int func_340(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
if(func_344(iParam0, 0)){
return 1;
}
if(func_343(PLAYER::PLAYER_ID()) && ((((!func_337(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel1"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula2")))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2"))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster"))){
return 1;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_341(iParam0)){
return 1;
}}}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_341(iParam0)){
return 1;
}}}
return 0;
}

int func_341(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_333(iParam0)) || func_342(iVar0)){
return 1;
}
switch (iVar0){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return 1;
break;
}}
return 0;
}

int func_342(int iParam0){
switch (iParam0){
case joaat("mule"):
case joaat("mule2"):
case joaat("mule3"):
case joaat("brickade"):
case joaat("dune"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("boxville4"):
case joaat("boxville5"):
return 1;
default:
}
return 0;
}

int func_343(int iParam0){
if(iParam0==func_95()){
return 0;
}
if(func_358(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_344(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_346(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2794162.f_304==iParam0){
return 1;
}elseif(func_345(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_345(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2672524.f_221[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_346(int iParam0, int iParam1){
if(iParam1==0){
if(func_355(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_354();
break;
case joaat("sabregt"):
if(Global_262145.f_14909){
return func_353();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14910){
return func_353();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14908){
return func_353();
}
break;
case joaat("minivan"):
if(Global_262145.f_14911){
return func_353();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14913){
return func_353();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_352();
break;
case joaat("comet2"):
if(Global_262145.f_19321){
return func_351();
}
break;
case joaat("diablous"):
if(Global_262145.f_19323){
return func_351();
}
break;
case joaat("fcr"):
if(Global_262145.f_19327){
return func_351();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19324){
return func_351();
}
break;
case joaat("nero"):
if(Global_262145.f_19331){
return func_351();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19329){
return func_351();
}
break;
case joaat("specter"):
if(Global_262145.f_19334){
return func_351();
}
break;
case joaat("technical"):
if(Global_262145.f_21280){
return func_350();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21281){
return func_350();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_349();
break;
case joaat("glendale"):
if(func_349() || func_348()){
return 1;
}
break;
case joaat("impaler"):
return func_349();
break;
case joaat("issi3"):
return func_349();
break;
case joaat("gargoyle"):
return func_349();
break;
case joaat("dominator"):
return func_349();
break;
case joaat("dominator2"):
return func_349();
break;
case joaat("imperator"):
return func_349();
break;
case joaat("imperator2"):
return func_349();
break;
case joaat("imperator3"):
return func_349();
break;
case joaat("deathbike"):
return func_349();
break;
case joaat("deathbike2"):
return func_349();
break;
case joaat("deathbike3"):
return func_349();
break;
case joaat("impaler2"):
case joaat("brutus"):
case joaat("bruiser"):
case joaat("slamvan4"):
case joaat("issi4"):
case joaat("monster3"):
case joaat("scarab"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
return func_349();
break;
case joaat("youga2"):
if(Global_262145.f_29539){
return func_348();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29889){
return func_348();
}
break;
case joaat("manana"):
if(Global_262145.f_29538){
return func_348();
}
break;
case joaat("peyote"):
if(Global_262145.f_29888){
return func_348();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29887){
return func_348();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33358){
return func_347();
}
break;
case joaat("weevil"):
if(Global_262145.f_33357){
return func_347();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33350){
return func_347();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33359){
return func_347();
}
break;
}
return 0;
}


bool func_347(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_348(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_349(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_350(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_351(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_352(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_353(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_354(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_355(int iParam0, int iParam1){
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
if(!Global_262145.f_14909){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14910){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14908){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14911){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14913){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14912){
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
if(Global_262145.f_19321){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19323){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19327){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19324){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19331){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19329){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19334){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21280){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21281){
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

int func_356(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_95()){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_357(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_95()){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_358(int iParam0){
if(iParam0 !=func_95()){
if(func_331(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_330(Global_2657704[iParam0 /*463*/].f_321.f_7)==9;
}}}
return 0;
}

int func_359(int iParam0, bool bParam1, var uParam2){
bool bVar0;
if(!bParam1){
if((((((((((((((iParam0==joaat("police") || iParam0==joaat("policeold1")) || iParam0==joaat("policeold2")) || iParam0==joaat("police2")) || iParam0==joaat("police3")) || iParam0==joaat("police4")) || iParam0==joaat("fbi")) || iParam0==joaat("fbi2")) || iParam0==joaat("polmav")) || iParam0==joaat("policeb")) || iParam0==joaat("policet")) || iParam0==joaat("riot")) || iParam0==joaat("sheriff")) || iParam0==joaat("pranger")) || iParam0==joaat("sheriff2")){
*uParam2=1;
return 0;
}}
if(((((((iParam0==joaat("ambulance") || iParam0==joaat("firetruk")) || iParam0==joaat("taxi")) || iParam0==joaat("lguard")) || iParam0==joaat("ripley")) || iParam0==joaat("dilettante2")) || iParam0==joaat("airbus")) || iParam0==joaat("airtug")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("burrito") || iParam0==joaat("rumpo2")) || iParam0==joaat("speedo")) || iParam0==joaat("speedo2")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("scorcher") || iParam0==joaat("bmx")) || iParam0==joaat("cruiser")) || iParam0==joaat("fixter")){
*uParam2=2;
return 0;
}
if(((((((((((((((((((((iParam0==joaat("caddy") || iParam0==joaat("forklift")) || iParam0==joaat("caddy2")) || iParam0==joaat("crusader")) || iParam0==joaat("tribike")) || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")) || iParam0==joaat("tractor")) || iParam0==joaat("tractor2")) || iParam0==joaat("mower")) || iParam0==joaat("tornado4")) || iParam0==joaat("docktug")) || iParam0==joaat("stretch")) || iParam0==joaat("bison2")) || iParam0==joaat("bison3")) || iParam0==joaat("benson")) || iParam0==joaat("pounder")) || iParam0==joaat("submersible")) || iParam0==joaat("emperor3")) || iParam0==joaat("dune2")) || iParam0==-897824023) || iParam0==-1983622024){
*uParam2=2;
return 0;
}
bVar0=false;
if(func_336(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
bVar0=true;
}
if(((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 !=joaat("blazer")) && iParam0 !=joaat("blazer2")) && iParam0 !=joaat("blazer3")) && iParam0 !=joaat("blazer4")) && iParam0 !=joaat("blazer5")) && iParam0 !=joaat("chimera")) && iParam0 !=joaat("trailerlarge")) && iParam0 !=joaat("trailersmall2")) && iParam0 !=joaat("rrocket")) && iParam0 !=joaat("stryder")) && iParam0 !=joaat("verus")) && !bVar0){
*uParam2=2;
return 0;
}
if(iParam0==joaat("monster")){
*uParam2=2;
return 0;
}
if((iParam0==joaat("insurgent") || iParam0==joaat("technical")) || iParam0==joaat("limo2")){
*uParam2=2;
return 0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_360(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_360(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}


void func_361(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
Global_98144[iVar0]=iParam0;
Global_98154[iVar0]=iParam1;
Global_98164[iVar0]=ENTITY::GET_ENTITY_MODEL(iParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[iVar0])){
Global_98192[iParam1 /*3*/][0]=-1;
}else{
Global_98192[iParam1 /*3*/][1]=-1;
}
iVar0=9;
}
if(iVar0==8){
}
iVar0++;
}}


void func_362(var uParam0){
if(!func_363(*uParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113810.f_9088.f_99.f_58[119]);
}}


bool func_363(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_364(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_369(*uParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_355(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_367(*uParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_367(*uParam0, ((*uParam1)[38] - 1)), false);
}
func_366(uParam0);
if(func_365(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_365(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=0;
while (iVar0 < 49){
iVar1=iVar0;
if(((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21) || iVar1==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) !=-1){
StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
iVar2=MISC::GET_HASH_KEY(&cVar3);
if(iVar2 !=0){
if(iVar2==MISC::GET_HASH_KEY("MNU_CAGE") || iVar2==MISC::GET_HASH_KEY("SABRE_CAG")){
return 1;
}}}
iVar0++;
}}
return 0;
}


void func_366(var uParam0){
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
}else{
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
}
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}}

int func_367(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("tornado5"):
switch (iParam1){
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
return 4;
break;
}
break;
case joaat("faction3"):
return 3;
break;
}
iVar0=func_368(iParam0, 38) + 1;
iVar1=func_368(iParam0, 24) + 1;
fVar2=(to_float(iParam1 + 1) / to_float(iVar0));
iVar3=(floor((to_float(iVar1) * fVar2)) - 1);
if(iVar3 < 0){
iVar3=0;
}
if(iVar3 >=iVar0){
iVar3=(iVar0 - 1);
}
return iVar3;
}
return 0;
}

int func_368(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_369(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_369(int iParam0, int iParam1, int iParam2){
if(!func_370() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_370(){
return 0;
}

int func_371(var uParam0, var uParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113810.f_20121.f_261){
*uParam0={
Global_113810.f_20121.f_267 
};
*uParam1=Global_113810.f_20121.f_271;
return 1;
}
return 0;
}


void func_372(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10){
func_373(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}


void func_373(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10){
int iVar0;
bool bVar1;
bool bVar2;
int iVar3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
int iVar7;
int iVar8;
int iVar9;
if(bParam7){
bParam7=false;
}
bVar2=true;
iVar3=0;
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
iVar3=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(bParam10){
func_378(iVar0);
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, 0, 1, 0)){
bVar1=true;
}else{
Var6={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2)){
if(func_375(iVar0, Param0, Param1, fParam2)){
bVar1=true;
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f){
bVar1=true;
bVar2=false;
}}}}
if(bParam8){
if(func_305(iVar0, func_100(), 1)){
bVar1=false;
}}
if(bVar1){
if(!func_374(Param5)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar7=ENTITY::GET_ENTITY_MODEL(iVar0);
VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var5);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar7)){
Param5.f_0=(Param5.f_0 + 3f);
Param5.f_1=(Param5.f_1 + 3f);
}
if(((iVar7==joaat("zentorno") || iVar7==joaat("btype")) || iVar7==joaat("dubsta3")) || iVar7==joaat("monster")){
Param5={
Param5 * Vector(1.1f, 1.1f, 1.1f) 
};
}
elseif(iVar7==joaat("t20") || iVar7==joaat("virgo")){
Param5={
Param5 * Vector(1.2f, 1.2f, 1.2f) 
};
}
if((Var5.f_0 - Var4.f_0) > Param5.f_0){
bVar2=false;
}
elseif((Var5.f_1 - Var4.f_1) > Param5.f_1){
bVar2=false;
}
elseif((Var5.f_2 - Var4.f_2) > Param5.f_2){
bVar2=false;
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(bVar2){
MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_HEADING(iVar0, uParam4);
ENTITY::SET_ENTITY_COORDS(iVar0, Param3, 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
if(bParam9){
VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1, 0);
VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
}}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
}
VEHICLE::DELETE_VEHICLE(&iVar0);
}}}
if(bParam6){
MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, 0, 0, 0, 0, 0, 0, 0);
}
if(iVar3==1){
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
}}}}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
}
iVar8=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8)){
ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
}
iVar9=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar9 <=2){
iVar8=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8)){
ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
}}
if(iVar9 <=4){
iVar8=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8)){
ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
}
iVar8=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8)){
ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
}}
VEHICLE::DELETE_VEHICLE(&iVar0);
}}}

int func_374(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_375(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6[4];
struct<2> Var7;
struct<2> Var8;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Param1.f_2=Param2.f_2;
Var0={
func_377(Param1 - Param2) 
};
Var1={
Var0 
};
Var0.f_0=-Var1.f_1;
Var0.f_1=Var1.f_0;
Var0.f_2=0f;
Var2={
Param1 - Var0 * FtoV((fParam3 / 2f)) 
};
Var3={
Param1 + Var0 * FtoV((fParam3 / 2f)) 
};
Var4={
Param2 - Var0 * FtoV((fParam3 / 2f)) 
};
Var5={
Param2 + Var0 * FtoV((fParam3 / 2f)) 
};
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
Var6[0 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7.f_0, Var7.f_1, 0f) 
};
Var6[1 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7.f_0, Var8.f_1, 0f) 
};
Var6[2 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8.f_0, Var7.f_1, 0f) 
};
Var6[3 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8.f_0, Var8.f_1, 0f) 
};
if(((((((((((((((func_376(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_376(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_376(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_376(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_376(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_376(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_376(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_376(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_376(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_376(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_376(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_376(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_376(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_376(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_376(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_376(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4)){
return 1;
}}
return 0;
}

int func_376(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7){
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
float fVar10;
float fVar11;
float fVar12;
float fVar13;
fVar0=Param0.f_0;
fVar1=Param0.f_1;
fVar2=Param2.f_0;
fVar3=Param2.f_1;
fVar4=Param4.f_0;
fVar5=Param4.f_1;
fVar6=Param6.f_0;
fVar7=Param6.f_1;
fVar8=(fVar2 - fVar0);
fVar9=(fVar3 - fVar1);
fVar10=(fVar6 - fVar4);
fVar11=(fVar7 - fVar5);
fVar12=(((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
fVar13=(((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
if(((fVar12 >=0f && fVar12 <=1f) && fVar13 >=0f) && fVar13 <=1f){
return 1;
}
return 0;
}


Vector3 func__377(struct<3> Param0){
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


void func_378(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <=200f){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
}
if(VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <=700f){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
}
if(ENTITY::GET_ENTITY_HEALTH(iParam0) < 200){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
}}}}


Vector3 func__379(){
return 2.55f, 5.665f, 2.55f;
}

int func_380(int iParam0, int iParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
if(iParam1==145 || iParam1==Global_98154[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_309(iParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_381(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(iParam0==145 || Global_98154[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==func_309(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[iVar0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_98144[iVar0]));
Global_98154[iVar0]=145;
}}}}
iVar0++;
}}


void func_382(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
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


void func_383(int iParam0){
if(Global_97735 !=-1){
if(iParam0==Global_97735){
Global_97739=1;
return;
}}}


void func_384(){
int iVar0;
iVar0=func_103(PLAYER::PLAYER_PED_ID());
func_385(PLAYER::PLAYER_PED_ID(), &(Global_100237[iVar0 /*98*/]), &(Global_100540[iVar0 /*3*/]), &(Global_100550[iVar0]), &(Global_100532[iVar0]), &(Global_4542595[iVar0]));
}


void func_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
struct<3> Var4;
iVar0=0;
iVar1=0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
*uParam4=2;
}else{
iVar2=func_103(iParam0);
if(!ENTITY::IS_ENTITY_DEAD(Global_100536[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100536[iVar2], -1, 0)){
Var3={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var4={
ENTITY::GET_ENTITY_COORDS(Global_100536[iVar2], 1) 
};
if(ENTITY::GET_ENTITY_MODEL(Global_100536[iVar2])==joaat("luxor2")){
if(vdist(Var3, Var4) < 10f){
*uParam4=2;
iVar1=Global_100536[iVar2];
iVar0=1;
}
}}}}}}
func_386(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}


void func_386(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7){
int iVar0;
int iVar1;
struct<3> Var2;
struct<3> Var3;
int iVar4;
int iVar5;
int iVar6;
uParam2->f_97=0;
iVar0=145;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
iVar0=func_103(iParam0);
if(iVar0 > 3){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
}
return;
}
if(DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid")){
if(DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid")){
if((Global_113810.f_9088.f_99.f_58[45] || Global_113810.f_9088.f_99.f_58[12]) || Global_113810.f_9088.f_99.f_58[34]){
*uParam5=0;
Global_100536[iVar0]=0;
return;
}}}
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) || iParam7){
*uParam5=2;
Global_100536[iVar0]=iParam1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iParam1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
*uParam5=2;
Global_100536[iVar0]=iParam1;
}else{
iVar1=0;
while (iVar1 < 68){
if(iParam1==Global_77479.f_139[iVar1]){
*uParam5=0;
Global_100536[iVar0]=0;
return;
}
iVar1++;
}
if(!ENTITY::IS_ENTITY_DEAD(Global_100536[iVar0], 0)){
if(!func_305(Global_100536[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_100536[iVar0], 0)){
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var3={
ENTITY::GET_ENTITY_COORDS(Global_100536[iVar0], 1) 
};
if(func_387(iParam0, Global_100536[iVar0], 0)){
if(vdist2(Var2, Var3) < 22500f){
*uParam3={
Var3 
};
*uParam4=ENTITY::GET_ENTITY_HEADING(Global_100536[iVar0]);
*uParam5=1;
Global_100536[iVar0]=iParam1;
if(vdist2(Var2, Var3) < (1.5f * 1.5f)){
}
}}}else{
*uParam5=0;
Global_100536[iVar0]=0;
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
*uParam2=ENTITY::GET_ENTITY_MODEL(iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar5)){
uParam2->f_1=ENTITY::GET_ENTITY_MODEL(iVar5);
}
uParam2->f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
uParam2->f_3=ENTITY::GET_ENTITY_HEALTH(iParam1);
uParam2->f_4=VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
if(uParam2->f_4 > -1){
uParam2->f_9=1;
uParam2->f_5=-1;
uParam2->f_6=-1;
}else{
uParam2->f_9=0;
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
}
if(!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2)){
uParam2->f_10=1;
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
}else{
uParam2->f_10=0;
uParam2->f_7=-1;
uParam2->f_8=-1;
}
StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
uParam2->f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
uParam2->f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
uParam2->f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2)){
MISC::SET_BIT(&(uParam2->f_92), 28);
}else{
MISC::CLEAR_BIT(&(uParam2->f_92), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3)){
MISC::SET_BIT(&(uParam2->f_92), 29);
}else{
MISC::CLEAR_BIT(&(uParam2->f_92), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0)){
MISC::SET_BIT(&(uParam2->f_92), 30);
}else{
MISC::CLEAR_BIT(&(uParam2->f_92), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)){
MISC::SET_BIT(&(uParam2->f_92), 31);
}else{
MISC::CLEAR_BIT(&(uParam2->f_92), 31);
}
uParam2->f_89=VEHICLE::GET_VEHICLE_LIVERY(iParam1);
uParam2->f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
iVar4=0;
while (iVar4 < 12){
uParam2->f_11[iVar4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar4 + 1);
iVar4++;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 0)){
iVar6=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
if(iVar6==0 || iVar6==5){
uParam2->f_24=1;
}else{
uParam2->f_24=0;
}}else{
uParam2->f_24=0;
}
if(iParam0==PLAYER::PLAYER_PED_ID()){
uParam2->f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
}
func_319(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
uParam2->f_96=VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
uParam2->f_97=func_303(iParam1);
*uParam6=-1;
switch (iVar0){
case 0:
if(Global_113810.f_32752.f_69[0 /*78*/].f_66==ENTITY::GET_ENTITY_MODEL(iParam1)){
*uParam6=12;
}
break;
case 1:
if(Global_113810.f_32752.f_69[1 /*78*/].f_66==ENTITY::GET_ENTITY_MODEL(iParam1)){
*uParam6=13;
}
break;
case 2:
if(Global_113810.f_32752.f_69[2 /*78*/].f_66==ENTITY::GET_ENTITY_MODEL(iParam1)){
*uParam6=14;
}
break;
}}else{
*uParam5=0;
*uParam3={
0f, 0f, 0f 
};
*uParam4=0f;
*uParam2=0;
uParam2->f_1=0;
uParam2->f_2=0f;
uParam2->f_3=0;
uParam2->f_4=0;
uParam2->f_5=0;
uParam2->f_6=0;
uParam2->f_7=0;
uParam2->f_8=0;
uParam2->f_9=0;
uParam2->f_10=0;
iVar4=0;
while (iVar4 < uParam2->f_11){
uParam2->f_11[iVar4]=0;
iVar4++;
}
uParam2->f_24=0;
uParam2->f_25=0;
*uParam5=0;
*uParam6=-1;
uParam2->f_96=0f;
}}

int func_387(int iParam0, int iParam1, int iParam2){
int iVar0;
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
if(VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || (iVar0==joaat("submersible") || iVar0==joaat("submersible2"))){
if(ENTITY::IS_ENTITY_IN_WATER(iParam1)){
return 0;
}
return 1;
}
if((VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || iVar0==joaat("blimp")){
if(ENTITY::IS_ENTITY_IN_AIR(iParam1)){
return 0;
}
return 1;
}
return 1;
}
return 0;
}


void func_388(){
Global_100872=1;
}

int func_389(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_274(0)){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*iParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*iParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!func_150(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_390(iParam0, iParam4);
}}
return 2;
}


void func_390(var uParam0, int iParam1){
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


void func_391(var uParam0){
if(func_11(2, *uParam0)){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
func_70(uParam0, func_392(*uParam0));
func_86(2, *uParam0, 0);
}else{
func_122(uParam0);
func_86(2, *uParam0, 0);
}}}}

int func_392(int iParam0){
switch (iParam0){
case 0:
return func_408(18);
break;
case 1:
return func_408(22);
break;
case 2:
return func_408(40);
break;
case 3:
return func_408(8);
break;
case 4:
return func_408(26);
break;
default:
break;
}
return 0;
}


void func_393(var uParam0, float fParam1, float fParam2){
float fVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
fVar0=vdist2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
func_404(uParam0);
}elseif(fVar0 < (fParam1 * fParam1) || MISC::IS_BIT_SET(Global_96822, *uParam0)){
if(MISC::IS_BIT_SET(uParam0->f_449, 0)){
if(func_403(uParam0)){
if(MISC::IS_BIT_SET(Global_96822, *uParam0)){
if(MISC::IS_BIT_SET(Global_96824, *uParam0)){
func_398(uParam0);
}}else{
func_398(uParam0);
}}}else{
func_397(uParam0);
}}
if(fVar0 > (fParam2 * fParam2) && !MISC::IS_BIT_SET(Global_96822, *uParam0)){
if(MISC::IS_BIT_SET(uParam0->f_449, 0)){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
func_395(uParam0);
}
func_394(uParam0);
}}}}


void func_394(var uParam0){
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
if(uParam0->f_413 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));
}
if(uParam0->f_414 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));
}
HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
MISC::CLEAR_BIT(&Global_96823, *uParam0);
MISC::CLEAR_BIT(&(uParam0->f_449), false);
}


void func_395(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
if(MISC::IS_BIT_SET(uParam0->f_449, 2)){
func_70(uParam0, 0);
}}
func_396(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_449), true);
MISC::CLEAR_BIT(&Global_96822, *uParam0);
}}


void func_396(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < uParam0->f_1.f_33){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0])){
OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
}
iVar0++;
}}


void func_397(var uParam0){
if(!AUDIO::HAS_LOADED_SP_DATA_SET()){
return;
}
HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0, -1);
if(*uParam0 !=1){
STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
}
uParam0->f_413=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
uParam0->f_414=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
MISC::SET_BIT(&Global_96821, *uParam0);
MISC::SET_BIT(&(uParam0->f_449), false);
}


void func_398(var uParam0){
int iVar0;
if(!MISC::IS_BIT_SET(uParam0->f_449, 1)){
iVar0=0;
while (iVar0 < uParam0->f_1.f_96){
func_37(uParam0, iVar0);
iVar0++;
}
func_34(uParam0);
func_32(uParam0);
func_402(uParam0);
func_401(uParam0);
func_399(uParam0);
MISC::SET_BIT(&(uParam0->f_449), true);
}}


void func_399(var uParam0){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
struct<3> Var4;
iVar0=0;
while (iVar0 < uParam0->f_1.f_33){
if(func_33(*uParam0, uParam0->f_1.f_75[iVar0])){
switch ((iVar0 % 3)){
case 0:
iVar1=joaat("prop_ld_planning_pin_01");
break;
case 1:
iVar1=joaat("prop_ld_planning_pin_02");
break;
case 2:
iVar1=joaat("prop_ld_planning_pin_03");
break;
}
fVar2=(to_float((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
fVar3=(to_float((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
Var4={
func_400(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) 
};
uParam0->f_428[iVar0]=OBJECT::CREATE_OBJECT(iVar1, Var4, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], 1, 0);
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], 1);
ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], 0, 0);
ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], 1);
}
iVar0++;
}
MISC::CLEAR_BIT(&Global_96824, *uParam0);
}


Vector3 func__400(var uParam0, var uParam1){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
struct<3> Var7;
fVar0=uParam0->f_1.f_4;
fVar1=uParam0->f_1.f_5;
func_29(uParam0, uParam1, &fVar2, &fVar3);
fVar4=(fVar0 * (fVar2 - 0.5f));
fVar5=(-fVar1 * (fVar3 - 0.5f));
fVar6=uParam0->f_404;
Var7={
uParam0->f_401 
};
Var7={
Var7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) 
};
return Var7;
}


void func_401(var uParam0){
int iVar0;
int iVar1;
var uVar2;
bool bVar3;
iVar1=*uParam0;
iVar0=0;
while (iVar0 < uParam0->f_1.f_117){
uVar2=uParam0->f_1.f_186[iVar0];
bVar3=MISC::IS_BIT_SET(Global_113810.f_1.f_120[iVar1], uVar2);
if(uParam0->f_1.f_141[iVar0 /*2*/]==0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_141[iVar0 /*2*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar0++;
}}


void func_402(var uParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_14));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(uParam0->f_1.f_14.f_1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0=*uParam0;
iVar1=0;
iVar2=0;
while (iVar2 < uParam0->f_1.f_209){
if(func_33(iVar0, uParam0->f_1.f_248[iVar2])){
iVar3=0;
if(func_33(iVar0, uParam0->f_1.f_258[iVar2])){
iVar3=1;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
func_9(&(uParam0->f_1.f_211[iVar2 /*4*/]));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
bVar1++;
}
iVar2++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(func_33(*uParam0, uParam0->f_1.f_210)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_403(var uParam0){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413)){
return 0;
}
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414)){
return 0;
}
if(!HUD::HAS_ADDITIONAL_TEXT_LOADED(5)){
return 0;
}
if(AUDIO::HAS_LOADED_SP_DATA_SET()){
if(!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0, -1)){
return 0;
}}else{
return 0;
}
if(*uParam0 !=1){
if((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03"))){
return 0;
}}
MISC::SET_BIT(&Global_96823, *uParam0);
return 1;
}


void func_404(var uParam0){
float fVar0;
float fVar1;
if(func_33(*uParam0, 0)){
func_405(uParam0);
fVar0=(-uParam0->f_1.f_4 * 0.5f);
fVar1=(uParam0->f_1.f_5 * 0.5f);
GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * cos((90f - uParam0->f_404))), (fVar0 * sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
}}


void func_405(var uParam0){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
float fVar4;
float fVar5;
struct<3> Var6;
if(MISC::IS_BIT_SET(Global_96821, *uParam0)){
MISC::SET_BIT(&(uParam0->f_449), 16);
MISC::SET_BIT(&(uParam0->f_449), 15);
MISC::SET_BIT(&(uParam0->f_449), 14);
MISC::CLEAR_BIT(&Global_96821, *uParam0);
}
if(MISC::IS_BIT_SET(uParam0->f_449, 16)){
iVar0=0;
while (iVar0 < uParam0->f_1.f_117){
iVar1=uParam0->f_1.f_186[iVar0];
bVar2=func_33(*uParam0, iVar1);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0++;
}
MISC::CLEAR_BIT(&(uParam0->f_449), 16);
}
if(MISC::IS_BIT_SET(uParam0->f_449, 15)){
iVar0=0;
while (iVar0 < uParam0->f_1.f_33){
if(func_33(*uParam0, uParam0->f_1.f_75[iVar0])){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0])){
switch ((iVar0 % 3)){
case 0:
iVar3=joaat("prop_ld_planning_pin_01");
break;
case 1:
iVar3=joaat("prop_ld_planning_pin_02");
break;
case 2:
iVar3=joaat("prop_ld_planning_pin_03");
break;
}
fVar4=(to_float((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
fVar5=(to_float((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
Var6={
func_400(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) 
};
uParam0->f_428[iVar0]=OBJECT::CREATE_OBJECT(iVar3, Var6, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], 1, 0);
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], 1);
ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], 0, 0);
ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], 1);
}}elseif(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0])){
OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
}
iVar0++;
}
MISC::CLEAR_BIT(&(uParam0->f_449), 15);
}
if(MISC::IS_BIT_SET(uParam0->f_449, 14)){
func_406(uParam0);
func_34(uParam0);
func_402(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_449), 14);
}}


void func_406(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_407(int iParam0){
return Global_43377==iParam0;
}

int func_408(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_99.f_58[iParam0];
}


void func_409(bool bParam0){
if(bParam0){
Global_112831=0;
}else{
Global_112831=1;
}}


void func_410(bool bParam0, bool bParam1, bool bParam2){
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_1.f_120[bParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_1.f_120[bParam0]), bParam1);
}
MISC::SET_BIT(&Global_96821, bParam0);
}


void func_411(var uParam0, int iParam1){
struct<3> Var0;
float fVar1;
*uParam0=iParam1;
Var0={
Global_96759[uParam0->f_1.f_1 /*15*/].f_3 
};
fVar1=Global_96759[uParam0->f_1.f_1 /*15*/].f_6;
uParam0->f_401={
Var0 
};
uParam0->f_404=fVar1;
uParam0->f_405={
Var0 + Vector(0f, (-uParam0->f_1.f_8 * cos((360f - fVar1))), (-uParam0->f_1.f_8 * sin((360f - fVar1)))) 
};
uParam0->f_408={
-0.85f, 0f, fVar1 
};
MISC::SET_BIT(&(uParam0->f_449), 4);
uParam0->f_415=uParam0->f_1.f_96;
uParam0->f_416=-1;
MISC::CLEAR_BIT(&(uParam0->f_449), false);
MISC::CLEAR_BIT(&(uParam0->f_449), true);
MISC::CLEAR_BIT(&(uParam0->f_449), 2);
uParam0->f_464=0;
uParam0->f_451=-1;
}


void func_412(var uParam0, var uParam1){
func_422(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96.47825f, -1292.353f, 29.76875f, 5f, 5.5f, 6f);
func_421(uParam0, 1500, 540, 3.45f, 1.34f, 3.18f, 1.79f, 2.58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
func_420(uParam0, 18f, 17f, 19f);
func_419(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
func_418(uParam0, 1, "CRW_GM", "");
func_418(uParam0, 2, "CRW_KA", "");
func_418(uParam0, 3, "CRW_HW", "");
func_418(uParam0, 4, "CRW_NR", "");
func_418(uParam0, 5, "CRW_DJ", "");
func_418(uParam0, 6, "CRW_PH", "");
func_418(uParam0, 7, "CRW_CF", "");
func_418(uParam0, 8, "CRW_ET", "");
func_418(uParam0, 9, "CRW_KD", "");
func_418(uParam0, 10, "CRW_PM", "CRM_PM");
func_418(uParam0, 11, "", "CRM_CH");
func_418(uParam0, 12, "CRW_RL", "CRM_RL");
func_418(uParam0, 13, "CRW_TM", "CRM_TM");
func_417(uParam0, 24, "FHP18");
func_417(uParam0, 25, "FHP18b");
func_417(uParam0, 28, "FHP18c");
func_417(uParam0, 29, "FHP18d");
func_417(uParam0, 30, "FHP18e");
func_417(uParam0, 26, "FHP18f");
func_417(uParam0, 27, "FHP18g");
func_417(uParam0, 31, "FHP18h");
func_417(uParam0, 22, "FHP18i");
func_417(uParam0, 23, "FHP18j");
func_417(uParam0, 20, "FHP18k");
func_416(uParam0, 0, 1, 0, 0);
func_416(uParam0, 1, 1, 0, 0);
func_416(uParam0, 2, 1, 0, 0);
func_416(uParam0, 3, 1, 0, 0);
func_416(uParam0, 4, 1, 0, 0);
func_416(uParam0, 5, 1, 0, 0);
func_416(uParam0, 6, 1, 0, 0);
func_416(uParam0, 7, 1, 0, 0);
func_416(uParam0, 8, 1, 0, 0);
func_416(uParam0, 9, 1, 0, 0);
func_416(uParam0, 10, 1, 0, 0);
func_416(uParam0, 11, 1, 0, 0);
func_416(uParam0, 12, 1, 0, 0);
func_416(uParam0, 13, 1, 0, 0);
func_416(uParam0, 14, 1, 0, 0);
func_416(uParam0, 15, 1, 0, 0);
func_416(uParam0, 16, 1, 0, 0);
func_416(uParam0, 17, 1, 0, 0);
func_416(uParam0, 18, 1, 0, 0);
func_416(uParam0, 19, 1, 0, 0);
func_416(uParam0, 20, 1, 0, 0);
func_416(uParam0, 21, 1, 0, 0);
func_415(uParam0, 0, 0, "H_TD_RES");
func_415(uParam0, 0, 0, "H_TD_FLY");
func_415(uParam0, 0, 2, "H_TD_PLAN");
func_415(uParam0, 0, 10, "H_TD_CREW");
func_415(uParam0, 3, 5, "H_TD_STNG");
func_415(uParam0, 3, 6, "H_TD_CARS");
func_415(uParam0, 4, 7, "H_TD_DRIL");
func_415(uParam0, 4, 8, "H_TD_TRAI");
func_415(uParam0, 4, 9, "H_TD_GETA");
func_414(uParam0, 1, 142, 72);
func_414(uParam0, 1, 134, 244);
func_414(uParam0, 1, 262, 54);
func_414(uParam0, 1, 334, 206);
func_414(uParam0, 1, 547, 65);
func_414(uParam0, 1, 550, 200);
func_414(uParam0, 1, 453, 54);
func_414(uParam0, 1, 492, 242);
func_414(uParam0, 1, 731, 179);
func_414(uParam0, 1, 685, 81);
func_414(uParam0, 1, 828, 79);
func_414(uParam0, 1, 982, 167);
func_414(uParam0, 1, 1155, 70);
func_414(uParam0, 1, 1293, 60);
func_414(uParam0, 1, 1254, 191);
func_414(uParam0, 1, 1433, 84);
func_414(uParam0, 1, 1469, 172);
func_414(uParam0, 1, 952, 367);
func_414(uParam0, 1, 967, 469);
func_414(uParam0, 1, 1246, 374);
func_413(uParam0, 1, "FHP9", 777, 165, 1);
func_413(uParam0, 1, "FHP10", 970, 179, 1);
func_413(uParam0, 1, "FHP11", 1210, 184, 1);
func_413(uParam0, 1, "FHP12", 537, 168, 0);
func_413(uParam0, 1, "FHP13", 579, 229, 1);
func_413(uParam0, 1, "FHP14", 355, 228, 1);
func_413(uParam0, 1, "FHP15", 350, 117, 1);
}


void func_413(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5){
struct<2> Var0;
if(uParam0->f_369 < 7){
StringCopy(&Var0, sParam2, 8);
uParam0->f_386[uParam0->f_369]=iParam1;
uParam0->f_371[uParam0->f_369 /*2*/]=iParam3;
uParam0->f_371[uParam0->f_369 /*2*/].f_1=iParam4;
uParam0->f_280[uParam0->f_369 + 4 /*2*/]={
Var0 
};
if(bParam5){
MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
}
uParam0->f_369++;
}}


void func_414(var uParam0, int iParam1, int iParam2, int iParam3){
if(uParam0->f_33 < 20){
uParam0->f_75[uParam0->f_33]=iParam1;
uParam0->f_34[uParam0->f_33 /*2*/]=iParam2;
uParam0->f_34[uParam0->f_33 /*2*/].f_1=iParam3;
uParam0->f_33++;
}}


void func_415(var uParam0, int iParam1, int iParam2, char* sParam3){
struct<8> Var0;
if(uParam0->f_209 < 9){
StringCopy(&Var0, sParam3, 32);
uParam0->f_248[uParam0->f_209]=iParam1;
uParam0->f_258[uParam0->f_209]=iParam2;
MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]),{
Var0
}
, 4);
uParam0->f_209++;
}}


void func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(uParam0->f_117 < 22){
uParam0->f_118[uParam0->f_117]=iParam1;
uParam0->f_186[uParam0->f_117]=iParam2;
uParam0->f_141[uParam0->f_117 /*2*/]=iParam3;
uParam0->f_141[uParam0->f_117 /*2*/].f_1=iParam4;
uParam0->f_117++;
}}


void func_417(var uParam0, int iParam1, char* sParam2){
struct<2> Var0;
StringCopy(&Var0, sParam2, 8);
if(MISC::ARE_STRINGS_EQUAL(sParam2, "")){
return;
}
uParam0->f_304[iParam1 /*2*/]={
Var0 
};
}


void func_418(var uParam0, int iParam1, char* sParam2, char* sParam3){
struct<2> Var0;
struct<2> Var1;
StringCopy(&Var0, sParam2, 8);
StringCopy(&Var1, sParam3, 8);
uParam0->f_304[iParam1 /*2*/]={
Var0 
};
if(!MISC::ARE_STRINGS_EQUAL(sParam3, "")){
switch (iParam1){
case 10:
uParam0->f_304[14 /*2*/]={
Var1 
};
break;
case 13:
uParam0->f_304[16 /*2*/]={
Var1 
};
break;
case 12:
uParam0->f_304[15 /*2*/]={
Var1 
};
break;
case 11:
uParam0->f_304[17 /*2*/]={
Var1 
};
break;
default:
break;
}}}


void func_419(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8){
struct<4> Var0;
struct<4> Var1;
struct<4> Var2;
struct<4> Var3;
struct<2> Var4;
struct<2> Var5;
struct<2> Var6;
struct<2> Var7;
StringCopy(&Var0, sParam1, 16);
StringCopy(&Var1, sParam2, 16);
StringCopy(&Var2, sParam3, 16);
StringCopy(&Var3, sParam4, 16);
StringCopy(&Var4, sParam5, 8);
StringCopy(&Var5, sParam6, 8);
StringCopy(&Var6, sParam7, 8);
StringCopy(&Var7, sParam8, 8);
uParam0->f_20[0 /*4*/]={
Var0 
};
uParam0->f_20[1 /*4*/]={
Var1 
};
uParam0->f_108[0 /*4*/]={
Var2 
};
uParam0->f_108[1 /*4*/]={
Var3 
};
uParam0->f_280[1 /*2*/]={
Var4 
};
uParam0->f_280[2 /*2*/]={
Var5 
};
uParam0->f_280[0 /*2*/]={
Var6 
};
uParam0->f_280[3 /*2*/]={
Var7 
};
}


void func_420(var uParam0, float fParam1, float fParam2, float fParam3){
uParam0->f_9=fParam1;
uParam0->f_10=fParam2;
uParam0->f_11=fParam3;
}


void func_421(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25){
uParam0->f_2=iParam1;
uParam0->f_3=iParam2;
uParam0->f_4=fParam3;
uParam0->f_5=fParam4;
uParam0->f_6=fParam5;
uParam0->f_7=fParam6;
uParam0->f_8=fParam7;
uParam0->f_12=iParam8;
uParam0->f_12.f_1=iParam9;
uParam0->f_97[0 /*2*/]=iParam10;
uParam0->f_97[0 /*2*/].f_1=iParam11;
uParam0->f_97[1 /*2*/]=iParam12;
uParam0->f_97[1 /*2*/].f_1=iParam13;
uParam0->f_97[2 /*2*/]=iParam14;
uParam0->f_97[2 /*2*/].f_1=iParam15;
uParam0->f_97[3 /*2*/]=iParam16;
uParam0->f_97[3 /*2*/].f_1=iParam17;
uParam0->f_97[4 /*2*/]=iParam18;
uParam0->f_97[4 /*2*/].f_1=iParam19;
uParam0->f_16=iParam20;
uParam0->f_16.f_1=iParam21;
uParam0->f_18=iParam22;
uParam0->f_18.f_1=iParam23;
uParam0->f_14=iParam24;
uParam0->f_14.f_1=iParam25;
}


void func_422(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12){
uParam0->f_1=iParam1;
StringCopy(&(uParam0->f_268), sParam2, 16);
StringCopy(&(uParam0->f_272), sParam3, 16);
StringCopy(&(uParam0->f_276), sParam4, 8);
StringCopy(&(uParam0->f_278), sParam5, 8);
uParam0->f_29=iParam6;
uParam0->f_30[0]=iParam8;
uParam0->f_30[1]=iParam9;
uParam0->f_210=iParam7;
uParam0->f_96=uParam10;
uParam0->f_394={
Param11 
};
uParam0->f_397={
Param12 
};
}

int func_423(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam0;
}
return iParam1;
}

int func_424(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}


void func_425(){
while (!func_426(&Local_176)){
wait(0);
}
func_115(24, 0);
func_115(25, 0);
func_115(26, 0);
func_86(1, 4, 0);
func_86(2, 4, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_173, 0);
if(iLocal_174 !=-1){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_174)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_174);
}}
PED::CLEAR_PED_NON_CREATION_AREA();
PATHFIND::SET_PED_PATHS_IN_AREA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, 1, 0);
PLAYER::SET_MAX_WANTED_LEVEL(5);
if(iLocal_46 !=-1){
func_225(&iLocal_46);
}
CUTSCENE::REMOVE_CUTSCENE();
if(iLocal_44 !=-1){
func_160(&iLocal_44);
}
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_426(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_449, 1)){
func_395(uParam0);
}
if(MISC::IS_BIT_SET(uParam0->f_449, 0)){
func_394(uParam0);
}
return 1;
}