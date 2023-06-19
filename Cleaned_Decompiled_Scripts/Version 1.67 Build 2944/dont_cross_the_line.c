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
var uLocal_16=0;
var uLocal_17=0;
char* sLocal_18=NULL;
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
var uLocal_59=0;
var uLocal_60=0;
float fLocal_61=0f;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=-1;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
float fLocal_75=0f;
float fLocal_76=0f;
float fLocal_77=0f;
float fLocal_78=0f;
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
int iLocal_109=0;
var uLocal_110=0;
float fLocal_111=0f;
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
struct<6> Local_133[16];
var uLocal_134[4]={
0, 0, 0, 0 
};
int iLocal_135=0;
var uLocal_136=0;
int iLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
struct<16> Local_140[4];
struct<78> Local_141={
0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_142[4];
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
var uLocal_178=4;
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
var uLocal_189=2;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=-2147483647;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=60;
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
var uLocal_269=2;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=-2147483647;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=60;
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
var uLocal_349=2;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=-2147483647;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=60;
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
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=2;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=-2147483647;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=60;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=0;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=0;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=0;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
struct<21> Local_499={
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
sLocal_18="NULL";
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
fLocal_61=((0.05f + 0.275f) - 0.01f);
fLocal_75=3f;
fLocal_76=0f;
fLocal_77=2f;
fLocal_78=100f;
iLocal_109=-1;
fLocal_111=0.5f;
iLocal_135=-1;
iLocal_137=-1;
ScriptParam_499.f_0=211;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_220(ScriptParam_499);
}
func_219(1);
while (true){
func_218();
if(func_211()){
func_210();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_1(&uLocal_143);
}else{
func_210();
}}}


void func_1(var uParam0){
if(Local_141.f_0 < 11){
func_188(uParam0);
}
switch (*uParam0){
case 0:
if(Local_141.f_0 > 3 && !Local_141.f_0==9){
func_187(uParam0, 11);
return;
}
func_185(uParam0);
break;
case 1:
func_182(uParam0);
break;
case 2:
func_178(uParam0);
break;
case 3:
func_174(uParam0);
break;
case 4:
func_172(uParam0);
break;
case 5:
func_170(uParam0);
break;
case 6:
func_166(uParam0);
break;
case 7:
func_129(uParam0);
break;
case 8:
func_88(uParam0);
break;
case 9:
func_64(uParam0);
break;
case 10:
func_55(uParam0);
break;
case 11:
func_29(uParam0);
break;
}
switch (Local_141.f_0){
case 0:
func_28(uParam0);
break;
case 1:
func_27(uParam0);
break;
case 2:
func_26(uParam0);
break;
case 3:
func_25(uParam0);
break;
case 4:
func_23(uParam0);
break;
case 5:
func_22(uParam0);
break;
case 6:
func_18(uParam0);
break;
case 7:
func_17(uParam0);
break;
case 8:
func_13(uParam0);
break;
case 9:
func_4(uParam0);
break;
case 10:
break;
case 11:
break;
}
func_2(uParam0);
}


void func_2(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 5)){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
MISC::CLEAR_BIT(&(uParam0->f_2), 5);
if(((*uParam0 > 1 && *uParam0 < 11) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)) && !HUD::IS_PAUSE_MENU_ACTIVE()){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_34, 255, 255, 255, 255, 0);
}
if(MISC::IS_BIT_SET(uParam0->f_2, 17)){
func_3(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 17);
}}


void func_3(var uParam0){
GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0, 0);
}


void func_4(var uParam0){
bool bVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=true;
bVar1=false;
bVar2=false;
iVar3=0;
iVar4=0;
while (iVar4 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) && Local_142[iVar4 /*2*/] > -1){
if(!MISC::IS_BIT_SET(Local_142[iVar4 /*2*/].f_1, 6)){
bVar2=true;
}
if(MISC::IS_BIT_SET(Local_142[iVar4 /*2*/].f_1, 2)){
bVar1=true;
}
if(!MISC::IS_BIT_SET(Local_142[iVar4 /*2*/].f_1, 4)){
bVar0=false;
}
if(MISC::IS_BIT_SET(Local_142[iVar4 /*2*/].f_1, 3)){
iVar3++;
}}elseif(Local_141.f_7[iVar4] !=0){
Local_141.f_7[iVar4]=0;
}
iVar4++;
}
if((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1){
func_10(&(uParam0->f_28), 0, 0);
}else{
if((bVar2 || bVar1) || func_11(uParam0)){
func_9(&(uParam0->f_28));
}
if(((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1){
if(bVar0){
func_7(uParam0, 10);
return;
}elseif(!bVar1){
Local_141.f_77=0;
func_7(uParam0, 4);
Local_141.f_1=-1;
return;
}}}
if(!func_12(&(uParam0->f_26)) && !bVar2){
func_10(&(uParam0->f_26), 0, 0);
}else{
if(bVar2){
func_9(&(uParam0->f_26));
return;
}
if(func_8(&(uParam0->f_26), 10000, 0)){
if(iVar3 > 1){
func_6(0);
func_5(0, 0);
Local_141.f_77=0;
func_7(uParam0, 4);
}else{
func_7(uParam0, 10);
}}}}}


void func_5(bool bParam0, bool bParam1){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3, 0)){
MISC::SET_BIT(&Global_1935872, 7);
}
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), false);
}else{
if(bParam1){
if(MISC::IS_BIT_SET(Global_1935872, 4)){
MISC::CLEAR_BIT(&Global_1935872, 4);
}
if(MISC::IS_BIT_SET(Global_1935872, 0)){
MISC::SET_BIT(&Global_1935872, true);
MISC::CLEAR_BIT(&Global_1935872, 0);
}}
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 0);
}}


void func_6(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), true);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 1);
}}


void func_7(var uParam0, int iParam1){
uParam0->f_4=0;
Local_141.f_0=iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_10(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_9(var uParam0){
uParam0->f_1=0;
}


void func_10(var uParam0, bool bParam1, bool bParam2){
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

int func_11(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(!MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 6) && (*uParam0 !=9 || *uParam0 !=3)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_12(var uParam0){
return uParam0->f_1;
}


void func_13(var uParam0){
int iVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!func_12(&(uParam0->f_22))){
func_10(&(uParam0->f_22), 0, 0);
if(Local_141.f_1 !=-1){
Local_141.f_7[Local_141.f_1]++;
}
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
Local_141.f_7[iVar0]=0;
}
iVar0++;
}}elseif(func_8(&(uParam0->f_22), 3000, 0)){
bVar1=true;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(!MISC::IS_BIT_SET(Local_142[iVar0 /*2*/].f_1, 2)){
bVar1=false;
}else{
iVar0++;
}
if(bVar1){
func_14(uParam0);
func_5(1, 0);
func_7(uParam0, 9);
}}


void func_14(var uParam0){
int iVar0;
func_9(&(uParam0->f_12));
func_9(&(uParam0->f_16));
func_9(&(uParam0->f_18));
func_9(&(uParam0->f_20));
func_9(&(uParam0->f_22));
func_9(&(uParam0->f_26));
func_9(&(uParam0->f_28));
func_9(&(uParam0->f_30));
func_9(&(uParam0->f_24));
MISC::CLEAR_BIT(&(uParam0->f_2), 0);
MISC::CLEAR_BIT(&(uParam0->f_2), 1);
MISC::CLEAR_BIT(&(uParam0->f_2), 2);
MISC::CLEAR_BIT(&(uParam0->f_2), 3);
MISC::CLEAR_BIT(&(uParam0->f_2), 9);
MISC::CLEAR_BIT(&(uParam0->f_2), 8);
MISC::CLEAR_BIT(&(uParam0->f_2), 7);
MISC::CLEAR_BIT(&(uParam0->f_2), 10);
MISC::CLEAR_BIT(&(uParam0->f_2), 12);
MISC::CLEAR_BIT(&(uParam0->f_2), 6);
MISC::CLEAR_BIT(&(uParam0->f_2), 11);
MISC::CLEAR_BIT(&(uParam0->f_2), 13);
MISC::CLEAR_BIT(&(uParam0->f_2), 15);
MISC::CLEAR_BIT(&(uParam0->f_2), 16);
MISC::CLEAR_BIT(&(uParam0->f_2), 18);
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(iVar0 < 4){
uParam0->f_35[iVar0 /*80*/].f_3=0;
uParam0->f_35[iVar0 /*80*/].f_18=1f;
}
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
func_16(&(uParam0->f_35), 0, iVar0);
}else{
func_15(&(uParam0->f_35[iVar0 /*80*/].f_19));
func_16(&(uParam0->f_35), 3, iVar0);
}
iVar0++;
}}


void func_15(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=0f;
iVar0++;
}}


void func_16(var uParam0, int iParam1, int iParam2){
(*uParam0)[iParam2 /*80*/]=iParam1;
}


void func_17(var uParam0){
int iVar0;
int iVar1;
int iVar2;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar1=4;
iVar2=-1;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(uParam0->f_35[iVar0 /*80*/]==3){
iVar1=(iVar1 - 1);
}elseif(uParam0->f_35[iVar0 /*80*/]==2){
iVar2=iVar0;
}}else{
iVar1=(iVar1 - 1);
}
iVar0++;
}
if(iVar1 <=1){
if(!func_12(&(uParam0->f_24))){
func_10(&(uParam0->f_24), 0, 0);
}elseif(func_8(&(uParam0->f_24), 1000, 0)){
func_7(uParam0, 8);
}elseif(func_8(&(uParam0->f_24), 500, 0)){
if(iVar2 > -1){
Local_141.f_1=iVar2;
}}}}}


void func_18(var uParam0){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_12(&(uParam0->f_18))){
if(func_8(&(uParam0->f_18), 2000, 0) && !MISC::IS_BIT_SET(uLocal_136, 1)){
func_19(NETWORK::GET_NETWORK_TIME_ACCURATE() + 1250);
MISC::SET_BIT(&uLocal_136, true);
}
if(func_8(&(uParam0->f_18), 3000, 0)){
func_7(uParam0, 7);
MISC::CLEAR_BIT(&uLocal_136, 1);
}}}}


void func_19(var uParam0){
struct<3> Var0;
int iVar1;
Var0.f_0=443059258;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=uParam0;
iVar1=func_20(1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}


var func__20(int iParam0){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_21(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, iVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2){
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


void func_22(var uParam0){
int iVar0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar0=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
if(iVar0==1){
func_7(uParam0, 10);
return;
}
if(func_12(&(uParam0->f_16))){
if(func_8(&(uParam0->f_16), 2000, 0)){
func_7(uParam0, 6);
}}}}


void func_23(var uParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!func_12(&(uParam0->f_32))){
func_10(&(uParam0->f_32), 0, 0);
}elseif(func_8(&(uParam0->f_32), 1000, 0)){
iVar0=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
if(iVar0==1){
func_7(uParam0, 10);
return;
}
bVar4=true;
switch (Local_141.f_77){
case 0:
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/] > -1){
Local_141.f_2[iVar1]=Local_142[iVar1 /*2*/];
}
else{
Local_141.f_2[iVar1]=-1;
}
iVar1++;
}
Local_141.f_77=1;
break;
case 1:
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(Local_141.f_2[iVar1]==-1){
Local_141.f_2[iVar1]=func_24();
}
}
iVar1++;
}
Local_141.f_77=2;
break;
case 2:
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=0;
while (iVar2 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2))){
if(iVar2 !=iVar1 && (Local_141.f_2[iVar1]==Local_141.f_2[iVar2] || Local_141.f_2[iVar1]==-1)){
Local_141.f_2[iVar1]=-1;
Local_141.f_77=1;
return;
}}
iVar2++;
}
}
iVar1++;
}
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(Local_141.f_2[iVar1] !=-1){
iVar3=func_24();
if(iVar3 !=-1 && iVar3 < Local_141.f_2[iVar1]){
Local_141.f_2[iVar1]=iVar3;
return;
}}
}
iVar1++;
}
Local_141.f_77=3;
break;
case 3:
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(!MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 5)){
bVar4=false;
}
}
iVar1++;
}
if(bVar4){
func_9(&(uParam0->f_12));
func_9(&(uParam0->f_32));
func_7(uParam0, 5);
}
break;
}}}}

int func_24(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
iVar2=0;
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(Local_141.f_2[iVar1]==iVar0){
iVar2=1;
}else{
iVar1++;
}}
if(iVar2==0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_25(var uParam0){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar0=1;
bVar1=false;
iVar2=0;
while (iVar2 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && Local_142[iVar2 /*2*/] > -1){
if(!MISC::IS_BIT_SET(Local_142[iVar2 /*2*/].f_1, 6)){
bVar1=true;
}
if(MISC::IS_BIT_SET(Local_142[iVar2 /*2*/].f_1, 2)){
iVar0=0;
}}
iVar2++;
}
if((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1){
func_10(&(uParam0->f_14), 0, 0);
}else{
if(bVar1 || func_11(uParam0)){
func_9(&(uParam0->f_14));
return;
}
iVar3=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
iVar4=30000;
if(iVar3==1 && !func_11(uParam0)){
iVar4=(iVar4 / 2);
}
if((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), iVar4, 0)){
if(!func_12(&(uParam0->f_12))){
func_10(&(uParam0->f_12), 0, 0);
}elseif(func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0)){
func_9(&(uParam0->f_12));
if(iVar3==1){
func_7(uParam0, 10);
return;
}
Local_141.f_77=0;
func_7(uParam0, 4);
func_6(0);
func_5(0, 0);
}}}}}


void func_26(var uParam0){
bool bVar0;
int iVar1;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=true;
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/] > -1){
if(!MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 1)){
bVar0=false;
}else{
iVar1++;
}
if(bVar0){
func_7(uParam0, 3);
}}


void func_27(var uParam0){
bool bVar0;
int iVar1;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=true;
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/] > -1){
if(!MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 0)){
bVar0=false;
}else{
iVar1++;
}
if(bVar0){
func_7(uParam0, 2);
}}


void func_28(var uParam0){
int iVar0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(Local_142[iVar0 /*2*/]==-1){
return;
}}
iVar0++;
}
func_7(uParam0, 1);
}}


void func_29(var uParam0){
AUDIO::STOP_AUDIO_SCENE("DLC_Exec_Arc_Mac_Playing_Game_Scene");
AUDIO::STOP_SOUND(uParam0->f_3);
AUDIO::STOP_SOUND(uParam0->f_7);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::PARTICIPANT_ID_TO_INT() !=-1){
AUDIO::STOP_SOUND(uParam0->f_35[NETWORK::PARTICIPANT_ID_TO_INT() /*80*/].f_5);
}}
if(AUDIO::IS_STREAM_PLAYING()){
AUDIO::STOP_STREAM();
}
func_53();
Global_4718592.f_165275=0;
func_52();
MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 16);
func_51(0, 1, 1, 0);
func_50();
func_49();
HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_34));
}
if(func_47() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_32(PLAYER::PLAYER_ID(), 1, 0, 0);
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
func_31(1);
func_187(uParam0, 12);
func_219(0);
func_30();
}


void func_30(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_31(bool bParam0){
Global_1935872.f_1=0;
Global_1935872=0;
if(PLAYER::PLAYER_ID() !=-1){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3=0;
}
if(bParam0){
func_10(&(Global_1935872.f_2), 0, 0);
}else{
func_9(&(Global_1935872.f_2));
}}


void func_32(int iParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_46()){
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
if(!func_47()){
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
}elseif(bVar14 || ((!func_42(PLAYER::PLAYER_ID(), 0) && !func_41()) && !func_40(PLAYER::PLAYER_ID()))){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657704[iParam0 /*463*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_37(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_36(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27)){
PED::FINALIZE_HEAD_BLEND(uVar27);
}
PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_35();
func_34();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657704[iParam0 /*463*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635560.f_2781){
Global_2635560.f_2781=0;
}}else{
if(!func_36(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}}
if(func_33(Global_4718592.f_171044)){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
}}
if(Global_1575038){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
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


bool func_33(int iParam0){
return iParam0==17;
}


void func_34(){
struct<3> Var0;
Global_2672524.f_1024=0;
Global_2672524.f_1025=0;
Global_2672524.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672524.f_1031=-1;
Global_2672524.f_1032=0;
Global_2635560.f_2792={
Var0 
};
}


void func_35(){
Global_2635560.f_702=0;
Global_2635560.f_2835=0;
Global_2635560.f_515=0;
Global_2635560.f_606=0;
Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217=0;
Global_2635560.f_2790=0;
}

int func_36(var uParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_37(int iParam0, int iParam1, int iParam2){
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
func_39();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_42(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_38(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_38(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_39(){
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

int func_40(int iParam0){
if(func_42(iParam0, 0)){
return 1;
}
if(func_41()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_41(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_42(int iParam0, int iParam1){
bool bVar0;
if(!func_45(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_43(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_43(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_44();
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

int func_44(){
return Global_1574918;
}

int func_45(var uParam0){
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

int func_46(){
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216==-1){
return 1;
}
return 0;
}

int func_47(){
if(func_48()==0){
return 1;
}
return 0;
}

int func_48(){
return Global_1574632.f_18;
}


void func_49(){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("LineArcadeMinigame");
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM");
HUD::CLEAR_ADDITIONAL_TEXT(3, 0);
MISC::CLEAR_BIT(&Global_1935872, 6);
MISC::CLEAR_BIT(&Global_1935872, 7);
}


void func_50(){
if(Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=0;
}}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_52(){
if(Global_1936392){}
Global_1936392=0;
}


void func_53(){
if(!Global_1574747){
return;
}
func_54();
}


void func_54(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}


void func_55(var uParam0){
func_62(uParam0);
func_58(uParam0);
if(MISC::IS_BIT_SET(uParam0->f_2, 16)){
func_57(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 16);
}
if(AUDIO::HAS_SOUND_FINISHED(uParam0->f_7)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}
if(!func_12(&(uParam0->f_30))){
func_10(&(uParam0->f_30), 0, 0);
}elseif(func_8(&(uParam0->f_30), 5000, 0)){
func_187(uParam0, 11);
func_56(0);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
func_187(uParam0, 11);
func_56(0);
}}


void func_56(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 5);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 5);
}}


void func_57(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_LOBBY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_58(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 12)){
func_59(uParam0, "DCTL_GAMEOVER", 0, 1);
MISC::SET_BIT(&(uParam0->f_2), 12);
}}


void func_59(var uParam0, char* sParam1, int iParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_CENTRAL_MESSAGE");
func_61(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
func_60("");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_60(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_61(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_62(var uParam0){
int iVar0;
iVar0=255;
func_63(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0, 0);
}


void func_63(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_64(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_2, 15)){
func_87(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 15);
}
func_62(uParam0);
func_82(uParam0);
if(MISC::IS_PC_VERSION()){
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3)) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
func_81(3);
}elseif((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3)) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
func_81(4);
}}
if(func_80()){
func_6(1);
}
if(!MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 4)){
HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_REPLAYHELP", 0);
MISC::SET_BIT(&(uParam0->f_2), 5);
}}
func_66(uParam0, 1);
func_65(uParam0);
if(Local_141.f_0==10){
AUDIO::STOP_SOUND(uParam0->f_3);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_2), 4);
func_187(uParam0, 10);
func_56(1);
func_6(0);
func_5(0, 0);
}elseif(Local_141.f_0==4){
if(MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4) || MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 2)){
func_187(uParam0, 11);
return;
}
MISC::CLEAR_BIT(&uLocal_136, 0);
func_14(uParam0);
func_6(0);
func_5(0, 0);
MISC::SET_BIT(&(uParam0->f_2), 4);
func_187(uParam0, 4);
}}


void func_65(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(MISC::IS_BIT_SET(Local_142[iVar0 /*2*/].f_1, 3) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 2)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
if(MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 3)){
MISC::CLEAR_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
}}elseif(MISC::IS_BIT_SET(Local_142[iVar0 /*2*/].f_1, 4) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
if(MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 2)){
MISC::CLEAR_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
}}}
iVar0++;
}}


void func_66(var uParam0, bool bParam1){
int iVar0;
int iVar1;
if(Local_141.f_2[iLocal_135] !=Local_142[iLocal_135 /*2*/]){
Local_142[iLocal_135 /*2*/]=Local_141.f_2[iLocal_135];
}
if(!MISC::IS_BIT_SET(uLocal_136, 2)){
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(Local_142[iVar0 /*2*/] > -1 && (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_141.f_12[iVar0 /*16*/])) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140[iVar0 /*16*/])))){
MISC::SET_BIT(&uLocal_136, 2);
}}elseif(!(MISC::IS_STRING_NULL_OR_EMPTY(&(Local_141.f_12[iVar0 /*16*/])) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140[iVar0 /*16*/])))){
MISC::SET_BIT(&uLocal_136, 2);
}
iVar0++;
}}
if(MISC::IS_BIT_SET(uLocal_136, 2)){
func_72();
iVar1=1;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if((Local_142[iVar0 /*2*/]==-1 || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_141.f_12[iVar0 /*16*/]))) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140[iVar0 /*16*/]))){
iVar1=0;
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_141.f_12[iVar0 /*16*/])) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140[iVar0 /*16*/]))){
iVar1=0;
}
iVar0++;
}
if(iVar1==1){
if(bParam1){
func_67(uParam0, "DCTL_REPLAY", 0);
}else{
func_67(uParam0, "DCTL_INSERT", 0);
}
MISC::CLEAR_BIT(&uLocal_136, 2);
}}}


void func_67(var uParam0, char* sParam1, int iParam2){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "INIT_LOBBY");
func_61(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
func_68(0);
func_68(1);
func_68(2);
func_68(3);
if(iLocal_135 > -1 && Local_142[iLocal_135 /*2*/] > -1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_142[iLocal_135 /*2*/]);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_68(int iParam0){
struct<16> Var0;
struct<16> Var1;
Var0={
func_71(iParam0) 
};
Var1={
func_69(iParam0) 
};
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&Var1);
func_60(&Var0);
}
struct<16> func_69(int iParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, func_70(), 64);
iVar1=0;
while (iVar1 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/]==iParam0){
Var0={
Local_140[iVar1 /*16*/] 
};
}
iVar1++;
}
return Var0;
}


var func__70(){
var uVar0;
return uVar0;
}
struct<16> func_71(int iParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=0;
while (iVar1 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/]==iParam0){
Var0={
Local_141.f_12[iVar1 /*16*/] 
};
}
iVar1++;
}
return Var0;
}


void func_72(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(iVar0 < 4){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
StringCopy(&(Local_141.f_12[iVar0 /*16*/]), "", 64);
}
StringCopy(&(Local_140[iVar0 /*16*/]), func_70(), 64);
}
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
StringCopy(&(Local_141.f_12[iVar0 /*16*/]), PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))), 64);
}
iVar1=func_73(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
if(iVar1 !=0){
StringCopy(&(Local_140[iVar0 /*16*/]), PED::GET_PEDHEADSHOT_TXD_STRING(iVar1), 64);
}}
iVar0++;
}}

int func_73(int iParam0){
int iVar0;
iVar0=func_76(iParam0);
if(iVar0==-1){
func_74(iParam0, 1);
return 0;
}
Global_1666485[iVar0 /*5*/].f_4=1;
return Global_1666485[iVar0 /*5*/].f_2;
}


void func_74(int iParam0, bool bParam1){
if(!func_21(iParam0, 0, 1)){
return;
}
if(func_76(iParam0) !=-1){
return;
}
if(Global_1666648){
if(iParam0==Global_1666648.f_1){
return;
}}
if(func_75(iParam0)){
return;
}
if(Global_1666686 >=32){
return;
}
Global_1666653[Global_1666686]=iParam0;
Global_1666686++;
if(bParam1){}}

int func_75(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666686){
if(Global_1666653[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_76(int iParam0){
int iVar0;
if(!func_21(iParam0, 0, 1)){
return -1;
}
if(Global_1666646==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666646){
if(Global_1666485[iVar0 /*5*/].f_1==iParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2)){
return iVar0;
}
func_77(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_77(int iParam0){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
if(iParam0 >=Global_1666646){
return;
}
if(PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
if(Global_1666485[iParam0 /*5*/].f_2 !=0){
StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
}
iVar2=iParam0;
iVar3=iVar2 + 1;
while (iVar3 < Global_1666646){
Global_1666485[iVar2 /*5*/]={
Global_1666485[iVar3 /*5*/] 
};
iVar2++;
iVar3++;
}
func_78(&(Global_1666485[iVar2 /*5*/]));
Global_1666646=(Global_1666646 - 1);
}


void func_78(var uParam0){
*uParam0=0;
uParam0->f_1=func_79();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}

int func_79(){
return -1;
}

int func_80(){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 3)){
iVar0++;
}}
iVar1++;
}
if(iVar0 > 1){
return 1;
}
return 0;
}


void func_81(bool bParam0){
MISC::CLEAR_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 2);
MISC::CLEAR_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 3);
MISC::CLEAR_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 4);
MISC::SET_BIT(&(Local_142[iLocal_135 /*2*/].f_1), iParam0);
}


void func_82(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 16)){
func_67(uParam0, "DCTL_REPLAY", 0);
MISC::SET_BIT(&(uParam0->f_2), 16);
}
func_85(uParam0);
func_83(uParam0);
}


void func_83(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_MICS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_84(0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_84(1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_84(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_84(3));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_84(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/]==iParam0){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(!NETWORK::NETWORK_PLAYER_HAS_HEADSET(iVar1)){
return 0;
}
if(NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(iVar1)){
return 1;
}
if(NETWORK::NETWORK_IS_PLAYER_TALKING(iVar1)){
return 3;
}
return 2;
}
iVar0++;
}
return 0;
}


void func_85(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "UPDATE_LOBBY");
func_86(0);
func_86(1);
func_86(2);
func_86(3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_86(int iParam0){
bool bVar0;
int iVar1;
bVar0=false;
iVar1=0;
while (iVar1 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/]==iParam0){
bVar0=true;
if(MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 3)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
}elseif(MISC::IS_BIT_SET(Local_142[iVar1 /*2*/].f_1, 4)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}}
iVar1++;
}
if(!bVar0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}}


void func_87(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_HUD");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_88(var uParam0){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(uParam0->f_2, 15)){
func_87(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 15);
}
func_62(uParam0);
func_126(uParam0);
if(Local_141.f_0 >=9){
func_5(1, 0);
if(AUDIO::HAS_SOUND_FINISHED(uParam0->f_3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}
iVar0=func_125(3793, -1);
iVar0++;
func_123(3793, iVar0, -1, 1);
if(Local_141.f_1==iLocal_135){
iVar1=func_125(3792, -1);
iVar1++;
func_123(3792, iVar1, -1, 1);
if(iVar1 >=Global_262145.f_16948){
func_122(7551, 1, -1);
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==joaat("mp_m_freemode_01")){
func_89(func_121(joaat("MP_exec_prizes_015_M"), 3), 1, 1, 0, 0, -1);
}else{
func_89(func_121(joaat("MP_exec_prizes_015_F"), 4), 1, 1, 0, 0, -1);
}}}
func_72();
func_187(uParam0, 9);
}
if(!MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 2)){
func_81(2);
}}


void func_89(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(iParam4 || bParam1){
if((((((iParam0 !=87 && iParam0 !=89) && iParam0 !=88) && iParam0 !=13) && iParam0 !=14) && iParam0 !=15) && iParam0 !=16){
if(iParam0 !=71 && iParam0 !=72){
func_120(1239, iParam5);
}}else{
func_120(1239, iParam5);
}}
if(bParam1){
if(!func_119(iParam0, iParam5)){
func_116(iParam0, 1, iParam5);
}
if(iParam2 && iParam0 < 129){
if(func_114(iParam0)==0){
func_108(12, func_113(iParam0, 3), func_112(iParam0, 3), func_111(iParam0, 3), func_110(iParam0, 3), -1, 0, 0, 0, -1, 0);
func_107(iParam0, 1);
}}
if(bParam3){
func_102(iParam0, 1, iParam5);
}
if(Global_1654054.f_1043==0){
Global_1654054.f_1044=iParam0;
}}else{
if(func_119(iParam0, iParam5)){
func_116(iParam0, 0, iParam5);
func_100(1239, -1, iParam5);
}
if(iParam0 < 129){
if(func_114(iParam0)==1){
func_107(iParam0, 0);
}}
if(func_99(iParam0, iParam5)){
func_90(iParam0, 0, iParam5);
}}}


void func_90(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_99(iParam0, iParam2)){
func_91(iParam0, 1, iParam2);
}}elseif(func_99(iParam0, iParam2)){
func_91(iParam0, 0, iParam2);
}}


void func_91(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_98(iParam0, iParam2);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_97(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_97(iVar1));
}
if(!func_96(0)){
iVar2=func_92(iParam0);
if(iVar2 !=14385){
func_123(iVar2, iVar0, iParam2, 1);
}}}}

int func_92(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_95(iVar0);
if((func_94()==0 || func_93()==0) || (func_94()==999 && func_93()==999)){
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
return 14385;
}
if(func_94()==2 && func_93()==2){
return 14385;
}
return 14385;
}

int func_93(){
return Global_32284;
}

int func_94(){
return Global_32283;
}

int func_95(int iParam0){
return (iParam0 / 32);
}


bool func_96(bool bParam0){
if(bParam0){}
return Global_1575038;
}

int func_97(int iParam0){
return (iParam0 % 32);
}

int func_98(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=func_92(iParam0);
if(iVar0==14385){
if(func_94()==2 && func_93()==2){
return 0;
}else{
return 0;
}}
uVar1=func_125(iVar0, iParam1);
return uVar1;
}

int func_99(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_98(iParam0, iParam1);
iVar1=func_97(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}


void func_100(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_125(iParam0, func_101(iParam2));
iVar0=(iVar0 + iParam1);
func_123(iParam0, iVar0, iParam2, 1);
}

int func_101(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_44();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


void func_102(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_106(iParam0)){
func_103(iParam0, 1, iParam2);
}}elseif(func_106(iParam0)){
func_103(iParam0, 0, iParam2);
}}


void func_103(var uParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_105(uParam0);
iVar1=uParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_97(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_97(iVar1));
}
func_123(func_104(uParam0), iVar0, iParam2, 1);
}}

int func_104(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_95(iVar0);
if((func_94()==0 || func_93()==0) || (func_94()==999 && func_93()==999)){
switch (iVar1){
case 0:
return 1044;
break;
case 1:
return 1045;
break;
case 2:
return 1046;
break;
case 3:
return 1047;
break;
case 4:
return 1048;
break;
case 5:
return 1492;
break;
case 6:
return 1493;
break;
case 7:
return 1494;
break;
case 8:
return 1495;
break;
case 9:
return 1945;
break;
case 10:
return 1946;
break;
case 11:
return 1947;
break;
case 12:
return 1948;
break;
case 13:
return 2426;
break;
case 14:
return 2446;
break;
case 15:
return 2449;
break;
case 16:
return 2452;
break;
case 17:
return 2616;
break;
case 18:
return 2619;
break;
case 19:
return 2622;
break;
case 20:
return 3788;
break;
case 21:
return 3791;
break;
case 22:
return 3866;
break;
case 23:
return 3869;
break;
case 24:
return 3872;
break;
case 25:
return 3875;
break;
case 26:
return 5366;
break;
case 27:
return 5369;
break;
case 28:
return 5471;
break;
case 29:
return 5474;
break;
case 30:
return 6433;
break;
case 31:
return 6436;
break;
case 32:
return 7257;
break;
case 33:
return 7260;
break;
case 34:
return 7263;
break;
case 35:
return 7972;
break;
case 36:
return 7975;
break;
case 37:
return 7978;
break;
case 38:
return 7981;
break;
case 39:
return 8503;
break;
case 40:
return 8506;
break;
case 41:
return 8509;
break;
case 42:
return 8512;
break;
case 43:
return 8908;
break;
case 44:
return 8911;
break;
case 45:
return 8914;
break;
case 46:
return 10289;
break;
case 47:
return 10292;
break;
case 48:
return 10415;
break;
case 49:
return 10418;
break;
case 50:
return 11826;
break;
case 51:
return 11829;
break;
}}
return 14385;
}


var func__105(var uParam0){
var uVar0;
uVar0=func_125(func_104(uParam0), -1);
return uVar0;
}


bool func_106(var uParam0){
var uVar0;
int iVar1;
uVar0=func_105(uParam0);
iVar1=uParam0;
return MISC::IS_BIT_SET(uVar0, func_97(iVar1));
}


void func_107(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 > -1){
if(bParam1){
MISC::SET_BIT(&(Global_2804776.f_1032[func_95(iVar0)]), func_97(iVar0));
}else{
MISC::CLEAR_BIT(&(Global_2804776.f_1032[func_95(iVar0)]), func_97(iVar0));
}}}


void func_108(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_109(&Global_1662687);
Global_1662687[iVar0 /*106*/]=iParam0;
StringCopy(&(Global_1662687[iVar0 /*106*/].f_17), sParam3, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_1), sParam4, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_33), sParam1, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_49), sParam2, 64);
Global_1662687[iVar0 /*106*/].f_97=iParam5;
Global_1662687[iVar0 /*106*/].f_104=iParam9;
Global_1662687[iVar0 /*106*/].f_105=iParam10;
if(iParam6 !=0){}
if(iParam7 !=0){}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
StringCopy(&(Global_1662687[iVar0 /*106*/].f_98), sParam8, 24);
}}

int func_109(var uParam0){
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


char* func_110(int iParam0, int iParam1){
char* sVar0;
sVar0="MPTATTOOS";
if(iParam0==iParam0){}
if(iParam1==iParam1){}
switch (iParam0){
case 56:
return "MPTattoos3";
break;
case 89:
return "MPTSHIRTAWARDS";
break;
case 88:
return "MPTSHIRTAWARDS";
break;
case 87:
return "MPTSHIRTAWARDS";
break;
case 57:
return "MPTattoos2";
break;
case 58:
return "MPTattoos2";
break;
case 59:
return "MPTattoos2";
break;
case 60:
return "MPTattoos2";
break;
case 12:
case 55:
case 49:
case 48:
case 46:
case 45:
case 34:
case 65:
case 25:
return "MPTattoos3";
break;
}
return sVar0;
}


char* func_111(int iParam0, int iParam1){
char* sVar0;
sVar0="";
if(iParam0==iParam0){}
if(iParam1==iParam1){}
switch (iParam0){
case 56:
return "TATTOO_WIN_PARLEY";
break;
case 57:
return "TATTOO_HOLD_UP_SHOPS_10";
break;
case 58:
return "TATTOO_HOLD_UP_SHOPS_25";
break;
case 59:
return "TATTOO_HOLD_UP_SHOPS_50";
break;
case 60:
return "TATTOO_HOLD_UP_SHOPS_100";
break;
case 0:
return "HeadBanger";
break;
case 1:
return "theslayer";
break;
case 2:
return "clearout";
break;
case 4:
return "thehustler";
break;
case 3:
return "armoredvantakedowns";
break;
case 54:
return "wineverymodeonce";
break;
case 5:
return "killplayerbountyhead";
break;
case 6:
return "holdworldrecord";
break;
case 55:
return "MP_FM_Tat_Award_008";
break;
case 7:
return "getrevengekills";
break;
case 8:
return "kill3otherracers";
break;
case 9:
return "reachrank1";
break;
case 10:
return "reachrank2";
break;
case 11:
return "reachrank3";
break;
case 13:
return "HeadBanger";
break;
case 14:
return "HeadBanger";
break;
case 15:
return "HeadBanger";
break;
case 16:
return "HeadBanger";
break;
case 89:
return "RockstarVerifiied";
break;
case 87:
return "ReachHordeModeWave";
break;
case 12:
return "TATTOO_RACES_WON";
break;
}
switch (iParam0){
case 17:
return "Headbanger";
break;
case 18:
return "Headbanger";
break;
case 19:
return "Headbanger";
break;
case 20:
return "Headbanger";
break;
case 21:
return "Headbanger";
break;
case 22:
return "Headbanger";
break;
case 23:
return "Headbanger";
break;
case 24:
return "Headbanger";
break;
case 25:
return "MP_FM_Tat_002";
break;
case 26:
return "Headbanger";
break;
case 27:
return "Headbanger";
break;
case 28:
return "Headbanger";
break;
case 61:
return "Headbanger";
break;
case 62:
return "Headbanger";
break;
case 63:
return "Headbanger";
break;
case 64:
return "Headbanger";
break;
case 65:
return "MP_FM_Tat_019";
break;
case 29:
return "Headbanger";
break;
case 30:
return "Headbanger";
break;
case 31:
return "Headbanger";
break;
case 66:
return "Headbanger";
break;
case 32:
return "Headbanger";
break;
case 33:
return "Headbanger";
break;
case 34:
return "MP_FM_Tat_023";
break;
case 35:
return "Headbanger";
break;
case 36:
return "Headbanger";
break;
case 37:
return "Headbanger";
break;
case 38:
return "Headbanger";
break;
case 39:
return "Headbanger";
break;
case 40:
return "Headbanger";
break;
case 67:
return "Headbanger";
break;
case 41:
return "Headbanger";
break;
case 68:
return "Headbanger";
break;
case 42:
return "Headbanger";
break;
case 43:
return "Headbanger";
break;
case 44:
return "Headbanger";
break;
case 45:
return "MP_FM_Tat_036";
break;
case 46:
return "MP_FM_Tat_037";
break;
case 47:
return "Headbanger";
break;
case 48:
return "MP_FM_Tat_039";
break;
case 49:
return "MP_FM_Tat_040";
break;
case 50:
return "Headbanger";
break;
case 51:
return "Headbanger";
break;
case 52:
return "Headbanger";
break;
case 53:
return "Headbanger";
break;
case 69:
return "Headbanger";
break;
}
return sVar0;
}


char* func_112(int iParam0, int iParam1){
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


char* func_113(int iParam0, int iParam1){
char* sVar0;
sVar0="";
if(iParam0==iParam0){}
if(iParam1==iParam1){}
switch (iParam0){
case 0:
return "TAT_FM_HEADBANG";
break;
case 2:
return "TAT_CLEAROUT";
break;
case 9:
return "TAT_FM_RANK1";
break;
case 10:
return "TAT_FM_RANK2";
break;
case 11:
return "TAT_FM_RANK3";
break;
case 4:
return "TAT_FM_HUST";
break;
case 1:
return "TAT_FM_SLAY";
break;
case 54:
return "TAT_FM_EVERMODE1";
break;
case 3:
return "TAT_FM_ARVANTAKE";
break;
case 7:
return "TAT_FM_REVENKIL";
break;
case 5:
return "TAT_FM_KILb";
break;
case 8:
return "TAT_FM_KIL3RACE";
break;
case 6:
return "TAT_FM_RECHOLD";
break;
case 12:
return "TAT_RACE50";
break;
case 13:
return "TAT_CRANKA";
break;
case 14:
return "TAT_CRANKB";
break;
case 15:
return "TAT_CRANKC";
break;
case 16:
return "TAT_CRANKD";
break;
case 87:
return "TAT_FM_REDSKULL";
break;
case 88:
return "TAT_FM_BELLE";
break;
case 89:
return "TAT_FM_ROCKSTAR";
break;
case 55:
return "TAT_FM_MODDED";
break;
case 17:
return "TAT_FM_TAT1";
break;
case 18:
return "TAT_FM_TAT2";
break;
case 19:
return "TAT_FM_TAT3";
break;
case 20:
return "TAT_FM_TAT4";
break;
case 21:
return "TAT_FM_TAT5";
break;
case 22:
return "TAT_FM_TAT6";
break;
case 56:
return "TAT_CHEATER";
break;
}
switch (iParam0){
case 23:
return "TAT_FM_TAT7";
break;
case 24:
return "TAT_FM_TAT8";
break;
case 25:
return "TAT_FM_TAT9";
break;
case 26:
return "TAT_FM_TAT10";
break;
case 27:
return "TAT_FM_TAT11";
break;
case 28:
return "TAT_FM_TAT12";
break;
case 61:
return "TAT_FM_TAT13";
break;
case 62:
return "TAT_FM_TAT14";
break;
case 63:
return "TAT_FM_TAT15";
break;
case 64:
return "TAT_FM_TAT16";
break;
case 65:
return "TAT_FM_TAT38";
break;
case 29:
return "TAT_FM_TAT18";
break;
case 30:
return "TAT_FM_TAT19";
break;
case 31:
return "TAT_FM_TAT20";
break;
case 66:
return "TAT_FM_TAT21";
break;
case 32:
return "TAT_FM_TAT22";
break;
case 33:
return "TAT_FM_TAT23";
break;
case 34:
return "TAT_FM_TAT24";
break;
case 35:
return "TAT_FM_TAT25";
break;
case 36:
return "TAT_FM_TAT26";
break;
case 37:
return "TAT_FM_TAT27";
break;
case 38:
return "TAT_FM_TAT28";
break;
case 39:
return "TAT_FM_TAT29";
break;
case 40:
return "TAT_FM_TAT30";
break;
case 67:
return "TAT_FM_TAT31";
break;
case 41:
return "TAT_FM_TAT32";
break;
case 68:
return "TAT_FM_TAT33";
break;
case 42:
return "TAT_FM_TAT34";
break;
case 43:
return "TAT_FM_TAT35";
break;
case 44:
return "TAT_FM_TAT36";
break;
case 45:
return "TAT_FM_TAT37";
break;
case 46:
return "TAT_FM_TAT41";
break;
case 47:
return "TAT_FM_TAT39";
break;
case 48:
return "TAT_FM_TAT40";
break;
case 49:
return "TAT_FM_TAT17";
break;
case 50:
return "TAT_FM_TAT42";
break;
case 51:
return "TAT_FM_TAT43";
break;
case 52:
return "TAT_FM_TAT44";
break;
case 53:
return "TAT_FM_TAT45";
break;
case 69:
return "TAT_FM_TAT46";
break;
case 57:
return "TAT_HOLDUP1V";
break;
case 58:
return "TAT_HOLDUP5V";
break;
case 59:
return "TAT_HOLDUP10V";
break;
case 60:
return "TAT_HOLDUP20V";
break;
}
return sVar0;
}

int func_114(int iParam0){
var uVar0;
int iVar1;
uVar0=func_115(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_97(iVar1));
}


var func__115(int iParam0){
var uVar0;
uVar0=Global_2804776.f_1032[func_95(iParam0)];
return uVar0;
}


void func_116(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
if(func_118(iParam0)==14385){
return;
}
iVar0=func_117(iParam0, -1);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_97(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_97(iVar1));
}
func_123(func_118(iParam0), iVar0, iParam2, 1);
}}


var func__117(var uParam0, int iParam1){
var uVar0;
uVar0=func_125(func_118(uParam0), iParam1);
return uVar0;
}

int func_118(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_95(iVar0);
if((func_94()==0 || func_93()==0) || (func_94()==999 && func_93()==999)){
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
return 14385;
}

int func_119(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_118(iParam0)==14385){
return 0;
}
uVar0=func_117(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_97(iVar1));
}


void func_120(int iParam0, int iParam1){
int iVar0;
iVar0=func_125(iParam0, func_101(iParam1));
iVar0++;
func_123(iParam0, iVar0, iParam1, 1);
}

int func_121(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}


void func_122(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_44();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_123(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_124(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__124(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_101(uParam1));
}

int func_125(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_124(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_126(var uParam0){
struct<16> Var0;
int iVar1;
if(Local_141.f_1 !=-1){
if(!MISC::IS_BIT_SET(uParam0->f_2, 11)){
Var0={
func_71(Local_142[Local_141.f_1 /*2*/]) 
};
iVar1=func_128(Local_142[Local_141.f_1 /*2*/]);
func_127(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar1);
MISC::SET_BIT(&(uParam0->f_2), 11);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_2, 11)){
func_59(uParam0, "DCTL_DRAW", 0, 1);
MISC::SET_BIT(&(uParam0->f_2), 11);
}}


void func_127(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_CENTRAL_MESSAGE");
func_61(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
func_60(sParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_128(int iParam0){
switch (iParam0){
case 0:
return 211;
case 1:
return 213;
case 2:
return 210;
case 3:
return 209;
default:
}
return 0;
}


void func_129(var uParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
uParam0->f_35[iVar0 /*80*/].f_8=uParam0->f_35[iVar0 /*80*/].f_2;
uParam0->f_35[iVar0 /*80*/].f_9=uParam0->f_35[iVar0 /*80*/].f_2;
}
iVar0++;
}
func_160(uParam0);
func_154(uParam0);
func_152(uParam0);
func_148(uParam0);
func_147(uParam0);
if(MISC::IS_BIT_SET(uLocal_136, 0)){
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
func_132(uParam0, &(uParam0->f_35), iVar0);
if(MISC::IS_BIT_SET(uLocal_136, (11 + iVar0))){
MISC::CLEAR_BIT(&uLocal_136, (11 + iVar0));
}
if(MISC::IS_BIT_SET(uLocal_136, (7 + iVar0))){
MISC::SET_BIT(&uLocal_136, (11 + iVar0));
MISC::CLEAR_BIT(&uLocal_136, (7 + iVar0));
}}elseif(uParam0->f_35[iVar0 /*80*/]==2){
func_16(&(uParam0->f_35), 3, iVar0);
uParam0->f_35[iVar0 /*80*/].f_1=0;
}
iVar0++;
}
if(!func_12(&uLocal_138)){
func_10(&uLocal_138, 0, 0);
}elseif(func_8(&uLocal_138, 500, 0)){
iVar1=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
if(iVar1==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_187(uParam0, 10);
return;
}
func_130(4, func_131(uParam0->f_35[iLocal_135 /*80*/].f_15, uParam0->f_35[iLocal_135 /*80*/].f_16, 9974), iLocal_135, 99999);
func_9(&uLocal_138);
}
if(!MISC::IS_BIT_SET(uParam0->f_2, 4) && uParam0->f_35[iLocal_135 /*80*/]==2){
HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_GAMEHELP", 0);
MISC::SET_BIT(&(uParam0->f_2), 5);
}
if(Local_141.f_0 >=8){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
iVar0=0;
while (iVar0 <=3){
AUDIO::STOP_SOUND(uParam0->f_35[iVar0 /*80*/].f_5);
iVar0++;
}
if(AUDIO::IS_STREAM_PLAYING()){
AUDIO::STOP_STREAM();
}
MISC::CLEAR_BIT(&uLocal_136, 0);
func_187(uParam0, 8);
}}elseif(iLocal_137 !=-1 && NETWORK::GET_NETWORK_TIME_ACCURATE() >=iLocal_137){
MISC::SET_BIT(&uLocal_136, false);
}}


void func_130(int iParam0, var uParam1, int iParam2, int iParam3){
struct<6> Var0;
int iVar1;
Var0.f_2=-1;
Var0.f_3=-1082130432;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_0=-355760685;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=uParam1;
Var0.f_4=iParam2;
Var0.f_5=iParam3;
iVar1=func_20(0);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iVar1);
}}


float func_131(float fParam0, float fParam1, int iParam2){
float fVar0;
float fVar1;
fVar0=to_float(floor((fParam0 * IntToFloat((iParam2 - 1)))));
fVar1=to_float(floor((fParam1 * IntToFloat((iParam2 - 1)))));
return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}


void func_132(var uParam0, var uParam1, int iParam2){
switch ((*uParam1)[iParam2 /*80*/]){
case 0:
switch (iParam2){
case 0:
(uParam1[iParam2 /*80*/])->f_4=0;
(uParam1[iParam2 /*80*/])->f_1=255;
(uParam1[iParam2 /*80*/])->f_3=0;
(uParam1[iParam2 /*80*/])->f_9=-1;
func_146(Local_142[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
break;
case 1:
(uParam1[iParam2 /*80*/])->f_4=0;
(uParam1[iParam2 /*80*/])->f_1=255;
(uParam1[iParam2 /*80*/])->f_3=0;
(uParam1[iParam2 /*80*/])->f_9=-1;
func_146(Local_142[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
break;
case 2:
(uParam1[iParam2 /*80*/])->f_4=0;
(uParam1[iParam2 /*80*/])->f_1=255;
(uParam1[iParam2 /*80*/])->f_3=0;
(uParam1[iParam2 /*80*/])->f_9=-1;
func_146(Local_142[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
break;
case 3:
(uParam1[iParam2 /*80*/])->f_4=0;
(uParam1[iParam2 /*80*/])->f_1=255;
(uParam1[iParam2 /*80*/])->f_3=0;
(uParam1[iParam2 /*80*/])->f_9=-1;
func_146(Local_142[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
break;
}
MISC::CLEAR_BIT(&uLocal_136, (15 + iParam2));
func_145(uParam1, iParam2);
func_15(&((uParam1[iParam2 /*80*/])->f_19));
func_16(uParam1, 1, iParam2);
break;
case 1:
if(Local_141.f_0==7){
func_16(uParam1, 2, iParam2);
}
break;
case 2:
if(iParam2==iLocal_135){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
func_144(uParam1);
}}
if(func_143(uParam0) <=1){
(uParam1[iParam2 /*80*/])->f_18=0f;
(uParam1[iParam2 /*80*/])->f_9=(uParam1[iParam2 /*80*/])->f_2;
}
if(!MISC::IS_BIT_SET(uLocal_136, (3 + iParam2))){
func_140(uParam0, uParam1, iParam2);
}
MISC::CLEAR_BIT(&uLocal_136, (3 + iParam2));
if(iParam2==iLocal_135){
func_136(uParam0, uParam1, 1);
if(func_135(uParam0, uParam1, iLocal_135)){
func_134(iLocal_135);
}}elseif(func_135(uParam0, uParam1, iParam2)){
(uParam1[iParam2 /*80*/])->f_18=0f;
if((uParam1[iParam2 /*80*/])->f_14==-2147483647){
(uParam1[iParam2 /*80*/])->f_14=NETWORK::GET_NETWORK_TIME();
}}elseif((uParam1[iParam2 /*80*/])->f_14 !=-2147483647){
(uParam1[iParam2 /*80*/])->f_14=-2147483647;
}
break;
case 3:
func_133(uParam1, iParam2);
break;
}}


void func_133(var uParam0, int iParam1){
float fVar0;
fVar0=to_float((uParam0[iParam1 /*80*/])->f_1);
fVar0=(fVar0 - (300f * timestep()));
if(fVar0 < 0f){
fVar0=0f;
}
(uParam0[iParam1 /*80*/])->f_1=floor(fVar0);
}


void func_134(int iParam0){
struct<3> Var0;
int iVar1;
Var0.f_0=79354218;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
iVar1=func_20(1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}

int func_135(var uParam0, var uParam1, int iParam2){
float fVar0;
float fVar1;
fVar0=(0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
fVar1=(0.0068f * uParam0->f_9);
switch ((uParam1[iParam2 /*80*/])->f_2){
case 0:
if(((uParam1[iParam2 /*80*/])->f_16 - (0.012f * 0.42f)) <=0.229f){
return 1;
}
break;
case 1:
if(((uParam1[iParam2 /*80*/])->f_16 + (0.012f * 0.42f)) >=0.851f){
return 1;
}
break;
case 2:
if(fVar0 - (fVar1 * 0.42f)) <=(0.5f - (0.339f * uParam0->f_9)){
return 1;
}
break;
case 3:
if(fVar0 + (fVar1 * 0.42f)) >=(0.5f + (0.343f * uParam0->f_9)){
return 1;
}
break;
}
return 0;
}


void func_136(var uParam0, var uParam1, bool bParam2){
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
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
int iVar20;
int iVar21;
int iVar22;
bool bVar23;
float fVar24;
float fVar25;
bool bVar26;
float fVar27;
fVar0=(0.5f - ((0.5f - (uParam1[iLocal_135 /*80*/])->f_15) * uParam0->f_9));
fVar1=(0.0068f * uParam0->f_9);
iVar20=((uParam1[iLocal_135 /*80*/])->f_4 - 1);
if(iVar20 > -1 && iVar20 < 59){
func_139((uParam1[iLocal_135 /*80*/])->f_19[iVar20], &fVar12, &fVar13, 9974);
if((uParam1[iLocal_135 /*80*/])->f_2==2){
fVar14=((uParam1[iLocal_135 /*80*/])->f_15 + (fVar1 * 0.5f));
fVar15=(uParam1[iLocal_135 /*80*/])->f_16;
if(fVar14 > fVar12){
fVar14=fVar12;
}}elseif((uParam1[iLocal_135 /*80*/])->f_2==3){
fVar14=((uParam1[iLocal_135 /*80*/])->f_15 - (fVar1 * 0.5f));
fVar15=(uParam1[iLocal_135 /*80*/])->f_16;
if(fVar14 < fVar12){
fVar14=fVar12;
}}elseif((uParam1[iLocal_135 /*80*/])->f_2==0){
fVar14=(uParam1[iLocal_135 /*80*/])->f_15;
fVar15=((uParam1[iLocal_135 /*80*/])->f_16 + (0.012f * 0.5f));
if(fVar15 > fVar13){
fVar15=fVar13;
}}elseif((uParam1[iLocal_135 /*80*/])->f_2==1){
fVar14=(uParam1[iLocal_135 /*80*/])->f_15;
fVar15=((uParam1[iLocal_135 /*80*/])->f_16 - (0.012f * 0.5f));
if(fVar15 < fVar13){
fVar15=fVar13;
}}}
iVar21=0;
while (iVar21 <=3){
bVar23=false;
if(iVar21==iLocal_135){
}elseif((uParam1[iVar21 /*80*/])->f_14 !=-2147483647 && NETWORK::GET_NETWORK_TIME() > (uParam1[iVar21 /*80*/])->f_14 + 1000){
}elseif((*uParam1)[iVar21 /*80*/]==2 && (*uParam1)[iLocal_135 /*80*/]==2){
iVar22=0;
while (iVar22 <=59){
func_139((uParam1[iVar21 /*80*/])->f_19[iVar22], &fVar2, &fVar3, 9974);
if(fVar2 !=0f || fVar3 !=0f){
if(iVar22 + 1 >=60){
fVar4=(uParam1[iVar21 /*80*/])->f_15;
fVar5=(uParam1[iVar21 /*80*/])->f_16;
}else{
func_139((uParam1[iVar21 /*80*/])->f_19[iVar22 + 1], &fVar4, &fVar5, 9974);
if(fVar4==0f && fVar5==0f){
fVar4=(uParam1[iVar21 /*80*/])->f_15;
fVar5=(uParam1[iVar21 /*80*/])->f_16;
}}
fVar6=(fVar4 - fVar2);
fVar7=(fVar5 - fVar3);
fVar8=(fVar2 + (fVar6 * 0.5f));
fVar9=(fVar3 + (fVar7 * 0.5f));
if(MISC::ABSF(fVar6) > 0.001f){
fVar10=(MISC::ABSF(fVar6) + (0.003f * 0.5f));
fVar11=(0.003f * uParam0->f_8);
}elseif(MISC::ABSF(fVar7) > 0.001f){
fVar10=0.003f;
fVar11=(MISC::ABSF(fVar7) + ((0.003f * 0.5f) * uParam0->f_8));
}else{
fVar10=0.0001f;
fVar11=0.0001f;
}
fVar24=(0.5f - ((0.5f - fVar8) * uParam0->f_9));
fVar25=(fVar10 * uParam0->f_9);
bVar26=false;
if((uParam1[iLocal_135 /*80*/])->f_2==2 || (uParam1[iLocal_135 /*80*/])->f_2==3){
bVar26=func_138(fVar0, (uParam1[iLocal_135 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, (fVar25 * 0.95f), fVar11);
}
if((uParam1[iLocal_135 /*80*/])->f_2==0 || (uParam1[iLocal_135 /*80*/])->f_2==1){
bVar26=func_138(fVar0, (uParam1[iLocal_135 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, fVar25, (fVar11 * 0.95f));
}
if(bVar26){
if(bParam2){
func_134(iLocal_135);
}
bVar23=true;
}elseif(!MISC::IS_BIT_SET(uLocal_136, (7 + iVar21)) && MISC::IS_BIT_SET(uLocal_136, (11 + iVar21))){
if(iVar22==((uParam1[iVar21 /*80*/])->f_4 - 1)){
if(((fVar12 !=0f && fVar13 !=0f) && fVar14 !=0f) && fVar15 !=0f){
func_137(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0.0015f);
if(func_138(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19)){
if(bParam2){
func_134(iLocal_135);
}
bVar23=true;
}}
}}}
iVar22++;
}
if(!bVar23){
fVar27=(0.5f - ((0.5f - (uParam1[iVar21 /*80*/])->f_15) * uParam0->f_9));
if(func_138(fVar0, (uParam1[iLocal_135 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar27, (uParam1[iVar21 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f))){
if(bParam2){
func_134(iLocal_135);
}}}}
iVar21++;
}}


void func_137(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9){
float fVar0;
float fVar1;
if(fParam9==0f){
fParam9=0.003f;
}
fVar0=(fParam3 - fParam1);
fVar1=(fParam4 - fParam2);
*uParam5=(fParam1 + (fVar0 * 0.5f));
*uParam6=(fParam2 + (fVar1 * 0.5f));
if(MISC::ABSF(fVar0) > 0.001f){
*uParam7=(MISC::ABSF(fVar0) + (fParam9 * 0.5f));
*uParam8=(fParam9 * uParam0->f_8);
}else{
*uParam7=fParam9;
*uParam8=(MISC::ABSF(fVar1) + ((fParam9 * 0.5f) * uParam0->f_8));
}
*uParam5=(0.5f - ((0.5f - *uParam5) * uParam0->f_9));
*uParam7=(*uParam7 * uParam0->f_9);
}

int func_138(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7){
if(fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f)){
return 0;
}
if(fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f)){
return 0;
}
if(fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f)){
return 0;
}
if(fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f)){
return 0;
}
return 1;
}


void func_139(float fParam0, float fParam1, float fParam2, int iParam3){
*fParam1=to_float(floor((fParam0 / IntToFloat(iParam3))));
*fParam2=(fParam0 % IntToFloat(iParam3));
*fParam1=(*fParam1 / IntToFloat((iParam3 - 1)));
*fParam2=(*fParam2 / IntToFloat((iParam3 - 1)));
}


void func_140(var uParam0, var uParam1, int iParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2)) && (*uParam1)[iParam2 /*80*/]==2){
if(AUDIO::HAS_SOUND_FINISHED((uParam1[iParam2 /*80*/])->f_5)){
if(Local_142[iParam2 /*2*/]==0){
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}elseif(Local_142[iParam2 /*2*/]==1){
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}elseif(Local_142[iParam2 /*2*/]==2){
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}}
if(!AUDIO::HAS_SOUND_FINISHED((uParam1[iParam2 /*80*/])->f_5)){
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_5, "X", (uParam1[iParam2 /*80*/])->f_15);
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_5, "Y", (uParam1[iParam2 /*80*/])->f_16);
}}
if((uParam1[iParam2 /*80*/])->f_9 !=(uParam1[iParam2 /*80*/])->f_2 && (uParam1[iParam2 /*80*/])->f_4 > 0){
func_139((uParam1[iParam2 /*80*/])->f_19[((uParam1[iParam2 /*80*/])->f_4 - 1)], &fVar0, &fVar1, 9974);
fVar4=0.2f;
if(((((uParam1[iParam2 /*80*/])->f_9==0 && (uParam1[iParam2 /*80*/])->f_10[1]==1) || ((uParam1[iParam2 /*80*/])->f_9==1 && (uParam1[iParam2 /*80*/])->f_10[1]==0)) || ((uParam1[iParam2 /*80*/])->f_9==2 && (uParam1[iParam2 /*80*/])->f_10[1]==3)) || ((uParam1[iParam2 /*80*/])->f_9==3 && (uParam1[iParam2 /*80*/])->f_10[1]==2)){
fVar4=0.25f;
}
if((uParam1[iParam2 /*80*/])->f_9==0 || (uParam1[iParam2 /*80*/])->f_9==1){
fVar2=MISC::ABSF(((uParam1[iParam2 /*80*/])->f_15 - fVar0));
fVar3=((0.0068f * uParam0->f_8) * fVar4);
}elseif((uParam1[iParam2 /*80*/])->f_9==2 || (uParam1[iParam2 /*80*/])->f_9==3){
fVar2=MISC::ABSF(((uParam1[iParam2 /*80*/])->f_16 - fVar1));
fVar3=((0.0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
}
if(fVar2 >=fVar3 || (iParam2 !=iLocal_135 && !MISC::IS_BIT_SET(uLocal_136, (15 + iParam2)))){
if(iParam2==iLocal_135){
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_130((uParam1[iParam2 /*80*/])->f_9, func_131((uParam1[iParam2 /*80*/])->f_15, (uParam1[iParam2 /*80*/])->f_16, 9974), iLocal_135, uLocal_134[iLocal_135]);
func_9(&uLocal_138);
uLocal_134[iLocal_135]++;
}else{
AUDIO::PLAY_SOUND_FRONTEND((uParam1[iParam2 /*80*/])->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_7, "X", (uParam1[iParam2 /*80*/])->f_15);
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_7, "Y", (uParam1[iParam2 /*80*/])->f_16);
if(!AUDIO::HAS_SOUND_FINISHED((uParam1[iParam2 /*80*/])->f_5)){
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_5, "Turning", 1f);
}
(uParam1[iParam2 /*80*/])->f_2=(uParam1[iParam2 /*80*/])->f_9;
(uParam1[iParam2 /*80*/])->f_10[1]=(uParam1[iParam2 /*80*/])->f_10[0];
(uParam1[iParam2 /*80*/])->f_10[0]=(uParam1[iParam2 /*80*/])->f_2;
(uParam1[iParam2 /*80*/])->f_13=MISC::GET_GAME_TIMER();
}}elseif(!AUDIO::HAS_SOUND_FINISHED((uParam1[iParam2 /*80*/])->f_5)){
AUDIO::SET_VARIABLE_ON_SOUND((uParam1[iParam2 /*80*/])->f_5, "Turning", 0f);
}
func_142(uParam0, iParam2);
func_141(uParam0, uParam1, iParam2);
func_145(uParam1, iParam2);
MISC::SET_BIT(&uLocal_136, (3 + iParam2));
}


void func_141(var uParam0, var uParam1, int iParam2){
float fVar0;
float fVar1;
fVar0=(0.06f * (uParam1[iParam2 /*80*/])->f_18);
fVar1=((0.06f * (uParam1[iParam2 /*80*/])->f_18) * uParam0->f_8);
switch ((uParam1[iParam2 /*80*/])->f_2){
case 0:
(uParam1[iParam2 /*80*/])->f_16=((uParam1[iParam2 /*80*/])->f_16 - (fVar1 * timestep()));
break;
case 1:
(uParam1[iParam2 /*80*/])->f_16=((uParam1[iParam2 /*80*/])->f_16 + (fVar1 * timestep()));
break;
case 2:
(uParam1[iParam2 /*80*/])->f_15=((uParam1[iParam2 /*80*/])->f_15 - (fVar0 * timestep()));
break;
case 3:
(uParam1[iParam2 /*80*/])->f_15=((uParam1[iParam2 /*80*/])->f_15 + (fVar0 * timestep()));
break;
}
(uParam1[iParam2 /*80*/])->f_18=1f;
}


void func_142(var uParam0, int iParam1){
int iVar0;
float fVar1;
float fVar2;
if(uParam0->f_35[iParam1 /*80*/].f_4==0){
uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4]=func_131(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
uParam0->f_35[iParam1 /*80*/].f_4++;
}
if(uParam0->f_35[iParam1 /*80*/].f_2 !=uParam0->f_35[iParam1 /*80*/].f_8){
if(uParam0->f_35[iParam1 /*80*/].f_4 >=60){
iVar0=0;
while (iVar0 <=59){
if(iVar0==59){
uParam0->f_35[iParam1 /*80*/].f_19[iVar0]=func_131(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
}else{
fVar1=0f;
fVar2=0f;
func_139(uParam0->f_35[iParam1 /*80*/].f_19[iVar0 + 1], &fVar1, &fVar2, 9974);
uParam0->f_35[iParam1 /*80*/].f_19[iVar0]=func_131(fVar1, fVar2, 9974);
}
iVar0++;
}}else{
uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4]=func_131(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
uParam0->f_35[iParam1 /*80*/].f_4++;
}
uParam0->f_35[iParam1 /*80*/].f_8=uParam0->f_35[iParam1 /*80*/].f_2;
}}

int func_143(var uParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_142[iVar1 /*2*/] > -1){
if(uParam0->f_35[iVar1 /*80*/] !=3){
iVar0++;
}}
iVar1++;
}
return iVar0;
}


void func_144(var uParam0){
float fVar0;
float fVar1;
if((uParam0[iLocal_135 /*80*/])->f_9 < 0){
(uParam0[iLocal_135 /*80*/])->f_9=(uParam0[iLocal_135 /*80*/])->f_2;
}
if((MISC::GET_GAME_TIMER() - (uParam0[iLocal_135 /*80*/])->f_13) >=66){
fVar0=PAD::GET_CONTROL_NORMAL(2, 218);
fVar1=PAD::GET_CONTROL_NORMAL(2, 219);
if(fVar1 < -0.65f || PAD::IS_CONTROL_PRESSED(2, 188)){
if((uParam0[iLocal_135 /*80*/])->f_2 !=1){
(uParam0[iLocal_135 /*80*/])->f_9=0;
}}
if(fVar1 > 0.65f || PAD::IS_CONTROL_PRESSED(2, 187)){
if((uParam0[iLocal_135 /*80*/])->f_2 !=0){
(uParam0[iLocal_135 /*80*/])->f_9=1;
}}
if(fVar0 < -0.65f || PAD::IS_CONTROL_PRESSED(2, 189)){
if((uParam0[iLocal_135 /*80*/])->f_2 !=3){
(uParam0[iLocal_135 /*80*/])->f_9=2;
}}
if(fVar0 > 0.65f || PAD::IS_CONTROL_PRESSED(2, 190)){
if((uParam0[iLocal_135 /*80*/])->f_2 !=2){
(uParam0[iLocal_135 /*80*/])->f_9=3;
}}}}


void func_145(var uParam0, int iParam1){
switch ((uParam0[iParam1 /*80*/])->f_2){
case 0:
(uParam0[iParam1 /*80*/])->f_17=0f;
break;
case 1:
(uParam0[iParam1 /*80*/])->f_17=180f;
break;
case 2:
(uParam0[iParam1 /*80*/])->f_17=270f;
break;
case 3:
(uParam0[iParam1 /*80*/])->f_17=90f;
break;
}}


void func_146(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4){
switch (iParam0){
case 0:
*fParam2=(0.5f + -0.32f);
*fParam3=0.54f;
*iParam1=3;
*iParam4=3;
break;
case 1:
*fParam2=(0.5f + 0.321f);
*fParam3=0.54f;
*iParam1=2;
*iParam4=2;
break;
case 2:
*fParam2=(0.5f + 0f);
*fParam3=0.26f;
*iParam1=1;
*iParam4=1;
break;
case 3:
*fParam2=(0.5f + 0f);
*fParam3=0.822f;
*iParam1=0;
*iParam4=0;
break;
}}


void func_147(var uParam0){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 <=3){
if(uParam0->f_35[iVar0 /*80*/]==2){
iVar1++;
}
iVar0++;
}
if(*uParam0 < 7){
AUDIO::LOAD_STREAM("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
}elseif(iVar1 > 1){
if(!MISC::IS_BIT_SET(uParam0->f_2, 3)){
AUDIO::PLAY_STREAM_FRONTEND();
MISC::SET_BIT(&(uParam0->f_2), 3);
}}elseif(AUDIO::IS_STREAM_PLAYING()){
AUDIO::STOP_STREAM();
}}


void func_148(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 15)){
func_149(uParam0);
MISC::SET_BIT(&(uParam0->f_2), 15);
}
func_83(uParam0);
}


void func_149(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SHOW_HUD");
func_150(0);
func_150(1);
func_150(2);
func_150(3);
if(iLocal_135 > -1 && Local_142[iLocal_135 /*2*/] > -1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_142[iLocal_135 /*2*/]);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_150(int iParam0){
struct<16> Var0;
struct<16> Var1;
int iVar2;
Var0={
func_71(iParam0) 
};
Var1={
func_69(iParam0) 
};
iVar2=func_151(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&Var1);
func_60(&Var0);
}

int func_151(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/]==iParam0){
return Local_141.f_7[iVar0];
}
iVar0++;
}
return -1;
}


void func_152(var uParam0){
if(!func_8(&(uParam0->f_20), 1000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 10)){
func_59(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
MISC::SET_BIT(&(uParam0->f_2), 10);
}}elseif(MISC::IS_BIT_SET(uParam0->f_2, 10)){
func_153(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 10);
}}


void func_153(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_154(var uParam0){
int iVar0;
func_62(uParam0);
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(uParam0->f_35[iVar0 /*80*/].f_1 !=0){
func_155(uParam0, &(uParam0->f_35), iVar0);
}}
iVar0++;
}}


void func_155(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
bool bVar20;
bool bVar21;
if((uParam1[iParam2 /*80*/])->f_14 !=-2147483647 && NETWORK::GET_NETWORK_TIME() > (uParam1[iParam2 /*80*/])->f_14 + 1000){
return;
}
func_156(Local_142[iParam2 /*2*/], &iVar0, &iVar1, &iVar2);
if((*uParam1)[iParam2 /*80*/]==3){
iVar0=255;
iVar1=255;
iVar2=255;
}
fVar3=(0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
fVar4=(0.0068f * uParam0->f_9);
iVar5=0;
iVar5=0;
while (iVar5 < 60){
func_139((uParam1[iParam2 /*80*/])->f_19[iVar5], &fVar7, &fVar8, 9974);
if(fVar7 !=0f || fVar8 !=0f){
if(iVar5 + 1 >=60){
fVar9=(uParam1[iParam2 /*80*/])->f_15;
fVar10=(uParam1[iParam2 /*80*/])->f_16;
}else{
func_139((uParam1[iParam2 /*80*/])->f_19[iVar5 + 1], &fVar9, &fVar10, 9974);
if(fVar9==0f && fVar10==0f){
fVar9=(uParam1[iParam2 /*80*/])->f_15;
fVar10=(uParam1[iParam2 /*80*/])->f_16;
}}
fVar11=(fVar9 - fVar7);
fVar12=(fVar10 - fVar8);
fVar13=(fVar7 + (fVar11 * 0.5f));
fVar14=(fVar8 + (fVar12 * 0.5f));
if(MISC::ABSF(fVar11) > 0.001f){
if(fVar11 > 0f){
iVar6=3;
}else{
iVar6=2;
}
fVar15=90f;
fVar16=(MISC::ABSF(fVar11) + 0.003f);
fVar17=(0.003f * uParam0->f_8);
}
if(MISC::ABSF(fVar12) > 0.001f){
if(fVar12 > 0f){
iVar6=1;
}else{
iVar6=0;
}
fVar15=0f;
fVar16=0.003f;
fVar17=(MISC::ABSF(fVar12) + ((0.003f * 0.5f) * uParam0->f_8));
}
fVar18=(0.5f - ((0.5f - fVar13) * uParam0->f_9));
fVar19=(fVar16 * uParam0->f_9);
GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0, 0);
if(iParam2==iLocal_135){
if((*uParam1)[iParam2 /*80*/]==2){
bVar20=false;
if((uParam1[iParam2 /*80*/])->f_2==2 || (uParam1[iParam2 /*80*/])->f_2==3){
bVar20=func_138(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, (fVar19 * 0.95f), fVar17);
}
if((uParam1[iParam2 /*80*/])->f_2==0 || (uParam1[iParam2 /*80*/])->f_2==1){
bVar20=func_138(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, fVar19, (fVar17 * 0.95f));
}
if(bVar20){
bVar21=false;
if(iVar5==((uParam1[iParam2 /*80*/])->f_4 - 3)){
if(iVar6==(uParam1[iParam2 /*80*/])->f_2){
bVar21=true;
}
}
if(iVar5 < ((uParam1[iParam2 /*80*/])->f_4 - 2) && !bVar21){
func_134(iParam2);
}}}}
fVar15=0f;
fVar16=0f;
fVar17=0f;
}
iVar5++;
}
GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "HeadPixel", fVar3, (uParam1[iParam2 /*80*/])->f_16, fVar4, 0.012f, (uParam1[iParam2 /*80*/])->f_17, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0, 0);
}


void func_156(int iParam0, var uParam1, var uParam2, var uParam3){
var uVar0;
func_157(func_158(func_128(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}


void func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4){
*uParam1=MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
*uParam2=MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
*uParam3=MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
*uParam4=MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}


var func__158(var uParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
HUD::GET_HUD_COLOUR(uParam0, &uVar0, &uVar1, &uVar2, &uVar3);
return func_159(uVar0, uVar1, uVar2, uVar3);
}


var func__159(var uParam0, var uParam1, var uParam2, var uParam3){
var uVar0;
MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, uParam0);
MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, uParam1);
MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, uParam2);
MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, uParam3);
return uVar0;
}


void func_160(var uParam0){
int iVar0;
struct<6> Var1;
struct<3> Var2;
struct<3> Var3;
struct<6> Var4;
int iVar5;
int iVar6;
float fVar7;
float fVar8;
int iVar9;
int iVar10;
struct<6> Var11;
int iVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
int iVar17;
int iVar18;
int iVar19;
Var1.f_2=-1;
Var1.f_3=-1082130432;
Var1.f_4=-1;
Var1.f_5=-1;
Var4=32;
Var4.f_1.f_2=-1;
Var4.f_1.f_3=-1082130432;
Var4.f_1.f_4=-1;
Var4.f_1.f_5=-1;
Var4.f_1.f_6.f_2=-1;
Var4.f_1.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_4=-1;
Var4.f_1.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3=-1082130432;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4=-1;
Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5=-1;
iVar5=0;
iVar6=0;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
if(SCRIPT::GET_EVENT_AT_INDEX(1, iVar0)==174){
if(MISC::IS_BIT_SET(uLocal_136, 0)){
if(SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 6)){
if(Var1.f_0==-355760685){
if(iVar5 < 16){
Var4[iVar5 /*6*/]={
Var1 
};
if(!MISC::IS_BIT_SET(uLocal_136, (7 + Var1.f_4))){
MISC::SET_BIT(&uLocal_136, (7 + Var1.f_4));
}
iVar5++;
}}}
if(SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 3)){
if(Var2.f_0==79354218){
func_165(&(uParam0->f_35), Var2.f_2);
}}}elseif(SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 3)){
if(Var3.f_0==443059258){
iLocal_137=Var3.f_2;
}}}
iVar0++;
}
Var11.f_2=-1;
Var11.f_3=-1082130432;
Var11.f_4=-1;
Var11.f_5=-1;
iVar9=iVar5;
while (iVar9 <=15){
if(Local_133[iVar9 /*6*/].f_5 < 99999 && Local_133[iVar9 /*6*/].f_5 > -1){
Var4[(iVar5 + iVar9) /*6*/]={
Local_133[iVar9 /*6*/] 
};
Local_133[iVar9 /*6*/]={
Var11 
};
iVar10++;
}
iVar9++;
}
iVar5=(iVar5 + iVar10);
if(iVar5 > 1){
iVar0=0;
while (iVar0 <=(iVar5 - 1)){
iVar0++;
}
func_163(&Var4, 0, (iVar5 - 1));
iVar0=0;
while (iVar0 <=(iVar5 - 1)){
iVar0++;
}}
iVar0=0;
while (iVar0 <=(iVar5 - 1)){
func_139(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
if(Var4[iVar0 /*6*/].f_5 < 99999){
if(!uLocal_134[Var4[iVar0 /*6*/].f_4]==Var4[iVar0 /*6*/].f_4 * 10000){
if(Var4[iVar0 /*6*/].f_5 > uLocal_134[Var4[iVar0 /*6*/].f_4] + 2){
iVar12=0;
if(func_162(&iVar12)){
Local_133[iVar12 /*6*/]={
Var4[iVar0 /*6*/] 
};
}
if(Var4[iVar0 /*6*/].f_5 > uLocal_134[Var4[iVar0 /*6*/].f_4] + 4){
uLocal_134[Var4[iVar0 /*6*/].f_4]++;
}
Jump @2247;
//curOff=1562 
}elseif(Var4[iVar0 /*6*/].f_5 < uLocal_134[Var4[iVar0 /*6*/].f_4]){
}else{
if(Var4[iVar0 /*6*/].f_5==uLocal_134[Var4[iVar0 /*6*/].f_4] + 2){
fVar13=0f;
fVar14=0f;
fVar15=0f;
fVar16=0f;
iVar17=-1;
if(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 > 0){
func_139(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_19[(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 - 1)], &fVar15, &fVar16, 9974);
}
else{
iVar18=0;
iVar19=0;
func_146(Local_142[Var4[iVar0 /*6*/].f_4 /*2*/], &iVar18, &fVar15, &fVar16, &iVar19);
}
switch (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_2){
case 0:
case 1:
if(fVar15 > fVar7){
iVar17=3;
}else{
iVar17=2;
}
break;
case 3:
case 2:
if(fVar16 > fVar8){
iVar17=1;
}else{
iVar17=0;
}
break;
}
switch (iVar17){
case 0:
fVar13=fVar7;
fVar14=fVar16;
break;
case 1:
fVar13=fVar7;
fVar14=fVar16;
break;
case 3:
fVar13=fVar15;
fVar14=fVar8;
break;
case 2:
fVar13=fVar15;
fVar14=fVar8;
break;
}
func_161(uParam0, Var4[iVar0 /*6*/].f_4, iVar17, fVar13, fVar14, &iVar6);
func_140(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
func_161(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
func_140(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
}else{
if(!Var4[iVar0 /*6*/].f_5==uLocal_134[Var4[iVar0 /*6*/].f_4] + 1 && !Var4[iVar0 /*6*/].f_5==Var4[iVar0 /*6*/].f_4 * 10000){
}
func_139(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
func_161(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
func_140(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
}
uLocal_134[Var4[iVar0 /*6*/].f_4]=Var4[iVar0 /*6*/].f_5;
Jump @2247;
//curOff=2125if(Var4[iVar0 /*6*/].f_2==4 && !MISC::IS_BIT_SET(iVar6, Var4[iVar0 /*6*/].f_4)){
if(!MISC::IS_BIT_SET(uLocal_136, (15 + Var4[iVar0 /*6*/].f_4))){
MISC::SET_BIT(&uLocal_136, (15 + Var4[iVar0 /*6*/].f_4));
}
uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_15=fVar7;
uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_16=fVar8;
func_140(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
}}
iVar0++;
}


void func_161(var uParam0, bool bParam1, int iParam2, float fParam3, float fParam4, int iParam5){
uParam0->f_35[bParam1 /*80*/].f_9=iParam2;
uParam0->f_35[bParam1 /*80*/].f_15=fParam3;
uParam0->f_35[bParam1 /*80*/].f_16=fParam4;
if(MISC::IS_BIT_SET(*iParam5, bParam1)){
uParam0->f_35[bParam1 /*80*/].f_8=uParam0->f_35[bParam1 /*80*/].f_2;
}else{
MISC::SET_BIT(iParam5, bParam1);
}}

int func_162(int iParam0){
*iParam0=0;
while (*iParam0 <=15){
if(Local_133[*iParam0 /*6*/].f_5==-1){
return 1;
}
*iParam0++;
}
return 0;
}


void func_163(var uParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_164(uParam0, iParam1, iParam2);
if(iParam1 < (iVar0 - 1)){
func_163(uParam0, iParam1, (iVar0 - 1));
}
if(iVar0 < iParam2){
func_163(uParam0, iVar0, iParam2);
}}

int func_164(var uParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
struct<6> Var2;
int iVar3;
iVar0=iParam1;
iVar1=iParam2;
Var2.f_2=-1;
Var2.f_3=-1082130432;
Var2.f_4=-1;
Var2.f_5=-1;
iVar3=(uParam0[((iParam1 + iParam2) / 2) /*6*/])->f_5;
while (iVar0 <=iVar1){
while ((uParam0[iVar0 /*6*/])->f_5 < iVar3){
iVar0++;
}
while ((uParam0[iVar1 /*6*/])->f_5 > iVar3){
iVar1=(iVar1 - 1);
}
if(iVar0 <=iVar1){
Var2={
*(uParam0[iVar0 /*6*/]) 
};
*(uParam0[iVar0 /*6*/])={
*(uParam0[iVar1 /*6*/]) 
};
*(uParam0[iVar1 /*6*/])={
Var2 
};
iVar0++;
iVar1=(iVar1 - 1);
}}
return iVar0;
}


void func_165(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return;
}
if(!AUDIO::HAS_SOUND_FINISHED((uParam0[iParam1 /*80*/])->f_5)){
AUDIO::STOP_SOUND((uParam0[iParam1 /*80*/])->f_5);
}
if(iParam1==iLocal_135){
AUDIO::PLAY_SOUND_FRONTEND((uParam0[iParam1 /*80*/])->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND((uParam0[iParam1 /*80*/])->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}
AUDIO::SET_VARIABLE_ON_SOUND((uParam0[iParam1 /*80*/])->f_6, "X", (uParam0[iParam1 /*80*/])->f_15);
AUDIO::SET_VARIABLE_ON_SOUND((uParam0[iParam1 /*80*/])->f_6, "Y", (uParam0[iParam1 /*80*/])->f_16);
func_16(uParam0, 3, iParam1);
}


void func_166(var uParam0){
int iVar0;
if(!func_12(&(uParam0->f_18))){
func_10(&(uParam0->f_18), 0, 0);
}
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
func_132(uParam0, &(uParam0->f_35), iVar0);
}
iVar0++;
}
func_154(uParam0);
func_169(uParam0);
func_148(uParam0);
func_160(uParam0);
func_168(uParam0);
func_147(uParam0);
if(Local_141.f_0 >=7){
AUDIO::STOP_SOUND(uParam0->f_3);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_9(&(uParam0->f_18));
func_167();
func_187(uParam0, 7);
}}


void func_167(){
int iVar0;
struct<6> Var1;
Var1.f_2=-1;
Var1.f_3=-1082130432;
Var1.f_4=-1;
Var1.f_5=-1;
iVar0=0;
while (iVar0 <=3){
uLocal_134[iVar0]=iVar0 * 10000;
iVar0++;
}
iVar0=0;
while (iVar0 <=15){
Local_133[iVar0 /*6*/]={
Var1 
};
iVar0++;
}}


void func_168(var uParam0){
if(!func_8(&(uParam0->f_18), 1000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 2)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_2), 2);
}}elseif(!func_8(&(uParam0->f_18), 2000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_2), true);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_2, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_2), false);
}}


void func_169(var uParam0){
if(!func_8(&(uParam0->f_18), 1000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 7)){
func_59(uParam0, "DCTL_COUNTDOWN3", 0, 0);
MISC::SET_BIT(&(uParam0->f_2), 7);
}}elseif(!func_8(&(uParam0->f_18), 2000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_2, 8)){
func_59(uParam0, "DCTL_COUNTDOWN2", 0, 0);
MISC::SET_BIT(&(uParam0->f_2), 8);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_2, 9)){
func_59(uParam0, "DCTL_COUNTDOWN1", 0, 0);
MISC::SET_BIT(&(uParam0->f_2), 9);
}}


void func_170(var uParam0){
int iVar0;
if(!func_12(&(uParam0->f_16))){
func_10(&(uParam0->f_16), 0, 0);
}
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
func_132(uParam0, &(uParam0->f_35), iVar0);
}
iVar0++;
}
if(MISC::IS_BIT_SET(uParam0->f_2, 16)){
func_57(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 16);
}
if(!MISC::IS_BIT_SET(uParam0->f_2, 18)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_2), 18);
}
func_154(uParam0);
func_171(uParam0);
func_148(uParam0);
func_147(uParam0);
if(Local_141.f_0==10){
func_187(uParam0, 10);
func_56(1);
}elseif(Local_141.f_0 >=6){
func_187(uParam0, 6);
}}


void func_171(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 6)){
func_59(uParam0, "DCTL_READY", 0, 2);
MISC::SET_BIT(&(uParam0->f_2), 6);
}}


void func_172(var uParam0){
bool bVar0;
int iVar1;
func_62(uParam0);
func_173(uParam0);
if(MISC::IS_BIT_SET(uParam0->f_2, 16)){
func_57(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 16);
}
if(Local_141.f_77==3 && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 5)){
bVar0=true;
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(Local_141.f_2[iVar1]==-1){
bVar0=false;
}else{
if(iVar1==iLocal_135){
Local_142[iLocal_135 /*2*/]=Local_141.f_2[iLocal_135];
func_146(Local_142[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
}elseif(Local_142[iVar1 /*2*/]==Local_141.f_2[iVar1]){
func_146(Local_142[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
}else{
bVar0=false;
}
iVar1++;
}
if(bVar0){
MISC::SET_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 5);
}
if(Local_141.f_0==10){
AUDIO::STOP_SOUND(uParam0->f_3);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_187(uParam0, 10);
func_56(0);
}elseif(Local_141.f_0 >=5){
uParam0->f_5=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_3, "FadeOut", 7f);
func_72();
func_187(uParam0, 5);
MISC::CLEAR_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 5);
}}


void func_173(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 13)){
func_59(uParam0, "DCTL_LOADING", 0, 2);
MISC::SET_BIT(&(uParam0->f_2), 13);
}}


void func_174(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_2, 14)){
func_177(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_2), 14);
MISC::SET_BIT(&(uParam0->f_2), 17);
}
func_62(uParam0);
func_176(uParam0);
if(MISC::IS_PC_VERSION()){
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3)) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
func_81(3);
}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3)) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
func_81(4);
}}
if(func_80()){
func_6(1);
}
if((!MISC::IS_BIT_SET(uParam0->f_2, 4) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 3)) && !MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4)){
HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_TITLEHELP", 0);
MISC::SET_BIT(&(uParam0->f_2), 5);
}
func_175(uParam0);
func_147(uParam0);
func_66(uParam0, 0);
if(Local_141.f_0 > 3){
if(MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 4) || MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 2)){
func_187(uParam0, 11);
}else{
if(Local_141.f_0==10){
func_6(0);
func_5(0, 0);
func_187(uParam0, 10);
func_56(1);
return;
}
func_14(uParam0);
func_6(0);
func_5(0, 0);
if(Local_141.f_0==4){
func_187(uParam0, 4);
}else{
uParam0->f_5=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_3, "FadeOut", 7f);
func_187(uParam0, 5);
}}}elseif(AUDIO::HAS_SOUND_FINISHED(uParam0->f_3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}}


void func_175(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_142[iVar0 /*2*/] > -1){
if(MISC::IS_BIT_SET(Local_142[iVar0 /*2*/].f_1, 3) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 0)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), false);
if(MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 1)){
MISC::CLEAR_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 1);
}}elseif(MISC::IS_BIT_SET(Local_142[iVar0 /*2*/].f_1, 4) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 1)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
MISC::SET_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), true);
if(MISC::IS_BIT_SET(uParam0->f_35[iVar0 /*80*/].f_3, 0)){
MISC::CLEAR_BIT(&(uParam0->f_35[iVar0 /*80*/].f_3), 0);
}}}
iVar0++;
}}


void func_176(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_2, 16)){
MISC::SET_BIT(&(uParam0->f_2), 16);
}
func_67(uParam0, "DCTL_INSERT", 0);
func_85(uParam0);
func_83(uParam0);
}


void func_177(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_LOADING_SCREEN");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_178(var uParam0){
if(!MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 1)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_32(PLAYER::PLAYER_ID(), 0, 0, 0);
func_181();
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}
func_51(1, 0, 1, 0);
AUDIO::START_AUDIO_SCENE("DLC_Exec_Arc_Mac_Playing_Game_Scene");
func_180(uParam0);
func_10(&(uParam0->f_10), 0, 0);
MISC::SET_BIT(&(uParam0->f_2), 14);
MISC::SET_BIT(&(Local_142[iLocal_135 /*2*/].f_1), true);
}else{
switch (uParam0->f_1){
case 0:
AUDIO::PLAY_SOUND_FRONTEND(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_179(uParam0, 1);
break;
case 1:
if(func_8(&(uParam0->f_10), 1800, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
func_179(uParam0, 2);
}
break;
case 2:
if(func_8(&(uParam0->f_10), 2250, 0)){
if(AUDIO::HAS_SOUND_FINISHED(uParam0->f_3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
}
func_179(uParam0, 3);
}
break;
}
if(func_8(&(uParam0->f_10), 2200, 0)){
MISC::SET_BIT(&(uParam0->f_2), 17);
}
if(func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1==3 && func_8(&(uParam0->f_10), 3000, 0)) && PAD::IS_CONTROL_JUST_PRESSED(2, 201))){
MISC::SET_BIT(&(Local_142[iLocal_135 /*2*/].f_1), 6);
func_72();
if(Local_141.f_0==9){
func_187(uParam0, 9);
}elseif(Local_141.f_0 >=3){
func_187(uParam0, 3);
}}}}


void func_179(var uParam0, int iParam1){
uParam0->f_1=iParam1;
}


void func_180(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SHOW_LOADING_SCREEN");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_181(){
if(!Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=1;
}}


void func_182(var uParam0){
if(!MISC::IS_BIT_SET(Local_142[iLocal_135 /*2*/].f_1, 0)){
func_184();
uParam0->f_34=GRAPHICS::REQUEST_SCALEFORM_MOVIE("dont_cross_the_line");
if(func_183() && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)){
MISC::SET_BIT(&(Local_142[iLocal_135 /*2*/].f_1), false);
func_187(uParam0, 2);
}}}

int func_183(){
if((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("LineArcadeMinigame")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3)){
return 1;
}
return 0;
}

int func_184(){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1)){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("LineArcadeMinigame", 0);
HUD::REQUEST_ADDITIONAL_TEXT("DCTL", 3);
MISC::SET_BIT(&Global_1935872, 6);
return 1;
}
return 0;
}


void func_185(var uParam0){
int iVar0;
if(iLocal_135==-1){
Global_4718592.f_165275=1;
uParam0->f_8=func_186();
uParam0->f_3=AUDIO::GET_SOUND_ID();
uParam0->f_6=AUDIO::GET_SOUND_ID();
uParam0->f_7=AUDIO::GET_SOUND_ID();
iVar0=0;
while (iVar0 <=3){
uParam0->f_35[iVar0 /*80*/].f_5=AUDIO::GET_SOUND_ID();
uParam0->f_35[iVar0 /*80*/].f_6=AUDIO::GET_SOUND_ID();
uParam0->f_35[iVar0 /*80*/].f_7=AUDIO::GET_SOUND_ID();
iVar0++;
}
MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 16);
iLocal_135=NETWORK::PARTICIPANT_ID_TO_INT();
Local_142[iLocal_135 /*2*/]=-1;
uParam0->f_34=0;
func_81(2);
func_179(uParam0, 0);
}
if(Local_142[iLocal_135 /*2*/]==-1){
if(Local_141.f_2[iLocal_135] > -1){
Local_142[iLocal_135 /*2*/]=Local_141.f_2[iLocal_135];
}}else{
func_187(uParam0, 1);
}
func_6(0);
}


float func_186(){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
iVar1=0;
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &iVar1);
fVar2=(to_float(iVar0) / to_float(iVar1));
if(MISC::IS_PC_VERSION()){
if(fVar2 >=4f){
fVar2=(fVar2 / 3f);
}}
return fVar2;
}


void func_187(var uParam0, int iParam1){
uParam0->f_4=0;
*uParam0=iParam1;
}


void func_188(var uParam0){
bool bVar0;
int iVar1;
int iVar2;
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(0);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
func_209(1);
func_208(4, -1);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
func_207();
func_206();
func_205();
HUD::THEFEED_HIDE_THIS_FRAME();
if(((!func_203(PLAYER::PLAYER_ID()) && !func_202(PLAYER::PLAYER_ID())) && !func_201(PLAYER::PLAYER_ID())) && !func_199(PLAYER::PLAYER_ID())){
func_187(uParam0, 11);
}
if(!func_47()){
func_187(uParam0, 11);
}
if(func_202(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT()){
func_187(uParam0, 11);
}
if(func_201(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT()){
func_187(uParam0, 11);
}
if(func_199(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT()){
func_187(uParam0, 11);
}
func_198();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
if(Local_141.f_0 > 2){
func_191(0);
}
func_189(uParam0);
if(!HUD::IS_PAUSE_MENU_ACTIVE() && Local_141.f_0 > 2){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !Local_141.f_0==4){
iVar1=0;
while (iVar1 <=3){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(Local_141.f_2[iVar1]==-1){
Local_141.f_2[iVar1]=func_24();
bVar0=true;
}}elseif(Local_141.f_2[iVar1] !=-1){
Local_141.f_2[iVar1]=-1;
bVar0=true;
}
iVar1++;
}
if(bVar0){
iVar1=0;
while (iVar1 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=0;
while (iVar2 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2))){
if(iVar2 !=iVar1 && (Local_141.f_2[iVar1]==Local_141.f_2[iVar2] || Local_141.f_2[iVar1]==-1)){
Local_141.f_2[iVar1]=-1;
return;
}
}
iVar2++;
}}
iVar1++;
}}}}


void func_189(var uParam0){
uParam0->f_8=func_186();
uParam0->f_9=func_190(uParam0->f_8);
}


float func_190(float fParam0){
return (1.778f / fParam0);
}


void func_191(int iParam0){
if(func_197()){
return;
}
if(!Global_20500.f_1==1){
if(func_196(0)){
func_192(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_192(int iParam0){
if(func_197()){
return;
}
if(Global_20704){
if(func_195()){
func_194(1, 1);
}else{
func_194(0, 0);
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
if(!func_193()){
Global_20500.f_1=3;
}}

int func_193(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_194(bool bParam0, bool bParam1){
if(bParam0){
if(func_196(0)){
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


bool func_195(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_196(int iParam0){
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


bool func_197(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_198(){
Global_23251.f_134=1;
}

int func_199(int iParam0){
if(iParam0 !=func_79()){
if(func_21(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_200(Global_2657704[iParam0 /*463*/].f_321.f_7)==24;
}}}
return 0;
}

int func_200(int iParam0){
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

int func_201(int iParam0){
if(iParam0 !=func_79()){
if(func_21(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_200(Global_2657704[iParam0 /*463*/].f_321.f_7)==17;
}}}
return 0;
}

int func_202(int iParam0){
if(iParam0 !=func_79()){
if(func_21(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_200(Global_2657704[iParam0 /*463*/].f_321.f_7)==15;
}}}
return 0;
}

int func_203(int iParam0){
if(func_204(Global_1853988[iParam0 /*867*/].f_267.f_33)){
return 1;
}
return 0;
}

int func_204(int iParam0){
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


void func_205(){
Global_2794162.f_4636=0;
}


void func_206(){
Global_23251.f_6=1;
}


void func_207(){
Global_1574747=1;
StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}


void func_208(bool bParam0, int iParam1){
MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
switch (bParam0){
case 5:
if(iParam1 > -1){
Global_1654054.f_170[iParam1]=1;
}
break;
}}


void func_209(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_210(){
func_29(&uLocal_143);
func_30();
}

int func_211(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_217()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_216()){
return 1;
}
if(func_215(159)){
if(!func_214()){
return 1;
}}
if(func_215(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_212() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_212())==0){
return 1;
}}
return 0;
}

int func_212(){
switch (func_94()){
case 0:
return func_213();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_213(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_214(){
return Global_2683883.f_698;
}

int func_215(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_216(){
return Global_2694576;
}


bool func_217(){
return Global_2683883.f_693;
}


void func_218(){
wait(0);
}


void func_219(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3, 3)){
func_184();
}
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 3);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_3), 3);
}}


void func_220(struct<21> Param0){
func_224(4, Param0);
if(!func_223(0, -1, 1)){
func_210();
}
func_222();
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_141, 78, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_142, 9, 0);
if(!func_221()){
func_210();
}}

int func_221(){
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
if(func_217()){
return 0;
}
if(func_215(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}


void func_222(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
Local_141.f_2[iVar0]=-1;
iVar0++;
}}

int func_223(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_30();
}else{
return 0;
}}
if(!func_96(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_30();
}else{
return 0;
}}
if(func_217()){
if(!bParam2){
func_30();
}else{
return 0;
}}
if(func_215(157)){
if(!bParam2){
func_30();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_30();
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
func_30();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_30();
}else{
return 0;
}}
return 1;
}


void func_224(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_30();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}